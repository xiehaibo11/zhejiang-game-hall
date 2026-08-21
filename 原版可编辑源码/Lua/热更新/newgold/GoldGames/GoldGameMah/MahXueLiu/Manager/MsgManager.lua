local MsgManager = NG.GAME.gameClass("MsgManager", "newgold.GoldGames.GoldGameBase.Manager.MsgManager")
local FWProtocol = NG.GAME.gameRequire("Protocol.FWProtocol")
local RLProtocol = NG.GAME.gameRequire("Protocol.RLProtocol")
local LCLProtocol = NG.GAME.gameRequire("Protocol.LCLProtocol")
local MahProtocol = NG.GAME.gameRequire("Protocol.MahProtocol")
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")
local GoldRoomProtoDefine = require("newgold.GoldCommon.ProtoBuf.game_cli_define")
local IsGoldBoxTest = require("app.Config.GlobalConfig").IsGoldBoxTest

function MsgManager:ctor(appId)
    MsgManager.super.ctor(self, appId)
end

function MsgManager:getReqConfig()
    return {
        --
        ReqTableMsg = { reqPath = "newgold.GoldGames.GoldGameMah.MahXueLiu.Manager.ReqTable50", callBack = self.onTableCallBack },
    }
end

function MsgManager:onTableCallBack()
end

function MsgManager:sendStreamPacket(protocol)
    if IsGoldBoxTest then
        MsgManager.super.sendStreamPacket(self, protocol)
        return
    end
    print("【send table50】..." .. (protocol.__cname or "") ..  (protocol.XY_ID or protocol.cmdid))
    -- dump(protocol)
    local bos = protocol:bostream()
    self:startReq("ReqTableMsg", protocol.XY_ID or protocol.cmdid, bos:getBytes())
end

-- 准备
function MsgManager:sendGameReady()
    local gameReady = FWProtocol.msgPlayerStart:new()
    gameReady.nBrandID = GoldPlayerData.AreaId
    gameReady.nNumberID = GoldPlayerData.NumId
    gameReady.nReserved = 0
    gameReady.XY_ID = FWProtocol.msgPlayerStart.cmdid
    self:sendStreamPacket(gameReady)
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


-----------------麻将-------------------------
function MsgManager:sendTrust(bTrust)
    local msgTrust = MahProtocol.msgTrust:new()
    msgTrust.nSeat = NG.GAME.roomTableData:getSelfSeat()
    if bTrust then
        msgTrust.nFlag = 1
    else
        msgTrust.nFlag = 0
    end
    self:sendStreamPacket(msgTrust)
end

--换牌协议 
function MsgManager:sendHuanPai(mahIDs)
    local msgPlay = MahProtocol.msgChangeMahInfo:new()
    msgPlay.changeSeat = NG.GAME.roomTableData:getSelfSeat()
    msgPlay.changeMahs = mahIDs
    msgPlay.changeMahCnt = #mahIDs
    self:sendStreamPacket(msgPlay)
end

--听牌请求
function MsgManager:sendOutTingInfo(mahID)
    local msg = MahProtocol.msgReqTingFan:new()
    msg.nSeat = NG.GAME.roomTableData:getSelfSeat()
    msg.nMah = mahID
    self:sendStreamPacket(msg)
end

--牌层协议
function MsgManager:sendPlayMahs(mahID, actionID)
    local msgPlay = MahProtocol.msgPlay:new()
    msgPlay.nSeat = NG.GAME.roomTableData:getSelfSeat()
    msgPlay.nMah = mahID
    msgPlay.nActionID = actionID
    self:sendStreamPacket(msgPlay)
end

function MsgManager:sendReplace(mah)
    local msgReplace = MahProtocol.msgReplace:new()
    msgReplace.nSeat = NG.GAME.roomTableData:getSelfSeat()
    msgReplace.nMah = mah
    self:sendStreamPacket(msgReplace)
end

function MsgManager:sendAction(comb, actionID)
    local msgAction = MahProtocol.msgAction:new()
    msgAction.nSeat = NG.GAME.roomTableData:getSelfSeat()
    local combs = {}
    combs["nFlag"] = comb.flag
    combs["nFromSeat"] = comb.from
    combs["nCount"] = #comb.mahs
    combs["nMahs"] = comb.mahs
    combs["nInCount"] = #comb.ins
    combs["nInMahs"] = comb.ins

    msgAction.tComb = combs
    msgAction.nActionID = actionID
    self:sendStreamPacket(msgAction)
end

function MsgManager:sendHu(actionID)
    local msgHu = MahProtocol.msgHu:new()
    msgHu.nSeat = NG.GAME.roomTableData:getSelfSeat()
    msgHu.nActionID = actionID
    self:sendStreamPacket(msgHu)
end

function MsgManager:sendTing()

end

function MsgManager:sendCancel(actionID)
    local msgCancel = MahProtocol.msgCancel:new()
    msgCancel.nSeat = NG.GAME.roomTableData:getSelfSeat()
    msgCancel.nActionID = actionID
    self:sendStreamPacket(msgCancel)
end

function MsgManager:sendEndWait(index)
    local msgEndWait = MahProtocol.msgEndWait:new()

    msgEndWait.nStepID = index
    msgEndWait.nSeat = NG.GAME.roomTableData:getSelfSeat()
    self:sendStreamPacket(msgEndWait)
