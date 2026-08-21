local ContinueModule = CF.gameClass("DismissModule", "game.GameBase.Modules.Continue.Module")
local ContinueUI = CF.gameRequire("Modules.Continue.View")

function ContinueModule:ctor(param)
    param = param or {}
    ContinueModule.super.ctor(self, param)
    self._bContinueTable = false
    self._bContinueState = false --是否可以续桌
end

-- GP续桌通知
function ContinueModule:onReciveGPContinueStatus(event)
    local msgData =  CF.GameMProtocol.BroadCastContinueStatus:new()
    msgData:bistream(event.msg.buff, event.msg.len)
    
    local status = msgData.nStatus
    local sponsorNumId = msgData.nSponsorNumId
    local leftTime = msgData.nContinueLeftTime
    local tableID = msgData.nTableId
    local continueData = {}
    if msgData.acData and msgData.acData ~= "" then
        continueData = json.decode(msgData.acData) or {}
    end

    --numid转换成座位号
    local requestSeat = -1
    if sponsorNumId > 0 then
        local playerData = CF.roomData:getPlayerDataNumberID(sponsorNumId)
        if  playerData then
            requestSeat = playerData:getSeat()
        end
    end

    if status == msgData.STATUS.CONTINUE_NOTICE then
        self._bContinueTable = true
        CF.roomData:setIsGPContinue(true)
    elseif status == msgData.STATUS.END_GAME then
        CF.roomData:setIsGPContinue(true)
        --是否可以发起续作
        CF.roomData:setContinueTableID(tableID)
        CF.roomData:setCanContinueBool(leftTime > 0)
        CF.roomData:setContinueTime(leftTime)
        CF.roomData:setContinueTipType(0)
        --防止大结束先显示，然后gp再通知续桌。
        self:dispatchEvent({ name = self.EVENT_UPDATE_BIG_WIN_LOST, msg = { remove = false, continueTime = leftTime } })
        -- if not CF.roomData:getIsGameStarted() then
        --     local RelinkView = CF.gameRequire("Modules.Continue.RelinkView")
        --     local pram = {}
        --     pram.clickOK = function()
        --         self:gameEventContinueGame(true)
        --     end
        --     pram.clickCancel = function()
        --         self:gameEventContinueGame(false)
        --     end
        --     RelinkView.new(pram):showSelf()
        -- end
        if CF.roomData:getRoomMode2() == CF.ROOM_TYPE.BOX_ROOM then
            self:setContinueGetState(true)
        end
    elseif status == msgData.STATUS.END_PLAYERLEAVE then
        --离开玩家人数过多
        -- self:dispatchEvent({name = self.EVENT_GAME_CONTINUE_TIP_CLOSE,msg = {showTip = true}})
        CF.roomData:setCanContinueBool(false)
        CF.roomData:setIsDoContinue(false)
        CF.roomData:setContinueTipType(1)
    elseif status == msgData.STATUS.REQ_SUCCESS then
        --可以续桌显示投票
        -- self:dispatchEvent({name = self.EVENT_GAME_CONTINUE_TIP_CLOSE,msg = {showTip = false}})
        CF.roomData:setIsDoContinue(true)
        CF.roomData:setIsSelfContinue(requestSeat == CF.roomData:getSelfSeat())
        ContinueUI.new({requestSeat = requestSeat, time = leftTime, isShowMore = true}):showSelf()
    elseif status == msgData.STATUS.END_REFUSE then
        --续桌失败了,多数人拒绝
        CF.roomData:setCanContinueBool(false)
        CF.roomData:setIsDoContinue(false)
        self:dispatchEvent({ name = self.EVENT_UPDATE_BIG_WIN_LOST, msg = { remove = false } })
        self:dispatchEvent({ name = self.EVENT_UPDATE_CONTINUE_UI, msg = { displaySataus = ContinueUI.DisplayStatus.REMOVE } })

        local leaveFunc = nil
        if not self:getBigWinLostUI() then
            --重连情况下拒绝退出房间
            leaveFunc = function()
                CF.game:leaveGame()
            end
        end

        local refuseName = ""
        if self._bContinueRefuseID then           
            local refusePlayer = CF.roomData:getPlayerDataNumberID(self._bContinueRefuseID)
            if refusePlayer then
                refuseName = refusePlayer:getNickName()
            end            
        end
        CF.TipTool.showTipsOk("玩家"..refuseName.."离开房间，续桌失败!", leaveFunc)
    elseif status == msgData.STATUS.END_TIMEOUT then
        CF.roomData:setCanContinueBool(false)
        CF.roomData:setIsDoContinue(false)
        self:dispatchEvent({ name = self.EVENT_UPDATE_CONTINUE_UI, msg = { displaySataus = ContinueUI.DisplayStatus.REMOVE } })
        
        local leaveFunc = nil
        if not self:getBigWinLostUI() then
            --重连情况下超时退出房间
            leaveFunc = function()
                CF.game:leaveGame()
            end
        end
        CF.TipTool.showTipsOk("因续桌选择超时，房间解散。", leaveFunc)
    elseif status == msgData.STATUS.REQ_FAIL then
        --续桌失败了,房卡不足
        CF.roomData:setCanContinueBool(false)
        CF.roomData:setIsDoContinue(false)
        self:dispatchEvent({ name = self.EVENT_UPDATE_BIG_WIN_LOST, msg = { remove = false } })
        CF.TipTool.showTipsOk("有玩家房卡不足.无法续桌!")
    elseif status == msgData.STATUS.END_CONTINUE then
        --续桌成功了,移除相关的UI,延时一秒执行
        CF.roomData:setIsDoContinue(false)
        CF.roomData:setCanContinueBool(false)
        CF.roomData:setContinueTime(0)
        CF.SysTool.performWithDelayGlobal(function()
            -- 添加一个关闭大结束的通知，防止关闭失败
            self:dispatchEvent({ name = self.EVENT_GAME_CONTINUE, msg = {bSuccess = true}})
            self:dispatchEvent({ name = self.EVENT_UPDATE_CONTINUE_UI, msg = { displaySataus = ContinueUI.DisplayStatus.REMOVE } })
            self:dispatchEvent({ name = self.EVENT_UPDATE_BIG_WIN_LOST, msg = { remove = true } })
        end, 1)
    elseif status == msgData.STATUS.SPONSOR_FAIL then
        --续桌失败了,玩家房卡不足
        CF.roomData:setCanContinueBool(false)
        CF.roomData:setIsDoContinue(false)
        self:dispatchEvent({ name = self.EVENT_UPDATE_BIG_WIN_LOST, msg = { remove = false } })
        local player = CF.roomData:getPlayerDataNumberID(tonumber(continueData.prop_notenough_users))
        local playerName = ""
        if player then
            playerName = player:getNickName()
        end
        CF.TipTool.showTipsOk("续桌失败！玩家"..playerName.."道具不足！")
    end
