local RoomData = CF.gameClass("RoomData", CF.ModuleBase)

RoomData.EVENT_GAME_PLAYCOUNT_CHANGED = "EVENT_GAME_PLAYCOUNT_CHANGED"
RoomData.EVENT_HOST_CHANGED = "EVENT_HOST_CHANGED"
RoomData.EVENT_PLAYERLIST_CHANGED = "EVENT_PLAYERLIST_CHANGED"
RoomData.EVENT_PLAYER_STATE_CHANGED = "EVENT_PLAYER_STATE_CHANGED"
RoomData.EVENT_CLEAR_TABLE = "EVENT_CLEAR_TABLE"
RoomData.EVENT_GAMERULE_CHANGED = "EVENT_GAMERULE_CHANGED"
RoomData.EVENT_BASESCORE_CHANGED = "EVENT_BASESCORE_CHANGED"
RoomData.EVENT_GPSINFO_CHANGED = "EVENT_GPSINFO_CHANGED"
RoomData.EVENT_HEAD_FRAME_CHANGED = "EVENT_HEAD_FRAME_CHANGED"
RoomData.EVENT_USER_TITLE_CHANGED = "EVENT_USER_TITLE_CHANGED"
RoomData.EVENT_CARD_HOLDER_CHANGED = "EVENT_CARD_HOLDER_CHANGED"
RoomData.EVENT_MAH_BACK_CHANGED = "EVENT_MAH_BACK_CHANGED"
RoomData.EVENT_TABLE_BG_PROP_CHANGED = "EVENT_TABLE_BG_PROP_CHANGED"
RoomData.EVENT_ENTER_ANI_PROP_CHANGED = "EVENT_ENTER_ANI_PROP_CHANGED"
RoomData.EVENT_PLAYER_START = "EVENT_PLAYER_START"
RoomData.EVENT_GAMESTART_CHANGED = "EVENT_GAMESTART_CHANGED"
RoomData.EVENT_GAME_UPDATE_SEER = "EVENT_GAME_UPDATE_SEER"
RoomData.EVENT_SEER_SHOW_DISMISS = "EVENT_SEER_SHOW_DISMISS"
RoomData.EVENT_UPDATE_TING_FLAG_EX = "EVENT_UPDATE_TING_FLAG_EX"
-- RoomData.EVENT_UPDATE_SEER_MAHLAYER = "EVENT_UPDATE_SEER_MAHLAYER"

function RoomData:getReqConfig()
    return {
        ReqSystemTimes = { reqPath = "app.Req.Task.ReqTaskPercent", callBack = self.onRequestSysTime },
    }
end

function RoomData:ctor()
    RoomData.super.ctor(self)

    self._playCount = 0
    self._maxPlayCount = 0
    self._baseScore = 0
    self._hostSeatId = -1
    self._gameRule = ""
    self._canContinue = false
    self._signalMsgTime = 0
    self._playBackSelfSeat = 0
    self._isGameStart = false
    self._bMatch = false
    self._bShuffle = { }
    self._bShuffling = false
    self._bIsFreeCut = false -- 是否免费切牌
    self._isSeeing = false -- 是否旁观
    self._isDismiss = false -- 用于旁观玩家知道该局是否解散结束
    self._watchSeat = 0
    self._isFastPlay = false -- 回放用
    self._isRestart = false -- 回放用
    self._isDelayWatch = false
    self._is50 = false
    self._autoContinueTime = 0
    self._curGameRule = ""  -- 服务下发的房间规则
    self._tingFlags = {}
    self:initRoomData()
end

