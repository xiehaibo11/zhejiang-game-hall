local RecallNewConfig = {}

-- 商城tag
-- 礼包商城
RecallNewConfig.RecallGiftShopTag = "recall_gift"

RecallNewConfig.RoomMode = {
    LOBBY = 10,
    TEAHOUSE = 13,
    GOLDCOIN = 201,
}

-- 活动
RecallNewConfig.ReBackWebTag = "ActivityReBack"

-- 玩家标签
RecallNewConfig.ReBackPlayTag = {
    ReTag_None = "ReTag_None",
    ReTag_Default = "ReTag_Default",
    ReTag_YueJu = "ReTag_YueJu", --约局
    ReTag_ZiShenYueJu = "ReTag_ZiShenYueJu", --资深约局
    ReTag_Gold = "ReTag_Gold", --金币玩家
    ReTag_Other = "ReTag_Other", --捕鱼玩家
}

-- 玩家状态
RecallNewConfig.ClubReBackPlayerStatus = {
    Re_Offline = "Re_Offline",
    Re_Online = "Re_Online",
    Re_Gaming = "Re_Gaming",
}

-- 领奖状态
RecallNewConfig.ReBackStatus = {
    ReStatus_None = "ReStatus_None",
    ReStatus_Can_Reward = "ReStatus_Can_Reward",
    ReStatus_Rewarded = "ReStatus_Rewarded",
}

RecallNewConfig.ComeBackTaskTypeEnum = {
    CBTTNone = 0,
    CBTTClubGame = 1,
    CBTTLobbyGame = 2,
    CBTTGoldGame = 3,
    CBTTYueJuGame = 4,
    CBTTAllGame = 5,
    CBTTJoinClub = 6,
    CBTTContinueLogin = 7,
    CBTTLogin = 8, -- 每日登陆
    CBTTInviteFriend = 9, -- 邀请好友
    CBTTShareGame = 10, --分享游戏
    CBTTUseEmoji = 11, --互动表情
    CBTTRecallFriend = 12, --召回牌友
    CBTTInviteNew = 13, --邀请新人
    CBTTSign = 14, --游戏签到
    CBTTCreateRoom = 15, --创建包厢
    CBTTRecharge = 16, --游戏充值
    CBTTBrowseShop = 17, --浏览商城
    CBTTBiessedProp = 18, --祈福道具
    CBTTBuyGiftPack = 19, --购买礼包
}

RecallNewConfig.ComeBackTaskType = {
    CBTTNone = "CBTTNone",
    CBTTClubGame = "CBTTClubGame",
    CBTTLobbyGame = "CBTTLobbyGame",
    CBTTGoldGame = "CBTTGoldGame",
    CBTTYueJuGame = "CBTTYueJuGame",
    CBTTAllGame = "CBTTAllGame",
    CBTTJoinClub = "CBTTJoinClub",
    CBTTContinueLogin = "CBTTContinueLogin",
    CBTTLogin = "CBTTLogin", -- 每日登陆
    CBTTInviteFriend = "CBTTInviteFriend", -- 邀请好友
    CBTTShareGame = "CBTTShareGame", --分享游戏
    CBTTUseEmoji = "CBTTUseEmoji", --互动表情
    CBTTRecallFriend = "CBTTRecallFriend", --召回牌友
    CBTTInviteNew = "CBTTInviteNew", --邀请新人
    CBTTSign = "CBTTSign", --游戏签到
    CBTTCreateRoom = "CBTTCreateRoom", --创建包厢
    CBTTRecharge = "CBTTRecharge", --游戏充值
    CBTTBrowseShop = "CBTTBrowseShop", --浏览商城
    CBTTBiessedProp = "CBTTBiessedProp", --祈福道具
    CBTTBuyGiftPack = "CBTTBuyGiftPack", --购买礼包
}

