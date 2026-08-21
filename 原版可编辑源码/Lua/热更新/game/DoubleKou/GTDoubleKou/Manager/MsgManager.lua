local MsgManager = CF.gameClass("MsgManager", "game.DoubleKou.BaseDoubleKou.Manager.MsgManager")
function MsgManager:sendStreamPacket(msgObj, bNotFilter)
    local pID = CF.GameProtocolGT.ClientToServerMessage.processid
    if CF.roomData and CF.roomData:is50() then
        pID = CF.GameMProtocol.ClientToServerMessage.processid
    end
    CF.netEngine.sendStreamPacket(msgObj, nil, pID)
end

-- 发送请求使用道具
function MsgManager:sendRequestUseProps(propId, propNum, nType, param)
    if CF.roomData and CF.roomData:is50() then
        MsgManager.super.sendRequestUseProps(self, propId, propNum, nType, param)
        return
    end
    local ReqUseProps = require("lobby.Req.BagSysNew.ReqUseProps")
    local reqUseProps = ReqUseProps:new()
    reqUseProps:addReqCallBack(self, self.onReqUsePropsWithOutTipCallBack)
    reqUseProps:start(CF.getLobbyModule("BagSysNew"):getProposalAppid(), propId, propNum, XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function MsgManager:onReqUsePropsWithOutTipCallBack(cell, ctype, data)
    if ctype == XH.Req.TYPE.SUCCESS then
        CF.msgManager:sendRequestPlayerProps()
    else
        data = data or {}
        local tipstr = XH.BagSysProtocol.ERRORSTR[data.errorcode] or "失败!"
        tipstr = tipstr .. ",code:" .. (data.errorcode or "")
        XH.TipTool.showToast(tipstr)
    end
end

-- 发送请求使用道具 游戏区洗牌金币消耗
function MsgManager:reqCharge(propNum)
    if CF.roomData and CF.roomData:is50() then
        MsgManager.super.reqCharge(self, propNum)
        return
    end
    CF.reqTransferProps("taskname=shuffle;shuffle=1;logtype=1601;", {
        price = propNum,
        propID = 101473, -- 50金币ID
    }, nil, self, function(_target, req, type, data)
        if not CF or not CF.msgManager or not CF.game then
            return
        end
        CF.msgManager:sendFlushGameSR()
        if data and data.nXYData and data.nXYData.resp and data.nXYData.resp.err_code == 0 then
            CF.game:getModule("PropUse"):onRespChargeSuccess()
        elseif data and data.nXYData and data.nXYData.resp and data.nXYData.resp.err_code then
            CF.game:getModule("PropUse"):onRespChargeFail(data.nXYData.resp.err_code)
        end
    end)
end

function MsgManager:sendPlayerAct(action, roomMode)
    -- 请求之前先判断是否符合当前场次最小金币数量,并选择符合的场次匹配
    if action == CF.GameDefine.ENUM_PLAYER_ACT.CHANGESEAT then
        if CF.roomData:is220Model() then
            local canChange, bLow = CF.goldManager:canChangeRoomLevel()
            -- 需要转场
            if canChange then
                CF.goldManager:setChangeLevelType(CF.goldManager.ENUM_CHANGE_TYPE.SIMPLE)
                self:reJoinGoldRoom()
                return
            else
                CF.msgManager:sendFlushGameSR()
            end
        end
        local ReqPlayerAct = require("lobby.Req.Room.ReqPlayerAct")
        local reqPlayerAct = ReqPlayerAct:new()
        reqPlayerAct:start(CF.roomData:getAppID(), CF.roomData:getSRSGroupID(), 10, CF.GameDefine.ENUM_PLAYER_ACT.CHANGETOSTART, -1)
        return
    end
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

function MsgManager:sendGameStart()
    self:sendClientVersion()
    local msgPlayerStart = CF.LogicBaseProtocol.msgPlayerStart:new()
    local playerData = CF.roomData:getSelfPlayerData()
    if not playerData and CF.goldManager:isRejoinType() then
        CF.goldManager:setChangeType(CF.goldManager.ENUM_CHANGE_TYPE.REJOIN)
        self:reJoinGoldRoom()
        return
    end
    if not playerData then
        return
    end

    msgPlayerStart.nBrandID = playerData:getBrandID()
    msgPlayerStart.nNumberID = playerData:getNumberID()
    self:sendStreamPacket(msgPlayerStart)
end

function MsgManager:sendClientVersion()
    local msgClientVersion = CF.GameProtocol.msgClientVersion:new()
    msgClientVersion.bEnableEightKing = true
    self:sendStreamPacket(msgClientVersion)
end

function MsgManager:reJoinGoldRoom()
    CF.msgManager:sendFlushGameSR()
    local ReqLeaveRoomGT = require("lobby.Req.Room.ReqLeaveRoomGT")
    local reqLeaveRoomGold = ReqLeaveRoomGT:new()
    reqLeaveRoomGold:start(CF.roomData:getAppID(), CF.roomData:getSRSGroupID(), 10)
end

function MsgManager:sendQiaoPiHua(data)
    if CF.roomData:getIsSeer() then
        return
    end
    local tmpData = string.split(data, "/")
    if not tmpData[1] then
        return
    end
    local index = tonumber(tmpData[1])
    if index >= 300 then
        local msgClientForwardEx = CF.GameProtocol.msgBaseClientForwardEx:new()
        msgClientForwardEx.sSeat = self._selfSeat
        msgClientForwardEx.sID = CF.GameProtocol.msgBaseClientForwardEx.CF_ID.QiaoPiHua
        msgClientForwardEx.strData = data
        self:sendStreamPacket(msgClientForwardEx)
    else
        local msgClientForwardEx = CF.GameProtocol.msgQiaoPiHua:new()
        msgClientForwardEx.sSeat = self._selfSeat
        msgClientForwardEx.sIndex = index
        self:sendStreamPacket(msgClientForwardEx)
    end
end

function MsgManager:sendPropAni(strdata)
    CF.msgManager:sendRequestPlayerProps()
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

function MsgManager:sendReqVipKickUser(areaid, numid)
    if CF.roomData:is50() then 
        MsgManager.super.sendReqVipKickUser(self,areaid,numid)
    else 
        local msg = CF.GameProtocolGT.ReqVipKickUser:new()
        msg.areaid = areaid
        msg.numid = numid
        self:sendGameProtocol(msg)
        local m = XH.lobby:getModule("Sxvip.ThrowData")
        m:setKickUser(XH.playerData:getNumberID())
    end
    
end

function MsgManager:sendAddMultiple(addMultipleType)
    local msgAddMultiple = CF.GameProtocol.msgIncDoubling:new()
    msgAddMultiple.seat = self._selfSeat
    msgAddMultiple.increament = addMultipleType - 1 --千变的加倍协议和框架的加倍协议差1
    self:sendStreamPacket(msgAddMultiple)
end

return MsgManager