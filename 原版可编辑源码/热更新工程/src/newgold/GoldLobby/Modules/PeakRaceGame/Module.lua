local PeakRaceGameModule = class("PeakRaceGameModule", NG.ModuleBase)

local function getDisplayWidth()
    return display.width
end

local function getDisplayHeight()
    return display.height
end

-- 游戏初始化相关内容
function PeakRaceGameModule:ctor()
    PeakRaceGameModule.super.ctor(self)
end

-- 初始化老包的桥接内容
function PeakRaceGameModule:init()
    if not NG.goldLobby:getModule("GoldCommon"):isPeakRace() then
        return
    end
    NG.soundManager = require("newgold.GoldCommon.Manager.GoldSoundManager").new()
    self:initXZDD()
end

-- 初始化血战麻将
function PeakRaceGameModule:initXZDD()
    self:reloadXZDD()
    cc.exports.g_gameGlobal = require "newgold.GoldLobby.Modules.PeakRaceGame.XZDD.GameGlobal"
    require "newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msgCache"
    require "newgold.GoldLobby.Modules.PeakRaceGame.XZDD.UIWidget"
    require "newgold.GoldLobby.Modules.PeakRaceGame.XZDD.event_manager"
    cc.exports.g_longConnect = require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.LongConnect"):getInstance()
    local writablePath = cc.FileUtils:getInstance():getWritablePath()
    cc.FileUtils:getInstance():addSearchPath(writablePath .. "hotfix/res/Match")
    cc.FileUtils:getInstance():addSearchPath("res/Match")
    cc.FileUtils:getInstance():addSearchPath(writablePath .. "hotfix/res/MatchAH")
    cc.FileUtils:getInstance():addSearchPath("res/MatchAH")
end