end

-- 续桌同意拒绝状态同步
function ContinueModule:onReciveGPContinue(event)
    local msgData =  CF.GameMProtocol.RespDealContinueRequest:new()
    msgData:bistream(event.msg.buff, event.msg.len)

    local numId = msgData.nNumId
    local dealRet = msgData.nDealRet
    self._bContinueRefuseID = msgData.nNumId

    --numid转换成座位号
    local playerData = CF.roomData:getPlayerDataNumberID(numId)
    if not playerData then
        return
    end

    local seat = playerData:getSeat()

    if seat == CF.roomData:getSelfSeat() then
        --自己同意或者拒绝了
        CF.roomData:setIsSelfContinue(dealRet == msgData.DEALRET.AGREE)
    end

    local status = dealRet == msgData.DEALRET.AGREE and ContinueUI.Status.AGREE or ContinueUI.Status.REFUSE
    self:dispatchEvent({ name = self.EVENT_UPDATE_CONTINUE_UI, msg = { seat = seat, status = status } })
end

function ContinueModule:setContinueGetState(state)
    self._bContinueState = state
end

function ContinueModule:onMsgContinueGetState()
    if CF.roomData:getRoomMode2() == CF.ROOM_TYPE.BOX_ROOM then
        return self._bContinueState
    else
        return false
    end
end

function ContinueModule:onMsgContinueFlag(msgData)
    if CF.roomData:getIsGPContinue() then
        return
    end
    if msgData.sFlag == msgData.ENUM_FLAG.DISAGREE then
        if self:onMsgContinueGetState() == false then
            local function sendMsg(isContinue, isRemove)
                self:dispatchEvent( { name = self.EVENT_UPDATE_BIG_WIN_LOST, msg = { remove = isRemove or false } })
                CF.game:leaveGame()
            end
            CF.TipTool.showTipsOk("有人不同意续桌，房间已解散！", sendMsg, sendMsg, sendMsg)
        end
    elseif msgData.sFlag == msgData.ENUM_FLAG.SUCCESS then
        CF.roomData:setCanContinueBool(false)
        if not CF.roomData:getIsSeer() then
            CF.TipTool.showTipsOk("续桌成功！")
        end
    elseif msgData.sFlag == msgData.ENUM_FLAG.TIME_OUT then
        local function leaveGame()
            CF.game:leaveGame()
        end
        CF.TipTool.showTipsOk("续桌等待时间过长，房间已解散！", leaveGame, leaveGame, leaveGame)
    end
end

return ContinueModule  2"  