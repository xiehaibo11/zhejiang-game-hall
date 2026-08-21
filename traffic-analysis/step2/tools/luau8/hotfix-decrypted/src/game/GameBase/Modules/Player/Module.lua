local PlayerModule = CF.gameClass("PlayerModule", CF.ModuleBase)
local SxVipConfig = require('lobby.Modules.Sxvip.Config')

PlayerModule.EVENT_READY_STATE_CHANGED = "EVENT_READY_STATE_CHANGED"
PlayerModule.EVENT_PLAYER_ENTER = "EVENT_PLAYER_ENTER"         -- 玩家进入房间
PlayerModule.EVENT_PLAYER_LEAVE = "EVENT_PLAYER_LEAVE"         -- 玩家退出房间
PlayerModule.EVENT_SHOW_THROW_PROP_ANI = "EVENT_SHOW_THROW_PROP_ANI"
PlayerModule.EVENT_SHOW_THROW_PROP_ANI_NEW = "EVENT_SHOW_THROW_PROP_ANI_NEW"
PlayerModule.EVENT_UPDATE_GPS_UI = "EVENT_UPDATE_GPS_UI"
PlayerModule.EVENT_UPDATE_SIGNAL_UI = "EVENT_UPDATE_SIGNAL_UI"
PlayerModule.EVENT_HIDE_GUIDE_PROP = "EVENT_HIDE_GUIDE_PROP"
PlayerModule.EVENT_INIT_READY_FLAG_UI = "EVENT_INIT_READY_FLAG_UI"
PlayerModule.EVENT_YAZI_INFO_BACK = "EVENT_YAZI_INFO_BACK"
PlayerModule.EVENT_PLAYER_READY = "EVENT_PLAYER_READY"

function PlayerModule:ctor()
    PlayerModule.super.ctor(self)
    self:initWireBreakCheckScheduler()
end

function PlayerModule:initWireBreakCheckScheduler()
    self._wireBreakCheckListener = cc.Director:getInstance():getScheduler():scheduleScriptFunc( function()
        self:checkPlayerLinkState()
    end , 1.0, false)
end

function PlayerModule:removeWireBreakCheckScheduler()
    if not self._wireBreakCheckListener then
        return
    end
    cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._wireBreakCheckListener)
end

function PlayerModule:onDestroy()
    PlayerModule.super.onDestroy(self)
    self:removeWireBreakCheckScheduler()
end

function PlayerModule:getSubXYDealList()
    return {
        {callback = handler(self,self.onMsgPlayerData),msgClass = CF.LogicBaseProtocol.msgPlayerData},
        {callback = handler(self,self.onMsgPlayerDataEx),msgClass = CF.LogicBaseProtocol.msgPlayerDataEx},
        {callback = handler(self,self.onMsgPlayerEnter),msgClass = CF.LogicBaseProtocol.msgPlayerEnter},
        {callback = handler(self,self.onMsgPlayerLeave),msgClass = CF.LogicBaseProtocol.msgPlayerLeave},
        {callback = handler(self, self.onMsgPlayerStart), msgClass = CF.LogicBaseProtocol.msgPlayerStart },
        {callback = handler(self,self.onMsgClientForwardBase),msgClass = CF.GameProtocol.msgBaseClientForwardEx},
        {callback = handler(self,self.onMsgClientForward),msgClass = CF.GameProtocol.msgClientForward},
        {callback = handler(self,self.onMsgAvatarUrl),msgClass = CF.GameProtocol.msgAvatarUrl},
    }
end

function PlayerModule:getProxyEvents()
    return {
        {module = CF.netEngine, eventName = CF.PyrrlaProtobuf.PlayerReadyNotify.event_key, callBack = "onPlayerReadyNotify"},
    }
end

function PlayerModule:onMsgClientForwardBase(msgData)
    if msgData.sID == CF.GameProtocol.msgBaseClientForwardEx.CF_ID.AMap then
        self:onMsgClientForwardAMap(msgData)
    elseif msgData.sID == CF.GameProtocol.msgBaseClientForwardEx.CF_ID.WireBreak_Signal then
        self:onMsgClientForwardWireBreakSignal(msgData)
    elseif msgData.sID == CF.GameProtocol.msgBaseClientForwardEx.CF_ID.Mobile_Signal then
        self:onMsgClientForwardMobileSignalMsg(msgData)
    elseif msgData.sID == CF.GameProtocol.msgBaseClientForwardEx.CF_ID.PropAni then
       self:onMsgClientForwardPropAni(msgData)
    elseif msgData.sID == CF.GameProtocol.msgBaseClientForwardEx.CF_ID.HeadUrl then
        self:onMsgClientForwardAvatarUrl(msgData)
    elseif msgData.sID == CF.GameDefine.QING_SHEN_BROADCAST_ID then
        self:onMsgClientForwardQingShen(msgData)
    end
end

function PlayerModule:onMsgClientForwardQingShen(msgData)
    if not msgData or not XH.lobby then
        return
    end
    local qingShen = XH.lobby:getModule("QingShen")
    if qingShen and qingShen.onQingShenTableBroadcast then
        qingShen:onQingShenTableBroadcast(msgData.strData)
    end
