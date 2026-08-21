local ConfigData = CF.gameClass("ConfigData", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Data.ConfigData")

function ConfigData:getIsShowLaoZhuang()
    return true
end

function ConfigData:getHaveMahlayer3D()
    return true
end

--判断是否需要飘财动画
function ConfigData:needShowGodOfWealthAni()
    return true
end

function ConfigData:haveTing()
    return true
end

return ConfigData