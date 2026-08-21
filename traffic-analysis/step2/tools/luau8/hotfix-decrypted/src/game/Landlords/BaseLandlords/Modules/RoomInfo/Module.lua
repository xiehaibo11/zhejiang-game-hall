local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.BaseCardGame.Modules.RoomInfo.Module")

function RoomInfoModule:ctor()
    RoomInfoModule.super.ctor(self)
end

function RoomInfoModule:getSubXYDealList()
    local list = RoomInfoModule.super.getSubXYDealList(self)
    list[#list + 1] = {callback = handler(self,self.onMsgRoomHostSeat),msgClass = CF.LogicBaseProtocol.msgRoomHostSeatEx}
    list[#list + 1] = {callback = handler(self,self.onMsgPlayCount),msgClass = CF.LogicBaseProtocol.msgPlayCountEx}
    list[#list + 1] = {callback = handler(self,self.onMsgBase),msgClass = CF.GameProtocol.msgGameBase}
    list[#list + 1] = {callback = handler(self,self.onMsgGameMultiples),msgClass = CF.GameProtocol.msgGameMultiples}
    return list
end

function RoomInfoModule:onMsgBase(msgData)    
    CF.roomData:setBaseScore(msgData.nBase) 
end

function RoomInfoModule:onMsgGameMultiples(msgData)
    local msgGameMultiples = msgData
    local rate = msgGameMultiples.ucMult[msgGameMultiples.nSeat + 1]
    if msgGameMultiples.nSeat == CF.roomData:getSelfSeat() then
        CF.roomData:setGameRate(rate)
    end
end

--玩法介绍
function RoomInfoModule:onMsgGameRule(msgData)
    local serverGameRule = RoomInfoModule.super.onMsgGameRule(self, msgData)
    local lmtMarker = string.find(serverGameRule,"禁用记牌器")
    lmtMarker = lmtMarker or false
    CF.game:getModule("Marker"):setLmtMarker(lmtMarker)
end

return RoomInfoModule