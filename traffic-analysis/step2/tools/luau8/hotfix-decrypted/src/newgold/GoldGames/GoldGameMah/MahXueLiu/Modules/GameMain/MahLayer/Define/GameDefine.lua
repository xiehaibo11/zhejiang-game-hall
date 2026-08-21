local GameDefine = {}

GameDefine.SHARE_SELECT = {
    URL = 1,
    TEXT = 2,
    PIC = 3,
}

GameDefine.LOCAL_SEAT = {
    NONE    = 0,
    LEFT    = 1,
    BOTTOM = 2,
    RIGHT = 3,
    TOP    = 4,
}

GameDefine.ENUM_PLAYER_ACT = {
    CHANGESEAT = 1,
    SITDOWNTOSTART = 2,
    SITDOEM = 3,
}

GameDefine.DISMISS_TYPE = {
    SO = 0,
    GP = 1,
}

--钱包类型
GameDefine.BURSETYPE = {
    BurseTypeNotUse = 0, --不使用
    User = 1, --用户道具
    Tea = 2, --比赛场道具
    AgentUser = 3, --用户用户道具
    TeaVirtual = 4, --比赛场虚拟道具
    Agent = 5, --用户卡
    UserTime = 6, --时效道具 有个数属性
    UserTimeNoCount = 7, --时效道具 无个数属性
    TeaTime = 8, --比赛场时效道具 有个数属性
    TeaTimeNoCount = 9, --比赛场时效道具 无个数属性
}

--[[    1.预约超过30分钟自动取消，需要重新预约
    2.大结束的时候需要请求 OPTS_TYPE_DEL = 2; -- 清除整个
    3.如果玩家离开房间（不是返回大厅），需要调用 OPTS_TYPE_REM = 3; -- 清除单个玩家
]]
-- 预洗牌类型
GameDefine.PRE_SHUFFLE_OPT = {
    OPTS_TYPE_GET = 0, -- 获取
    OPTS_TYPE_SET = 1, -- 设置
    OPTS_TYPE_DEL = 2, -- 清除整个
    OPTS_TYPE_REM = 3, -- 清除单个玩家
}

GameDefine.SHUFFLE_SHOW_TYPE = {
    QUAN = 1, --洗牌券
    DIAMOND = 2, --钻石
    ROOMCARD = 3, --房卡
    DIAMOND_NOT_ENOUGH = 4, --钻石不足
}


GameDefine.TUOGUAN = {
    START = 1,
    CLOSE = 0
}

GameDefine.MAX_HAND_COUNT_TYPE = {
    EIGHT = 8,
    FOURTEEN = 14,
    SEVENTEEN = 17
}

GameDefine.MAH_DIVIDED = 16

GameDefine.MAH_FLOWER = {
    NONE    = 0, -- 空
    WAN    = 1, -- 万
    TIAO    = 2, -- 条
    TONG    = 3, -- 筒
    FENG    = 4, -- 风
    JIAN    = 5, -- 箭
    HUA    = 6, -- 花
    BACK    = 7, -- 背（空白牌面、牌背、财神归入此类）
    COUNT = 8     -- 花色数量
}

