local DismissModule = CF.gameClass("DismissModule", "game.ShutCards.BaseShutCards.Modules.Dismiss.Module")

function DismissModule:onMsgDismissCountDown(msgData)
    if not self:isDealMsgDismissCountDown() then
        self:onMsgRequestDismiss({seat = msgData.reqSeat}) 
        return
    end
    
    local refuseCount = 0
    local agreeCount = 0
    local playerCount = CF.roomData:getCurPlayerCount()
    for i = 0, playerCount - 1 do
        if msgData.iAgrees[i] == 0 then
            refuseCount = refuseCount + 1
        elseif msgData.iAgrees[i] == 1 then
            agreeCount = agreeCount + 1
        end
    end
    
    local bShowTip = true
    if (playerCount == 2 and agreeCount == 2) or (playerCount > 2 and agreeCount >= playerCount ) or ( refuseCount > 0 ) then
        bShowTip = false
    end

    if not bShowTip then
        self:onDismissCountdown({bShow = false})
    else
        self:onDismissCountdown({bShow = true, seat = msgData.reqSeat, nTime = msgData.nTime})
    end

    local DismissUI = CF.gameRequire("Modules.Dismiss.View")
    for i = 0, playerCount - 1 do
        if msgData.iAgrees[i] == 0 then
            self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {seat = i, status = DismissUI.Status.REFUSE}})
        elseif msgData.iAgrees[i] == 1 then
            self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {seat = i, status = DismissUI.Status.AGREE}})
        else
            self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {seat = i, status = DismissUI.Status.DEFAULT}})
        end
    end
end

return DismissModule