local TKDataKey = {}
local KW_CONFIG_GAME_ID_LIST = {
    40080,
    40066,
    40138,
    40134,
}
    --主界面菜单按钮点击
    TKDataKey.KW_TK_LOBBY_MENU_BTN                        = 90001
    
    
    --开始按钮点击
    TKDataKey.KW_TK_GAME_START_BTN                        = 90002
    
    --抄底按钮点击
    TKDataKey.KW_TK_GAME_CHAODI_BTN                       = 90003
    
    
    --排序按钮点击
    TKDataKey.KW_TK_GAME_SORT_BTN                         = 90004
    
    --换桌按钮点击
    TKDataKey.KW_TK_GAME_HUAN_ZHUO_BTN                    = 90005
    
    --菜单按钮点击
    TKDataKey.KW_TK_GAME_MENU_BTN                         = 90006
    
    --返回大厅按钮点击
    TKDataKey.KW_TK_GAME_EXIT_BTN                         = 90007
    
    --设置按钮点击
    TKDataKey.KW_TK_GAME_SET_BTN                          = 90008
    
    --托管
    TKDataKey.KW_TK_GAME_TRUST_BTN                          = 90009
    
    --“热门”“调侃”聊天语开始 + EVENTID
    TKDataKey.KW_TK_TALK_EVENT_START                      = 90100
    
    --“调侃”聊天语
    TKDataKey.KW_TK_TALK_EVENT_END                        = 90200
    
    
    --点击其他玩家头像
    TKDataKey.KW_TK_GAME_OTHER_PALYER_HEAD                = 90011
    
    
    --方言的使用 关闭次数
    TKDataKey.KW_TK_CLOSE_DIALECT_BTN                       = 90012
    
    
    --玩家调整音效
    TKDataKey.KW_TK_SET_SOUND_SLIDER                      = 90013
    
    --玩家调整音乐
    TKDataKey.KW_TK_SET_MUSIC_SLIDER                      = 90014
    
    --主界面设置按钮点击
    TKDataKey.KW_TK_LOBBY_SET_BTN                         = 90015
    
    --ui渲染错误
    TKDataKey.KW_TK_UI_LOCADTEXTURE_FALSE                 = 90017
    
    --游戏区破产
    TKDataKey.KW_TK_GAMEAREA_PLAYER_BROKE =
    {
        [KW_CONFIG_GAME_ID_LIST[1]] = 90018,
        [KW_CONFIG_GAME_ID_LIST[2]] = 90019,
    }                    
    
    --计算到按下开始的时间
    TKDataKey.KW_TK_PLAYER_START_AFTER_WINLOST_START_ID = 90020
    TKDataKey.KW_TK_ENUM_TIME_PLAYER_START_AFTER_WINLOST =
    {
        3,
        5,
        10,
        60,  
    }        
    TKDataKey.KW_TK_PLAYER_START_AFTER_WINLOST_END_ID = 90029
    
    TKDataKey.KW_TK_ENUM_TIME_SWAP_SEAT_AFTER_WINLOST =
    {
        3,
        5,
        10,  
    }   
    
    --计算后换桌点击
    TKDataKey.KW_TK_SWAP_SEAT_AFTER_WINLOST_START_QIAN_ID = 90030     
    TKDataKey.KW_TK_SWAP_SEAT_AFTER_WINLOST_END_QIAN_ID = 90039
    TKDataKey.KW_TK_SWAP_SEAT_AFTER_WINLOST_START_BAI_ID = 90040     
    TKDataKey.KW_TK_SWAP_SEAT_AFTER_WINLOST_END_BAI_ID = 90049
    
    TKDataKey.KW_TK_SWAP_SEAT_AFTER_WINLOST_START_ID =
    {
        [KW_CONFIG_GAME_ID_LIST[1]] = TKDataKey.KW_TK_SWAP_SEAT_AFTER_WINLOST_START_QIAN_ID,
        [KW_CONFIG_GAME_ID_LIST[2]] = TKDataKey.KW_TK_SWAP_SEAT_AFTER_WINLOST_START_BAI_ID,
    }   
    
    
    --快捷商城弹出次数   (区分房间)
    TKDataKey.KW_TK_QUICK_STORE_START_QIAN_ID = 90051
    TKDataKey.KW_TK_QUICK_STORE_END_QIAN_ID = 90060
    TKDataKey.KW_TK_QUICK_STORE_START_BAI_ID = 90061
    TKDataKey.KW_TK_QUICK_STORE_END_BAI_ID = 90070
    TKDataKey.KW_TK_QUICK_STORE_START_HANG_ID = 90071
    TKDataKey.KW_TK_QUICK_STORE_END_HANG_ID = 90080
    TKDataKey.KW_TK_QUICK_STORE =
    {
            [KW_CONFIG_GAME_ID_LIST[1]] = TKDataKey.KW_TK_QUICK_STORE_START_BAI_ID,
            [KW_CONFIG_GAME_ID_LIST[2]] = TKDataKey.KW_TK_QUICK_STORE_START_QIAN_ID,
            [KW_CONFIG_GAME_ID_LIST[3]] = TKDataKey.KW_TK_QUICK_STORE_START_BAI_ID,
            [KW_CONFIG_GAME_ID_LIST[4]] = TKDataKey.KW_TK_QUICK_STORE_START_HANG_ID,
    }
    
    --快捷商城 点击充值按钮次数 
    TKDataKey.KW_TK_CLICK_RECHARGE_QUICK_STORE_QIAN = 90071
    TKDataKey.KW_TK_CLICK_RECHARGE_QUICK_STORE_BAI = 90072
    TKDataKey.KW_TK_CLICK_RECHARGE_QUICK_STORE = 
        {
            [KW_CONFIG_GAME_ID_LIST[1]] = TKDataKey.KW_TK_CLICK_RECHARGE_QUICK_STORE_BAI,
            [KW_CONFIG_GAME_ID_LIST[2]] = TKDataKey.KW_TK_CLICK_RECHARGE_QUICK_STORE_QIAN,
        }
    
    
    ----进入房间时间
    --TKDataKey.KW_TK_ENTER_ROOM_START_QIAN_ID = 90071
    --TKDataKey.KW_TK_ENTER_ROOM_END_QIAN_ID = 90080
    --TKDataKey.KW_TK_ENTER_ROOM_START_BAI_ID = 90081
    --TKDataKey.KW_TK_ENTER_ROOM_END_BAI_ID = 90090
    --TKDataKey.KW_TK_ENTER_ROOM =
    --{
    --    [KW_CONFIG_GAME_ID_LIST[1]] = TKDataKey.KW_TK_ENTER_ROOM_START_QIAN_ID,
    --    [KW_CONFIG_GAME_ID_LIST[2]] = TKDataKey.KW_TK_ENTER_ROOM_START_BAI_ID,
    --}
    --KW_ENUM_TIME_ENTER_ROOM =
    --    {
    --        3,
    --        5,
    --        10,  
    --    }   
    --
    
    --进入房间失败
    TKDataKey.KW_TK_ENTER_ROOM_FAILD_QIAN_START = 90080
    TKDataKey.KW_TK_ENTER_ROOM_FAILD_QIAN_END = 90089
    TKDataKey.KW_TK_ENTER_ROOM_FAILD_BAI_START = 90090
    TKDataKey.KW_TK_ENTER_ROOM_FAILD_BAI_END = 90099
    
    
    --TODO  待定
    TKDataKey.KW_TK_ENTER_ROOM_FAILD_BISAI_START = 99990
    TKDataKey.KW_TK_ENTER_ROOM_FAILD_BISAI_END = 99990
    TKDataKey.KW_TK_ENTER_ROOM_FAILD_JINGDIAN_START = 99990
    TKDataKey.KW_TK_ENTER_ROOM_FAILD_JINGDIAN_END = 99990
    TKDataKey.KW_TK_ENTER_ROOM_FAILD =
    {
            [KW_CONFIG_GAME_ID_LIST[1]] = TKDataKey.KW_TK_ENTER_ROOM_FAILD_BAI_START,
            [KW_CONFIG_GAME_ID_LIST[2]] = TKDataKey.KW_TK_ENTER_ROOM_FAILD_QIAN_START,
            [KW_CONFIG_GAME_ID_LIST[3]] = TKDataKey.KW_TK_ENTER_ROOM_FAILD_BISAI_START,
            [KW_CONFIG_GAME_ID_LIST[4]] = TKDataKey.KW_TK_ENTER_ROOM_FAILD_JINGDIAN_START,
    }
    
    ---------------------------------------------
    
    --切换账号按钮
    TKDataKey.KW_TK_CLICK_CHANGEID = 90301
    
    
    --点击个人中心的头像
    TKDataKey.KW_TK_CLICK_MYCENTER_LOBBY = 90302
    TKDataKey.KW_TK_CLICK_MYCENTER_QIAN = 90303
    TKDataKey.KW_TK_CLICK_MYCENTER_BAI = 90304
    TKDataKey.KW_TK_CLICK_MYCENTER = 
    {
            [KW_CONFIG_GAME_ID_LIST[1]] = TKDataKey.KW_TK_CLICK_MYCENTER_BAI,
            [KW_CONFIG_GAME_ID_LIST[2]] = TKDataKey.KW_TK_CLICK_MYCENTER_QIAN,
    }
    
    --点击个人中心安全绑定
    TKDataKey.KW_TK_MYCENTER_BIND_MOBIE = 90305
    --点击个人中心实名认证
    TKDataKey.KW_TK_MTCENTER_DEFEND = 90306
    
    
    --点击反馈面板
    TKDataKey.KW_TK_CLICK_FEEDBACK_LOBBY = 90307
    TKDataKey.KW_TK_CLICK_FEEDBACK_QIAN = 90308
    TKDataKey.KW_TK_CLICK_FEEDBACK_BAI = 90309
    TKDataKey.KW_TK_CLICK_FEEDBACK = 
    {
            [KW_CONFIG_GAME_ID_LIST[1]] = TKDataKey.KW_TK_CLICK_FEEDBACK_BAI,
            [KW_CONFIG_GAME_ID_LIST[2]] = TKDataKey.KW_TK_CLICK_FEEDBACK_QIAN,
    }
    
    
    --大厅角色手中图标
    TKDataKey.KW_TK_HAND_ICON_LOBBY = 90310
    
    --大厅活动按钮
    TKDataKey.KW_TK_CLICK_ACTIVITY_LOBBY = 90311
    TKDataKey.KW_TK_CLICK_ACTIVITY_QIAN = 90312
    TKDataKey.KW_TK_CLICK_ACTIVITY_BAI = 90313
    TKDataKey.KW_TK_CLICK_ACTIVITY =
    {
            [KW_CONFIG_GAME_ID_LIST[1]] = TKDataKey.KW_TK_CLICK_ACTIVITY_BAI,
            [KW_CONFIG_GAME_ID_LIST[2]] = TKDataKey.KW_TK_CLICK_ACTIVITY_QIAN,
    } 
    
    --帮助按钮
    TKDataKey.KW_TK_HELP_LOBBY = 90314
    
    --快速开始
    TKDataKey.KW_TK_CLICK_QUICK_START_QIAN = 90315
    TKDataKey.KW_TK_CLICK_QUICK_START_BAI = 90316
    TKDataKey.KW_TK_CLICK_QUICK_START =
    {
            [KW_CONFIG_GAME_ID_LIST[1]] = TKDataKey.KW_TK_CLICK_QUICK_START_BAI,
            [KW_CONFIG_GAME_ID_LIST[2]] = TKDataKey.KW_TK_CLICK_QUICK_START_QIAN,
    }
    
    --牌局任务千变 百变 各个场次打开
    TKDataKey.KW_TK_TABLE_TASK_OPEN_START_QIAN = 90320
    TKDataKey.KW_TK_TABLE_TASK_OPEN_END_QIAN = 90329
    TKDataKey.KW_TK_TABLE_TASK_OPEN_START_BAI = 90330
    TKDataKey.KW_TK_TABLE_TASK_OPEN_END_BAI = 90339
    TKDataKey.KW_TK_TABLE_TASK_OPEN = 
    {
            [KW_CONFIG_GAME_ID_LIST[1]] = TKDataKey.KW_TK_TABLE_TASK_OPEN_START_BAI,
            [KW_CONFIG_GAME_ID_LIST[2]] = TKDataKey.KW_TK_TABLE_TASK_OPEN_START_QIAN,
    }
    
    --牌局任务千变 百变 各个场次关闭
    TKDataKey.KW_TK_TABLE_TASK_CLOSE_START_QIAN = 90340
    TKDataKey.KW_TK_TABLE_TASK_CLOSE_END_QIAN = 90349
    TKDataKey.KW_TK_TABLE_TASK_CLOSE_START_BAI = 90350
    TKDataKey.KW_TK_TABLE_TASK_CLOSE_END_BAI = 90359
    TKDataKey.KW_TK_TABLE_TASK_CLOSE =
    {
            [KW_CONFIG_GAME_ID_LIST[1]] = TKDataKey.KW_TK_TABLE_TASK_CLOSE_START_BAI,
            [KW_CONFIG_GAME_ID_LIST[2]] = TKDataKey.KW_TK_TABLE_TASK_CLOSE_START_QIAN,
    }
    
    
    --宝箱千变 百变 各个场次
    TKDataKey.KW_TK_TIME_BOX_OPEN_START_QIAN= 90360
    TKDataKey.KW_TK_TIME_BOX_OPEN_END_QIAN= 90369
    TKDataKey.KW_TK_TIME_BOX_OPEN_START_BAI= 90370
    TKDataKey.KW_TK_TIME_BOX_OPEN_END_BAI= 90379
    TKDataKey.KW_TK_TIME_BOX_OPEN = 
    {
            [KW_CONFIG_GAME_ID_LIST[1]] = TKDataKey.KW_TK_TIME_BOX_OPEN_START_BAI,
            [KW_CONFIG_GAME_ID_LIST[2]] = TKDataKey.KW_TK_TIME_BOX_OPEN_START_QIAN,
    }
    
    
    --房间掉线次数
    TKDataKey.KW_TK_WIRE_BREAK_QIAN_START = 90380
    TKDataKey.KW_TK_WIRE_BREAK_QIAN_END = 90389
    TKDataKey.KW_TK_WIRE_BREAK_BAI_START = 90390
    TKDataKey.KW_TK_WIRE_BREAK_BAI_END = 90399
    TKDataKey.KW_TK_WIRE_BREAK_HANG_START = 90400
    TKDataKey.KW_TK_WIRE_BREAK_HANG_END = 90400
    TKDataKey.KW_TK_WIRE_BREAK =
    {
            [KW_CONFIG_GAME_ID_LIST[1]] = TKDataKey.KW_TK_WIRE_BREAK_BAI_START,
            [KW_CONFIG_GAME_ID_LIST[2]] = TKDataKey.KW_TK_WIRE_BREAK_QIAN_START,
            [KW_CONFIG_GAME_ID_LIST[3]] = TKDataKey.KW_TK_WIRE_BREAK_QIAN_START,
            [KW_CONFIG_GAME_ID_LIST[4]] = TKDataKey.KW_TK_WIRE_BREAK_HANG_START,
    }
        
        
    
    --商城点击次数 && 千变百变商城物品id
    TKDataKey.KW_TK_CLICK_STORE_QIANBIAN = 90400
    TKDataKey.KW_TK_CLICK_STORE_ITEM_START_QIAN = 90401
    TKDataKey.KW_TK_CLICK_STORE_ITEM_END_QIAN = 90430
    
    TKDataKey.KW_TK_CLICK_STORE_BAIBIAN = 90450
    TKDataKey.KW_TK_CLICK_STORE_ITEM_START_BAI = 90451
    TKDataKey.KW_TK_CLICK_STORE_ITEM_END_BAI = 90480
    
    TKDataKey.KW_TK_CLICK_STORE_HANGPAI = 90500
    TKDataKey.KW_TK_CLICK_STORE_ITEM_START_HANGPAI = 90501
    TKDataKey.KW_TK_CLICK_STORE_ITEM_END_HANGPAI = 90530
    --点击商城
    TKDataKey.KW_TK_CLICK_STORE = 
    {
            [KW_CONFIG_GAME_ID_LIST[1]] = TKDataKey.KW_TK_CLICK_STORE_BAIBIAN,
            [KW_CONFIG_GAME_ID_LIST[2]] = TKDataKey.KW_TK_CLICK_STORE_QIANBIAN,
    }
    --各个商品
    TKDataKey.KW_TK_CLICK_STORE_ITEM = 
    {
            [KW_CONFIG_GAME_ID_LIST[1]] = TKDataKey.KW_TK_CLICK_STORE_ITEM_START_BAI,
            [KW_CONFIG_GAME_ID_LIST[2]] = TKDataKey.KW_TK_CLICK_STORE_ITEM_START_QIAN,
            [KW_CONFIG_GAME_ID_LIST[3]] = TKDataKey.KW_TK_CLICK_STORE_ITEM_START_QIAN,
            [KW_CONFIG_GAME_ID_LIST[4]] = TKDataKey.KW_TK_CLICK_STORE_ITEM_START_HANGPAI,
    }
    
    --退出弹框的TK
    TKDataKey.KW_TK_POP_QUIT = 90481
    TKDataKey.KW_TK_CLICK_QUIT_BOX = 90482
    TKDataKey.KW_TK_CLICK_QUIT_TASK = 90483
    TKDataKey.KW_TK_CLICK_QUIT_ACTIVITY = 90484
    TKDataKey.KW_TK_CLICK_QUIT_NEXT = 90485
    TKDataKey.KW_TK_CLICK_QUIT_GET_AWARD = 90486

return TKDataKey  >-  