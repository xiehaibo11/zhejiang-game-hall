local LocalConfig = {DefaultHeadUrl = "https://palmastatic.wenzhoushuke.com/materials/images/20250507/19175378499.png"}
LocalConfig.IMG_PATH = {
    MAIN = "hall/Image/NewGoldHall/Main/",
    ACTBTNS = "hall/Image/NewGoldHall/ActBtns/",
    POP = "hall/Image/NewGoldHall/Pop/",
    CHOOSE_ROOM = "hall/Image/NewGoldHall/ChooseRoom/",
    MORE_GAME = "hall/Image/NewGoldHall/MoreGame/",
    SHOP = "hall/Image/NewGoldHall/Shop/",
    ACT_PEGP = "hall/Image/NewGoldHall/Acts/PeGP/",
    ACTIVITY = "hall/Image/NewGoldHall/Acts/Activity/",
    GPC = "hall/Image/NewGoldHall/GiftpackCollection/",
    ACT_BJRANK = "hall/Image/NewGoldHall/Acts/BJRank/",
    SPINE_ROOT = "animation/Lobby/Base/NewGoldHall/"
}

LocalConfig.BTN_AREA_ID = {
    MAIN_TOP_ACT = 1,
    MAIN_LEFT_ACT = 2,
    MAIN_BOTTOM_RESIDENT = 3,
    MAIN_TOP_RESIDENT = 4,
    CHOOSEROOM_TOP_ACT = 5,
    MAIN_BOTTOM_MORE_RESIDENT = 6,
    CHOOSEROOM_BOTTOM_ACT = 7,
    IN_GAME = 100
}

LocalConfig.BTN_ID = {
    SHOP = 1001, -- 商城
    BAG = 1002, -- 背包
    ACT = 1003, -- 活动
    MAIL = 1004, -- 邮件
    SHARE = 1005, -- 分享
    SETTING = 1006, -- 设置
    TOP_BAG = 1007, -- 右上角背包
    CUSTOMER = 1008, -- 客服
    SCORINGASSISTANT = 1009, -- 计分助手
    GONG_GAO = 1010, -- 公告
    HEALTH = 1011, -- 健康须知
    RULE = 1012, -- 规则
    CUSTOMER_BOTTOM = 1013, -- 客服
    MORE = 1100, -- 更多
    ZHUANG_BAN = 1101, -- 装扮
    LUCKY_TASK = 2001, -- 幸运任务
    NEW_VIP = 2002, -- 老会员
    BANKRUPT_GIFT = 2003, -- 破产礼包
    DEFEAT_GIFT = 2004, -- 免赔礼包
    FIRST_RECHARGE_GIFT = 2005, -- 首充礼包
    FIRST_RECHARGE_SECOND = 2006, -- 首充礼包-狂欢
    DARK_SHUANG_KOU_CHALLENGE = 2007, -- 暗斗挑战
    PERIODIC_GIFT = 2008, -- 周期礼包
    BATTLE_PASS_DARK_SHUANG_KOU = 2009, -- 暗斗战令
    UN_LIMIT_GOLD_ACT = 2010, -- 无限金币
    UNLIMITED_GIFT = 2011, -- 无限惊喜礼包
    BAOJI_RANK = 2100, -- 暴击名人堂
    BANNER = 3001, -- 广告位
    GIFT_PACK_COLLECTION = 3002, -- 礼包合集
    COIN_REWARDS = 3003, -- 获取金币
    RRBY = 10001, -- 捕鱼
    BACK = 10002, -- 返回
    ACT_TIME_LOGIN = 3041,
    BATTLE_PASS_LOBBY = 3044, -- 战令
    LUCKY_BAG = 3046, -- 福袋活动
    RECALL_NEW = 3047, -- 召回活动
    LUCKY_MISSION = 3048, -- 幸运任务2.0
    MONTHLY_CARD = 3051, -- 月卡
    LIANYUN_QIXINGBAOPAI = 3057, -- 七星宝牌
    LIANYUN_CARD13 = 3058, -- 十三张
}

