local ContinueModule = class("ContinueModule", CF.ModuleBase)

ContinueModule.EVENT_UPDATE_CONTINUE_UI = "EVENT_UPDATE_CONTINUE_UI"
ContinueModule.EVENT_UPDATE_BIG_WIN_LOST = "EVENT_UPDATE_BIG_WIN_LOST"
ContinueModule.EVENT_GAME_CONTINUE = "EVENT_GAME_CONTINUE"
ContinueModule.EVENT_GAME_CONTINUE_TIP_CLOSE = "EVENT_GAME_CONTINUE_TIP_CLOSE"

function ContinueModule:getProxyEvents()
    return {
        {module = CF.netEngine, eventName = CF.GameMProtocol.BroadCastContinueStatus.event_key, callBack = "onReciveGPContinueStatus"},
        {module = CF.netEngine, eventName = CF.GameMProtocol.RespDealContinueRequest.event_key, callBack = "onReciveGPContinue"},
        {module = CF.netEngine, eventName = CF.GameMProtocol.RespContinueTable.event_key, callBack = "onRespContinueTable"}
    }
end

function ContinueModule:getSubXYDealList()
    return {
        {callback = handler(self, self.onMsgAskContinue), msgClass = CF.LogicBaseProtocol.msgAskContinue},
        {callback = handler(self, self.onMsgContinueFlag), msgClass = CF.LogicBaseProtocol.msgContinueFlag},
        {callback = handler(self, self.onMsgContinueTips), msgClass = CF.LogicBaseProtocol.msgContinueTips}
    }
end

------------------------------GP续桌------------------------------

-- GP续桌通知
function ContinueModule:onReciveGPContinueStatus(event)
    local msgData = CF.GameMProtocol.BroadCastContinueStatus:new()
    msgData:bistream(event.msg.buff, event.msg.len)
    print("BroadCastContinueStatus")
    dump(msgData)
    local status = msgData.nStatus
    local sponsorNumId = msgData.nSponsorNumId
    local leftTime = msgData.nContinueLeftTime
    local tableID = msgData.nTableId

    --numid转换成座位号
    local requestSeat = -1
    if sponsorNumId > 0 then
        local playerData = CF.roomData:getPlayerDataNumberID(sponsorNumId)
        if playerData then
            requestSeat = playerData:getSeat()
        end
        if sponsorNumId == XH.playerData:getNumberID() then
            self._isSelfDealed = true
        end
    end

    if status == msgData.STATUS.CONTINUE_NOTICE then
        self:onGPContinueStatusNotice()
    elseif status == msgData.STATUS.END_GAME then
        self._isSelfDealed = false
        self:onGPContinueStatusEndGame(tableID, leftTime)
    elseif status == msgData.STATUS.END_PLAYERLEAVE then
        --离开玩家人数过多
        self:onGPContinueStatusPlayerLeave()
    elseif status == msgData.STATUS.REQ_SUCCESS then
        --可以续桌显示投票
        self:onGPContinueStatusReqSuccess(requestSeat, leftTime)
    elseif status == msgData.STATUS.END_REFUSE then
        --续桌失败了,多数人拒绝
        self:onGPContinueStatusEndRefuse()
    elseif status == msgData.STATUS.END_TIMEOUT then
        self:onGPContinueStatusEndOutTime()
    elseif status == msgData.STATUS.REQ_FAIL then
        --续桌失败了,房卡不足
        self:onGPContinueStatusReqFail()
    elseif status == msgData.STATUS.END_CONTINUE then
        if CF.roomData:isSupportNewContinue() and not CF.roomData:getIsSelfContinue() then
            if not self._isSelfDealed then
                self:onGPContinueStatusEndRefuse("续桌失败，您已离开桌子")
            end
            local ContinueUI = CF.gameRequire("Modules.Continue.View")
            self:dispatchEvent({name = self.EVENT_UPDATE_CONTINUE_UI, msg = {displaySataus = ContinueUI.DisplayStatus.REMOVE}})
            -- self:dispatchEvent({name = self.EVENT_GAME_CONTINUE, msg = {bSuccess = true}})
            return
        end
        --续桌成功了,移除相关的UI,延时一秒执行
        self:onGPContinueStatusEnd()
    elseif status == msgData.STATUS.SPONSOR_FAIL then
        --续桌失败了,发起续桌玩家房卡不足
        self:onGPContinueStatusReqFail()
    end
end

function ContinueModule:onGPContinueStatusNotice()
    CF.roomData:setIsGPContinue(true)
end

