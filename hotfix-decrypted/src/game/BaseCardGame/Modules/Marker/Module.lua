local MarkerModule = CF.gameClass("MarkerModule", CF.ModuleBase)
local CardEnum = CF.gameRequire("Define.CardEnum")

MarkerModule.EVENT_MARKER_DATA_CHANGE = "EVENT_MARKER_DATA_CHANGE"
MarkerModule.EVENT_LMT_MARKER_CHANGE = "EVENT_LMT_MARKER_CHANGE"
MarkerModule.EVENT_MARKER_LEFTTIME_CHANGE = "EVENT_MARKER_LEFTTIME_CHANGE"
MarkerModule.EVENT_UPDATE_MAKER_QI_PAO = "EVENT_UPDATE_MAKER_QI_PAO"
MarkerModule.EVENT_UPDATE_MAKER_SHOW = "EVENT_UPDATE_MAKER_SHOW"
MarkerModule.EVENT_UPDATE_MAKER_LINE = "EVENT_UPDATE_MAKER_LINE"

--是否开启记牌器
MarkerModule.MarkerConfig = {
    900036, -- 瑞安
    900037, -- 温州（茶）
    900017, -- 熟客
    900038, -- 丽水
    900021, -- 杭麻圈
    900025, -- 宝宝杭麻
    900020, -- 金华
    900043, -- 舟山
    40165, -- 嘉兴
    900008, -- 湖州
    900003, -- 衢州
    900006, -- 宁波
    900029, -- 余姚
    900023, -- 台州
    900039, -- 青田
    900031, -- 乐清
    900007, -- 绍兴
    900046 -- 绍兴3D
}

local KW_ITEM_ID_JIPAIQI = 150130
local KW_ITEM_JIPAIQI_GOLD_ID = 150131

function MarkerModule:ctor()
    MarkerModule.super.ctor(self)
    self:initDatas()
    self:initMarkerSchedule()
end

function MarkerModule:getSubXYDealList()
    return {
        {callback = handler(self, self.onMsgMarker), msgClass = CF.GameProtocol.msgJiPaiQi},
        {callback = handler(self, self.onMsgOutCards), msgClass = CF.GameProtocol.msgOutCards}
    }
end

function MarkerModule:getProxyEvents()
    return {
        {module = CF.netEngine, eventName = CF.GameMProtocol.RespUseProps.event_key, callBack = "onRespUseProp"},
        {module = CF.game:getModule("PropUse"), eventKeyName = "EVENT_PROP_DATA_CHANGED", callBack = "onPropDataChange"}
    }
end

function MarkerModule:onDestroy()
    MarkerModule.super.onDestroy(self)
    self:removeMarkerSchedule()
end

function MarkerModule:initDatas()
    self._markerData = {}
    self._lmtMarker = false
    self._nLeftTime = 0
    self._extraAdds = 0

    self.isFirstShowQiPao = true
    self.isUseMarkrtFirst = false
end

-- 使用道具
function MarkerModule:onRespUseProp(event)
    local usePropMsg = CF.GameMProtocol.RespUseProps:new()
    usePropMsg:bistream(event.msg.buff, event.msg.len)
    if usePropMsg.flag == 0 then -- 使用成功
        CF.msgManager:sendRequestPlayerProps()
        --请求玩家道具
        CF.SysTool.performWithDelayGlobal(
            function()
                if usePropMsg.propsid == KW_ITEM_ID_JIPAIQI then
                    CF.msgManager:sendUseMarkerEx(0)
                elseif usePropMsg.propsid == KW_ITEM_JIPAIQI_GOLD_ID then
                    CF.msgManager:sendUseMarkerEx(0, 1)
                end
                self.isUseMarkrtFirst = false
                CF.msgManager:sendRequestPlayerProps()
            end,
            2
        )
    end
end

function MarkerModule:initEveryTime()
    self:clearMarkerData()
    self._extraAdds = 0
end

