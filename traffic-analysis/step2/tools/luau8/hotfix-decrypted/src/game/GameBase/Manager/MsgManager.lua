local MsgManager = CF.gameClass("MsgManager", CF.ModuleBase)

function MsgManager:ctor(appId)
    MsgManager.super.ctor(self)
    self._appId = appId
    self._selfSeat = CF.roomData:getSelfSeat()
end

function MsgManager:setAppId(appId)
    self._appId = appId
end

function MsgManager:setSelfSeat(seat)
    self._selfSeat = seat
end

function MsgManager:sendStreamPacket(msgObj, bNotFilter)
    -- 旁观玩家，心跳协议调用时传入notfilter，不屏蔽,不然打着打着会收不到消息
    if CF.roomData and CF.roomData:getIsSeer() and not bNotFilter then
        return
    end
    CF.netEngine.sendStreamPacket(msgObj)
end

function MsgManager:sendGameProtocol(msgObj)
    -- playerconnect2协议不屏蔽，不然断网会收不到消息
    if CF.roomData and CF.roomData:getIsSeer() and msgObj.XY_ID ~= 11310 then
        return
    end
    CF.netEngine.sendGameProtocol(msgObj)
end

function MsgManager:sendProtobuf(struct,msgObj)
    if CF.roomData and CF.roomData:getIsSeer() then
        return
    end
    local srsGroupID = CF.roomData:getSRSGroupID()
    local buf = CF.Protobuf.msgToProtobuf(struct,msgObj)
    local bufData = CF.Protobuf.mergeBufData(struct,buf)
    XH.netEngine:sendProtoBuf(bufData, struct.processid, 88888888, srsGroupID)
end

------------------------------GameMProtocol------------------------------

function MsgManager:sendPlayerConnect()
    local reqPlayerConnect2Data = CF.GameMProtocol.ReqPlayerConnect2:new()
    reqPlayerConnect2Data.askid = os.time()

    self:sendGameProtocol(reqPlayerConnect2Data)
end

-- 发送请求使用道具
function MsgManager:sendRequestUseProps(propId, propNum, nType, param)
    local msgReqUseProps = CF.GameMProtocol.ReqUseProps:new()
    msgReqUseProps.count = propNum
    msgReqUseProps.propsid = propId
    msgReqUseProps.param = param or "noparam"
    msgReqUseProps.type = nType
    self:sendGameProtocol(msgReqUseProps)
end

-- 发送请求使用道具
function MsgManager:reqCharge(propNum)
    local reqCharge = CF.GameMProtocol.ReqCharge:new()
    reqCharge.nScore = propNum
    reqCharge.ucType = CF.GameMProtocol.ReqCharge.PLAYTYPE.TYPE_SR
    reqCharge.gameID = 0
    self:sendGameProtocol(reqCharge)
end

function MsgManager:sendReqKickUser(numid, areaid)
    local playCount = CF.roomData:getPlayCount()
    if playCount > 0 then
        return
    end
    local reqOwnerKickUser = CF.GameMProtocol.ReqOwnerKickUser:new()
    reqOwnerKickUser.nNumid = numid
    reqOwnerKickUser.nAreaid = areaid
    self:sendGameProtocol(reqOwnerKickUser)
end

------------------------------LogicBaseProtocol------------------------------

function MsgManager:sendGameStart()
    local msgPlayerStart = CF.LogicBaseProtocol.msgPlayerStart:new()
    local playerData = CF.roomData:getSelfPlayerData()
    if not playerData then
        return
    end
   
    msgPlayerStart.nBrandID = playerData:getBrandID()
    msgPlayerStart.nNumberID = playerData:getNumberID()
    self:sendStreamPacket(msgPlayerStart)

    -- local ReqPlayerPosition = require("lobby.Req.Room.ReqPlayerPosition")
    -- local reqPlayerPosition = ReqPlayerPosition.new()
    -- reqPlayerPosition:addReqCallBack(self, self.onReqPlayerPosition)
    -- reqPlayerPosition:start(30116, 0, 0, 5067,15)
end

function MsgManager:sendRoomNumber()
    local msgRoomNum = CF.LogicBaseProtocol.msgRoomNumEx:new()
    msgRoomNum.nRoomNum = CF.roomData:getRoomID()

    self:sendStreamPacket(msgRoomNum)
