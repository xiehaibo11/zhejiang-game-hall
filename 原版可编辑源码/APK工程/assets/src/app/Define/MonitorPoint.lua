--------------------------------------------
-- Copyright © 2018 luaide-lite
-- File: MonitorPoint.lua
-- Author: 郭鹏飞
-- Date: 2019-10-24 02:50:28
-- Desc: 数据埋点
--------------------------------------------
---@class MonitorPoint
local MonitorPoint = {}

MonitorPoint.TYPE_PHONE_LOGIN = 4               --获取通过手机登录的数量
MonitorPoint.TYPE_WECHAT_LOGIN = 5              --获取通过微信登录的数量
MonitorPoint.TYPE_GUID_TIAOGUO = 6              --休闲场新手指引-“跳过”按钮点击次数
MonitorPoint.TYPE_GUID_LOBBY = 7                --休闲场新手指引-“休闲大厅”按钮点击次数
MonitorPoint.TYPE_ACTIVITY_CLOSE = 8            --活动界面“关闭”按钮点击次数
MonitorPoint.TYPE_ACTIVITY_SIGN_IN = 9          --活动界面“签到”按钮点击次数
MonitorPoint.TYPE_GAME_DATA = 10                --用户进入各游戏的数据统计
MonitorPoint.TYPE_LOBBY_HEAD = 11               --大厅界面-信息头像点击次数
MonitorPoint.TYPE_PERSON_CENTER_IDENTIFY = 12           --实名认证点击次数
MonitorPoint.TYPE_PERSON_CENTER_CHANGE_ACCOUNT = 13     --切换账号点击次数
MonitorPoint.TYPE_PERSON_CENTER_CHANGE_AREA = 14        --切换地区点击次数
MonitorPoint.TYPE_PERSON_CENTER_CARD_ADD = 15           --房卡“+”号点击次数(个人中心界面)
MonitorPoint.TYPE_PERSON_CENTER_DIAMOND_ADD = 16        --房卡“+”号点击次数(个人中心界面)
MonitorPoint.TYPE_LOBBY_NITIWOGAI = 17                  --大厅界面-你提我改点击次数
MonitorPoint.TYPE_LOBBY_SHOP = 20                       --大厅界面-商场按钮点击次数
MonitorPoint.TYPE_LOBBY_AC = 21                         --大厅界面-活动按钮点击次数
MonitorPoint.TYPE_LOBBY_RULE = 22                       --大厅界面-规则按钮点击次数
MonitorPoint.TYPE_LOBBY_NOTIFY = 23                     --大厅界面-公告按钮点击次数
MonitorPoint.TYPE_LOBBY_RESULT = 24                     --大厅界面-战绩按钮点击次数
MonitorPoint.TYPE_LOBBY_MORE = 25                       --大厅界面-更多按钮点击次数
MonitorPoint.TYPE_LOBBY_FANGDUBO = 26
MonitorPoint.TYPE_LOBBY_JIANKANGXUZHI = 27              --更多-健康须知按钮点击次数
MonitorPoint.TYPE_MORE_RULE = 28                        --更多-规则按钮点击次数
MonitorPoint.TYPE_MORE_SET = 29                         --更多-设置按钮点击次数
MonitorPoint.TYPE_LOBBY_CREATE = 30                     --大厅界面-创建房间按钮点击次数
MonitorPoint.TYPE_LOBBY_JION_IN = 31                    --大厅界面-加入房间按钮点击次数
MonitorPoint.TYPE_LOBBY_PUB = 32                        --大厅界面-比赛场按钮点击次数
MonitorPoint.TYPE_CREATE_CREATE_BTN = 33                --创建房间界面-创建房间按钮点击次数
MonitorPoint.TYPE_PUB_CREATE_BTN = 34                   --比赛场界面-创建比赛场按钮点击次数
MonitorPoint.TYPE_PUB_JOIN_BTN = 35                     --比赛场界面-进入按钮点击次数 
MonitorPoint.TYPE_PUB_CREATE_TABLE = 36                 --比赛场界面-”点击创建桌子“点击次数 
MonitorPoint.TYPE_GAME_SET = 37                         --游戏界面-设置按钮点击记录
MonitorPoint.TYPE_GAME_YUYIN = 38                       --游戏界面-语音按钮点击记录
MonitorPoint.TYPE_GAME_LIAOTIAN = 39                    --游戏界面-聊天按钮点击记录
MonitorPoint.TYPE_GAME_CEJU = 40                        --游戏界面-测距按钮点击记录
MonitorPoint.TYPE_GAME_RULE = 41                        --游戏界面-规则按钮点击记录
MonitorPoint.TYPE_GAME_INVITE = 42                      --游戏界面-邀请按钮点击记录
MonitorPoint.TYPE_GAME_JIESAN = 43                      --游戏界面-解散按钮点击记录
MonitorPoint.TYPE_GAME_CONTINUE = 44                    --游戏界面-继续游戏(续桌)按钮点击记录
MonitorPoint.TYPE_GAME_COPY_ROOMID = 46                 --游戏界面-复制房间号按钮点击记录

