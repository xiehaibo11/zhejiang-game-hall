-- 全局枚举值定义,直接挂载在XH下，所有场景均需使用到的枚举值才放置到该文件下

local GlobalDefine = {}

GlobalDefine.KW_CONFIG_LOGIC_TIME_OUT = 15

-- UI组件类型
GlobalDefine.UI_TYPE = {
    BUTTON          = 1,
    IMAGE           = 2,
    LAYOUT          = 3,
    LAYER           = 4,
    TEXT            = 5,
    CHECKBOX        = 6,
    TEXTFIELD       = 7,
    NODE            = 8,
    LISTVIEW        = 9,
    TABLEVIEW       = 10,
    SCROLLVIEW      = 11,
    REMOTEIMAGE     = 12,
    REMOTEIMAGECLIP = 13,
    IMAGE_TOBUTTON  = 14,
    PANEL_TOBUTTON  = 15,
    PACKAGEVIEW     = 16
}

-- 场景类别
GlobalDefine.SCENE_TAG = {
    NONE            = 0,
    LOGIN           = 1, --登录场景
    LOBBY           = 2, --大厅场景
    GAME            = 3, --游戏场景
    TEAHOUSE        = 4, --比赛场场景
    -- GAME_DOUBLEKOU  = 5,
    -- GAME_HONGSHI    = 6,
    -- GAME_LANDLORDS  = 7,
    -- GAME_MAHJONG    = 8,
    -- GAME_SHUTCARDS  = 9,
}

GlobalDefine.LOBBY_TYPE = {
    YUEJU = 1,
    XIUXIAN = 2,
}

GlobalDefine.TIP_LAYER_TYPE = {
    OK = 1,
    OK_NO_CLOSE = 2,
    OK_CANCEL = 3,
    OK_CANCEL_NO_CLOSE = 4,
    CLOSE_ONLY = 5,
}

GlobalDefine.ZORDER = {
    WINDOW = 999,
    SCENE_POPNODE = 9998,
    DIALOG = 9999,
    TIPLAYER = 10000,
    ACT_POPLAYER = 10000,
    TOAST = 10001,
    TOPLAYER = 20000,
    LOADING = 90000,
}

-- 日志输出级别
GlobalDefine.DEBUG_TYPE = {
    DEBUG = 0,
    INFO = 1,
    ALLINFO = 2,
}

-- 区号
GlobalDefine.LOBBY_ID = {
    NONE         = 0,
    LISHUI       = 900038,
    WENZHOU      = 900037,
    SHUKE        = 900017,
    HANGMAQUAN   = 900021,
    TAIZHOU      = 900023,
    ZHOUSHAN     = 900043,
    HUZHOU       = 900008,
    QUZHOU       = 900003,
    RUIAN        = 900036,
    JINHUA       = 900020,
    BAOBAO       = 900025,
    YUEQING      = 900031,
    SHAOXING     = 900007,
    QINGTIAN     = 900039,
    NINGBO       = 900006,
    JIAXING      = 40165,
    YUYAO        = 900029,
    SHAOXING3D   = 900046,
}

-- AREAID
GlobalDefine.AREA_ID = {
    LISHUI       = 7128,
    WENZHOU      = 7127,
    SHUKE        = 7105,
    HANGMAQUAN   = 7111,
    TAIZHOU      = 7109,
    ZHOUSHAN     = 7133,
    HUZHOU       = 7101,
    QUZHOU       = 7103,
    RUIAN        = 7126,
    JINHUA       = 7108,
    BAOBAO       = 7115,
    YUEQING      = 7121,
    SHAOXING     = 7104,
    QINGTIAN     = 7129,
    NINGBO       = 7102,
    JIAXING      = 7107,
    YUYAO        = 7119,
    SHAOXING3D   = 7136,
}

GlobalDefine.SRS_TYPE = {
    SRS = 0,
    SRS33 = 1
}

GlobalDefine.SRS_LINK_STATE = {
    LINK_STATE_NONE = -1, --SRS未连接
    LINK_STATE_SUCCESS = 0, --SRS连接成功
    LINK_STATE_FAILURE = 1, --SRS连接超时
    LINK_STATE_CLOSE = 2, --SRS连接关闭
}

GlobalDefine.LOGIN_FAIL_TYPE = {
    LOGIN_FAIL = 0, -- 请检查网络
    PLAYERDATA_FAIL = 1, -- 登录失败
    NEED_EAUTH_LOGIN = 2       -- 需要验证密保，安全卡等
}

GlobalDefine.ROOM_MODE = {
    PC = 1,
    MOBILE = 2,
    BOXROOM = 3,
    MATCHROOM = 4,
}

GlobalDefine.ROOM_TYPE = {
    GOLD_ROOM = 4,
    NEW_GOLD_ROOM = 200,
    BOX_ROOM = 10,
    TeaHouseRoom = 13,
    DISPATCH_QUEUE = 201,
    GOLD_ROOM_BW = 220, -- 八王互通匹配模式
}

