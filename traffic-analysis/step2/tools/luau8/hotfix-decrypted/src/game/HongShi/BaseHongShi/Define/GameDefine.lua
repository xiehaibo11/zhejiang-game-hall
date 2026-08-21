local GameDefine = CF.gameClass("GameDefine", "game.GameBase.Define.GameDefine")

GameDefine.GAME_ID_CONF = {
    JIAXING = {
        30028
    }
}

GameDefine.GAME_STEP = {
    GAME_STEP_NONE = 0,
    GAME_STEP_START_GAME        = 1,               --// 开始游戏
    GAME_STEP_SPEC_CARD         = 2,               --// 做牌
    GAME_STEP_TAKE_FIRST        = 3,               --// 抓牌
    GAME_STEP_OPEN_TEN          = 4,               --// 亮红十
    GAME_STEP_PLAY_CARD         = 5,               --// 打牌
    GAME_STEP_WIN_LOST          = 6,               --// 计算
    GAME_STEP_END_GAME          = 7,               --// 结束游戏
}

GameDefine.LIANG_SHI_POWER = {
    HONG_NONE = 0,          -- 无
    HONG_FANG = 1,          -- 可亮方
    HONG_TAO  = 2,          -- 可亮红桃
    HONG_DOUBLE = 3,        -- 可亮双十    
}

GameDefine.LIANG_SHI_TYPE = {
    OPEN_NONE   =   0,
    OPEN_FANG   =   1,      -- 单亮
    OPEN_TAO    =   2,
    OPEN_DOUBLE =   3,      -- 双亮
    OPEN_HIDE   =   4,      -- 不亮
}

GameDefine.GAME_WIN_ORDER = {
    FIRSET = 1,
    SECOND = 2,
    THREE = 3
}

GameDefine.ENUM_WINLOST_ENDTYPE = {
    KW_ENDTYPE_TAOPAO = 1,
    KW_ENDTYPE_CHAODI = 2,
    KW_ENDTYPE_PINGKOU = 3,
    KW_ENDTYPE_DANKOU = 4,
    KW_ENDTYPE_SHUANGKOU = 5,
}

GameDefine.GAME_BTNS_TAG_FLAG = {
    BTN_OUTCARD = 1,
    BTN_NOT_OUTCARD = 2,
    BTN_TELL_ME = 3,
}

GameDefine.ENUM_PLAYER_ACT = {
    CHANGESEAT = 1,
    SITDOWNTOSTART = 2,
    SITDOEM = 3,
}

--包厢解散
GameDefine.JieSanRoomType = {
    REQUEST = 0,
    AGREE = 1,
    DISAGREE = 2,
    HOSTREQ = 3,        -- 游戏未开始房主解散
}

return GameDefine