-- 进游戏区适配层会变化需要重新设置数值
function PeakRaceGameModule:reloadXZDD()
    cc.exports.g_gameConstant = {
        -- 定义几个开关
        -- 组合牌是否标识提供方
        SWITCHER_LAYDOWN_PROVIDER_SIGN = false,

        -- 俱乐部换桌是否启用
        CLUB_CHANGE_TABLE_ENABLED = true,

        AGENT_TABLE_FLAG = 1,
        CLUB_TABLE_FLAG = 2,

        CARD_TYPE_CHARACTER = 1,
        CARD_TYPE_DOT = 2,
        CARD_TYPE_BAMBOO = 3,
        CARD_TYPE_WIND = 4,
        CARD_TYPE_HUA = 5,

        -- 游戏模式，当前是金币场还是vip场还是播放战绩
        GOLD_GAME_MODEL = 1,
        VIP_GAME_MODEL = 2,
        PLAY_LOG_MODEL = 3,

        -- 游戏类型
        GAME_TYPE_MJ = 0,
        GAME_TYPE_POKER = 1,
        GAME_TYPE_CHANGPAI = 2,
        GAME_TYPE_ZIPAI = 3,

        --大厅界面层级关系
        LOBBY_LAYER_ZORDER_TOPPING_1 = 999,
        LOBBY_LAYER_ZORDER_TOPPING_2 = 1999,
        LOBBY_LAYER_ZORDER_TOPPING_3 = 2999,

        -- 打牌界面层级关系
        GAMEBASE_ZORDER = 1,
        GAMEMAINVIEW_ZORDER = 25,
        HEADIMGVIEW_OPEN_ZORDER = 25,
        HEADIMGVIEW_CLOSE_ZORDER = 9,
        TABLEPLAYERBASE_ZORDER = 20,
        TABLEPLAYERSELECT_ZORDER = 21,
        TABLE_CARD_MARK_ZORDER = 22,
        TABLEPLAYERDOCARD_ZORDER = 23,
        JIESANROOMVIEW_ZORDER = 50,
        ROOMCLOSEVIEW_ZORDER = 60,
        CLUB_INVITE_ROOM_POP_ZORDER = 100,

        -- 上一轮牌回看，跑得快新增
        REVIEW_CARDS_LAYER_ZORDER = 28,

        MAHJONG_CODE_COLOR_SHIFTS                                = 4, ----花色部分的移位，花色，【0，1，2】
        MAHJONG_CODE_COLOR_MASK                                = 112, ----花色部分的掩码
        MAHJONG_CODE_COLOR_MASK2                                = 7, ----花色部分的掩码

        MAHJONG_CODE_COLOR_WAN                                = 0, ----花色部分的掩码,万
        MAHJONG_CODE_COLOR_TIAO                                = 16, ----花色部分的掩码,条
        MAHJONG_CODE_COLOR_TONG                                = 32, ----花色部分的掩码,筒

        PALYER_GAME_STATE_IN_TABLE_READY                        = 1,
        PALYER_GAME_STATE_IN_TABLE_PLAYING                        = 2,
        PALYER_GAME_STATE_IN_TABLE_PAUSED                        = 3,
        PALYER_GAME_STATE_IN_TABLE_GAME_OVER_WAITING_TO_CONTINUE = 4,
        PALYER_GAME_STATE_WAITING_CLICK_READY                    = 5,

        GAME_OPERTAION_POKER_OVER = 2018,

        CMD_EXE_OK                                            = 0, ----命令执行成功
        WRONG_PASSWORD                                        = 1001, ----密码错误

        USER_BIND_NOT_FOUND                    = 1021, ----三方 未绑定微信账号
        USER_BIND_ALREADY_FOUND                = 1022, ----三方 已经绑定其他微信账号

        FANGKIA_NOT_FOUND                        = 1100, ----房卡不足
        GOLD_LOW_THAN_MIN_LIMIT                = 1101, ----金币低于下限
        GOLD_HIGH_THAN_MAX_LIMIT                = 1102, ----金币超过上限
        CAN_ENTER_VIP_ROOM                        = 1103, ----可以进入VIP房间
        VIP_TABLE_IS_FULL                        = 1104, ----vip桌子已经满座了
        VIP_TABLE_IS_GAME_OVER                    = 1105, ----VIP桌子已经结束了
        IS_PLAYING_CAN_NOT_ENTER_ROOM            = 1106, ----正在游戏中不能进入其他房间
        SERVER_IS_MAINTAIN                        = 1107, ----服务器正在维护，暂时关闭开启房间
        VIP_TABLE_LOCKED                        = 1301, ----俱乐部桌子续局锁定


        TODAY_GAME_RECORD_OUT_LIMIT_IN_ROOM    = 1200, ----今日输赢超过房间上限
        TODAY_GAME_RECORD_OUT_LIMIT_IN_GAME    = 1201, ----今日输赢超过游戏上限

        GAME_OPERATION_NOTIFY_ROLL_DICE        = 3036,
        GAME_OPERATION_EXCHANGE_CARDS_OUT_CARDS = 3039, --幺鸡麻将在等待别人换牌阶段重连通知自己换的牌
        GAME_OPERATION_EXCHANGE_CARDS_INTO_CARDS = 3040, --在定缺阶段重连通知自己换到手的牌


        --**客户端请求刷新玩家数据**--
        --**客户端请求刷新玩家数据**--
        GAME_OPERTAION_REQUEST_UPDATE_PALYER_DATA = 1002,

        --**服务器通知客户端，桌子上坐上一个新玩家**--
        GAME_OPERTAION_TABLE_ADD_NEW_PLAYER    = 1004,
        --**服务器通知客户端，桌子上有玩家离开**--
        GAME_OPERTAION_PLAYER_LEFT_TABLE        = 1005,
        --**服务器通知客户端，本局时间到，游戏结束**--
        GAME_OPERTAION_GAME_TIME_OVER            = 1006,

        --**客户端通知服务器，购买物品**--
        GAME_OPERTAION_BUY_ITEM                = 1007,

        --**客户端通知服务器，使用道具**--
        GAME_OPERTAION_USE_ITEM                = 1008,
        --**客户端通知服务器，更换头像**--
        GAME_OPERTAION_CHANGE_HEAD                = 1009,

        --**客户端通知服务器，晶石换金币*--
        GAME_OPERTAION_GEM_EXCHANGE_GOLD = 1017,

        GAME_OPERTAION_GOT_GOLD_AUTO_SAVE = 1028, ----系统救济，赠送金币

        GAME_OPERTAION_SET_TUOGUAN =        1029, ----设置托管状态

        GAME_OPERTAION_ROOM_DISMISS = 1030, ----房主离开，房间解散
        GAME_OPERTAION_CHANGEPLAYERACCOUNT = 1031, ----修改玩家账号

        GAME_OPERATION_COMPLETE_ACCOUNT_AND_PASSWORD = 1033, ----补全帐号和密码

        GAME_OPERATION_APPLY_CLOSE_VIP_ROOM = 1034, ----房主申请解散VIP房间

        -- 换桌
        GAME_OPERTAION_CHANGE_TABLE = 1051,

        -- 换桌状态标识
        GAME_OPERATION_APPLY_EXCHANGE_VIP_ROOM_STATUS = 1052;

        GAME_OPERTAION_QUERY_TABLE_DISMISS = 2001, ----查询是否有人请求解散桌子

        GAME_OPERTAION_REJECT_TABLE = 3000, --    俱乐部踢人

        GAME_OPERTAION_FLOWER_NOT_EMOUGH = 3041, --    鲜花不足

        VIP_TABLE_NOT_FOUND = 1300, ----桌子未找到

        MOBILE_CODE_EXPIRY = 1109, --验证码过期

        --癞子牌叠加颜色
        LAIZI_COLOR = { r = 255, g = 255, b = 0 },
        DESK_NIAO_CARD_COLOR = { r = 255, g = 255, b = 0 },

        -- 根据操作类型决定播放什么音效
        OPERATION_CHI                        = 1,
        OPERATION_PENG                        = 2,
        OPERATION_GANG                        = 3,
        OPERATION_HU                            = 4,
        OPERATION_ZIMO                        = 5,
        OPERATION_TING                        = 6,
        OPERATION_BUHUA                        = 7,
        OPERATION_1_YOU                        = 8,
        OPERATION_2_YOU                        = 9,
        OPERATION_3_YOU                        = 10,
        OPERATION_QIANGJIN                    = 11,
        OPERATION_SHI_SAN_YAO                = 12,

        OPERATION_SHANG_GA_1                    = 13,
        OPERATION_SHANG_GA_2                    = 14,
        OPERATION_SHANG_GA_3                    = 15,
        OPERATION_SHANG_GA_5                    = 16,
        OPERATION_AN_GANG                    = 17,

        OPERATION_GANG_LSMJ                    = 18,

        OPERATION_TIAO_WU                    = 19,
        OPERATION_CHANG_GE                    = 20,
        -- 报胡 请胡- 断勾卡
        OPERATION_BAO_HU                        = 21,
        OPERATION_QING_HU                    = 22,

        -- 天胡
        OPERATION_TIAN_HU                    = 23,
        -- 地胡
        OPERATION_DI_HU                        = 24,

        OPERATION_GANG_SHANG_HUA                = 25,
        OPERATION_GANG_SHANG_PAO                = 26,

        -- 飘
        OPERATION_PIAO                        = 27,
        OPERATION_PIAO_NO                    = 28,
        -------------------------------------


        --**玩家的麻将操作*--
        MAHJONG_OPERTAION_NONE                    = 0, ----无操作
        MAHJONG_OPERTAION_CHI                    = 1, ----吃
        MAHJONG_OPERTAION_PENG                    = 2, ----碰
        MAHJONG_OPERTAION_AN_GANG                = 4, ----暗杠
        MAHJONG_OPERTAION_MING_GANG                = 8, ----明杠
        MAHJONG_OPERTAION_CHU                    = 16, ----出牌
        MAHJONG_OPERTAION_HU                    = 32, ----胡牌
        MAHJONG_OPERTAION_TING                    = 64, ----听牌
        MAHJONG_OPERTAION_CANCEL                = 128, ----给玩家提示操作，玩家点取消
        MAHJONG_OPERTAION_YAO_BU_QI                = 5, ----玩家要不起
        MAHJONG_OPERTAION_OFFLINE                = 256, ----断线
        MAHJONG_OPERTAION_ONLINE                = 512, ----断线后又上线
        MAHJONG_OPERTAION_AUTO_CHU                = 1024, ----听牌后自动出牌
        MAHJONG_OPERTAION_GAME_OVER                = 2048, ----牌局结束


        MAHJONG_OPERTAION_GAME_OVER_CHANGE_TABLE = 4096, ----牌局结束，玩家选择换桌
        MAHJONG_OPERTAION_GAME_OVER_CONTINUE    = 8192, ----牌局结束，玩家选择继续开始游戏
        MAHJONG_OPERTAION_MO_CARD                = 16384, ----重用字段，这个只有记录牌局回放使用


        MAHJONG_OPERTAION_SEARCH_VIP_ROOM        = 16384, --**客户端通知服务器查找vip房间 **--
        MAHJONG_OPERTAION_ADD_CHU_CARD            = 32768, --**玩家打出的牌，没有被人吃碰胡，在打这个牌的玩家面前摆一张牌 **--
        MAHJONG_OPERTAION_SHOW_TABLE_TIPS        = 65536, --**显示提示在桌面**--
        MAHJONG_OPERTAION_TIP                    = 131072, --**提示当前谁在操作**--

        MAHJONG_OPERTAION_PLAYER_HU_CONFIRMED    = 262144, ----玩家点胡，此局结束显示结果
        MAHJONG_OPERTAION_OVERTIME_AUTO_CHU        = 524288, ----超时自动出牌
        MAHJONG_OPERTAION_EXTEND_CARD_REMIND    = 1048576, ----提醒房主续卡
        MAHJONG_OPERTAION_EXTEND_CARD_SUCCESSFULLY = 2097152, ----提醒房主续卡成功
        MAHJONG_OPERTAION_WAITING_OR_CLOSE_VIP    = 4194304, ----VIP房间有人逃跑，是否继续等待
        MAHJONG_OPERTAION_NO_START_CLOSE_VIP    = 8388608, ----VIP房间超时未开始游戏，房间结束
        MAHJONG_OPERTAION_ONLY_ZIMO_TIME        = 16777216, ----最后的分张阶段
        MAHJONG_OPERTAION_SET_CLEAR_COLOR        = 33554432, ----设置缺门花色
        MAHJONG_OPERTAION_BU_HUA                = 67108864, ----补花
        MAHJONG_OPERTAION_EXTEND_CARD_FAILED    = 134217728, ----提醒房主续卡失败

        MSG_CANCEL_TUO_GUAN_ACK                    = 134217729;----取消托管

        MAHJONG_OPERTAION_HU_CARD_LIST_UPDATE    = 268435456, ----提醒玩家可以胡的牌
        MAHJONG_OPERTAION_BU_GANG                = 536870912, ----补杠，自己摸起来，3个已经碰了，再补杠
        MAHJONG_OPERTAION_REMOE_CHU_CARD        = 1073741824, ----玩家打出的牌，被吃碰杠走了

        MAHJONG_OPERTAION_GANG_NOTIFY            = 160516216, ----玩家杠的通知，杠不杠的成功，看有没有人抢

        MAHJONG_OPERTAION_CHAN_DI                = 2147483648, ----铲底

        MAHJONG_OPERTAION_LOG_SEND_CARDS        = 512, --回放用

        MAHJONG_OPERTAION_LOG_DUO_OPS        = 2025, --回放用 多种操作
        MAHJONG_OPERTAION_LOG_POKER_PUTOUT_BOMB        = 2026, --回放用 刷新炸弹数

        MAHJONG_OPERTAION_BAI_PAI                = 2027, -- 摆牌

        --新的操作值，除以前的位开关表示的操作之后新增的操作，将以值的方式存储在table中
        MAHJONG_NEW_OPERTAION_1_YOU            = 1,
        MAHJONG_NEW_OPERTAION_2_YOU        = 2,
        MAHJONG_NEW_OPERTAION_3_YOU            = 3,
        MAHJONG_NEW_OPERATION_NOTIFY_SHOW_MA        = 6,

        MAHJONG_PLAYBACK_CALCULATE = 7, --回放的计分描述

        OPERATION_FIRST_CARD_FOLLOWED = 1, --首张被跟
        OPERATION_FIRST_CARD_GANG = 2, --首张被杠

        GEN_TYPE_GEN_SHANG = 0,
        GEN_TYPE_GEN_SUCCESS = 1,
        GEN_TYPE_GEN_LOU    = 2,

        GAME_PLAY_RULE_AN_GANG_FAN_ZHANG        = 1, --暗杠只翻开显示一张

        POKER_OPERATION_CALL_LANDLORD = 102, --通知玩家选择叫地主
        POKER_OPERATION_SHOW_LANDLORD = 103, --广播确定地主
        POKER_OPERATION_CHANGE_MULTI = 104, --炸弹倍数变化
        POKER_OPERATION_GAME_RESTART = 105, --没人叫地主，通知重新开始
        POKER_OPERATION_NOTIFY_SPRING = 106, --通知春天/反春


        GAME_OPERATION_SHOW_CARDS_ACK            = 2002, --258 明牌操作
        GAME_OPERTAION_NOTIFY_PLAYER_DA_SHAI_ZI    = 2003, --258 打骰子操作
        GAME_OPERTAION_NOTIFY_PLAYER_FANG_CHONG    = 2006, --转转 放冲操作
        GAME_OPERTAION_NOTIFY_PLAYER_MO_CARD_AT_LAST_4_CARDS = 2008, --转转麻将最后四张摸牌看牌或者过

        GAME_OPERTAION_NOTIFY_PLAYER_COULD_SHOW_CARDS = 2009, --隐藏的手牌亮出来开始打牌了

        BAO_DAN_CHU_MAX_INVALID = 3005, -- 报单必须出最大


        MAHJONG_OPERTAION_PLAYER_OVER_TIME            = 3145728, -- 超时托管
        MAHJONG_OPERTAION_PLAYER_OVER_TIME_RECOVER    = 5242880, -- 取消托管
        MAHJONG_OPERTAION_PLAYER_AUTO_OP                = 3145729, -- 麻将通知玩家定缺时是进入托管

        GAME_OPERATION_PLAYER_SHOW_CARDS            = 2004, --服务端通知玩家明牌的list
        GAME_OPERTAION_NOTIFY_PLAYER_SHAI_ZI_VALUE    = 2005, --服务端通知玩家打骰子的list
        GAME_OPERTAION_NOTIFY_PLAYER_FANG_CHONG_VALUE = 2007, --服务端通知玩家放冲的list

        GAME_OPERTAION_NOTIFY_PLAYER_SHANG_GA_VALUE = 2020, --服务端通知玩家上噶的list

        MAHJONG_OPERATION_NOTIFY_FOLLOW_CARD = 12, --服务器广播玩家被跟牌成功/漏跟
        MAHJONG_OPERATION_NOTIFY_FOLLOWED = 13, --服务广播玩家跟上
        MAHJONG_OPERATION_NOTIFY_HUA_HU = 14, --服务广播玩家达成花胡

        GAME_OPERTAION_NOTIFY_PLAYER_DO_WASH_CARD = 2021, ---服务端广播有玩家洗牌\客户端回给服务端是否洗牌
        GAME_OPERTAION_NOTIFY_PLAYER_WASH_CARD_NOTIFY = 2022, --服务端通选择是否需要洗牌

        GAME_OPERATION_CHOOSE_ABSENT_CARD_COLOR = 2023, --服务器通知玩家要选择缺一门/客户端回复服务端玩家选择了缺哪一门
        GAME_OPERATION_NOTIFY_SHOW_CHOOSE_ABSENT_CARD_COLOR = 2024;  --服务器广播所有玩家的定缺数据

        GAME_OPERATION_POKER_SURRENDER = 2025;  --客户端发给服务器玩家选择投降/服务端广播有玩家选择投降

        --胡牌炫耀
        SHARE_FLAUNT_QING_YI_SE            = 1,
        SHARE_FLAUNT_PENG_PENG_HU            = 2,
        SHARE_FLAUNT_QI_XIAO_DUI            = 3,
        SHARE_FLAUNT_HAO_HUA_QI_DUI        = 4,
        SHARE_FLAUNT_QING_PENG_PENG_HU        = 5,
        SHARE_FLAUNT_QING_QI_XIAO_DUI        = 6,
        SHARE_FLAUNT_QING_HAO_HUA_QI_DUI    = 7,
        SHARE_FLAUNT_SHI_SAN_YAO            = 8,
        SHARE_FLAUNT_ZI_MO                    = 9,
        SHARE_FLAUNT_TIAN_HU                = 10,
        SHARE_FLAUNT_DI_HU                    = 11,
        SHARE_FLAUNT_GANG_SHANG_KAI_HUA    = 12,
        SHARE_FLAUNT_HUA_SHANG_TIAN_HUA    = 13,
        SHARE_FLAUNT_QIANG_GANG_HU            = 14,
        SHARE_FLAUNT_19ZI_PENG_PENG_HU        = 15,
        SHARE_FLAUNT_HUN_YI_SE                = 16,

        --GAME_RESULT_HU_TYPE List 版本 有些跟hucode是同一个值

        --胡牌操作类型
        GAME_OPERTAION_HU_CODE_LOCAL_ZI_MO            = -100,

        GAME_OPERTAION_HU_CODE_TIAN_HU                = 2,
        GAME_OPERTAION_HU_CODE_3_JIN_DAO            = 3,
        GAME_OPERTAION_HU_CODE_4_JIN_DAO            = 4,
        GAME_OPERTAION_HU_CODE_5_JIN_DAO            = 5,
        GAME_OPERTAION_HU_CODE_6_JIN_DAO            = 6,
        GAME_OPERTAION_HU_CODE_XIAN_JIA_QIANG_JIN    = 7,
        GAME_OPERTAION_HU_CODE_DEAROR_QIANG_JIN    = 8,
        GAME_OPERTAION_HU_CODE_1_YOU                = 9,
        GAME_OPERTAION_HU_CODE_2_YOU                = 10,
        GAME_OPERTAION_HU_CODE_3_YOU                = 11,
        GAME_OPERTAION_HU_CODE_SHI_SAN_YAO            = 13,
        GAME_OPERTAION_HU_CODE_GAI_BAO_QIANG_JIN    = 14,
        GAME_OPERTAION_HU_CODE_QIANG_GANG_HU        = 15,
        GAME_OPERTAION_HU_CODE_PENG_PENG_HU            = 16,
        GAME_OPERTAION_HU_CODE_QING_YI_SE            = 17,
        GAME_OPERTAION_HU_CODE_QI_XIAO_DUI            = 18,
        GAME_OPERTAION_HU_CODE_HAO_HUA_QI_DUI        = 19,
        GAME_OPERTAION_HU_CODE_DI_HU                    = 20,
        GAME_OPERTAION_HU_CODE_GANG_SHANG_KAI_HUA    = 21,
        GAME_OPERTAION_HU_CODE_HUA_SHANG_TIAN_HUA    = 22,
        GAME_OPERTAION_HU_CODE_19ZI_PENG_PENG_HU        = 24,
        GAME_OPERTAION_HU_CODE_HUN_YI_SE                = 25,
        MAHJONG_HU_CODE_YI_PAO_DUO_XIANG                = 26, -- 一炮多响
        MAHJONG_HU_CODE_HU_JIAO_ZHUAN_YI                = 27, -- 呼叫转移

        GAME_OPERATION_CARD_NOT_EXIST                = 2014, -- 牌不存在
        GAME_OPERATION_CARD_INVALID                = 2015, -- 牌型不合法
        GAME_OPERTAION_POKER_PASS                    = 2017,
        GAME_OPERTAION_PLAYER_CLICK_READY            = 2019,

        --
        MAHJONG_LAST_TYPE_3                    = 11,
        MAHJONG_LAST_TYPE_4                    = 12,
        MAHJONG_LAST_TYPE_5                    = 13,

        --**玩家牌局结果*--
        MAHJONG_HU_CODE_DIAN_PAO                = 2, ----点炮
        MAHJONG_HU_CODE_MYSELF_ZHUANG_JIA        = 4, ----自己是不是庄家
        MAHJONG_HU_CODE_ZI_MO                    = 8, ----自摸


        MAHJONG_HU_CODE_QIANG_GANG_HU            = 16, ----抢杠胡
        MAHJONG_HU_CODE_HUA_ZHU                    = 32, ----花猪
        MAHJONG_HU_CODE_DAI_GEN                    = 64, ----有四张一样的在手里，胡牌的时候，不包括杠
        MAHJONG_HU_CODE_CHA_HUA_ZHU                = 128, ---- 查花猪

        MAHJONG_HU_CODE_TING                    = 256, ----是否听牌
        MAHJONG_HU_CODE_TARGET_ZHUANG_JIA        = 512, ----输赢的对方是庄家
        MAHJONG_HU_CODE_QINGYISE                = 2048, ----清一色

        MAHJONG_HU_CODE_PENG_PENG_HU            = 32768, ----碰碰胡

        MAHJONG_HU_CODE_QIXIAODUI                = 131072, ----七小对

        MAHJONG_HU_CODE_WIN                        = 1048576, ----赢
        MAHJONG_HU_CODE_LOSE                    = 2097152, ----输
        MAHJONG_HU_CODE_TIAN_HU                    = 4194304, ----天胡
        MAHJONG_HU_CODE_DI_HU                    = 8388608, ----地胡


        MAHJONG_HU_CODE_CHA_DA_JIAO                = 16777216, ----查大叫
        MAHJONG_HU_CODE_LIU_JU                    = 33554432, ----流局
        MAHJONG_HU_CODE_DIAN_PAO_HU                = 67108864, ----点炮胡
        MAHJONG_HU_CODE_PING_HU_ZI_MO            = 134217728, ----平胡自摸加1番


        MAHJONG_HU_CODE_DIAN_GANG                = 536870912, ----点杠



        CLEAR_DIAMOND_SALE_RECORD_BY_ACCOUNT                = 78958, ----会计清理今日销售钻累积
        RESET_PASSWORD_BY_ADMIN                            = 78960, ----重置密码
        SET_PLAYER_TYPE_BY_ADMIN                            = 78961, ----设置代理
        UNBIND_PHONE_NUMBER                                = 79217, ----解绑手机号

        PLAYER_OPERATION_BY_SUPER_ADMIN                    = 78962, ----管理员进行玩家管理
        DISMISS_VIP_TABLE_BY_ADMIN_CONFIRMED                = 78963, ----管理员再次确认
        DISMISS_VIP_TABLE_BY_ADMIN                            = 78964, ----管理员解散桌子

        SEND_PLAYER_CMD_SUB_DIAMOND                        = 95873, ----扣除玩家的钻
        PLAYER_CMD_GUA_XIA_JI                                = 95874, ----玩家1挂到玩家2下面
        PLAYER_CMD_QUERY_INFO                                = 95875, ----查询玩家信息
        PLAYER_CMD_QUERY_DIAMOND_LOG                        = 95876, ----查询玩家信息
        SEND_PLAYER_CMD_SHARE_TO_WX                        = 79733, ----分享到微信
        GET_SYSTEM_MGR_INFO_ACK                            = 512, ----返回系统系统给客户端
        DISMISS_VIP_TABLE_FAILED                            = 1024, ----解散vip桌子
        SUPER_ADMIN_OPERATION_INFO                            = 2048,
        ADMIN_OPERATION_RESULT                                = 4096, ----客户操作结果提示

        SEND_CLIENT_IP                                        = 65536, --更新IP和地理位置
        SEND_PLAYER_SHARE_TO_WX_SUCCESSFULLY                = 8192, ----分享微信成功
        SEND_PLAYER_SHARE_TO_WX_TIP                        = 16384, ----微信分享提示
        SEND_PLAYER_SHARE_TO_WX_AUTH                        = 32768, ----没有用户公众号openid，提醒用户关注公众号
        SEND_PLAYER_H5_GAME_DOWN_REWARD                    = 1048576, ---- H5game sdk 下载奖励

        PLAYER_TYPE_QUN_ZHU                                = 3, ----圈主type
        --*VIP玩法*--
        GAME_PLAY_VIPALL = 16777215,

        GAME_PLAY_RULE_4_REN                    = 0, ----4人麻将
        GAME_PLAY_RULE_3_REN                    = 1, ----3人麻将
        GAME_PLAY_RULE_2_REN                    = 2, ----2人麻将

        APPLE_GUEST_CHECK_TYPE                = 3,

        GAME_PLAY_BAOJIAO_PLAY_CARDS = 4096,

        GAME_OPERTAION_GET_QUN_ZHU_PAY_BACK = 1061, --圈主获取返利
        SUPER_ADMIN_OPERTAION_INFO_GET_PAY_BACK = 32768, --获取返利

        -- 牌桌
        DESIGN_SCREEN_WIDTH = 1280,
        DESIGN_SCREEN_HEIGHT = 720,
        ORIGINAL_SCREEN_WIDTH = 800,
        ORIGINAL_SCREEN_HEIGHT = 480,

        COORDINATE_X_SCALE = 1280 / 800,
        COORDINATE_Y_SCALE = 720 / 480,

        CARD_NODE_CONFIG = {
            [0] = {
                [1] = {
                    chuCardLineNum = {
                        [2] = 22,
                        [3] = 10,
                        [4] = 10,
                    },
                    chuCardOffsetCount = {
                        [2] = 0,
                        [3] = 0,
                        [4] = 0,
                    },
                    chuStartPosFix = cc.p(0, -150),
                    huaStartPos = cc.p(display.cx - 60, 174),
                    chuFixScale = 0.69,
                    handPosFix = cc.p(0, 16),
                    layHandDistance = 20,
                    newCardDistance = 15,
                    handBRect = cc.rect(0, 0, 85, 117),
                    laydownRect = cc.rect(0, 20, 65, 69),
                    laydownPosFix = cc.p(-10, 2),
                    laydownShdow = { img = "shdow1.png", pos = cc.p(24, 21) },
                    gangOffset = cc.p(0, 15)
                },
                [2] = {
                    chuCardLineNum = {
                        [2] = 22,
                        [3] = 14,
                        [4] = 10,
                    },
                    chuCardOffsetCount = {
                        [2] = 0,
                        [3] = 2,
                        [4] = 0,
                    },
                    chuStartPosFix = cc.p(372, 0),
                    huaStartPos = cc.p(getDisplayWidth() - 200, display.cy - 46),
                    chuFixScale = 0.9,
                    handPosFix = cc.p(-140, -20),
                    layHandDistance = 15,
                    newCardDistance = 15,
                    handBRect = cc.rect(2, 12, 34, 32),
                    laydownRect = cc.rect(0, 14, 58, 36),
                    laydownPosFix = cc.p(0, -12),
                    laydownShdow = { img = "shdow2.png", pos = cc.p(42, 7) },
                    gangOffset = cc.p(0, 13)
                },
                [3] = {
                    chuCardLineNum = {
                        [2] = 22,
                        [3] = 10,
                        [4] = 10,
                    },
                    chuCardOffsetCount = {
                        [2] = 0,
                        [3] = 0,
                        [4] = 0,
                    },
                    chuStartPosFix = cc.p(0, 210),
                    huaStartPos = cc.p(display.cx + 108, getDisplayHeight() - 104),
                    chuFixScale = 0.69,
                    handPosFix = cc.p(12, -50),
                    layHandDistance = 17,
                    newCardDistance = 13,
                    handBRect = cc.rect(0.5, 0, 49, 65),
                    laydownRect = cc.rect(0, 11, 45, 46),
                    laydownPosFix = cc.p(0, -4),
                    laydownShdow = { img = "shdow3.png", pos = cc.p(17, 17) },
                    gangOffset = cc.p(0, 11.5)
                },
                [4] = {
                    chuCardLineNum = {
                        [2] = 22,
                        [3] = 14,
                        [4] = 10,
                    },
                    chuCardOffsetCount = {
                        [2] = 0,
                        [3] = 2,
                        [4] = 0,
                    },
                    chuStartPosFix = cc.p(-370, 0),
                    huaStartPos = cc.p(256, display.cy + 147),
                    chuFixScale = 0.9,
                    handPosFix = cc.p(140, 40),
                    layHandDistance = 15,
                    newCardDistance = 15,
                    handBRect = cc.rect(40, 12, 34, 32),
                    laydownRect = cc.rect(0, 14, 58, 36),
                    laydownPosFix = cc.p(0, 50),
                    laydownShdow = { img = "shdow4.png", pos = cc.p(16, 7) },
                    gangOffset = cc.p(0, 13)
                },
            },
            [1] = {
                [1] = {
                    chuCardLineNum = {
                        [2] = 22,
                        [3] = 10,
                        [4] = 10,
                    },
                    chuCardOffsetCount = {
                        [2] = 0,
                        [3] = 0,
                        [4] = 0,
                    },
                    chuStartPosFix = cc.p(0, -126),
                    huaStartPos = cc.p(display.cx - 60, 174),
                    chuFixScale = 0.7,
                    handPosFix = cc.p(0, 12),
                    layHandDistance = 25,
                    newCardDistance = 15,
                    handBRect = cc.rect(1, 1, 86, 123),
                    laydownRect = cc.rect(1, 18, 54, 65),
                    laydownPosFix = cc.p(0, 2),
                    gangOffset = cc.p(0, 15)
                },
                [2] = {
                    chuCardLineNum = {
                        [2] = 22,
                        [3] = 14,
                        [4] = 10,
                    },
                    chuCardOffsetCount = {
                        [2] = 0,
                        [3] = 2,
                        [4] = 0,
                    },
                    chuStartPosFix = cc.p(372, 0),
                    huaStartPos = cc.p(getDisplayWidth() - 200, display.cy - 46),
                    chuFixScale = 0.9,
                    handPosFix = cc.p(-126, -45),
                    handPosFixLog = cc.p(0, 45),
                    layHandDistance = 10,
                    newCardDistance = 15,
                    handBRect = cc.rect(1, 2, 24, 26),
                    laydownRect = cc.rect(2, 13, 55, 37),
                    laydownPosFix = cc.p(-15, 0),
                    laydownScaleFix = cc.p(1, 0.9),
                    gangOffset = cc.p(0, 11),

                    handShowRect = cc.rect(getDisplayWidth() - 140, 150, 50, getDisplayHeight() - 150 - 100),

                },
                [3] = {
                    chuCardLineNum = {
                        [2] = 22,
                        [3] = 10,
                        [4] = 10,
                    },
                    chuCardOffsetCount = {
                        [2] = 0,
                        [3] = 0,
                        [4] = 0,
                    },
                    chuStartPosFix = cc.p(0, 200),
                    huaStartPos = cc.p(display.cx + 108, getDisplayHeight() - 99),
                    chuFixScale = 0.7,
                    handPosFix = cc.p(0, -50),
                    layHandDistance = 15,
                    newCardDistance = 15,
                    handBRect = cc.rect(1, 7, 42, 45),
                    laydownRect = cc.rect(1, 13, 42, 52),
                    laydownPosFix = cc.p(0, 0),
                    gangOffset = cc.p(0, 11.5)
                },
                [4] = {
                    chuCardLineNum = {
                        [2] = 22,
                        [3] = 14,
                        [4] = 10,
                    },
                    chuCardOffsetCount = {
                        [2] = 0,
                        [3] = 2,
                        [4] = 0,
                    },
                    chuStartPosFix = cc.p(-323, 0),
                    huaStartPos = cc.p(256, display.cy + 147),
                    chuFixScale = 0.9,
                    handPosFix = cc.p(140, 132),
                    handPosFixLog = cc.p(0, -67),
                    layHandDistance = 15,
                    newCardDistance = 15,
                    handBRect = cc.rect(19, 2, 24, 26),
                    laydownRect = cc.rect(2, 13, 55, 37),
                    laydownPosFix = cc.p(0, 20),
                    laydownScaleFix = cc.p(1, 0.9),
                    gangOffset = cc.p(0, 11),


                },
            },
            [2] = {
                [1] = {
                    chuCardLineNum = {
                        [2] = 22,
                        [3] = 10,
                        [4] = 10,
                    },
                    chuCardOffsetCount = {
                        [2] = 0,
                        [3] = 0,
                        [4] = 0,
                    },
                    chuStartPosFix = cc.p(0, -150),
                    huaStartPos = cc.p(display.cx - 60, 174),
                    chuFixScale = 0.69,
                    laydownFixScale = 0.9,
                    handPosFix = cc.p(0, 16),
                    layHandDistance = 15.5,
                    newCardDistance = 15,
                    handBRect = cc.rect(0, 0, 82, 125),
                    laydownRect = cc.rect(0, 20, 55, 69),
                    laydownPosFix = cc.p(0, 2),
                    laydownShdow = { img = "shdow1.png", pos = cc.p(24, 21) },
                    gangOffset = cc.p(0, 15)
                },
                [2] = {
                    chuCardLineNum = {
                        [2] = 22,
                        [3] = 14,
                        [4] = 10,
                    },
                    chuCardOffsetCount = {
                        [2] = 0,
                        [3] = 2,
                        [4] = 0,
                    },
                    chuStartPosFix = cc.p(372, 0),
                    huaStartPos = cc.p(getDisplayWidth() - 200, display.cy - 46),
                    chuFixScale = 0.9,
                    handPosFix = cc.p(-140, 20),
                    layHandDistance = 15,
                    newCardDistance = 15,
                    handBRect = cc.rect(2, 12, 34, 32),
                    laydownRect = cc.rect(0, 14, 58, 36),
                    laydownPosFix = cc.p(0, -12),
                    laydownScaleFix = cc.p(1, 0.9),
                    laydownShdow = { img = "shdow2.png", pos = cc.p(42, 7) },
                    gangOffset = cc.p(0, 10)
                },
                [3] = {
                    chuCardLineNum = {
                        [2] = 22,
                        [3] = 10,
                        [4] = 10,
                    },
                    chuCardOffsetCount = {
                        [2] = 0,
                        [3] = 0,
                        [4] = 0,
                    },
                    chuStartPosFix = cc.p(0, 210),
                    huaStartPos = cc.p(display.cx + 108, getDisplayHeight() - 104),
                    chuFixScale = 0.69,
                    handPosFix = cc.p(12, -50),
                    layHandDistance = 17,
                    newCardDistance = 13,
                    handBRect = cc.rect(0.5, 0, 49, 65),
                    laydownRect = cc.rect(0, 11, 45, 46),
                    laydownPosFix = cc.p(0, -4),
                    laydownShdow = { img = "shdow3.png", pos = cc.p(17, 17) },
                    gangOffset = cc.p(0, 11.5)
                },
                [4] = {
                    chuCardLineNum = {
                        [2] = 22,
                        [3] = 14,
                        [4] = 10,
                    },
                    chuCardOffsetCount = {
                        [2] = 0,
                        [3] = 2,
                        [4] = 0,
                    },
                    chuStartPosFix = cc.p(-370, 0),
                    huaStartPos = cc.p(256, display.cy + 147),
                    chuFixScale = 0.9,
                    handPosFix = cc.p(140, 40),
                    layHandDistance = 15,
                    newCardDistance = 15,
                    handBRect = cc.rect(40, 12, 34, 32),
                    laydownRect = cc.rect(0, 14, 58, 36),
                    laydownPosFix = cc.p(0, 50),
                    laydownScaleFix = cc.p(1, 0.9),
                    laydownShdow = { img = "shdow4.png", pos = cc.p(16, 7) },
                    gangOffset = cc.p(0, 10)
                },
            },
            [3] = {
                [1] = {
                    chuCardLineNum = {
                        [2] = 22,
                        [3] = 10,
                        [4] = 10,
                    },
                    chuCardOffsetCount = {
                        [2] = 0,
                        [3] = 0,
                        [4] = 0,
                    },
                    chuStartPosFix = cc.p(0, -126),
                    huaStartPos = cc.p(display.cx - 60, 174),
                    chuFixScale = 0.7,
                    laydownFixScale = 0.9,
                    handPosFix = cc.p(0, 12),
                    layHandDistance = 17.5,
                    newCardDistance = 15,
                    handBRect = cc.rect(0, 0, 83, 125),
                    laydownRect = cc.rect(0, 21, 55, 63),
                    laydownPosFix = cc.p(0, 2),
                    gangOffset = cc.p(0, 15)
                },
                [2] = {
                    chuCardLineNum = {
                        [2] = 22,
                        [3] = 14,
                        [4] = 10,
                    },
                    chuCardOffsetCount = {
                        [2] = 0,
                        [3] = 2,
                        [4] = 0,
                    },
                    chuStartPosFix = cc.p(372, 0),
                    huaStartPos = cc.p(getDisplayWidth() - 200, display.cy - 46),
                    chuFixScale = 0.9,
                    handPosFix = cc.p(-140, 20),
                    layHandDistance = 15,
                    newCardDistance = 15,
                    handBRect = cc.rect(1, 4, 22, 29),
                    laydownRect = cc.rect(0, 13, 49, 27),
                    laydownPosFix = cc.p(0, 0),
                    gangOffset = cc.p(0, 13)
                },
                [3] = {
                    chuCardLineNum = {
                        [2] = 22,
                        [3] = 10,
                        [4] = 10,
                    },
                    chuCardOffsetCount = {
                        [2] = 0,
                        [3] = 0,
                        [4] = 0,
                    },
                    chuStartPosFix = cc.p(0, 200),
                    huaStartPos = cc.p(display.cx + 108, getDisplayHeight() - 99),
                    chuFixScale = 0.7,
                    handPosFix = cc.p(0, -50),
                    layHandDistance = 15,
                    newCardDistance = 15,
                    handBRect = cc.rect(1, 0, 39, 59),
                    laydownRect = cc.rect(0, 13, 36, 42),
                    laydownPosFix = cc.p(0, 0),
                    gangOffset = cc.p(0, 11.5)
                },
                [4] = {
                    chuCardLineNum = {
                        [2] = 22,
                        [3] = 14,
                        [4] = 10,
                    },
                    chuCardOffsetCount = {
                        [2] = 0,
                        [3] = 2,
                        [4] = 0,
                    },
                    chuStartPosFix = cc.p(-323, 0),
                    huaStartPos = cc.p(256, display.cy + 147),
                    chuFixScale = 0.9,
                    handPosFix = cc.p(140, 30),
                    layHandDistance = 15,
                    newCardDistance = 15,
                    handBRect = cc.rect(1, 4, 22, 29),
                    laydownRect = cc.rect(0, 13, 49, 27),
                    laydownPosFix = cc.p(0, 20),
                    gangOffset = cc.p(0, 13)
                },
            },
            [4] = {
                [1] = {
                    chuCardLineNum = {
                        [2] = 22,
                        [3] = 10,
                        [4] = 10,
                    },
                    chuCardOffsetCount = {
                        [2] = 0,
                        [3] = 0,
                        [4] = 0,
                    },
                    chuStartPosFix = cc.p(0, -160),
                    huaStartPos = cc.p(display.cx - 60, 174),
                    chuFixScale = 0.69,
                    handPosFix = cc.p(0, 16),
                    layHandDistance = 20,
                    newCardDistance = 15,
                    handBRect = cc.rect(0, 0, 82, 125),
                    laydownRect = cc.rect(1, 19, 51, 64),
                    laydownPosFix = cc.p(-10, -10),
                    --            laydownShdow = {img="shdow1.png", pos=cc.p(23, 22)},
                    gangOffset = cc.p(0, 11)
                },
                [2] = {
                    chuCardLineNum = {
                        [2] = 22,
                        [3] = 14,
                        [4] = 10,
                    },
                    chuCardOffsetCount = {
                        [2] = 0,
                        [3] = 2,
                        [4] = 0,
                    },
                    chuStartPosFix = cc.p(375, 0),
                    huaStartPos = cc.p(getDisplayWidth() - 200, display.cy - 46),
                    chuFixScale = 0.9,
                    handPosFix = cc.p(-132, 10),
                    layHandDistance = 13,
                    newCardDistance = 15,
                    handBRect = cc.rect(2, 6, 34, 28),
                    laydownRect = cc.rect(0, 14, 50, 35),
                    laydownPosFix = cc.p(-8, -12),
                    laydownScaleFix = cc.p(1, 0.9),
                    --            laydownShdow = {img="shdow2.png", pos=cc.p(36, 7)},
                    gangOffset = cc.p(0, 7)
                },
                [3] = {
                    chuCardLineNum = {
                        [2] = 22,
                        [3] = 10,
                        [4] = 10,
                    },
                    chuCardOffsetCount = {
                        [2] = 0,
                        [3] = 0,
                        [4] = 0,
                    },
                    chuStartPosFix = cc.p(0, 210),
                    huaStartPos = cc.p(display.cx + 108, getDisplayHeight() - 104),
                    chuFixScale = 0.69,
                    handPosFix = cc.p(12, -49),
                    layHandDistance = 17,
                    newCardDistance = 13,
                    handBRect = cc.rect(2, 2, 37, 46),
                    laydownRect = cc.rect(0, 12, 37, 50),
                    laydownPosFix = cc.p(0, 7),
                    --            laydownShdow = {img="shdow3.png", pos=cc.p(13, 20)},
                    gangOffset = cc.p(0, 7)
                },
                [4] = {
                    chuCardLineNum = {
                        [2] = 22,
                        [3] = 14,
                        [4] = 10,
                    },
                    chuCardOffsetCount = {
                        [2] = 0,
                        [3] = 2,
                        [4] = 0,
                    },
                    chuStartPosFix = cc.p(-370, 0),
                    huaStartPos = cc.p(256, display.cy + 147),
                    chuFixScale = 0.9,
                    handPosFix = cc.p(138, 70),
                    layHandDistance = 13,
                    newCardDistance = 13,
                    handBRect = cc.rect(0, 2, 34, 27),
                    laydownRect = cc.rect(0, 16, 50, 35),
                    laydownPosFix = cc.p(0, 50),
                    laydownScaleFix = cc.p(1, 0.9),
                    --            laydownShdow = {img="shdow4.png", pos=cc.p(13, 7)},
                    gangOffset = cc.p(0, 7)
                },
            },
            [5] = {
                [1] = {
                    chuCardLineNum = {
                        [2] = 22,
                        [3] = 10,
                        [4] = 10,
                    },
                    chuCardOffsetCount = {
                        [2] = 0,
                        [3] = 0,
                        [4] = 0,
                    },
                    chuStartPosFix = cc.p(0, -126),
                    huaStartPos = cc.p(display.cx - 60, 174),
                    chuFixScale = 0.7,
                    laydownFixScale = 0.85,
                    handPosFix = cc.p(0, 12),
                    layHandDistance = 17.5,
                    newCardDistance = 15,
                    handBRect = cc.rect(2, 5, 70, 85),
                    laydownRect = cc.rect(0, 21, 51, 60),
                    laydownPosFix = cc.p(0, -10),
                    gangOffset = cc.p(0, 15)
                },
                [2] = {
                    chuCardLineNum = {
                        [2] = 22,
                        [3] = 14,
                        [4] = 10,
                    },
                    chuCardOffsetCount = {
                        [2] = 0,
                        [3] = 2,
                        [4] = 0,
                    },
                    chuStartPosFix = cc.p(372, 0),
                    huaStartPos = cc.p(getDisplayWidth() - 200, display.cy - 46),
                    chuFixScale = 0.9,
                    handPosFix = cc.p(-140, 20),
                    layHandDistance = 16,
                    newCardDistance = 15,
                    handBRect = cc.rect(1, 4, 22, 29),
                    laydownRect = cc.rect(1, 13, 46, 25),
                    laydownPosFix = cc.p(0, 0),
                    gangOffset = cc.p(0, 13)
                },
                [3] = {
                    chuCardLineNum = {
                        [2] = 22,
                        [3] = 10,
                        [4] = 10,
                    },
                    chuCardOffsetCount = {
                        [2] = 0,
                        [3] = 0,
                        [4] = 0,
                    },
                    chuStartPosFix = cc.p(0, 200),
                    huaStartPos = cc.p(display.cx + 108, getDisplayHeight() - 99),
                    chuFixScale = 0.7,
                    handPosFix = cc.p(0, -50),
                    layHandDistance = 15,
                    newCardDistance = 15,
                    handBRect = cc.rect(1, 0, 39, 59),
                    laydownRect = cc.rect(0, 13, 36, 42),
                    laydownPosFix = cc.p(0, 5),
                    gangOffset = cc.p(0, 11.5)
                },
                [4] = {
                    chuCardLineNum = {
                        [2] = 22,
                        [3] = 14,
                        [4] = 10,
                    },
                    chuCardOffsetCount = {
                        [2] = 0,
                        [3] = 2,
                        [4] = 0,
                    },
                    chuStartPosFix = cc.p(-323, 0),
                    huaStartPos = cc.p(256, display.cy + 147),
                    chuFixScale = 0.9,
                    handPosFix = cc.p(140, 30),
                    layHandDistance = 15,
                    newCardDistance = 15,
                    handBRect = cc.rect(1, 4, 22, 29),
                    laydownRect = cc.rect(0, 13, 49, 27),
                    laydownPosFix = cc.p(0, 20),
                    gangOffset = cc.p(0, 10)
                },
            },
            [6] = {
                [1] = {
                    chuCardLineNum = {
                        [2] = 22,
                        [3] = 10,
                        [4] = 10,
                    },
                    chuCardOffsetCount = {
                        [2] = 0,
                        [3] = 0,
                        [4] = 0,
                    },
                    chuStartPosFix = cc.p(0, -126),
                    huaStartPos = cc.p(display.cx - 60, 174),
                    chuFixScale = 0.7,
                    laydownFixScale = 1.1,
                    handPosFix = cc.p(0, 12),
                    layHandDistance = 17.5,
                    newCardDistance = 15,
                    handBRect = cc.rect(0, 0, 88, 108),
                    laydownRect = cc.rect(0, 13, 46, 51),
                    laydownPosFix = cc.p(0, -10),
                    laydownScaleFix = cc.p(1, 1.1),
                    gangOffset = cc.p(0, 15)
                },
                [2] = {
                    chuCardLineNum = {
                        [2] = 22,
                        [3] = 14,
                        [4] = 10,
                    },
                    chuCardOffsetCount = {
                        [2] = 0,
                        [3] = 2,
                        [4] = 0,
                    },
                    chuStartPosFix = cc.p(372, 0),
                    huaStartPos = cc.p(getDisplayWidth() - 200, display.cy - 46),
                    chuFixScale = 0.8,
                    handPosFix = cc.p(-140, -10),
                    layHandDistance = 14,
                    newCardDistance = 15,
                    handBRect = cc.rect(0, 0, 24, 39),
                    laydownRect = cc.rect(0, 11, 62, 39),
                    laydownPosFix = cc.p(0, 0),
                    laydownScaleFix = cc.p(1, 0.95),
                    gangOffset = cc.p(0, 10),
                    handScaleFix = cc.p(1, 0.7),
                },
                [3] = {
                    chuCardLineNum = {
                        [2] = 22,
                        [3] = 10,
                        [4] = 10,
                    },
                    chuCardOffsetCount = {
                        [2] = 0,
                        [3] = 0,
                        [4] = 0,
                    },
                    chuStartPosFix = cc.p(0, 200),
                    huaStartPos = cc.p(display.cx + 108, getDisplayHeight() - 99),
                    chuFixScale = 0.7,
                    handPosFix = cc.p(0, -50),
                    layHandDistance = 15,
                    newCardDistance = 15,
                    handBRect = cc.rect(0, 0, 40, 45),
                    laydownRect = cc.rect(0, 13, 46, 51),
                    laydownPosFix = cc.p(0, 5),
                    gangOffset = cc.p(0, 11.5)
                },
                [4] = {
                    chuCardLineNum = {
                        [2] = 22,
                        [3] = 14,
                        [4] = 10,
                    },
                    chuCardOffsetCount = {
                        [2] = 0,
                        [3] = 2,
                        [4] = 0,
                    },
                    chuStartPosFix = cc.p(-323, 0),
                    huaStartPos = cc.p(256, display.cy + 147),
                    chuFixScale = 0.8,
                    handPosFix = cc.p(140, 45),
                    layHandDistance = 15,
                    newCardDistance = 15,
                    handBRect = cc.rect(0, 0, 24, 39),
                    laydownRect = cc.rect(0, 11, 62, 39),
                    laydownPosFix = cc.p(0, 20),
                    laydownScaleFix = cc.p(1, 0.85),
                    gangOffset = cc.p(0, 10),
                    handScaleFix = cc.p(1, 0.7),
                },
            },
        },

        MYSELF_MENU_POSITION_Y                    = 215,
        MYSELF_MENU_POSITION_END_X                = getDisplayWidth() * 0.5 + 460,
        --[[950,]]
        --吃碰杠按钮起始位置

        MYSELF_EX_MENU_POSITION_Y                = 310,
        MYSELF_EX_OP_BTN_POSTION_IN_X            = 105,
        MYSELF_EX_OP_BTN_POSTION_LINE_OFFSET        = 179,

        MYSELF_MENU_OPER_SPRITE_SCALE            = 0.9,

        -- 吃碰按钮宽度
        BUTTON_X                                    =    180,

        -- 玩家吃牌的选择缩放比例
        PLAYER_INFO_OFFSET_X                        =    40,
        PLAYER_INFO_OFFSET_Y                        =    20,

        HEAD_IMG_OFFSET_X                            =    20,
        HEAD_IMG_OFFSET_Y                            =    30,

        -- 左上角癞子标识相关
        LAIZI_SCALE                                = 0.5,
        LAIZI_START_POS_X                        = 6,
        LAIZI_START_POS_Y                        = 35,
        LAIZI_OFFSET_X                            = 3,

        --三人场 本家手牌和方位标识的偏移
        THREE_PLAYER_MY_CHUCARD_OFFSET_Y            = 30,

        OTHER_NEW_CARD_OFFSET                    = 15,

        -- 解散房间时倒计时时间
        JIESANROOM_DAOJISHI_TIME                    = 300,

        GENERAL_PLAYER_KAIFANG = 1, --允许俱乐部玩家开房

        HU_LIST_POS_X                            = 192,
        HU_LIST_POS_Y                            = 142,

        TING_LIST_POS_X                            = display.cx,
        TING_LIST_POS_Y                            = 160,

        -- game base local round info
        DESK_LOCAL_ROUND_TYPE_LING = 1,
        DESK_LOCAL_ROUND_TYPE_LIAN_ZHUANG = 2,
        DESK_LOCAL_ROUND_TYPE_DI_ZHU = 3,

        -- 具体玩法
        ---------------------------------------------------
        ---------------------------------------------------
        ---------------------------------------------------
        --因为某些奇葩的不想做的需求，所以定义一些本地的local主玩法ID
        GAME_PLAY_RULE_LOCAL_HAI_NAN_4        = -7001,
        GAME_PLAY_RULE_LOCAL_HAI_NAN_3        = -7002,
        GAME_PLAY_RULE_LOCAL_HAI_NAN_2        = -7003,


        --因为某些奇葩的不想做的需求，所以定义一些本地的local主玩法ID
        GAME_PLAY_RULE_LOCAL_QIONG_HAI_4        = -10001,

        --主玩法ID
        GAME_PLAY_RULE_HONG_ZHONG =    1,
        GAME_PLAY_RULE_258        =    2,
        GAME_PLAY_RULE_zhuanzhuan = 3,
        GAME_PLAY_RULE_zhulongzi    = 4,

        --主玩法ID
        GAME_PLAY_RULE_LONG_YAN        =    5, --龙岩麻将
        --主玩法
        GAME_PLAY_RULE_LONG_YAN_F_J    = 6, --龙岩伏击
        GAME_PLAY_RULE_HAI_NAN        =    7, --海南麻将
        GAME_PLAY_RULE_ZHUANG_ZHUANG    =    8, --海南转转麻将

        GAME_PLAY_RULE_QIONG_HAI    =    10, --琼海麻将
        --GAME_PLAY_RULE_LIN_GAO          =	11,      --临高麻将
        GAME_PLAY_RULE_SSZ                =    13, --万宁十三张
        GAME_PLAY_RULE_SSZ_LG            =    14, --临高十三张
        GAME_PLAY_RULE_SSZ_QH            =    15, --琼海十三张
        GAME_PLAY_RULE_SSZ_WC            =    16, --文昌十三张
        GAME_PLAY_RULE_SCMJ_XZDD        = 17, --四川麻将————血战到底
        GAME_PLAY_RULE_SCMJ_XZDD_3P2R = 18, --四川麻将————血战到底:三人两房
        GAME_PLAY_RULE_SCMJ_XZDD_3P3R = 19, --四川麻将————血战到底:三人三房
        GAME_PLAY_RULE_SCMJ_XZDD_4P2R = 20, --四川麻将————血战到底:四人两房
        GAME_PLAY_RULE_SCMJ_XZDD_2P    = 21, --四川麻将————血战到底:两人麻将
        GAME_PLAY_RULE_SCMJ_XLCH        = 22, --四川麻将————血流成河
        GAME_PLAY_RULE_SCMJ_XZDZ    = 24, --四川麻将———血战达州
        GAME_PLAY_RULE_SCMJ_QMXZ        = 26, --四川麻将---全民血战
        GAME_PLAY_RULE_SC_LSMJ        = 38, -- 四川麻将 - 邻水麻将
        GAME_PLAY_RULE_SC_PZHMJ        = 39, -- 四川麻将 - 攀枝花麻将
        GAME_PLAY_RULE_SC_MZMJ        = 40, -- 四川麻将 - 绵竹麻将
        GAME_PLAY_RULE_SC_MJ_NANCHONG = 48, -- 南充麻将
        GAME_PLAY_RULE_SC_MJ_MIANYANG = 62, -- 绵阳麻将
        GAME_PLAY_RULE_SC_GAMJ        = 49, --广安麻将

        GAME_PLAY_RULE_SC_DGKMJ                    = 41, -- 四川麻将 - 断勾卡麻将
        GAME_PLAY_RULE_SC_DGKMJ_CHA_DA_JIAO        = 283, -- 断勾卡查大叫
        GAME_PLAY_RULE_SC_YJ                        = 52, --45,           -- 四川麻将 - 幺鸡麻将
        GAME_PLAY_RULE_SC_YJ_3P                    = 53, -- 四川麻将 - 幺鸡麻将3人
        GAME_PLAY_RULE_SC_YJ_2P                    = 54, -- 四川麻将 - 幺鸡麻将2人
        GAME_PLAY_RULE_SC_OPERATION_QING_HU        = 3028, -- 断勾卡发送请胡字段
        GAME_PLAY_RULE_SC_OPERATION_BAO_HU        = 3018, -- 断勾卡发送请胡字段
        MAHJONG_OPERTAION_QING_HU                = 1048576, -- 牌局结束
        GAME_PLAY_RULE_SC_SUB_RULE_UC_FEN        = 16600, -- 四川底分
        GAME_PLAY_RULE_SC_SUB_RULE_MAX_FEN        = 16610, -- 最大底分

        GAME_PLAY_2_RULE_PHKH            = 280, --断勾卡平胡可胡
        GAME_PLAY_2_RULE_TWO_FQH            = 281, --断勾卡2番起胡
        GAME_PLAY_2_RULE_THREE_FQH            = 282, --断勾卡3番起胡

        -- 荣昌玩法
        GAME_PLAY_RULE_RCMJ_RCWF                = 60,
        GAME_CREATE_ROOM_RULE_RCMJ_ER_SAN_WU    = 300, -- 二三五
        GAME_CREATE_ROOM_RULE_RCMJ_SAN_LIU_SHI = 301, -- 三六十

        -- 血战7张
        GAME_PLAY_RULE_SCMJ_XZ_7                = 37, --血战7张
        GAME_SUB_RULE_SI_DUI                    = 20, --四对胡

        DUAN_GOU_KA_HU_INFO_DIANPAO        = -4,
        DUAN_GOU_KA_HU_INFO_GANGSHANGPAO    = -3,
        DUAN_GOU_KA_HU_INFO_YIPAODUOXIANG = -2,
        DUAN_GOU_KA_HU_INFO_QIANGGANGHU    = -1,
        DUAN_GOU_KA_HU_INFO_NORMAL        = 0,
        DUAN_GOU_KA_HU_INFO_ZIMO            = 1,
        DUAN_GOU_KA_HU_INFO_QINGHU        = 2,
        DUAN_GOU_KA_HU_INFO_BAOHU        = 3,
        DUAN_GOU_KA_HU_INFO_ZHUAQINGHU    = 5,
        DUAN_GOU_KA_HU_INFO_ZHUABAOHU    = 6,
        DUAN_GOU_KA_HU_INFO_GANGSHANGHUA    = 7,
        DUAN_GOU_KA_HU_INFO_DIHU            = 9,
        DUAN_GOU_KA_HU_INFO_TIANHU        = 10,

        -- 两人一房
        GAME_PLAY_RULE_SCMJ_XZDD_2P1R    = 42,
        GAME_SUB_RULE_MJ_13_ZHANG        = 63,
        GAME_SUB_RULE_MJ_7_ZHANG            = 61,
        GAME_SUB_RULE_MJ_DUI_DUI_HU_2_FAN = 58,
        --新增勾选项
        GAME_SUB_RULE_MJ_QIDUI_NO_HU = 384,
        GAME_SUB_RULE_MJ_QYS_YIFAN = 385,
        GAME_SUB_RULE_MJ_QYS_ERFAN = 386,

        --两人一房选择万筒条牌墙
        GAME_SUB_RULE_PAI_WAN                = 361,
        GAME_SUB_RULE_PAI_TONG            = 362,
        GAME_SUB_RULE_PAI_TIAO            = 363,

        -- 扑克类
        GAME_PLAY_RULE_SCPK_PDK        = 23, -- 四川跑得快
        GAME_PLAY_RULE_SCPK_PDK_2P        = 25, -- 四川跑得快
        GAME_PLAY_RULE_SCPK_PDK_15Z        = 29, -- 四川跑得快15张

        GAME_PLAY_RULE_SCPK_PDK_2P_HT3    = 44, -- 四川跑得快黑桃3模式 新二人跑得快
        GAME_PLAY_RULE_SCPK_PDK_CHONGZHOU = 51, -- 崇州跑得快  10张跑得快
        GAME_PLAY_RULE_SCPK_PDK_DEYANG    = 46, --德阳跑得快

        GAME_SUB_RULE_START_HEI_TAO_3                = 35, --每局黑桃三
        GAME_SUB_RULE_START_YING_JIA                    = 72, -- 赢家先出
        GAME_SUB_RULE_START_CHU_HEI_TAO_3            = 73, -- 黑桃三先出且必出
        GAME_SUB_RULE_BAO_DAN_CHU_MAX                = 77, -- 报单必须出最大
        GAME_SUB_RULE_BAO_DAN_BU_SHU                    = 76, -- 报单不输分
        GAME_SUB_RULE_CAN_CHU_BI_CHU                    = 71, -- 能大必大
        GAME_SUB_RULE_SAN_ZHANG_SHAO_DAI_CHU_WAN        = 40, -- 最后一手可三带一
        GAME_SUB_RULE_SI_DAI_2                        = 74, -- 可四带二
        GAME_SUB_RULE_SI_DAI_3                        = 75, -- 可四带三
        GAME_SUB_RULE_PDK_QUICK_MODE            = 98, -- 跑得快快速模式
        GAME_SUB_RULE_AUTO_READY                = 99, -- 手动准备
        GAME_SUB_RULE_AAA_BOMB                = 365, -- 3个A炸弹

        --/**
        -- * 全局黑桃三首出
        -- */
        GAME_SUB_RULE_ALL_SPADE_3_FIRST_CHU                = 114,


        --  *  不支持 三不带
        GAME_SUB_RULE_CANNOT_SAN_BU_DAI                = 109,
        GAME_SUB_RULE_CAN_SAN_BU_DAI                = -109,

        --是否去除3和4的牌
        GAME_SUB_RULE_REMOVE_3_AND_4    = 364,


        GAME_SUB_RULE_START_JUST_FIRST_MUST_HEI_TAO_3 = 100, --首局黑桃3先出，且必出，后续赢家先出
        GAME_SUB_RULE_START_JUST_FIRST_HEI_TAO_3        = 101, --首局黑桃3先出，后续赢家先出

        GAME_SUB_RULE_START_HT_3                = 110, --首局黑桃3先出
        GAME_SUB_RULE_SECOND_MUST_HT_3                = 111, --第二局黑桃3先出

        GAME_SUB_RULE_START_FAN_GUAN_MEN                = 102, --反关门
        GAME_SUB_RULE_START_ZHA_DAN_5FEN                = 103, --炸弹5分
        GAME_SUB_RULE_START_ZHA_DAN_10FEN            = 104, --炸弹10分

        GAME_SUB_RULE_ROUND_CLOSE_MEN = 112, --关门不加倍
        GAME_SUB_RULE_BAO_DAN_ZUI_DA = 113, --报单无需出最大

        -- 四川斗地主
        GAME_PLAY_RULE_SCPK_DDZ                            = 27, -- 四川斗地主
        GAME_SUB_PK_RULE_FENG_DING_8_BEI                = 83, -- 8倍封顶
        GAME_SUB_PK_RULE_FENG_DING_16_BEI                = 84, -- 16倍封顶
        GAME_SUB_PK_RULE_FENG_DING_32_BEI                = 85, -- 32倍封顶
        GAME_SUB_PK_RULE_FENG_DING_64_BEI                = 86, -- 64倍封顶
        GAME_SUB_PK_RULE_SAN_DAI_DUI                    = 87, -- 三带对
        GAME_SUB_PK_RULE_SI_DAI_ER                        = 88, -- 四带二
        GAME_SUB_PK_RULE_SAN_BU_DAI                        = 89, -- 三张单
        GAME_SUB_PK_RULE_FIRST_RANDOM_LANDLORD            = 90, -- 随机首叫
        GAME_SUB_PK_RULE_SAN_DA_BI_ZHUA                    = 91, -- 三大必抓

        --癞子斗地主            
        GAME_PLAY_RULE_SCPK_DDZ_LZ                        = 50, --癞子斗地主

        GAME_PLAY_RULE_SCPK_DDZ_HDZ                        = 53, --昏地主

        -- 2人斗地主
        GAME_PLAY_RULE_SCPK_DDZ_2P                        = 54, -- 二人斗地主

        GAME_OPERTAION_CALL_LANDLORD_INVALID            = 3006, -- 异常——三大必抓

        -- 操作
        POKER_OPERATION_SNATCH_LANDLORD                    = 101, -- 代表抢地主操作
        POKER_OPERATION_CALL_LANDLORD                    = 102, -- 代表叫地主操作
        POKER_OPERATION_SHOW_LANDLORD                    = 103, -- 展示地主，显示底牌操作
        POKER_OPERATION_CHANGE_MULTI                    = 104, -- 倍数改变发通知，同时将该玩家炸弹数更新出去
        POKER_OPERATION_GAME_RESTART                    = 105, -- 重新开始游戏
        POKER_OPERATION_NOTIFY_SPRING                    = 106, -- 通知春天
        POKER_OPERATION_NOTIFY_JIA_BEI                    = 107, -- 加倍


        --------------------------- 长牌类 -----------------------------------
        GAME_PLAY_RULE_SCCP_DSS                            = 61, -- 长牌：斗十四
        GAME_PLAY_RULE_SCCP_DSS_500_DIAN                    = 351, -- 500 点封顶
        GAME_PLAY_RULE_SCCP_DSS_1000_DIAN                = 352, -- 1000 点封顶
        GAME_PLAY_RULE_SCCP_DSS_GUN_FAN                    = 353, -- 滚翻
        GAME_PLAY_RULE_SCCP_DSS_TI_FAN                    = 354, -- 梯翻

        GAME_OPERTAION_DOU_SHI_SI_PIAO                    = 3040, -- 漂
        MAHJONG_OPERTAION_CP_CHI                            = 241, -- 吃
        MAHJONG_OPERTAION_CP_LA                            = 242, -- 拉
        MAHJONG_OPERTAION_CP_AN                            = 244, -- 暗

        MAHJONG_OPERTAION_DOU_SHI_SI_PIAO_NTF            = 2000020, -- 通知玩家订漂
        DOU14_STATE_SEND_ALL_CARDS_NTF                    = 2000021, -- 刷新玩家手牌数据
        MAHJONG_OPERTAION_SHOW_OP_CARD                    = 2000025, -- 显示玩家op的牌
        OPERATION_PLAYER_DIAN_SHU_NTF                    = 2000027, -- 刷新玩家点数



        USER_BIND_MOWANG_NOT_FOUND                = 1023, ----玩家未绑定MSTW

        USER_BIND_DL_NOT_FOUND                = 1024,



        GAME_SUB_RULE_OVER_TIME_AUTO_TUOGUAN    = 68, -- 【玩法说明-超时托管】

        GAME_SUB_RULE_HONG_ZHONG_LAI_ZI        = 71, -- 【玩法说明-红中癞子】
        GAME_SUB_RULE_QI_DUI_HU                = 72, -- 【玩法说明-能胡七对】
        GAME_SUB_RULE_ZI_MO_HU                = 74, -- 【玩法说明-自摸胡】
        GAME_SUB_RULE_ZHUANG_XIAN_SUAN_FEN    = 75, -- 【玩法说明-庄闲算分】
        GAME_SUB_RULE_ZHUA_NIAO_2            = 76, -- 【玩法说明-抓2鸟】
        GAME_SUB_RULE_ZHUA_NIAO_4            = 77, -- 【玩法说明-抓4鸟】
        GAME_SUB_RULE_PAO_HU                    = 73, -- 【玩法说明-接炮胡（可抢杠）】
        GAME_SUB_RULE_ZHUA_NIAO_6            = 78, -- 【玩法说明-抓6鸟】

        GAME_PLAY_RULE_DELAY_NTF                = 270, -- 延时提醒

        -- 四川麻将————血战到底
        GAME_SUB_RULE_MJ_FENG_DING_2_FAN            = 55, -- 封顶2番
        GAME_SUB_RULE_MJ_FENG_DING_3_FAN            = 56, -- 封顶3番
        GAME_SUB_RULE_MJ_FENG_DING_4_FAN            = 57, -- 封顶4番
        GAME_SUB_RULE_MJ_ZI_MO_JIA_DI            = 45, -- 自摸加底
        GAME_SUB_RULE_MJ_ZI_MO_JIA_FAN            = 46, -- 自摸加番
        GAME_SUB_RULE_MJ_DIAN_GANG_HUA_DIAN_PAO    = 47, -- 点杠花算点炮
        GAME_SUB_RULE_MJ_DIAN_GANG_HUA_ZI_MO        = 48, -- 点杠花算自摸
        GAME_SUB_RULE_MJ_YAO_JIU_JIANG_DUI        = 51, -- 幺九将对
        GAME_SUB_RULE_MJ_MEN_QING_ZHONG_ZHANG    = 52, -- 门清中张
        GAME_SUB_RULE_MJ_TIAN_DI_HU                = 53, -- 天地胡
        GAME_SUB_RULE_MJ_JIA_XIN_WU                = 59, -- 夹心五
        GAME_SUB_RULE_MJ_KA_ER_TIAO                = 64, -- 卡二条
        GAME_SUB_RULE_MJ_HUAN_3_ZHANG            = 49, -- 换三张
        GAME_SUB_RULE_MJ_HUAN_4_ZHANG            = 50, -- 换四张
        GAME_SUB_RULE_MJ_TING_PAI_TI_SHI            = 54, -- 胡牌提示
        GAME_SUB_RULE_MJ_DUI_DUI_HU_2_FAN        = 58, --对对胡2番
        GAME_SUB_RULE_MJ_DIAN_PAO_PING_HU        = 60, --点炮可平胡
        GAME_SUB_RULE_MJ_MO_7_ZHANG                = 61, --起手摸7张牌
        GAME_SUB_RULE_MJ_MO_10_ZHANG                = 62, --起手摸10张牌
        GAME_SUB_RULE_MJ_MO_13_ZHANG                = 63, --起手摸13张牌
        GAME_SUB_RULE_MJ_MO_10_ZHANG                = 62, --起手摸10张牌
        GAME_SUB_RULE_MJ_FANG_2                    = 65, --2方
        GAME_SUB_RULE_MJ_FANG_3                    = 66, --3方
        GAME_SUB_RULE_MJ_BU_TUO_GUAN                = 67, --不托管
        GAME_SUB_RULE_MJ_TUO_GUAN_60                = 69, --托管60秒
        GAME_SUB_RULE_MJ_TUO_GUAN_30                = 68, --托管30秒
        GAME_SUB_RULE_MJ_TUO_GUAN_120                = 70, --托管120秒

        GAME_SUB_RULE_MJ_HUAN_3_ZHANG_NEW            = 372, -- 任意换三张
        GAME_SUB_RULE_MJ_HUAN_4_ZHANG_NEW            = 388, -- 任意换四张
        GAME_SUB_RULE_MJ_GUO_SHOU_PENG                = 387, -- 过手碰

        GAME_SUB_RULE_MJ_FENG_DING_5_FAN                = 105, --封顶5番

        GAME_SUB_RULE_MJ_JUE_ZHANG_JIA_FAN        = 78, --胡绝张加番
        GAME_SUB_RULE_MJ_SI_JIAO_BU_SUAN            = 79, --死叫不算叫

        GAME_SUB_RULE_MJ_WA_SHENG_ROU            = 82, --挖生肉

        GAME_SUB_RULE_MJ_JIANG_DUI            = 92, --将对
        GAME_SUB_RULE_MJ_DUI_DUI_HU_1_FAN        = 93, --对对胡1番
        GAME_SUB_RULE_MJ_QUAN_YAO_JIU_2_FAN            = 94, --全幺九2番
        GAME_SUB_RULE_MJ_QUAN_YAO_JIU_3_FAN            = 97, --全幺九3番
        GAME_SUB_RULE_MJ_DA_DAN_DIAO            = 95, --大单钓
        GAME_SUB_RULE_MJ_XIA_DA_YU            = 96, --下大雨

        MAHJONG_HU_CODE_XZ_QIANG_GANG_HU        = 15, ---- 血战麻将抢杠胡

        GAME_OPERATION_EXCHANGE_3_CARDS            = 3001, -- 换三张
        GAME_OPERATION_EXCHANGE_4_CARDS            = -1, -- 换四张
        GAME_OPERTAION_DING_QUE                    = 3002, -- 定缺
        GAME_OPERATION_DING_QUE_RESULT            = 3004, -- 告知各玩家的定缺结果

        -- 换三张or四张时，服务器通知换的方向
        GAME_HUAN_CARD_DIR_NI_CLOCK                = 0, -- 逆时针
        GAME_HUAN_CARD_DIR_SHUN_CLOCK            = 1, -- 顺时针
        GAME_HUAN_CARD_DIR_DUI_JIA                = 2, -- 对家

        -- 缺花色索引
        GAME_QUE_COLOUR_INVALID                    = 0, -- 不显示缺的Icon
        GAME_QUE_COLOUR_WAN                        = 1, -- 缺万
        GAME_QUE_COLOUR_TIAO                        = 2, -- 缺条
        GAME_QUE_COLOUR_TONG                        = 3, -- 缺筒

        GAME_OPERATION_EXCHANGE_CARDS_RESULT        = 3003, -- 告知换3张后的手牌，并且通过这个操作，随便通知玩家可以操作定缺了（服务端->客户端）
        GAME_OPERATION_EXCHANGE_CARDS            = 3001, -- 玩家执行换3张的操作（客户端->服务端）
        GAME_OPERTAION_DING_QUE                    = 3002, -- 玩家执行定缺的操作（客户端->服务端）
        -- 客户端拆分后的 换3张操作
        GAME_OPERATION_EXCHANGE_CARDS_OUT    = -30001,
        GAME_OPERATION_EXCHANGE_CARDS_IN    = -30002,


        GAME_CREATE_ROOM_RULE_MJ_QUAN_TUO        = 210, -- 全托
        GAME_CREATE_ROOM_RULE_MJ_DAN_TUO            = 211, -- 单拖
        GAME_CREATE_ROOM_RULE_MJ_DAN_TUO_TIME    = 10000, -- 一个假值，不会使用的
        GAME_CREATE_ROOM_RULE_MJ_DAN_TUO_MINI_TIME = 30, -- 最小托的时间
        GAME_CREATE_ROOM_RULE_MJ_DAN_TUO_MAX_TIME = 300, -- 最大托的时间

        --跑得快玩法时间
        GAME_CREATE_ROOM_RULE_PDK_TUO_MINI_TIME = 15, -- 最小托的时间
        GAME_CREATE_ROOM_RULE_PDK_TUO_MAX_TIME = 100, -- 最大托的时间

        GAME_OPERTAION_GAME_DELAY_OP                = -2, -- 延时箭头消息

        GAME_SUB_RULE_SSZ_PAIXING_JIANGLI        = 131, -- 牌型奖励
        GAME_SUB_RULE_SSZ_XIANSHI_ZHANGSHU        = 132, -- 显示张数
        GAME_SUB_RULE_SSZ_FEN_1    = 133, -- 分数1,2,3,5
        GAME_SUB_RULE_SSZ_FEN_2    = 134,
        GAME_SUB_RULE_SSZ_FEN_3    = 135,
        GAME_SUB_RULE_SSZ_FEN_5    = 137,
        GAME_SUB_RULE_LG_LIMIT_SCORE = 138, -- 限制分100

        GAME_SUB_RULE_SSZ_QH_BUCHU_FANBEI    = 160, -- 不出翻倍
        GAME_SUB_RULE_SSZ_QH_BUCHU_BAOPEI    = 161, -- 不出包赔
        GAME_SUB_RULE_SSZ_QH_BUCHU_FA200    = 162, -- 不出罚200
        GAME_SUB_RULE_SSZ_QH_BUCHU_FA100    = 163, -- 不出罚100
        GAME_SUB_RULE_SSZ_QH_BUCHU_BAOPEI_FA200    = 164, -- 不出包赔罚200
        GAME_SUB_RULE_SSZ_QH_BUCHU_BAOPEI_FA100    = 165, -- 不出包赔罚100

        GAME_SUB_RULE_SSZ_QH_BEISHU_123        = 166, -- 123倍
        GAME_SUB_RULE_SSZ_QH_BEISHU_1234    = 167, -- 1234倍

        --麻将玩法底分264-273
        GAME_SUB_RULE_MYMJ_DIFEN_MIX = 264, --底分1分
        GAME_SUB_RULE_MYMJ_DIFEN_COUNT = 10, --底分值域

        --客户端有的选项但是服务端没有的选项值，一般是不选某一组玩法的时候，客户端定义为负数
        --GAME_SUB_RULE_LOCAL                        =   -22, --大小头

        GAME_SUB_RULE_LOCAL_REAL_TIME_SPEECH                =    - 5001, --时实语音   不可以与其他的玩法或者选项重用
        GAME_SUB_RULE_LOCAL_SAME_IP_LIMIT                =    - 5400, --同IP限制   不可以与其他的玩法或者选项重用
        GAME_SUB_RULE_LOCAL_NOT_OVER_TIME_AUTO_TUOGUAN    =    - 5002, --不开自动托管
        GAME_SUB_RULE_LOCAL_HU_PAI_TISHI                    =    54, -- 【胡牌提示】
        GAME_SUB_RULE_LOCAL_HU_CLOSE_PAI_TISHI            =    - 5102, -- 【关闭胡牌提示】
        GAME_SUB_RULE_LOCAL_DGHA_NO_LAIZI                =    - 5301, --没有癞子
        GAME_SUB_RULE_LOCAL_DGHA_NO_BOMB                    =    - 5302, --没有炸弹
        GAME_SUB_RULE_LOCAL_MUST_LOCATION                =    - 5401, --必须有定位
        GAME_SUB_RULE_LOCAL_MUST_LESS_300_LOCATION        =    - 5407, -- 禁止300米同桌
        GAME_SUB_RULE_LOCAL_MUST_NO_INTERACTION            =    - 5410, --禁止互动
        --@YangJie
        GAME_SUB_RULE_LOCAL_FORBID_VOICE                    =    - 5411, --禁止语音
        GAME_SUB_RULE_LOCAL_FORBID_TEXT                    =    - 5412, --禁止文字
        --end





        GAME_PLAY_RULE_DA_GUI_HEI_A        =    12, --大鬼黑A
        --/** 底分1-5 */
        GAME_SUB_RULE_DGHA_BASE_SCORE_1        = 140,
        GAME_SUB_RULE_DGHA_BASE_SCORE_2        = 141,
        GAME_SUB_RULE_DGHA_BASE_SCORE_3        = 142,
        GAME_SUB_RULE_DGHA_BASE_SCORE_4        = 143,
        GAME_SUB_RULE_DGHA_BASE_SCORE_5        = 144,
        --/** 有癞子 */
        GAME_SUB_RULE_DGHA_HAS_LAIZI        = 145,
        --/** 癞子数量2-7 */
        GAME_SUB_RULE_DGHA_LAIZI_NUM_2        = 146,
        GAME_SUB_RULE_DGHA_LAIZI_NUM_3        = 147,
        GAME_SUB_RULE_DGHA_LAIZI_NUM_4        = 148,
        GAME_SUB_RULE_DGHA_LAIZI_NUM_5        = 149,
        GAME_SUB_RULE_DGHA_LAIZI_NUM_6        = 150,
        GAME_SUB_RULE_DGHA_LAIZI_NUM_7        = 151,
        --/** 有炸弹 */
        GAME_SUB_RULE_DGHA_HAS_BOMB        = 152,
        --/** 单王癞子可炸 */
        GAME_SUB_RULE_DGHA_SINGLE_KING_WITH_LAIZI_IS_BOMB        = 153,
        --/** 显示牌数 */
        GAME_SUB_RULE_DGHA_SHOW_CARDS_NUM        = 154,
        --/** 不洗牌模式  */
        GAME_SUB_RULE_DGHA_NO_WASH_CARDS        = 155,

        GAME_OPERATION_START_GAME_ADVANCE        = 2027, --切换2人局或三人局用
        GAME_OPERATION_NOTIFY_CHANGE_CREATOR    = 2028, --房主有变化通知
        GAME_OPERATION_QUERY_START_GAME_ADVANCE_INFO = 2029, --查询是否在切换房间界面

        --俱乐部一键开房管理操作
        CLUB_OP_ADD_OPERATION = 1, --增加
        CLUB_OP_UPDATE_OPERATION = 2, -- 修改
        CLUB_OP_DELETE_OPERATION = 3, --删除
        CLUB_OP_OPEN_AUTO_CREATE_TABLE = 4, --开启自动开房
        CLUB_OP_STOP_AUTO_CREATE_TABLE = 5, --关闭自动开房
        CLUB_OP_ALLOW_CREATE_ROOM = 6, --允许玩家在亲友圈手动开房
        CLUB_OP_FORBID_CREATE_ROOM = 7, --禁止玩家在亲友圈手动开房
        CLUB_OP_ALLOW_SHOW_MEM_ID = 8, -- 允许普通玩家查看玩家id
        CLUB_OP_FORBID_SHOW_MEM_ID = 9,
        CLUB_OP_DAYANG_SET = 10, -- 打烊
        CLUB_OP_DAYANG_CANCLE = 11, -- 关闭打烊 使能开房
        CLUB_OP_CREATEROOM_RULE = 12, -- 修改自动房间生成规则
        CLUB_OP_ZHANJI_TONGJI_ENABLE = 13, -- 战绩统计
        CLUB_OP_ZHANJI_TONGJI_DISABLE = 14, -- 关闭战绩统计
        CLUB_OP_ALLOW_3RD_VIEW = 15, -- 允许观战
        CLUB_OP_NOT_ALLOW_3RD_VIEW = 16, -- 禁止观战
        CLUB_OP_SAVE_PLAYER_CREATE_PERMISSION = 17, -- 玩家创建房间

        -----
        -- 允许玩家查看战绩统计修改成功
        CLUB_SETTING_OP_RESULT_ZJTJ_ENABLE_SUC = 17,
        -- 禁止玩家查看战绩统计
        CLUB_SETTING_OP_RESULT_ZJTJ_DISENABLE_SUC = 18,

        -- 允许观战成功
        CLUB_OP_RESULT_ALLOW_CLUB_3RD_VIEW_SUC = 19,
        -- 关闭观战成功
        CLUB_OP_RESULT_NOT_ALLOW_CLUB_3RD_VIEW_SUC = 20,
        CLUB_OP_RESULT_ALLOW_MANAGER_SHOW_MEM_ID = 21,
        CLUB_OP_RESULT_FORBID_MANAGER_SHOW_MEM_ID = 22,


        USERDATA_MJUI_TYPE_GREEN_3 = 1, -- 游戏中麻将牌面类型————绿色
        USERDATA_MJUI_TYPE_BIG    = 2, -- 游戏中麻将牌面类型————大
        USERDATA_MJUI_TYPE_SMALL    = 3, -- 游戏中麻将牌面类型————小
        USERDATA_MJUI_TYPE_BIG_GREEN = 4, -- 游戏中麻将牌面类型————大 绿的
        USERDATA_MJUI_TYPE_BLUE    = 5, -- 游戏中麻将牌面类型————蓝色
        USERDATA_MJUI_TYPE_GREEN_6 = 6, -- 游戏中麻将牌面类型————绿色

        HUANPAI_DIR_NI    = 1,
        HUANPAI_DIR_SHUN    = 0,
        HUANPAI_DIR_DUI    = 2,

        FORBIDDEN_CREATE_ROOM = 1302, -- 禁止开房
        CREATE_ROOM_CLUB_DAYANG = 1303, -- 亲友圈打烊了
        CLUB_MEMBER_HAS_BLACK_PLAYER            = 1304, ----将要进入的俱乐部房间有不可同桌的玩家
        -- 跑得快请求上一轮牌数据  operation：
        POKER_OPERATION_GET_LAST_CHU_CARDS = 111;



        -----
        -- 邻水麻将
        -- GAME_PLAY_RULE_SC_LSMJ = 38,
        -- 定缺
        GAME_OPT_MJ_DING_QUE        = 201,
        -- 庄家买马
        GAME_OPT_MJ_ZHUANG_MAI_MA = 202,
        -- 比番
        GAME_OPT_MJ_BI_FAN        = 203,
        -- 换三张沿用血战麻将原有的
        --底分1~100：
        --16601~16700
        VALUE_LSMJ_DIFENG_BASE    = 16600,


        -- 所有人同意才可解散
        GAME_PLAY_RULE_ALL_AGREEN_4_DISBAND = 204,


        -----
        -- 跑得快16张玩法 经典玩法
        GAME_RULE_PDK_15Z_TRADITIONAL    = -205,
        -- 15张玩法
        GAME_RULE_PDK_15Z_15ZHANG        = 205,
        -- 首局随机出
        GAME_RULE_PDK_RANDOM_FIRST_OUT    = -100,
        -- 炸弹可拆
        GAME_RULE_PDK_BOMB_SPLITABLE        = 206,
        -- 炸弹不可拆
        GAME_RULE_PDK_BOMB_UNSPLITABLE    = -206,
        -- 红10 扎鸟
        GAME_RULE_PDK_RED_10_BIRD        = 207,
        -- 不可4带3
        GAME_SUB_RULE_SI_DAI_3_NO        = -75,

        -- 是否显示牌张数
        GAME_SUB_RULE_SHOW_CARDNUM        = -154,
        GAME_SUB_RULE_DONT_SHOW_CARDNUM    = -155,

        -- 三张少带出完
        GAME_SUB_RULE_3ZHANG_SHAODAI_CHUWAN    = 40,
        -- 三张少带接完
        GAME_SUB_RULE_3ZHANG_SHAODAI_JIEWAN    = 41,
        -- 飞机少带出完
        GAME_SUB_RULE_FEIJI_SHAODAI_CHUWAN    = 42,
        -- 飞机少带接完
        GAME_SUB_RULE_FEIJI_SHAODAI_JIEWAN    = 43,


        -- 飞机少带出完    跑得快新增的需要取反的规则
        GAME_SUB_RULE_FEIJI_SHAODAI_CHUWAN_PDK_NEW    = -302,
        -- 不支持 飞机少带出完
        GAME_SUB_RULE_NOT_FEIJI_SHAODAI_CHUWAN    = 302,


        --/**
        --  * 斗地主叫分玩法
        --  */
        DDZ_RULE_JIAO_FEN = 208,

        DDZ_RULE_JIAO_DIZHU = -208,

        -- 斗地主固定模式
        DDZ_RULE_UNCHANGED = 236,

        -- /**
        --  * 斗地主加倍
        --  */
        DDZ_RULE_JIA_BEI = 209,

        -- 自动提牌
        GAME_SUB_RULE_PDK_AUTO_TIP = -1001,



        -- 过胡操作
        GAME_OPERTAION_CANCEL_HU = 3016;


        -----
        --  * 姊妹对
        --  */
        GAME_SUB_RULE_JIE_MEI_DUI = 106,

        -- /**
        --  * 一条龙
        GAME_SUB_RULE_YI_TIAO_LONG = 107,

        -- /**
        --  * 2人玩法
        GAME_SUB_RULE_2_REN_WAN = -108,



        -----
        -- 合伙人
        CLUB_MEMBER_OP_ADDPARTNER = 9, -- 设置合伙人
        CLUB_MEMBER_OP_CANCEL_PARTNER = 10, -- 取消合伙人
        CLUB_MEMBER_OP_REMOVE_PARTNER_ALL = 11, -- 取消合伙人并踢出其成员
        CLUB_MEMBER_OP_EDIT_PARTNER_PERMISSION = 12, -- 修改合伙人权限

        CLUB_MEMBER_OP_ALLOCATION_PARTNER_MEMBER = 17, -- 分配合伙人成员

        CLUB_PARTNER_PERMISSION_INVITE = 1,
        CLUB_PARTNER_PERMISSION_KNICK = 2,
        CLUB_PARTNER_PERMISSION_VIEW_RECORD = 3,
        CLUB_PARTNER_PERMISSION_SEND_FLOWER = 4,



        -----
        GAME_SUB_RULE_HUAN_3_ZHANG_ANIM = -10149, --换三张动画，客户端新增规则，用于是否播放换三张动画



        -----
        -- 攀枝花麻将 -- GAME_PLAY_RULE_SC_PZHMJ         = 39,
        -- 封顶6番
        GAME_SUB_RULE_FENG_DING_6_FAN    = 108,

        --  * 升番可胡
        GAME_SUB_RULE_SHENG_FAN_KE_HU    = 231,

        -- /**
        --  * 选缺
        --  */
        GAME_SUB_RULE_XUAN_QUE        = 232,

        --  * 不缺
        GAME_SUB_RULE_BU_QUE            = 233,

        --  * 必缺
        GAME_SUB_RULE_BI_QUE            = 234,

        --  * 边卡吊
        GAME_SUB_RULE_BIAN_KA_DIAO    = 235,

        GAME_SUB_RULE_DI_FEN_1            = 16601,
        GAME_SUB_RULE_DI_FEN_2            = 16602,
        GAME_SUB_RULE_DI_FEN_5            = 16605,

        -- 自摸不加翻  
        GAME_SUB_RULE_MJ_ZI_MO_BU_JIA_FAN = -3901,

        -- 胡牌实时计分
        --  * 牌局中实时计分
        GAME_SUB_RULE_CALCULATE_SCORE_AT_ONCE = 212,

        -- 缺万
        GAME_SUB_RULE_MJ_QUE_WAN = -3903,
        GAME_SUB_RULE_MJ_QUE_TONG = -3904,
        GAME_SUB_RULE_MJ_QUE_TIAO = -3905,


        -----
        -- op
        --  * 提示玩家可以执行听牌操作
        GAME_OPERTAION_COULD_TING = 3017;

        --  * 玩家执行听牌操作
        GAME_OPERTAION_TING = 3018;

        --  * 唱歌操作
        GAME_OPERTAION_CHANG_GE = 3019;

        --  * 跳舞操作
        GAME_OPERTAION_TIAO_WU = 3020;

        --  * 玩家执行取消听牌操作
        GAME_OPERTAION_CANCEL_TING = 3021;

        -- * 玩家执行取消请操作
        GAME_OPERATION_CANCEL_QING = 3029;

        --  * 玩家进入摸打模式
        GAME_OPERTAION_ENTER_MO_DA_MODE = 3023;

        --  * 天听
        GAME_OPERTAION_TIAN_TING = 3025;

        --  * 玩家退出摸打模式
        GAME_OPERTAION_OUT_MO_DA_MODE = 3026;

        -- 通知庄家天听
        GAME_OPERTAION_DEAR_TIAN_TING = 3041;

        -----
        -- cardType enum
        CARD_TYPE_NORMAL = 1,
        CARD_TYPE_NORMAL_BACK = 2,
        CARD_TYPE_LAYDOWN = 3,

        -- howns 2020-4-14 头像类型定义
        DAOJU_HEAD_FRAME_TYPE_INIT = 0,

        -----
        -- 斗地主 -- 斗地主固定模式 DDZ_RULE_UNCHANGED = 236,
        DDZ_SUB_RULE_UC_1_FEN = 237,
        DDZ_SUB_RULE_UC_2_FEN = 238,
        DDZ_SUB_RULE_UC_3_FEN = 239,

        -----
        -- GAME_PLAY_RULE_SC_MZMJ(40),   //绵竹麻将
        -- 门清
        GAME_SUB_RULE_MENQING = 241,
        -- 门清可接炮
        GAME_SUB_RULE_MENQING_KE_JIEPAO = 240,
        -- 平胡可接炮
        GAME_SUB_RULE_PINGHU_KE_JIEPAO = 60,

        GAME_SUB_RULE_3_REN_WAN = -4001,

        --幺鸡麻将
        YAOJI_3_FAN_TOP = 200, --幺鸡3番封顶
        YAOJI_4_FAN_TOP = 201, --幺鸡4番封顶
        YAOJI_5_FAN_TOP = 202, --幺鸡5番封顶
        YAOJI_SINGLE_COLOR_CHANGE = 203, --幺鸡单色换
        YAOJI_MIX_COLOR_CHANGE = 204, --幺鸡任意换
        YAOJI_MIX_COLOR_MIX_CHANGE = 205, --幺鸡任意混换
        YAOJI_MEN_QING = 209, --幺鸡门清
        YAOJI_ZHONG_ZHANG = 217, --幺鸡中张
        YAOJI_HAI_DI = 218, --幺鸡海底
        YAOJI_JIN_GOU_GOU = 212, --幺鸡金勾勾
        YAOJI_6_FAN_TOP = 214, --幺鸡6番封顶
        YAOJI_CAL_IN_TIME = 215, --幺鸡实时计分
        YAOJI_CAL_AFTER = 219, --幺鸡小计分再计分
        BASE_NEED_CREATOR_CLICK_BEGIN = 49, --幺鸡房主开始
        BASE_NEED_PLAYER_CLICK_READY = 48, --幺鸡准备开始
        BASE_NEED_PLAYER_CLICK_READY_TIME_LIMIT = 47, --幺鸡限时准备

        -----
        -- 修改圈信息返回，公告
        CLUB_MODIFY_RESULT_SUC = 0,
        CLUB_MODIFY_RESULT_ERROR = 1,
        CLUB_MODIFY_RESULT_BAD_WORD = 2,

        --//其它玩家离开牌桌的时间
        MAHJONG_OPERATION_OTHER_LEFT_TABLE_TIME = 3028;


        --  * 刷新牌桌得分
        GAME_OPERTAION_REFRESH_VIP_GOLD = 3027;

        --  * 杠上杠翻倍
        GANG_AFTER_GANG = 213,

        -- 服务端桌子显示类型
        CLUB_TABLE_SHOW_SVR_TYPE_CLASSICAL = 0,
        CLUB_TABLE_SHOW_SVR_TYPE_TEA = 1,

        --  * 轮庄
        GAME_SUB_RULE_ROUND_ZHUANG = 242,

        --  * 赢家当庄
        GAME_SUB_RULE_WINNER_ZHUANG = 244,

        -- 首局随机庄
        GAME_SUB_RULE_1ST_RAND_ZHUANG = 246,
        GAME_SUB_RULE_1ST_FANGZHU_ZHUANG = 245,

        --新底分 251-260 区间是底分值
        GAME_SUB_RULE_DIFEN = 250,

        -- 跑得快极速模式
        GAME_SUB_RULE_PDK_FATEST_MODE = -10099,
        -- 跑得快普通模式
        GAME_SUB_RULE_PDK_NORMAL_MODE = -10100,


        -----
        -- pdk_chongzhou
        -- 1炸封顶/**
        -- * 1个炸弹 x2
        --FAN_1_ZHA(259),
        GAME_SUB_RULE_FENGDING_1_ZHA = 259,
        -- 3炸封顶/**
        -- * 3个炸弹 x8
        --FAN_3_ZHA(260),
        GAME_SUB_RULE_FENGDING_3_ZHA = 260,
        -- 不封顶/**
        -- * 每有一个 x2
        --FAN_NO_CEIL(261),
        GAME_SUB_RULE_FENGDING_NO = 261,

        -- 固定减牌/**
        -- * 固定减少牌
        --FIXED_REDUCE_CARD(262),
        GAME_SUB_RULE_REMOVE_CARD_CONST = 262,
        -- 随机减牌/**
        -- * 随机减少牌
        --RANDOM_REDUCE_CARD(263)
        GAME_SUB_RULE_REMOVE_CARD_RANDOM = 263,
        -- 10张跑得快 底分
        GAME_SUB_RULE_DIFEN_10Z_PDK = 264,
        -- 跑得快10张值跨域
        CONST_DI_FEN_RANGE_PDK_10Z = 10,

        -- 关牌
        GAME_OPERATION_GUANPAI = 108,
        -- 确定关牌
        GAME_OPERATION_GUANPAI_SURE = 109,
        -- 取消关牌
        GAME_OPERATION_GUANPAI_CANCEL = 110,

        -------------
        --昏地主
        --3炸封顶
        GAME_SUB_RULE_HDZ_FENGDING_3_ZHA = 21,
        --5炸封顶
        GAME_SUB_RULE_HDZ_FENGDING_5_ZHA = 22,
        --不封顶
        GAME_SUB_RULE_HDZ_FENGDING_NO = 23,
        --无癞子
        GAME_SUB_RULE_HDZ_NO_LAIZI = 11,
        --一个癞子
        GAME_SUB_RULE_HDZ_1_LAIZI = 12,
        --确认地主
        GAME_OPERATION_SELECT_DZ = 282,
        --选择卧底牌
        GAME_OPERATION_SELECT_WD = 113,
        --卧底牌出现
        GAME_OPERATION_WD_CARD_SURE = 114,
        --倒牌
        GAME_OPERATION_DAOPAI = 286,
        --确认倒
        GAME_OPERATION_DAOPAI_SURE = 107,

        --幺鸡麻将新增
        GAME_OPERTAION_PLAYER_FAST_START = 2040; --游戏界面选中快速开始(非创房界面)

        GAME_OPERTAION_FAST_START_BEGIN = 2041; --快速开始

        GAME_OPERTAION_NOTIFY_PLAYER_READY = 1004, -- 提示玩家准备

        MAHJONG_PLAYER_GANG_FAIL_REMOVE = 1376256,

        MAHJONG_PLAYER_OPT_HU = 1114112;
        MAHJONG_OPERTAION_NOTIFY = 50331648,
        MAHJONG_PLAYER_OPT_PENG = 1179648,
        MAHJONG_PLAYER_OPT_GANG = 1245184,
        MAHJONG_OPERTAION_CANCEL_NOTIFY = 83886080, --回放的“过”操作提示

        GAME_PLAY_OPT_TI = 1114112;
        MAHJONG_OPERTAION_HUAN_SAN_ZHANG1 = 1048578;--换完3张
        --end

        --提牌操作
        GAME_OPERTAION_TI_CARD = 3013;

        -- 房主开始游戏
        GAME_OPERATION_CREATOR_CLICK_READY    = 3037,
        -- 限制准备剩余时间通知
        GAME_OPERATION_PLAYER_LIMIT_TIME_READY = 3038,

        -----
        -- 幺鸡新准备规则
        GAME_SUB_RULE_READY_START        = 99, -- 手动准备 、玩家准备
        -- 房主开始
        GAME_SUB_RULE_CREATOR_READY_START = 14001,
        -- 玩家准备，限时准备
        GAME_SUB_RULE_TIME_LIMIT_READY_START = 14002,

        -- 房主未解散导致房间解散
        GAME_ROOM_DISBAND_PLAYER_NOT_READY = 6,
        -- 玩家未准备被踢出
        GAME_ROOM_KNICKED_PLAYER_NOT_READY = 7,


        -- 血战不放牛过庄胡  用反值
        GAME_SUB_RULE_FANG_NIU_GUO_ZHUANG_HU_NOT = 299,
        -- 放牛过庄胡
        GAME_SUB_RULE_FANG_NIU_GUO_ZHUANG_HU = -299,


        ----------德阳跑得快----------------
        ---炸弹封顶
        GAME_SUB_RULE_DYPDK_ZHA_DAN1_FENG_DING = 284,
        GAME_SUB_RULE_DYPDK_ZHA_DAN2_FENG_DING = 285,
        GAME_SUB_RULE_DYPDK_ZHA_DAN3_FENG_DING = 286,
        --炸弹翻倍
        GAME_SUB_RULE_DYPDK_IS_ZHA_DAN_FAN_BEI = 287,

        --四个A/5关牌
        GAME_SUB_RULE_DYPDK_FOUR_A_GUAN_PAI    = 288,
        GAME_SUB_RULE_DYPDK_ALL_XIAO_GUAN_PAI    = 289,
        GAME_SUB_RULE_DYPDK_ALL_DA_GUAN_PAI    = 290,
        ----全黑全红全对全连关牌
        GAME_SUB_RULE_DYPDK_SPECIAL_GUAN_PAI    = 291,
        --黑桃5先出
        GAME_SUB_RULE_SPADE5_FIRST_CHC        = 292,


        ----- 二人斗地主
        -- GAME_PLAY_RULE_SCPK_DDZ_2P                         = 27,    -- 二人斗地主
        -- 封顶 24分
        GAME_SUB_RULE_FENGDING_24_FEN        = 11,
        -- 封顶 48分
        GAME_SUB_RULE_FENGDING_48_FEN        = 12,
        -- 封顶 96分
        GAME_SUB_RULE_FENGDING_96_FEN        = 13,
        -- 封顶 192分
        GAME_SUB_RULE_FENGDING_192_FEN        = 14,
        -- 让牌
        GAME_SUB_RULE_RANG_PAI                = 21,
        -- 认输
        GAME_SUB_RULE_GIVE_UP                = 22,


        -----
        -- GAME_PLAY_RULE_SC_MJ_NANCHONG   = 48  南充麻将
        -- 不飘
        GAME_SUB_RULE_PIAO_NO = 370,
        -- 飘3个
        GAME_SUB_RULE_PIAO_3 = 366,
        GAME_SUB_RULE_PIAO_4 = 367,
        -- 飘5个
        GAME_SUB_RULE_PIAO_5 = 368,
        -- 摆牌
        GAME_SUB_RULE_BAI_PAI = 369,

        -- * 通知玩家有摆牌操作
        GAME_OPERTAION_BAI_PAI = 3048,

        --/**
        -- * 通知飘的结果
        -- */
        GAME_OPERTAION_PIAO_RESULT = 3044;

        --/**
        -- * 飘
        -- */
        GAME_OPERTAION_PIAO = 3045;

        --/**
        -- * 不飘
        -- */
        GAME_OPERTAION_NOT_PIAO = 3046;

        --/**
        -- * 通知全部玩家飘的结果，用于断线重连场景
        -- */
        GAME_OPERTAION_PIAO_RESULT_ALL = 3047;

        --/**
        -- * 通知玩家摆牌错误
        -- */
        GAME_OPERTAION_BAI_PAI_FAIL = 3049;


        -- * 玩家摆的牌，断线重连
        GAME_OPERTAION_BAI_PAI_ALL = 3050,

        GAME_OPERTAION_PIAO_RESULT_GAMELOG = 3051;

        --/**
        -- * 回放提示摆牌操作
        -- */
        GAME_OPERTAION_TIP_BAI_GAMELOG = 3052,

        OP_VALUE_NONE = -1,
        OP_VALUE_NOT_PIAO = 0,
        OP_VALUE_PIAO1 = 1,
        OP_VALUE_PIAO2 = 2,

        -----------绵阳麻将----------
        ----
        GAME_SUB_RULE_MYMJ_FENDING_3 = 56, --封顶3番
        GAME_SUB_RULE_MYMJ_FENDING_4 = 57, --封顶4番
        GAME_SUB_RULE_MYMJ_FENDING_5 = 105, --封顶5番

        GAME_SUB_RULE_MYMJ_DIFEN_1 = 264, --底分1分
        GAME_SUB_RULE_MYMJ_DIFEN_2 = 265, --底分2分
        GAME_SUB_RULE_MYMJ_DIFEN_5 = 268, --底分5分
        GAME_SUB_RULE_MYMJ_DIFEN_10 = 273, --底分10分

        GAME_SUB_RULE_MYMJ_CHA_DA = 283, --查大叫
        GAME_SUB_RULE_MYMJ_CHA_XIAO = 376, --查小叫

        GAME_SUB_RULE_MYMJ_FANG_3 = 375, --3房
        GAME_SUB_RULE_MYMJ_FANG_2 = 374, --2房

        GAME_SUB_RULE_MYMJ_ZIMO_JD = 45, --自摸加底
        GAME_SUB_RULE_MYMJ_ZIMO_JF = 46, --自摸加番

        GAME_SUB_RULE_MYMJ_DGH_DP = 47, --点杠花(点炮)
        GAME_SUB_RULE_MYMJ_DGH_ZM = 48, --点杠花(自摸)

        GAME_SUB_RULE_MYMJ_QH_FAN_0 = -373, --起胡不限
        GAME_SUB_RULE_MYMJ_QH_FAN_1 = 373, --1番起胡

        GAME_SUB_RULE_MYMJ_PIAO = 377, --每局选飘
        GAME_SUB_RULE_MYMJ_PIAO_1 = 378, --甩飘
        GAME_SUB_RULE_MYMJ_PIAO_0 = 370, --不飘

        GAME_SUB_RULE_MYMJ_HUANZHANG_NO = -49, --不换三张
        --GAME_SUB_RULE_MYMJ_HUANZHANG_OLD = 49,    --传统换三张
        --GAME_SUB_RULE_MYMJ_HUANZHANG_NEW = 372,   --任意换三张

        GAME_SUB_RULE_MYMJ_TIAN_DI_HU = 53, --天地胡
        GAME_SUB_RULE_MYMJ_JI_SHI_YU = 381, --及时雨
        GAME_SUB_RULE_MYMJ_YJ_JD = 51, --幺九将对
        GAME_SUB_RULE_MYMJ_JIN_GOU_DIAO = 380, --金钩钓
        GAME_SUB_RULE_MYMJ_ZHUAN_YU = 382, --转雨
        GAME_SUB_RULE_MYMJ_HAI_DI_LAO = 379, --海底捞/炮
        GAME_SUB_RULE_MYMJ_MENQING_ZHONGZHANG = 52, --门清中张
        GAME_SUB_RULE_MYMJ_YI_ZHANG_KE_GANG = 371, --最后一张可杠

        -- 通知甩飘
        GAME_OPERTAION_SHUAI_PIAO = 3054,

        VIEW_ADAPT_MODE_DEFAULT = 0,
        -- 固定宽高比的
        VIEW_ADAPT_MODE_FIXED = 1,

        --防沉迷模式
        ANTI_ADDICTED_MODE_NORMAL = 0, --不弹窗不强制退出模式
        ANTI_ADDICTED_MODE_HARD = 1, --强制弹窗强制退出模式
        ANTI_ADDICTED_MODE_SOFT = 2, --强制弹窗不强制退出模式

        --年龄身份
        PLAYER_AGE_NONAGE = 0, --未成年
        PLAYER_AGE_ADULT = 1, --已成年
        PLAYER_AGE_UNKNOWN = 2, --未知
        ADUIT_AGE = 18,

        --用户身份
        PLAYER_IDENTITY_NEW = 0, --新用户
        PLAYER_IDENTITY_OLD = 1, --老用户
        PLAYER_IDENTITY_UNKNOWN = 2, --未知

        HEALTH_TIP_WINDOW_TAG_1 = 666666,
        HEALTH_TIP_WINDOW_TAG_2 = 777777,


        GAME_COST_ID = 7000, --游戏内幸运表情和洗牌消费标识（暂时表情为7001-7003，洗牌为7004）
        GAME_OPERATION_WASH_CARD = 3043, --玩家洗牌
        --  * 比赛场奖励货币类型 * 1 * 2房卡 * 3金币 * 4积分 *5道具
        MATCH_AWARD_TYPE_NONE    = 0,
        MATCH_AWARD_TYPE_RMB        = 1,
        MATCH_AWARD_TYPE_DIAMOND    = 2,
        MATCH_AWARD_TYPE_GOLD    = 3,
        MATCH_AWARD_TYPE_JIFEN    = 4,
        MATCH_AWARD_TYPE_DAOJU    = 5,

        BTN_COUNT_VALUE = 10000, --按键统计基础值标识
        --个验区分id  新包 BTN_COUNT_VALUE + 301 ，老包 BTN_COUNT_VALUE + 302
        --新包引导：区分最新线上包 303 点击更新 304 点击关闭 305 点击下载 306
        -----
        -- 商城相关
        ItemUnloadResult = {
            -- //卸下成功
            UNLOAD_SUCCESS = 0;
            -- //商品未找到
            NOT_FOUND_GOOD = 1;
            -- //道具已过期
            BE_OVERDUE = 2;
            -- //道具已经卸下 不可以再次卸下
            HAS_UNLOAD = 3;
            -- //道具正在使用中， 不可以再次使用
            HAS_IN_USE = 4;
            -- //有相类型道具正在使用中， 不可以再次使用
            SAME_GOOD_IN_USED = 5;
            -- //玩家正在牌局中不可以使用或者卸下
            PLAYER_IN_TABLE = 6;
        },

        -- 使用道具结果
        ItemUseResult = {
            -- 使用道具
            SUCCESS = 0;
            -- //道具不存在
            PLAYER_GOOD_NOT_EXIST = 1;
            -- //道具数量不足
            PLAYER_GOOD_NUM_NOT_ENOHGH = 2;
            -- //已存在相同凭证类buff
            HAS_VOUCHER_BUFF_ERROR = 3;
            -- //当前状态不可使用道具
            USE_GOOD_ERROR = 4;
            UNKNOWN_ERROR = -1;
        },

        ItemRenewResult = {
            -- //续费成功
            EXTEND_SUCCESS = 0;
            -- //商品未找到
            NOT_FOUND_GOOD = 1;
            -- //商品已经下架
            GOOD_LOWER_SHELF = 2;
            -- //玩家尚未拥有此商品
            NOT_HAVE_GOOD = 3;
            -- //商品价格异常
            GOOD_PRICE_ERROR = 4;
            -- //钻石不足
            NOT_FOUND_DIAMOND = 5;
            -- //金币不足
            NOT_FOUND_GOLD = 6;
            -- //续费失败 未知错误
            EXTEND_ERROR = 7;
        },

        ItemBuyResult = {

            SUCCESS = 0;
            -- //道具不存在
            GOOD_NOT_EXIST = 1;
            -- //道具状态异常（下架、删除）
            GOOD_STATUS_ERROR = 2;
            -- //不够支付
            COST_NOT_ENOUGH = 3;
            -- //参数错误
            COST_CONTENT_NUM_ERROR = 4;
            UNKNOWN_ERROR = -1;
        },

        -- 道具时效类型
        ItemDurationType = {
            -- 无有效期的，一次性买断的
            Forever = 0,
            -- 小局
            Round = 1,
            -- 大局
            Group = 2,
            -- 分钟
            Minitues = 3,
            -- 小时
            Hour = 4,
            -- 天
            Day = 5,
        },


        -- 道具购买类型
        ItemBuyType = {
            -- 购买
            Buy = 1,

            -- 兑换
            Exchange = 2,

            -- 续费
            Renew = 3,
        },

        ItemUseType = {
            -- 自动用
            AUTO = 1,
            -- 手动用
            Manual = 2,
            GAMEDI
        },

        -- PlayerGoodMsg。goodState  ,,  0未卸下（使用中）1.卸下（未使用）
        ItemUseState = {
            Equipt = 0,
            -- 卸下状态（未使用）
            Unequipt = 1,
        },

        -- 货币类型  对应服务端
        CurrencyType = {
            -- 钻石
            Diamon = 1,
            -- 金币
            Gold = 2,
        },

        CurrencyName = {
            [1] = "房卡",
            [2] = "金币",
        },

        -- 与上文货币类型对应
        CurrencyIcon = {
            [1] = "shopNew/diamondsImg1.png",
            [2] = "shopNew/goldImg1.png",
        },

        ----道具奖励图片
        DAO_JU = {
            [1] = { "shop/item/shop_1.png", "记牌器" },
            [2] = { "shop/item/shop_2.png", "洗牌卡" },
            [3] = { "shop/item/shop_3.png", "门票" },
            [4] = { "shop/item/shop_4.png", "改名卡" },
            [5] = { "shop/item/shop_zycard_cs.png", "财神" },
            [6] = { "tehui/text_che.png", "跑车" },
            [7] = { "tehui/text_shandian.png", "闪电" },
            [8] = { "shop/item/shop_yanhua.png", "烟花" },
            [9] = { "shop/HeadImgType/head9.png", "2020加油" },
            [10] = { "shop/HeadImgType/head10.png", "必胜相框" },
            [11] = { "shop/HeadImgType/head11.png", "蔚蓝欢乐" },
            [12] = { "shop/HeadImgType/head12.png", "欢乐相框" },
            [13] = { "shop/HeadImgType/head13.png", "鼠年相框" },
            [14] = { "shop/item/shop_14.png", "玉貔貅" },
            [15] = { "shop/item/shop_15.png", "金蟾" },
            [16] = { "shop/item/shop_zycard_cs.png", "财神卡" },
            [17] = { "shop/item/shop_zycard_wash.png", "洗手卡" },
            [18] = { "shop/item/shop_zycard_cat.png", "招财猫" },
            [20] = { "shop/item/shop_20.png", "购钻卡" },
            [21] = { "shop/item/shop_21.png", "购钻卡" },
            [22] = { "shop/item/shop_22.png", "购钻卡" },
            [23] = { "shop/item/shop_23.png", "折扣卡" },
            [24] = { "shop/item/shop_24.png", "折扣卡" },
            [25] = { "shop/item/shop_25.png", "折扣卡" },
            [26] = { "shop/item/image_yxt.png", "樱小桃" },
            [27] = { "shop/item/image_lxl.png", "绿小萝" },
            [28] = { "shop/item/image_fage.png", "发哥" },
            [29] = { "shop/item/image_lele.png", "乐乐" },
        },

        -- 入场动画延时
        ENTER_ROOM_FX_DELAY = 0.5,


        HUDONG_ENABLED = {
            true,
            true,
            true,
            true,
            true,
            true,
        },
        -- “拖鞋”“快点”“倒茶”“锤子”“抹屎”“点赞”
        BIAO_QING = {
            "拖鞋",
            "快点",
            "倒茶",
            "锤子",
            "抹屎",
            "点赞",
        },

        -- 亲友圈操作返回
        CLUBOP_RESULT = {
            SUCCESS = 0;
            ERROR = 1;
            CLUB_NOT_FOUND = 2;
            CLUB_PRIV_ERROR = 3;
            CLUB_TABLE_STATE_ERROR = 4;
            -- 桌子解散
            CLUB_TABLE_DISS_MISS = 5;
        },

        --广安麻将
        GAME_SUB_RULE_MJ_4P3R = 399, --四人三房
        GAME_SUB_RULE_MJ_3P3R = 400, --三人三房
        GAME_SUB_RULE_MJ_3P2R = 401, --三人两房
        GAME_SUB_RULE_MJ_2P3R = 402, --两人三房
        GAME_SUB_RULE_MJ_2P2R = 403, --两人两房
        GAME_SUB_RULE_MJ_HALF_FIVE = 404, --2.5冲
        GAME_SUB_RULE_MJ_FULL_FIVE = 405, --5冲
        GAME_SUB_RULE_MJ_SAME_COLOR = 406, --同花色
        GAME_SUB_RULE_MJ_DIFF_COLOR = 407, --不同花色
        GAME_SUB_RULE_MJ_NOT_EXCHANGE = 408, --不换
        --GAME_SUB_RULE_MJ_ALLOW_HU = 108, --过水加颗可胡
        --GAME_SUB_RULE_MJ_NOT_ALLOW_HU = 109, --不可胡
        GAME_SUB_RULE_MJ_DLJS = 999, --打立结束
        GAME_SUB_RULE_MJ_ZIPAI_FEIJI = 410, --字牌算飞机
        GAME_SUB_RULE_MJ_DLJS_SCORE_1 = 409, --打立结束底分1(只用做规则显示，实际传409就是选择了底分1)
        GAME_SUB_RULE_MJ_DLJS_SCORE_2 = 411, --打立结束底分2
        GAME_SUB_RULE_MJ_GA_DIFEN = 16600, --广安麻将底分（16601-16610）

        --新增主玩法一律从20001开始
        GAME_PLAY_RULE_SCMJ_XZ_JOKER = 20001,

        --新增子玩法一律从30001开始
        GAME_PLAY_RULE_XZ_JIAFAN_NOJOKER = 30001, --无癞子加番
        GAME_PLAY_RULE_XZ_2FEN_HU = 30002, --两番起胡

        XZ_MAH_JOKERVAL = 127, --血战癞子牌值

        --specfcard operation
        --1 手牌   2 单放   3 牌墙  4 结束做牌  5 牌墙数据 6 做扑克牌数据
        DO_CARD_TYPE_HANDCARD = 1,
        DO_CARD_TYPE_DFCARD = 2,
        DO_CARD_TYPE_WALLCARD = 3,
        DO_CARD_TYPE_ENDSPECF = 4,
        DO_CARD_TYPE_REQSPECF = 5,
        DO_CARD_TYPE_SPECFPOKER = 6,
    }
    cc.exports.g_UserDataTable =    {
        headImgPng = "headImg.png", --自己头像
        effectVolume = -1,
        musicVolume = -1,
        gameGPSSetState = false, -- 游戏GPS设置开启状态
        gameBgColorType = 2, --游戏界面背景颜色类型
        gameBgColorTypeMJ = 1, -- 麻将桌布
        gameVersion = "1.0",
        gameLanguageCfgIndex = 1, --游戏内聊天语音使用的语言配置索引,1,普通话;2,柳州话
        nickname = "",
        sex = 0,
        gameEmojClosed = 0, -- 游戏互动表情开关，0为开，1为关
        gpsWarningSwitch = 0, -- 有距离≤100米的两个玩家时自动弹出距离提示
        bigHandCard = 0, -- 手牌牌面放大
        gameEmojCount = 0, --每局游戏互动表情使用计数
        _playerIndex = 0, --用于判断热更白名单
        mjCardType = 1, --默认使用牌的类型
        pkCardType = 1, -- 扑克类型
        playerVoiceClose = 0,
        createRoomWanfaTishi = 1,
        lastRoomId = nil,
        realTimeVoiceSwitchOn = true, --是否打开实时语音监听
        gameWamfaSetCache        = { {}, {}, {}, {}, {}, {} }, ---游戏玩法缓存  vip麻将，vip扑克，俱乐部麻将，俱乐部扑克 vip字牌  俱乐部字牌
        creatRoomTime        = { {}, {} }, --保存创建房间时间 vip ,俱乐部
        isGuohuNotice        = false, -- 麻将过胡提示开关
        ignoreClubTableInvite = false,
        vibrateNotify = false,
    }

    cc.exports.g_msgDefinitions = {
        MSG_HEART_BEATING = 10551297,
        MSG_HEART_BEATING_ACK = 10551298,

        --***链接之后发送确认链接消息***--
        MSG_LINK_VALIDATION = 10551299,
        MSG_LINK_VALIDATION_ACK = 10551300,
        ------------------------------------------------------------------------------------------------------------------------------------
        GAME_OPERTAION_CARD_INVALID = 2015,
        MSG_NOTIFY_PLAYER_OPERATION = 2015,
        GAME_OPERTAION_CARD_NOT_EXIST = 2014,

        ----游戏消息
        --**心跳消息发送***--
        MSG_GAME_LOGIN = 12779521,

        MSG_GAME_START_GAME_REQUEST = 12779523,
        MSG_GAME_START_GAME_REQUEST_ACK = 12779524,

        --**客户端通知游戏服务器，玩家的某些行为***--
        MSG_GAME_GAME_OPERTAION = 12779528,
        --**客户端通知游戏服务器，玩家的某些行为***--
        MSG_GAME_GAME_OPERTAION_ACK = 12779529,

        --***提交gps坐标***--
        MSG_UPDATE_GPS_POSITION = 12779530,

        --**游戏结束**--
        MSG_GAME_GAME_OVER = 12779532,
        MSG_GAME_GAME_OVER_ACK = 12779533,
        MSG_GAME_POKER_GAME_OVER_ACK = 12779608,

        --**客户端通知服务端获取礼物列表消息*--
        MSG_GAME_GET_PRIZE_LIST = 12779537,
        --**服务端返回客户端返回礼物列表消息*--
        MSG_GAME_GET_PRIZE_LIST_ACK = 12779538,

        --**客户端通知服务端返回排行榜的消息*--
        MSG_GAME_GET_RANKING_LIST = 12779539,
        --**服务端返回给客户端的排行榜消息*--
        MSG_GAME_GET_RANKING_LIST_ACK = 12779540,

        --**服务端通知客户端滚动条消息*--
        MSG_GAME_SEND_SCROLL_MES = 12779541,

        --**服务端返回给客户端，通知客户端更新一个属性*--
        MSG_GAME_UPDATE_PLAYER_ONE_PROPERTY = 12779542,

        --** 服务器通知客户端更新整个道具列表***--
        MSG_GAME_UPDATE_PLAYER_ITEM_LIST = 12779543,

        --** 购买大礼包返回***--
        MSG_GAME_BUY_BIG_GIFT_PACK_ACK = 12779544,

        --**客户端通知服务端返回动物彩票个人数据的消息*--
        MSG_GAME_GET_ANIMALINFOR = 12779545,
        --**服务端返回给客户端的动物彩票个人数据消息*--
        MSG_GAME_GET_ANIMALINFOR_ACK = 12779546,
        --**客户端通知服务端客户购买了彩票并要求返回动物彩票个人数据的消息*--
        MSG_GAME_BUY_TICKET = 12779547,
        --**客户端通知服务端客户领取了奖金并要求返回动物彩票个人数据的消息*--
        MSG_GAME_GET_ANIMALAWARD = 12779548,


        --**客户端请求获得玩家任务列表*--
        MSG_CLIENT_GET_PLAYER_TASK_MSG = 12779549,
        --**客户端请求获得玩家任务列表 返回*--
        MSG_CLIENT_GET_PLAYER_TASK_MSG_ACK = 12779551,

        --***玩家发送一个操作给服务器，带一个字符串***--
        MSG_GAME_SEND_PLAYER_OPERATIOIN_STRING = 12779552,

        ----玩家断线重链接
        MSG_GAME_RECONNECT_IN = 12779553,

        ----换名字返回
        MSG_GAME_CHANGENAME_ACK = 12779554,

        MSG_GAME_LOGIN_ACK = 12779555,

        MSG_GAME_GET_PLAYER_FINDFRIEND_ACK = 12779556,

        ---- 注册时获取手机注册验证码
        MSG_MOBILE_CODE = 12779603,
        MSG_MOBILE_CODE_ACK = 12779604,

        ----注册新用户
        MSG_GAME_REGISTER_PLAYER = 12779605,

        ----牌局开始
        MSG_GAME_START_GAME = 12779616,
        MSG_GAME_POKER_START_GAME = 12779609,
        ----提醒玩家进行操作
        MSG_GAME_PLAYER_OPERATION_NOTIFY = 12779617,
        MSG_GAME_PLAYER_TABLE_OPERATION = 12779618,

        ---扩展 服务端通知玩家可以进行某种操作
        MSG_NOTIFY_PLAYER_TABLE_OPERATION_EX = 12804096,

        ----创建vip房间
        MSG_GAME_VIP_CREATE_ROOM = 12779776,
        MSG_GAME_SEARCH_VIP_ROOM_ACK = 12779777,
        MSG_GAME_ENTER_VIP_ROOM = 12779778,

        MSG_GAME_VIP_ROOM_CLOSE = 12780032,

        MSG_GROUP_GAME_END = 13893632,
        ----中心服务器相关消息
        MSG_GROUP_CENTER_SERVER_START = 13893632,

        MSG_GROUP_CENTER_SERVER_REG_GS = 13893633,
        MSG_GROUP_CENTER_SERVER_REG_GS_ACK = 13893634,
        MSG_GROUP_CENTER_SERVER_GS_UPDATE = 13893635,

        ----客户端向中心服务器请求逻辑服地址
        MSG_GROUP_CENTER_SERVER_GET_GAME_SERVER_INFO = 13893888,
        MSG_GROUP_CENTER_SERVER_GET_GAME_SERVER_INFO_ACK = 13893889,

        ----游戏服向中心服请求创建新用户
        MSG_GROUP_CENTER_SERVER_CREATE_NEW_PLAYER = 13894144,
        MSG_GROUP_CENTER_SERVER_CREATE_NEW_PLAYER_ACK = 13894145,
        ----
        ----游戏服向中心服请求查找用户
        MSG_GROUP_CENTER_SERVER_FIND_PLAYER = 13894146,
        MSG_GROUP_CENTER_SERVER_FIND_PLAYER_ACK = 13894147,

        ----游戏服向中心服请求昵称是否存在
        MSG_GROUP_CENTER_SERVER_FIND_NICKNAME = 13894148,
        MSG_GROUP_CENTER_SERVER_FIND_NICKNAME_ACK = 13894149,

        MSG_GAME_PLAYER_UPDATE_NICKNAME_ACK = 12779779,
        MSG_GAME_PLAYER_UPDATE_PASSWORD_ACK = 12779780,
        MSG_GAME_PLAYER_UPDATE_LOGO_ACK = 12779781,
        MSG_GAME_PLAYER_UPDATE_CANFRIEND_ACK = 12779782,
        MSG_GAME_PLAYER_UPDATE_ACCOUNT_ACK = 12779783,

        MSG_GAME_REFRESH_ITEM_BASE = 12779784,
        MSG_GAME_REFRESH_ITEM_BASE_ACK = 12779785,
        MSG_GAME_PAY_ITEM_BASE_COMPLETE = 12779792,

        MSG_GAME_TEST_CARD = 12780048,
        MSG_GAME_TEST_CARD_ACK = 12780049,

        ----获取好友列表
        MSG_GAME_GET_FRIEND_LIST = 13894150,
        MSG_GAME_GET_FRIEND_LIST_ACK = 13894150,


        MSG_GROUP_CENTER_SERVER_END = 13959168,

        --// 充值检测
        MSG_CHECK_RECHARGE_LIMIT = 12779576,
        MSG_CHECK_RECHARGE_LIMIT_ACK = 12779577,

        ----客户请求查询好友
        MSG_FRIEND_PROPERTY = 12779648,
        MSG_FRIEND_PROPERTY_ACK = 12779649,
        MSG_GAME_GET_FRIEND_ACK = 12779650,
        MSG_GAME_ADD_FRIEND_ACK = 12779651,
        MSG_FRIEND_ONLINE_ACK = 12779652,
        ----发回刷新的好友信息
        MSG_FRIEND_REFLESHNFO_ACK = 12779653,

        ----查询玩家VIP房间记录
        MSG_GET_VIP_ROOM_RECORD = 12779619,
        MSG_GET_VIP_ROOM_RECORD_ACK = 12779620,

        ----查询指定房间游戏记录
        MSG_GET_VIP_GAME_RECORD = 12779621,
        MSG_GET_VIP_GAME_RECORD_ACK = 12779622,

        ----信息模块
        MSG_POST_USER_INFO = 12779623,
        MSG_POST_USER_INFO_ACK = 12779624,

        ----购买道具
        MSG_REQUEST_BUY_DAOJU = 12779633, --发送购买道具
        MSG_REQUEST_BUY_DAOJU_ACK = 12779634, --购买道具返回消息

        ----帐号在其他地方登录
        MSG_GAME_OTHERLOGIN_ACK = 12780037,

        MSG_GLOBAL_CONFIG_CLIENT = 12781826, --0xc30600,

        MSG_GAME_PAY_ITEM_BASE_IPA_COMPLETE = 12779793,

        ----游戏中聊天消息
        MSG_TALKING_IN_GAME = 12780288,

        --**系统消息通知客户端*--
        MSG_SYSTEM_NOTIFY_MSG = 12780800,

        ----实名认证信息
        MSG_REAL_NAME_AUTHENTICATION = 12781312,
        MSG_REAL_NAME_AUTHENTICATION_ACK = 12781313,

        --手机验证码登录
        MSG_PHONE_LOGIN_ACK = 12779603,
        ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

        ----支付开关
        CONF_PAY_SWITCH = 4020,

        ----分享链接
        WEIXIN_SHARE_URL = 4030,
        WEIXIN_SHARE_URL_IOS = 4031,
        ----分享内容
        WEIXIN_SHARE_CONTENT = 4032,
        WEIXIN_SHARE_FRIEND_CONTENT = 4033,

        ----分享活动
        WEIXIN_SHARE_FRIEND_DIAMOND_CONTENT = 10001,
        ----分享活动安卓链接
        WEIXIN_SHARE_FRIEND_DIAMOND_URL_ANDROID = 10002,
        ----分享活动ios链接
        WEIXIN_SHARE_FRIEND_DIAMOND_URL_IOS = 10003,
        ----分享活动登陆提示
        WEIXIN_SHARE_FRIEND_DIAMOND_TIP = 10004,
        ----分享魔窗的链接
        WEIXIN_SHARE_MAGIC_WINDOW_LINK = 63001,
        ----分享俱乐部邀请的链接
        WEIXIN_SHARE_INVITE_CLUB_LINK = 63002,

        -- 战绩助手分享链接
        SHARE_CLUB_RECORD_HELPER_LINK = 63003,


        MSG_WX_GONGZHONGHAO_ACTIVITY = 12781315, ----微信公众号相关
        ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

        WEIXIN_SHARE_POSTCARD_CTRL = 20200,
        WEIXIN_SHARE_RECOMMEND_CTRL = 20300,
        WEIXIN_SHARE_RECOMMEND_TEXT = 20301,

        ----玩法控制
        WANFA_CTRL = 11000,
        WANFA_FUNC_NANNING = 1,

        -- 录像
        MSG_GET_PLAYER_GAME_LOG = 12780289,


        --授权doo
        MSG_AGENT_PLAYER_ACK = 12780297,

        --doo查看玩家相关
        MSG_REPLACE_OPEN_ROOM_SHOW_PLAYERS = 12781318,
        MSG_REPLACE_OPEN_ROOM_SHOW_PLAYERS_ACK = 12781319,

        --待开房踢出玩家
        MSG_REPLACE_OPEN_ROOM_KINCK_PLAYER = 12781320,
        MSG_REPLACE_OPEN_ROOM_KINCK_PLAYER_ACK = 12781321,

        --代理信息
        MSG_AGENT_INFO = 12781568,
        MSG_AGENT_INFO_ACK = 12781569,

        --代理管理登陆校验
        MSG_AGENT_TICKET = 12781570,
        MSG_AGENT_TICKET_ACK = 12781571,

        --领取返卡
        MSG_AGENT_GET_DIAMOND = 12781573,
        MSG_AGENT_GET_DIAMOND_ACK = 12781574,

        --绑定上级
        MSG_BIND_AGENT_MSG    = 12781080,
        MSG_BIND_AGENT_MSG_ASK    = 12781064,

        --俱乐部
        MSG_CREATE_CLUB = 12780544,
        MSG_CREATE_CLUB_ACK = 12780545,
        MSG_SEARCH_CLUB = 12780546,
        MSG_SEARCH_CLUB_ACK = 12780547,
        MSG_APPLY_CLUB = 12780548,
        MSG_APPLY_CLUB_ACK = 12780549,
        MSG_SHOW_APPLY_LIST = 12780550,
        MSG_SHOW_APPLY_LIST_ACK = 12780551,
        MSG_OPT_APPLY_LIST = 12780552,
        MSG_OPT_APPLY_LIST_ACK = 12780553,
        MSG_SHOW_MEMBER_LIST = 12780560,
        MSG_SHOW_MEMBER_LIST_ACK = 12780561,
        MSG_OPT_MEMBER = 12780562,
        MSG_OPT_MEMBER_ACK = 12780563,
        MSG_SHOW_RANK = 12780564,
        MSG_SHOW_RANK_ACK = 12780565,
        MSG_OPT_DIAMOND = 12780566,
        MSG_OPT_DIAMOND_ACK = 12780567,
        MSG_SET_TABLE_SETTINGS = 12780568,
        MSG_SET_TABLE_SETTINGS_ACK = 12780569,
        MSG_GET_TABLE_SETTINGS = 12780576,
        MSG_GET_TABLE_SETTINGS_ACK = 12780577,
        MSG_CLUB_MODIFY = 12780578;
        MSG_CLUB_MODIFY_ACK = 12780579;
        MSG_CLUB_EXIT = 12780580;
        MSG_CLUB_EXIT_ACK = 12780581;
        MSG_CLUB_DISMISS = 12780582;
        MSG_CLUB_DISMISS_ACK = 12780583;
        MSG_CLUB_LOG = 12780584,
        MSG_CLUB_LOG_ACK = 12780585,
        MSG_CLUB_GET_INFO = 12780592,
        MSG_CLUB_GET_INFO_ACK = 12780593,

        MSG_CLUB_CHANGE_NAME = 12780596,
        MSG_CLUB_CHANGE_NAME_ACK = 12780597,
        MSG_CLUB_ADD_MEB = 12780598,
        MSG_CLUB_ADD_MEB_ACK = 12780599,
        MSG_CLUB_GET_PLAYER_INFO = 12780600,
        MSG_CLUB_GET_PLAYER_INFO_ACK = 12780601,

        MSG_SHOW_CLUB_OPERATION_LOG = 12780803,
        MSG_SHOW_CLUB_OPERATION_LOG_ACK = 12780804,

        --鲜花功能
        MSG_REQUEST_FLOWER_STATE = 12780817, -- 请求鲜花状态
        MSG_REQUEST_FLOWER_STATE_ACK = 12780818, -- 请求鲜花状态返回
        MSG_SEND_FLOWER = 12780809, -- 赠送鲜花
        MSG_SEND_FLOWER_ACK = 12780816, -- 赠送鲜花返回
        MSG_FLOWER_HISTORY = 12780819, -- 请求赠送鲜花/消耗鲜花记录
        MSG_SEND_FLOWER_HISTORY_ACK = 12780820, -- 赠送鲜花记录
        MSG_CONSUME_FLOWER_HISTORY_ACK = 12780821, -- 消耗鲜花记录
        MSG_PLAYER_CREATE_ROOM_PERMISSION = 12780822, -- 请求玩家创建配置
        MSG_PLAYER_CREATE_ROOM_PERMISSION_ACK = 12780823, -- 返回玩家创建配置

        MSG_CHANGE_ADMIN_PARTNER_SENDFLOWER_PERMISSION = 12780824, -- 请求修改管理送花权限
        MSG_CHANGE_ADMIN_PARTNER_SENDFLOWER_PERMISSION_ACK = 12780825, -- 返回修改管理送花权限

        MSG_SHOW_COULD_SEND_MEMBER_LIST = 12780677, -- //显示可以赠送的亲友圈成员列表
        MSG_SHOW_COULD_SEND_MEMBER_LIST_ACK = 12780678, --
        MSG_SHOW_HAPPY_CARD_USE_INFO = 12780679, --  //玩家乐卡使用情况
        MSG_SHOW_HAPPY_CARD_USE_INFO_ACK = 12780680, --
        MSG_HAPPY_CARD_SETTING = 12780681, --  //开设玩法时设置乐卡
        MSG_HAPPY_CARD_SETTING_ACK = 12780688, --
        MSG_NOTIFY_MEMBER_HAPPY_CARD = 12780689, --//玩家进入亲友圈后 提示玩家的乐卡不足
        MSG_NOTIFY_HAPPY_CARD_CLOSE_OR_OPEN = 12780690, -- //后台修改乐卡总开关后推客户端
        MSG_EDITOR_HAPPY_CARD_SETTING = 12780691, --//编辑乐卡设置
        MSG_EDITOR_HAPPY_CARD_SETTING_ACK = 12780692,


        -- 海南俱乐部add --
        --展示对局信息
        MSG_CLUB_SHOW_SCORE = 12780610,
        MSG_CLUB_SHOW_SCORE_ACK = 12780611,
        --绑定玩家微信号
        MSG_PLAYER_UPDATE_WX_ACCOUNT = 12781824,
        MSG_PLAYER_UPDATE_WX_ACCOUNT_ACK = 12781825,
        --俱乐部通知
        MSG_CLUB_MEMBER_BE_OPT_ACK = 12780614,
        --更改消耗房卡类型(请求和返回是同一个消息)
        MSG_CLUB_UPDATE_PAY_TYPE = 12780615,
        --转让
        MSG_CLUB_EXCHANGE_CREATOR = 12780608,
        MSG_CLUB_EXCHANGE_CREATOR_ACK = 12780609,
        -- 该俱乐部未处理申请列表
        --MSG_CLUB_NOT_HANDLE_APPLY = 0xC30444,
        --MSG_CLUB_NOT_HANDLE_APPLY_ACK = 0xC30445,
        -- 请求俱乐部购买记录
        MSG_CLUB_SHOW_PAY_LOG = 12780612,
        MSG_CLUB_SHOW_PAY_LOG_ACK = 12780613,
        -- 获取俱乐部申请个数
        MSG_CLUB_GET_RECENT_APPLY_NUM = 12780616,
        MSG_CLUB_GET_RECENT_APPLY_NUM_ACK = 12780617,


        MSG_REWARD_ACTIVITY_SHOW = 12780307,
        MSG_REWARD_ACTIVITY_SHOW_ACK = 12780308,
        MSG_ACTIVITY_LOTTERY_DRAW = 12780309,
        MSG_ACTIVITY_LOTTERY_DRAW_ACK = 12780310,
        MSG_REWARD_ACTIVITY_LOG_SHOW = 12780311,
        MSG_REWARD_ACTIVITY_LOG_SHOW_ACK = 12780312,

        MSG_GET_GLOBAL_CONFIGS = 12781317;
        MSG_GET_GLOBAL_CONFIGS_ACK = 12781333;

        MSG_NOTIFY_SHANG_GA = 12781345;
        MSG_SHANG_GA = 12781346;

        MSG_GAME_NOTIFY_N_DAO = 12779655;
        MSG_GAME_NOTIFY_FIRST_CARD_EFFECT = 12779654;


        --获取金币场列表相关
        MSG_GAME_GET_GOLD_GAME_LIST = 12779656;
        MSG_GAME_GET_GOLD_GAME_LIST_ACK = 12779657;

        --玩家发送消息给其他玩家
        MSG_SEND_MSG_TO_PLAYERS = 12779658;
        MSG_RECV_MSG_FROM_PLAYER_ACK = 12779659;

        --查询房间信息
        MSG_QUERY_ROOM_INFO_ACK = 12779660;

        --服务端通知客户端 俱乐部的房间状态有变化
        MSG_CLUB_NOTIFY_REFRESH_TABLE_INFO_ACK = 12780624;


        -- 俱乐部续局被邀请玩家的选择
        MSG_CLUB_AGREE_INVITE_GAME_AGAIN = 12780625;

        --获aaa包信息
        MSG_GET_WALLET_INFO = 12781352;
        MSG_GET_WALLET_INFO_ACK = 12781353;

        --获aaa包明细
        MSG_GET_RED_PACKET_RAIN_AWARD_DETAILS = 12781348;
        MSG_GET_RED_PACKET_RAIN_AWARD_DETAILS_ACK = 12781349;

        --提现
        MSG_EXTRACT_MONEY = 12781350;
        MSG_EXTRACT_MONEY_ACK = 12781351;

        MSG_GAME_CALCULATE = 12781361,

        MSG_GAME_INVITE_PLAYER = 12780038,

        MSG_GAME_INVITE_PLAYER_ACK = 12780039,

        MSG_GET_TABLE_STATUS = 12779558;            --/**获取桌子状态*/

        MSG_CLUB_OPT_SUBSECTION_RECORD = 12780631;
        MSG_CLUB_OPT_SUBSECTION_RECORD_ACK = 12780632;

        -- 合伙人 列表
        MSG_CLUB_PARTNER_MEMBER_LIST = 12780626,
        MSG_CLUB_PARTNER_MEMBER_LIST_ACK = 12780627,

        MSG_GET_PARTNER_INVITE_LIST = 12780628;
        MSG_GET_PARTNER_INVITE_LIST_ACK = 12780629;

        -- 一键导入成员
        MSG_PARTNER_IMPORT_MEMBER = 12780630, --发送导入请求
        MSG_PARTNER_IMPORT_MEMBER_ACK = 12780633, --接收导入数据

        MSG_REQUEST_COMPLETE_OPENID = 12780070;
        MSG_REQUEST_COMPLETE_OPENID_ACK = 12780071;

        -- 禁止同桌求情组分页
        MSG_SHOW_CLUB_BLACK_GROUP_LIST = 12780643,
        MSG_SHOW_CLUB_BLACK_GROUP_LIST_ACK = 12780644,

        MSG_SHOW_MEMBER_NOT_IN_BLACK_GROUP_LIST = 12780640,
        MSG_SHOW_MEMBER_NOT_IN_BLACK_GROUP_LIST_ACK = 12780641,

        -- /**获取亲友圈中个人战绩查看*/
        MSG_SHOW_CLUB_MEMBER_REC_INFO = 12780807;
        MSG_SHOW_CLUB_MEMBER_REC_INFO_ACK = 12780808;

        -- 
        MSG_CLUB_OPERATION = 12780645,
        MSG_CLUB_OPERATION_ACK = 12780646,

        --/**获取亲友圈小黑名单*/
        MSG_SHOW_CLUB_BAN_LIST = 12780647,
        MSG_SHOW_CLUB_BAN_LIST_ACK = 12780648,

        -- Howns 斗十四玩法
        MSG_GAME_ZIPAI_GAME_OVER_ACK = 12779640, -- 字牌小计分
        MSG_FAN_CARD = 13830400, --翻牌 游戏开局决定玩家位置

        MSG_GET_TOTAL_ONLINE_TIME = 12780072,
        MSG_GET_TOTAL_ONLINE_TIME_ACK = 12780073,

        --解除实名
        MSG_UNBIND_PLAYER_REAL_NAME = 12780080,
        MSG_UNBIND_PLAYER_REAL_NAME_ACK = 12780081,

        --玩家编辑信息
        MSG_MODIFY_PLAYER_SHARE_INFO = 12780082, --编辑信息保存请求
        MSG_MODIFY_PLAYER_SHARE_INFO_ACK = 12780083, --编辑信息保存返回

        MODIFY_PLAYER_SHARE_INFO = 58005, --编辑信息开关

        MSG_CLIENT_LOG_INFO = 12780084, --客户端报错信息发送请求
        PRINT_CLIENT_LOG_INFO = 58006, --发送开关

        --战绩分享
        MSG_MULTIFUNCTION = 12780372, --战绩分享请求
        MSG_MULTIFUNCTION_ACK = 12780373, --战绩分享返回
        OP_GET_CLUB_VIP_ROOM_RECORD_SHARE_URL = 2, --分享链接类型

        MODIFY_GAMECOST_CHANGE = 59010, --通知幸运表情和洗牌价格改变
        -------- 邮件新增
        MSG_ACTIVITY_INTEGRAL_TASK = 12781832,
        MSG_ACTIVITY_INTEGRAL_TASK_ACK = 12781833,
        --检测新邮件
        MSG_MAIL_CHECK_NEW_MAIL_MSG = 12783625,
        MSG_MAIL_CHECK_NEW_MAIL_MSG_ACK = 12783632,
        --获取邮件
        MSG_MAIL_GET_MAIL_MSG = 12783617,
        MSG_MAIL_GET_MAIL_MSG_ACK = 12783618,
        --查看邮件详情
        MSG_MAIL_GET_MAIL_DETAIL_MSG = 12783619,
        MSG_MAIL_GET_MAIL_DETAIL_MSG_ACK = 12783620,
        --领取附件奖励
        MSG_MAIL_GET_REWARD_MSG = 12783621,
        MSG_MAIL_GET_REWARD_MSG_ACK = 12783622,
        --删除邮件
        MSG_MAIL_DELETE_MSG = 12783623,
        MSG_MAIL_DELETE_MSG_ACK = 12783624,
        --通知新邮件达到
        MSG_MAIL_NOTIFY_NEW_MAIL = 12783633,
        --查询邮件奖励
        MSG_MAIL_QUERY_REWARD_MSG = 12783634,
        MSG_MAIL_QUERY_REWARD_MSG_ACK = 12783635,

        -- **根据运维消息 推送红点给客户端*/
        MSG_SEND_RED_POINT_INFO_ACK = 12780087,

        --签到数据
        MSG_SIGN_AWARD_INFO = 12780088, --发送签到
        MSG_SIGN_AWARD_INFO_ACK = 12780089, --签到消息返回


        -- /*** 2020.3.16 商城、背包相关协议*/
        -- 商品列表
        MSG_GET_PLAYER_GOOD_LIST = 12780096;
        MSG_GET_GOOD_SHOP_LIST = 12780097;
        MSG_BUY_GOOD_SHOP_ITEM = 12780098;
        MSG_BUY_GOOD_SHOP_ITEM_ACK = 12780099;
        MSG_PLAYER_USER_GOOD_ITEM = 12780100;
        MSG_PLAYER_USER_GOOD_ITEM_ACK = 12780101;
        -- 购买、使用道具后向玩家刷一条对应的道具实例相关信息
        MSG_UPDATE_ITEM_INFO_MSG = 12780102;
        MSG_GET_PLAYER_BUFF_MSG = 12780103;
        -- //卸下道具
        MSG_UNLOAD_PLAYER_GOOD = 12780104;
        MSG_UNLOAD_PLAYER_GOOD_ACK = 12780105;
        -- //道具续费
        MSG_EXTEND_PLAYER_GOOD = 12780112;
        MSG_EXTEND_PLAYER_GOOD_ACK = 12780113;
        -- //续费时客户端先请求一次道具的详情
        MSG_GET_GOOD_SHOP_INFO = 12780114;
        MSG_GET_GOOD_SHOP_INFO_ACK = 12780115;

        MSG_GET_PLAYER_GOOD_LIST_ACK = 12780116;

        --请求中奖数据
        MSG_DUO_BAO_SHOW = 12780117,
        MSG_DUO_BAO_SHOW_ACK = 12780118,

        --请求抽奖
        MSG_DUO_BAO = 12780119,
        MSG_DUO_BAO_ACK = 12780120,

        --请求奖品数据
        MSG_GET_DUO_BAO_INFO_LIST = 12780121,
        MSG_GET_DUO_BAO_INFO_LIST_ACK = 12780128,

        --夺宝开关
        MODIFY_LOTTERY_SWITCH = 71012,

        --请求玩家大厅形象
        MSG_HALL_IMAGE = 12780131, --大厅形象数据请求
        MSG_HALL_IMAGE_ACK = 12780132, --大厅形象数据返回

        --个验开关
        MODIFY_GEYAN_SWITCH = 72001,
        --分享大计分url
        MODIFY_ROOM_RESULT_SHARE_URL = 4040,

        ---新增做牌消息
        MSG_GAME_REQ_DO_CARD =    12779573,
        MSG_GAME_REQ_DO_CARD_ACK =    12779574,

        -- 端午活动信息
        DRAGONBOAT_GET_INFO = 12779856,
        DRAGONBOAT_GET_INFO_ACK = 12779857,

        -- 端午活动报名
        DRAGONBOAT_TOWER_SIGN_UP = 12779858,
        DRAGONBOAT_TOWER_SIGN_UP_ACK = 12779859,

        -- 端午活动领取奖励
        DRAGON_BOAT_TOWER_GET_REWARD = 12779860,
        DRAGON_BOAT_TOWER_GET_REWARD_ACK = 12779861,
    }
    cc.exports.g_gameGlobal = require "newgold.GoldLobby.Modules.PeakRaceGame.XZDD.GameGlobal"
    if g_gameGlobal then
        g_gameGlobal:reloadSize()
    end