function MarkerModule:onMsgMarker(msgData)
    if CF.roomData:isBianChaDKGoldRoom() then
        return
    end
    if CF.roomData:getIsSeer() then
        return
    end
    if CF.roomData:is50() then
        self:onMsgMarker50(msgData)
        return
    end
    self:setMarkerData(msgData.ucJPQ)
    if msgData.ucFlag then
        self:setExtraAdds(msgData.ucFlag >= 2)
    else
        self:setExtraAdds(false)
    end
end

function MarkerModule:onMsgMarker50(msgData)
    if self:getLmtMarker() == true then
        return
    end
    local bShow = false
    if self:getLeftTime() > 0 or self:getPropCnt(KW_ITEM_ID_JIPAIQI) > 0 or msgData.ucFlag >= 2 then
        bShow = true
    end
    if bShow then
        self:setMarkerData(msgData.ucJPQ)
        if msgData.ucFlag then
            self:setExtraAdds(msgData.ucFlag >= 2)
        else
            self:setExtraAdds(false)
        end
    end
end

function MarkerModule:setMarkerData(markerData)
    if CF.roomData:isBianChaDKGoldRoom() then
        return
    end
    if markerData == nil then
        return
    end
    self._markerData = markerData

    self:dispatchEvent({name = self.EVENT_MARKER_DATA_CHANGE})
end

function MarkerModule:getMarkerData()
    return self._markerData
end

function MarkerModule:clearMarkerData()
    self._markerData = {}

    self:dispatchEvent({name = self.EVENT_MARKER_DATA_CHANGE})
end

function MarkerModule:deleteMarkerData(outCardIDs)
    if CF.roomData:isBianChaDKGoldRoom() then
        return
    end
    for _, cardID in ipairs(outCardIDs) do
        local markerIndex = cardID
        if cardID <= 13 then
            markerIndex = cardID
        elseif cardID > 13 and cardID <= 52 then
            markerIndex = cardID % 13
        elseif cardID == 53 then
            markerIndex = 14
        elseif cardID == 54 then
            markerIndex = 15
        end

        if markerIndex == 0 then
            markerIndex = 13
        end

        if self._markerData[markerIndex] then
            self._markerData[markerIndex] = self._markerData[markerIndex] - 1
        end
    end

    self:dispatchEvent({name = self.EVENT_MARKER_DATA_CHANGE})
end

function MarkerModule:onMsgOutCards(msgData)
    --记牌器数据
    if msgData.ucCount ~= 0 and msgData.sSeat ~= CF.roomData:getSelfSeat() then
        local deleteCardIDs = {}
        for i = 1, msgData.ucCount do
            table.insert(deleteCardIDs, msgData.ucCards[i])
        end
        self:deleteMarkerData(deleteCardIDs)
    end
end

function MarkerModule:setLmtMarker(lmtMarker)
    self._lmtMarker = lmtMarker

    self:dispatchEvent({name = self.EVENT_LMT_MARKER_CHANGE})
end

function MarkerModule:getLmtMarker()
    return self._lmtMarker
end

function MarkerModule:setLeftTime(nLeftTime)
    if nLeftTime < 0 then
        nLeftTime = 0
    end
    self._nLeftTime = nLeftTime

    self:dispatchEvent({name = self.EVENT_MARKER_LEFTTIME_CHANGE})
end

function MarkerModule:getLeftTime()
    return self._nLeftTime
end

function MarkerModule:getTimePropLeft(propID)
    return CF.game:getModule("PropUse"):getTimePropLeft(propID)
end

function MarkerModule:getPropCnt(propID)
    return CF.game:getModule("PropUse"):getPropCnt(propID)
end

function MarkerModule:isOpenMarker()
    if XH.isEmbeddedApp and XH.isEmbeddedApp() then
        return true
    end
    local lobbyID = CF.areaData:getLobbyID()
    for _, value in pairs(self.MarkerConfig) do
        if value == lobbyID then
            return true
        end
    end
    return false
end

