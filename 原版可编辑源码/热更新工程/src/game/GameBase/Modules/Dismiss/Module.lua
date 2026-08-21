local DismissModule = CF.gameClass("DismissModule", CF.ModuleBase)

DismissModule.EVENT_UPDATE_DISMISS_UI = "EVENT_UPDATE_DISMISS_UI"
DismissModule.EVENT_CLOSE_VIEW = "EVENT_CLOSE_VIEW"
DismissModule.EVENT_GAME_DISMISS_FLAG = "EVENT_GAME_DISMISS_FLAG"
DismissModule.EVENT_GAME_DISMISS_COUNTDOWN = "EVENT_GAME_DISMISS_COUNTDOWN"

function DismissModule:getSubXYDealList()
    return {
        {callback = handler(self,self.onMsgRequestDismiss),msgClass = CF.GameProtocol.msgRequestDismiss},--1457
        {callback = handler(self,self.onMsgRespondDismiss),msgClass = CF.GameProtocol.msgRespondDismiss},--22
        {callback = handler(self,self.onMsgDismissFlag),msgClass = CF.GameProtocol.msgDismissFlag},--1459
        {callback = handler(self,self.onMsgDismissCountDown),msgClass = CF.GameProtocol.msgDismissCountdown},
    }
end

function DismissModule:getProxyEvents()
    return {
        { module = CF.netEngine, eventName = CF.GameMProtocol.RespPlayerDismiss.event_key, callBack = "onReciveGPPlayerDismiss" },
    }
end

function DismissModule:isDealMsgRequestDismiss()
    return true
end

function DismissModule:isDealMsgRespondDismiss()
    return true
end

function DismissModule:isDealMsgDismissCountDown()
    return false
end

function DismissModule:onReciveGPPlayerDismiss(event)
    if CF.roomData:is50Match() then 
        return
    end
    local msgData =  CF.GameMProtocol.RespPlayerDismiss:new()
    msgData:bistream(event.msg.buff, event.msg.len)
    
    if CF.roomData:getIsSeer() then
        if msgData.m_flag == CF.GameMProtocol.RespPlayerDismiss.FLAG.SUCCEED or 
            msgData.m_flag == CF.GameMProtocol.RespPlayerDismiss.FLAG.DISMISS_SUCCEED or 
            msgData.m_flag == CF.GameMProtocol.RespPlayerDismiss.FLAG.DISMISS_TIMEOUT_SUCCESSED then
            CF.roomData:setIsDismiss(true)
        else
            CF.roomData:setIsDismiss(false)
        end
        return
    end

    local DismissUI = CF.gameRequire("Modules.GPDismiss.View")
    local playerData = CF.roomData:getPlayerDataByBrandIDAndNumberID(msgData.m_areaid, msgData.m_launchid)
    if playerData == nil then
        return
    end

    local cnt = CF.roomData:getPlayCount()
    if msgData.m_flag == CF.GameMProtocol.RespPlayerDismiss.FLAG.SUCCEED then
        if cnt > 0 then
            if not CF.UITool.objIsInScene(DismissUI.ObjName, DismissUI.ClsName) then
                DismissUI.new({ isShowMore = true, time = msgData.m_lasttime}):showSelf()
            end
            CF.popLayerManager:removeLayer("TipLayer")
            CF.popLayerManager:removeLayer("LeaveRoomLayer")
            --更新解散UI
            for i = 0, CF.roomData:getMaxPlayer() - 1 do
                local iplayer = CF.roomData:getPlayerDataBySeatId(i)
                if iplayer == nil then
                    return
                end
                local playerNumber = iplayer:getNumberID()
                local playerState = DismissUI.Status.DEFAULT
                for agreeOrDisAgree = 1, CF.roomData:getMaxPlayer() do
                    if msgData.m_launchid == playerNumber then
                        playerState = DismissUI.Status.REQUEST
                    elseif playerNumber == msgData.m_agreeid[agreeOrDisAgree] then
                        playerState = DismissUI.Status.AGREE
                    elseif playerNumber == msgData.m_disagreeid[agreeOrDisAgree] then
                        playerState = DismissUI.Status.REFUSE
                    end
                end
                self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {seat = i, status = playerState}})
            end
        end
    elseif msgData.m_flag == CF.GameMProtocol.RespPlayerDismiss.FLAG.DISMISS_SUCCEED then
        local dismisFlag = cnt == 0 and 1 or 2
        self:onMsgDismissFlag({flag = dismisFlag})
    elseif msgData.m_flag == CF.GameMProtocol.RespPlayerDismiss.FLAG.DISMISS_FAILED then
        self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {remove = true}})
        for disAgreePlayer = 0, CF.roomData:getMaxPlayer() - 1 do
            local player = CF.roomData:getPlayerDataBySeatId(disAgreePlayer)
            if player then
                local disAgreePlayerNumber = player:getNumberID()
                for disagreeIndex = 1, msgData.m_disagreecnt do
                    if disAgreePlayerNumber == msgData.m_disagreeid[disagreeIndex] then
                        CF.TipTool.showTipsOk(player:getNickName() .. "不同意解散包厢!")
                    end
                end
            end
        end
    elseif msgData.m_flag == CF.GameMProtocol.RespPlayerDismiss.FLAG.DISMISS_TIMEOUT_SUCCESSED then
        self:onMsgDismissFlag({flag = 3})
    elseif msgData.m_flag == CF.GameMProtocol.RespPlayerDismiss.FLAG.DISMISS_TIMEOUT_FALLED then
        self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {remove = true}})
        CF.TipTool.showTipsOk("有玩家未选择,解散包厢失败!")
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
    CF.roomData:setCanContinueBool(false)
    if msgData.flag == 1 then
        if CF.roomData:getPlayCount() == 0 then
            if CF.roomData:getHostSeat() == CF.roomData:getSelfSeat() then
                --房主直接切回到大厅
                CF.game:leaveGame()
                return                
            end
        end
    end
    
    local tipStr = self:getTipStr(msgData.flag)
    if tipStr then
        local tipPlayer = CF.TipTool.showPopLayer("TipLayer",{CF.TipLayer.ENUM_TIP_TYPE.TIP_OK})
        tipPlayer:setTouchBackGround(false)
        tipPlayer:setText(tipStr)
        if self:checkIsNeedLeaveFunc(msgData.flag) then
            local leaveFunc = function()
                CF.game:leaveGame()
            end
            tipPlayer:setButtonMoreEvent(tipPlayer.ENUM_BUTTON_TYPE.OK, leaveFunc)
            tipPlayer:setButtonMoreEvent(tipPlayer.ENUM_BUTTON_TYPE.CLOSE, leaveFunc)
        end
    end

    --移除投票界面
    self:removeDismissLayer()