end

function MsgManager:sendPropAni(strdata)
    if CF.roomData:getIsSeer() then
        return
    end
    local msgBaseClientForwardEx = CF.GameProtocol.msgBaseClientForwardEx:new()
    msgBaseClientForwardEx.sSeat = self._selfSeat
    msgBaseClientForwardEx.sID = CF.GameProtocol.msgBaseClientForwardEx.CF_ID.PropAni
    msgBaseClientForwardEx.strData = strdata
    self:sendStreamPacket(msgBaseClientForwardEx)
    if CF.reqSendPropSuccess then
        CF.reqSendPropSuccess(strdata)
    end
end

function MsgManager:sendWireBreakSignal()
    if CF.roomData:getIsSeer() then
        return
    end
    local msgWireBreak = CF.GameProtocol.msgBaseClientForwardEx:new()
    msgWireBreak.sSeat = self._selfSeat
    msgWireBreak.sID = CF.GameProtocol.msgBaseClientForwardEx.CF_ID.WireBreak_Signal
    msgWireBreak.strData = ""

    self:sendStreamPacket(msgWireBreak)
end

function MsgManager:sendQiaoPiHua(data)
    if CF.roomData:getIsSeer() then
        return
    end
    local msgClientForwardEx = CF.GameProtocol.msgBaseClientForwardEx:new()
    msgClientForwardEx.sSeat = self._selfSeat
    msgClientForwardEx.sID = CF.GameProtocol.msgBaseClientForwardEx.CF_ID.QiaoPiHua
    msgClientForwardEx.strData = data
    self:sendStreamPacket(msgClientForwardEx)
end

function MsgManager:sendEmoji(data)
    if CF.roomData:getIsSeer() then
        return
    end
    local msgClientForwardEx = CF.GameProtocol.msgBaseClientForwardEx:new()
    msgClientForwardEx.sSeat = self._selfSeat
    msgClientForwardEx.sID = CF.GameProtocol.msgBaseClientForwardEx.CF_ID.Emoji
    msgClientForwardEx.strData = data
    self:sendStreamPacket(msgClientForwardEx)
end

function MsgManager:sendFastVoice(url)
    if CF.roomData:getIsSeer() then
        return
    end
    local msgBaseClientForwardEx = CF.GameProtocol.msgBaseClientForwardEx:new()
    msgBaseClientForwardEx.sSeat = self._selfSeat
    msgBaseClientForwardEx.sID = CF.GameProtocol.msgBaseClientForwardEx.CF_ID.FastVoice
    msgBaseClientForwardEx.strData = url

    self:sendStreamPacket(msgBaseClientForwardEx)
end

function MsgManager:sendMobileSignalMsg()
    local msgBaseClientForwardEx = CF.GameProtocol.msgBaseClientForwardEx:new()
    msgBaseClientForwardEx.sSeat = self._selfSeat
    msgBaseClientForwardEx.sID = CF.GameProtocol.msgBaseClientForwardEx.CF_ID.Mobile_Signal
    msgBaseClientForwardEx.strData = ""
    CF.roomData:setSignalMsgTime(socket.gettime())

    self:sendStreamPacket(msgBaseClientForwardEx, true)
end

function MsgManager:sendAMapMsg(data)
    if CF.roomData:getIsSeer() then
        return
    end
    local msgBaseClientForwardEx = CF.GameProtocol.msgBaseClientForwardEx:new()
    msgBaseClientForwardEx.sSeat = self._selfSeat
    msgBaseClientForwardEx.toSeat = -1  -- -1表示给所有人发送
    msgBaseClientForwardEx.sID = CF.GameProtocol.msgBaseClientForwardEx.CF_ID.AMap
    msgBaseClientForwardEx.sType = CF.GameProtocol.msgBaseClientForwardEx.CT_ID.XY_SAVE_FORWARD
    msgBaseClientForwardEx.strData = data

    self:sendStreamPacket(msgBaseClientForwardEx)
end

