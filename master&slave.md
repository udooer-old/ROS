# ROS master & slave setup
## Master:
執行 roscore 的地方，選擇效能較佳的主電腦執行
## Slave: 
與 Master 共用節點，透過內網與 Master 溝通。
## Implement:
這裡需要設定兩個環境變數，分別是
* ROS_IP: 表明身分，讓community裡的人知道是哪一台電腦。
* ROS_MASTER_URI: 宣告 Mater 電腦是哪一台，以及用哪一個port溝通。

有興趣者可執行
    
    printenv | grep ROS
    
還有其他與ROS相關的環境變數
### Step1:
先確認各個控制電腦所分到的ip位址，假設 Master IP 為192.168.0.1，slave IP 為192.168.0.2。
### Step2:
根據 Master & Slave 編寫 ~/.bashrc。
* Master

    export ROS_IP=192.168.0.1
    
    export ROS_MASTER_URI=http://192.168.0.1:11311
* Slave

    export ROS_IP=192.168.0.2
    
    export ROS_MASTER_URI=http://192.168.0.1:11311
### Step3:
執行roscore確定mater & slave 設定完成。
