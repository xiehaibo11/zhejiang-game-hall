local MarkerModule = CF.gameClass("MarkerModule", "game.Landlords.BaseLandlords.Modules.Marker.Module")

function MarkerModule:getSubXYDealList()
    local xyTable = MarkerModule.super.getSubXYDealList(self)
    xyTable[#xyTable + 1] = {callback = handler(self, self.onMsgPlayCard), msgClass = CF.GameProtocol.msgOutCard}
    return xyTable
end

function MarkerModule:onMsgPlayCard(msgData)
    --记牌器数据
    if msgData.nPlayCardCnt ~= 0 and msgData.nSeat ~= CF.roomData:getSelfSeat() then
        local deleteCardIDs = {}
        for i = 1, msgData.nPlayCardCnt do
            table.insert(deleteCardIDs, msgData.nPlayCard[i])
        end
        self:deleteMarkerData(deleteCardIDs)
    end
end

return MarkerModule