end

--发送洗牌协议
function MsgManager:sendPlayerShuffle()
    local msgReqShuffle = MahProtocol.msgReqShuffle:new()
    msgReqShuffle.sSeat = NG.GAME.roomTableData:getSelfSeat()
    self:sendStreamPacket(msgReqShuffle)
end

function MsgManager:sendForwardOperatePass(data)
    -- if NG.game.roomTableData:getIsSeer() then
    --     return
    -- end
    local msgBaseClientForwardEx = MahProtocol.msgBaseClientForwardEx:new()
    msgBaseClientForwardEx.sSeat = NG.GAME.roomTableData:getSelfSeat()
    msgBaseClientForwardEx.sID = MahProtocol.msgBaseClientForwardEx.CF_ID.OPERATE_PASS
    msgBaseClientForwardEx.strData = data
    self:sendStreamPacket(msgBaseClientForwardEx)
end

function MsgManager:sendSpeak(index, bMan)
    local msgSpeak = LCLProtocol.msgSpeak:new()
    msgSpeak.speakSeat = NG.GAME.roomTableData:getSelfSeat()
    msgSpeak.id = index
    msgSpeak.bIsMan = bMan
    self:sendStreamPacket(msgSpeak)
end

function MsgManager:sendAddBei()

end

--做牌相关
function MsgManager:sendSpecfHandMahs(mahs, count, maxHandCount)
    local msgSpecfHand = MahProtocol.msgSpecfHand:new()
    maxHandCount = maxHandCount - 1
    local nCount = (count > maxHandCount and { maxHandCount } or { count })[1]
    msgSpecfHand.nCount = nCount
    msgSpecfHand.nMahs = mahs
    msgSpecfHand.nSeat = NG.GAME.roomTableData:getSelfSeat()
    self:sendStreamPacket(msgSpecfHand)
end

function MsgManager:sendSpecfWallMahs(mahs)
    local msgSpecfWall = MahProtocol.msgSpecfWall:new()
    msgSpecfWall.nCount = #mahs
    msgSpecfWall.nMahs = mahs
    self:sendStreamPacket(msgSpecfWall)
end

function MsgManager:sendSpecfTakeMah(takeMah)
    local msgSpecfDanFang = MahProtocol.msgSpecfDanFang:new()
    msgSpecfDanFang.nDanFang = takeMah
    msgSpecfDanFang.nSeat = NG.GAME.roomTableData:getSelfSeat()
    self:sendStreamPacket(msgSpecfDanFang)
end

function MsgManager:sendSpecfReq()
    local msgSpecfReq = MahProtocol.msgSpecfReq:new()
    msgSpecfReq.nSeat = NG.GAME.roomTableData:getSelfSeat()
    self:sendStreamPacket(msgSpecfReq)
end

function MsgManager:sendSpecfEnd()
    local msgSpecfEnd = MahProtocol.msgSpecfEnd:new()
    msgSpecfEnd.nSeat = NG.GAME.roomTableData:getSelfSeat()
    self:sendStreamPacket(msgSpecfEnd)
end

function MsgManager:sendGameQuickStart(state)
    
end

function MsgManager:sendBianPai(value, cnt)
    local msg = MahProtocol.msgBianPai:new()
    msg.nSeat = NG.GAME.roomTableData:getSelfSeat()
    msg.nValueBefore = value
    msg.nCnt = cnt
    self:sendStreamPacket(msg)
end

function MsgManager:sendRecordReq()
    local msgSpecfReq = MahProtocol.msgRecordData:new()
    msgSpecfReq.nSeat = NG.GAME.roomTableData:getSelfSeat()
    self:sendStreamPacket(msgSpecfReq)
end


function MsgManager:sendMsgTrust(isTrust)
    local msgTrust = MahProtocol.msgTrust:new()
    msgTrust.nSeat = NG.GAME.roomTableData:getSelfSeat()
    msgTrust.nFlag = isTrust and 1 or 0
    msgTrust.XY_ID = MahProtocol.msgTrust.cmdid
    self:sendStreamPacket(msgTrust)
end

function MsgManager:sendMsgBankrupState(state)
    local msg = MahProtocol.msgBankRuptcyState:new()
    msg.nSeat = NG.GAME.roomTableData:getSelfSeat()
    msg.nState = state
    self:sendStreamPacket(msg)
end

function MsgManager:msgBianMahClear(nValue, nCnt)
    local msg = MahProtocol.msgBianMahClear:new()
    msg.nSeat = NG.GAME.roomTableData:getSelfSeat()
    msg.nValue = nValue
    msg.nCnt = nCnt
    self:sendStreamPacket(msg)
end

-- 主动请求解散
function MsgManager:sendSoRequestDismiss()
    local msgRequestDismiss = NG.GameMProtocol.ReqPlayerDismiss:new() -- MahProtocol.msgRequestDismiss:new()
    
    msgRequestDismiss.seat = NG.GAME.roomTableData:getSelfSeat()
    msgRequestDismiss.reqSeat = NG.GAME.roomTableData:getSelfSeat()
    msgRequestDismiss.nTime = 1
    msgRequestDismiss.m_type = 0
    self:sendStreamPacket(msgRequestDismiss)


    XH.roomManager:reqLeaveRoom(7629, 5008)
end
return MsgManager