end

function PlayerModule:onMsgClientForward(msgData)
    if msgData.sID == CF.GameProtocol.msgClientForward.CF_ID.WireBreakSignal then
        self:onMsgClientForwardWireBreakSignal(msgData)
    elseif msgData.sID == CF.GameProtocol.msgClientForward.CF_ID.MobileSignal then
        self:onMsgClientForwardMobileSignalMsg(msgData)
    elseif msgData.sID == CF.GameProtocol.msgClientForward.CF_ID.PropAni then
        self:onMsgClientForwardPropAni(msgData)
    end
end

function PlayerModule:onMsgPlayerData(msgData)
    local msgPlayerData = msgData
    local playerData = CF.gameRequire("Data.PlayerData").new()
    playerData:initFromServerData(msgPlayerData)
    CF.roomData:addPlayerData(playerData)
    if CF.selfPlayerData:getBrandID() == playerData:getBrandID() 
        and CF.selfPlayerData:getNumberID() == playerData:getNumberID() then
        if CF.roomData:isGoldRoom() and CF.selfPlayerData:getSR() ~= playerData:getPlayTypeScore() then 
            CF.getLobbyModule("Guide"):flushGoldCoin()
        end 
        CF.msgManager:setSelfSeat(playerData:getSeat())
        -- 获取财运信息
        CF.game:getModule("CaiYunPropNew"):initCaiYunInfo(true)
    end
    CF.game:getModule("CaiYunProp"):reloadGetPropsCount({playerData:getNumberID()})
end

-- 新玩家进入协议
function PlayerModule:onMsgPlayerEnter(msgData)
    local msgPlayerEnter = msgData
    local playerData = CF.roomData:getPlayerDataByBrandIDAndNumberID(msgPlayerEnter.nBrandID,msgPlayerEnter.nNumberID)
    if not playerData then
        return
    end

    if playerData:isSeeing() then
        return
    end

    if playerData:getSeat() == CF.roomData:getSelfSeat() then
        CF.msgManager:sendSelfHeadUrl()
        if CF.getLobbyModule("Sxvip"):getPowerExit(SxVipConfig.SXVIP_POWER.NETWORK_FIRST) and 
            not CF.getLobbyModule("Sxvip"):isExpire() and not CF.roomData:isPlayBack() and 
            not CF.roomData:getIsSeer() then
            CF.TipTool.showToast("已为您开启会员网络专线，游戏更稳定！", 3)
        end
        -- CF.game:getModule("PropUse"):reqShufflePropInfo()
        -- CF.game:getModule("PropUse"):reqPreShuffle(CF.GameDefine.PRE_SHUFFLE_OPT.OPTS_TYPE_GET)
    else
        playerData:setPlayerHeartTime(socket.gettime())
    end

    if playerData:getSeat() == CF.roomData:getSelfSeat() and not CF.roomData:isGoldRoom() then
        CF.sdkManager:startLocationByAmap(CF.sdkManager.AmapAccuracy.LOW)
    end

    self:onAutoReadyEnter(playerData)

    self:dispatchEvent( { name = self.EVENT_PLAYER_ENTER , msg = {numid = playerData:getNumberID()}})
    if CF.roomData and not CF.roomData:getIsSeer() then
        CF.getLobbyModule("Im"):reqTargetFriend(msgPlayerEnter.nNumberID)
    end
end

-- 玩家离开协议
function PlayerModule:onMsgPlayerLeave(msgData)
    local playerData = CF.roomData:getPlayerDataByBrandIDAndNumberID(msgData.nBrandID, msgData.nNumberID)
    if not playerData then
        return
    end

    if playerData:isSeeing() then
        return
    end

    local seatId = playerData:getSeat()
    if seatId == CF.roomData:getSelfSeat() then
        CF.roomData:clearAllPlayerData(true)
    else
        CF.roomData:removePlayerData(seatId)
        self:dispatchEvent( { name = self.EVENT_PLAYER_LEAVE , msg = {playerData = playerData}})
    end
end

-- 玩家开始协议
function PlayerModule:onMsgPlayerStart(msgData)
    local playerData = CF.roomData:getPlayerDataByBrandIDAndNumberID(msgData.nBrandID,msgData.nNumberID)
    if playerData then  
        CF.roomData:onPlayerStart(playerData:getSeat())
    end
end

function PlayerModule:onAutoReadyEnter(playerData)
    --测试代码CF.game:getModule("ChangeLevel"):show()
    if playerData:getSeat() == CF.roomData:getSelfSeat() and CF.roomData:isGoldRoom() then
        self:sendGameStart()
    end
end

function PlayerModule:sendGameStart()
    CF.msgManager:sendGameStart()
end

function PlayerModule:onMsgPlayerDataEx(msgData)
    CF.roomData:setPlayerState(msgData.nBrandID, msgData.nNumberID, msgData.nPlayState)
end