--- 请神同桌广播（对齐 sendAMapMsg；sID = GameDefine.QING_SHEN_BROADCAST_ID）
function MsgManager:sendQingShenMsg(data)
    if CF.roomData:getIsSeer() then
        return
    end
    local msgBaseClientForwardEx = CF.GameProtocol.msgBaseClientForwardEx:new()
    msgBaseClientForwardEx.sSeat = self._selfSeat
    msgBaseClientForwardEx.toSeat = -1  -- -1表示给所有人发送
    msgBaseClientForwardEx.sID = CF.GameDefine.QING_SHEN_BROADCAST_ID
    msgBaseClientForwardEx.sType = CF.GameProtocol.msgBaseClientForwardEx.CT_ID.XY_SAVE_FORWARD
    msgBaseClientForwardEx.strData = data or ""

    self:sendStreamPacket(msgBaseClientForwardEx)
end

function MsgManager:sendCaiYunInfo(data, sID)
    if CF.roomData:getIsSeer() then
        return
    end
    local msgBaseClientForwardEx = CF.GameProtocol.msgBaseClientForwardEx:new()
    msgBaseClientForwardEx.sSeat = self._selfSeat
    msgBaseClientForwardEx.sID = sID
    msgBaseClientForwardEx.sType = CF.GameProtocol.msgBaseClientForwardEx.CT_ID.XY_SAVE_FORWARD
    msgBaseClientForwardEx.strData = data

    self:sendStreamPacket(msgBaseClientForwardEx)
end

function MsgManager:sendJinlongTimestamp(data, sID)
    if CF.roomData:getIsSeer() then
        return
    end
    local msgBaseClientForwardEx = CF.GameProtocol.msgBaseClientForwardEx:new()
    msgBaseClientForwardEx.sSeat = self._selfSeat
    msgBaseClientForwardEx.sID = sID
    msgBaseClientForwardEx.sType = CF.GameProtocol.msgBaseClientForwardEx.CT_ID.XY_SAVE_FORWARD
    msgBaseClientForwardEx.strData = data

    self:sendStreamPacket(msgBaseClientForwardEx)
end

function MsgManager:sendAddCaiYun(data, sID)
    if CF.roomData:getIsSeer() then
        return
    end
    local msgBaseClientForwardEx = CF.GameProtocol.msgBaseClientForwardEx:new()
    msgBaseClientForwardEx.sSeat = self._selfSeat
    msgBaseClientForwardEx.sID = sID
    msgBaseClientForwardEx.strData = data

    self:sendStreamPacket(msgBaseClientForwardEx)
end

function MsgManager:sendPreShuffle(data, sID, toSeat)
    if CF.roomData:getIsSeer() then
        return
    end
    local msgBaseClientForwardEx = CF.GameProtocol.msgBaseClientForwardEx:new()
    msgBaseClientForwardEx.sSeat = self._selfSeat
    msgBaseClientForwardEx.sID = sID
    msgBaseClientForwardEx.strData = data
    msgBaseClientForwardEx.toSeat = toSeat or -1
    self:sendStreamPacket(msgBaseClientForwardEx)
end

--其他区定时器道具
function MsgManager:sendUseMarkerEx(endTime, flag)
    if not CF.GameProtocol or not CF.GameProtocol.msgUseMarkerEx then
        return
    end
    local msgUseMarkerEx = CF.GameProtocol.msgUseMarkerEx:new()
    msgUseMarkerEx.seat = self._selfSeat
    msgUseMarkerEx.markerState = flag or 0
    msgUseMarkerEx.endTime = endTime
    self:sendStreamPacket(msgUseMarkerEx)
end
------------------------------ToolMProtocol------------------------------

-- 发送请求玩家道具信息
function MsgManager:sendRequestPlayerProps()
    local msgReqPlayerProps = CF.ToolMProtocol.ReqPlayerPropsData:new()
    msgReqPlayerProps.askid = CF.askIDManager:getAskID()
    msgReqPlayerProps.gameid = CF.roomData:getGameID()
    if CF.roomData:isBianChaDKGoldRoom() then
        msgReqPlayerProps.gameid = 30116
    elseif CF.roomData:getGameID() == 30579 then
        msgReqPlayerProps.gameid = XH.areaData:getConfigGameID()
    end
    CF.netEngine.sendToolProtocol(msgReqPlayerProps)
