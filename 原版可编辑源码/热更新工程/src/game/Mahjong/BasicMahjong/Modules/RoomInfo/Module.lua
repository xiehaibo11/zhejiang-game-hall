local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.GameBase.Modules.RoomInfo.Module")

function RoomInfoModule:getSubXYDealList()
    local subXYDealList = RoomInfoModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgBaseScore),msgClass = CF.GameProtocol.msgBaseScore}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgLookerEnter),msgClass = CF.GameProtocol.msgLookerEnter}
    return subXYDealList
end

function RoomInfoModule:onMsgBaseScore(msgData)
    CF.roomData:setBaseScore(msgData.nBaseScore) 
end

function RoomInfoModule:onMsgLookerEnter()
    CF.roomData:setIsSeer(true)
end

return RoomInfoModule