-- 任务类型
RecallNewConfig.ReBackTaskType = {
    Rtt_None = RecallNewConfig.ComeBackTaskType.CBTTNone,
    Rtt_Login = RecallNewConfig.ComeBackTaskType.CBTTLogin, -- 每日登陆
    Rtt_InviteFriend = RecallNewConfig.ComeBackTaskType.CBTTInviteFriend, -- 邀请好友
    Rtt_ShareGame = RecallNewConfig.ComeBackTaskType.CBTTShareGame, --分享游戏
    Rtt_UseEmoji = RecallNewConfig.ComeBackTaskType.CBTTUseEmoji, --互动表情
    Rtt_RecallFriend = RecallNewConfig.ComeBackTaskType.CBTTRecallFriend, --召回牌友
    Rtt_InviteNew = RecallNewConfig.ComeBackTaskType.CBTTInviteNew, --邀请新人
    Rtt_GameAll = RecallNewConfig.ComeBackTaskType.CBTTAllGame, --任意对局
    Rtt_GameBox = RecallNewConfig.ComeBackTaskType.CBTTLobbyGame, --包厢对局
    Rtt_GameTea = RecallNewConfig.ComeBackTaskType.CBTTClubGame, --比赛场对局
    Rtt_GameGold = RecallNewConfig.ComeBackTaskType.CBTTGoldGame, --金币场对局
    Rtt_Sign = RecallNewConfig.ComeBackTaskType.CBTTSign, --游戏签到
    Rtt_CreateRoom = RecallNewConfig.ComeBackTaskType.CBTTCreateRoom, --创建包厢
    Rtt_Recharge = RecallNewConfig.ComeBackTaskType.CBTTRecharge, --游戏充值
    Rtt_BrowseShop = RecallNewConfig.ComeBackTaskType.CBTTBrowseShop, --浏览商城
    Rtt_BiessedProp = RecallNewConfig.ComeBackTaskType.CBTTBiessedProp, --祈福道具
    Rtt_BuyGift = RecallNewConfig.ComeBackTaskType.CBTTBuyGiftPack, --购买礼包
    Rtt_YueJu = RecallNewConfig.ComeBackTaskType.CBTTYueJuGame, --约局
}

-- 特权列表
RecallNewConfig.PrivilegeList = {
    STORE = 1, -- 商城折扣
    GIFT = 2, -- 特权礼包
    BANKRUPT = 3, -- 低保次数
    PROP = 4, -- 道具畅用
    GAME = 5, -- 每日首局免费
    FEE = 6, -- 话费福利
}

-- 特权对应资源
RecallNewConfig.PrivilegeListRes = {
    [RecallNewConfig.PrivilegeList.STORE] = "_KW_TQ_SCZK", -- 商城折扣
    [RecallNewConfig.PrivilegeList.GIFT] = "_KW_TQ_TQLB", -- 特权礼包
    [RecallNewConfig.PrivilegeList.GAME] = "_KW_TQ_DJCY", -- 每日首局免费
    [RecallNewConfig.PrivilegeList.FEE] = "_KW_TQ_DBCS", -- 话费福利
}

-- 玩家特权配置
RecallNewConfig.PlayerPrivilege = {
    [RecallNewConfig.ReBackPlayTag.ReTag_Default] = { RecallNewConfig.PrivilegeList.STORE, RecallNewConfig.PrivilegeList.GIFT, RecallNewConfig.PrivilegeList.FEE, RecallNewConfig.PrivilegeList.GAME },
    [RecallNewConfig.ReBackPlayTag.ReTag_YueJu] = { RecallNewConfig.PrivilegeList.STORE, RecallNewConfig.PrivilegeList.GIFT, RecallNewConfig.PrivilegeList.FEE, RecallNewConfig.PrivilegeList.GAME },
    [RecallNewConfig.ReBackPlayTag.ReTag_ZiShenYueJu] = { RecallNewConfig.PrivilegeList.STORE, RecallNewConfig.PrivilegeList.GIFT, RecallNewConfig.PrivilegeList.FEE, RecallNewConfig.PrivilegeList.GAME },
    [RecallNewConfig.ReBackPlayTag.ReTag_Gold] = { RecallNewConfig.PrivilegeList.STORE, RecallNewConfig.PrivilegeList.GIFT, RecallNewConfig.PrivilegeList.FEE, RecallNewConfig.PrivilegeList.GAME },
}

-- 页签
RecallNewConfig.Tab = {
    GIFT = 1, -- 回归豪礼
    SIGN = 2, -- 七日签到
    TASK = 3, -- 回归任务
    FEE = 4, -- 话费福利
}

-- 页签配置
RecallNewConfig.TabConfig = {
    [RecallNewConfig.Tab.GIFT] = {
        NAME = "_KW_TAB_GIFT",
        PATH = "lobby.Modules.RecallNew.GiftView",
    },
    [RecallNewConfig.Tab.SIGN] = {
        NAME = "_KW_TAB_SIGN",
        PATH = "lobby.Modules.RecallNew.SignView",
    },
    [RecallNewConfig.Tab.FEE] = {
        NAME = "_KW_TAB_FEE",
        PATH = "lobby.Modules.RecallNew.FeeView",
    },
    [RecallNewConfig.Tab.TASK] = {
        NAME = "_KW_TAB_TASK",
        PATH = "lobby.Modules.RecallNew.TaskView",
    },
}

-- 引导的玩家类型
RecallNewConfig.GuidePlayerType = {
    DEFAULT = 0, -- 默认
    BOX = 1, -- 包厢
    MATCH = 2, -- 比赛场
    GOLD = 3, -- 金币
    FISH = 4, -- 捕鱼
}

