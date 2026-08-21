local ConfigData = CF.gameClass("ConfigData", "game.Mahjong.BasicMahjong.Data.ConfigData")

--是否仅本地洗牌
function ConfigData:getIsLocalShuffle()
    return true
end

function ConfigData:haveTing()
    return false
end

return ConfigData