function PlayerModule:onPlayerReadyNotify(event)
    local msgData = CF.Protobuf.protobufToMsg(CF.PyrrlaProtobuf.PlayerReadyNotify,event.msg.buff)
    --测试代码
    -- local msgData = {
    --     chair_id = 0,
    --     ready_state = "NOT_READY",
    -- }
    local isReady = msgData.ready_state == "READY"
    self:dispatchEvent({name = self.EVENT_PLAYER_READY, msg = {seatId = msgData.chair_id, isReady = isReady}})
end

--离线检测
local maxWireBreakKeepTime = 10
function PlayerModule:checkPlayerLinkState()
    local curTime = socket.gettime()
    for seat = 0, CF.roomData:getMaxPlayer() do
        local playerData = CF.roomData:getPlayerDataBySeatId(seat)
        if playerData and playerData:getNumberID() ~= CF.selfPlayerData:getNumberID() then
            local diffTime = curTime - playerData:getPlayerHeartTime()
            local isWireBreak = diffTime > maxWireBreakKeepTime
            if CF.roomData:getIsSeer() then
                isWireBreak = false
            end
            playerData:setIsWireBreak(isWireBreak)
        end
    end
end

function PlayerModule:onMsgClientForwardAMap(msgData)
    local gpsInfo = CF.StringTool.getTableByString(msgData.strData,";","=")
    local addressInfo = "获取中..."
    if gpsInfo["address"] ~= nil and gpsInfo["address"] ~= "" then
        addressInfo = gpsInfo["address"]
    end
    local totalLen =  CF.StringTool.subStringGetTotalIndex(addressInfo)
    local nLimitWidth = 40
    if totalLen > nLimitWidth then
        addressInfo = CF.StringTool.subStringUTF8(addressInfo, 1, nLimitWidth)
        addressInfo = addressInfo .."..."
    end

    local mapInfoDataTable = {}
    mapInfoDataTable["address"] = addressInfo
    mapInfoDataTable["latitude"] = tonumber(gpsInfo["latitude"] or -1)
    mapInfoDataTable["longitude"] = tonumber(gpsInfo["longitude"] or -1)

    CF.roomData:setGpsInfoDataBySeat(msgData.sSeat, mapInfoDataTable)
    self:dispatchEvent( { name = self.EVENT_UPDATE_GPS_UI, msg = {seat = msgData.sSeat}})
end

function PlayerModule:onMsgClientForwardWireBreakSignal(msgData)
    if msgData.sSeat ~= CF.roomData:getSelfSeat() then
        CF.roomData:setPlayerHeartTime(msgData.sSeat, 0)
    end
end

function PlayerModule:onMsgClientForwardMobileSignalMsg(msgData)
    if msgData.sSeat == CF.roomData:getSelfSeat() then
        local delayTime = socket.gettime() - CF.roomData:getSignalMsgTime()
        CF.roomData:setSignalMsgTime(0)
        self:dispatchEvent( { name = self.EVENT_UPDATE_SIGNAL_UI , msg = {delayTime = delayTime}})
    else
        CF.roomData:setPlayerHeartTime(msgData.sSeat, socket.gettime())
    end
end

function PlayerModule:onMsgAvatarUrl(msgData)
    local player = CF.roomData:getPlayerDataBySeatId(msgData.seat)
    if player then
        -- 头像url地址更新
        player:updataAvatarUrl(msgData.avatarUrl)
    end  
end

function PlayerModule:onMsgClientForwardAvatarUrl(msgData)
    if not msgData.strData or msgData.strData == "" then
        return
    end
    local player = CF.roomData:getPlayerDataBySeatId(msgData.sSeat)
    if player then
        -- 头像url地址更新
        player:updataAvatarUrl(msgData.strData)
    end
end

function PlayerModule:onMsgClientForwardPropAni(data)
    local backTable = CF.StringTool.getTableByString(data.strData,";","=")
    local fromLocalSeat = CF.roomData:seatToLocal(data.sSeat)
    local toLocalSeat =  CF.roomData:seatToLocal(tonumber(backTable["toSeat"]))
    local propIndex = tonumber(backTable["propIndex"])
    local propCnt = tonumber(backTable["propCnt"]) or 1
    local isMass = backTable["isMassSend"]
    if CF.roomData:judgeSupportThrowProp() then
        if propIndex > 90 and fromLocalSeat ~= 2 then
            -- 不给别人看自己的动画
            return
        end
        self:showPropAni(fromLocalSeat,toLocalSeat,propIndex,propCnt,isMass)
    end
end

--播放丢道具动画
function PlayerModule:showPropAni(fromLocalSeat,toLocalSeat,faceAniIndex,propCnt,isMass)
    self:dispatchEvent({ name = self.EVENT_SHOW_THROW_PROP_ANI, msg = { fromLocalSeat = fromLocalSeat; toLocalSeat = toLocalSeat; faceAniIndex = faceAniIndex; propCnt = propCnt; isMass = isMass} })
end

function PlayerModule:initReadyFlagUI()
    self:dispatchEvent( { name = self.EVENT_INIT_READY_FLAG_UI })
end

function PlayerModule:showThrowPropAni(event)
    self:dispatchEvent( { name = self.EVENT_SHOW_THROW_PROP_ANI_NEW, msg = event.msg })
end

return PlayerModuleK1