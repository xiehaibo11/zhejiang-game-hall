local ConfigData = CF.gameClass("ConfigData", "game.Mahjong.WenZhou.WenZhouMahjongBase.Data.ConfigData")

function ConfigData:haveTing()
    return true
end

function ConfigData:isShowSettleGoldWindow()
    return false
end

return ConfigData