end

-- 发送请求玩家金币信息
function MsgManager:sendReqPlayerGold()
    if not CF.roomData:isGoldRoom() then
        return
    end
    local msgReqPlayerProps = CF.ToolMProtocol.ReqSR:new()
    msgReqPlayerProps.askid = 0
    msgReqPlayerProps.gameid = CF.areaData:getCommonGoldGameID()
    CF.netEngine.sendToolProtocol(msgReqPlayerProps)
end

------------------------------非公共协议------------------------------

function MsgManager:sendSelfHeadUrl()
    if not CF.GameProtocol.msgAvatarUrl then
        return
    end
    local msgAvatarUrl = CF.GameProtocol.msgAvatarUrl:new()
    msgAvatarUrl.seat = self._selfSeat

    local avatarUrl = CF.selfPlayerData:getWeChatURL()
    if CF.roomData:isGoldRoom() and XH and XH.playerData and XH.playerData:getGoldHeadUrl() then
        avatarUrl = XH.playerData:getGoldHeadUrl()
    end
    avatarUrl = string.gsub(avatarUrl, "https://", "http://")
    msgAvatarUrl.avatarUrl = avatarUrl
    self:sendStreamPacket(msgAvatarUrl)
end

function MsgManager:sendSoRequestDismiss()
    if not CF.GameProtocol or not CF.GameProtocol.msgRequestDismiss then
        return
    end
    local msgRequestDismiss = CF.GameProtocol.msgRequestDismiss:new()
    msgRequestDismiss.seat = self._selfSeat
    msgRequestDismiss.respondDismiss = {0, 0, 0, 0}
    self:sendStreamPacket(msgRequestDismiss)
end

function MsgManager:sendRespondDismiss(agree)
    if not CF.GameProtocol or not CF.GameProtocol.msgRespondDismiss then
        return
    end
    local msgRespondDismiss = CF.GameProtocol.msgRespondDismiss:new()
    msgRespondDismiss.seat = self._selfSeat
    msgRespondDismiss.agree = agree
    self:sendStreamPacket(msgRespondDismiss)
end

--GP解散
function MsgManager:sendGPDismiss(itype)
    local msgReqPlayerDismiss = CF.GameMProtocol.ReqPlayerDismiss:new()
    msgReqPlayerDismiss.m_type = itype
    CF.netEngine.sendGameProtocol(msgReqPlayerDismiss)
end

function MsgManager:sendDismissCountdown()
    if not CF.GameProtocol or not CF.GameProtocol.msgDismissCountdown then
        return
    end
    local msgDismissCountdown = CF.GameProtocol.msgDismissCountdown:new()
    msgDismissCountdown.sSeat = self._selfSeat
    msgDismissCountdown.nTime = 0
    for i = 0, CF.roomData:getMaxPlayer() - 1 do
        msgDismissCountdown.iAgrees[i] = 0
    end
    self:sendStreamPacket(msgDismissCountdown)
end

function MsgManager:sendTrust(flag)
    local msgTrust = CF.GameProtocol.msgTrust:new()
    msgTrust.sTrustSeat = self._selfSeat
    msgTrust.bTrust = flag

    self:sendStreamPacket(msgTrust)
end

function MsgManager:sendRespContinue(bContinue)
    local msgRespContinue = CF.LogicBaseProtocol.msgRespContinue:new()
    msgRespContinue.bContinue = bContinue
    msgRespContinue.nSeat = self._selfSeat
    self:sendStreamPacket(msgRespContinue)
end

--向GP发起续桌
function MsgManager:sendGPReqContinueGame(tableID)
    local reqContinueTable = CF.GameMProtocol.ReqContinueTable:new()
    reqContinueTable.nTableId = tableID
    reqContinueTable.nAskId = socket.gettime()
    self:sendGameProtocol(reqContinueTable)
end

--向GP发送同意或拒绝续桌
function MsgManager:sendGPRespContinue(tableID, isAgree)
    local reqDealContinueRequest = CF.GameMProtocol.ReqDealContinueRequest:new()
    reqDealContinueRequest.nTableId = tableID
    reqDealContinueRequest.nDealRet = isAgree and reqDealContinueRequest.DEALRET.AGREE or reqDealContinueRequest.DEALRET.REFUSE
    self:sendGameProtocol(reqDealContinueRequest)