-- 请求玩家道具信息返回
function MarkerModule:onPropDataChange(event)
    if CF.roomData and CF.roomData:getIsSeer() then
        return
    end
    self:dispatchEvent({name = self.EVENT_MARKER_LEFTTIME_CHANGE})
    local playerPropData = CF.game:getModule("PropUse"):getPlayerProps()
    for _, value in pairs(playerPropData) do
        if value.id == KW_ITEM_ID_JIPAIQI then
            self.isUseMarkrtFirst = true
            CF.TipTool.showToast("记牌器使用中...", 2)
            if CF.roomData:is50() then
                self:reqUseEquipCard(KW_ITEM_ID_JIPAIQI, value.count)
            else
                CF.msgManager:sendRequestUseProps(KW_ITEM_ID_JIPAIQI, value.count)
            end
        end
    end
    if self:isOpenMarker() then
        self:requestSysTime()
    end
end

function MarkerModule:initMarkerSchedule()
    if not self:isOpenMarker() then
        return
    end
    self._scheduleLeftTime =
        cc.Director:getInstance():getScheduler():scheduleScriptFunc(
        function()
            self:scheduleUpdateLeftTime()
        end,
        1.0,
        false
    )
end

function MarkerModule:removeMarkerSchedule()
    if self._scheduleLeftTime then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._scheduleLeftTime)
        self._scheduleLeftTime = nil
    end
end

function MarkerModule:scheduleUpdateLeftTime()
    --定时请求（临时解决切后台后倒计时不准确的问题）
    if not self._delayTime or self._delayTime >= 10 then
        self:requestSysTime()
        self._delayTime = 0
    end
    self._delayTime = self._delayTime + 1

    local leftTime = self:getLeftTime()
    if leftTime <= 0 then
        return
    end
    self:setLeftTime(leftTime - 1)
end

function MarkerModule:requestSysTime()
    CF.roomData:getSysTime(handler(self, self.onRequestSysTime))
end

function MarkerModule:onRequestSysTime(sysTime)
    local timeEnd = self:getTimePropLeft(KW_ITEM_ID_JIPAIQI)
    if not self.isUseMarkrtFirst then
        if timeEnd ~= nil and sysTime ~= nil then
            if timeEnd - sysTime > 0 then
                self:setLeftTime(timeEnd - sysTime)
                if self.isFirstShowQiPao then
                    self:dispatchEvent({name = self.EVENT_UPDATE_MAKER_SHOW, isShow = true})
                    self.isFirstShowQiPao = false
                end
            else
                if self.isFirstShowQiPao then
                    self.isFirstShowQiPao = false
                    if self:getGoldMarkerCnt() == 0 then
                        self:dispatchEvent({name = self.EVENT_UPDATE_MAKER_QI_PAO, isShow = true})
                    end
                    self:dispatchEvent({name = self.EVENT_UPDATE_MAKER_SHOW, isShow = true})
                end
            end
        end
    end
end

function MarkerModule:showMarkerIcon(bShow)
    if self:isOpenMarker() then
        self:dispatchEvent({name = self.EVENT_UPDATE_MAKER_SHOW, isShow = false})
        return
    end
    self:dispatchEvent({name = self.EVENT_UPDATE_MAKER_SHOW, isShow = bShow})
end

function MarkerModule:showMarkerLine(bShow)
    self:dispatchEvent({name = self.EVENT_UPDATE_MAKER_LINE, isShow = bShow})
end

function MarkerModule:setExtraAdds(isRoundMarker)
    if isRoundMarker == true then
        self._extraAdds = 1
    else
        self._extraAdds = 0
    end

    self:dispatchEvent({name = self.EVENT_MARKER_LEFTTIME_CHANGE})
end

function MarkerModule:getExtraAdds()
    self:isHaveUseBianChaCntMarker()
    return self._extraAdds
end

function MarkerModule:getGoldMarkerCnt()
    if not CF.roomData:isGoldRoom() then
        return 0
    end
    return self:getPropCnt(KW_ITEM_JIPAIQI_GOLD_ID) + self:getExtraAdds()
end

function MarkerModule:onAfterGameStart()
    self:initEveryTime()
    self:isHaveUseBianChaCntMarker(true)
end

function MarkerModule:onAfterWinLost()
    self:clearLocalStartKey()
    CF.msgManager:sendRequestPlayerProps()
    self:setExtraAdds(false)
end