function ContinueModule:onGPContinueStatusEndGame(tableID, leftTime)
    --是否可以发起续作
    CF.roomData:setIsGPContinue(true)
    CF.roomData:setContinueTableID(tableID)
    CF.roomData:setCanContinueBool(leftTime > 0)
    CF.roomData:setContinueTime(leftTime)
    CF.roomData:setContinueTipType(0)
    -- 游戏未开始
    if not CF.roomData:getIsGameStarted() then
        local RelinkView = CF.gameRequire("Modules.Continue.RelinkView")
        local pram = {}
        pram.clickOK = function()
            self:gameEventContinueGame(true)
        end
        pram.clickCancel = function()
            self:gameEventContinueGame(false)
        end
        RelinkView.new(pram):showSelf()
    end
end

function ContinueModule:onGPContinueStatusPlayerLeave()
    CF.roomData:setCanContinueBool(false)
    CF.roomData:setIsDoContinue(false)
    CF.roomData:setContinueTipType(1)
    self:dispatchEvent({name = self.EVENT_GAME_CONTINUE_TIP_CLOSE,msg = {showTip = true}})
end

function ContinueModule:onGPContinueStatusReqSuccess(requestSeat, leftTime)
    CF.roomData:setIsDoContinue(true)
    CF.roomData:setIsSelfContinue(requestSeat == CF.roomData:getSelfSeat())
    local playerCount = CF.roomData:getCurPlayerCount()
    if playerCount > 1 then
        local ContinueUI = CF.gameRequire("Modules.Continue.View")
        ContinueUI.new({requestSeat = requestSeat, time = leftTime, isShowMore = true}):showSelf()
    end
    self:dispatchEvent({name = self.EVENT_GAME_CONTINUE_TIP_CLOSE,msg = {showTip = false}})
end

function ContinueModule:onGPContinueStatusEndRefuse(tip)
    CF.roomData:setCanContinueBool(false)
    CF.roomData:setIsDoContinue(false)
    self:dispatchEvent({name = self.EVENT_UPDATE_BIG_WIN_LOST, msg = {remove = false}})
    local ContinueUI = CF.gameRequire("Modules.Continue.View")
    self:dispatchEvent({name = self.EVENT_UPDATE_CONTINUE_UI, msg = {displaySataus = ContinueUI.DisplayStatus.REMOVE}})

    local leaveFunc = nil
    if not self:getBigWinLostUI() then
        --重连情况下拒绝退出房间
        leaveFunc = function()
            CF.game:leaveGame()
        end
    end
    if CF.roomData:isSupportNewContinue() then
        if CF.game:getModule("WinLost") and CF.game:getModule("WinLost").getWinLostShow and CF.game:getModule("WinLost"):getWinLostShow() then
            leaveFunc = nil
        end
    end
    tip = tip or (CF.roomData:isSupportNewContinue() and "续桌失败，房主拒绝续桌" or "续桌失败，多数人拒绝续桌")
    CF.TipTool.showTipsOk(tip, leaveFunc)
end

function ContinueModule:onGPContinueStatusEndOutTime()
    CF.roomData:setCanContinueBool(false)
    CF.roomData:setIsDoContinue(false)
    local ContinueUI = CF.gameRequire("Modules.Continue.View")
    self:dispatchEvent({name = self.EVENT_UPDATE_CONTINUE_UI, msg = {displaySataus = ContinueUI.DisplayStatus.REMOVE}})

    local leaveFunc = nil
    if not self:getBigWinLostUI() then
        --重连情况下超时退出房间
        leaveFunc = function()
            CF.game:leaveGame()
        end
    end
    CF.TipTool.showTipsOk("因续桌选择超时，房间解散。", leaveFunc)
end

function ContinueModule:onGPContinueStatusReqFail()
    CF.roomData:setCanContinueBool(false)
    CF.roomData:setIsDoContinue(false)
    self:dispatchEvent({name = self.EVENT_UPDATE_BIG_WIN_LOST, msg = {remove = false}})
    local leaveFunc = nil
    if not self:getBigWinLostUI() then
        --重连情况下超时退出房间
        leaveFunc = function()
            CF.game:leaveGame()
        end
    end
    if CF.roomData:isSupportNewContinue() then
        if CF.game:getModule("WinLost") and CF.game:getModule("WinLost").getWinLostShow and CF.game:getModule("WinLost"):getWinLostShow() then
            leaveFunc = nil
        end
    end
    CF.TipTool.showTipsOk("有玩家房卡不足，无法续桌!", leaveFunc)
end

