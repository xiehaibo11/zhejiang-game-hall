local GameScene = class("GameScene")
local CURRENT_MODULE_NAME = ...
local GameLogicProtocol = import("..GameProtocol.GameLogicProtocol",CURRENT_MODULE_NAME)
local GameBaseProtocol = import("GameCommon.Code.GameBase.GameBaseProtocol")
local GameMXY = import("GameCommon.Code.GameProtocol.GameMXY")

function GameScene:sendGameStart()
    local msgPlayerStart = GameBaseProtocol.msgPlayerStart:new()
    local player = Game.FrameworkFunction.getSelfPlayer()
    if player then
        msgPlayerStart.nBrandID = player:getBrandID()
        msgPlayerStart.nNumberID = player:getNumberID()
    end

    Game.FrameworkFunction.sendStreamPacket(msgPlayerStart)
end

function GameScene:sendRespContinue(bContinue)
    local msgRespContinue = GameBaseProtocol.msgRespContinue:new()
    msgRespContinue.bContinue = bContinue
    msgRespContinue.nSeat = Game.FrameworkFunction.getSelfSeat()
    Game.FrameworkFunction.sendStreamPacket(msgRespContinue)
end

function GameScene:sendTrust(flag)
    local msgTrust = GameLogicProtocol.msgTrust:new()

    msgTrust.sTrustSeat = Game.FrameworkFunction.getSelfSeat()
    msgTrust.bTrust = flag
    Game.FrameworkFunction.sendStreamPacket(msgTrust)
end

function GameScene:sendFastVoice(url)
    local msgClientForward = GameLogicProtocol.msgClientForward:new()
    msgClientForward.seat = Game.FrameworkFunction.getSelfSeat()
    msgClientForward.id = GameLogicProtocol.msgClientForward.CF_ID.FastVoice
    msgClientForward.strData = url
    Game.FrameworkFunction.sendStreamPacket(msgClientForward)
end

function GameScene:sendMobileSignalMsg()
    local msgClientForward = GameLogicProtocol.msgClientForward:new()
    msgClientForward.seat = Game.FrameworkFunction.getSelfSeat()
    msgClientForward.id = GameLogicProtocol.msgClientForward.CF_ID.MobileSignal
    msgClientForward.strData = ""
    self._clientData._sendMobileSignalMsgTime = socket.gettime()
    Game.FrameworkFunction.sendStreamPacket(msgClientForward)
end

function GameScene:sendHeadAvatarurlMsg()
    local msgClientForward = GameLogicProtocol.msgClientForward:new()
    msgClientForward.seat = Game.FrameworkFunction.getSelfSeat()
    msgClientForward.id = GameLogicProtocol.msgClientForward.CF_ID.AvatarUrl
    msgClientForward.strData = XH.playerData:getWeChatURL()
    self._clientData._sendMobileSignalMsgTime = socket.gettime()
    Game.FrameworkFunction.sendStreamPacket(msgClientForward)
end

function GameScene:sendRequestDismiss()
    local msgRequestDismiss = GameLogicProtocol.msgRequestDismiss:new()
    msgRequestDismiss.seat = Game.FrameworkFunction.getSelfSeat()
    msgRequestDismiss.nRemainingTime = 120
    Game.FrameworkFunction.sendStreamPacket(msgRequestDismiss)
end

function GameScene:sendRespondDismiss(agree)
    local msgRespondDismiss = GameLogicProtocol.msgRespondDismiss:new()
    msgRespondDismiss.seat = Game.FrameworkFunction.getSelfSeat()
    msgRespondDismiss.agree = agree
    Game.FrameworkFunction.sendStreamPacket(msgRespondDismiss)
end

function GameScene:sendSelfHeadUrl()
    local selfPlayer = Game.FrameworkFunction.getSelfPlayer()
    local url = XH.playerData:getWeChatURL()
    local msgAvatarUrl = GameLogicProtocol.msgAvatarUrl:new()
    msgAvatarUrl.seat = selfPlayer:getSeat()
    msgAvatarUrl.avatarUrl = url
    Game.FrameworkFunction.sendStreamPacket(msgAvatarUrl)
end

function GameScene:sendRoomNumber(roomNumber)
    local msgRoomNum = GameBaseProtocol.msgRoomNumEx:new()
    msgRoomNum.nRoomNum = roomNumber
    Game.FrameworkFunction.sendStreamPacket(msgRoomNum,self._srsProcessID)
end

function GameScene:sendPlayerAct(action,roomMode)
    local tReqPlayerActData = GameMXY.ReqPlayerAct:new()
    if action == self.ENUM_PLAYER_ACT.CHANGESEAT then
        tReqPlayerActData.action = GameMXY.ReqPlayerAct.ACTION.CHANGETOSTART
        if roomMode == 1 then
            tReqPlayerActData.tableID = -1
        end

    elseif action == self.ENUM_PLAYER_ACT.SITDOWNTOSTART or action == self.ENUM_PLAYER_ACT.SITDOEM then
        tReqPlayerActData.action = GameMXY.ReqPlayerAct.ACTION.SITDOWN
    end
    tReqPlayerActData.askid = action

    Game.Interface.sendMessage(tReqPlayerActData,nil,self._srsProcessID)  