function RoomData:initRoomData(data)
    data = data or {}
    if data.chaircnt then
        self._initTableData = true
    end
    self._appID = data.appID or 0
    self._gameID = data.gameID or 0
    self._roomMode = data.roomMode or 0
    self._roomID = data.roomID or 0
    self._srsGroupID = data.srsGroupID or CF.areaData:getSrsGroupID()
    self._oSceneObj = data.oSceneObj
    self._strRecordPath = data.strRecordPath or ""
    self._leaveGameFunc = data.leaveGameFunc
    self._roomFlag = data.roomflag
    self._is50 = data.is50 or false 
    if self._roomFlag == nil or self._roomFlag == 0 then 
        self._roomFlag = cc.UserDefault:getInstance():getIntegerForKey("_KW_DATA_LAST_JOIN_GOLD_LEVEL_" .. CF.areaData:getLobbyID())
    end
    self._chaircnt = data.chaircnt
    if data.isWatch then
        self:initWatchData(data)
    end
    -- self._isSeeing = data.isWatch

    ----------------------------- 用于金币场 ---------------------------------------
    -- 是否是重连金币场,游戏已开始
    self._reconnect = data.reconnect or false
    -- 游戏模式：旧金币场=4,新匹配机制金币场=200,包厢=10,新金币场匹配队列201
    self._sRoomMode = data.sRoomMode or -1
    -- 金币场connect GP使用的appid
    self._nMatchAppid = data.nMatchAppid

    self._playerDataList = {}
    self._isDoContinue = false --是否在进行续桌
    self._isSelfAgreeContinue = false --自己是否同意
    self._continueTimeStamp = 0 --接收到续桌消息时的时间戳
    self._continueLeftTime = 0 --接收到续桌消息时剩余倒计时时间
    self._continueTableID = 0 --续桌的桌号
    self._isGPContinue = false --是否是GP续桌
    self._continueTipType = 0 -- 0 不提示  1 离开人数过多 2 房卡不足
    self._headFrameData = {} --头像框
    self._isGameOver = false
    self._roomFee = 0
    self._payType = 0
    self._dismissType = 0 -- 0 == so解散     1 == gp解散(默认是so解散)
    if self._gameID ~= 0 then
        self:reqCutCardsState(2)
    end
    self._isDismiss = false
    self._watchSeat = 0
    if self._is50 and (not self._chairs or self._chairs == 0) then
        self._chairs = self._chaircnt
    end
end

function RoomData:setRoomData(data)
    self._initTableData = true
    self._appID = data.appID or 0
    self._gameID = data.gameID or 0
    self._roomMode = data.roomMode or 0
    self._roomID = data.roomID or 0
    self._srsGroupID = data.srsGroupID or CF.areaData:getSrsGroupID()
    self._roomFlag = data.roomflag or cc.UserDefault:getInstance():getIntegerForKey("_KW_DATA_LAST_JOIN_GOLD_LEVEL_" .. CF.areaData:getLobbyID())
    self._chaircnt = data.chaircnt
    -- 游戏模式：旧金币场=4,新匹配机制金币场=200,包厢=10,新金币场匹配队列201
    self._sRoomMode = data.sRoomMode or -1
    if self._is50 then
        self:dispatchEvent({ name = self.EVENT_GAMERULE_CHANGED })
    end
end

function RoomData:initTableData(tableDataMsg)
    self._initTableData = true
    self._chairs = tableDataMsg.m_Chairs
    -- self._gameRule = tableDataMsg.m_GameRule
    self._haveOwner = tableDataMsg.m_HaveOwner
    self._havePWD = tableDataMsg.m_HavePWD
    self._joinRule = tableDataMsg.m_JoinRule
    self._ownerBrandID = tableDataMsg.m_OwnerBrandID
    self._ownerNumberID = tableDataMsg.m_OwnerNumberID
    self._seeRule = tableDataMsg.m_SeeRule
    self._state = tableDataMsg.m_State
    self._tableID = tableDataMsg.m_TableID
    self._tableStyle = tableDataMsg.m_TableStyle
end

function RoomData:isInitTaleData()
    return self._initTableData
end

function RoomData:onDestroy()
    RoomData.super.onDestroy(self)
    self:clearAllPlayerData()
end

function RoomData:isReconnect()
    return self._reconnect or false
end

function RoomData:isBoxRoom()
    return self:getRoomMode() == CF.ROOM_MODE.BOXROOM
end

function RoomData:isNewGoldRoom()
    return self:getRoomMode2() == CF.ROOM_TYPE.NEW_GOLD_ROOM or self:getRoomMode2() == CF.ROOM_TYPE.DISPATCH_QUEUE
end

function RoomData:isGoldRoom()
    return self:getRoomMode() == CF.ROOM_MODE.MOBILE
end

function RoomData:is50()
    return self._is50
end

function RoomData:setIs50(is50)
    self._is50 = is50
end

function RoomData:is220Model()
    return CF.roomData:getRoomMode2() == CF.ROOM_TYPE.GOLD_ROOM_BW
end

-- 双扣类型房间
function RoomData:isDKGoldRoom()
    if not CF.roomData:isGoldRoom() then
        return false
    end
    if CF.getLobbyModule("YGiftBankruptcy") and CF.getLobbyModule("YGiftBankruptcy").isNewModeGold and CF.getLobbyModule("YGiftBankruptcy"):isNewModeGold(CF.roomData:getGameID()) then
        return true
    end
    return false
end

-- 双扣类型房间
function RoomData:isBianChaDKGoldRoom()
    if not CF.roomData:isGoldRoom() then
        return false
    end
    return CF.roomData:getGameID() == 42038
end

function RoomData:getRoomMode2()
    return self._sRoomMode
end

function RoomData:getMatchAppid()
    return self._nMatchAppid
end

function RoomData:getRoomMode()
    return self._roomMode
end

function RoomData:getAppID()
    return self._appID
