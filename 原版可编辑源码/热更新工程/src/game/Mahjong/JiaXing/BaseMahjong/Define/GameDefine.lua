local GameDefine = CF.gameClass("GameDefine", "game.Mahjong.BasicMahjong.Define.GameDefine")

--麻将游戏状态
GameDefine.MAH_STATE_NONE       = 0
GameDefine.MAH_STATE_REPLACE    = 1     --补花
GameDefine.MAH_STATE_PLAY       = 2     --出牌
GameDefine.MAH_STATE_TAKE       = 3     --抓牌
GameDefine.MAH_STATE_CHOW       = 4     --吃
GameDefine.MAH_STATE_PUNG       = 5     --碰
GameDefine.MAH_STATE_MKONG      = 6     --明杠
GameDefine.MAH_STATE_CKONG      = 7     --暗杠
GameDefine.MAH_STATE_TKONG      = 8     --补杠
GameDefine.MAH_STATE_MAHJONG    = 9     --和
GameDefine.MAH_STATE_TWAIT      = 10    --抓听
GameDefine.MAH_STATE_CWAIT      = 11    --吃听
GameDefine.MAH_STATE_PWAIT      = 12     --碰听
GameDefine.MAH_STATE_HU_WAIT    = 13     --查叫
GameDefine.MAH_STATE_TAKE_FIRST = 14     --庄家首抓
GameDefine.MAH_STATE_END        = 15

--包厢解散
GameDefine.JieSanRoomType = {
    REQUEST = 0,
    AGREE = 1,
    DISAGREE = 2,
    HOSTREQ = 3,        -- 游戏未开始房主解散
}

--嘉兴硬自摸by Ruzibeil
GameDefine.SANTAN_HINT_ENUM = 
{
    SELF_SANTAN = 1,  --自己三摊
    OTHER_SANTAN = 2, --被别人三摊
}

GameDefine.ChengBao = {
    CHENGBAO = 0,
    GEN = 1,
    BUGEN = 2,
}

return GameDefine