end

function PeakRaceGameModule:reloadAnHui()
    cc.exports.g_gameConstant = {
        GOLD_GANE_ACTIVITE = false,

        AGENT_TABLE_FLAG = 4779,

        CARD_TYPE_CHARACTER = 0,
        CARD_TYPE_DOT = 2,
        CARD_TYPE_BAMBOO = 1,
        CARD_TYPE_WIND = 3,
        CARD_TYPE_HUA = 4,

        --弹窗层级
        POPUP_SHOW_TIPS = 1000, -- 提示弹窗层级

        -- 游戏模式，当前是金币场还是vip场还是播放战绩
        GOLD_GAME_MODEL = 1,
        VIP_GAME_MODEL = 2,
        PLAY_LOG_MODEL = 3,

        -- 打牌界面层级关系
        GAMEBASE_ZORDER = 1,
        GAMEMAINVIEW_ZORDER = 25,
        HEADIMGVIEW_OPEN_ZORDER = 25,
        HEADIMGVIEW_CLOSE_ZORDER = 9,
        TABLEPLAYERBASE_ZORDER = 20,
        TABLEPLAYERSELECT_ZORDER = 21,
        TABLEPLAYERDOCARD_ZORDER = 22,
        JIESANROOMVIEW_ZORDER = 50,
        ROOMCLOSEVIEW_ZORDER = 60,
        GOLDROOM_TIP_DIALOG = 70,
        SHOP_VIEW_ZORDER = 71,
        BACKGAME_ACTIVITY_ZORDER = 100,

        MAHJONG_CODE_COLOR_SHIFTS                                = 4, ----花色部分的移位，花色，【0，1，2】
        MAHJONG_CODE_COLOR_MASK                                = 112, ----花色部分的掩码
        MAHJONG_CODE_COLOR_MASK2                                = 7, ----花色部分的掩码

        MAHJONG_CODE_COLOR_WAN                                = 0, ----花色部分的掩码,万
        MAHJONG_CODE_COLOR_TIAO                                = 16, ----花色部分的掩码,条
        MAHJONG_CODE_COLOR_TONG                                = 32, ----花色部分的掩码,筒

        PALYER_GAME_STATE_IN_TABLE_READY                        = 1,
        PALYER_GAME_STATE_IN_TABLE_GAME_OVER_WAITING_TO_CONTINUE = 4,

        CMD_EXE_OK                                            = 0, ----命令执行成功
        WRONG_PASSWORD                                        = 1001, ----密码错误

        FANGKIA_NOT_FOUND                        = 1100, ----房卡不足
        GOLD_LOW_THAN_MIN_LIMIT                = 1101, ----金币低于下限
        GOLD_HIGH_THAN_MAX_LIMIT                = 1102, ----金币超过上限
        CAN_ENTER_VIP_ROOM                        = 1103, ----可以进入VIP房间
        VIP_TABLE_IS_FULL                        = 1104, ----vip桌子已经满座了
        VIP_TABLE_IS_GAME_OVER                    = 1105, ----VIP桌子已经结束了
        IS_PLAYING_CAN_NOT_ENTER_ROOM            = 1106, ----正在游戏中不能进入其他房间
        SERVER_IS_MAINTAIN                        = 1107, ----服务器正在维护，暂时关闭开启房间


        TODAY_GAME_RECORD_OUT_LIMIT_IN_ROOM    = 1200, ----今日输赢超过房间上限
        TODAY_GAME_RECORD_OUT_LIMIT_IN_GAME    = 1201, ----今日输赢超过游戏上限


        GAME_OPERTAION_CARD_XIANG_JIA_BAO_TING = 2024,

        --**客户端请求刷新玩家数据**--
        --**客户端请求刷新玩家数据**--
        GAME_OPERTAION_REQUEST_UPDATE_PALYER_DATA = 1002,

        --**服务器通知客户端，桌子上坐上一个新玩家**--
        GAME_OPERTAION_TABLE_ADD_NEW_PLAYER    = 1004,
        --**服务器通知客户端，桌子上有玩家离开**--
        GAME_OPERTAION_PLAYER_LEFT_TABLE        = 1005,
        --**服务器通知客户端，本局时间到，游戏结束**--
        GAME_OPERTAION_GAME_TIME_OVER            = 1006,

        --**客户端通知服务器，购买物品**--
        GAME_OPERTAION_BUY_ITEM                = 1007,

        --**客户端通知服务器，使用道具**--
        GAME_OPERTAION_USE_ITEM                = 1008,
        --**客户端通知服务器，更换头像**--
        GAME_OPERTAION_CHANGE_HEAD                = 1009,

        --**客户端通知服务器，晶石换金币*--
        GAME_OPERTAION_GEM_EXCHANGE_GOLD = 1017,

        GAME_OPERTAION_GOT_GOLD_AUTO_SAVE = 1028, ----系统救济，赠送金币

        GAME_OPERTAION_SET_TUOGUAN =        1029, ----设置托管状态

        GAME_OPERTAION_ROOM_DISMISS = 1030, ----房主离开，房间解散
        GAME_OPERTAION_CHANGEPLAYERACCOUNT = 1031, ----修改玩家账号

        GAME_OPERATION_COMPLETE_ACCOUNT_AND_PASSWORD = 1033, ----补全帐号和密码

        GAME_OPERATION_APPLY_CLOSE_VIP_ROOM = 1034, ----房主申请解散VIP房间

        GAME_OPERTAION_QUERY_TABLE_DISMISS = 2001, ----查询是否有人请求解散桌子

        VIP_TABLE_NOT_FOUND = 1300, ----桌子未找到

        --麻将牌的两种类型，立起，放倒
        MajongType = {
            Normal = 1,
            Laydown = 2
        },
        --麻将的方位
        MajongPosType = {
            Self = 1,
            Right = 2,
            Opposite = 3,
            Left = 4
        },




        -- 根据操作类型决定播放什么音效
        OPERATION_CHI                        = 1,
        OPERATION_PENG                        = 2,
        OPERATION_GANG                        = 3,
        OPERATION_HU                            = 4,
        OPERATION_ZIMO                        = 5,
        OPERATION_TING                        = 6,
        OPERATION_BUHUA                        = 7,
        -------------------------------------


        --**玩家的麻将操作*--
        MAHJONG_OPERTAION_NONE                    = 0, ----无操作
        MAHJONG_OPERTAION_CHI                    = 1, ----吃
        MAHJONG_OPERTAION_PENG                    = 2, ----碰
        MAHJONG_OPERTAION_AN_GANG                = 4, ----暗杠
        MAHJONG_OPERTAION_MING_GANG                = 8, ----明杠
        MAHJONG_OPERTAION_CHU                    = 16, ----出牌
        MAHJONG_OPERTAION_HU                    = 32, ----胡牌
        MAHJONG_OPERTAION_TING                    = 64, ----听牌

        MAHJONG_OPERTAION_CANCLE_TING            = 134217728, --//取消报听
        MAHJONG_OPERTAION_DICEINFO_NTF            = 69730304, --// 掷骰子内容通知
        MAHJONG_OPERTAION_DEALERPOINT_UPDATE    = 71303168, --// 涨庄分更新
        MAHJONG_OPERTAION_LIANGKAI_UPDATE        = 71303169, --亮开
        MAHJONG_OPERTAION_ZIMAH_RECOVER            = 71303184, --嘴风更新

        MAHJONG_OPERTAION_CANCEL                = 128, ----给玩家提示操作，玩家点取消
        MAHJONG_OPERTAION_YAO_BU_QI                = 5, ----玩家要不起

        MAHJONG_OPERTAION_CHOOSE_CARD            = 262144, --选牌操作

        MAHJONG_OPERTAION_NOTIFY                    = 50331648, --				//回放提示，不需或运算

        MAHJONG_OPERTAION_OFFLINE                = 256, ----断线
        MAHJONG_OPERTAION_ONLINE                = 512, ----断线后又上线
        MAHJONG_OPERTAION_AUTO_CHU                = 1024, ----听牌后自动出牌
        MAHJONG_OPERTAION_GAME_OVER                = 2048, ----牌局结束

        MAHJONG_OPERTAION_GAME_OVER_CHANGE_TABLE = 4096, ----牌局结束，玩家选择换桌
        MAHJONG_OPERTAION_GAME_OVER_CONTINUE    = 8192, ----牌局结束，玩家选择继续开始游戏
        MAHJONG_OPERTAION_MO_CARD                = 16384, ----重用字段，这个只有记录牌局回放使用


        MAHJONG_OPERTAION_SEARCH_VIP_ROOM        = 16384, --**客户端通知服务器查找vip房间 **--
        MAHJONG_OPERTAION_ADD_CHU_CARD            = 32768, --**玩家打出的牌，没有被人吃碰胡，在打这个牌的玩家面前摆一张牌 **--
        MAHJONG_OPERTAION_SHOW_TABLE_TIPS        = 65536, --**显示提示在桌面**--
        MAHJONG_OPERTAION_TIP                    = 131072, --**提示当前谁在操作**--

        MAHJONG_OPERTAION_PLAYER_HU_CONFIRMED    = 262144, ----玩家点胡，此局结束显示结果

        MAHJONG_OPERTAION_OVERTIME_AUTO_CHU        = 524288, ----超时自动出牌
        MAHJONG_OPERTAION_EXTEND_CARD_REMIND    = 1048576, ----提醒房主续卡
        MAHJONG_OPERTAION_EXTEND_CARD_SUCCESSFULLY = 2097152, ----提醒房主续卡成功
        MAHJONG_OPERTAION_WAITING_OR_CLOSE_VIP    = 4194304, ----VIP房间有人逃跑，是否继续等待
        MAHJONG_OPERTAION_NO_START_CLOSE_VIP    = 8388608, ----VIP房间超时未开始游戏，房间结束
        MAHJONG_OPERTAION_ONLY_ZIMO_TIME        = 33554432, ----最后的分张阶段
        MAHJONG_OPERTAION_SET_CLEAR_COLOR        = 67108864, ----定缺
        MAHJONG_OPERTAION_EXTEND_CARD_FAILED    = 134217728, ----提醒房主续卡失败
        MAHJONG_OPERTAION_HUAN_SAN_ZHANG            = 33554432, --换3张

        MAHJONG_OPERTAION_HU_CARD_LIST_UPDATE    = 268435456, ----提醒玩家可以胡的牌
        MAHJONG_OPERTAION_HU_CARD_LIST_UPDATE_NEW    = 268435712, ----提醒玩家可以胡的牌--新的，为了听牌功能
        MAHJONG_OPERTAION_BU_GANG                = 536870912, ----补杠，自己摸起来，3个已经碰了，再补杠
        MAHJONG_OPERTAION_REMOE_CHU_CARD        = 1073741824, ----玩家打出的牌，被吃碰杠走了

        MAHJONG_OPERTAION_GANG_NOTIFY            = 160516216, ----玩家杠的通知，杠不杠的成功，看有没有人抢

        MAHJONG_OPERTAION_CHAN_DI                = 2147483648, ----铲底

        MAHJONG_OPERTAION_LOG_SEND_CARDS        = 512, --回放用
        --**玩家牌局结果*--

        MAHJONG_HU_CODE_DIAN_PAO                = 2, ----点炮
        MAHJONG_HU_CODE_MYSELF_ZHUANG_JIA        = 4, ----自己是不是庄家
        MAHJONG_HU_CODE_ZI_MO                    = 8, ----自摸


        MAHJONG_HU_CODE_QIANG_GANG_HU            = 16, ----抢杠胡
        MAHJONG_HU_CODE_HUA_ZHU                    = 32, ----花猪
        MAHJONG_HU_CODE_DAI_GEN                    = 64, ----有四张一样的在手里，胡牌的时候，不包括杠
        MAHJONG_HU_CODE_CHA_HUA_ZHU                = 128, ---- 查花猪

        MAHJONG_HU_CODE_TING                    = 256, ----是否听牌
        MAHJONG_HU_CODE_TARGET_ZHUANG_JIA        = 512, ----输赢的对方是庄家

        MAHJONG_OPERTAION_JIA_HUN                = 33554432, --架混
        MAHJONG_OPERTAION_SET_PIAO_HUA            = 16384, --宿松麻将，飘花 
        MAHJONG_OPERTAION_SCORE_UPDATE                = 2147483648, --更新客户端玩家的分数
        MAHJONG_HU_CODE_QINGYISE                = 2048, ----清一色



        MAHJONG_HU_CODE_PENG_PENG_HU            = 32768, ----碰碰胡


        MAHJONG_HU_CODE_QIXIAODUI                = 131072, ----七小对


        MAHJONG_HU_CODE_WIN                                = 1048576, ----赢
        MAHJONG_HU_CODE_LOSE                                = 2097152, ----输


        MAHJONG_HU_CODE_TIAN_HU                            = 4194304, ----天胡
        MAHJONG_HU_CODE_DI_HU                                = 8388608, ----地胡


        MAHJONG_HU_CODE_CHA_DA_JIAO                        = 16777216, ----查大叫
        MAHJONG_HU_CODE_LIU_JU                                = 33554432, ----流局
        MAHJONG_HU_CODE_DIAN_PAO_HU                        = 67108864, ----点炮胡

        MAHJONG_HU_CODE_PING_HU_ZI_MO                        = 134217728, ----平胡自摸加1番


        MAHJONG_HU_CODE_DIAN_GANG                            = 536870912, ----点杠

        MAHJONG_OPERTAION_BU_HUA                            = 16777216,

        CLEAR_DIAMOND_SALE_RECORD_BY_ACCOUNT                = 78958, ----会计清理今日销售房卡累积
        RESET_PASSWORD_BY_ADMIN                            = 78960, ----重置密码
        SET_PLAYER_TYPE_BY_ADMIN                            = 78961, ----设置代理

        PLAYER_OPERATION_BY_SUPER_ADMIN                    = 78962, ----管理员进行玩家管理
        DISMISS_VIP_TABLE_BY_ADMIN_CONFIRMED                = 78963, ----管理员再次确认
        DISMISS_VIP_TABLE_BY_ADMIN                            = 78964, ----管理员解散桌子

        SEND_PLAYER_CMD_SUB_DIAMOND                        = 95873, ----扣除玩家的房卡
        PLAYER_CMD_GUA_XIA_JI                                = 95874, ----玩家1挂到玩家2下面
        PLAYER_CMD_QUERY_INFO                                = 95875, ----查询玩家信息
        PLAYER_CMD_QUERY_DIAMOND_LOG                        = 95876, ----查询玩家信息
        SEND_PLAYER_CMD_SHARE_TO_WX                        = 79733, ----分享到微信
        SEND_PLAYER_CMD_SHARE_TO_XOO                        = 79734, ----分享到xoo

        GET_SYSTEM_MGR_INFO_ACK                            = 512, ----返回系统系统给客户端
        DISMISS_VIP_TABLE_FAILED                            = 1024, ----解散vip桌子
        SUPER_ADMIN_OPERATION_INFO                            = 2048,
        ADMIN_OPERATION_RESULT                                = 4096, ----客户操作结果提示

        SEND_CLIENT_IP                                        = 65536, --更新IP和地理位置
        SEND_PLAYER_SHARE_TO_WX_SUCCESSFULLY                = 8192, ----分享微信成功
        SEND_PLAYER_SHARE_TO_WX_TIP                        = 16384, ----微信分享提示

        PLAYER_TYPE_QUN_ZHU                                = 3, ----创建者type

        --*VIP玩法*--
        GAME_PLAY_VIPALL = 16777215,

        -- 三副
        MAHJONG_OPERTAION_FU_MING_CARDS                            = 6001, --明牌、摊牌
        MAHJONG_OPERTAION_FU_CAI_CARDS                            = 6002, --查牌
        MAHJONG_OPERTAION_FU_QI_CARDS                            = 6003, --弃牌
        MAHJONG_OPERTAION_FU_SORCE_CHANGE                    = 6004, --计分板

        GAME_PLAY_RULE_4_REN                    = 0, ----4人麻将
        GAME_PLAY_RULE_3_REN                    = 1, ----3人麻将
        GAME_PLAY_RULE_2_REN                    = 2, ----2人麻将

        APPLE_GUEST_CHECK_TYPE                = 3,

        GAME_PLAY_BAOJIAO_PLAY_CARDS = 4096,

        GAME_OPERTAION_GET_QUN_ZHU_PAY_BACK = 1061, --创建者获取返利
        SUPER_ADMIN_OPERTAION_INFO_GET_PAY_BACK = 32768, --获取返利

        -- 牌桌
        DESIGN_SCREEN_WIDTH = 1280,
        DESIGN_SCREEN_HEIGHT = 720,
        ORIGINAL_SCREEN_WIDTH = 800,
        ORIGINAL_SCREEN_HEIGHT = 480,

        COORDINATE_X_SCALE = 1280 / 800,
        COORDINATE_Y_SCALE = 720 / 480,

        CHU_CARD_LINE_NUM = 10,

        MY_CARD_Y = 53,


        --对家位置
        OPPISITE_TABLE_HAND_CARD_START_X            = 320, --手牌起始x位置
        OPPISTTE_TABLE_HAND_CARD_START_Y            = 624, --手牌起始y位置
        OPPISITE_LAYDOWN_CARD_START_X            = 280,

        OPPISITE_LAYDOWN_CARD_WIDTH                =    44, --碰牌,吃牌宽度
        OPPISITE_LAYDOWN_CARD_HEIGHT                =    67, --碰牌,吃牌高度
        OPPISITE_LAYDOWN_CARD_JIANGE_WIDTH            =    20, --碰牌间隔
        OPPISITE_LAYDOWN_HANDCARD_DISTANCE            =    15, --倒牌和手牌之间间隔
        OPPISITE_TABLE_HAND_CARD_WIDTH                = 46, --每张手牌的宽度

        OPPISITE_TABLE_CHU_CARD_FIRST_X                = 805, --出牌的初始x位置
        OPPISITE_TABLE_CHU_CARD_FIRST_Y                = 455, --出牌的初始y位置
        OPPISITE_TABLE_CHU_CARD_2PEOPLE_FIRST_X        = 935, --2个人出牌的初始x位置
        OPPISITE_TABLE_CHU_CARD_WIDTH            =    43, --出牌的宽度
        OPPISITE_TABLE_CHU_CARD_HEIGHT            =    55, --出牌的高度

        OPPISITE_TABLE_HAND_CARD_LOG_START_X        = 270, --播放战绩手牌起始x位置
        OPPISITE_TABLE_HAND_CARD_LOG_WIDTH            = 44, --每张手牌的宽度

        --左边位置
        LEFT_TABLE_HAND_CARD_START_X                    = 190, --手牌起始x位置
        LEFT_TABLE_HAND_CARD_START_Y                    = 650, --手牌起始y位置
        LEFT_LAYDOWN_CARD_START_Y                        = 690, --手牌起始y位置

        LEFT_LAYDOWN_CARD_WIDTH                        =    48, --碰牌,吃牌宽度
        LEFT_LAYDOWN_CARD_HEIGHT                    =    30, --碰牌,吃牌高度
        LEFT_LAYDOWN_CARD_JIANGE_WIDTH                =    15, --碰牌间隔
        LEFT_LAYDOWN_HANDCARD_DISTANCE                =    15, --倒牌和手牌之间间隔
        LEFT_TABLE_HAND_CARD_HEIGHT                    = 30, --每张手牌的高度

        LEFT_TABLE_CHU_CARD_FIRST_X                    = 370, --出牌的初始x位置
        LEFT_TABLE_CHU_CARD_FIRST_Y                    = 500, --出牌的初始y位置
        LEFT_TABLE_CHU_CARD_WIDTH                    =    55, --出牌的宽度
        LEFT_TABLE_CHU_CARD_HEIGHT                    =    33, --出牌的高度

        --自家位置
        MYSELF_TABLE_HAND_CARD_START_X                = 40, --手牌起始x位置
        MYSELF_TABLE_HAND_CARD_LOG_START_X        = 90, --播放战绩手牌起始x位置
        MYSELF_TABLE_HAND_CARD_START_Y                = 53, --手牌起始y位置

        MYSELF_LAYDOWN_CARD_START_X            = 30, --倒牌起始X位置

        MYSELF_LAYDOWN_CARD_WIDTH                    =    54, --碰牌,吃牌宽度
        MYSELF_LAYDOWN_CARD_HEIGHT                =    80, --碰牌,吃牌高度
        MYSELF_LAYDOWN_CARD_JIANGE_WIDTH            =    20, --碰牌间隔
        MYSELF_LAYDOWN_HANDCARD_DISTANCE            =    15, --倒牌和手牌之间间隔
        MYSELF_TABLE_CARD_WIDTH                        = 74, --每张手牌的宽度

        MYSELF_TABLE_CHU_CARD_FIRST_X                = 418, --出牌的初始x位置
        MYSELF_TABLE_CHU_CARD_2PEOPLE_FIRST_X        = 290, --2个人出牌的初始x位置
        MYSELF_TABLE_CHU_CARD_FIRST_Y                = 273, --出牌的初始y位置
        MYSELF_TABLE_CHU_CARD_WIDTH                =    43, --出牌的宽度
        MYSELF_TABLE_CHU_CARD_HEIGHT                =    55, --出牌的高度
        MYSELF_TABLE_MOST_RIGHT_CARD_DISTANCE    = 25, --手牌最后一张跟新摸起来牌中间的距离

        MYSELF_PENG_CARD_WIDTH                    = 52,

        MYSELF_BLOCK_SCALE                        = 1.15,

        MYSELF_MENU_POSITION_Y                    = 162,
        MYSELF_MENU_POSITION_END_X                = 950, --吃碰杠按钮起始位置

        MYSELF_MENU_OPER_SPRITE_SCALE            = 1,

        --右边位置
        RIGHT_TABLE_HAND_CARD_START_X                = 1090, --手牌起始x位置
        RIGHT_TABLE_HAND_CARD_START_Y                = 175, --手牌起始y位置
        RIGHT_LAYDOWN_CARD_START_Y                    = 160, --倒牌起始y位置
        RIGHT_TABLE_HAND_CARD_HEIGHT                = 30, --每张手牌的高度

        RIGHT_LAYDOWN_CARD_WIDTH                    =    48, --碰牌,吃牌宽度
        RIGHT_LAYDOWN_CARD_HEIGHT                    =    30, --碰牌,吃牌高度
        RIGHT_LAYDOWN_CARD_JIANGE_WIDTH                =    15, --碰牌间隔
        RIGHT_LAYDOWN_HANDCARD_DISTANCE                =    15, --倒牌和手牌之间间隔

        RIGHT_TABLE_CHU_CARD_FIRST_X                = 900, --出牌的初始x位置
        RIGHT_TABLE_CHU_CARD_FIRST_Y                    = 208, --出牌的初始y位置
        RIGHT_TABLE_CHU_CARD_WIDTH                =    55, --出牌的宽度
        RIGHT_TABLE_CHU_CARD_HEIGHT                =    34, --出牌的高度

        -- 吃碰按钮宽度
        BUTTON_X                                    =    160,

        -- 玩家吃牌的选择缩放比例
        PLAYER_INFO_OFFSET_X                        =    40,
        PLAYER_INFO_OFFSET_Y                        =    20,

        HEAD_IMG_OFFSET_X                            =    20,
        HEAD_IMG_OFFSET_Y                            =    30,

        -- 解散房间时倒计时时间
        JIESANROOM_DAOJISHI_TIME                    = 300,
        -- 具体玩法
        GAME_PLAY_RULE_LIU_ZHOU    =    4096,
        GAME_PLAY_RULE_LAI_BIN    =    8192,
        GAME_PLAY_RULE_GUI_LIN    =    16384,
        GAME_PLAY_RULE_HE_CHI    =    32768,
        GAME_PLAY_RULE_GUI_LIN_ZZ =    2048,

        GAME_PLAY_RULE_MA_2        =    16,
        GAME_PLAY_RULE_MA_4        =    4,
        GAME_PLAY_RULE_MA_6        =    32,
        GAME_PLAY_RULE_MA_8    =    64,
        GAME_PLAY_RULE_MA_3        =    8,
        GAME_PLAY_RULE_MA_10    =    67108864,

        GAME_PLAY_RULE_DIAO_YU_2    =    16777216,
        GAME_PLAY_RULE_DIAO_YU_4    =    33554432,
        GAME_PLAY_RULE_DIAO_YU_6    =    67108864,
        GAME_PLAY_RULE_DIAO_YU_8    =    134217728,

        GAME_PLAY_RULE_FENG_DING_2                    = 16777216,
        GAME_PLAY_RULE_FENG_DING_4                    = 33554432,
        GAME_PLAY_RULE_FENG_DING_6                    = 134217728,

        GAME_PLAY_RULE_SHANG_XIA_XING                =    268435456,
        GAME_PLAY_RULE_SHANG_ZHONG_XIA_XING        = 536870912,
        GAME_PLAY_SI_XING_LIAN_FAN                    = 8388608,
        GAME_PLAY_RULE_ALL_ZI_MO                    = 1073741824,
        GAME_PLAY_RULE_MUST_ZI_MO_COULD_QIANG_GANG    = 2147483648,
        GAME_PLAY_LUAN_LAN                            = 524288,
        GAME_PLAY_13_LAN                            = 128,
        GAME_PLAY_HUANG_ZHUANG_SUAN_GANG            = 16777216,
        GAME_PLAY_XING_FEN_BAO_PEI                    = 33554432,
        GAME_PLAY_FAN_DUO_SE_XING                    = 67108864,
        GAME_PLAY_FAN_DAN_SE_XING                    = 134217728,
        GAME_PLAY_ZHUANG_XIAN_SUAN_FEN                = 1048576,
        GAME_PLAY_QI_DUI                            = 2097152,
        GAME_PLAY_HONGZHONG_LAI_ZI                    = 4194304,
        GAME_PLAY_RULE_159_HORSE        =    256,
        GAME_PLAY_RULE_DEALER_HORSE    =    512,
        GAME_PLAY_RULE_MEN_QING            =    1024,

        GAME_PLAY_CAN_NOT_CHI            =    65536,
        GAME_PLAY_WU_XIAN_FAN            =    131072,

        GAME_OPERTAION_POKER_PASS                    = 2017,
        GAME_OPERTAION_PLAYER_CLICK_READY            = 2019,
        GAME_OPERTAION_POKER_OVER = 2018,
        GAME_OPERTAION_CARD_INVALID = 2015,
        MSG_NOTIFY_PLAYER_OPERATION = 2015,
        GAME_OPERTAION_CARD_NOT_EXIST = 2014,
        GAME_OPERTAION_POKER_QI_CARDS_LIMIT = 2021, --还未分出首游、二游
        GAME_OPERTAION_POKER_MING_CARDS_LIMIT = 2022, --队友已明牌


        MAHJONG_OPERTAION_KUN_FEN        = 33554432, --捆分


        GAME_PLAY_TONG_LING = 1, --铜陵玩法
        GAME_PLAY_AN_QING = 2, --安庆玩法
        GAME_PLAY_CHI_ZHOU = 4, --池州
        GAME_PLAY_HE_FEI = 8, --合肥麻将
        GAME_PLAY_LIU_AN = 16, --六安麻将
        GAME_PLAY_WU_HU = 32, --芜湖麻将
        GAME_PLAY_XUAN_CHENG = 64, --宣城麻将
        GAME_PLAY_XIA_GANG =    128, --屯溪（下岗麻将）打法规则
        GAME_PLAY_TONGLING_FAN_LAIZI = 256, --铜陵翻赖子，重用字段
        GAME_PLAY_SIMPLE_LIU_AN = 256, --六安麻将简单玩法：没有断幺、坎、清三对、门清、通天等；
        GAME_PLAY_LUAN_GANG_AFTER_PENG = 512, --六安麻将碰后可杠
        GAME_PLAY_HE_FEI_HONG_ZHONG = 512, --合肥红中玩法
        GAME_PLAY_QI_DUI =        1024, --7对
        GAME_PLAY_HONG_ZHONG =    1024, --重用字段，通用的红中玩法
        GAME_PLAY_RULE_PENG_PENG_HU = 2048, --四大坎+5，---合肥红中玩法
        GAME_PLAY_RULE_MA_2 = 4096, --2马
        GAME_PLAY_RULE_MA_4 = 8192, --4马
        GAME_PLAY_RULE_MA_6 = 16384, --6马
        GAME_PLAY_RULE_HUA_3 = 32768, --花3分，就是3分一个马，默认2分---合肥红中玩法
        GAME_PLAY_RULE_QINGYISE =    65536, --清一色5分---合肥红中玩法
        GAME_PLAY_RULE_PENG_YI_DUI =    131072, --可碰一对---合肥红中玩法
        GAME_PLAY_RULE_PENG_YI_DUI_MING_GAN_GANG = 65536, --黄山玩法，碰了一对后可明杠按杠,重用

        GR2_HU_7_DUI = 65536,
        GAME_PLAY_RULE_HUAI_NING_AND_GR2_SUANZUIMJ = 512,

        --掼蛋 =
        GAME_PLAY_RULE_GUAN_DAN = 0, --掼蛋，只是客户端使用

        GAME_PLAY_BANG_BU = 262144, --蚌埠
        GAME_PLAY_HUANG_SHAN = 524288, --黄山
        GAME_PLAY_QIAN_SHAN = 16777216, --潜山

        GAME_PLAY_BANG_BU_DAI_HUA = 1048576, --蚌埠,东风令带花
        GAME_PLAY_HUAI_YUAN = 2097152, --怀远麻将
        GAME_PLAY_ZI_MO = 65536, --怀远麻将,桐城麻将,只能自摸,重用字段
        GAME_PLAY_DONG_FENG_HUA = 131072, --怀远麻将,东风是花,重用字段

        GAME_PLAY_TONG_CHENG = 4194304, --桐城麻将
        GAME_PLAY_DONG_ZHI =    8388608, --东至麻将
        GAME_PLAY_QIAN_SHAN = 16777216, --潜山麻将

        GAME_PLAY_XUANCHENG_HONGZHONG = 33554432, --宣城红中
        GAME_PLAY_DAI_FENG =            67108864, --宣城红中，带东南西北
        GAME_PLAY_4_LAIZI =            134217728, --宣城红中，默认中白都是赖子，选了4个赖子只有红中是赖子

        GAME_PLAY_RULE_PEIZI_ADD5 = 67108864, --铜陵,配子加分,重用字段
        GAME_PLAY_RULE_PEIZI_X2 =    134217728, --铜陵,配子加倍；重用字段

        GAME_PLAY_RULE_HUAI_NING =    268435456, --怀宁玩法
        GAME_PLAY_RULE_TAI_HU =    536870912, --太湖玩法

        GAME_PLAY_RULE_SHE_XIAN =    1073741824, --歙县自摸翻规则
        GAME_PLAY_RULE_MAX_32 =    65536, ----歙县,32分封顶，重用字段
        GAME_PLAY_RULE_WANG_JIANG = 8192, --望江麻将
        GAME_PLAY_RULE_ZONG_YANG =    16384, --枞阳麻将，字段重用
        GAME_PLAY_RULE_SU_SONG =    32768, --宿松麻将
        GAME_PLAY_RULE_YUE_XI =    4096, --岳西麻将，字段重用
        GAME_FANG_FEI_JUN_TAN =        2147483648, -- 房卡均摊
        ----------------------------------------------------------/ =
        --顺2反4（顺包2分，反包4分）、顺3反6、顺4反8，默认勾选顺2反4； =
        GR2_SHUN2_FAN4 = 1, --怀宁玩法
        GR2_SHUN3_FAN6 = 2, --怀宁玩法
        GR2_SHUN4_FAN8 = 4, --怀宁玩法
        GR2_MING2_AN3 = 8, --怀宁玩法明杠2分，暗杠3分

        GR2_KUN_FEN =            1, --望江，捆分
        GR2_LIU_HUA_HUA_KAI =    2, --望江，留花算花开
        GR2_DIAN_GANG_GANG_KAI = 4, --望江，点杠算杠上花

        GR2_9_ZHI = 1, --九支
        GR2_PAO_FENG_GANG = 2, --跑风杠
        GR2_13_LAN = 4, --十三烂
        GR2_7_DUI = 8, --七对
        GR2_WU_GUI = 16, --乌龟钻洞
        GR2_GANG_SHANG_HUA = 32, --杠上花

        --芜湖麻将 玩法1值包含怀宁玩法0x10000000值
        GAME_PLAY_RULE_HUAI_NING_AND_GR2_WUHUMJ = 16;                        --芜湖麻将玩法
        --芜湖麻将玩法 
        GR2_WUHUMJ_315 = 1;  --芜湖麻将-315
        GR2_WUHUMJ_525 = 2;  --芜湖麻将-515
        GR2_WUHUMJ_8ZI = 4;  --芜湖麻将-8支
        GR2_WUHUMJ_BAOJI = 8;   --芜湖麻将-报警
        GR2_WUHUMJ_SHANGJIACHU = 65536;  --芜湖麻将-三家出

        --亳州算嘴麻将
        GR2_BOZHOU_SUANZUI_LIANGKAI = 1; --算嘴麻将亮开
        GR2_BOZHOU_SUANZUI_LIANGKAI_NO = 2; --算嘴麻将不亮开（服务端未用到不需要同步）
        GR2_BOZHOU_SUANZUI_BASESCORE = 4; --算嘴麻将底分为0.1（服务端未用到不需要同步）

        --宿松 =
        GR2_ZENG_1 = 1, --不出增、1分、2分、5分（默认1分）
        GR2_ZENG_2 = 2, --不出增、1分、2分、5分（默认1分）
        GR2_ZENG_5 = 4, --不出增、1分、2分、5分（默认1分）
        GR2_ZENG_0 = 8, --不出增
        GR2_PIAO_HUA = 16, --飘花
        GR2_HUA_JIANG_BU_DIE_JIA = 32, --花奖重复计算改为选项：花奖叠加（目前打法）、花奖不叠加； 勾选“花奖不叠加”时，花奖不叠加算分，只算最大分；

        GR2_YUEXI_QUANBAO =    1, --拖三口（全包）
        GR2_YUEXI_BAOHUA =    2, --拖三口（包花）
        GR2_YUEXI_QIANGGANGHU = 4, --抢杠胡
        GR2_YUEXI_DIAOGUATOU = 8, --吊瓜头（不默认勾选），听将牌，并且将牌是风牌（南西北）的情况下，则只能自摸；没有加分。

        --5底5花，10底10花。目前游戏内默认的为1底1花，若勾选几底几花，胡牌后底分、牌型分和花牌分都要乘几。 =
        --（例如：勾选5底5花，胡牌为七小对带两花自摸，则底分1 =*5，七小对5*5，补花数2,*5，自摸*3，共120分。）
        GR2_5_DI_5_HUA =    1, --潜山玩法
        GR2_10_DI_10_HUA = 2, --潜山玩法
        GR2_2_DI_2_HUA =    4, --潜山玩法

        --东至玩法 = 跑风圈数：不跑（默认）、1圈、2圈、3圈；不跑：勾选不跑时，无论跑风几圈，都没有分，并且不提示圈数；,
        GR2_PAO_0 = 1, --东至玩法
        GR2_PAO_1 = 2, --东至玩法
        GR2_PAO_2 = 4, --东至玩法
        GR2_PAO_3 = 8, --东至玩法

        --铜陵 =
        GR2_PAO_FENG_LIANG_GANG_BU_FAN_BEI = 4, --跑风连杠不加倍
        GR2_JIA_PEI_ZI_LOSE_0 = 2, --架配子不输分

        --红中玩法 =
        GR2_QIANGGANGHU = 1, --抢杠胡
        GR2_4_MA =        2,
        GR2_6_MA =        4,
        GR2_8_MA =        8,
        GR2_DI_2_FEN = 16, --2分做底，默认是1分
        GR2_MEN_QING = 32, --门清、硬斗、跑风
        GR2_YING_DOU = 64, --门清、硬斗、跑风
        GR2_PAO_FENG = 128,

        MAHJONG_OPERTAION_SET_PIAO_HUA = 16384, --宿松麻将，飘花 

        GAME_OPERTAION_REJECT_TABLE = 3000, --    亲友圈踢人
        CLUB_TABLE_FLAG = 21196,
        AGENT_CMD_TABLE_PLAYER_REJECT_PLAYER = 96002, --准备玩家T超时未准备玩家

        AGENT_CMD_PLAYER_BIND = 95879,

        AUTH_AGENT_TYPE_INVALID                = 1500,
        AUTH_AGENT_PLAYER_NOT_FOUND            = 1501,
        AUTH_AGENT_BIND_ERROR                = 1502,
        AUTH_AGENT_BIND_TYPE_ERROR            = 1503,
        AUTH_AGENT_BIND_EXIST_ERROR            = 1504,
        AUTH_AGENT_BIND_LIMIT_ERROR            = 1505,
        AUTH_AGENT_BIND_NOT_ENOUGHT_ERROR    = 1506,
        AUTH_AGENT_ERROR                        = 1507,
        AUTH_AGENT_CLOSED                    = 1508,
        AUTH_AGENT_COMFIRM_ID                = 1509,

        --[[	跑得快接入
--]]
        GAME_PLAY_RULE_PAO_DE_KUAI                =    6, --跑得快
        --跑得快子玩法
        GAME_SUB_RULE_BAN_HONG_TAO_3            = 35, --首局先出红桃三
        GAME_SUB_RULE_QUAN_DA_XIAO_TOU_6_3        = 36, --大小头63
        GAME_SUB_RULE_QUAN_DA_XIAO_TOU_8_4        = 37, --大小头84
        GAME_SUB_RULE_QUAN_DA_XIAO_TOU_10_5        = 38, --大小头105
        GAME_SUB_RULE_BAN_HEI_TAO_3_TURNS        = 39, --第一局黑桃3先出  下一局谁赢谁先出
        GAME_SUB_RULE_ZHA_DAN_KE_CHAI            =    40, --炸弹可拆（默认勾选）
        GAME_SUB_RULE_ZHA_DAN_BU_KE_CHAI        =    41, --炸弹不可拆
        GAME_SUB_RULE_BI_XU_GUAN                =    42, --必须管（默认勾选）
        GAME_SUB_RULE_BI_CHU_SI_GE_SAN            =    43, --必出四个三（默认勾选）
        GAME_SUB_RULE_5_FEN_XI                    =    44, --5分/喜
        GAME_SUB_RULE_10_FEN_XI                    =    45, --10分/喜

        GR2_PDK_ANQING = 256, --
        GR2_PDK_ANQING_HONG_3_CHU = 65536, --  //红桃三先出（默认）
        GR2_PDK_ANQING_FIRST_HONG_3_CHU = 131072, --  //首局先出红桃三
        GR2_PDK_ANQING_BI_GUAN = 262144, --   //必须管（默认勾选）
        GR2_PDK_ANQING_BI_43 = 524288, --  //必出四个三
        GR2_PDK_ANQING_5FENG_MEIXI = 1048576, --  //5分/喜
        GR2_PDK_ANQING_10FENG_MEIXI = 2097152, --  //10分/喜
        GR2_PDK_ANQING_CARDS_NUM_TIP = 4194304, --  // 张数提示（默认勾选）
        GR2_PDK_ANQING_SIDAI2 = 8388608, --//四带二 
        GR2_PDK_ANQING_SIDAI3 = 16777216, --// 四带三（默认勾选）

        GR2_PDK_ANQING_3DAI2 = 33554432, -- 三带二（默认勾选）
        GR2_PDK_ANQING_3DAI1 = 67108864, -- 三带一

        GAME_PLAY_RULE_WANFA2 = 2048,
        GAME_PLAY_RULE_2 = 32, --玩法2

        GAME_MJ = 1,
        GAME_PDK = 2,
        GAME_SANFU = 3,
        GAME_GUANDAN = 4,
        GAME_TUOSANZI = 5,
        GAME_DDZ = 6,
        GAME_LIANGFU = 7,

        --三人场 本家手牌和方位标识的偏移
        THREE_PLAYER_MY_CHUCARD_OFFSET_Y            = 30,

        OTHER_NEW_CARD_OFFSET                    = 15,

        --宣城跑得快玩法常量
        GR2_PDK_XUANCHENG = 1048576, --
        GR2_PDK_XUANCHENG_BI_GUAN = 65536, --   //必须管
        GR2_PDK_XUANCHENG_8_DUI = 131072, --  //8对（默认）
        GR2_PDK_XUANCHENG_5FENG_MEIXI = 262144, --  //5分/喜（默认）
        GR2_PDK_XUANCHENG_10FENG_MEIXI = 524288, --  //10分/喜

        CLUB_PRIV_ERROR = 5001,
        CLUB_TABLE_PRIV_ERROR = 5004,
        ENTER_TABLE_ERROR_MONITOR = 6001,

        GR2_JIAN_TING = 536870912, --实时语音
        GR2_FAN_ZHUO_BI_TIP = 268435456, --防作弊提示
        GR2_AN_QING_BU_KE_CHI = 1, --//安庆玩法：可碰不可吃

        --安庆三副玩法常量
        GR2_ANQING_SAN_FU = 134217728, --
        GR2_ANQING_SAN_FU_CHAT_PRI = 65536, --私聊模式
        GR2_ANQING_SAN_FU_CHAT_PUB = 131072, --明聊模式
        GR2_ANQING_SAN_FU_CHAT_MING = 524288, --明牌

        ENTER_TABLE_ERROR_FU = 6002, --进入三幅房间错误

        GR2_OPTION_READY = 1073741824, --选项--准备
        GR2_OPTION_TUOGUAN_DAIDA = 16384, --选项--托管代打
        GR2_OPTION_TUOGUAN_JIESAN = 32768, --选项--托管解散

        GAME_OPERATION_DO_READY_GO = 1040, -- 玩家准备
        GAME_OPERATION_DISTANCE_NEAR = 1041, -- 玩家准备

        GAME_OPERATION_DO_SET_SEX = 1042, -- 玩家设置性别


        GR2_PDK_ANQING_SPRING_NO_DOUBLE = 4096, --春天不翻倍
        GR2_PDK_ANQING_FIRST_CHU_A_BI_YA = 8192, --首次出A必压

        MAHJONG_OPERTAION_FU_CLEAN_SHOW_CARD = 6005,

        GR2_RULE_HUAN_SAN_ZHANG = 1, --换3张
        GR2_RULE_HUAN_DI_FENG_FAN_BEI = 2, --换3张

        MAHJONG_OPERTAION_HUAN_SAN_ZHANG = 33554432, --换3张
        MAHJONG_OPERTAION_HUAN_SAN_ZHANG_OVER = 34603008, --换3张完成

        MAHJONG_OPERTAION_SET_CLEAR_COLOR_ACK = 68157440, --定缺返回

        ENTER_TABLE_ERROR_CLIENT_VERSION = 6003, --客户端版本过低

        ENTER_BOZHOU_CHANNEL_ERROR = 7001, --亳州麻将版本不互通

        MAHJONG_OPERTAION_SET_CLEAR_COLOR_ACK_TABLE = 68157441, --桌上别人定缺返回

        GR2_PDK_XUANCHENG_FIRST_CHU_A_BI_YA = 8192, -- 首次出A必压

        CLUB_CMD_GET_TABLE_COUNT_BY_WANFA = 96003,

        CLUB_CMD_GET_GUIDE = 96004,

        CLUB_CMD_UPDATE_GUIDE = 96006,

        CLUB_CMD_GET_TABLE_INFO = 96005,

        --安徽掼蛋玩法常量
        GR2_ANHUI_GUANDAN_UPGRADE = 65536, -- //掼蛋升级 10000
        GR2_ANHUI_GUANDAN_NO_UPGRADE = 131072, -- //掼蛋团团转
        GR2_ANHUI_GUANDAN_JINGONG = 4, --   //进贡0x4
        GR2_ANHUI_GUANDAN_NO_JINGONG = 8, --  //不进贡 默认0x8
        GR2_ANHUI_GUANDAN_HUAN_WEI = 262144, --   //换位
        GR2_ANHUI_GUANDAN_BOMB_FEN = 524288, --   //炸弹加分
        GR2_ANHUI_GUANDAN_BAO_SHU_10 = 16777216, --   //10张报数 默认
        GR2_ANHUI_GUANDAN_BAO_SHU_7 = 33554432, --   //7张报数
        GR2_ANHUI_GUANDAN_JIE_FENG_DUI_JIA = 4194304, --   //对家接风 默认
        GR2_ANHUI_GUANDAN_JIE_FENG_XIA_JIA = 8388608, --   //下家接风
        GR2_ANHUI_GUANDAN_NO_BIAO_QING = 16, --   //屏蔽表情

        GUANDAN_OPERTAION_JINGONG_CARD = 6006,
        GUANDAN_OPERTAION_HUANGONG_CARD = 6007,
        GUANDAN_OPERTAION_JIEFENG = 6008,
        GUANDAN_OPERTAION_UPDATE_OPP_CARDS = 6009,

        GR2_HUANG_SHAN_QIAN_PENG = 1, --//黄山玩法：全碰  用玩法2

        GR2_NEW_RULES = 4096,

        GAME_PLAY_TUO_SAN_ZI = 2019, -- //玩法1等于拖三字
        GR2_TUO_SAN_ZI_JIE_FENG_BU_CHU_3 = 1, -- //接风不可卖3 默认
        GR2_TUO_SAN_ZI_JIE_FENG_CHU_3 = 2, -- //接风可卖3 
        GR2_TUO_SAN_ZI_TUO_SHOU_NO_FEN = 4, -- //脱手不算分
        GR2_TUO_SAN_ZI_RUAN_DA = 8, -- //软打法 默认
        GR2_TUO_SAN_ZI_YING_DA = 16, -- //硬打法
        GR2_TUO_SAN_ZI_235_FEN = 32, -- //2、3、5分  默认
        GR2_TUO_SAN_ZI_2510_FEN = 64, -- //2、5、10分
        GR2_TUO_SAN_ZI_BU_HUAN_DA_DANG = 128, -- //固定搭档 默认
        GR2_TUO_SAN_ZI_HUAN_DA_DANG = 256, -- //换搭档
        GR2_TUO_SAN_ZI_SHOW_PAI_ZHANG = 512, -- //显示牌张 默认
        GR2_TUO_SAN_ZI_BU_SHOW_PAI_ZHANG = 1024, -- //不显示牌张
        GR2_TUO_SAN_ZI_HUA_TONG = 2048, -- //话筒模式 默认
        GR2_TUO_SAN_ZI_SI_LIAO = 65536, -- //私聊模式
        GR2_TUO_SAN_ZI_MING_LIAO = 131072, -- //明聊模式
        GR2_TUO_SAN_ZI_CHA_PAI = 262144, -- //允许查看队友牌

        --跑风麻将玩法常量
        GR2_PAO_FENG_MA_JIANG = 67108864, --//跑风麻将
        GR2_PAO_FENG_MA_JIANG_DA_QUE = 1, --//打缺 
        GR2_PAO_FENG_MA_JIANG_BU_DA_QUE = 2, --//不打缺 默认
        GR2_PAO_FENG_MA_JIANG_DA_BAN_ZI = 2048, --//打板子 

        GR2_PAO_FENG_MA_JIANG_DA_BAN_ZI_100 = 1, -- //打板子100分 默认
        GR2_PAO_FENG_MA_JIANG_DA_BAN_ZI_80 = 2, -- //打板子80分 
        GR2_PAO_FENG_MA_JIANG_DA_BAN_ZI_50 = 4, -- //打板子50分

        GR2_TONG_CHENG_BU_KE_PENG = 1, --桐城麻将：不可碰

        --斗地主玩法常量
        GAME_PLAY_DOU_DI_ZHU = 2020, --玩法1等于斗地主
        GR2_DOU_DI_ZHU_DI_PAI_KE_JIANG = 1, --底牌可见 默认
        GR2_DOU_DI_ZHU_DI_PAI_BU_KE_JIANG = 2, --底牌不可见 
        GR2_DOU_DI_ZHU_TE_SHU_DI_PAI = 16, -- //特殊底牌
        GR2_DOU_DI_ZHU_REN_SHU = 32, --  //认输
        GR2_DOU_DI_ZHU_SHANG_SHOU_PAI = 64, -- //上手牌
        GR2_DOU_DI_ZHU_RANG_PAI = 128, --  //让牌

        --斗地主操作  主要是叫地主操作
        MAHJONG_OPERTAION_SNATCH_DIZHU = 134217728, --     //玩家抢地主
        MAHJONG_OPERTAION_CALL_SCORE = 16777216, --       //玩家叫分
        MAHJONG_OPERTAION_CALL_DIZHU = 33554432, --       //玩家叫地主
        MAHJONG_OPERTAION_LAST_CARDS = 67108864, --      //玩家上手牌
        MAHJONG_OPERTAION_ADMIT_DEFEAT = 268435456, --      //玩家认输
        MAHJONG_OPERTAION_PUBLIC_DIZHU = 536870912, --     //公布地主

        GAME_OPERTAION_POKER_ADMITDEFEAT_LIMIT = 2023,

        -- 游戏模式，当前是金币场还是vip场还是播放战绩还是比赛
        NONE_GAME_MODEL = 0, --暂时没有比赛
        GOLD_GAME_MODEL = 1,
        VIP_GAME_MODEL = 2,
        PLAY_LOG_MODEL = 3,
        COMPETITION_GAME_MODEL = 4,

        GAME_OPERTAION_TUOGUAN = 7001,
        GAME_OPERTAION_TUOGUAN_CANCEL = 7002,
        GAME_OPERTAION_LIANGFU = 7005,
        GR2_PAO_FENG_MA_JIANG_DA_BAN_ZI_DAIZHUANG_BU_TIANHU = 8, -- //起手带钻不算天胡
        GR2_PAO_FENG_MA_JIANG_DA_BAN_ZI_QIAN_LIAN_BU_XIANG_TU = 16, -- //前两口不限吐
        GR2_PAO_FENG_MA_JIANG_DA_BAN_ZI_BA_ZHUANG_BU_JIA_FENG = 32, -- //霸庄不加分
        GR2_PAO_FENG_MA_JIANG_DA_BAN_ZI_BAOPAI_BU_FANBEI = 64, -- //包牌不翻倍
        GR2_PAO_FENG_MA_JIANG_DA_BAN_ZI_WU_SHUANG_TIANU = 128, -- //无双天胡
        GR2_PAO_FENG_MA_JIANG_DA_BAN_ZI_LIANZHUANG2 = 256, --//连庄分2
        GR2_PAO_FENG_MA_JIANG_DA_BAN_ZI_LIANZHUANG3 = 512, --//连庄分3
        GR2_PAO_FENG_MA_JIANG_DA_BAN_ZI_LIANZHUANG4 = 1024, --//连庄分4

        GR2_TUO_SAN_ZI_SHUANGKOU_HUAN_DA_DANG = 524288, --//双扣换搭档

        GR2_DOU_DI_ZHU_BI_JIAO = 256, --//双王/4个2必叫

        ONLY_ADMIN_COULD_DISMISS = 2, --是否只有管理员才可以解散房间
        ONLY_JIESAN_0_DISMISS = 16, -- //玩家可解散，不限次
        ONLY_JIESAN_3_DISMISS = 32, -- //玩家可解散，限3次
        ONLY_JIESAN_5_DISMISS = 64, -- //玩家可解散，限5次
        ONLY_JIESAN_10_DISMISS = 128, -- //玩家可解散，限10次

        GR2_AN_QING_YIPAODUOXIANG_LIANZHUANG = 2, --  //安庆玩法：一炮多响接庄

        GR2_AN_QING_QISHOU_GANGKAI_TIANHU = 4, --  //安庆玩法：起手杠开算天胡

        --铜陵玩法
        GR2_TONG_LING_NEW_MARK_TYPE = 9999, --作为标签处理
        GR2_TONG_LING_NEW_MARK = 1, --铜陵新玩法
        GR2_TONG_LING_DI_1234 = 2, --铜陵玩法1234底
        GR2_TONG_LING_DI_2468 = 4, --铜陵玩法2468底
        GR2_TONG_LING_DI_5BEI = 8, --铜陵玩法5倍底
        GR2_TONG_LING_NO_WAN = 16, --铜陵玩法不带万
        GR2_TONG_LING_JIA_PEIZI = 32, --铜陵玩法架配子
        GR2_TONG_LING_BU_JIA = 64, --铜陵玩法不架
        GR2_TONG_LING_JIA_4FEN = 128, --铜陵玩法架4分
        GR2_TONG_LING_JIA_SUI_DI = 256, --铜陵玩法架随底分
        GR2_TONG_LING_SI_REN_JIE_SAN = 512, --铜陵玩法四人解散

        GR2_AN_QING_BAOPAI_BUJIAFEN = 8, --  //安庆玩法：包牌不加分
        GR2_HEFEIHONGZHONG_BU_XIAN_PENG = 1, --  //合肥红中 -无限碰
        GR2_RULE_YI_PAO_DOU_XIAN_BU_DAI = 4, --//宣城一炮多响不连带
        GR2_RULE_MEN_QING_DUO_YI_ZUI = 32, --//宣城门清多一嘴

        GR2_TUO_SAN_ZI_QI_PAI_MO_YOU = 1048576, -- //弃牌算末游

        GR2_TUO_SAN_ZI_NO_BIAO_QING = 2097152, -- //屏蔽表情

        GR2_RULE_SHI_ZUI_KE_HU = 8, --//宣城满四嘴可胡
        GR2_ANQING_SAN_FU_SHI_REN_JIE_SAN = 262144, --  //四人可解散
        GR2_PAO_FENG_MA_JIANG_NO_CHI_3_KOU = 8192, -- //禁止吃三口


        GET_GET_CLUB_VIP_ROOM_RECORD_SHARE_URL = 78968, --//获取亲友圈个人战绩分享URL 
        RECEIVE_GOLDSORCE_JOIN_REWARDLOG = 78969, -- //领取金币活动参与奖

        SEND_PLAYER_CMD_SET_SEX = 79737, -- 玩家修改性别   itemID

        GR2_OPTION_OPEN_GPS = 2048, -- //选项--强制定位：非拖三字
        GR2_OPTION_OPEN_GPSTUO_SAN_ZI = 4194304, -- //选项--强制定位：拖三字
        GR2_OPTION_OPEN_GPSPAO_FENG_MA_JIANG = 33554432, -- //选项--强制定位：跑风麻将

        --安庆玩法：
        GR2_AN_QING_MENQING_DUIDUIHU = 16    , --//安庆玩法：门清对对胡
        GR2_AN_QING_DI_1_HUA = 32, --//安庆玩法：1底1花（默认勾选）
        GR2_AN_QING_DI_2_HUA = 64, --//安庆玩法：2底2花
        GR2_AN_QING_DI_3_HUA = 128, --//安庆玩法：3底3花
        GR2_AN_QING_DI_5_HUA = 512, --//安庆玩法：5底5花
        GR2_AN_QING_SHI_REN_JIE_SAN = 1024, -- 	//安庆玩法：四人可解散

        --池州麻将
        GR2_CHI_ZHOU_SHI_REN_JIE_SAN = 1, -- 	//四人可解散

        --太湖麻将
        GR2_TAI_HU_SHI_REN_JIE_SAN = 1, -- 	//四人可解散

        --怀远麻将
        GR2_HUAI_YUAN_SHI_REN_JIE_SAN = 1, -- 	//四人可解散

        --宣城血战	
        GR2_XUAN_CHENG_SHI_REN_JIE_SAN = 16, --宣城血战:四人可解散, --
        --桐城麻将
        GR2_TONG_CHENG_SHI_REN_JIE_SAN = 2, -- 	//桐城麻将：四人可解散


        --安庆跑得快
        GR2_PDK_ANQING_DI_1_HUA = 1, --  //1底1花（默认勾选）
        GR2_PDK_ANQING_DI_2_HUA = 2, --  //2底2花
        GR2_PDK_ANQING_DI_3_HUA = 4, --  //3底3花
        GR2_PDK_ANQING_DI_5_HUA = 8, --  //5底5花

        --安庆三幅玩法
        GR2_ANQING_SAN_FU_DI_1_HUA = 1, --  //1底1花（默认勾选）
        GR2_ANQING_SAN_FU_DI_2_HUA = 2, --  //2底2花
        GR2_ANQING_SAN_FU_DI_3_HUA = 4, --  //3底3花
        GR2_ANQING_SAN_FU_DI_5_HUA = 8, --  //5底5花

        --安庆两幅玩法
        GAME_PLAY_RULE_HUAI_NING_AND_GR2_LIANG_FU = 128,
        GR2_ANQING_LIANG_FU_MING_JIAO = 65536, --明叫模式
        GR2_ANQING_LIANG_FU_AN_JIAO = 131072, --暗叫模式
        GR2_ANQING_LIANG_FU_SHI_REN_JIE_SAN = 262144, --两副4人解散
        GR2_ANQING_LIANG_FU_DI_1 = 1;    --  //1倍（默认勾选）
        GR2_ANQING_LIANG_FU_DI_2 = 2;    --  //2倍
        GR2_ANQING_LIANG_FU_DI_3 = 4;    --  //3倍
        GR2_ANQING_LIANG_FU_DI_5 = 8;    --  //5倍
        GR2_ANQING_LIANG_FU_DI_10 = 524288;  --  //10倍

        --跑风麻将玩法常量
        GR2_PAO_FENG_MA_JIANG_TUPAI_LIMIT = 262144, --//限制吐牌
        GR2_PAO_FENG_MA_JIANG_SHI_REN_JIE_SAN = 524288, -- 	//四人可解散
        GR2_PAO_FENG_MA_JIANG_DI_1_HUA = 2097152, --//1底1花（默认勾选）
        GR2_PAO_FENG_MA_JIANG_DI_2_HUA = 4194304, --//2底2花
        GR2_PAO_FENG_MA_JIANG_DI_3_HUA = 8388608, --//3底3花
        GR2_PAO_FENG_MA_JIANG_DI_5_HUA = 16777216, --//5底5花

        MAHJONG_CODE_COLOR_SHIFTS = 4, --//花色部分的移位，花色，【0，1，2】
        MAHJONG_CODE_COLOR_MASK = 112, --//花色部分的掩码
        MAHJONG_CODE_COLOR_WAN = 0, --//花色部分的掩码,万
        MAHJONG_CODE_COLOR_TIAO = 16, --//花色部分的掩码,条
        MAHJONG_CODE_COLOR_TONG = 32, --//花色部分的掩码,筒
        MAHJONG_CODE_COLOR_ZI = 48, --//东南西北中发白
        MAHJONG_CODE_COLOR_HUA = 64, --//春夏秋冬梅兰竹菊

        GR2_TUO_SAN_ZI_NO_BAN_VOICE = 8388608, --禁止语音模式

        LOOOPENID_BIND_ALREADY_FOUND = 1115, --// 该微信怅号绑定过其他labb， 两个labb怅号不一样
        DNOOPENID_BIND_ALREADY_FOUND = 1116, -- // 该微信怅号绑定过其他dl， 两个dl怅号不一样

        GR2_PDK_ANQING_ZHA_DAN_FAN_BEI = 16, --  //炸弹翻倍
        --无为麻将玩法常量
        GR2_WU_WEI_MA_JIANG = 134217728, --//无为麻将
        GR2_WU_WEI_MA_JIANG_YI_JIA_FU = 1, --// --点炮一家付 默认
        GR2_WU_WEI_MA_JIANG_SAN_JIA_FU = 2, --//胡牌三家付 
        GR2_WU_WEI_MA_JIANG_SUAN_DUI_ZI_FEN = 4, --//算对子分
        GR2_WU_WEI_MA_JIANG_BU_SUAN_DUI_ZI_FEN = 8, --//不算对子分
        GR2_WU_WEI_MA_JIANG_DI_1_HUA = 16, --  //1底1花（默认勾选）
        GR2_WU_WEI_MA_JIANG_DI_3_HUA = 32, --  //3底3花
        GR2_PWU_WEI_MA_JIANG_DI_5_HUA = 64, --  //5底5花
        GR2_WU_WEI_MA_JIANG_DI_2_HUA = 128, --  //2底2花

        --跑得快玩法常量
        GAME_PLAY_PDK_ZONGYANG = 128, --        //玩法1等于跑得快
        GR2_PDK_ZONGYANG_HONG_3_CHU = 65536, --         //红桃三先出（默认）
        GR2_PDK_ZONGYANG_FIRST_HONG_3_CHU = 131072, --         //首局先出红桃三
        GR2_PDK_ZONGYANG_BI_GUAN = 262144, --                 //必须管（默认勾选）
        GR2_PDK_ZONGYANG_BI_43 = 524288, --                //必出四个三
        GR2_PDK_ZONGYANG_5FENG_MEIXI = 1048576, --                //5分/喜
        GR2_PDK_ZONGYANG_10FENG_MEIXI = 2097152, --                //10分/喜
        GR2_PDK_ZONGYANG_CARDS_NUM_TIP = 4194304, --         // 张数提示（默认勾选）
        GR2_PDK_ZONGYANG_SIDAI2 = 8388608, --                //四带二 （默认勾选）
        GR2_PDK_ZONGYANG_SIDAI3 = 16777216, --         // 四带三
        GR2_PDK_ZONGYANG_3DAI2 = 33554432, --         // 三带二（默认勾选）
        GR2_PDK_ZONGYANG_3DAI1 = 67108864, --         // 三带一
        GR2_PDK_ZONGYANG_SPRING_NO_DOUBLE = 16, --         // 春天不翻倍
        GR2_PDK_ZONGYANG_FIRST_CHU_A_BI_YA = 8192, --         // 首次出A必压
        GR2_PDK_ZONGYANG_DI_1_HUA = 1, --  //1底1花（默认勾选）
        GR2_PDK_ZONGYANG_DI_2_HUA = 2, --  //2底2花
        GR2_PDK_ZONGYANG_DI_3_HUA = 4, --  //3底3花
        GR2_PDK_ZONGYANG_DI_5_HUA = 8, --  //5底5花
        GR2_PDK_ZONGYANG_HONG_3_BU_CHU = 32, -- 首局红三不必出

        MAHJONG_OPERTAION_SET_BAO_TING_ACK = 69206016, --//报听返回

        MAHJONG_OPERTAION_JINZHAI_JIAFAN_POWER = 69271552, --金寨玩法跑嘴权限
        MAHJONG_OPERTAION_JINZHAI_JIAFAN = 69337088, --金寨玩法跑嘴选择
        MAHJONG_OPERTAION_JINZHAI_JIAFAN_END = 69468160, --金寨玩法跑嘴结束

        MAHJONG_OPERTAION_BAO_TING = 33554432, --//报听

        GR2_ZONG_YANG_BU_KE_PENG = 32, --//枞阳麻将：不可碰

        MAHJONG_OPERTAION_HAS_BAO_TING = 16384, --/**无为麻将，已报听出牌 **/

        GAME_OPERTAION_BAO_TING = 7003, --回放报听用


        GAME_OPERTAION_BAO_JING = 7004, --玩家报警-芜湖麻将

        GAME_OPERTAION_JINZHAI_JIAFAN = 1104, --玩家金寨加番记录
        GAME_OPERTAION_BOZHOU_DICE = 1105, --玩家算嘴色子
        GAME_OPERTAION_BOZHOU_BANKER_ADD = 1106, --涨庄
        GAME_OPERTAION_BOZHOU_LIANGKAI = 1107, --亮开

        GAME_PLAY_RULE_HUAI_NING_AND_GR2_ZZMJ = 32, --               //转转麻将
        GR2_ZZMJ_DIAN_PAO_HU = 1, -- //点炮胡
        GR2_ZZMJ_ZI_MO_HU = 2, -- //自摸胡
        GR2_ZZMJ_ZHUANG_XIAN = 4, -- //庄闲
        GR2_ZZMJ_QI_DUI_HU = 8, -- //可胡七对
        GR2_ZZMJ_NOT_LAI_ZI = 65536, -- //无癞子
        GR2_ZZMJ_HONG_ZHONG_4 = 131072, -- //4红中
        GR2_ZZMJ_HONG_ZHONG_8 = 262144, -- //8红中
        GR2_ZZMJ_ZHUA_NIAO_2 = 524288, -- //抓2鸟
        GR2_ZZMJ_ZHUA_NIAO_4 = 1048576, -- //抓4鸟
        GR2_ZZMJ_ZHUA_NIAO_6 = 2097152, -- //抓6鸟
        GR2_ZZMJ_ZHUA_NIAO_8 = 4194304, -- //抓8鸟
        GR2_ZZMJ_ZHUA_NIAO_0 = 8388608, -- //不抓鸟
        GR2_ZZMJ_159 = 16777216, -- //159
        GR2_ZZMJ_147 = 33554432, -- //147

        --马鞍山麻将
        GAME_PLAY_RULE_HUAI_NING_AND_GR2_MASMJ = 64,
        GR2_MASMJ_SUANDAO_10 = 1, -- //10倒
        GR2_MASMJ_SUANDAO_15 = 2, -- //15倒
        GR2_MASMJ_SUANDAO_25 = 4, -- //25倒
        GR2_MASMJ_SUANDAO_50 = 8, -- //50倒

        --金寨麻将参数
        GAME_PLAY_RULE_HUAI_NING_AND_GR2_JINZHAIMJ = 256,
        GR2_JINZHAIMJ_PAOZUI = 1, -- //跑嘴玩法

        GR2_TUO_SAN_ZI_NO_FUDONG = 16777216, --        //拖三字:禁止牌局内所有互动

        -- 芜湖、马鞍山的特定局数设置
        WUHU_JUSHU_SET = { 150, 200, 250 },
        MAS_JUSHU_SET = { 150, 200, 250 },

        --specfcard operation
        --1 手牌   2 单放   3 牌墙  4 结束做牌  5 牌墙数据 6 做扑克牌数据
        DO_CARD_TYPE_HANDCARD = 1,
        DO_CARD_TYPE_DFCARD = 2,
        DO_CARD_TYPE_WALLCARD = 3,
        DO_CARD_TYPE_ENDSPECF = 4,
        DO_CARD_TYPE_REQSPECF = 5,
        DO_CARD_TYPE_SPECFPOKER = 6,

        ----------------洗牌卡开始
        MAHJONG_OPERTAION_WASH_CARD_OVER        = 128, ----//洗牌结束
        MAHJONG_OPERTAION_WASH_CARD                = 768, --//洗牌
        ----------------洗牌卡结束
        --洗牌气泡的常量
        XIPAI_QIPAO_INFO = "lose_xipai_qipao_",

        REQ_TYPE = {
            CHECK_DEFAULT = 0, --查看用户
            CHECK_APPLY = 1, --申请校验
            CANCEL_APPLY = 2, --取消注销
            LOGIN_CHECK = 3, --登录检查
        },

        XIPAI_ANIMATION_TIME = 3,
        DICE_ANIMATION_TIME = 3,
    }

    cc.exports.g_UserDataTable =    {
        headImgPng = "headImg.png", --自己头像
        effectVolume = -1,
        musicVolume = -1,
        gameBgColorType = 1, --游戏界面背景颜色类型   1绿色 ， 2咖啡色 3蓝色
        gameVersion = "1.0",
        gameLanguageCfgIndex = 1, --游戏内聊天语音使用的语言配置索引,1,普通话;
        nickname = "",
        sex = 0,
        gamePaibeiCfgIndex = 0, -- 游戏界面  牌背设置  0 黄色 ， 1 绿色， 2 蓝色
        gameFaceCfgIndex = 1, --游戏内聊天互动表情配置索引,1,打开;2,关闭
        gameCardCfgIndex = 1, --游戏内 牌大小的设置  ， 1 是小牌， 2是大牌
        gpsWarningSwitch = 0, --是否开启防作弊提示
        gamePdkCardCfgIndex = 1, --跑得快内 牌  的设置  ， 1 是正常， 2是护眼
        gameShockSwitch = true, --震动开关
        phoneNum = nil, --快速登录手机号
        gameEmojCount = 0, --每局游戏互动表情使用计数
        gameEmojCountTotal = 0, --互动表情总次数
        gameHideTalkVoiceIndex = 1, -- 屏蔽聊天语音
    }
    cc.exports.g_msgDefinitions = {
        --**心跳消息发送***--
        MSG_HEART_BEATING = 10551297,
        MSG_HEART_BEATING_ACK = 10551298,

        --***链接之后发送确认链接消息***--
        MSG_LINK_VALIDATION = 10551299,
        MSG_LINK_VALIDATION_ACK = 10551300,

        MSG_GAME_LOGIN = 12779521,

        MSG_GAME_UPDATE_PLAYER_PROPERTY = 12779522,

        --金币场创建游戏
        MSG_GAME_START_GAME_REQUEST = 12779523,
        MSG_GAME_START_GAME_REQUEST_ACK = 12779524,

        --**客户端通知游戏服务器，玩家的某些行为***--
        MSG_GAME_GAME_OPERTAION = 12779528,
        --**客户端通知游戏服务器，玩家的某些行为***--
        MSG_GAME_GAME_OPERTAION_ACK = 12779529,

        --***提交gps坐标***--
        MSG_UPDATE_GPS_POSITION = 12779530,

        --**游戏结束**--
        MSG_GAME_GAME_OVER = 12779532,
        MSG_GAME_GAME_OVER_ACK = 12779533,

        MSG_GAME_LOGIN_ACK = 12779555,

        ----牌局开始
        MSG_GAME_START_GAME = 12779616,
        ----提醒玩家进行操作
        MSG_GAME_PLAYER_OPERATION_NOTIFY = 12779617,
        MSG_GAME_PLAYER_TABLE_OPERATION = 12779618,
        MSG_GAME_PLAYER_TABLE_OPERATION_PDK = 12779625,
        ---做牌消息
        MSG_GAME_REQ_DO_CARD =    12779635,
        MSG_GAME_REQ_DO_CARD_ACK =    12779636;
        ----创建vip房间
        MSG_GAME_VIP_CREATE_ROOM = 12779776,

        MSG_GAME_VIP_ROOM_CLOSE = 12780032,

        MSG_GAME_REFRESH_ITEM_BASE = 12779784,
        MSG_GAME_REFRESH_ITEM_BASE_ACK = 12779785,
        MSG_GAME_PAY_ITEM_BASE_COMPLETE = 12779792,

        ----购买道具
        MSG_REQUEST_BUY_DAOJU = 12779633,
        MSG_REQUEST_BUY_DAOJU_ACK = 12779634,

        MSG_GAME_PAY_ITEM_BASE_IPA_COMPLETE = 12779793,

        ----游戏中聊天消息
        MSG_TALKING_IN_GAME = 12780288,

        --**系统消息通知客户端*--
        MSG_SYSTEM_NOTIFY_MSG = 12780800,

        -- 录像
        MSG_GET_PLAYER_GAME_LOG = 12780289,

        ---扩展 服务端通知玩家可以进行某种操作
        MSG_NOTIFY_PLAYER_TABLE_OPERATION_EX = 12804096,

        MSG_GAME_PLAYER_TABLE_OPERATION_FU = 12779881,
        -- 查牌返回
        MSG_GAME_INGAME_CAI_CARDS_ACK = 12780041;
        --快速开始
        MSG_CLUB_FASTSTART = 12780608,
        MSG_CLUB_FASTSTART_ACK = 12780609,

        MSG_GAME_PLAYER_OPERATION_NOTIFY_TUOGUAN = 12779888,

        --互动表情
        PLAYER_GET_EMOJI_DATAS = 78946, --客户端获取表情相关数据
        MSG_GET_PLAYER_EMOJIDATA_ACK = 12780293,

        --芜湖麻将报警通知
        MSG_WU_HU_BAO_JING_NOTIFY_MSG = 12783668,
        MSG_GET_WU_HU_SCORE_MSG = 12783669, --芜湖玩法获取当前战绩
        MSG_GET_WU_HU_SCORE_MSG_ACK = 12783670, --当前战绩返回
    }
    cc.exports.g_gameGlobal = require "newgold.GoldLobby.Modules.PeakRaceGame.PDK.GameGlobal"
    cc.exports.GameCMD = require("newgold.GoldLobby.Modules.PeakRaceGame.PDK.PDKCMD")
    cc.exports.PublicFunc = require("newgold.GoldLobby.Modules.PeakRaceGame.PDK.PDKPublicFunc")
end

function table.exceptRepeat(t)
    local _t = {}
    for i,v in ipairs(t) do
        local find = false
        for i,v2 in ipairs(_t) do
            if v2 == v then 
                find = true
                break
            end
        end
        if not find then 
            _t[#_t+1] = v
        end
    end
    return _t
end

return PeakRaceGameModule