function ContinueModule:onGPContinueStatusEnd()
    CF.roomData:setIsDoContinue(false)
    CF.roomData:setCanContinueBool(false)
    CF.roomData:setContinueTime(0)
    CF.SysTool.performWithDelayGlobal(
        function()
            local ContinueUI = CF.gameRequire("Modules.Continue.View")
            self:dispatchEvent({name = self.EVENT_UPDATE_CONTINUE_UI, msg = {displaySataus = ContinueUI.DisplayStatus.REMOVE}})
            self:dispatchEvent({name = self.EVENT_GAME_CONTINUE, msg = {bSuccess = true}})
             if CF.roomData:isSupportNewContinue() then
                CF.roomData:clearTable()
                CF.roomData:setPlayCount(0)
                CF.game:getModule("CenterBtns"):onStartGameEvent()
                XH.Bridge:getModule("Im"):dispatchEvent({name = XH.Bridge:getModule("Im").EVENT_SHOW_LIST_ENTRANCE})
                if CF.teaHouseManager then
                    local onlineModule = CF.teaHouseManager:getTeaHouseOnlineModule()
                    if onlineModule then
                        onlineModule:dispatchEvent({name = onlineModule.EVENT_SHOW_ONLINE_LIST})
                    end
                end
            end
        end,
        1
    )
end

-- 续桌同意拒绝状态同步
function ContinueModule:onReciveGPContinue(event)
    local msgData = CF.GameMProtocol.RespDealContinueRequest:new()
    msgData:bistream(event.msg.buff, event.msg.len)
    print("onReciveGPContinue")
    dump(msgData)
    local numId = msgData.nNumId
    local dealRet = msgData.nDealRet

    --numid转换成座位号
    local playerData = CF.roomData:getPlayerDataNumberID(numId)
    if not playerData then
        return
    end

    local seat = playerData:getSeat()

    if seat == CF.roomData:getSelfSeat() then
        --自己同意或者拒绝了
        CF.roomData:setIsSelfContinue(dealRet == msgData.DEALRET.AGREE)
        self._isSelfDealed = true
        if CF.roomData:isSupportNewContinue() then
            if dealRet ~= msgData.DEALRET.AGREE then
            --  SUCCESS = 0,
            --  PROP_NOT_ENOUGH = 1,
            --  NOT_INTABLE = 2,        // 玩家不再nTableId桌子上
            --  STEP_ERR = 3,			// 当前非处理续桌阶段
            --  TEA_LIMIT = 4,			// 亲友圈限制,当前玩家无
                if msgData.ucFlag == 3 or msgData.ucFlag == 2 then
                    return
                end
                --自己拒绝了
                local isNotEnough = msgData.ucFlag == 1 or msgData.ucFlag == 104 or msgData.ucFlag == 110
                self:onGPContinueStatusEndRefuse(isNotEnough and "续桌失败，房卡不足" or "续桌失败，您已离开桌子")
                return
            end
        end
    end

    local ContinueUI = CF.gameRequire("Modules.Continue.View")
    local status = dealRet == msgData.DEALRET.AGREE and ContinueUI.Status.AGREE or ContinueUI.Status.REFUSE

    self:dispatchEvent({name = self.EVENT_UPDATE_CONTINUE_UI, msg = {seat = seat, status = status}})
end

-- 续桌请求返回
function ContinueModule:onRespContinueTable(event)
    local msgData = CF.GameMProtocol.RespContinueTable:new()
    msgData:bistream(event.msg.buff, event.msg.len)

    if msgData.ucFlag == msgData.FLAG.ALREADY_CONTINUE then
        CF.TipTool.showTipsOk("已经有玩家发起续桌")
        CF.roomData:setIsDoContinue(false)
        self:dispatchEvent({name = self.EVENT_UPDATE_BIG_WIN_LOST, msg = {remove = false}})
    end
end

------------------------------非GP续桌------------------------------
function ContinueModule:onMsgAskContinue(msgData)
    if CF.roomData:isSupportNewContinue() then
        return
    end
    if CF.roomData:getIsGPContinue() then
        return
    end
    if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then
        return
    end
    if msgData.nflag == msgData.ENUM_FLAG.NONE then
        CF.roomData:setCanContinueBool(false)
    elseif msgData.nflag == msgData.ENUM_FLAG.RELINK then --弹出提示框
        CF.roomData:setCanContinueBool(true)
        --大结束直接返回
        if self:getBigWinLostUI() then
            return
        end
        self:showSoAskTipLayer()
    elseif msgData.nflag == msgData.ENUM_FLAG.WAITING then
        CF.roomData:setCanContinueBool(true)
        local tipLayer = CF.TipTool.showPopLayer("TipLayer", {CF.TipLayer.ENUM_TIP_TYPE.TIP_OK})
        tipLayer:setText("等待其它玩家续桌，5分钟后未成功续桌将自动解散")
    else
        CF.roomData:setCanContinueBool(true)
    end
    self:dispatchEvent({name = self.EVENT_UPDATE_BIG_WIN_LOST, msg = { remove = false }})
