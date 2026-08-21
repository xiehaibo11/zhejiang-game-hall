local RoomData = CF.gameClass("RoomData", "game.Mahjong.JiaXing.BaseMahjong.Data.RoomData")

RoomData.YZM2P_ROOM_AAPID = {
    4299,9352,9353,8606,13792,13980,8606,100703
}

function RoomData:initDatas()
    RoomData.super.initDatas(self)
end

function RoomData:initWatchData(data)
    RoomData.super.initWatchData(self, data)
    self.playerCount = data.playercount
end

--是否是2人游戏
function RoomData:is2PGame()
    local appid = self:getAppID()
    if appid == 0 and self:isPlayBack() then
        --[有问题的,如关于回放中硬自摸的问题,85%出自此函数,更改成本大]
        return self:getChairs() == 2 
    end
    for _,v in pairs(self.YZM2P_ROOM_AAPID)  do
        if v == appid then
            return true
        end
    end
    if self:getIsSeer() and self.playerCount == 2 then
        return true
    end
    return false
end

return RoomData