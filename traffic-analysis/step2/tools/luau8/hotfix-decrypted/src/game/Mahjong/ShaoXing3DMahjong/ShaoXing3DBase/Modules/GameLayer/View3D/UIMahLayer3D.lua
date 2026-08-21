local UIMahLayer3D = CF.gameClass("UIMahLayer3D", "game.Mahjong.BasicMahjong.Modules.GameLayer.View3D.UIMahLayer3D")

function UIMahLayer3D:getProxyEvents()
    local proxyEvents = UIMahLayer3D.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_CHIPS", callBack = "onShowChips" }
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_JOKER_DATA_SET", callBack = "onEventSetJokerOpenData" }
    return proxyEvents
end

function UIMahLayer3D:onEventSetJokerOpenData(event)
    if event.msg == nil then
        return
    end
    self._openMahs:setJokerMahs(event.msg.openMahs)
end

function UIMahLayer3D:onShowChips(event)
    if event.msg == nil then
        return
    end
    if event.msg.msgThrowChip == nil then
        return
    end
    -- 设置牌墙初始抓牌数据
    local startTakeData, openMahPos = self:_getWallStartData(event.msg.msgThrowChip.nChips)
    self:_getWallArea():setStartTakeData(startTakeData, openMahPos)
end

-- 牌墙显示的牌墩数 key为localSeat
function UIMahLayer3D:_getWallMahsCountConfig()
    local rule = CF.roomData:getGameRule()
    if rule and string.match(rule, "缺一色") then
        return {18,18,18,0}
    end
    return {18,18,18,18}
end

function UIMahLayer3D:_checkIsShowActionWithWallMahsCount(wallMahsCnt)
    wallMahsCnt = wallMahsCnt or 0
    return wallMahsCnt == self:_getWallMahsCount() - 1
end

function UIMahLayer3D:_getWallArea()
    local wallArea = UIMahLayer3D.super._getWallArea(self)
    wallArea:setIsKeepBelowOpenMah(true)
    return wallArea
end

-- 根据骰子数确定起始抓牌位置
function UIMahLayer3D:_getWallStartData(chips)
    if not chips or #chips == 0 then
        return
    end

    local bankerSeat = self:getGameData():getBankerSeat()
    if bankerSeat == CF.roomData:getMaxPlayer() then
        return
    end

    local chipTotalValue = 0
    local minChipValue
    local maxChipValue
    for _, chipValue in pairs(chips) do
        chipTotalValue = chipTotalValue + chipValue
        if not minChipValue or chipValue < minChipValue then
            minChipValue = chipValue
        end
        if not maxChipValue or chipValue > maxChipValue then
            maxChipValue = chipValue
        end
    end
    local bankerLocalSeat = CF.roomData:seatToLocal(bankerSeat)
    local startTakeData = {}
    startTakeData.startLocalSeat = (bankerLocalSeat + chipTotalValue - 1) % 4
    startTakeData.startLocalSeat = startTakeData.startLocalSeat == 0 and 4 or startTakeData.startLocalSeat
    startTakeData.startIndex = minChipValue + 1

    local openMahPos = {}
    openMahPos.mahLocalSeat = (bankerLocalSeat + chipTotalValue) % 4
    openMahPos.mahLocalSeat = openMahPos.mahLocalSeat == 0 and 4 or openMahPos.mahLocalSeat
    openMahPos.mahIndex = minChipValue

    return startTakeData, {openMahPos}
end

function UIMahLayer3D:setOpenMahs(openMahs)
    local openMahsNode = self._mahsJoker
    if not openMahsNode then
        return
    end
    self:clearOpenMahs()
    local UIMahJokerArea = CF.gameRequire("Modules.GameLayer.View3D.UIMahJokerArea3D")
    self._openMahs = UIMahJokerArea.new()
    self._openMahs:init(openMahsNode)
    --财神标志变为花牌标志
    if self:getGameData():getIsJokerToFlower() then
        self._openMahs:setIsFlower(true)
    end
    self._openMahs:setConfig(self:_getNowConfig2D())
    openMahsNode:setScale(0.9)
end

function UIMahLayer3D:onEventSurplusMah(event)
    local surplusCounts = self:getGameData():getSurPlusCounts()
    if self:getGameData():getSurPlusCounts() ~= 0 then
        surplusCounts = self:getGameData():getSurPlusCounts() -1
    end
    self:showSurPlusMahBack()
    self._mahsSurPlusCounts:setVisible(true)
    self._mahsSurPlusCounts:setString( surplusCounts)
end

function UIMahLayer3D:initLight()
    local lightSet = CF.settingData:getMahLightStyle() == 1 and 1 or 0.6
    self._mahLight = {}
    -- 麻将子光源
    local mahLight1 = cc.AmbientLight:create(cc.WHITE)
    mahLight1:setLightFlag(cc.LightFlag.LIGHT0)
    mahLight1:setIntensity(0.3)
    self:addChild(mahLight1)

    local mahLight = cc.DirectionLight:create(cc.vec3(0, 0, -1),cc.WHITE)
    mahLight:setRotation3D(cc.vec3(50, 0, 0))
    mahLight:setLightFlag(cc.LightFlag.LIGHT0)
    mahLight:setIntensity(0.8 * lightSet)
    self._mahLight["mah"] = mahLight
    self:addChild(mahLight)

    -- 桌子光源
    local deskLight1 = cc.AmbientLight:create(cc.WHITE)
    deskLight1:setLightFlag(cc.LightFlag.LIGHT2)
    deskLight1:setIntensity(1.1 * lightSet)
    self:addChild(deskLight1)

    -- hand光源
    local handLight1 = cc.AmbientLight:create(cc.WHITE)
    handLight1:setLightFlag(cc.LightFlag.LIGHT1)
    handLight1:setIntensity(0.45)
    self:addChild(handLight1)

    local handLight = cc.DirectionLight:create(cc.vec3(0, 0, -1),cc.WHITE)
    handLight:setRotation3D(cc.vec3(50, 0, 0))
    handLight:setLightFlag(cc.LightFlag.LIGHT1)
    handLight:setIntensity(0.9 * lightSet)
    self._mahLight["hand"] = handLight
    self:addChild(handLight)

    -- 出牌光源
    local outMahLight1 = cc.AmbientLight:create(cc.WHITE)
    outMahLight1:setLightFlag(cc.LightFlag.LIGHT3)
    outMahLight1:setIntensity(0.4)
    self:addChild(outMahLight1)

    local outMahLight = cc.DirectionLight:create(cc.vec3(0, 0, -1),cc.WHITE)
    outMahLight:setLightFlag(cc.LightFlag.LIGHT3)
    outMahLight:setIntensity(0.8 * lightSet)
    self._mahLight["out"] = outMahLight
    self:addChild(outMahLight)
end

function UIMahLayer3D:onUpdateMahWall(event)
    if not event.msg then
        return
    end

    self:setWallMahsCountConfigByWallEvent(event)

    local bShowAction = self:_checkIsShowActionWithWallMahsCount(event.msg.nWallCnt)
    self:showWall(bShowAction)
    
    self._tempWallData = event.msg

    self:checkDelMahsCount()
end


return UIMahLayer3D