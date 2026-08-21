local GameDefine = CF.gameClass("GameDefine", "game.GameBase.Define.GameDefine")

-- 游戏步骤
GameDefine.GAME_STEP = {
    GAME_STEP_NONE = 0,	
	GAME_STEP_START_GAME        = 1,    -- 开始
    GAME_STEP_SHUFFLE_CARDS     = 2,    -- 洗牌
	GAME_STEP_SPECF_CARDS       = 3,    -- 做牌
    GAME_STEP_SEND_CARDS        = 4,    -- 发牌
    GAME_STEP_PLAY_CARD         = 5,    -- 打牌
    GAME_STEP_WIN_LOST          = 6,    -- 计算
    GAME_STEP_ESCAPE_WIN_LOST   = 7,    -- 逃跑计算    
	GAME_STEP_CHOOSE_JOKER      = 12,   -- 选百变牌
	GAME_STEP_ROB_LANDLORD      = 13,   -- 抢地主
    GAME_STEP_SEND_BACKCARDS    = 14,   -- 发送留牌给地主
	GAME_STEP_SET_SHOWHAND      = 15,   -- 是否明牌
	GAME_STEP_SET_DOUBLE        = 16,   -- 是否加倍
}

GameDefine.GAME_STEP_NAME = {
	[1] = "游戏开始",    -- 开始
    [2] = "洗牌",    -- 洗牌
	[3] = "做牌",    -- 做牌
    [4] = "发牌",    -- 发牌
    [5] = "打牌",    -- 打牌
    [6] = "计算",    -- 计算
    [7] = "逃跑计算",    -- 逃跑计算    
	[12] = "选百变牌",   -- 选百变牌
	[13] = "抢地主",   -- 抢地主
    [14] = "发送底牌给地主",   -- 发送留牌给地主
	[15] = "明牌",   -- 是否明牌
	[16] = "加倍",   -- 是否加倍
}

-- 手牌排序类型
GameDefine.SORT_TYPE = {
    SORT_TYPE_POWER = 0,    -- 权值
    SORT_TYPE_COUNT = 1     -- 数量
}

GameDefine.ENUM_GAME_RESULT = 
{
    GAME_RESULT_NONE = 0, 
    GAME_RESULT_WIN = 1,
    GAME_RESULT_LOST = 2,
}

GameDefine.SHARE_SELECT = {
    URL = 1,
    TEXT = 2,
    PIC = 3,
}

GameDefine.KW_GAME_COMMON_ANI_JSON_PATH = "animation/GameCommon/PokerGame/"

GameDefine.KW_PATH_RESOUCE              =   "res/cocosStudio/Landlords/GameLayer"
GameDefine.KW_PATH_RESOUCE_FONT         =   "res/cocosStudio/Common/Font"
GameDefine.KW_WIN_TEXT_FNT              = GameDefine.KW_PATH_RESOUCE_FONT.."/jiesuan_num2-export.fnt"
GameDefine.KW_LOST_TEXT_FNT             = GameDefine.KW_PATH_RESOUCE_FONT.."/jiesuan_num3-export.fnt"
GameDefine.KW_RESULT_ANI_JSONPATH       = GameDefine.KW_GAME_COMMON_ANI_JSON_PATH .. "sk_js_ani/sk_js_ani_ex.ExportJson"

return GameDefine