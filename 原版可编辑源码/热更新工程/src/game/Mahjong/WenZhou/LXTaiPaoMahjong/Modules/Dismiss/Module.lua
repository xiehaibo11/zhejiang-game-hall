local DismissModule = CF.gameClass("DismissModule", "game.GameBase.Modules.Dismiss.Module")

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
    if not msgData.agree then
        self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {remove = true}})
        local tipPlayer = CF.TipTool.showPopLayer("TipLayer",{CF.TipLayer.ENUM_TIP_TYPE.TIP_OK})
        tipPlayer:setText(player:getNickName().."不同意解散包厢!")
    end
end

return DismissModule