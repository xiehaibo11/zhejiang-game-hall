local MsgManager = NG.GAME.gameClass("MsgManager", "newgold.GoldGames.GoldGameBase.Manager.MsgManager")
local FWProtocol = NG.GAME.gameRequire("Protocol.FWProtocol")
local RLProtocol = NG.GAME.gameRequire("Protocol.RLProtocol")
local LCLProtocol = NG.GAME.gameRequire("Protocol.LCLProtocol")
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")
local GoldRoomProtoDefine = require("newgold.GoldCommon.ProtoBuf.game_cli_define")

-- 准备
function MsgManager:sendGameReady()
    local gameReady = FWProtocol.msgPlayerStart:new()
    gameReady.nBrandID = GoldPlayerData.AreaId
    gameReady.nNumberID = GoldPlayerData.NumId
    gameReady.nReserved = 0
    gameReady.XY_ID = FWProtocol.msgPlayerStart.cmdid
    self:sendStreamPacket(gameReady)
end

function MsgManager:sendMsgTrust(isTrust)
    local msgTrust = LCLProtocol.msgTrust:new()
    msgTrust.nSeat = NG.GAME.roomTableData:getSelfSeat()
    msgTrust.nFlag = isTrust and 1 or 0
    msgTrust.XY_ID = LCLProtocol.msgTrust.cmdid
    self:sendStreamPacket(msgTrust)
end

function MsgManager:sendMsgEndWait()
    local msgEndWait = LCLProtocol.msgEndWait:new()
    msgEndWait.nSeat = NG.GAME.roomTableData:getSelfSeat()
    msgEndWait.XY_ID = LCLProtocol.msgEndWait.cmdid
    self:sendStreamPacket(msgEndWait)
end

function MsgManager:sendRespPower(power)
    local msgRespPower = LCLProtocol.msgRespPower:new()
    msgRespPower.nSeat = NG.GAME.roomTableData:getSelfSeat()
    msgRespPower.nPower = power
    msgRespPower.XY_ID = LCLProtocol.msgRespPower.cmdid
    self:sendStreamPacket(msgRespPower)
end

function MsgManager:sendPlayCard(cards, cardType, power)
    local msgPlayCard = LCLProtocol.msgPlayCard:new()
    msgPlayCard.nSeat = NG.GAME.roomTableData:getSelfSeat()
    msgPlayCard.nCards = cards
    msgPlayCard.nCardCount = #cards
    msgPlayCard.nTypeID = cardType
    msgPlayCard.nPower = power
    msgPlayCard.XY_ID = LCLProtocol.msgPlayCard.cmdid
    -- dump(msgPlayCard, "msgPlayCard")
    self:sendStreamPacket(msgPlayCard)
end

function MsgManager:sendSpecfHand(cards,seat)
    local msgSpecfHand = LCLProtocol.msgSpecfHand:new()
    msgSpecfHand.nSeat = seat or NG.GAME.roomTableData:getSelfSeat()
    msgSpecfHand.nCount = #cards
    msgSpecfHand.nCards = cards
    msgSpecfHand.XY_ID = LCLProtocol.msgSpecfHand.cmdid
    dump(msgSpecfHand, "msgSpecfHand")
    self:sendStreamPacket(msgSpecfHand)
end

-- 发送心跳
function MsgManager:sendHeartBeat()
    local checkAct = {active = 1}
    self:sendGameProtocol(checkAct, "CheckAct", GoldRoomProtoDefine.xyid.kCheckAct)
end

return MsgManager
a