GameDefine.MAH_VALUE = {
    NONE                = 0, -- 空麻将值
    WAN_1            = (GameDefine.MAH_FLOWER.WAN * GameDefine.MAH_DIVIDED + 1), -- 一万
    WAN_2            = (GameDefine.MAH_FLOWER.WAN * GameDefine.MAH_DIVIDED + 2), -- 二万
    WAN_3            = (GameDefine.MAH_FLOWER.WAN * GameDefine.MAH_DIVIDED + 3), -- 三万
    WAN_4            = (GameDefine.MAH_FLOWER.WAN * GameDefine.MAH_DIVIDED + 4), -- 四万
    WAN_5            = (GameDefine.MAH_FLOWER.WAN * GameDefine.MAH_DIVIDED + 5), -- 五万
    WAN_6            = (GameDefine.MAH_FLOWER.WAN * GameDefine.MAH_DIVIDED + 6), -- 六万
    WAN_7            = (GameDefine.MAH_FLOWER.WAN * GameDefine.MAH_DIVIDED + 7), -- 七万
    WAN_8            = (GameDefine.MAH_FLOWER.WAN * GameDefine.MAH_DIVIDED + 8), -- 八万
    WAN_9            = (GameDefine.MAH_FLOWER.WAN * GameDefine.MAH_DIVIDED + 9), -- 九万

    TIAO_1            = (GameDefine.MAH_FLOWER.TIAO * GameDefine.MAH_DIVIDED + 1), -- 一条
    TIAO_2            = (GameDefine.MAH_FLOWER.TIAO * GameDefine.MAH_DIVIDED + 2), -- 二条
    TIAO_3            = (GameDefine.MAH_FLOWER.TIAO * GameDefine.MAH_DIVIDED + 3), -- 三条
    TIAO_4            = (GameDefine.MAH_FLOWER.TIAO * GameDefine.MAH_DIVIDED + 4), -- 四条
    TIAO_5            = (GameDefine.MAH_FLOWER.TIAO * GameDefine.MAH_DIVIDED + 5), -- 五条
    TIAO_6            = (GameDefine.MAH_FLOWER.TIAO * GameDefine.MAH_DIVIDED + 6), -- 六条
    TIAO_7            = (GameDefine.MAH_FLOWER.TIAO * GameDefine.MAH_DIVIDED + 7), -- 七条
    TIAO_8            = (GameDefine.MAH_FLOWER.TIAO * GameDefine.MAH_DIVIDED + 8), -- 八条
    TIAO_9            = (GameDefine.MAH_FLOWER.TIAO * GameDefine.MAH_DIVIDED + 9), -- 九条

    TONG_1            = (GameDefine.MAH_FLOWER.TONG * GameDefine.MAH_DIVIDED + 1), -- 一筒
    TONG_2            = (GameDefine.MAH_FLOWER.TONG * GameDefine.MAH_DIVIDED + 2), -- 二筒
    TONG_3            = (GameDefine.MAH_FLOWER.TONG * GameDefine.MAH_DIVIDED + 3), -- 三筒
    TONG_4            = (GameDefine.MAH_FLOWER.TONG * GameDefine.MAH_DIVIDED + 4), -- 四筒
    TONG_5            = (GameDefine.MAH_FLOWER.TONG * GameDefine.MAH_DIVIDED + 5), -- 五筒
    TONG_6            = (GameDefine.MAH_FLOWER.TONG * GameDefine.MAH_DIVIDED + 6), -- 六筒
    TONG_7            = (GameDefine.MAH_FLOWER.TONG * GameDefine.MAH_DIVIDED + 7), -- 七筒
    TONG_8            = (GameDefine.MAH_FLOWER.TONG * GameDefine.MAH_DIVIDED + 8), -- 八筒
    TONG_9            = (GameDefine.MAH_FLOWER.TONG * GameDefine.MAH_DIVIDED + 9), -- 九筒

    FENG_DONG        = (GameDefine.MAH_FLOWER.FENG * GameDefine.MAH_DIVIDED + 1), -- 东风
    FENG_NAN            = (GameDefine.MAH_FLOWER.FENG * GameDefine.MAH_DIVIDED + 2), -- 南风
    FENG_XI            = (GameDefine.MAH_FLOWER.FENG * GameDefine.MAH_DIVIDED + 3), -- 西风
    FENG_BEI            = (GameDefine.MAH_FLOWER.FENG * GameDefine.MAH_DIVIDED + 4), -- 北风
    JIAN_ZHONG        = (GameDefine.MAH_FLOWER.JIAN * GameDefine.MAH_DIVIDED + 1), -- 红中
    JIAN_FA            = (GameDefine.MAH_FLOWER.JIAN * GameDefine.MAH_DIVIDED + 2), -- 发财
    JIAN_BAI            = (GameDefine.MAH_FLOWER.JIAN * GameDefine.MAH_DIVIDED + 3), -- 白板

    HUA_MEI            = (GameDefine.MAH_FLOWER.HUA * GameDefine.MAH_DIVIDED + 1), -- 梅花
    HUA_LAN            = (GameDefine.MAH_FLOWER.HUA * GameDefine.MAH_DIVIDED + 2), -- 兰花
    HUA_ZU            = (GameDefine.MAH_FLOWER.HUA * GameDefine.MAH_DIVIDED + 3), -- 竹花
    HUA_JU            = (GameDefine.MAH_FLOWER.HUA * GameDefine.MAH_DIVIDED + 4), -- 菊花
    HUA_CHUN            = (GameDefine.MAH_FLOWER.HUA * GameDefine.MAH_DIVIDED + 5), -- 春花
    HUA_XIA            = (GameDefine.MAH_FLOWER.HUA * GameDefine.MAH_DIVIDED + 6), -- 夏花
    HUA_QIU            = (GameDefine.MAH_FLOWER.HUA * GameDefine.MAH_DIVIDED + 7), -- 秋花
    HUA_DONG            = (GameDefine.MAH_FLOWER.HUA * GameDefine.MAH_DIVIDED + 8), -- 冬花
    HUA_DA_BAI_BAN    = (GameDefine.MAH_FLOWER.HUA * GameDefine.MAH_DIVIDED + 9), -- 大白板
    HUA_LAO_SHU        = (GameDefine.MAH_FLOWER.HUA * GameDefine.MAH_DIVIDED + 10), -- 老鼠
    HUA_MAO            = (GameDefine.MAH_FLOWER.HUA * GameDefine.MAH_DIVIDED + 11), -- 猫
    HUA_CAI_SHEN        = (GameDefine.MAH_FLOWER.HUA * GameDefine.MAH_DIVIDED + 12), -- 财神
    HUA_JIN_YUAN_BAO    = (GameDefine.MAH_FLOWER.HUA * GameDefine.MAH_DIVIDED + 13), -- 金元宝

    FACE                = (GameDefine.MAH_FLOWER.BACK * GameDefine.MAH_DIVIDED + 1), -- 空白牌面
    BACK                = (GameDefine.MAH_FLOWER.BACK * GameDefine.MAH_DIVIDED + 2), -- 牌背
    JOKER            = (GameDefine.MAH_FLOWER.BACK * GameDefine.MAH_DIVIDED + 6), -- 财神
}

