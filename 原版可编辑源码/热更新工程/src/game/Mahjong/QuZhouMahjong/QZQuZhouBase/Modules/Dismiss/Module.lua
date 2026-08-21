local DismissModule = CF.gameClass("DismissModule", "game.GameBase.Modules.Dismiss.Module")

function DismissModule:getSubXYDealList()
    local subXYDealList = DismissModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgShowDismiss),msgClass = CF.GameProtocol.msgShowDismiss}
    return subXYDealList
end

function DismissModule:onMsgShowDismiss(msgData)
    local cnt = CF.roomData:getPlayCount()
    if cnt > 0 and msgData.bShow then
        CF.roomData:setDismissTime(msgData.nLeftTime)
    end
    --解散成功
    if msgData.bIsDismiss and not msgData.bShow then 
        self:onMsgDismissFlag({flag = 2})
    end 
end

function DismissModule:onMsgRequestDismiss(msgData)
    if CF.roomData:getIsSeer() then
        return
    end
    local cnt = CF.roomData:getPlayCount()
    if cnt > 0 then
        local DismissUI = CF.gameRequire("Modules.Dismiss.View")
		DismissUI.new({isShowMore = true, time = CF.roomData:getDismissTime()}):showSelf()
		self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {seat = msgData.seat, status = DismissUI.Status.REQUEST}})
    end
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
    local DismissUI =  CF.gameRequire("Modules.Dismiss.View")
    if not CF.UITool.objIsInScene(DismissUI.ObjName, DismissUI.ClsName) then
        DismissUI.new({isShowMore = true, time = CF.roomData:getDismissTime()}):showSelf()
    end
    local status = msgData.agree and DismissUI.Status.AGREE or DismissUI.Status.REFUSE
    self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {seat = msgData.seat, status = status, remove = not msgData.agree}})
    
    local player = CF.roomData:getPlayerDataBySeatId(msgData.seat)
    if not msgData.agree and player then
        if msgData.seat ~= CF.roomData:getSelfSeat() then
            local tipPlayer = CF.TipTool.showPopLayer("TipLayer",{CF.TipLayer.ENUM_TIP_TYPE.TIP_OK})
            tipPlayer:setText(player:getNickName() .. "不同意解散包厢!")
        end
    self:removeDismissLayer()
    end
end

function DismissModule:onMsgDismissFlag(msgData)
    if CF.roomData and CF.roomData:getIsSeer() then
        CF.roomData:setIsDismiss(false)
        CF.TipTool.showTip({
            type = CF.TIP_LAYER_TYPE.OK,
        }, "房间已解散")
        return
    end
    local tipStr = nil
    local leaveFunc = nil
    CF.roomData:setCanContinueBool(false)
    self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {remove = true}})
    if msgData.flag == 1 then
        tipStr = "房主已解散包厢!"
        if CF.roomData:getHostSeat() == CF.roomData:getSelfSeat() then
            tipStr = nil
            --房主直接切回到大厅
            CF.game:leaveGame()
        else
            leaveFunc = function()
                CF.game:leaveGame()
            end
        end
    elseif msgData.flag == 2 then
        tipStr = "多数玩家同意解散包厢!"
    elseif msgData.flag == 3 then
        tipStr = "等待时间过长解散包厢!"
    elseif msgData.flag == 4 then
        tipStr = "等待解散时间过长,解散包厢!"
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

return DismissModule