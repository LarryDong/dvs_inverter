# dvs_inverter

Description: Invert the polarity of events from a DVS stream, a simple demo. To use this , you need to first download **rpg_dvs_ros** and dataset **DAVIS 240C Datasets**: 

将DVS传来的事件极性进行翻转显示。为此，需要先下载：

1. rpg_dvs_ros. [https://github.com/uzh-rpg/rpg_dvs_ros](https://github.com/uzh-rpg/rpg_dvs_ros)
2. DAVIS 240C Datasets [http://rpg.ifi.uzh.ch/davis_data.html](http://rpg.ifi.uzh.ch/davis_data.html)

## Usage 使用

First, go to your catkin workspace

进入你的ros工作空间

```bash
cd ~/catkin_ws/src
```

Download this code

下载本程序

```bash
git clone git@github.com:LarryDong/dvs_inverter.git
```

Build this code in root directory of workspace.

编译

```bash
cd ~/catkin_ws
catkin build
```

source the workspace, to make roslaunch work

source工作空间

```bash
source ~/catkin_ws/devel/setup.bash
```

Start ros, and the dataset, your xxx.bagfile, then launch this package

启动ros，并运行数据集，之后启动本实例

```bash
roscore
rosbag play <your-dataset-path>/<your-bag-name>.bag
roslaunch test inverter.launch
```

## Results 运行结果

In two separate windows, select "/evetns_ori" and "/events_ivt", then you will see original and inverted results.

在窗口中分别选择"/events_ori"与"/events_ivt"

![Runing inverter](https://github.com/LarryDong/dvs_inverter/blob/master/.pictures/graph.png)

You can also use rqt to see the graph

使用rqt指令可查看消息传递关系

![Graph](https://github.com/LarryDong/dvs_inverter/blob/master/.pictures/graph.png)

![image-20200301130534831](C:\Users\Lenovo\AppData\Roaming\Typora\typora-user-images\image-20200301130534831.png)

## Comment

This is a simple demo to record and show how to subscribe event stream from rosbag, and how to process the **dvs_msgs**.