GameDefine.ACTION = {
    NONE    = 0,
    PASS    = 1, -- 过
    CHOW    = 2, -- 吃
    PONG    = 3, -- 碰
    KONG    = 4, -- 杠
    HU    = 5, -- 胡
    FLOWER = 6, -- 补花
    TING    = 7, -- 听
}

GameDefine.POWER = {
    NONE    = 0, -- 无
    CANCEL = 1, -- 过
    PLAY    = 2, -- 出
    CHOW    = 4, -- 吃
    PUNG    = 8, -- 碰
    HU    = 16, -- 和
    MKONG = 32, -- 直杠
    CKONG = 64, -- 暗杠
    TKONG = 128, -- 补杠
    TWAIT = 256, -- 抓听
    CWAIT = 512, -- 吃听
    PWAIT = 1024, -- 碰听
    REPLACE = 2048, -- 补
}

GameDefine.POWER_TO_ACTION = {
    [GameDefine.POWER.NONE]    = GameDefine.ACTION.NONE,
    [GameDefine.POWER.CANCEL] = GameDefine.ACTION.PASS, -- 过
    [GameDefine.POWER.CHOW]    = GameDefine.ACTION.CHOW, -- 吃
    [GameDefine.POWER.PUNG]    = GameDefine.ACTION.PONG, -- 碰
    [GameDefine.POWER.HU]    = GameDefine.ACTION.HU, -- 和
    [GameDefine.POWER.MKONG]    = GameDefine.ACTION.KONG, -- 直杠
    [GameDefine.POWER.CKONG]    = GameDefine.ACTION.KONG, -- 暗杠
    [GameDefine.POWER.TKONG]    = GameDefine.ACTION.KONG, -- 补杠
    [GameDefine.POWER.TWAIT]    = GameDefine.ACTION.TING, -- 抓听
    [GameDefine.POWER.CWAIT]    = GameDefine.ACTION.TING, -- 吃听
    [GameDefine.POWER.PWAIT]    = GameDefine.ACTION.TING, -- 碰听
}

GameDefine.COMB_FLAG = {
    NONE    = 0,
    CHOW    = 1, -- 吃顺子
    PUNG    = 2, -- 碰刻子
    MKONG = 3, -- 明杠子
    CKONG = 4, -- 暗杠子
    TKONG = 5, -- 补杠子
    CCHOW = 6, -- 暗顺子
    CPUNG = 7, -- 暗刻子
    LKONG = 8, -- 乱杠子
    DOUBLE = 9, -- 对子、将
    JOKCMB = 10, -- 财神组
    JOKDBL = 11, -- 财神将
    HAND    = 12, -- 整手牌
    SINGLE = 13, -- 单张 
    COUNT = 14
}

