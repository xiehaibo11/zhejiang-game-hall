local MsgManager = CF.gameClass("MsgManager", "game.GameBase.Manager.MsgManager")

function MsgManager:ctor(appId)
    MsgManager.super.ctor(self,appId)
end

-- 直接回复不亮红十消息给服务器
function MsgManager:sendTenRed(hongType)
    local obj = CF.GameProtocol.msgOpenRedTen:new()
    obj.seat = self._selfSeat
    obj.openType = hongType  -- 4 表示不亮
    self:sendStreamPacket(obj)
end

function MsgManager:sendOutCards(gameCardGroup)
    if gameCardGroup == nil then 
        return
    end
    local msgOutCards = CF.GameProtocol.msgPlayCard:new()
    msgOutCards.seat = self._selfSeat
    msgOutCards.cardCount = #gameCardGroup.Cards
    --为了兼容老包，排序方式改变（老包按从大到小排序）
    for i = 1,msgOutCards.cardCount do
        msgOutCards.cards[i] = gameCardGroup.Cards[msgOutCards.cardCount - i + 1]
    end
    msgOutCards.typeID = gameCardGroup.typeID
    msgOutCards.power = gameCardGroup.power
    self:sendStreamPacket(msgOutCards)
    XH.lobby:getModule("Sxvip.FriendInfo"):onOutEnd()
end

function MsgManager:sendNotOutCards()
    local msgOutCards = CF.GameProtocol.msgPlayCard:new()
    msgOutCards.seat = self._selfSeat
    msgOutCards.cardCount = 0
    msgOutCards.cards = {}
    msgOutCards.typeID = 0;
    msgOutCards.power = 0;
    self:sendStreamPacket(msgOutCards)
    XH.lobby:getModule("Sxvip.FriendInfo"):onOutEnd()
end

function MsgManager:sendSpeak(index, speakText)
    local msgSpeak = CF.GameProtocol.msgBaseClientForwardEx:new()
    msgSpeak.sSeat = self._selfSeat
    msgSpeak.sID =  CF.GameProtocol.msgBaseClientForwardEx.CF_ID.QiaoPiHua
    msgSpeak.strData = tostring(index) .. "/" .. speakText
    self:sendStreamPacket(msgSpeak)
end

function MsgManager:sendEmoji(data)
    local msgClientForwardEx = CF.GameProtocol.msgBaseClientForward:new()
    msgClientForwardEx.sSeat = self._selfSeat
    msgClientForwardEx.sID = CF.GameProtocol.msgBaseClientForward.CF_ID.Emoji
    msgClientForwardEx.strData = data
    self:sendStreamPacket(msgClientForwardEx)
end

function MsgManager:sendSpecCard(gameCardGroup)
    if gameCardGroup == nil then 
        return
    end
    local msgSpecfCard = CF.GameProtocol.msgWaitSelecrCard:new()
    msgSpecfCard.ucCardCount = #gameCardGroup
    for i = 1,msgSpecfCard.ucCardCount do
        msgSpecfCard.ucCard[i] = gameCardGroup[i]
    end
    self:sendStreamPacket(msgSpecfCard)
end

function MsgManager:sendPropAni(strdata)
    if CF.roomData:getIsSeer() then
        return
    end
    local msgBaseClientForward = CF.GameProtocol.msgBaseClientForward:new()
    msgBaseClientForward.sSeat = self._selfSeat
    msgBaseClientForward.sID = CF.GameProtocol.msgBaseClientForwardEx.CF_ID.PropAni
    msgBaseClientForward.strData = strdata
    self:sendStreamPacket(msgBaseClientForward)
    if CF.reqSendPropSuccess then
        CF.reqSendPropSuccess(strdata)
    end
end

function MsgManager:sendMobileSignalMsg()
    local msgBaseClientForward = CF.GameProtocol.msgBaseClientForward:new()
    msgBaseClientForward.sSeat = self._selfSeat
    msgBaseClientForward.toSeat = -1
    msgBaseClientForward.sID = CF.GameProtocol.msgBaseClientForwardEx.CF_ID.Mobile_Signal
    msgBaseClientForward.strData = ""
    CF.roomData:setSignalMsgTime(socket.gettime())
    self:sendStreamPacket(msgBaseClientForward, true)
end

function MsgManager:sendRequestDismiss()
    if CF.roomData:getIsGameStart() == false and CF.roomData:getPlayCount() == 0 then
        local reqLeaveRoom = CF.GameMProtocol.ReqLeaveRoom:new()
        self:sendGameProtocol(reqLeaveRoom)
    else
        local msgGameReqJieSan = CF.GameProtocol.msgGameReqJieSan:new()
        msgGameReqJieSan.seat = self._selfSeat
        msgGameReqJieSan.flag = CF.GameDefine.JieSanRoomType.REQUEST
        self:sendStreamPacket(msgGameReqJieSan)
    end
end

function MsgManager:sendRespondDismiss(agree)
    local msgGameReqJieSan = CF.GameProtocol.msgGameReqJieSan:new()
    msgGameReqJieSan.seat = self._selfSeat
    msgGameReqJieSan.flag = agree and CF.GameDefine.JieSanRoomType.AGREE or CF.GameDefine.JieSanRoomType.DISAGREE
    self:sendStreamPacket(msgGameReqJieSan)
end

function MsgManager:sendSelfHeadUrl()
    if not CF.GameProtocol.msgAvatarUrl then
        return
    end
    local msgAvatarUrl = CF.GameProtocol.msgAvatarUrl:new()
    msgAvatarUrl.nSeat = self._selfSeat

    local avatarUrl = CF.selfPlayerData:getWeChatURL()
    if CF.roomData:isGoldRoom() and XH and XH.playerData and XH.playerData:getGoldHeadUrl() then
        avatarUrl = XH.playerData:getGoldHeadUrl()
    end
    avatarUrl = string.gsub(avatarUrl, "https://", "http://")
    msgAvatarUrl.url = avatarUrl
    self:sendStreamPacket(msgAvatarUrl)
end

function MsgManager:sendFastVoice(url)
    local msgBaseClientForwardEx = CF.GameProtocol.msgBaseClientForward:new()
    msgBaseClientForwardEx.sSeat = self._selfSeat
    msgBaseClientForwardEx.sID = CF.GameProtocol.msgBaseClientForward.CF_ID.FastVoice
    msgBaseClientForwardEx.strData = url

    self:sendStreamPacket(msgBaseClientForwardEx)
end

function MsgManager:sendAMapMsg(data)
    local msgBaseClientForwardEx = CF.GameProtocol.msgBaseClientForward:new()
    msgBaseClientForwardEx.sSeat = self._selfSeat
    msgBaseClientForwardEx.toSeat = -1  -- -1表示给所有人发送
    msgBaseClientForwardEx.sID = CF.GameProtocol.msgBaseClientForward.CF_ID.GPS_MSG
    msgBaseClientForwardEx.sType = CF.GameProtocol.msgBaseClientForward.CT_ID.XY_SAVE_FORWARD
    msgBaseClientForwardEx.strData = data

    self:sendStreamPacket(msgBaseClientForwardEx)
end

return MsgManager