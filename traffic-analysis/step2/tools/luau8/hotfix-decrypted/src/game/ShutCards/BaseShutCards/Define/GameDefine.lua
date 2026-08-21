local GameDefine = CF.gameClass("GameDefine", "game.GameBase.Define.GameDefine")

--游戏类型
GameDefine.ENUM_GAME_TYPE = {
    KW_NUM_GAME_TYPE_NORMAL = 0,
    KW_NUM_GAME_TYPE_BAIBIAN = 1,
    KW_NUM_GAME_TYPE_ERREN = 2,
    KW_NUM_GAME_TYPE_QIANBIAN = 3,
    KW_NUM_GAME_TYPE_LISHUI = 4,
}

--游戏步骤
GameDefine.ENUM_GAME_STEP =
{
    GAME_STEP_NONE = 0,
    GAME_STEP_START_GAME = 1,           -- 开始
    GAME_STEP_SPECF_CARDS = 2,          -- 做牌
    GAME_STEP_SEND_CARDS = 3,           -- 发牌
    GAME_STEP_ROB_SHUT = 4,             -- 抢关
    GAME_STEP_PLAY_CARD = 5,            -- 打牌
    GAME_STEP_WIN_LOST = 6,             -- 计算
    GAME_STEP_ESCAPE_WIN_LOST = 7,      -- 逃跑计算
    GAME_STEP_ADD_MULTIPLE = 8,         -- 加倍
    GAME_STEP_ADD_MULTIPLE_END = 9,     -- 加倍结束
}

GameDefine.GAME_STEP = GameDefine.ENUM_GAME_STEP

--游戏步骤
GameDefine.ENUM_GAME_TIP =
{
    GAME_TIP_NONE = 0,
    GAME_TIP_ROB_WAIT = 1,           -- 等待抢关
    GAME_TIP_FIRST_OUT = 2,          -- 最小黑桃先出
}

GameDefine.ENUM_WINLOST_ENDTYPE =
{
    ET_NONE = 0,
    ET_ESCAPE = 1,
    ET_WIN = 2,
    ET_LOST = 3
}

GameDefine.GAME_BTNS_TAG_FLAG = {
    BTN_OUTCARD = 1,
    BTN_NOT_OUTCARD = 2,
    BTN_TELL_ME = 3,
}

--游戏关键字
GameDefine.NUM_PER_FRAME_TIME = 0.03
GameDefine.KW_COUNT_CLOCK_WARNING = 5
GameDefine.KW_CARD_COUNT_WARNING = 1

--排序类型
GameDefine.KW_NUM_SORT_BY_POWER = 0
GameDefine.KW_NUM_SORT_BY_COUNT = 1

--倍数
GameDefine.KW_MULTIPLE_TEN = 10
GameDefine.KW_MULTIPLE_HUNDRED = 100
GameDefine.KW_MULTIPLE_THOUSAND = 1000

--GameDefine.KW_PIC_BOT_SHUT_PNG = "qiangguan.png"
--GameDefine.KW_PIC_NOT_BOT_SHUT_PNG = "buqiang.png"

GameDefine.KW_PIC_PASS_PNG = "shut_image_pass.png"
GameDefine.KW_PIC_BOT_SHUT_PNG = "shut_image_robtip.png"
GameDefine.KW_PIC_NOT_BOT_SHUT_PNG = "shut_image_norobtip.png"

GameDefine.KW_SHUT_DOOR = "guanmen"
GameDefine.KW_BREAK_DOOR = "poguan"

GameDefine.KW_CARD_STYPE_AIRPLANE = "DDZ_feiji"
GameDefine.KW_CARD_STYPE_BOMB = "ios_sk_zd_ani"
GameDefine.KW_CARD_STYPE_SPRING = "DDZ_chuntian"

GameDefine.KW_PIC_BACKGROUND_PNG = "shut_image_background_%d.png"

GameDefine.KW_GAME_HEAD_PATH = "http://thirdwx.qlogo.cn/mmopen/vi_32/RZWHFDljz1SW2Azl6kZyxic4ziaibicnUPo8dB3YiaGbhpyx3Tq34Vemk6KqexyJQJtAphjc9TELicPuRryc0UQ4DPmw/132"

return GameDefine
�	