GameDefine.COMB_TYPE = {
    NONE            = 0,
    CHOW            = 1, -- 吃（顺子）
    PONG            = 2, -- 碰（刻子）
    EXPOSED_KONG    = 3, -- 明杠
    CONCEALED_KONG = 4, -- 暗杠
    FILL_KONG    = 5, -- 补杠
    DOUBLE        = 6, -- 对子
}

GameDefine.COMB_FLAG_TO_TYPE = {
    [GameDefine.COMB_FLAG.CHOW]    = GameDefine.COMB_TYPE.CHOW,
    [GameDefine.COMB_FLAG.PUNG]    = GameDefine.COMB_TYPE.PONG,
    [GameDefine.COMB_FLAG.MKONG] = GameDefine.COMB_TYPE.EXPOSED_KONG,
    [GameDefine.COMB_FLAG.CKONG] = GameDefine.COMB_TYPE.CONCEALED_KONG,
    [GameDefine.COMB_FLAG.TKONG] = GameDefine.COMB_TYPE.FILL_KONG,
    [GameDefine.COMB_FLAG.CCHOW] = GameDefine.COMB_TYPE.CHOW,
    [GameDefine.COMB_FLAG.CPUNG] = GameDefine.COMB_TYPE.PONG,
    [GameDefine.COMB_FLAG.DOUBLE] = GameDefine.COMB_TYPE.DOUBLE,
}

-- 胡牌类型
GameDefine.HU_TYPE = {
    NONE        = 0,
    TAKE_SELF = 1, -- 自摸
    TAKE_OTHER = 2, -- 点炮
    ROB_KONG    = 3, -- 抢杠
}

GameDefine.END_TYPE = {
    ET_NONE = 0, -- 逃跑
    ET_SELF = 1, -- 自摸 
    ET_DISCARD = 2, -- 点炮                                 
    ET_ROBKONG = 3, -- 抢杠  
    ET_DRAWN = 5        -- 流局
}

-- 出牌区摆放方式
GameDefine.OUTMAHS_PUT_TYPE = {
    FOUR_DIRECTION = 1, -- 四方出牌显示
    TOGETHER = 2, -- 所有牌一起摆放
}

--游戏步骤
GameDefine.ENUM_GAME_STEP = {
    GAME_STEP_NONE = 0,                            
    GAME_STEP_START_GAME = 1, -- 开始游戏
    GAME_STEP_ANTE = 2,
    GAME_STEP_SPECF_MAH = 3, -- 做牌
    GAME_STEP_THROW_CHIP_1 = 4, -- 掷骰子(定位骰子)
    GAME_STEP_THROW_CHIP_2 = 5, -- 掷骰子(开牌骰子)
    GAME_STEP_TAKE_FIRST = 6, -- 抓牌
    GAME_STEP_THROW_CHIP_3 = 7, -- 掷骰子(财神骰子)
    GAME_STEP_OPEN_MAH = 8, -- 翻开
    GAME_STEP_FIRST_REPLACE = 9, -- 刚开始的补花
    GAME_STEP_PLAY_MAH = 10, -- 开始打麻将
    GAME_STEP_WIN_LOST = 11, -- 计算
    GAME_STEP_END_GAME = 12, -- 结束游戏
    GAME_STEP_COUNT = 13,
    GAME_STEP_USER = 100,
    GAME_STEP_CHANGE_MAH = 101, --换牌  
}

GameDefine.NEW_CARD_VALUE = {
    WAN_LAI = 97,
    TIAO_LAI = 98,
    TONG_LAI = 99,
    ZI_LAI = 100,
    WANNENG_LAI = 101,
    BAI_BIAN = 102,
}