end

function DismissModule:checkIsNeedLeaveFunc(flag)
    if flag == 1 then
        if CF.roomData:getPlayCount() == 0 then
            if CF.roomData:getHostSeat() ~= CF.roomData:getSelfSeat() then
                return true            
            end
        end 
    end
    return false
end

function DismissModule:getTipStr(flag)
    local tipStr = nil
    if flag == 1 then
        tipStr = "房主已解散包厢!"
    elseif flag == 2 then
        tipStr = "多数玩家同意解散包厢!"
    elseif flag == 3 then
        tipStr = "等待时间过长解散包厢!"
    end
    return tipStr
end

--请求解散房间
function DismissModule:onMsgRequestDismiss(msgData)
    if not self:isDealMsgRequestDismiss() then
        return
    end
    if CF.roomData:getIsSeer() then
        CF.roomData:setIsDismiss(true)
        return
    end
    if msgData.seat == CF.roomData:getSelfSeat() then
        return
    end
    local tipPlayer = CF.TipTool.showPopLayer("TipLayer",{CF.TipLayer.ENUM_TIP_TYPE.REQUEST_LEAVE})
    local player = CF.roomData:getPlayerDataBySeatId(msgData.seat)
    if player == nil then
        return
    end
    tipPlayer:setTouchBackGround(false)
    tipPlayer:setText(player:getNickName() .. "申请解散包厢!")
    tipPlayer:setButtonMoreEvent(tipPlayer.ENUM_BUTTON_TYPE.OK, function()
        self:sendRespondDismiss(true)
        CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.TABLE_21)
    end)
    tipPlayer:setButtonMoreEvent(tipPlayer.ENUM_BUTTON_TYPE.CANCEL, function()
        self:sendRespondDismiss(false)
        CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.TABLE_22)
    end)
    tipPlayer:setButtonMoreEvent(tipPlayer.ENUM_BUTTON_TYPE.CLOSE, function()
        self:sendRespondDismiss(false)
        CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.TABLE_22)
    end)
end

--请求解散
function DismissModule:sendRequestDismiss()
    local dismissType = CF.roomData:getDismissType()
    if dismissType == CF.GameDefine.DISMISS_TYPE.SO then
        CF.msgManager:sendSoRequestDismiss()
    else
        local itype = 0 --发起解散
        CF.msgManager:sendGPDismiss(itype)
    end
end

function DismissModule:sendRespondDismiss(agree)
    local dismissType = CF.roomData:getDismissType()
    if dismissType == CF.GameDefine.DISMISS_TYPE.SO then
        CF.msgManager:sendRespondDismiss(agree)
    -- else
    --     local itype = agree and 1 or 2
    --     CF.msgManager:sendGPDismiss(itype)
    end
end

function DismissModule:sendDismissCountdown()
    CF.msgManager:sendDismissCountdown()
end

function DismissModule:onMsgRespondDismiss(msgData)
    if not self:isDealMsgRespondDismiss() then
        return
    end
    if CF.roomData:getIsSeer() then
        if msgData.agree then
            CF.roomData:setIsDismiss(true)
        elseif not msgData.agree then
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
    end
end

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
        elseif msgData.iAgrees[i] == 1 or msgData.reqSeat == i then
            self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {seat = i, status = DismissUI.Status.AGREE}})
        else
            self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {seat = i, status = DismissUI.Status.DEFAULT}})
        end
    end
end

------------------------------------------------------------
--倒计时解散
------------------------------------------------------------
function DismissModule:onDismissCountdown(msg)
    if msg.bShow then
        if CF.roomData:getIsSeer() then
            CF.roomData:setIsDismiss(true)
            return
        end
        if not self._dismissLayer then
            local DismissUI = CF.gameRequire("Modules.Dismiss.View")
            self._dismissLayer = DismissUI.new({isShowMore = true, time = msg.nTime})
            self._dismissLayer:onUpdateDismissUI( {msg = {seat = msg.seat, status = DismissUI.Status.REQUEST}})
            self._dismissLayer:showSelf()
        end
    else
        if not self._dismissLayer then
            return
        end
        self._dismissLayer:runAction(cc.Sequence:create(cc.DelayTime:create(1), cc.CallFunc:create(function()
            self:removeDismissLayer()
        end)))
    end
end

function DismissModule:removeDismissLayer()
    self:dispatchEvent({name = self.EVENT_CLOSE_VIEW})
    self._dismissLayer = nil
end

return DismissModule