end

-- 金币场重新匹配发送playerLeave
function MsgManager:sendPlayerLeave33()
    local playerLeave = CF.GameMProtocol.PlayerLeave:new()
    self:sendGameProtocol(playerLeave)
end

function MsgManager:sendPlayerLeaveTemporarily()
    local playerLeaveTemporarily = CF.GameMProtocol.LeaveTemporarilyReq:new()
    self:sendGameProtocol(playerLeaveTemporarily)
end

function MsgManager:sendPlayerAct(action, roomMode)
    local tReqPlayerActData = CF.GameMProtocol.ReqPlayerAct:new()
    if action == CF.GameDefine.ENUM_PLAYER_ACT.CHANGESEAT then
        tReqPlayerActData.action = tReqPlayerActData.ACTION.CHANGETOSTART
        if roomMode == 1 then
            tReqPlayerActData.tableID = -1
        end
    elseif action == CF.GameDefine.ENUM_PLAYER_ACT.SITDOWNTOSTART or action == CF.GameDefine.ENUM_PLAYER_ACT.SITDOEM then
        tReqPlayerActData.action = tReqPlayerActData.ACTION.SITDOWN
    end
    tReqPlayerActData.askid = action
    self:sendGameProtocol(tReqPlayerActData)
end

function MsgManager:sendReqShuffle()
    local msgReqShuffle = CF.GameProtocol.msgReqShuffle:new()
    msgReqShuffle.seat = self._selfSeat
    self:sendStreamPacket(msgReqShuffle)
end

function MsgManager:sendFlushGameSR()
    if not CF.roomData:isBianChaDKGoldRoom() or not CF.selfPlayerData then
        return
    end
    local ReqPlayerGameSR = require("lobby.Req.Room.ReqPlayerGameSR")
    local reqPlayerGameSR = ReqPlayerGameSR:new()
    reqPlayerGameSR:start(CF.roomData:getAppID(), CF.roomData:getSRSGroupID(), 10, CF.areaData:getAreaID(), CF.selfPlayerData:getNumberID())
end


function MsgManager:sendReqVipKickUser(areaid, numid)
    if CF.roomData:is50() then 
        local msgData = {} 
        msgData.target_player = {}
        msgData.target_player.area_id = areaid
        msgData.target_player.user_id = numid
        self:sendProtobuf(CF.PyrrlaProtobuf.PlayerKickRequest,msgData)
    else 
        local msg = CF.GameMProtocol.ReqVipKickUser:new()
        msg.areaid = areaid
        msg.numid = numid
        self:sendGameProtocol(msg)
    end 
end

--玩家离开房间、玩家离开队列
function MsgManager:sendPlayerLeave50()
   local msgData = {} 
   msgData.tenant_id = CF.areaData:getTenantID()
   msgData.area_id = CF.areaData:getAreaID()
   msgData.game_id = CF.roomData:getGameID()
   msgData.session_id = CF.roomData:getRoomLevel()
   msgData.user_id = CF.selfPlayerData:getNumberID()
   self:sendProtobuf(CF.PyrrlaProtobuf.PlayerLeaveRequest,msgData)
end

function MsgManager:sendAddMultiple(addMultipleType)
    local msgAddMultiple = CF.GameProtocol.msgAddMulti:new()
    msgAddMultiple.seat = self._selfSeat
    msgAddMultiple.multi = addMultipleType
    self:sendStreamPacket(msgAddMultiple)
end

-- 发送洗牌，回放用
function MsgManager:sendForwardPlayBackShuffle(data)
    if CF.roomData:getIsSeer() then
        return
    end
    local msgBaseClientForwardEx = CF.GameProtocol.msgBaseClientForwardEx:new()
    msgBaseClientForwardEx.sSeat = CF.roomData:getSelfSeat()
    msgBaseClientForwardEx.sID = CF.GameDefine.PRE_SHUFFLE_ID_PLAYBACK
    msgBaseClientForwardEx.strData = data
    self:sendStreamPacket(msgBaseClientForwardEx)
end

return MsgManager�B