end

function ContinueModule:getBigWinLostUI()
    return display.getRunningScene():getChildByName("BigWinLostUI")
end

function ContinueModule:showSoAskTipLayer()
    local tipLayer = CF.TipTool.showPopLayer("TipLayer", {CF.TipLayer.ENUM_TIP_TYPE.OK_CANCEL})
    tipLayer:setTouchBackGround(false)
    tipLayer:setText("是否续桌？")
    tipLayer:setButtonMoreEvent(tipLayer.ENUM_BUTTON_TYPE.OK, function()
        if CF.isInGameScene() then
            CF.game:getModule("CenterBtns"):onStartGameEvent()
        end
    end)

    tipLayer:setButtonMoreEvent(
        tipLayer.ENUM_BUTTON_TYPE.CANCEL,
        function()
            if CF.isInGameScene() then
                self:sendRespContinue(false)
            end
        end
    )
    tipLayer:setButtonMoreEvent(
        tipLayer.ENUM_BUTTON_TYPE.CLOSE,
        function()
            if CF.isInGameScene() then
                self:sendRespContinue(false)
            end
        end
    )
end

function ContinueModule:onMsgContinueFlag(msgData)
    local function leaveFunc()
        if CF.isInGameScene() then
            CF.game:leaveGame()
        end
    end
    if msgData.sFlag == msgData.ENUM_FLAG.DISAGREE then
        local tipPlayer = CF.TipTool.showPopLayer("TipLayer", {CF.TipLayer.ENUM_TIP_TYPE.TIP_OK})
        tipPlayer:setTouchBackGround(false)
        tipPlayer:setText("有人不同意续桌，房间已解散！")
        local layer = self:getBigWinLostUI()
        if layer then
            CF.roomData:setCanContinueBool(false)
            CF.roomData:setIsDoContinue(false)
            CF.roomData:setContinueTipType(1)
            layer:setCanContinue(false)
        else
            if leaveFunc then
                tipPlayer:setButtonMoreEvent(tipPlayer.ENUM_BUTTON_TYPE.OK, leaveFunc)
                tipPlayer:setButtonMoreEvent(tipPlayer.ENUM_BUTTON_TYPE.CLOSE, leaveFunc)
            end
        end
    elseif msgData.sFlag == msgData.ENUM_FLAG.SUCCESS then
        CF.roomData:setCanContinueBool(false)
        local layer = self:getBigWinLostUI()
        if layer then
            layer:removeFromParent()
        end
        if not CF.roomData:getIsSeer() then
            local tipPlayer = CF.TipTool.showPopLayer("TipLayer", {CF.TipLayer.ENUM_TIP_TYPE.TIP_OK})
            tipPlayer:setText("续桌成功")
            self:playEnterCardAnim()
        end

        self:dispatchEvent({name = self.EVENT_GAME_CONTINUE, msg = {bSuccess = true}})
    elseif msgData.sFlag == msgData.ENUM_FLAG.TIME_OUT then
        local tipPlayer = CF.TipTool.showPopLayer("TipLayer", {CF.TipLayer.ENUM_TIP_TYPE.TIP_OK})
        tipPlayer:setTouchBackGround(false)
        tipPlayer:setText("续桌等待时间过长，房间已解散！")
        if leaveFunc then
            tipPlayer:setButtonMoreEvent(tipPlayer.ENUM_BUTTON_TYPE.OK, leaveFunc)
            tipPlayer:setButtonMoreEvent(tipPlayer.ENUM_BUTTON_TYPE.CLOSE, leaveFunc)
        end
    end
end

function ContinueModule:onMsgContinueTips(msgData)
    if CF.roomData:getIsGPContinue() then
        return
    end

    local layer = self:getBigWinLostUI()
    if layer then
        local tipPlayer = CF.TipTool.showPopLayer("TipLayer", {CF.TipLayer.ENUM_TIP_TYPE.TIP_OK})
        tipPlayer:setText("其它玩家已续桌，点击【继续游戏】即可加入！点击【回到大厅】即可离开！")
    end
end

------------------------------续桌操作------------------------------

function ContinueModule:doAgree()
    self:sendRespContinue(true)
end

function ContinueModule:doRefuse()
    self:sendRespContinue(false)
end

