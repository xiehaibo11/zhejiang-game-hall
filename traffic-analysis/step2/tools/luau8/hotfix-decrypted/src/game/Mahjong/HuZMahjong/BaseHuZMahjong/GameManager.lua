local GameManager = CF.gameClass("BaseHuZMahjongManager", "game.Mahjong.BasicMahjong.GameManager")

function GameManager:onAmapGetLocationCallBack(event)
    local gpsInfo = GameManager.super.onAmapGetLocationCallBack(self, event)
    CF.msgManager:sendGPSMsg(gpsInfo)
end

function GameManager:getGpsInfo(tData)
    local fLongitude = tData["longitude"]
    local fLatitude = tData["latitude"]
    return "longitude=" .. fLongitude .. ";latitude=" .. fLatitude .. ";address="
end

return GameManager