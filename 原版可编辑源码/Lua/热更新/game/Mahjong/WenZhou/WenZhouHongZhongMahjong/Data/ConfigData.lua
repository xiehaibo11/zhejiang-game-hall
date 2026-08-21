local ConfigData = CF.gameClass("ConfigData", "game.Mahjong.WenZhou.WenZhouMahjongBase.Data.ConfigData")

function ConfigData:canChowPungKongJoker()
    return true
end

--判断是否需要飘财动画
function ConfigData:needShowGodOfWealthAni()
    return true
end

return ConfigData