-- 引导类型
RecallNewConfig.GuideType = {
    LASTGAME = 0, -- 最近游戏
    HOTGAME = 1, -- 热门金币
    BOX = 2, -- 包厢
    MATCH = 3, -- 比赛场
    FISH = 4, -- 联运
}

-- 基础UI配置
RecallNewConfig.GuideUIType = {
    [RecallNewConfig.GuideType.LASTGAME] = {
        MJBG = "hghl_Img_mj.png",
        PKBG = "hghl_Img_pk.png",
        MJFONTTITLECOLOR = cc.c3b(236, 255, 209),
        MJFONTCOLOR = cc.c3b(215, 251, 159),
        PKFONTTITLECOLOR = cc.c3b(222, 238, 255),
        PKFONTCOLOR = cc.c3b(159, 205, 251),
    },
    [RecallNewConfig.GuideType.HOTGAME] = {
        MJBG = "hghl_Img_mj.png",
        PKBG = "hghl_Img_pk.png",
        MJFONTTITLECOLOR = cc.c3b(236, 255, 209),
        MJFONTCOLOR = cc.c3b(215, 251, 159),
        PKFONTTITLECOLOR = cc.c3b(222, 238, 255),
        PKFONTCOLOR = cc.c3b(159, 205, 251),
    },
    [RecallNewConfig.GuideType.BOX] = {
        BG = "hghl_Img_cj.png",
        FONTTITLECOLOR = cc.c3b(228, 255, 250),
        FONTCOLOR = cc.c3b(159, 251, 241),
    },
    [RecallNewConfig.GuideType.MATCH] = {
        BG = "hghl_Img_bs.png",
        FONTTITLECOLOR = cc.c3b(255, 231, 221),
        FONTCOLOR = cc.c3b(255, 230, 208),
    },
    [RecallNewConfig.GuideType.FISH] = {
        BG = "hghl_Img_by.png",
        FONTTITLECOLOR = cc.c3b(243, 234, 255),
        FONTCOLOR = cc.c3b(239, 208, 255),
    },
}

-- 基础文案配置
RecallNewConfig.GuideTextType = {
    [RecallNewConfig.GuideType.LASTGAME] = {
        MJINFO = "胡个痛快",
        PKINFO = "爽快对局",
        BTNINFO = "去游戏",
    },
    [RecallNewConfig.GuideType.HOTGAME] = {
        MJINFO = "胡个痛快",
        PKINFO = "爽快对局",
        BTNINFO = "去游戏",
    },
    [RecallNewConfig.GuideType.BOX] = {
        NAME = "创建包厢",
        INFO = "老牌友开一局",
        BTNINFO = "去游戏",
    },
    [RecallNewConfig.GuideType.MATCH] = {
        NAME = "比赛场",
        INFO = "切磋牌技",
        BTNINFO = "去游戏",
    },
    [RecallNewConfig.GuideType.FISH] = {
        NAME = "人人捕鱼",
        FONTTITLECOLOR = "3D捕鱼",
        BTNINFO = "去游戏",
    },
}

-- 引导用户类型
RecallNewConfig.GuideUserConfig = {
    [RecallNewConfig.GuidePlayerType.DEFAULT] = { RecallNewConfig.GuideType.BOX, RecallNewConfig.GuideType.HOTGAME, RecallNewConfig.GuideType.LASTGAME },
    [RecallNewConfig.GuidePlayerType.BOX] = { RecallNewConfig.GuideType.HOTGAME, RecallNewConfig.GuideType.BOX, RecallNewConfig.GuideType.MATCH },
    [RecallNewConfig.GuidePlayerType.MATCH] = { RecallNewConfig.GuideType.HOTGAME, RecallNewConfig.GuideType.MATCH, RecallNewConfig.GuideType.BOX },
    [RecallNewConfig.GuidePlayerType.GOLD] = { RecallNewConfig.GuideType.BOX, RecallNewConfig.GuideType.HOTGAME, RecallNewConfig.GuideType.LASTGAME },
    [RecallNewConfig.GuidePlayerType.FISH] = { RecallNewConfig.GuideType.HOTGAME, RecallNewConfig.GuideType.FISH, RecallNewConfig.GuideType.LASTGAME },
}

-- 引导默认配置
RecallNewConfig.GuideConfig = {
    [0] = "30116|4",
    [XH.LOBBY_ID.LISHUI]    = "30386|3",
    [XH.LOBBY_ID.HANGMAQUAN] = "30134|4",
    [XH.LOBBY_ID.TAIZHOU]    = "30400|4",
}

-- 话费目标值
RecallNewConfig.FeeTarget = 3000

RecallNewConfig.FeeState = {
    NULL = 0,
    CAN_GET = 1,
    ALREADY_GET = 2,
}

return RecallNewConfig$'  