GameDefine.XUELIU_HU_TYPE = {
    SDMFTID_PING_HU_BASE = 20, -- 平胡
    SDMFTID_PING_HU = 4000, -- 平胡
    SDMFTID_QI_XING_LIAN_ZHU = 3001, -- 七星连珠
    SDMFTID_WU_SHUANG_DUI = 3002, -- 无双对
    SDMFTID_JIU_LIAN_BAO_DENG = 3003, -- 九莲宝灯
    SDMFTID_SHI_SAN_YAO = 3004, -- 十三幺
    SDMFTID_SHUANG_LONG_XI_ZHU = 3005, -- 双龙戏珠
    SDMFTID_TIAN_HU = 3006, -- 天胡
    SDMFTID_JIANG_QI_DUI = 3007, -- 将七星
    SDMFTID_YI_ZHI_BAI_WAN = 3008, -- 一掷百万
    SDMFTID_DI_HU = 3009, -- 地胡
    SDMFTID_JIU_WU_ZHI_ZUN = 3010, -- 九五之尊
    SDMFTID_HUANG_JIN_BAI_WAN = 3011, -- 黄金百万
    SDMFTID_WAN_GUAN_ZHI_CAI = 3012, -- 万贯之财
    SDMFTID_HAI_NA_BAI_CHUAN = 3013, -- 海纳百川
    SDMFTID_DA_SI_XI = 3014, -- 大四喜
    SDMFTID_CAI_DING_SI_FANG = 3015, -- 财定四方
    SDMFTID_XI_BEI_WAN_JUN = 3016, -- 西北万钧
    SDMFTID_CAI_YUAN_GUN_GUN = 3017, -- 财源滚滚
    SDMFTID_KONG_QUE_DONG_NAN_FEI = 3018, -- 孔雀东南飞
    SDMFTID_ZHENG_ZHONG_HONG_XIN = 3019, -- 正中红心
    SDMFTID_DA_SAN_YUAN = 3020, -- 大三元
    SDMFTID_JIANG_DUI = 3021, -- 将对
    SDMFTID_HONG_KONG_QUE = 3022, -- 红孔雀
    SDMFTID_LV_YI_SE = 3023, -- 绿一色
    SDMFTID_SHUANG_SHI = 3024, -- 双十
    SDMFTID_QING_QI_DUI = 3025, -- 清七对
    SDMFTID_HEI_YI_SE = 3026, -- 黑一色
    SDMFTID_XIAO_SI_XI = 3027, -- 小四喜
    SDMFTID_YI_SE_SI_BU_GAO = 3028, -- 一色四步高
    SDMFTID_SI_LIAN_KE = 3029, -- 四连刻
    SDMFTID_YI_SE_SI_TONG_SHUN = 3030, -- 一色四同顺
    SDMFTID_SAN_SE_SI_JIE_GAO = 3031, -- 三色四节高
    SDMFTID_XIAO_SAN_YUAN = 3032, -- 小三元
    SDMFTID_SI_XI_QI_DUI = 3033, -- 四喜七对
    SDMFTID_QING_YAO_JIU = 3034, -- 清幺九
    SDMFTID_QUAN_SHUANG_KE = 3035, -- 全双刻
    SDMFTID_SAN_YUAN_QI_DUI = 3036, -- 三元七对
    SDMFTID_SAN_FENG_KE = 3037, -- 三风刻
    SDMFTID_SI_AN_KE = 3038, -- 四暗刻
    SDMFTID_ZI_YI_SE = 3039, -- 字一色
    SDMFTID_YI_TIAO_LONG = 3040, -- 一条龙
    SDMFTID_YI_SE_SAN_TONG_SHUN = 3041, -- 一色三同顺
    SDMFTID_SHUANG_SHUANG_TONG_KE = 3042, -- 双双同刻
    SDMFTID_QUAN_DAN_KE = 3043, -- 全单刻
    SDMFTID_SHI_BA_LUO_HAN = 3044, -- 十八罗汉
    SDMFTID_SAN_SE_SAN_JIE_GAO = 3045, -- 三色三节高
    SDMFTID_SAN_XING_GAO_ZHAO = 3046, -- 三星高照
    SDMFTID_SAN_LIAN_KE = 3047, -- 三连刻
    SDMFTID_SAN_TONG_KE = 3048, -- 三同刻
    SDMFTID_QUAN_XIAO = 3049, -- 全小
    SDMFTID_QUAN_ZHONG = 3050, -- 全中
    SDMFTID_QUAN_DA = 3051, -- 全大
    SDMFTID_HUN_SHUANG = 3052, -- 混双
    SDMFTID_HUN_YAO_JIU = 3053, -- 混幺九
    SDMFTID_SAN_AN_KE = 3054, -- 三暗刻
    SDMFTID_QING_YI_SE = 3055, -- 清一色
    SDMFTID_DAI_YAO_JIU = 3056, -- 带幺九
    SDMFTID_SHI_ER_JIN_CHA = 3057, -- 十二金叉
    SDMFTID_XIAO_SAN_FENG = 3058, -- 小三风
    SDMFTID_YI_SE_SAN_BU_GAO = 3059, -- 一色三步高
    SDMFTID_PENG_PENG_HU = 3060, -- 碰碰胡
    SDMFTID_GANG_SHANG_KAI_HUA = 3061, -- 杠上开花
    SDMFTID_HUN_YI_SE = 3062, -- 混一色
    SDMFTID_LIAN_ZHONG_SAN_YUAN = 3063, -- 连中三元
    SDMFTID_YI_BAN_GAO = 3064, -- 一般高
    SDMFTID_SHUANG_TONG_KE = 3065, -- 双同刻
    SDMFTID_DUAN_YAO_JIU = 3066, -- 断幺九
    SDMFTID_HUN_DAN = 3067, -- 混单
    SDMFTID_SHUANG_JIAN_KE = 3068, -- 双箭刻
    SDMFTID_YING_HU = 3069, -- 硬胡
    SDMFTID_SAN_TONG_SHUN = 3070, -- 三同顺
    SDMFTID_LIAN_LIU = 3071, -- 连六
    SDMFTID_DUAN_HONG_HU = 3072, -- 断红胡
    SDMFTID_QI_DUI = 3073, -- 七对
    SDMFTID_GEN = 3074, -- 根
}
GameDefine.XUELIU_HU_TYPE_NAME = {
    [20] = "平胡",
    [116] = "自摸",
    [4000] = "平胡",
    [3001] = "七星连珠",
    [3002] = "无双对",
    [3003] = "九莲宝灯",
    [3004] = "十三幺",
    [3005] = "双龙戏珠",
    [3006] = "天胡",
    [3007] = "将七星",
    [3008] = "一掷百万",
    [3009] = "地胡",
    [3010] = "九五之尊",
    [3011] = "黄金百万",
    [3012] = "万贯之财",
    [3013] = "海纳百川",
    [3014] = "大四喜",
    [3015] = "财定四方",
    [3016] = "西北万钧",
    [3017] = "财源滚滚",
    [3018] = "孔雀东南飞",
    [3019] = "正中红心",
    [3020] = "大三元",
    [3021] = "将对",
    [3022] = "红孔雀",
    [3023] = "绿一色",
    [3024] = "十全十美",
    [3025] = "清七对",
    [3026] = "黑一色",
    [3027] = "小四喜",
    [3028] = "一色四步高",
    [3029] = "四连刻",
    [3030] = "一色四同顺",
    [3031] = "三色四节高",
    [3032] = "小三元",
    [3033] = "四喜七对",
    [3034] = "清幺九",
    [3035] = "全双刻",
    [3036] = "三元七对",
    [3037] = "三风刻",
    [3038] = "四暗刻",
    [3039] = "字一色",
    [3040] = "一条龙",
    [3041] = "一色三同顺",
    [3042] = "双双同刻",
    [3043] = "全单刻",
    [3044] = "十八罗汉",
    [3045] = "三色三节高",
    [3046] = "三星高照",
    [3047] = "三连刻",
    [3048] = "三同刻",
    [3049] = "全小",
    [3050] = "全中",
    [3051] = "全大",
    [3052] = "混双",
    [3053] = "混幺九",
    [3054] = "三暗刻",
    [3055] = "清一色",
    [3056] = "带幺九",
    [3057] = "十二金钗",
    [3058] = "小三风",
    [3059] = "一色三步高",
    [3060] = "碰碰胡",
    [3061] = "杠上开花",
    [3062] = "混一色",
    [3063] = "连中三元",
    [3064] = "一般高",
    [3065] = "双同刻",
    [3066] = "断幺九",
    [3067] = "混单",
    [3068] = "双箭刻",
    [3069] = "硬胡",
    [3070] = "三同顺",
    [3071] = "连六",
    [3072] = "断红胡",
    [3073] = "七对",
    [3074] = "根",
}

