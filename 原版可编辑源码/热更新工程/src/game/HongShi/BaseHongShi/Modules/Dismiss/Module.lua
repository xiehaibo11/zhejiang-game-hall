local DismissModule = CF.gameClass("DismissModule", "game.GameBase.Modules.Dismiss.Module")

function DismissModule:isDealMsgRequestDismiss()
    return false
end

function DismissModule:isDealMsgDismissCountDown()
    return true
end

function DismissModule:getSubXYDealList()
    local xyTable = DismissModule.super.getSubXYDealList(self)
    xyTable[#xyTable + 1] = {callback = handler(self, self.onMsgRequestDismiss), msgClass = CF.GameProtocol.msgGameReqJieSan}
    return xyTable
end

function DismissModule:onMsgRequestDismiss(msgData)
    local nFlag = msgData.flag
    local nSeat = msgData.seat
    local nRemainingTime = msgData.remainingTime
    if nFlag == 255 then
        return
    end
    if CF.roomData:getIsSeer() then
        if nFlag == CF.GameDefine.JieSanRoomType.REQUEST or nFlag == CF.GameDefine.JieSanRoomType.AGREE then
            CF.roomData:setIsDismiss(true)
        elseif nFlag == CF.GameDefine.JieSanRoomType.DISAGREE then
            CF.roomData:setIsDismiss(false)
        end
        return
    end
    local player = CF.roomData:getPlayerDataBySeatId(nSeat)
    if not player then
        return
    end
    local DismissUI = CF.gameRequire("Modules.Dismiss.View")
    if nFlag == CF.GameDefine.JieSanRoomType.REQUEST then
        self._dismissLayer = DismissUI.new({isShowMore = true, time = nRemainingTime})
        self._dismissLayer:showSelf()
        self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {seat = nSeat, status = DismissUI.Status.REQUEST}})
    elseif nFlag == CF.GameDefine.JieSanRoomType.DISAGREE then
        self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {seat = nSeat, status = DismissUI.Status.REFUSE}})
    elseif nFlag == CF.GameDefine.JieSanRoomType.AGREE then
        self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {seat = nSeat, status = DismissUI.Status.AGREE}})
    end

    if nFlag == CF.GameDefine.JieSanRoomType.DISAGREE then
        if self._dismissLayer then
            self._dismissLayer:removeSelf()
            self._dismissLayer = nil
            local tipPlayer = CF.TipTool.showPopLayer("TipLayer",{CF.TipLayer.ENUM_TIP_TYPE.TIP_OK})
            tipPlayer:setText(player:getNickName() .. "不同意解散包厢!")
        end
    end
end

--请求解散
function DismissModule:sendRequestDismiss()
    CF.msgManager:sendRequestDismiss()
end

return DismissModule