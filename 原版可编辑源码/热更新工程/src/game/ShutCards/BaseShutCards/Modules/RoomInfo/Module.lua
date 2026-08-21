local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.BaseCardGame.Modules.RoomInfo.Module")

RoomInfoModule.EVENT_GAME_MULTIPLE = "EVENT_GAME_MULTIPLE"

function RoomInfoModule:ctor()
    RoomInfoModule.super.ctor(self)
end

function RoomInfoModule:getSubXYDealList()
    local list = RoomInfoModule.super.getSubXYDealList(self)
    list[#list + 1] = {callback = handler(self,self.onMsgMultiple),msgClass = CF.GameProtocol.msgMultiple}
    list[#list + 1] = {callback = handler(self,self.onMsgBaseScore),msgClass = CF.GameProtocol.msgBaseScore}
    return list
end

function RoomInfoModule:onMsgMultiple(msgData)
    CF.roomData:setMultiple(msgData.iMultiple)
end

function RoomInfoModule:onMsgBaseScore(msgData)
    CF.roomData:setBaseScore(msgData.iBaseScore)
end

function RoomInfoModule:onMsgGameRule(msgData)
    local strGameRule = RoomInfoModule.super.onMsgGameRule(self, msgData)
    local bLmtMarker = false
    local lmtMarker = string.find(strGameRule,"禁用记牌器")
    if lmtMarker and not CF.roomData:isGoldRoom() then
        bLmtMarker = true
    end
    CF.game:getModule("Marker"):setLmtMarker(bLmtMarker)
    return strGameRule
end

return RoomInfoModule