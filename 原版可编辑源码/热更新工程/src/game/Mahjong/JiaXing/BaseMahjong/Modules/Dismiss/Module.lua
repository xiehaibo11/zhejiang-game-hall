local DismissModule = CF.gameClass("DismissModule","game.GameBase.Modules.Dismiss.Module")

function DismissModule:getSubXYDealList()
    local subXYDealList = DismissModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgGameReqJieSan),msgClass = CF.GameProtocol.msgGameReqJieSan}
    return subXYDealList
end

function DismissModule:getLimitXYIDs()
    -- 嘉兴区协议号与基类冲突，将原先协议对应监听置空
    return {1039, 1040, 1041}
end

function DismissModule:isDealMsgRequestDismiss(  )
    return false
end

function DismissModule:isDealMsgRespondDismiss()
    return false
end

function DismissModule:isDealMsgDismissCountDown()
    return false
end

--发起解散
function DismissModule:sendRequestDismiss()
    local cur = CF.roomData:getPlayCount()
    if CF.roomData:getIsGameStart() == false and cur == 0 then
        local reqLeaveRoom = CF.GameMProtocol.ReqLeaveRoom:new()
        CF.netEngine.sendGameProtocol(reqLeaveRoom)
    else
        local msgGameReqJieSan = CF.GameProtocol.msgGameReqJieSan:new()
        msgGameReqJieSan.nSeat = CF.roomData:getSelfSeat()
        msgGameReqJieSan.nFlag = CF.GameDefine.JieSanRoomType.REQUEST
        CF.netEngine.sendStreamPacket(msgGameReqJieSan)
    end
end

--响应解散
function DismissModule:sendRespondDismiss(agree)
    local cur = CF.roomData:getPlayCount()
    if CF.roomData:getIsGameStart() == false and cur == 0 then
        local reqLeaveRoom = CF.GameMProtocol.ReqLeaveRoom:new()
        CF.netEngine.sendGameProtocol(reqLeaveRoom)
    else
        local msgGameReqJieSan = CF.GameProtocol.msgGameReqJieSan:new()
        msgGameReqJieSan.nSeat = CF.roomData:getSelfSeat()
        msgGameReqJieSan.nFlag = agree and CF.GameDefine.JieSanRoomType.AGREE or CF.GameDefine.JieSanRoomType.DISAGREE
        CF.netEngine.sendStreamPacket(msgGameReqJieSan)
    end
end

--解散
function DismissModule:onMsgGameReqJieSan(msgData)
    local nFlag = msgData.nFlag
    if nFlag == -1 then
        return
    end
    local player = CF.roomData:getPlayerDataBySeatId(msgData.nSeat)
    if player == nil then
        return
    end

    -- 旁观玩家记录解散状态
    if CF.roomData:getIsSeer() then
        if nFlag == CF.GameDefine.JieSanRoomType.REQUEST or nFlag == CF.GameDefine.JieSanRoomType.AGREE then
            CF.roomData:setIsDismiss(true)
        elseif nFlag == CF.GameDefine.JieSanRoomType.DISAGREE then
            CF.roomData:setIsDismiss(false)
        end
        return
    end

    if nFlag == CF.GameDefine.JieSanRoomType.DISAGREE then
        local obj = {agree=false, seat=msgData.nSeat}
        self:onMsgRespondDismiss(obj)
        if msgData.nSeat ~= CF.roomData:getSelfSeat() then
            CF.TipTool.showTipsOk(player:getNickName() .. "不同意解散包厢!")
        end
    elseif nFlag == CF.GameDefine.JieSanRoomType.AGREE then
        local obj = {agree=true, seat=msgData.nSeat}
        self:onMsgRespondDismiss(obj)
    elseif nFlag == CF.GameDefine.JieSanRoomType.REQUEST then
        local nRemainingTime = msgData.nRemainingTime--剩余时间 先不显示？
        local obj = {seat=msgData.nSeat, time=nRemainingTime}
        self:onMsgRequestDismiss(obj)
    end
end

-- 请求解散反馈信息
function DismissModule:onMsgRespondDismiss(msgData)
    local DismissUI = CF.gameRequire("Modules.Dismiss.View")
    local status = msgData.agree and DismissUI.Status.AGREE or DismissUI.Status.REFUSE
    self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {seat = msgData.seat, status = status, remove = not msgData.agree}})
end

-- 请求解散
function DismissModule:onMsgRequestDismiss(msgData)
    if CF.roomData:getIsSeer() then
        return
    end
    local cnt = CF.roomData:getPlayCount()
    if cnt > 0 and msgData.seat >= 0 and msgData.seat <=3 then
        local DismissUI = CF.gameRequire("Modules.Dismiss.View")
        DismissUI.new({isShowMore = true, time=msgData.time}):showSelf() --加了时间
        self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {seat = msgData.seat, status = DismissUI.Status.REQUEST}})
    end
end

return DismissModule