GameDefine.BANKRUP_STATE = {
    WAITE=1,
    GIVEUP=2,
    RECHARE_OK=3,
    REQ_LEVE=4,
}

GameDefine.MDDType = {
    MAIDI = 1,
    DINGDI = 2,
}

GameDefine.MDDFlag = {
    MAIDI = 0,
    DINGDI = 1,
}

GameDefine.LOST_END_TYPE = {
    NONE = -1, -- 无
    BAOPAI = 0, -- 包牌
    REBACKKUNG = 1, -- 退杠
    THREEBACK = 2, -- 三背
    DIANPAO = 3, -- 点炮
    BAOPEI = 4, -- 包赔
    FANGGANG = 5, -- 放杠
    ZIMO = 6, -- 自摸
}

GameDefine.MAH_TYPE = {
    STAND_FACE_FORWARD            = 1, -- 站立牌，牌面朝前
    STAND_FACE_BACKWARD            = 2, -- 站立牌，牌面朝后
    STAND_FACE_TOLEFT            = 3, -- 站立牌，牌面朝左
    STAND_FACE_TORIGHT            = 4, -- 站立牌，牌面朝右
    LIE_FACE_UP_VERTICAL_TOUP    = 5, -- 躺倒牌，牌面朝上，竖直向上
    LIE_FACE_UP_VERTICAL_TODOWN    = 6, -- 躺倒牌，牌面朝上，竖直向下
    LIE_FACE_UP_HORIZONTAL_TOLEFT = 7, -- 躺倒牌，牌面朝上，水平朝左
    LIE_FACE_UP_HORIZONTAL_TORIGHT = 8, -- 躺倒牌，牌面朝上，水平朝右
    LIE_FACE_DOWN_VERTICAL        = 9, -- 躺倒牌，牌面朝下，竖直向上
    LIE_FACE_DOWN_HORIZONTAL        = 10, -- 躺倒牌，牌面朝下，水平朝左
    LIE_FACE_DOWN_VERTICAL_TODOWN = 11, -- 躺倒牌，牌面朝下，竖直向下
    LIE_FACE_DOWN_HORIZONTAL_TORIGHT = 12, -- 躺倒牌，牌面朝下，水平朝右
}

