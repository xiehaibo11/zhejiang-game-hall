local DismissModule = CF.gameClass("DismissModule", "game.GameBase.Modules.Dismiss.Module")
local DismissUI = CF.gameRequire("Modules.Dismiss.View")

function DismissModule:ctor()
    DismissModule.super.ctor(self)
    self._isShowDismissUI = false
end

function DismissModule:getSubXYDealList()
    local subXYDealList = DismissModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgDisMissCountDown), msgClass = CF.GameProtocol.msgDismissCountdown }
    return subXYDealList
end

function DismissModule:onMsgRespondDismiss(msgData)

end

-- 请求解散
function DismissModule:onMsgRequestDismiss(msgData)

end

function DismissModule:onMsgDisMissCountDown(msgData)
    local seat = msgData.sSeat
    local player = CF.roomData:getPlayerDataBySeatId(seat)
    if  player == nil then
        return
    end
    local palyerAgree = msgData.iAgrees
    local isRemove = false
    if palyerAgree[seat] == 0 then
        isRemove = true
        local tipPlayer = CF.TipTool.showPopLayer("TipLayer",{CF.TipLayer.ENUM_TIP_TYPE.TIP_OK})
        tipPlayer:setText(player:getNickName() .. "不同意解散包厢!")
        -- tipPlayer:setButtonMoreEvent(tipPlayer.ENUM_BUTTON_TYPE.OK, function ()
        --     self._isShowDismissUI = false
        -- end)
    end
    if not self._isShowDismissUI then
        self._isShowDismissUI =true
        DismissUI.new({ isShowMore = true, requestSeat = seat, time = msgData.nTime }):showSelf()
        local status = DismissUI.Status.REQUEST
        self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {seat = seat, status = status}})
        CF.popLayerManager:removeLayer("TipLayer")
        CF.popLayerManager:removeLayer("LeaveRoomLayer")
    else
        local status = palyerAgree[seat] and DismissUI.Status.AGREE or DismissUI.Status.REFUSE
        self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {seat = seat, status = status, remove = isRemove}})
        if isRemove then
            self._isShowDismissUI = false
        end
    end
    
end

function DismissModule:onMsgDismissFlag(msgData)
    DismissModule.super.onMsgDismissFlag(self,msgData)
    self._isShowDismissUI = false
end

return DismissModule