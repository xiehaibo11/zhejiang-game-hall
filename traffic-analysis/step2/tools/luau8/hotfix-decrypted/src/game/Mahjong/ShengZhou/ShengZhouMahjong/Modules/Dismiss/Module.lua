local DismissModule = CF.gameClass("DismissModule", "game.GameBase.Modules.Dismiss.Module")

-- 请求解散
function DismissModule:onMsgRequestDismiss(msgData)
    if CF.roomData:getIsSeer() then
        return
    end
    local cnt = CF.roomData:getPlayCount()
    if cnt > 0 and msgData.seat >= 0 and msgData.seat <=3 then
        local DismissUI = CF.gameRequire("Modules.Dismiss.View")
        DismissUI.new({isShowMore = true}):showSelf()
        self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {seat = msgData.seat, status = DismissUI.Status.REQUEST}})
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
    local DismissUI = CF.gameRequire("Modules.Dismiss.View")
    local status = msgData.agree and DismissUI.Status.AGREE or DismissUI.Status.REFUSE
    self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {seat = msgData.seat, status = status, remove = not msgData.agree}})
end

return DismissModule