GameDefine.MAH_SHAPE_TYPE = {
    CIRCLE = 1, --角为圆弧状
    SQUARE = 2, --角为直角状
}

GameDefine.MAH_LIGHT_TYPE = {
    LIGHT = 1, --亮牌面
    DARK = 2, --暗牌面
}

GameDefine.MAH_BACK_COLOR_TYPE = {
    ORANGE = 1, --橙色
    YELLOW = 2, --黄色
    GREEN = 3, --绿色
    BLUE = 4, --蓝色
}

GameDefine.MAH_FACE_TYPE = {
    FACE_1 = 1,
    FACE_2 = 2,
    FACE_3 = 3,
}

GameDefine.COMB_LIE_TYPE = {
    ARROW_BY_ICON = 1, -- 图标显示喂牌方向
    ARROW_BY_MAH = 2, -- 倒牌显示喂牌方向
}

-- 手牌摆放类型
GameDefine.HANDAREA_PLACE_TYPE = {
    COMB_AT_LEFT = 1, -- 牌组在左手边
    COMB_AT_RIGHT = 2, -- 牌组在右手边
}

-- 手牌出牌方式
GameDefine.HANDMAHS_PLAY_TYPE = {
    SINGLE_CLICK = 1, -- 单击
    DOUBLE_CLICK = 2, -- 双击
}

--麻将组标志
GameDefine.COM_MAH_FLAG = {
    CMF_NONE = 0,
    CMF_CHOW = 1, -- 吃顺子
    CMF_PUNG = 2, -- 碰刻子
    CMF_MKONG = 3, -- 明杠子
    CMF_CKONG = 4, -- 暗杠子
    CMF_TKONG = 5, -- 补杠子
    CMF_CCHOW = 6, -- 暗顺子
    CMF_CPUNG = 7, -- 暗刻子
    CMF_LKONG = 8, -- 乱杠子
    CMF_DOUBLE = 9, -- 对子、将
    CMF_JOKCMB = 10, -- 财神组
    CMF_JOKDBL = 11, -- 财神将
    CMF_HAND = 12, -- 整手牌
    CMF_SINGLE = 13, -- 单张 
    CMF_COUNT = 14
}

return GameDefine�L