MonitorPoint.TYPE_TEAHOUSE_LIST_SETTING = 47            --比赛场列表选择界面-设置按钮点击次数
MonitorPoint.TYPE_TEAHOUSE_SETUP_PLAYMODE = 48          --比赛场设置界面-固定玩法添加按钮点击次数
MonitorPoint.TYPE_TEAHOUSE_SETUP_ADD_PLAYMODE = 49      --固定玩法设置界面-添加固定玩法点击次数
MonitorPoint.TYPE_TEAHOUSE_SETUP_DAILY_COST = 50        --比赛场设置界面-每日消耗上限点击次数
MonitorPoint.TYPE_TEAHOUSE_SETUP_PAYMODE = 51           --比赛场设置界面-比赛场模式修改次数
MonitorPoint.TYPE_TEAHOUSE_SETUP_DISMISS = 52           --比赛场设置界面-解散比赛场按钮点击次数
MonitorPoint.TYPE_TEAHOUSE_SETUP_REMARKS = 53           --比赛场设置界面-比赛场备注点击次数
MonitorPoint.TYPE_TEAHOUSE_COPY_PWD = 54                --比赛场主界面-口令复制点击次数
MonitorPoint.TYPE_TEAHOUSE_PAUSE = 55                   --比赛场主界面-打烊按钮点击次数
MonitorPoint.TYPE_TEAHOUSE_MEMBER = 56                  --比赛场主界面-成员管理按钮点击次数
MonitorPoint.TYPE_TEAHOUSE_BILL = 57                    --比赛场主界面-战绩查看按钮点击次数
MonitorPoint.TYPE_TEAHOUSE_BILL_MANAGE = 58             --比赛场主界面-战绩管理按钮点击次数
MonitorPoint.TYPE_TEAHOUSE_REFRESH = 59                 --比赛场主界面-刷新按钮点击次数
MonitorPoint.TYPE_TEAHOUSE_RECHARGE = 60                --比赛场主界面-充值按钮点击次数
MonitorPoint.TYPE_TEAHOUSE_SETTING = 61                 --比赛场主界面-设置按钮点击次数
MonitorPoint.TYPE_TEAHOUSE_AGENT = 62                   --比赛场主界面-我要做领队按钮点击次数
MonitorPoint.TYPE_TEAHOUSE_FILTER = 63                  --比赛场主界面-玩法筛选按钮点击次数
MonitorPoint.TYPE_TEAHOUSE_SHARE = 64                   --比赛场主界面-分享按钮点击次数
MonitorPoint.TYPE_TEAHOUSE_DESK = 65                    --比赛场主界面-桌面规则按钮点击次数
MonitorPoint.TYPE_TEAHOUSE_ONLINE = 66                  --比赛场主界面-在线按钮点击次数
MonitorPoint.TYPE_TEAHOUSE_RANK = 67                    --比赛场主界面-排行榜按钮点击次数

MonitorPoint.TYPE_GOLD_FULI = 68                        --金币场-大厅福利
MonitorPoint.TYPE_GOLD_FULI_REWARD = 69                 --金币场-领取
MonitorPoint.TYPE_GOLD_FULI_MORE = 70                   --金币场-更多金币
MonitorPoint.TYPE_GOLD_BACKLOBBY = 71                   --金币场-返回游戏大厅
MonitorPoint.TYPE_GOLD_BACK = 72                        --金币场-游戏内返回游戏
MonitorPoint.TYPE_GOLD_BEGIN_MATCH = 73                 --金币场-开始匹配
MonitorPoint.TYPE_GAME_CHECK_TABLE = 74                 --游戏界面-查看牌桌
MonitorPoint.TYPE_GAME_NEXT_ROUND = 75                  --游戏界面-下一局

MonitorPoint.TYPE_GAME_SHUFFLE = 76                     --小结束界面-洗牌

MonitorPoint.TYPE_LOBBY_SHARE_DOWNLOAD_ADDRESS = 80              --大厅界面分享下载地址埋点（一天只统计一次）

MonitorPoint.TYPE_LOBBY_BREAK_GIFT_BTN = 81						--大厅左侧破产礼包按钮点击事件
MonitorPoint.TYPE_LOBBY_BUY_BREAK_GIFT_BTN = 82							--破产礼包购买按钮点击事件
MonitorPoint.TYPE_LOBBY_BUY_BREAK_GIFT_SUC = 83							--破产礼包购买成功

MonitorPoint.TYPE_LOBBY_DISCOUNT_GIFT_BTN = 90				    --大厅右侧折扣礼包按钮点击事件

return MonitorPoint