end

function GameScene:sendOutCards(gameCardGroup)
    if gameCardGroup == nil then 
        return
    end
    local msgOutCards = GameLogicProtocol.msgOutCards:new()
    msgOutCards.sSeat = Game.FrameworkFunction.getSelfSeat()
    msgOutCards.ucCount = #gameCardGroup.Cards
    for i = 1,msgOutCards.ucCount do
        msgOutCards.ucCards[i] = gameCardGroup.Cards[i]:getID()
    end
    msgOutCards.sCardType = gameCardGroup.tType

    Game.FrameworkFunction.sendStreamPacket(msgOutCards,self._srsProcessID)
    XH.lobby:getModule("Sxvip.FriendInfo"):onOutEnd()
end

function GameScene:sendPlayerChaoDi()
    local msgPlayerChaoDi = GameLogicProtocol.msgPlayerChaoDi:new()
    msgPlayerChaoDi.sSeat = Game.FrameworkFunction.getSelfSeat()
    msgPlayerChaoDi.bCanChaodi = true

    Game.FrameworkFunction.sendStreamPacket(msgPlayerChaoDi,self._srsProcessID)
end

function GameScene:sendWaitOpenCard()

    local msgWaitOpenCard = GameLogicProtocol.msgWaitOpenCard:new()
    msgWaitOpenCard.sSeat = Game.FrameworkFunction.getSelfSeat()
    msgWaitOpenCard.bSuccess = true

    Game.FrameworkFunction.sendStreamPacket(msgWaitOpenCard,self._srsProcessID)
end

function GameScene:sendWaitTakeCard()
    local msgWaitTakeCard = GameLogicProtocol.msgWaitTakeCard:new()
    msgWaitTakeCard.sSeat = Game.FrameworkFunction.getSelfSeat()
    msgWaitTakeCard.bSuccess = true

    Game.FrameworkFunction.sendStreamPacket(msgWaitTakeCard,self._srsProcessID)
end

function GameScene:sendWaitSwapSeat()
    local msgWaitSwapSeat = GameLogicProtocol.msgWaitSwapSeat:new()
    msgWaitSwapSeat.sSeat = Game.FrameworkFunction.getSelfSeat()
    msgWaitSwapSeat.bSuccess = true

    Game.FrameworkFunction.sendStreamPacket(msgWaitSwapSeat,self._srsProcessID)
end


function GameScene:sendSpeak(index,speakText)
    local msgSpeak = GameLogicProtocol.msgClientForward:new()
    msgSpeak.seat = Game.FrameworkFunction.getSelfSeat()
    msgSpeak.id = GameLogicProtocol.msgClientForward.CF_ID.Speak
    msgSpeak.strData = tostring(index) .. "/" .. speakText
    Game.FrameworkFunction.sendStreamPacket(msgSpeak)
end

function GameScene:sendSpecCard(gameCardGroup)
    if gameCardGroup == nil then 
        return
    end
    local msgSpecfCard = GameLogicProtocol.msgWaitSelecrCard:new()
    msgSpecfCard.ucCardCount = #gameCardGroup
    for i = 1,msgSpecfCard.ucCardCount do
        msgSpecfCard.ucCard[i] = gameCardGroup[i]
    end

    Game.FrameworkFunction.sendStreamPacket(msgSpecfCard)
end

function GameScene:sendWireBreakSignal()
    local msgWireBreak = GameLogicProtocol.msgClientForward:new()
    msgWireBreak.seat = Game.FrameworkFunction.getSelfSeat()
    msgWireBreak.id = GameLogicProtocol.msgClientForward.CF_ID.WireBreakSignal
    msgWireBreak.strData = ""
    Game.FrameworkFunction.sendStreamPacket(msgWireBreak)
end

function GameScene:sendRequestSwapSeat(dstSeat)
    local msgRequestSwapSeat = GameLogicProtocol.msgRequestSwapSeat:new()
    msgRequestSwapSeat.srcSeat = Game.FrameworkFunction.getSelfSeat()
    msgRequestSwapSeat.destSeat = dstSeat
    Game.FrameworkFunction.sendStreamPacket(msgRequestSwapSeat,self._srsProcessID)
end

function GameScene:sendRespondSwapSeat(agree)
    local msgRespondSwapSeat = GameLogicProtocol.msgRespondSwapSeat:new()
    msgRespondSwapSeat.seat = Game.FrameworkFunction.getSelfSeat()
    msgRespondSwapSeat.agree = agree
    Game.FrameworkFunction.sendStreamPacket(msgRespondSwapSeat,self._srsProcessID)
end

