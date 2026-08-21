local ConfigData = CF.gameClass("ConfigData", "game.Mahjong.LiShui.LiShuiMahjongBase.Data.ConfigData")

--游戏规则项
function ConfigData:isGuoGangBuGang()
    return true
end

function ConfigData:haveTing()
    return true
end

return ConfigData