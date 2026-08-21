local DismissModule = CF.gameClass("DismissModule", "game.GameBase.Modules.Dismiss.Module")


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
    if not msgData.agree then
        self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {remove = true}}) 
        local tipPlayer = CF.TipTool.showPopLayer("TipLayer",{CF.TipLayer.ENUM_TIP_TYPE.TIP_OK})
        tipPlayer:setText(player:getNickName() .. "不同意解散包厢!")
        self:removeDismissLayer()
    end
end

-- 请求解散
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

return DismissModule\