local GameDefine = CF.gameClass("GameDefine", "game.GameBase.Define.GameDefine")

--游戏步骤
GameDefine.ENUM_GAME_STEP =
{
    GAME_STEP_NONE = 0,
    GAME_STEP_START_GAME = 1,           -- 开始
    GAME_STEP_ADD_MULTIPLE = 2,         -- 加倍
    GAME_STEP_ADD_MULTIPLE_END = 3,     -- 加倍结束
    GAME_STEP_SPECF_CARDS = 4,          -- 做牌
    GAME_STEP_SEND_CARDS = 5,           -- 发牌
    GAME_STEP_PLAY_CARD = 6,            -- 打牌
    GAME_STEP_WIN_LOST = 7,             -- 计算
    GAME_STEP_ESCAPE_WIN_LOST = 8,      -- 逃跑计算
}

GameDefine.GAME_STEP = GameDefine.ENUM_GAME_STEP

GameDefine.ENUM_WINLOST_ENDTYPE =
{
    ET_NONE = 0,
    ET_ESCAPE = 1,
    ET_WIN = 2,
    ET_LOST = 3
}

--排序类型
GameDefine.KW_NUM_SORT_BY_POWER = 0
GameDefine.KW_NUM_SORT_BY_COUNT = 1

--倍数
GameDefine.KW_MULTIPLE_TEN = 10
GameDefine.KW_MULTIPLE_HUNDRED = 100
GameDefine.KW_MULTIPLE_THOUSAND = 1000

GameDefine.LOCAL_SEAT = {
    NONE    = 0,
    LEFT    = 1,
    BOTTOM  = 2,
    RIGHT   = 3,    
    TOP     = 4,
    TOPLEFT = 5,
}

GameDefine.GAME_BTNS_TAG_FLAG = {
    BTN_OUTCARD = 1,
    BTN_NOT_OUTCARD = 2,
    BTN_TELL_ME = 3,
}

GameDefine.KW_CARD_STYPE_SPRING = "DDZ_chuntian"

GameDefine.KW_PIC_PASS_PNG = "lookAnxiously_image_pass.png"
GameDefine.KW_GAME_HEAD_PATH = "http://thirdwx.qlogo.cn/mmopen/vi_32/RZWHFDljz1SW2Azl6kZyxic4ziaibicnUPo8dB3YiaGbhpyx3Tq34Vemk6KqexyJQJtAphjc9TELicPuRryc0UQ4DPmw/132"

return GameDefine