function ContinueModule:gameEventContinueGame(bContinue)
    if not bContinue then
        self:doNotContinueGame()
        return
    end

    local isGPContinue = CF.roomData:getIsGPContinue()
    if isGPContinue then
        self:doGPContinueGame()
    else
        self:doSoContinueGame()
    end
end

--不续桌
function ContinueModule:doNotContinueGame()
    local leaveFunc = function()
        self:sendRespContinue(false)
        CF.game:leaveGame()
    end
    if CF.roomData:getIsGPContinue() then
        --GP续桌
        if CF.roomData:getIsDoContinue() and CF.roomData:getIsSelfContinue() then
            local tipPlayer = CF.TipTool.showPopLayer("TipLayer", {CF.TipLayer.ENUM_TIP_TYPE.OK})
            tipPlayer:setTouchBackGround(false)
            tipPlayer:setText('您正在续桌,确定返回大厅吗?\n可点击"继续游戏"查看续桌详情')
        elseif CF.roomData:getIsDoContinue() then
            local tipPlayer = CF.TipTool.showPopLayer("TipLayer", {CF.TipLayer.ENUM_TIP_TYPE.OK_CANCEL})
            tipPlayer:setTouchBackGround(false)
            tipPlayer:setText('您正在续桌,确定返回大厅吗?\n可点击"继续游戏"查看续桌详情')
            if leaveFunc then
                tipPlayer:setButtonMoreEvent(tipPlayer.ENUM_BUTTON_TYPE.OK, leaveFunc)
            end
        else
            leaveFunc()
        end
    else
        leaveFunc()
    end
end

function ContinueModule:sendRespContinue(isAgree)
    if CF.roomData:getIsGPContinue() then
        CF.msgManager:sendGPRespContinue(CF.roomData:getContinueTableID(), isAgree)
    else
        CF.msgManager:sendRespContinue(isAgree)
    end
    self:playEnterCardAnim(isAgree)
end

--非GP续桌
function ContinueModule:doSoContinueGame()
    CF.msgManager:sendRespContinue(true)
    -- CF.msgManager:sendGameStart()
    CF.msgManager:sendRoomNumber()

    if CF.roomData:isCanContinue() and CF.roomData:getCurPlayerCount() ~= CF.roomData:getChairs() then -- 在续桌投票但是服务已经把玩家踢出房间了
        local tipPlayer = CF.TipTool.showPopLayer("TipLayer", {CF.TipLayer.ENUM_TIP_TYPE.TIP_OK})
        tipPlayer:setTouchBackGround(false)
        tipPlayer:setText("有人不同意续桌，房间已解散！")
        tipPlayer:setButtonMoreEvent(
            tipPlayer.ENUM_BUTTON_TYPE.OK,
            function()
                CF.game:leaveGame()
            end
        )
        tipPlayer:setButtonMoreEvent(
            tipPlayer.ENUM_BUTTON_TYPE.CLOSE,
            function()
                CF.game:leaveGame()
            end
        )
    end
end

--GP续桌
function ContinueModule:doGPContinueGame()
    local ContinueUI = CF.gameRequire("Modules.Continue.View")

    if not CF.roomData:getIsDoContinue() then
        --有人退出了,不能继续续桌
        local curPlayerCount = CF.roomData:getCurPlayerCount()
        if CF.roomData:getContinueTipType() == 1 and curPlayerCount ~= CF.roomData:getChairs() then
            local function leaveGame()
                CF.game:leaveGame()
            end
            CF.TipTool.showTipsOk("有玩家已经离开，房间已解散!", leaveGame)
            self:dispatchEvent({name = self.EVENT_UPDATE_BIG_WIN_LOST, msg = {remove = false}}) --取消倒计时
        else
            CF.msgManager:sendGPReqContinueGame(CF.roomData:getContinueTableID())
            self:playEnterCardAnim()
        end
    elseif CF.UITool.objIsInScene(ContinueUI.ObjName, ContinueUI.ClsName) then
        self:dispatchEvent({name = self.EVENT_UPDATE_CONTINUE_UI, msg = {displaySataus = ContinueUI.DisplayStatus.SHOW}})
        self:playEnterCardAnim()
    end
end

function ContinueModule:playEnterCardAnim(condition)
    if (condition == nil or condition) and not CF.teaHouseManager:isInTeaHouse() and CF.roomData:getHostSeat() == CF.roomData:getSelfSeat() then
        local unBoxModule = XH.lobby:getModule("UnlimitBoxAct")
        local isActive = unBoxModule:getRemainTime(0) > 0 and unBoxModule:getLeftCnt() > 0
        if isActive then
            unBoxModule:flushGoldCoinAni(function() end)
        end
    end
end

return ContinueModule
