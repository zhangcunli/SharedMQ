# 进程间内存消息队列

> 带通知机制的、基于共享内存的进程间消息队列，供进程间消息传递

### 特性
- 支持单消费者进程与单生产者进程
- 支持多消费者进程与多生产者进程
- 支持单消费者线程与单生产者线程（但是不如直接用内存数据结构，不推荐使用）
- 不支持多生产者线程与多消费者线程

### 性能测试
#### 单生产者进程、单消费者进程

> 100W data handler, each data length 1000B

| test id | push | pop | each delay |
| :-----: |:-----:|:-----:|:-----:|
| 1 |3480ms|3480ms|0.011ms|
| 2 |3598ms|3598ms|0.009ms|
|3|3276ms|3276ms|0.007ms|
|4|3602ms|3602ms|0.008ms|
|5|3684ms|3684ms|0.008ms|
|6|2556ms|2556ms|0.006ms|
|7|2878ms|2878ms|0.009ms|
|8|3611ms|3611ms|0.008ms|
|9|3642ms|3642ms|0.009ms|
|10|2990ms|2990ms|0.006ms|


