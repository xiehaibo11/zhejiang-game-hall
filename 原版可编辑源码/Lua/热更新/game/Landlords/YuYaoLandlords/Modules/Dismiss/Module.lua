local DismissModule = CF.gameClass("DismissModule", "game.GameBase.Modules.Dismiss.Module")

function DismissModule:getSubXYDealList()
    local xyList = DismissModule.super.getSubXYDealList(self)
    xyList[#xyList+1] = {callback = handler(self,self.onMsgDismissFlagEx),msgClass = CF.GameProtocol.msgDismissFlagEx}
    return xyList
end

function DismissModule:isDealMsgDismissCountDown()
    return true
end

--请求解散
function DismissModule:sendRequestDismiss()
    CF.msgManager:sendSoRequestDismiss()
end

function DismissModule:onMsgDismissFlagEx(msgData)
	 if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then return end

	local tipStr = CF.GameDefine.DismissTipsString[msgData.flag] or ""
    local leaveFunc = nil
    self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {remove = true}})

    if msgData.flag == 1 then -- 游戏未开始，房主解散桌子
        if CF.roomData:getPlayCount() == 0 then
            if CF.roomData:getHostSeat() == CF.roomData:getSelfSeat() then
                tipStr = nil
                CF.game:leaveGame()
            else
                leaveFunc = function() CF.game:leaveGame() end
            end
        end
    elseif msgData.flag == 0 or -- 不需要退出游戏 
        msgData.flag == 2 or
        msgData.flag == 3 or
        msgData.flag == 4 or
        msgData.flag == 6 or
        msgData.flag == 1008 then
        print("--")
    else
        leaveFunc = function() CF.game:leaveGame() end
    end
    
    if tipStr then
        local tipPlayer = CF.TipTool.showPopLayer("TipLayer",{CF.TipLayer.ENUM_TIP_TYPE.TIP_OK})
        tipPlayer:setTouchBackGround(false)
        tipPlayer:setText(tipStr)
        if leaveFunc then
            tipPlayer:setButtonMoreEvent(tipPlayer.ENUM_BUTTON_TYPE.OK, leaveFunc)
            tipPlayer:setButtonMoreEvent(tipPlayer.ENUM_BUTTON_TYPE.CLOSE, leaveFunc)
        end
    end
    --移除投票界面
    self:removeDismissLayer()
end

function DismissModule:onMsgDismissCountDown(msgData)
    if not self:isDealMsgDismissCountDown() then
        self:onMsgRequestDismiss({seat = msgData.sSeat}) 
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
        self:onDismissCountdown({bShow = true, seat = msgData.sSeat, nTime = msgData.nTime})
    end

    local DismissUI = CF.gameRequire("Modules.Dismiss.View")
    for i = 0, playerCount - 1 do
        if msgData.iAgrees[i] == 0 then
            self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {seat = i, status = DismissUI.Status.REFUSE}})
        elseif msgData.iAgrees[i] == 1 or msgData.sSeat == i then
            self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {seat = i, status = DismissUI.Status.AGREE}})
        else
            self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {seat = i, status = DismissUI.Status.DEFAULT}})
        end
    end
end

function DismissModule:sendRespondDismiss(agree)
    CF.msgManager:sendRespondDismiss(agree)
end

return DismissModule