function MarkerModule:sendRequestUseGoldJPQ(notCheckGoldJPQ)
    if self:getLmtMarker() == true then
        return
    end

    if self:getLeftTime() > 0 then
        return
    end

    if self:getPropCnt(KW_ITEM_ID_JIPAIQI) > 0 then
        return
    end

    if self:getGoldMarkerCnt() <= 0 and not notCheckGoldJPQ then
        return
    end
    if CF.roomData:is50() then
        local strParam = "taskname=marker;logtype=1601;"
        self:useProp50(KW_ITEM_JIPAIQI_GOLD_ID, 1, strParam)
    else
        CF.msgManager:sendRequestUseProps(KW_ITEM_JIPAIQI_GOLD_ID, 1)
    end
end

-- 本地统计记牌器数据写法
-- 更新记牌器数据
function MarkerModule:updateRecoorder(cards)
    if not CF.roomData:isBianChaDKGoldRoom() then
        return
    end
    if not cards then
        return
    end
    for i = 1, #cards do
        local index = self:getIndexByPower(cards[i])
        if self._markerData[index] and self._markerData[index] > 0 then
            self._markerData[index] = self._markerData[index] - 1
        end
    end
    self:dispatchEvent({ name = self.EVENT_MARKER_DATA_CHANGE })
end

function MarkerModule:getIndexByPower(id)
    local index = CardEnum.CardID2Power[id]
    if index == CardEnum.CARD_POWER.CP_SJ or index == CardEnum.CARD_POWER.CP_BJ then
        index = index - 2
    elseif index == CardEnum.CARD_POWER.CP_A then
        index = 1
    elseif index == CardEnum.CARD_POWER.CP_2 then
        index = 2
    end
    return index
end

-- 重置数据
function MarkerModule:reset()
    if not CF.roomData:isBianChaDKGoldRoom() then
        return
    end
    self._markerData = {}
    local GameData = CF.game:getModule("GameLayer"):getGameData()
    local isEightKing = GameData:getEightKing()
    for i = 1, 2 do
        for v = CardEnum.CARD_ID.CID_DIAMOND_A, CardEnum.CARD_ID.CID_BJ do
            local index = self:getIndexByPower(v)
            self._markerData[index] = self._markerData[index] or 0
            self._markerData[index] = self._markerData[index] + 1
        end
        if isEightKing then
            for v = CardEnum.CARD_ID.CID_SJ, CardEnum.CARD_ID.CID_BJ do
                local index = self:getIndexByPower(v)
                self._markerData[index] = self._markerData[index] or 0
                self._markerData[index] = self._markerData[index] + 1
            end
        end
    end
end

-- 记牌器重新统计剩余卡牌
function MarkerModule:resetAllLeftCards()
    if not CF.roomData:isBianChaDKGoldRoom() then
        return
    end
    local GameData = CF.game:getModule("GameLayer"):getGameData()
    if not GameData then
        return
    end
    self:reset()
    for seat = 0, CF.roomData:getMaxPlayer() - 1 do
        local localSeat = CF.roomData:seatToLocal(seat)
        local bIsShow = GameData:getHandCardsState(localSeat)
        local handCards = GameData:getHandCardIDs(seat)
        if bIsShow and handCards then
            self:updateRecoorder(handCards)
        end
        local outHandCards = GameData:getOutCardRecord(seat)
        if outHandCards and outHandCards.CardIDs then
            self:updateRecoorder(outHandCards.CardIDs)
        end
    end
    -- 如果对家是明牌状态, 改成非明牌状态. 因为待会就要来对家明牌消息了
    -- 除了我自己, 所有人的状态改成非明牌.
    for seat = 1, CF.roomData:getMaxPlayer() do
        if seat ~= 2 then
            GameData:setHandCardsState(seat, false)
        end
    end
end

