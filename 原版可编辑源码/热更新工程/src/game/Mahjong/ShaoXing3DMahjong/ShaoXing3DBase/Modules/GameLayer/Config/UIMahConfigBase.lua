local UIMahConfigBase = CF.gameClass("UIMahConfigBase", "game.Mahjong.BasicMahjong.Modules.GameLayer.Config.UIMahConfigBase")

--麻将牌颜色
UIMahConfigBase.MahColor = {
    Normal = cc.c3b(255,255,255),
    Selected = cc.c3b(255,201,170),
    SameValue = cc.c3b(97,191,255),
    Drag = cc.c3b(158,158,158),
    Limit = cc.c3b(119,121,125),
    ActionShader = cc.c3b(255,246,174),
}

return UIMahConfigBase