local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.BaseCardGame.Modules.RoomInfo.Module")

function RoomInfoModule:ctor()
    RoomInfoModule.super.ctor(self)
end

function RoomInfoModule:getSubXYDealList()
    local list = RoomInfoModule.super.getSubXYDealList(self)
    list[#list + 1] = {callback = handler(self,self.onMsgRoomHostSeat),msgClass = CF.LogicBaseProtocol.msgRoomHostSeatEx}
    list[#list + 1] = {callback = handler(self,self.onMsgPlayCount),msgClass = CF.LogicBaseProtocol.msgPlayCountEx}
    return list
end

--玩法介绍
function RoomInfoModule:onMsgGameRule(msgData)
    local serverGameRule = RoomInfoModule.super.onMsgGameRule(self, msgData)
    if CF.roomData:isBoxRoom() or CF.roomData:isGoldRoom() then
		if string.find(serverGameRule,"//圈主支付") then
			serverGameRule =  string.gsub(serverGameRule,"//圈主支付","/房主支付")
		end
		CF.roomData:setGameRule(serverGameRule)
    end
    local lmtMarker = string.find(serverGameRule,"禁用记牌器")
    lmtMarker = lmtMarker or false
    CF.game:getModule("Marker"):setLmtMarker(lmtMarker)
end

return RoomInfoModulew