local DismissModule = CF.gameClass("DismissModule", "game.GameBase.Modules.Dismiss.Module")

-- 请求解散
function DismissModule:onMsgRequestDismiss(msgData)
    if not self:isDealMsgRequestDismiss() then
        return
    end
    if CF.roomData:getIsSeer() then
        CF.roomData:setIsDismiss(true)
        return
    end
	local cnt = CF.roomData:getPlayCount()
    if cnt > 0 then
        local DismissUI = CF.gameRequire("Modules.Dismiss.View")
		DismissUI.new({isShowMore = true}):showSelf()
		self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {seat = msgData.seat, time = msgData.nRemainingTime, status = DismissUI.Status.REQUEST}})
    end
end

function DismissModule:onMsgRespondDismiss(msgData)
    if not self:isDealMsgRespondDismiss() then
        return
    end
    if CF.roomData:getIsSeer() then
        if msgData.agree then
            CF.roomData:setIsDismiss(true)
        else
            CF.roomData:setIsDismiss(false)
        end
        return
    end
    local player = CF.roomData:getPlayerDataBySeatId(msgData.seat)
    if player == nil then
        return
    end
    local DismissUI = CF.gameRequire("Modules.Dismiss.View")
    local status = msgData.agree and DismissUI.Status.AGREE or DismissUI.Status.REFUSE
    self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {seat = msgData.seat, status = status}})
    if not msgData.agree then
        local tipPlayer = CF.TipTool.showPopLayer("TipLayer",{CF.TipLayer.ENUM_TIP_TYPE.TIP_OK})
        tipPlayer:setText(player:getNickName() .. "不同意解散包厢!")
        self:removeDismissLayer()
    end
end

return DismissModule