function GameScene:sendPlayerHeadEffect()
    local msgClientForward = GameLogicProtocol.msgClientForward:new()
    msgClientForward.seat = Game.FrameworkFunction.getSelfSeat()
    msgClientForward.id = GameLogicProtocol.msgClientForward.CF_ID.PlayerHeadEffect
    msgClientForward.strData = ""
    Game.FrameworkFunction.sendStreamPacket(msgClientForward,self._srsProcessID)
end

function GameScene:sendAMapMsg(data)
    local msgBaseClientForwardEx = GameBaseProtocol.msgBaseClientForwardEx:new()
    msgBaseClientForwardEx.sSeat = Game.FrameworkFunction.getSelfSeat()
    msgBaseClientForwardEx.toSeat = -1  -- -1表示给所有人发送
    msgBaseClientForwardEx.sID = GameBaseProtocol.msgBaseClientForwardEx.CF_ID.AMap
    msgBaseClientForwardEx.sType = GameBaseProtocol.msgBaseClientForwardEx.CT_ID.XY_SAVE_FORWARD
    msgBaseClientForwardEx.strData = data
    Game.FrameworkFunction.sendStreamPacket(msgBaseClientForwardEx)
end

function GameScene:sendSurrenderRequestMsg()
    local msgRequestSurrender = GameLogicProtocol.msgRequestSurrender:new()
    msgRequestSurrender.sReqSeat = Game.FrameworkFunction.getSelfSeat()
    Game.FrameworkFunction.sendStreamPacket(msgRequestSurrender)
end

function GameScene:sendResPonseSurrenderMsg(sFlag)
    if sFlag ~= 1 and sFlag ~= 2 then
        return
    end
    local msgRespondSurrender = GameLogicProtocol.msgRespondSurrender:new()
    msgRespondSurrender.sResSeat = Game.FrameworkFunction.getSelfSeat()
    msgRespondSurrender.sFlag = sFlag
    Game.FrameworkFunction.sendStreamPacket(msgRespondSurrender)
end

function GameScene:sendReqShuffle()
    local msgReqShuffle = GameLogicProtocol.msgReqShuffle:new()
    msgReqShuffle.sSeat = Game.FrameworkFunction.getSelfSeat()
    Game.FrameworkFunction.sendStreamPacket(msgReqShuffle)
end

function GameScene:sendQiaoPiHua(encode)
    local msgBaseClientForwardEx = GameBaseProtocol.msgBaseClientForwardEx:new()
    msgBaseClientForwardEx.sSeat = Game.FrameworkFunction.getSelfSeat()
    msgBaseClientForwardEx.sID = GameBaseProtocol.msgBaseClientForwardEx.CF_ID.QiaoPiHua
    msgBaseClientForwardEx.strData = encode
    Game.FrameworkFunction.sendStreamPacket(msgBaseClientForwardEx)
end

function GameScene:sendExpression(index)
    local msgClientForward = GameLogicProtocol.msgClientForward:new()
    msgClientForward.seat = Game.FrameworkFunction.getSelfSeat()
    msgClientForward.id = GameLogicProtocol.msgClientForward.CF_ID.ChatMsgEmoji
    msgClientForward.strData = string.format("%02d", index)
    Game.FrameworkFunction.sendStreamPacket(msgClientForward, self._srsProcessID)
end

function GameScene:sendChatMessage(msg)
    local agbasexy = require("GameCommon.Code.GameProtocol.agbasexy")
    local msgChat = agbasexy.ChatMsg:new()
    msgChat.m_channel = msgChat.CHANNEL.TABLE
    msgChat.m_color = 0
    local seat = Game.FrameworkFunction.getSelfSeat()  
    msgChat.m_msg = msg
    Game.Interface.sendMessage(msgChat,nil,1)
end

function GameScene:sendEndWaitShowBombAni()
    local msgWaitShowBombAni = GameLogicProtocol.msgWaitShowBombAni:new()
    msgWaitShowBombAni.sSeat = Game.FrameworkFunction.getSelfSeat()
    msgWaitShowBombAni.bIsSuccess = true
    Game.FrameworkFunction.sendStreamPacket(msgWaitShowBombAni)
end

function GameScene:sendEndWaitShowBomb(sSeat)
    local msgWaitShowBomb = GameLogicProtocol.msgWaitShowBomb:new()
    msgWaitShowBomb.sSeat = sSeat
    msgWaitShowBomb.bIsSuccess = true
    Game.FrameworkFunction.sendStreamPacket(msgWaitShowBomb)
end

function GameScene:sendMsgHeadFrame(data)
    local msgBaseClientForwardEx = GameBaseProtocol.msgBaseClientForwardEx:new()
    msgBaseClientForwardEx.sSeat = Game.FrameworkFunction.getSelfSeat()
    msgBaseClientForwardEx.sID = GameBaseProtocol.msgBaseClientForwardEx.CF_ID.VIPEffect
    msgBaseClientForwardEx.strData = data
    msgBaseClientForwardEx.sType = GameBaseProtocol.msgBaseClientForwardEx.CT_ID.XY_SAVE_FORWARD
    Game.FrameworkFunction.sendStreamPacket(msgBaseClientForwardEx)
end

return GameScene