LocalConfig.BTN_CFG = {
    -- [LocalConfig.BTN_ID.SHOP] = {res = "lobby_menu_duihuan.png"},
    [LocalConfig.BTN_ID.BAG] = {res = "", name = "背包"},
    [LocalConfig.BTN_ID.ACT] = {res = "", name = "活动", view = "GoldHallActivityView"},
    [LocalConfig.BTN_ID.MAIL] = {res = "", name = "邮件", view = "GoldHallMailView"},
    [LocalConfig.BTN_ID.SHARE] = {res = "", name = "分享", view = "HealthView"},
    [LocalConfig.BTN_ID.SETTING] = {res = LocalConfig.IMG_PATH.MAIN .. "Btn_sz.png", name = "设置"},
    [LocalConfig.BTN_ID.TOP_BAG] = {res = LocalConfig.IMG_PATH.MAIN .. "Btn_bb.png", name = "背包"},
    [LocalConfig.BTN_ID.CUSTOMER] = {res = LocalConfig.IMG_PATH.MAIN .. "Btn_kf.png", name = "客服"},
    [LocalConfig.BTN_ID.CUSTOMER_BOTTOM] = {res = "", name = "客服"},
    [LocalConfig.BTN_ID.MORE] = {res = "", name = "更多"},
    [LocalConfig.BTN_ID.ZHUANG_BAN] = {res = "", name = "装扮", view = "GoldHallShopView", openParam = {openType = "GoldNew", productType = "prop_rqdh"}},
    [LocalConfig.BTN_ID.GONG_GAO] = {res = "", name = "公告", view = "GoldHallActivityView", openParam = {firstTab = 0}},
    [LocalConfig.BTN_ID.HEALTH] = {res = "", name = "健康须知", view = "HealthView"},
    [LocalConfig.BTN_ID.RULE] = {res = "", name = "规则", view = "GoldHallGameRuleView"},
    [LocalConfig.BTN_ID.LUCKY_TASK] = {res = LocalConfig.IMG_PATH.ACTBTNS .. "Img_xyrw1.png", name = "幸运任务"},
    [LocalConfig.BTN_ID.BANKRUPT_GIFT] = {res = "", name = "破产礼包"},
    [LocalConfig.BTN_ID.DEFEAT_GIFT] = {res = "", name = "免赔礼包"},
    [LocalConfig.BTN_ID.FIRST_RECHARGE_GIFT] = {res = "", name = "首充礼包"},
    [LocalConfig.BTN_ID.FIRST_RECHARGE_SECOND] = {res = "", name = "首充狂欢礼包"},
    [LocalConfig.BTN_ID.DARK_SHUANG_KOU_CHALLENGE] = {res = "", name = "暗斗挑战"},
    [LocalConfig.BTN_ID.BAOJI_RANK] = {res = "", name = "暴击名人堂"},
    [LocalConfig.BTN_ID.BATTLE_PASS_DARK_SHUANG_KOU] = {res = "", name = "暗斗战令"},
    [LocalConfig.BTN_ID.UNLIMITED_GIFT] = {res = "", name = "无限惊喜礼包"},
    [LocalConfig.BTN_ID.PERIODIC_GIFT] = {res = "", name = "周期礼包"},
    [LocalConfig.BTN_ID.GIFT_PACK_COLLECTION] = {res = "", name = "礼包合集"},
    [LocalConfig.BTN_ID.UN_LIMIT_GOLD_ACT] = {res = "", name = "无限金币"},
    [LocalConfig.BTN_ID.BATTLE_PASS_LOBBY] = {res = "", name = "大厅战令"},
    [LocalConfig.BTN_ID.LUCKY_BAG] = {res = "", name = "福袋活动"},
    [LocalConfig.BTN_ID.RECALL_NEW] = {res = "", name = "召回活动"},
    [LocalConfig.BTN_ID.MONTHLY_CARD] = {res = "", name = "月卡活动"},
    [LocalConfig.BTN_ID.LUCKY_MISSION] = {res = "", name = "幸运任务2.0"},
}

LocalConfig.MENU_BAR_CFG = {
    [LocalConfig.BTN_AREA_ID.MAIN_TOP_ACT] = {
        areaId = LocalConfig.BTN_AREA_ID.MAIN_TOP_ACT,
        layoutParam = {dtSize = cc.size(-150, 0)},
        autoLimit = true
    },
    [LocalConfig.BTN_AREA_ID.MAIN_LEFT_ACT] = {
        areaId = LocalConfig.BTN_AREA_ID.MAIN_LEFT_ACT,
        layoutParam = {dtSize = cc.size(0, -170)},
        autoLimit = true
    },
    [LocalConfig.BTN_AREA_ID.MAIN_BOTTOM_RESIDENT] = {
        areaId = LocalConfig.BTN_AREA_ID.MAIN_BOTTOM_RESIDENT,
        layoutParam = {dtSize = cc.size(160, 0)},
        autoLimit = false
    },
    [LocalConfig.BTN_AREA_ID.MAIN_TOP_RESIDENT] = {
        areaId = LocalConfig.BTN_AREA_ID.MAIN_TOP_RESIDENT,
        layoutParam = {dtSize = cc.size(-100, 0)},
        autoLimit = true
    },
    [LocalConfig.BTN_AREA_ID.CHOOSEROOM_TOP_ACT] = {
        areaId = LocalConfig.BTN_AREA_ID.CHOOSEROOM_TOP_ACT,
        layoutParam = {dtSize = cc.size(-150, 0)},
        autoLimit = true
    },
    [LocalConfig.BTN_AREA_ID.MAIN_BOTTOM_MORE_RESIDENT] = {
        areaId = LocalConfig.BTN_AREA_ID.MAIN_BOTTOM_MORE_RESIDENT,
        layoutParam = {dtSize = cc.size(160, 0)},
        autoLimit = false
    },
    [LocalConfig.BTN_AREA_ID.CHOOSEROOM_BOTTOM_ACT] = {
        areaId = LocalConfig.BTN_AREA_ID.CHOOSEROOM_BOTTOM_ACT,
        layoutParam = {dtSize = cc.size(240, 0)},
        autoLimit = true
    }
}

LocalConfig.ENTRY_TAG_ID = {LEFT_TOP = 1, RIGHT_TOP = 2, LEFT_BOTTOM = 3}
LocalConfig.ENTRY_TAG_TYPE_ID = {ACT_TIME = 1, TXT = 2}

LocalConfig.MP = {
    BAG = "GoldNew.SubModules.Bag",
    PC = "GoldNew.SubModules.PersonalCenter",
    RULE = "GoldNew.SubModules.Rule",
    SET = "GoldNew.SubModules.Setting",
    LobbyShop = "GoldNew.SubModules.Shop.LobbyShop",
    SHOP = "GoldNew.SubModules.Shop",
    ActFR = "GoldNew.SubModules.ActFirstRecharge",
    ActPeGP = "GoldNew.SubModules.ActPeriodicGiftPackage",
    ActBJRank = "GoldNew.SubModules.ActBaoJiRank",
    GPC = "GoldNew.SubModules.GiftPackCollection",
    CoinRewards = "GoldNew.SubModules.CoinRewards",
    Mail = "GoldNew.SubModules.Mail",
}
return LocalConfig
