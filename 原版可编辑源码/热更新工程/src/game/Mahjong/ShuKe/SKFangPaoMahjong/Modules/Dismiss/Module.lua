local DismissModule = CF.gameClass("DismissModule", "game.GameBase.Modules.Dismiss.Module")
local DismissUI = CF.gameRequire("Modules.Dismiss.View")

function DismissModule:ctor()
    DismissModule.super.ctor(self)
    self._isShowDismissUI = false
end

function DismissModule:onMsgRespondDismiss(msgData)
    if CF.roomData:getIsSeer() then
        if msgData.agree then
            CF.roomData:setIsDismiss(true)
        else
            CF.roomData:setIsDismiss(false)
        end
        return
    end
    local player = CF.roomData:getPlayerDataBySeatId(msgData.seat)

    local isRemove = false
    if not msgData.agree then
        isRemove = true
        local tipPlayer = CF.TipTool.showPopLayer("TipLayer", {CF.TipLayer.ENUM_TIP_TYPE.TIP_OK})
        tipPlayer:setText(player:getNickName() .. "不同意解散包厢!") 
        self._isShowDismissUI = false
    end 

    local status = msgData.agree and DismissUI.Status.AGREE or DismissUI.Status.REFUSE
    self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {seat = msgData.seat, status = status, remove = isRemove}})
end

-- 请求解散
function DismissModule:onMsgRequestDismiss(msgData)
    if CF.roomData:getIsSeer() then
        return
    end
    local cnt = CF.roomData:getPlayCount()
    if cnt > 0 then
        if not self._isShowDismissUI and msgData.time > 0 then
            self._isShowDismissUI = true
            DismissUI.new({ isShowMore = true, requestSeat = msgData.seat, time = msgData.time }):showSelf()
            self:dispatchEvent({ name = self.EVENT_UPDATE_DISMISS_UI, msg = { seat = msgData.seat, status = DismissUI.Status.REQUEST } })
            CF.popLayerManager:removeLayer("TipLayer")
            CF.popLayerManager:removeLayer("LeaveRoomLayer")
        end
    end

    for i = 1, #msgData.respondDismiss do  
        local player = CF.roomData:getPlayerDataBySeatId(i - 1)
        if player then
            -- if (i - 1) ~= msgData.seat then
                if msgData.respondDismiss[i] == 1 then
                    self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {seat = i- 1, status = DismissUI.Status.AGREE, remove = false}})
                end
            -- end
        end
    end
end

--请求解散
function DismissModule:sendRequestDismiss()
    CF.msgManager:sendRequestDismiss()
end

return DismissModule