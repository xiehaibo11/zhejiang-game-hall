local GameDefine = CF.gameClass("GameDefine", "game.GameBase.Define.GameDefine")

GameDefine.KW_DATONG_RES_PATH = "res/cocosStudio/DaTong/"

GameDefine.KW_TABLE_BG_FILE_NAME = {
    [1] = "res/tex/image/card_scene_bg.jpg",
    [2] = "res/tex/image/card_scene_bg_2d.jpg"
}

GameDefine.KW_IMG_GPS_BG = "res/tex/image/gps_info_bg.png"

GameDefine.KW_PATH_SHOW_BOMG_ANI_JSON = "res/animationi/DaTong/DDZ_zhadan/DDZ_zhadan.ExportJson"

GameDefine.CardTypeChinese = 
{
    [201] = '双王',
    [401] = '四个头',
    [501] = '五个头',
    [601] = '六个头',
    [701] = '七个头',
    [801] = '八个头',
    [901] = '九个头',
    [1001] = '十个头',
    [1101] = '十一个头',
    [1201] = '十二个头',
    [403] = '三连炸',
    [503] = '三连炸',
    [603] = '三连炸',
    [703] = '三连炸',
    [803] = '三连炸',
    [404] = '四连炸',
    [504] = '四连炸',
    [604] = '四连炸',
    [405] = '五连炸',
    [505] = '五连炸',
    [406] = '六连炸',
    [10006] = '三王',
    [10007] = '四个王',
    [10008] = '五个王',
    [10009] = '六个王',
}

GameDefine.GAME_BTNS_TAG_FLAG = {
    BTN_OUTCARD = 1,
    BTN_NOT_OUTCARD = 2,
    BTN_TELL_ME = 3,
}

GameDefine.GAME_STEP = {
    GAME_STEP_NONE = 0,
    GAME_STEP_GAME_START = 1,
    GAME_STEP_INTERVENE_OPEN_CARD = 2,
    GAME_STEP_INTERVENE_FRIEND = 3,
    GAME_STEP_INTERVENE_HAND_CARD = 4,
    GAME_STEP_OPEN_CARD = 5,
    GAME_STEP_TAKE_CARD = 6,
    GAME_STEP_SWAP_SEAT = 7,
    GAME_STEP_SEND_FRIEND_CARD = 8,
    GAME_STEP_PLAY_CARD = 9,
    GAME_STEP_WIN_LOST = 10,
    GAME_STEP_ESCAPE_WIN_LOST = 11,
    GAME_STEP_MAKE_CARD = 12,
}

GameDefine.LOCAL_SEAT = {
    NONE    = 0,
    LEFT    = 1,
    BOTTOM  = 2,
    RIGHT   = 3,    
    TOP     = 4,
    TOPMID  = 5,
    TOPLEFT = 6,
}

return GameDefined