GlobalDefine.SDK_LOGIN_TYPE = {
    SDK_UNKNOWN = 0,    -- 未知
    SDK_WX = 1,         --微信登录
    SDK_GY = 2,         --个验登录
    SDK_APPLE = 3,      --苹果登录
    SDK_PHONE = 4,      --手机号登录(本身不是sdk登陆类型)
}

GlobalDefine.GOLD_LEVEL_DEFAULT_NAME = {
    [1] = "新手场",
    [2] = "进阶场",
    [3] = "高级场",
    [4] = "大师场",
    [5] = "土豪场"
}

-- AREAIDTONAME
GlobalDefine.AREA_ID_WITH_NAME = {
    [7128] = "丽水",
    [7127] = "温州(茶)",
    [7105] = "温州(熟)",
    [7111] = "杭州",
    [7109] = "台州",
    [7133] = "舟山",
    [7101] = "湖州",
    [7103] = "衢州",
    [7126] = "瑞安",
    [7108] = "金华",
    [7115] = "杭州(宝宝)",
    [7121] = "乐清",
    [7104] = "嵊州(越)",
    [7129] = "青田",
    [7102] = "宁波",
    [7107] = "嘉兴",
    [7119] = "余姚",
    [7136] = "绍兴麻将",
}

GlobalDefine.PlayerBillTab = {
    battle = "battle",
    gold = "gold"
}

GlobalDefine.XG_CARD_STYLE = 10000

GlobalDefine.XGSJ_PROP_ID = {
    TABLE = 150781,
    MAH = 150782,
    MAH_OUT = 150783,
    MAH_HU = 150784,
    HEAD_FRAME = 150785,
    CHAT = 150786,
    POKER = 150787,
    CLOCK = 150788
}

GlobalDefine.XGSJ_BUNDLE_INFO = {
    [GlobalDefine.XGSJ_PROP_ID.TABLE] = {
        mah = {
            aniPath = "animation/Common/xiaguangshengjing/mahTable/",
            filename = "XGSJTable",
            animationCX = "Start",
            animationLoop = "Loop",
            scaleFunc = function() 
                if display.width / display.height > 1.5 then
                    return display.width / display.height / 1.2
                else
                    return display.width / display.height
                end
            end,
            showEnterDelay = function(isShowEnter) return isShowEnter and 2 or 0.1 end,
            bgPath = "animation/Common/xiaguangshengjing/mahTable/zhuodi.png"
        },
        mah3D = {
            aniPath = "animation/Common/xiaguangshengjing/mahTable/",
            filename = "XGSJTable",
            animationCX = "Start2",
            animationCX2 = "Start2",
            animationCX3 = "Start3",
            animationLoop = "Loop2",
            animationLoop2 = "Loop2",
            animationLoop3 = "Loop3",
            scaleFunc = function() 
                if display.width / display.height > 1.5 then
                    return display.width / display.height / 1.2
                else
                    return display.width / display.height / 0.9
                end
            end,
            showEnterDelay = function(isShowEnter) return isShowEnter and 2 or 0.1 end,
            bgPath = "animation/Common/xiaguangshengjing/mahTable/zhuodi.png"
        },
        card = {
            aniPath = "animation/Common/xiaguangshengjing/cardTable/",
            filename = "EffTableXgsj",
            animationCX = "chuxian",
            animationLoop = "loop",
            scaleFunc = function() return display.height / 755 end,
            showEnterDelay = function(isShowEnter) return isShowEnter and 2 or 0.1 end,
        }
    },
    [GlobalDefine.XGSJ_PROP_ID.MAH] = {},
    [GlobalDefine.XGSJ_PROP_ID.MAH_OUT] = {},
    [GlobalDefine.XGSJ_PROP_ID.MAH_HU] = {},
    [GlobalDefine.XGSJ_PROP_ID.HEAD_FRAME] = {},
    [GlobalDefine.XGSJ_PROP_ID.CHAT] = {
        aniPath = "animation/Common/xiaguangshengjing/",
        filename = "eff_DhkXgsj",
        animation1 = "animation1",
        animation2 = "animation2",
    },
    [GlobalDefine.XGSJ_PROP_ID.POKER] = {},
    [GlobalDefine.XGSJ_PROP_ID.CLOCK] = {
        aniPath = "animation/Common/xiaguangshengjing/clock/",
        filename = "fanbeichang_naozhong",
        animationDaoJiShi = "daojishi",
        animationLoop = "loop",
    }
}

GlobalDefine.BodyType = {
    PROTO = 0, -- proto 编码格式
    JSON = 1,   --  json 返回驼峰命名的字段名
    OLDXY = 2, --  33 老协议编码格式
    JSON2 = 3, --  json 返回带下划线的字段名 （跟proto 字段命名一致）
}

return GlobalDefine