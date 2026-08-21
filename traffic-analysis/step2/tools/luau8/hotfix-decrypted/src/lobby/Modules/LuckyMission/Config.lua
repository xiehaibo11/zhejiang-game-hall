local LuckyMissionConfig = {}

LuckyMissionConfig.TaskType = {
    Res_Fenxiang = "fengxiang", --分享次数(客户端触发)
    Res_PropHuDong = "hudong", --使用互动道具 客户端
    Res_PropShuffle = "shuffle", --使用洗牌道具 客户端
    Res_PropCaiYun = "caiyun", --使用求财运道具 客户端
}

LuckyMissionConfig.JumpType = {
    AC_JUMPTYPE_NULL = 0,
    AC_JUMPTYPE_LOBBY = 1,
    AC_JUMPTYPE_TEA = 2,
    AC_JUMPTYPE_TANL = 3,
    AC_JUMPTYPE_CHARGE = 4,
    AC_JUMPTYPE_SHARE = 5,
    AC_JUMPTYPE_OTHER = 6,
    AC_JUMPTYPE_COIN = 7,
    AC_JUMPTYPE_GAME = 10,
    AC_JUMPTYPE_BY = 11,
    AC_JUMPTYPE_LY = 12,    -- 跳转联运游戏
    AC_JUMPTYPE_LOGIN = 999
}

LuckyMissionConfig.REQ_TYPE = {
    REDPOINT = 1,
    CONTENT = 2,
}

LuckyMissionConfig.TAB_LIST = {
    DAILY = 1,
    WEEK = 2,
    TEAM = 3,
    LUCKY = 4,
    CUSTOM = 5,
}

-- 增加新TAB时要配置的参数
LuckyMissionConfig.TAB_INFO = {
    [LuckyMissionConfig.TAB_LIST.DAILY] = {
        TAB_NAME = "每日任务",
        BG_IMG = "cocosStudio/hall/Image/LuckyMission/LuckyMission_Img_mrdd.png", -- 背景图
        TITLE_IMG = "hall/Image/LuckyMission/LuckyMission_Img_bt_mr.png", -- 标题
        PROGRESS_CLOLOR = cc.c3b(41, 84, 164), -- 进度条颜色+进度颜色
        BG_IMG_TASK = "hall/Image/LuckyMission/LuckyMission_Img_mr.png", -- 任务列表底部
    },
    [LuckyMissionConfig.TAB_LIST.WEEK] = {
        TAB_NAME = "每周任务",
        BG_IMG = "cocosStudio/hall/Image/LuckyMission/LuckyMission_Img_mzdd.png", -- 背景图
        TITLE_IMG = "hall/Image/LuckyMission/LuckyMission_Img_bt_mz.png", -- 标题
        PROGRESS_CLOLOR = cc.c3b(68, 58, 179), -- 进度条颜色+进度颜色
        BG_IMG_TASK = "hall/Image/LuckyMission/LuckyMission_Img_mz.png", -- 任务列表底部
    },
    [LuckyMissionConfig.TAB_LIST.TEAM] = {
        TAB_NAME = "惊喜任务",
        BG_IMG = "cocosStudio/hall/Image/LuckyMission/LuckyMission_Img_lddd.png", -- 背景图
        TITLE_IMG = "hall/Image/LuckyMission/LuckyMission_Img_bt_ld.png", -- 标题
        PROGRESS_CLOLOR = cc.c3b(170, 71, 17), -- 进度条颜色+进度颜色
        BG_IMG_TASK = "hall/Image/LuckyMission/LuckyMission_Img_ld.png", -- 任务列表底部
    },
    [LuckyMissionConfig.TAB_LIST.LUCKY] = {
        TAB_NAME = "幸运任务",
        BG_IMG = "cocosStudio/hall/Image/LuckyMission/LuckyMission_Img_xydd.png", -- 背景图
        TITLE_IMG = "hall/Image/LuckyMission/LuckyMission_Img_bt_xy.png", -- 标题
        PROGRESS_CLOLOR = cc.c3b(136, 45, 44), -- 进度条颜色+进度颜色
        BG_IMG_TASK = "hall/Image/LuckyMission/LuckyMission_Img_xy.png", -- 任务列表底部
    },
    [LuckyMissionConfig.TAB_LIST.CUSTOM] = {
        TAB_NAME = "",
        BG_IMG = "cocosStudio/hall/Image/LuckyMission/LuckyMission_Img_xydd.png", -- 背景图
        TITLE_IMG = "hall/Image/LuckyMission/LuckyMission_Img_bt_xy.png", -- 标题
        PROGRESS_CLOLOR = cc.c3b(136, 45, 44), -- 进度条颜色+进度颜色
        BG_IMG_TASK = "hall/Image/LuckyMission/LuckyMission_Img_xy.png", -- 任务列表底部
    },
}

return LuckyMissionConfig