-- 边茶通过道具消耗的形式扣除道具并刷新
function MarkerModule:isHaveUseBianChaCntMarker(isGameStart)
    if not CF.roomData:isBianChaDKGoldRoom() then
        return
    end
    if not (CF.roomData:getIsGameStart() or isGameStart) then
        return
    end
    if self._isInUse then
        return
    end
    -- 本局是否使用过，使用过返回true
    local lastData = cc.UserDefault:getInstance():getIntegerForKey(self:getBianChaCntMarkerKey(), -1)
    if lastData == self:getNeedRecordMarkerKey() then
        local last = self._extraAdds
        self._extraAdds = 1
        if last == 0 then
            self:dispatchEvent({name = self.EVENT_MARKER_LEFTTIME_CHANGE})
        end
        return
    end
    if self._extraAdds == 1 then
        return
    end
    -- 如果没有倒计时记牌器，判断是否有个数记牌器，有则使用
    local leftTime = CF.game:getModule("Marker"):getLeftTime()
    local leftGoldMarker = self:getPropCnt(KW_ITEM_JIPAIQI_GOLD_ID) --CF.game:getModule("Marker"):getGoldMarkerCnt()
    if leftTime > 0 then
        return
    end
    if leftGoldMarker > 0 then
        self._isInUse = true
        CF.reqTransferProps("goldMarker=1;", {
            price = 1,
            propID = KW_ITEM_JIPAIQI_GOLD_ID,
        }, nil, self, function(_target, req, type, data)
            if data and data.nXYData and data.nXYData.resp and data.nXYData.resp.err_code == 0 then
                self._isInGameUse = true
                cc.UserDefault:getInstance():setIntegerForKey(self:getBianChaCntMarkerKey(), self:getNeedRecordMarkerKey())
                CF.msgManager:sendRequestPlayerProps()
                self:setExtraAdds(true)
            end
            self._isInUse = false
        end)
        return
    end
    -- 没有直接返回false
    return
end

-- 获取拼接数据
function MarkerModule:getNeedRecordMarkerKey()
    local roomID = CF.roomData:getRoomID()
    return roomID
end

-- 获取本地存储的记牌器key
function MarkerModule:getBianChaCntMarkerKey()
    return "KW_BIANCHA_MARKER_CNT_USE"
end

-- 判断是否重连
function MarkerModule:clearLocalStartKey(isMatch)
    if isMatch and self._extraAdds == 1 then
        if self._isInGameUse then
            self._isInGameUse = false
            return
        else
            self._extraAdds = 0
            cc.UserDefault:getInstance():setIntegerForKey(self:getBianChaCntMarkerKey(), -1)
            self:isHaveUseBianChaCntMarker()
            return
        end
    end
    self._isInGameUse = false
    cc.UserDefault:getInstance():setIntegerForKey(self:getBianChaCntMarkerKey(), -1)
end


-- 请求50协议扣除道具(局数记牌器)
function MarkerModule:useProp50(propId, count, strParam)
    local param = {}
    local props = {
        prop_id = propId,         --道具id
        count = -count,           --道具数量
        burse_type = CF.GameDefine.BURSETYPE.User,  --钱包类型
    }
    param.props = props
    param.custom = strParam
    CF.reqUsePropsByProtobuf(param, self, self.onRespDealProp)
end

function MarkerModule:onRespDealProp(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        CF.msgManager:sendRequestPlayerProps()
        CF.msgManager:sendUseMarkerEx(0, 1)
        --请求玩家道具
        CF.SysTool.performWithDelayGlobal(
            function()
                self.isUseMarkrtFirst = false
                CF.msgManager:sendRequestPlayerProps()
            end,
            2
        )
    end
end

-- 让普通道具 转化为时效道具（时效记牌器）
function MarkerModule:reqUseEquipCard(propId, count)
    local param = {}
    local props = {
        prop_id = propId,
        count= count,
        burse_type = CF.GameDefine.BURSETYPE.User
    }
    param.prop = props
    param.custom = ""
    CF.reqUseEquipCardProtobuf(param, self, self.respUseEquipCard)
end

function MarkerModule:respUseEquipCard(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        CF.msgManager:sendRequestPlayerProps()
        --请求玩家道具
        CF.SysTool.performWithDelayGlobal(
            function()
                self.isUseMarkrtFirst = false
                CF.msgManager:sendUseMarkerEx(0)
                CF.msgManager:sendRequestPlayerProps()
            end,
            2
        )
    end
end

return MarkerModule
�I  