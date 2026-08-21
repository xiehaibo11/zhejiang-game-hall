local DismissModule = CF.gameClass("DismissModule", "game.GameBase.Modules.Dismiss.Module")

--请求解散
function DismissModule:sendRequestDismiss()
    CF.msgManager:sendRequestDismiss()
end

-- 请求解散
function DismissModule:onMsgRequestDismiss(msgData)
    if CF.roomData:getIsSeer() then
        return
    end
	local cnt = CF.roomData:getPlayCount()
    if cnt > 0 and msgData.time > 0 then
        local DismissUI = CF.gameRequire("Modules.Dismiss.View")
        local updateDismiss = function()
            for i = 1, #msgData.respondDismiss do
                local player = CF.roomData:getPlayerDataBySeatId(i - 1)
                if player then
                    if (i - 1) ~= msgData.seat then
                        if msgData.respondDismiss[i] == 1 then
                            self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {seat = i- 1, status = DismissUI.Status.AGREE}})
                        end
                    end
                end
            end
        end

        if not self._isShowDismissUI then
            self._isShowDismissUI = true
            self._dismissUI = DismissUI.new({isShowMore = true, requestSeat = msgData.seat, time = msgData.time})
			self._dismissUI:showSelf()
			self._dismissUI:onUpdateDismissUI({msg = {seat = msgData.seat, status = DismissUI.Status.REQUEST}})
        end
        if self._isShowDismissUI then
            updateDismiss()
        end
    end
end

-- 请求解散反馈信息
function DismissModule:onMsgRespondDismiss(msgData)
    if CF.roomData:getIsSeer() then
        if msgData.agree then
            CF.roomData:setIsDismiss(true)
        else
            CF.roomData:setIsDismiss(false)
        end
        return
    end
    DismissModule.super.onMsgRespondDismiss(self,msgData)
    local player = CF.roomData:getPlayerDataBySeatId(msgData.seat)
    if player == nil then
        return
    end
    local isRemove = false
    if not msgData.agree then
        isRemove = true
        self:removeDismissLayer()
        self._isShowDismissUI = false
        local tipPlayer = CF.TipTool.showPopLayer("TipLayer",{CF.TipLayer.ENUM_TIP_TYPE.TIP_OK})
        tipPlayer:setText(player:getNickName().."不同意解散包厢!")
    end
    local DismissUI = CF.gameRequire("Modules.Dismiss.View")
    local status = msgData.agree and DismissUI.Status.AGREE or DismissUI.Status.REFUSE
    self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {seat = msgData.seat, status = status, remove = isRemove}})
end

function DismissModule:removeDismissLayer()
	DismissModule.super.removeDismissLayer(self)
    if not tolua.isnull(self._dismissUI) then
        self._dismissUI:removeSelf()
    end
	self._dismissUI = nil
end

return DismissModule