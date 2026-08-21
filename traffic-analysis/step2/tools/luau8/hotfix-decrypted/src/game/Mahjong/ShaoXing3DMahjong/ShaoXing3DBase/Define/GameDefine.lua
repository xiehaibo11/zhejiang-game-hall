local GameDefine = CF.gameClass("GameDefine", "game.Mahjong.BasicMahjong.Define.GameDefine")

-- 承包状态
GameDefine.ChengBaoState = {
    CHENGBAO = 1,
    FANCHENGBAO = 2,
    HUXIANGCHENGBAO = 3,
}

-- 胡牌状态
GameDefine.HuStateChange = {
    DISCARD = 3,
    SELF = 6,
    ROBKONG = 7,
    HU = 8,
}

-- 胡牌状态
GameDefine.HuState = {
    ET_SELF = 1,
    ET_DISCARD = 2,
    ET_ROBKONG = 3,
}

return GameDefine