end

function RoomData:getGameID()
    return self._gameID
end

function RoomData:getRoomID()
    return self._roomID
end

function RoomData:getRoomLevel()
    return self._roomFlag
end

function RoomData:setRoomLevel(roomLevel)
    self._roomFlag = roomLevel
end

function RoomData:getTableState()
    return self._state
end

function RoomData:getSRSGroupID()
    return self._srsGroupID
end

function RoomData:setPlayCount(count)
    self._playCount = count
    self:dispatchEvent({name = self.EVENT_GAME_PLAYCOUNT_CHANGED, msg = {playCount = self._playCount, maxPlayCount = self._maxPlayCount}})
end

function RoomData:getPlayCount()
    return self._playCount
end

function RoomData:setMaxPlayCount(count)
    self._maxPlayCount = count
    self:dispatchEvent({name = self.EVENT_GAME_PLAYCOUNT_CHANGED, msg = {playCount = self._playCount, maxPlayCount = self._maxPlayCount}})
end

function RoomData:getMaxPlayCount()
    return self._maxPlayCount
end

function RoomData:isPlayBack()
    return self._strRecordPath and self._strRecordPath ~= ""
end

function RoomData:getRecordPath()
    return self._strRecordPath
end

function RoomData:getWatchPath()
    return self._watchRecordPath
end

function RoomData:setWatchPath(path)
    self._watchRecordPath = path or ''
end

function RoomData:setPlayerHeartTime(seatID, time)
    local player = self:getPlayerDataBySeatId(seatID)
    if not player then
        return
    end
    player:setPlayerHeartTime(time)
end

function RoomData:clearPlayerHeartTime()
    for _, player in pairs(self._playerDataList) do
        player:setPlayerHeartTime(0)
    end
end

function RoomData:clearAllPlayerData(bDispatch)
    for _, playerData in pairs(self._playerDataList) do
        playerData:onDestroy()
    end
    self._playerDataList = {}

    if bDispatch then
        self:dispatchEvent({name = self.EVENT_PLAYERLIST_CHANGED})
    end
end

