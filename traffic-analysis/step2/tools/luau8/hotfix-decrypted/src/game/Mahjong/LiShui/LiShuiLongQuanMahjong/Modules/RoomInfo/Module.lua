local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Mahjong.BasicMahjong.Modules.RoomInfo.Module")

RoomInfoModule.EVENT_GAME_PLAYCOUNT_TYPE_CHANGED = "EVENT_GAME_PLAYCOUNT_TYPE_CHANGED"

function RoomInfoModule:getSubXYDealList()
    local subXYDealList = RoomInfoModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgQuanCount),msgClass = CF.GameProtocol.msgQuanCount}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgGameMode), msgClass = CF.GameProtocol.msgGameMode}
    return subXYDealList
end

function RoomInfoModule:onMsgQuanCount(msgData)
   CF.roomData:setPlayCount(msgData.quanCount)
   CF.roomData:setMaxPlayCount(msgData.maxQuanCount)

end

function RoomInfoModule:onMsgGameMode(msgData)
	if CF.roomData:isGoldRoom() then
        return
    end
	self:dispatchEvent( { name = self.EVENT_GAME_PLAYCOUNT_TYPE_CHANGED, msg = msgData})
end


return RoomInfoModule