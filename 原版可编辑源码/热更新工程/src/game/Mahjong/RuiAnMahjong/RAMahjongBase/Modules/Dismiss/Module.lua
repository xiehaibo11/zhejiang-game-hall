local DismissModule = CF.gameClass("DismissModule", "game.GameBase.Modules.Dismiss.Module")

function DismissModule:ctor()
    DismissModule.super.ctor(self)
    self._bPreventSpitefulDismiss = false
end

function DismissModule:onMsgRequestDismiss(msgData)
    if CF.roomData:getIsSeer() then
        return
    end
	local cnt = CF.roomData:getPlayCount()
    if cnt > 0 then
        local DismissUI = CF.gameRequire("Modules.Dismiss.View")
		DismissUI.new():showSelf()
		self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {seat = msgData.seat, status = DismissUI.Status.REQUEST}})
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
    local DismissUI = CF.gameRequire("Modules.Dismiss.View")
    local status = msgData.agree and DismissUI.Status.AGREE or DismissUI.Status.REFUSE
    self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {seat = msgData.seat, status = status}})

    if not msgData.agree then
        if msgData.seat ~= CF.roomData:getSelfSeat() then
            local player = CF.roomData:getPlayerDataBySeatId(msgData.seat)
            local tipPlayer = CF.TipTool.showPopLayer("TipLayer",{CF.TipLayer.ENUM_TIP_TYPE.TIP_OK})
            tipPlayer:setText(player:getNickName() .. "不同意解散包厢!")
        end
        self:removeDismissLayer()
    elseif self._bPreventSpitefulDismiss then
        self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {seat = msgData.seat, status = DismissUI.Status.AGREE}})
    end
end

function DismissModule:setPreventSpitefulDismiss(bFlag)
    self._bPreventSpitefulDismiss = bFlag
end

return DismissModule