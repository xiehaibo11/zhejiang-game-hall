local MsgManager = CF.gameClass("MsgManager", "game.Mahjong.BasicMahjong.Manager.MsgManager")

function MsgManager:sendLocationMsg(data)
    local msgBaseClientForwardEx = CF.GameProtocol.msgBaseClientForwardEx:new()
    msgBaseClientForwardEx.sSeat = self._selfSeat
    msgBaseClientForwardEx.sID = CF.GameProtocol.msgBaseClientForwardEx.CF_ID.HeadUrl
    msgBaseClientForwardEx.strData = data
    self:sendStreamPacket(msgBaseClientForwardEx)
end

--向GP发起续桌
function MsgManager:sendGPReqContinueGame()
    local reqContinueTable = CF.GameProtocol.msgRespContinue:new()
    reqContinueTable.bContinue = true
    reqContinueTable.nSeat = self._selfSeat
    self:sendStreamPacket(reqContinueTable)
end

function MsgManager:sendGPRespContinue(isAgree)
    local reqContinueTable = CF.GameProtocol.msgRespContinue:new()
    reqContinueTable.bContinue = isAgree
    reqContinueTable.nSeat = self._selfSeat
    self:sendStreamPacket(reqContinueTable)
end

function MsgManager:sendRespContinue(isAgree)
    local reqContinueTable = CF.GameProtocol.msgRespContinue:new()
    reqContinueTable.bContinue = isAgree
    reqContinueTable.nSeat = self._selfSeat
    self:sendStreamPacket(reqContinueTable)
end

-- 发送是否买顶底
function MsgManager:sendMZi(choose)
    local msgBuyScore = CF.GameProtocol.msgBuyScore:new()
    msgBuyScore.nBuyScore = choose
    msgBuyScore.nSeat = self._selfSeat
    self:sendStreamPacket(msgBuyScore)
end

function MsgManager:sendGenOrBuGen(flag)
    local obj = CF.GameProtocol.msgChengBaoAsk:new()
    local mySeat = self._selfSeat
    obj.tCount = 1
    obj.ChengBaoInfo = {}
    local tmpchengbaoInfo = {}
    tmpchengbaoInfo.nSeat = mySeat
    tmpchengbaoInfo.cbType = flag
    tmpchengbaoInfo.nRelativeSeat = 0
    table.insert(obj.ChengBaoInfo, tmpchengbaoInfo)
    self:sendStreamPacket(obj)
end

function MsgManager:sendAction(comb, actionID)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    if gameData and gameData:getChengBaoREJECT() then
        return
    end
    MsgManager.super.sendAction(self, comb, actionID)
end

function MsgManager:sendHu(actionID)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    if gameData and gameData:getChengBaoREJECT() then
        return
    end
    MsgManager.super.sendHu(self, actionID)
end

function MsgManager:sendGPSMsg(data)
    local msgBaseClientForwardEx = CF.GameProtocol.msgBaseClientForwardEx:new()
    msgBaseClientForwardEx.sSeat = self._selfSeat
    msgBaseClientForwardEx.sID =  CF.GameProtocol.msgBaseClientForwardEx.CF_ID.GPS_MSG
    msgBaseClientForwardEx.strData = data
    self:sendStreamPacket(msgBaseClientForwardEx)
end

--发送聊天消息
function MsgManager:sendQiaoPiHuaJinHua(data, index)
    local chatMsg =  CF.AgBaseProtocol.ChatMsg:new()
    chatMsg.m_channel = CF.AgBaseProtocol.ChatMsg.CHANNEL.TABLE
    chatMsg.m_numberid = CF.selfPlayerData:getNumberID()
    chatMsg.m_areaid = CF.areaData:getAreaID()
    chatMsg.m_color = index * 10 + 1 + 1000
    chatMsg.m_msg = un.StringUtils.UTF8_TO_GB_18030_2000(data)
    self:sendGameProtocol(chatMsg)
end

--开始游戏，发送roomid到服务端
function MsgManager:sendGameStart()
    MsgManager.super.sendGameStart(self)
    self:sendRoomNumber()
end

function MsgManager:sendRoomNumber()
    local msgRoomNum = CF.GameProtocol.msgRoomNumEx:new()
    msgRoomNum.nRoomNum = CF.roomData:getRoomID()

    self:sendStreamPacket(msgRoomNum)
end

return MsgManager