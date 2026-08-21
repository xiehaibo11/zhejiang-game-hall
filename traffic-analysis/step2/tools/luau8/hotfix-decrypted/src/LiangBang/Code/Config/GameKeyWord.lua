local GameKeyWord = {}
--游戏类型
GameKeyWord.ENUM_GAME_TYPE = {
KW_NUM_GAME_TYPE_NORMAL = 0,
KW_NUM_GAME_TYPE_BAIBIAN = 1 , 
KW_NUM_GAME_TYPE_ERREN = 2,
KW_NUM_GAME_TYPE_QIANBIAN = 3,
KW_NUM_GAME_TYPE_LISHUI = 4,
KW_NUM_GAME_TYPE_HANGZHOU = 7,
KW_NUM_GAME_TYPE_CHANGSHAN = 8,
KW_NUM_GAME_TYPE_HANGZMAQUAN = 9,
}

--游戏关键字
GameKeyWord.KW_NUM_MAX_XIAN_COUNT = 12

--排序
GameKeyWord.KW_NUM_SORT_BY_POWER = 0
GameKeyWord.KW_NUM_SORT_BY_COUNT = 1
GameKeyWord.KW_NUM_SORT_COUNT = 2

--这是关键字
GameKeyWord.NUM_PER_FRAME_TIME = 0.03

GameKeyWord.KE_START_TYPE = 
{
    ["selfReadyType"] = 1,
    ["autoReadyType"] = 2,
    ["matchType"] = 3,
}

GameKeyWord.KW_PROPID_GOLD_ROOM_PROP = 2116

GameKeyWord.KW_COUNT_CLOCK_WARNING = 5 

--热更新声音
GameKeyWord.SOUND_HOT_UPDATE_ID_QUZHOU = 30063

return GameKeyWord
h