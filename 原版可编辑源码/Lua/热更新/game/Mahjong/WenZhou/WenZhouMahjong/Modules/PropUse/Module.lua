local PropUseModule = CF.gameClass("PropUseModule", "game.Mahjong.BasicMahjong.Modules.PropUse.Module")

PropUseModule.EVENT_UPDATE_DOUBLE_FLAG = "EVENT_UPDATE_DOUBLE_FLAG"
PropUseModule.EVENT_UPDATE_DOUBLE_STATE = "EVENT_UPDATE_DOUBLE_STATE"

function PropUseModule:getSubXYDealList()
    local subXYDealList = PropUseModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgAddBeiSeat), msgClass = CF.GameProtocol.msgAddBeiSeat}
    return subXYDealList
end

-- 加倍的位置信息
function PropUseModule:onMsgAddBeiSeat(msgData)
    self:dispatchEvent( { name = self.EVENT_UPDATE_DOUBLE_FLAG , msg = {bFlag = msgData.bAddFlag}})
    local bShow = msgData.bShow 
    if CF.roomData and CF.roomData:getIsSeer() then
        bShow = false
    end
    if bShow then
        self:dispatchEvent( { name = self.EVENT_UPDATE_DOUBLE_STATE , msg = {bShow = true, bClick = true}})
    else
        self:dispatchEvent( { name = self.EVENT_UPDATE_DOUBLE_STATE , msg = {bShow = false, bClick = false}})
    end
end

return PropUseModule