function RoomData:addPlayerData(playerData)
    if not playerData then
        return
    end
    local remove = true
    if playerData:isSeeing() then
        if playerData:getNumberID() == XH.playerData:getNumberID() then
            self:setIsSeer(true)
        end
        return
    end
    for index, player in pairs(self._playerDataList) do
        if player:getBrandID() == playerData:getBrandID() and player:getNumberID() == playerData:getNumberID() then
            playerData:cloneDataEx(player)
            remove = false
            table.remove(self._playerDataList, index)
            break
        end
    end
    if self:isPlayBack() then
        remove = true
    end
    self._playerDataList[#self._playerDataList + 1] = playerData
    self:dispatchEvent({ name = self.EVENT_PLAYERLIST_CHANGED, msg = { seatId = playerData:getSeat(), remove = remove } })
end

function RoomData:removePlayerData(seatID)
    if not seatID then
        return
    end

    for index, playerData in pairs(self._playerDataList) do
        if playerData:getSeat() == seatID then
            playerData:onDestroy()
            table.remove(self._playerDataList, index)
            break
        end
    end
    self:dispatchEvent({name = self.EVENT_PLAYERLIST_CHANGED, msg = {seatId = seatID}})
end

function RoomData:getChairs()
    -- 旁观玩家提前开局的情况下，不会重新设置chairs的值
    local gameID = self:getGameID()
    if self:getIsSeer() and self._chairs and self:getCurPlayerCount() > 0 and self._chairs ~= self:getCurPlayerCount() and CF.gameSub:isMahjong(gameID) then
        return self:getCurPlayerCount()
    end
    return self._chairs or self:getMaxPlayer()
end

function RoomData:getSelfLocalSeat()
    return 2
end

function RoomData:seatToLocal(seat)
    local localSeat = -1
    local chairCount = self:getChairs()
    if seat >= 0 and seat <= chairCount - 1 then
        localSeat = ((seat - self:getSelfSeat() + chairCount) % chairCount + 1) % chairCount + self:getSelfLocalSeat() - 1
        if chairCount == 2 and localSeat == CF.GameDefine.LOCAL_SEAT.LEFT then
            localSeat = CF.GameDefine.LOCAL_SEAT.TOP
        end
    end
    return localSeat
end

function RoomData:localToSeat(localSeat)
    local seat = -1
    local chairCount = self:getChairs()
    if localSeat >= 0 and (localSeat <= chairCount or chairCount == 2) then
        if chairCount == 2 then
            if localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
                localSeat = CF.GameDefine.LOCAL_SEAT.LEFT
            end
        end
        seat = ((localSeat - self:getSelfLocalSeat() + chairCount) % chairCount + self:getSelfSeat()) % chairCount
    end
    return seat
end

function RoomData:getPlayerDataByNumberID(numberID)
    for _, playerData in pairs(self._playerDataList) do
        if playerData:getNumberID() == numberID then
            return playerData
        end
    end
    return nil
end

function RoomData:getPlayerDataByBrandIDAndNumberID(brandID, numberID)
    for _, playerData in pairs(self._playerDataList) do
        if brandID == playerData:getBrandID() and numberID == playerData:getNumberID() then
            return playerData
        end
    end
    return nil
end

function RoomData:getPlayerDataBySeatId(seatID)
    for _, playerData in pairs(self._playerDataList) do
        if playerData:getSeat() == seatID then
            return playerData
        end
    end
end

function RoomData:getPlayerDataNumberID(nNumberID)
    local playerData = nil
    for _, v in pairs(self._playerDataList) do
        if v:getNumberID() == nNumberID then
            playerData = v
            break
        end
    end
    return playerData
end

function RoomData:getPlayerDatas()
    return self._playerDataList
end

function RoomData:getCurPlayerCount()
    return table.nums(self._playerDataList)
end

function RoomData:setPlayBackSelfSeat(playBackSelfSeat)
    self._playBackSelfSeat = playBackSelfSeat
end

function RoomData:getPlayBackSelfSeat()
    return self._playBackSelfSeat
end

function RoomData:getSelfPlayerData()
    if self:isPlayBack() then
        return self:getPlayerDataBySeatId(self._playBackSelfSeat)
    end
    return self:getPlayerDataByBrandIDAndNumberID(CF.selfPlayerData:getBrandID(), CF.selfPlayerData:getNumberID())
end

function RoomData:getSelfSeat()
    if self:getIsSeer() then
        return self._watchSeat
    end
    local playerData = self:getSelfPlayerData()
    if playerData == nil then
        return self:getMaxPlayer()
    end
    return playerData:getSeat()
end

function RoomData:setPlayerState(nBrandID, nNumberID, state)
    local playerData = self:getPlayerDataByBrandIDAndNumberID(nBrandID, nNumberID)
    if playerData then
        playerData:updatePlayerState(state)
        self:dispatchEvent({name = self.EVENT_PLAYER_STATE_CHANGED, msg = {seatId = playerData:getSeat()}})
    end
end

function RoomData:getMaxPlayer()
    return 4
end

function RoomData:getMinPlayer()
    return 2
end

--设置房主座位
function RoomData:setHostSeat(seatId)
    if not seatId then
        return
    end
    self._hostSeatId = seatId

    self:dispatchEvent({name = self.EVENT_HOST_CHANGED})
end

function RoomData:getHostSeat()
    return self._hostSeatId
end

function RoomData:isHost(seatId)
    return self._hostSeatId == seatId
end

function RoomData:isSelfHost()
    return self:isHost(self:getSelfSeat())
end

function RoomData:setGpsInfoDataBySeat(seatID, tData)
    local playerData = self:getPlayerDataBySeatId(seatID)
    if playerData == nil then
        return
    end
    playerData:setGpsInfo(tData)
    self:dispatchEvent({name = self.EVENT_GPSINFO_CHANGED, msg = {seat = seatID}})
end

function RoomData:getGpsInfoDataBySeat(seatID)
    local playerData = self:getPlayerDataBySeatId(seatID)
    if playerData == nil then
        return
    end
    return playerData:getGpsInfo()
end

function RoomData:isSupportGps()
    return true
end

function RoomData:isCanContinue()
    -- 旁观玩家无续桌
    if self:getIsSeer() then
        return false
    end
    return self._canContinue
end

function RoomData:setCanContinueBool(canContinue)
    self._canContinue = canContinue
end
function RoomData:isSupportNewContinue()
    return self._gameID == 30110 or self._gameID == 30588
end

function RoomData:clearTable()
    self:dispatchEvent({name = self.EVENT_CLEAR_TABLE})
end

-- 设置游戏规则
function RoomData:setGameRule(rule)
    if not rule then
        return
    end
    local playerCountText = self:getChairs() .. "人"
    if string.find(rule, playerCountText) == nil then
        rule = rule .. "/" ..playerCountText
    end    
    
    local strToDel1 = nil
    local strToDel2 = nil
    local strTable = string.split(rule,"/")
    for _, str in ipairs(strTable) do
        local index1 = string.find(str,"大")
        if index1 and (string.find(str,"支付") or string.find(str,"消耗")) and index1+8 <= string.len(str) then
            strToDel1 = string.sub(str, index1, index1+8)
        end
        local index2 = string.find(str,"费")
        if index2 and (string.find(str,"支付") or string.find(str,"消耗")) and index2-3 > 0 then
            strToDel2 = string.sub(str, index2-3, index2+2)
        end
    end
    if strToDel1 and strToDel1 ~= "" then
        rule = string.gsub(rule, strToDel1, "冠军")
    end
    if strToDel2 and strToDel2 ~= "" then
        rule = string.gsub(rule, strToDel2, "圈子卡")
    end
    if self:getAutoContinueTime() and self:getAutoContinueTime() > 0 then
        rule = rule .. "/自动继续"
    end
    self._gameRule = string.gsub(rule, "AA支付", "平摊支付")
    self._gameRule = string.gsub(rule, "费用均摊", "平摊支付")
    self._gameRule = XH.StringTool.replaceMatchStr(self._gameRule)
    self:flushExtRule()
    self:dispatchEvent({name = self.EVENT_GAMERULE_CHANGED})
end

function RoomData:getGameRule()
    return self._gameRule
end

function RoomData:setBaseScore(baseScore)
    self._baseScore = baseScore

    self:dispatchEvent({name = self.EVENT_BASESCORE_CHANGED})
end

function RoomData:getBaseScore()
    return self._baseScore
end

function RoomData:judgeSupportThrowProp()
    if self:isGoldRoom() then
        return true
    end
    return CF.areaData:judgeSupportThrowProp()
end

function RoomData:getSysTime(callBack)
    if not callBack then
        return
    end
    self._sysTimeCallBack = callBack
    self:startReq("ReqSystemTimes",  CF.selfPlayerData:getNumberID(),CF.TaskDefine.APPID, CF.TaskDefine.PROCESSID, CF.TaskDefine.KW_SYSTEM_TIME, CF.areaData:getSrsGroupID(), 10)
end

function RoomData:onRequestSysTime(cell, ntype, data)
    if ntype == CF.REQ_TYPE_SUCCESS then
        local timestamp = json.decode(data.acData).time
        if timestamp ~= nil then
            self._sysTimeCallBack(timestamp)
        end
    end
end

function RoomData:setSignalMsgTime(signalMsgTime)
    self._signalMsgTime = signalMsgTime
end

function RoomData:getSignalMsgTime()
    return self._signalMsgTime
end

function RoomData:getContinueTime()
    local curLeftTime = 0
    if self._continueLeftTime > 0 then
        local passTime = socket.gettime() - self._continueTimeStamp
        curLeftTime = math.floor(self._continueLeftTime - passTime)
    end
    return curLeftTime
end

function RoomData:setContinueTime(letTime)
    self._continueLeftTime = letTime or 0
    self._continueTimeStamp = socket.gettime()
end

function RoomData:setContinueTableID(tableID)
    self._continueTableID = tableID or 0
end

function RoomData:getContinueTableID()
    return self._continueTableID
end

function RoomData:setIsGPContinue(isGP)
    self._isGPContinue = isGP or false
end

function RoomData:getIsGPContinue()
    return self._isGPContinue
end

function RoomData:getIsDoContinue()
    -- 旁观玩家无续桌
    if self:getIsSeer() then
        return false
    end
    return self._isDoContinue
end

function RoomData:setIsDoContinue(isDoContinue)
    self._isDoContinue = isDoContinue or false
end

function RoomData:getIsSelfContinue()
    return self._isSelfAgreeContinue
end

function RoomData:setIsSelfContinue(isSelfAgreeContinue)
    self._isSelfAgreeContinue = isSelfAgreeContinue or false
end

function RoomData:getContinueTipType()
    return self._continueTipType
end

function RoomData:setContinueTipType(tipType)
    self._continueTipType = tipType or 0
end

function RoomData:setIsGameOver(isGameOver)
    self._isGameOver = isGameOver or false
    if self._isGameOver then
        self:dispatchEvent({name = self.EVENT_SEER_SHOW_DISMISS})
    end
end

function RoomData:updateTingFlagEx(seat, isShow)
    self:dispatchEvent({ name = self.EVENT_UPDATE_TING_FLAG_EX, msg = { isShow = isShow, seat = seat } })
end

function RoomData:getIsGameOver()
    return self._isGameOver
end

function RoomData:setRoomFee(roomFee)
    self._roomFee = roomFee or 0
end

function RoomData:getRoomFee()
    return self._roomFee
end

function RoomData:setPayType(payType)
    self._payType = payType or 0
end

function RoomData:getPayType()
    return self._payType
end

function RoomData:setHeadFrameData(numberID, data)
    local playerData = self:getPlayerDataNumberID(numberID)
    if playerData then
        playerData:setHeadFrameData(data)
        self:dispatchEvent({name = self.EVENT_HEAD_FRAME_CHANGED, msg = {numberID = numberID, data = data}})
    end
end

function RoomData:getHeadFrameData(numberID)
    local playerData = self:getPlayerDataNumberID(numberID)
    if playerData then
        return playerData:getHeadFrameData()
    end
    return nil
end

function RoomData:setUserTitleData(numberID, data)
    local playerData = self:getPlayerDataNumberID(numberID)
    if playerData then
        playerData:setUserTitleData(data)
        self:dispatchEvent({name = self.EVENT_USER_TITLE_CHANGED, msg = {numberID = numberID, data = data}})
    end
end

function RoomData:getUserTitleData(numberID)
    local playerData = self:getPlayerDataNumberID(numberID)
    if playerData then
        return playerData:getUserTitleData()
    end
    return nil
end

function RoomData:setCardHolderData(numberID, data)
    local playerData = self:getPlayerDataNumberID(numberID)
    if playerData then
        playerData:setCardHolderData(data)
        self:dispatchEvent({name = self.EVENT_CARD_HOLDER_CHANGED, msg = {numberID = numberID, data = data}})
    end
end

function RoomData:getSelfCardHolderData()
    local playerData = self:getSelfPlayerData()
    if playerData then
        return playerData:getCardHolderData()
    end
    return nil
end

function RoomData:getCardHolderData(numberID)
    local playerData = self:getPlayerDataNumberID(numberID)
    if playerData then
        return playerData:getCardHolderData()
    end
    return nil
end

function RoomData:setMahBackData(numberID, data)
    local playerData = self:getPlayerDataNumberID(numberID)
    if playerData then
        playerData:setMahBackData(data)
        self:dispatchEvent({name = self.EVENT_MAH_BACK_CHANGED, msg = {numberID = numberID, data = data}})
    end
end

function RoomData:getMahBackData(numberID)
    local playerData
    if numberID == nil then
        playerData = self:getSelfPlayerData()
    else
        playerData = self:getPlayerDataNumberID(numberID)
    end
    if playerData then
        return playerData:getMahBackData()
    end
    return nil
end

function RoomData:setTableBgData(numberID, data)
    local playerData = self:getPlayerDataNumberID(numberID)
    if playerData then
        playerData:setTableBgData(data)
        self:dispatchEvent({ name = self.EVENT_TABLE_BG_PROP_CHANGED, msg = {numberID = numberID, data = data}})
    end
end

function RoomData:getTableBgData(numberID)
    local playerData = self:getPlayerDataNumberID(numberID)
    if playerData then
        return playerData:getTableBgData()
    end
    return nil
end

function RoomData:getSelfTableBgData()
    local playerData = self:getSelfPlayerData()
    if playerData then
        return playerData:getTableBgData()
    end
    return nil
end

function RoomData:setEnterAniData(numberID, data)
    local playerData = self:getPlayerDataNumberID(numberID)
    if playerData then
        playerData:setEnterAniData(data)
        self:dispatchEvent({ name = self.EVENT_ENTER_ANI_PROP_CHANGED, msg = {numberID = numberID, data = data}})
    end
end

function RoomData:getEnterAniData(numberID)
    local playerData = self:getPlayerDataNumberID(numberID)
    if playerData then
        return playerData:getEnterAniData()
    end
    return nil
end

--每小局游戏需要更新的数据
function RoomData:initEveryTimesDatas()
    self._isSelfAgreeContinue = false
    self._continueTimeStamp = 0
    self._continueLeftTime = 0
    self._bMatch = false
    self._tingFlags = {}
end

function RoomData:clearTingFlag()
    self._tingFlags = {}
    self:updateTingFlagEx(nil, false)
end

function RoomData:setTingFlag(seat, isShow)
    self._tingFlags[seat] = isShow
    self:updateTingFlagEx(seat, isShow)
end

function RoomData:getTingFlag(seat)
    if self._tingFlags == nil then
        return nil
    end
    return self._tingFlags[seat]
end

function RoomData:isStartGame()
    local playerData = self:getSelfPlayerData()
    if playerData and playerData:getStateEx() == playerData.USER_STATEEX.psPlaying then
        return true
    end
    return false
end

function RoomData:getDismissType()
    return self._dismissType
end

function RoomData:setDismissType(itype)
    self._dismissType = itype or 0
end

function RoomData:onPlayerStart(seat)
    if not seat then
        return
    end
    self:dispatchEvent({ name = self.EVENT_PLAYER_START,  msg = {seatID = seat}})
end

function RoomData:setIsGameStart(bStart)
    local oldState = self._isGameStart
    self._isGameStart = bStart
    self:dispatchEvent({name = self.EVENT_GAMESTART_CHANGED, msg = {oldState = oldState, nowState = self._isGameStart}})
    if bStart then
        self._isGameStarted = bStart
    end 
end

function RoomData:getIsGameStart()
    return self._isGameStart
end

function RoomData:setIsMatching(bMatch)
    self._bMatch = bMatch
end

function RoomData:isMatching()
    return self._bMatch
end

function RoomData:setbShuffle()
    if self._playCount then
        self._bShuffle[self._playCount] = true
    end
end

function RoomData:getbShuffle()
    return self._bShuffle[self._playCount]
end

function RoomData:isValidLocalSeat(localSeat)
    if localSeat and localSeat > 0 and localSeat <= self:getMaxPlayer() then
        return true
    end
    return false
end

--是否开始过游戏
function RoomData:getIsGameStarted()
    return self._isGameStarted or false
end

--请求切牌次数
function RoomData:reqCutCardsState(state)
    self._bIsFreeCut = false
end

--是否开启切牌
function RoomData:isOpenCutCards()
    if self:isGoldRoom() or self:isNewGoldRoom() then
        return false
    end
    local gameID = self:getGameID()
    if CF.gameSub:isMahjong(gameID) then
        if CF.configData.getIsLocalShuffle and CF.configData:getIsLocalShuffle() then
            return true
        end
        return false
    end
    local cutCardsDefine = CF.gameRequire("Modules.PropUse.CutCardsDefine") 
    if cutCardsDefine and cutCardsDefine.OpenGameId[CF.areaData:getLobbyID()] then
        for key,value in pairs(cutCardsDefine.OpenGameId[CF.areaData:getLobbyID()]) do
            if value == gameID then
                return true
            end
        end
    end
    return false
end

-- 是否支持预洗牌
function RoomData:isSupportPreShuffle()
    if self:isPlayBack() then
        return false
    end
    if self:isGoldRoom() or self:isNewGoldRoom() then
        return false
    end
    local gameID = self:getGameID()
    -- 未开启洗牌不支持预洗牌
    if not CF.gameSub:getIsOpenShuffle(gameID) then
        return false
    end
    if CF.configData.getIsLocalShuffle and not CF.configData:getIsLocalShuffle() then
        return false
    end
    local cutCardsDefine = CF.gameRequire("Modules.PropUse.CutCardsDefine")
    local isSupport = false
    if cutCardsDefine then
        for _,v in pairs(cutCardsDefine.SupportPreShuffle) do
            if v == CF.areaData:getLobbyID() then
                isSupport = true
                break
            end
        end
    end
    -- 打圈游戏不支持预洗牌,局数服务端不下发
    if isSupport and cutCardsDefine and cutCardsDefine.notSupportPreGameID[CF.areaData:getLobbyID()] then
        for _,value in pairs(cutCardsDefine.notSupportPreGameID[CF.areaData:getLobbyID()]) do
            if value == gameID then
                isSupport = false
                break
            end
        end
    end
    return isSupport
end

-- 是否支持多货币洗牌
function RoomData:isSupportMultiPropShuffle()
    -- 金币场不支持多货币洗牌，只支持金币洗牌
    if self:isGoldRoom() or self:isNewGoldRoom() then
        return false
    end
    local gameID = self:getGameID()
    -- 未开启洗牌不支持
    if not CF.gameSub:getIsOpenShuffle(gameID) then
        return false
    end
    if CF.gameSub.getShuffleType and CF.gameSub:getShuffleType(gameID)~=0 then
        return false
    end
    local cutCardsDefine = CF.gameRequire("Modules.PropUse.CutCardsDefine")
    if cutCardsDefine then
        for _,v in pairs(cutCardsDefine.SupportMultiPropShuffle) do
            if v == CF.areaData:getLobbyID() then
                return true
            end
        end
    end
    
    return false
end

-- 是否支持6.0 洗牌
function RoomData:isSupportShuffle6_0()
    if self:isPlayBack() then
        return false
    end
    -- 是否支持6.0 洗牌, 只支持金币洗牌
    if self:isGoldRoom() or self:isNewGoldRoom() then
        return false
    end
    local gameID = self:getGameID()
    -- 未开启洗牌不支
    if not CF.gameSub:getIsOpenShuffle(gameID) then
        return false
    end
    local cutCardsDefine = CF.gameRequire("Modules.PropUse.CutCardsDefine")
    if cutCardsDefine then
        for _,v in pairs(cutCardsDefine.NotSupportShuffle6_0) do
            if v == CF.areaData:getLobbyID() then
                return false
            end
        end
    end
    return true
end

function RoomData:getIsSeer()
    return self._isSeeing
end

function RoomData:setIsSeer(bSeer)
    if self:isPlayBack() then
        return
    end
    if bSeer ~= nil and self:getIsSeer() == bSeer then
        return
    end
    self._isSeeing = bSeer or false
    CF.getLobbyModule("Im"):getIMData():setIsSeer(bSeer)
    CF.getLobbyModule("Im"):getIMData():setWatchRoomId(self._roomID)
    self:dispatchEvent({name = self.EVENT_GAME_UPDATE_SEER})
end

function RoomData:setIsDismiss(bDismiss)
    self._isDismiss = bDismiss or false
end

function RoomData:getIsDismiss()
    return self._isDismiss
end

function RoomData:getIsFastPlay()
    return self._isFastPlay
end

function RoomData:setIsFastPlay(value)
    self._isFastPlay = value
end

function RoomData:getIsRestart()
    return self._isRestart
end

function RoomData:setIsRestart(value)
    self._isRestart = value
end

function RoomData:initWatchData(data)
    self:setIsSeer(data.isWatch)
    self._watchRecordPath = data.watchRecordPath
    self._watchOffset = data.offset%1000000
    self._watchRound = math.floor(data.offset/1000000)
    self._isDelayWatch = data.isDelayWatch or false
end

function RoomData:getWatchOffset()
    return self._watchOffset
end

function RoomData:setWatchOffset(offset)
    self._watchOffset = offset
end

function RoomData:getWatchRound()
    return self._watchRound
end

function RoomData:setWatchRound(curWatchRound)
    self._watchRound = curWatchRound
end

function RoomData:isDelayWatch()
    return self._isDelayWatch
end

--是否为50匹配
function RoomData:is50Match()
    return self:getRoomMode2() == CF.ROOM_TYPE.DISPATCH_QUEUE and self:is50()
end 

function RoomData:setServerGameRule(rule)
    self._curGameRule = rule
    self:flushExtRule()
end

function RoomData:getServerGameRule()
    return self._curGameRule
end

function RoomData:flushExtRule()
    if self._curGameRule and self._curGameRule ~= "" and self._gameRule and self._gameRule ~= "" then
        self:setAutoChangeRule()
        self:setAutoContinueTime()
    end
end

-- 随机落座房间配置
function RoomData:setAutoChangeRule()
    if CF.roomData:isGoldRoom() or self:getChairs() <= 2 then
        return
    end
    if string.match(self._curGameRule, "AutoChange='1';") and not string.match(self._gameRule, "随机落座") then
        self._gameRule = self._gameRule .. "/随机落座"
        self:dispatchEvent({ name = self.EVENT_GAMERULE_CHANGED })
    else
        local ConfigurationDefine = require("lobby.Modules.Configuration.Define")
        local gameID = CF.roomData:getGameID()
        local configModule = CF.getLobbyModule("Configuration")
        if not configModule then
            return
        end
        local allJsonData = configModule:getConfigJsonData(ConfigurationDefine.Config.ALL, "AllConfig")
        if not allJsonData or not allJsonData.ChangeSeatGameID then
            return
        end
        for _,openGameID in pairs(allJsonData.ChangeSeatGameID) do
            if gameID == openGameID then
                self._gameRule = self._gameRule .. "/随机落座"
                self:dispatchEvent({ name = self.EVENT_GAMERULE_CHANGED })
                return
            end
        end
    end
end

-- 自动继续的房间配置
function RoomData:setAutoContinueTime()
    if string.match(self._curGameRule, "autoContinue='5';") and not string.match(self._gameRule, "自动继续") then
        self._autoContinueTime = 5
        self._gameRule = self._gameRule .. "/自动继续"
        self:dispatchEvent({name = self.EVENT_GAMERULE_CHANGED})
    end
end

function RoomData:getAutoContinueTime()
    return self._autoContinueTime
end

-- 是否显示新版炸弹特效
function RoomData:isShowNewBomb()
    local DEBUG = require("app.Config.GlobalConfig").IsDebug
    if DEBUG then
        return true
    end
    if self:isNewUI() then
        return true
    end
    -- 千变双扣/金币场/安卓渠道/中级场
    if self:isGoldRoom() and device.platform == "android" and self._gameID == 42038 and self._roomFlag == 2 then
        return true
    end
    return false
end

-- 双扣是否使用新UI
function RoomData:isNewUI()
    if not CF.roomData:isGoldRoom() then
        return false
    end
    return self._gameID == 42038 and self._roomFlag > 10
end

-- 判断是否能接受逻辑协议
function RoomData:isReceiveLogicMsg(subXYID)
    return true
end

function RoomData:update50GameRule()
    self:dispatchEvent({name = self.EVENT_GAMERULE_CHANGED})
end

-- 支持封顶的GAMEID
local FENGDING_GAMEID_LIST = {
    30109,
    30066,
}
function RoomData:isSupportFengDing()
    for _,v in pairs(FENGDING_GAMEID_LIST) do
        if v == self._gameID then
            return true
        end
    end
    return false
end

return RoomData
��  