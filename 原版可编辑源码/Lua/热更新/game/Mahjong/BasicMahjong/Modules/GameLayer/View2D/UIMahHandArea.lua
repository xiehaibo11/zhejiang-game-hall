local UIMah = CF.gameRequire("Modules.GameLayer.View2D.UIMah")
local UIMahComb = CF.gameRequire("Modules.GameLayer.View2D.UIMahComb")
local UIMahConfig = CF.gameRequire("Modules.GameLayer.Config.UIMahConfig2D")
local MahLogic = CF.gameRequire("Modules.GameLayer.MahLogic")
local UIMahSettingValueInterface = CF.gameRequire("Modules.GameLayer.View2D.Interface.UIMahSettingValueInterface")

local UIMahHandArea = CF.gameClass("UIMahHandArea2D", "game.Mahjong.BasicMahjong.Modules.GameLayer.ViewBase.UIMahHandAreaBase")

function UIMahHandArea:ctor(localSeat, config)
    UIMahSettingValueInterface.extend(self, config)
    UIMahHandArea.super.ctor(self)

    self._localSeat = localSeat
    self._handMahs = {}     -- 手牌(除单放)
    self._danFangMah = nil
    self._combs = {}

    self._maxHandMahCount = CF.game:getModule("GameLayer"):getMaxHandCounts()

    self:_initView()
end

function UIMahHandArea:_initView()
    
end

-- 获取麻将牌类型
function UIMahHandArea:_getHandMahType(bStand, mahValue)
    if self._localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
        if mahValue == CF.GameDefine.MAH_VALUE.BACK and CF.roomData:getIsSeer() then
            return CF.GameDefine.MAH_TYPE.STAND_FACE_BACKWARD
        end
        if mahValue == CF.GameDefine.MAH_VALUE.BACK and not bStand then
            return CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL
        end
        return bStand and CF.GameDefine.MAH_TYPE.STAND_FACE_FORWARD or CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP
    elseif self._localSeat == CF.GameDefine.LOCAL_SEAT.RIGHT then
        if mahValue == CF.GameDefine.MAH_VALUE.BACK and not bStand then
            return CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_HORIZONTAL
        end
        return bStand and CF.GameDefine.MAH_TYPE.STAND_FACE_TORIGHT or CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT
    elseif self._localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
        if mahValue == CF.GameDefine.MAH_VALUE.BACK and not bStand then
            return CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL
        end
        return bStand and CF.GameDefine.MAH_TYPE.STAND_FACE_BACKWARD or CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP
    elseif self._localSeat == CF.GameDefine.LOCAL_SEAT.LEFT then
        if mahValue == CF.GameDefine.MAH_VALUE.BACK and not bStand then
            return CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_HORIZONTAL
        end
        return bStand and CF.GameDefine.MAH_TYPE.STAND_FACE_TOLEFT or CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT
    end
end

function UIMahHandArea:_createMah(mahValue, bStand)
    local mahType = self:_getHandMahType(bStand or false, mahValue)
    local mah = UIMah.new(mahType, self._config)
    if mahValue ~= nil then
        mah:setMahValue(mahValue)
        self:updateMahJokerIcon(mah)
    end
    return mah
end

function UIMahHandArea:_getHandMahScale()
    local layoutConf = self:_getLayoutConfig()
    local handMahScale = layoutConf.HandMahScale or 1
    if self:_isCombShowArrowByMah() and self._localSeat ~= CF.GameDefine.LOCAL_SEAT.BOTTOM then
        handMahScale = handMahScale * 0.9
    end
    return handMahScale
end

function UIMahHandArea:_getLayoutConfig()
    return UIMahConfig.HandAreaLayout[self._localSeat] or {}
end

function UIMahHandArea:_showDanFang(mahValue, bStand)
    if not mahValue or mahValue == CF.GameDefine.MAH_VALUE.NONE then
        self:_delDanFang()
        return
    end
    self:_delDanFang()
    local danFangMah = self:_createMah(mahValue, bStand or false)
    if danFangMah then
        self._danFangMah = danFangMah
        self:addChild(danFangMah)
    end
end

function UIMahHandArea:_delDanFang()
    if self._danFangMah then
        self._danFangMah:removeFromParent()
        self._danFangMah = nil
    end
end

-- 获取所有站立牌（包含手牌和单放牌）
function UIMahHandArea:_getAllStandMahs()
    local allStandMahs = {}
    for _, mah in pairs(self._handMahs) do
        allStandMahs[#allStandMahs + 1] = mah
    end
    if self._danFangMah then
        allStandMahs[#allStandMahs + 1] = self._danFangMah
    end
    return allStandMahs
end

-- 排序所有手牌（不包含单放）
function UIMahHandArea:_sortHandMahs()
    local allMahsValues = self:getAllHandMahValues()
    MahLogic.sortMahValues(allMahsValues, self._jokerData, self._insteadData)

    local tempHandMahs = clone(self._handMahs)
    self._handMahs = {}
    for _, mahValue in ipairs(allMahsValues) do
        for mahIndex, mah in ipairs(tempHandMahs) do
            if mah:getMahValue() == mahValue then
                table.insert(self._handMahs, mah)
                table.remove(tempHandMahs, mahIndex)
                break
            end
        end
    end
end

function UIMahHandArea:_isCombShowArrowByMah()
    if not CF.GameDefine then
        return false
    end
    return self:_getConfigValueByKey(UIMahConfig.MahSettingKey.LieType) == CF.GameDefine.COMB_LIE_TYPE.ARROW_BY_MAH
end

function UIMahHandArea:_isCombsAtLeft()
    if not CF.GameDefine or self._localSeat ~= CF.GameDefine.LOCAL_SEAT.BOTTOM then
        return true
    end
    if self:_getConfigValueByKey(UIMahConfig.MahSettingKey.PlaceType) == CF.GameDefine.HANDAREA_PLACE_TYPE.COMB_AT_LEFT then
        return true
    else
        local layoutConf = self:_getLayoutConfig()
        if not layoutConf.CombAnchorPointAtRight or not layoutConf.CombStartPosAtRight then
            return true
        end
    end
    return false
end

function UIMahHandArea:_getHandMahsStartPos()
    local layoutConf = self:_getLayoutConfig()
    local startPos = clone(layoutConf.HandMahsStartPos[self._maxHandMahCount]) or cc.p(0, 0)

    if self:_isCombsAtLeft() then
        if layoutConf.IsHorizontalAdd then
            if layoutConf.CombTotalLength then
                startPos.x = startPos.x + #self._combs * layoutConf.CombTotalLength * layoutConf.AddDirection
            elseif #self._combs > 0 then
                local lastCombPosX = self._combs[#self._combs]:getPositionX()
                local lastCombWidth = self._combs[#self._combs]:getBoundingBox().width
                startPos.x = lastCombPosX + (lastCombWidth + layoutConf.CombDistance) * layoutConf.AddDirection
            end
        else
            if layoutConf.CombTotalLength then
                startPos.y = #self._combs * layoutConf.CombTotalLength * layoutConf.AddDirection
            elseif #self._combs > 0 then
                local lastCombPosY = self._combs[#self._combs]:getPositionY()
                local lastCombHeight = self._combs[#self._combs]:getBoundingBox().height
                startPos.y = lastCombPosY + (lastCombHeight + layoutConf.CombDistance) * layoutConf.AddDirection
            end
        end
    end
    return startPos
end

function UIMahHandArea:_updateHandMahsPosition(bShowAction)
    if #self._handMahs <= 0 then
        return
    end

    local startPos = self:_getHandMahsStartPos()
    local layoutConf = self:_getLayoutConfig()
    local mahZorder = UIMahConfig.MaxHandMahsCount
    local doActionTime = 0
    for index, mah in ipairs(self._handMahs) do
        mah:setAnchorPoint(layoutConf.AnchorPoint)
        mah:setScale(self:_getHandMahScale())
        mah:setLocalZOrder(mahZorder)
        mahZorder = mahZorder - layoutConf.AddDirection
        local mahPos = cc.p(0,0)
        if layoutConf.IsHorizontalAdd then
            mahPos.x = startPos.x + (index - 1) * mah:getTopEdgeWidth() * layoutConf.AddDirection
        else
            mahPos.y = startPos.y + (index - 1) * mah:getTopEdgeWidth() * layoutConf.AddDirection
        end
        mah:setInitPosition(mahPos.x ,mahPos.y)
        if bShowAction and CF.settingData:getInsertStyle() == 1 then
            local mahIndex = self:_getMahIndexInHandMahs(mah)
            local tempAniTime
            if not self._tempDanFangMah or self._tempDanFangMah ~= mah then
                -- 非单放牌，直接移动
                tempAniTime = self:_doMahMoveTo(mah)
            elseif mahIndex == #self._handMahs then
                -- 是单放牌，但是单放为最后一张，也直接移动
                tempAniTime = self:_doMahMoveTo(mah)
            else
                -- 贝塞尔曲线飞单放牌
                tempAniTime = self:_flyMahBezierTo(mah, mahIndex)
            end
            if tempAniTime > doActionTime then
                doActionTime = tempAniTime
            end
        else
            mah:stopAllActions()
            mah:setRotation(0)
            mah:setPosition(mahPos)
        end
    end
    -- 触发与动画时长相等的延迟动画
    self._tempDanFangMah = nil
    if doActionTime > 0 then
        self:runAction(cc.Sequence:create(cc.DelayTime:create(doActionTime + 0.02), cc.CallFunc:create(function ()
            self:_onFinishAllMahsAction()
        end)))
    end

    if self._danFangMah then
        self._danFangMah:setScale(self:_getHandMahScale())
        self._danFangMah:setAnchorPoint(layoutConf.AnchorPoint)
        self._danFangMah:setLocalZOrder(mahZorder)
        local mahPos = cc.p(0,0)
        if layoutConf.IsHorizontalAdd then
            mahPos.x = startPos.x + (#self._handMahs * self._danFangMah:getTopEdgeWidth() + layoutConf.DanFangDistance) * layoutConf.AddDirection
        else
            mahPos.y = startPos.y + (#self._handMahs * self._danFangMah:getTopEdgeWidth() + layoutConf.DanFangDistance) * layoutConf.AddDirection
        end
        self._danFangMah:setInitPosition(mahPos.x ,mahPos.y)
        self._danFangMah:setPosition(mahPos.x ,mahPos.y)
    end
end

function UIMahHandArea:_onFinishAllMahsAction()
    self:_updateHandMahsPosition()
end

function UIMahHandArea:_showHandMahs(handMahsData)
    self:_clearHandMahs()

    for _, mahData in ipairs(handMahsData) do
        self:_addHandMah(mahData.mahValue, mahData.bStand or false)
    end
end

function UIMahHandArea:_addHandMah(mahValue, bStand)
    local handMah = self:_createMah(mahValue, bStand)
    if handMah then
        self:addChild(handMah)
        self._handMahs[#self._handMahs+1] = handMah
    end
    return handMah
end

--清除手牌
function UIMahHandArea:_clearHandMahs()
    for _, mah in pairs(self._handMahs) do
        mah:stopAllActions()
        mah:removeFromParent()
    end
    self._handMahs = {}
end

--清除手牌
function UIMahHandArea:_clearCombs()
    for _, comb in pairs(self._combs) do
        comb:stopAllActions()
        comb:removeFromParent()
    end
    self._combs = {}
end

function UIMahHandArea:_addComb(combData)
    local newComb = UIMahComb.new(self._localSeat, combData, self._config)
    newComb:setJokerData(self._jokerData, self._insteadData)
    if combData.bShowAni then
        newComb:showLastOutMahCursor(self._getCursorFunc)
    end
    self:addChild(newComb)
    table.insert(self._combs, newComb)
    return newComb
end

function UIMahHandArea:_findCombByMahValues(mahValues)
    for _, comb in ipairs(self._combs) do
        local combMahValues = comb:getMahValues()
        if MahLogic.checkMahValuesIsInTable(combMahValues, mahValues) then
            return comb
        end
    end
    return nil
end

-- 获取mah在手牌中序号，0表示单放（与原有逻辑保持一致）
function UIMahHandArea:_getMahIndexInHandMahs(mah)
    for index, handMah in ipairs(self._handMahs) do
        if mah == handMah then
            return index
        end
    end
    return 0
end

function UIMahHandArea:_setCombs(combDatas)
    self:_clearCombs()
    for _, combData in ipairs(combDatas) do
        self:_addComb(combData)
    end
    self:_updateCombsPosition()
    self:_updateHandMahsPosition(false)
end

function UIMahHandArea:_getCombAnchorPoint()
    local layoutConf = self:_getLayoutConfig()
    local combAnchorPoint = layoutConf.AnchorPoint
    if not self:_isCombsAtLeft() then
        combAnchorPoint = layoutConf.CombAnchorPointAtRight
    end
    return combAnchorPoint
end

function UIMahHandArea:_getCombScale()
    local layoutConf = self:_getLayoutConfig()
    local combScale = layoutConf.CombScale
    if self:_isCombShowArrowByMah() then
        combScale = combScale * 0.9
    end
    return combScale
end

function UIMahHandArea:_getCombAddDirection()
    local layoutConf = self:_getLayoutConfig()
    local addDirection = layoutConf.AddDirection
    if not self:_isCombsAtLeft() then
        addDirection = -1 * addDirection
    end
    return addDirection
end

function UIMahHandArea:_getCombStartPos()
    local layoutConf = self:_getLayoutConfig()
    local startPos = clone(layoutConf.CombsStartPos[self._maxHandMahCount])
    if not self:_isCombsAtLeft() then
        if self._maxHandMahCount == CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN then
            startPos = layoutConf.CombStartPosAtRight17
        elseif self._maxHandMahCount == CF.GameDefine.MAX_HAND_COUNT_TYPE.EIGHT then
            startPos = layoutConf.CombStartPosAtRight8
        else
            startPos = layoutConf.CombStartPosAtRight
        end
    end
    return startPos
end

function UIMahHandArea:_updateCombsPosition(bShowAction)
    local layoutConf = self:_getLayoutConfig()
    local startPos = self:_getCombStartPos()
    local addDirection = self:_getCombAddDirection()
    local combAnchorPoint = self:_getCombAnchorPoint()
    local combScale = self:_getCombScale()
    local lastComb
    for index, comb in ipairs(self._combs) do
        comb:setAnchorPoint(combAnchorPoint)
        comb:setScale(combScale)
        if addDirection > 0 then
            comb:setLocalZOrder(UIMahConfig.MaxCombsCount - index)
        end
        local combPosition = cc.p(startPos.x, startPos.y)
        if lastComb then
            local lastCombSize = lastComb:getBoundingBox()
            local lastCombPosX, lastCombPosY = lastComb:getPosition()
            if layoutConf.IsHorizontalAdd then
                combPosition.x = lastCombPosX + (lastCombSize.width + layoutConf.CombDistance) * addDirection
                combPosition.y = lastCombPosY
            else
                combPosition.x = lastCombPosX
                combPosition.y = lastCombPosY + (lastCombSize.height + layoutConf.CombDistance) * addDirection
            end
        end

        if bShowAction and #self._combs == index then
            comb:setPosition(combPosition.x - layoutConf.CombMoveDisX, combPosition.y - layoutConf.CombMoveDisY)
            local delayTime = 0.2
            local moveTime = 0.2
            self:performWithDelay(function ()
                if not tolua.isnull(comb) then
                    comb:runAction(cc.EaseQuarticActionOut:create(
                        cc.MoveTo:create(moveTime, combPosition)))
                end
            end, delayTime)

            local totalDelayTime = delayTime + moveTime + 0.02
            self:performWithDelay(function ()
                if not tolua.isnull(comb) then
                    comb:stopAllActions()
                    comb:setPosition(combPosition)
                end
            end, totalDelayTime)
        else
            comb:stopAllActions()
            comb:setPosition(combPosition)
        end
        lastComb = comb
    end
end

function UIMahHandArea:_delMah(mahValue)
    if self._danFangMah and self._danFangMah:getMahValue() == mahValue then
        self:_delDanFang()
        return true
    end

    for index, mah in ipairs(self._handMahs) do
        if mah:getMahValue() == mahValue then
            mah:removeFromParent()
            table.remove(self._handMahs, index)
            return true
        end
    end
    return false
end

function UIMahHandArea:_delMahWithIndex(index, mahValue)
    if index == 0 then
        if self._danFangMah and self._danFangMah:getMahValue() == mahValue then
            self:_delDanFang()
            return true
        end
    else
        local tempMah = self._handMahs[index]
        if tempMah and tempMah:getMahValue() == mahValue then
            tempMah:removeFromParent()
            table.remove(self._handMahs, index)
            return true
        end
    end
    return false
end

-- 将单放合并进手牌
function UIMahHandArea:_mergeDanFangToHandMahs()
    if not self._danFangMah then
        return
    end

    local danFangValue = self._danFangMah:getMahValue()
    
    local addMah = self:_addHandMah(danFangValue, self:_checkHandIsStand(danFangValue))
    addMah:setPosition(self._danFangMah:getPosition())
    self._tempDanFangMah = addMah
    self:_delDanFang()
end

function UIMahHandArea:_doMahMoveTo(mah)
    mah:stopAllActions()
    local animTime = 0.3
    local finalPos = mah:getInitPosition()
    local moveAction = cc.MoveTo:create(animTime,finalPos)
    mah:runAction(moveAction)
    return animTime
end

function UIMahHandArea:_flyMahBezierTo(mah, mahIndex)
    mah:stopAllActions()
    local distanceCounts = #self._handMahs - mahIndex
    if distanceCounts > 12 then
        distanceCounts = 12
    end
    if distanceCounts < 6 then
        distanceCounts = 6
    end
    local animTime = 0.0546 * distanceCounts
    local controlPoint1 = cc.p(mah:getPositionX()-20, 370)
    local controlPoint2 = cc.p(mah:getInitPosition().x +20, 370)
    local finalPos = mah:getInitPosition()
    local bezierAction = cc.EaseOut:create(cc.BezierTo:create(animTime,{controlPoint1, controlPoint2, finalPos}),animTime)
    local rotate1 = cc.RotateTo:create(0.05 * animTime,-15)
    local rotate2 = cc.RotateTo:create(0.41 * animTime,-8)
    local rotate3 = cc.RotateTo:create(0.1  * animTime,15)
    local rotate4 = cc.RotateTo:create(0.35 * animTime,5)
    local rotate5 = cc.RotateTo:create(0.075 * animTime,0)
    local seq1 = cc.Sequence:create(rotate1,rotate2,rotate3,rotate4,rotate5)
    local spawn1 = cc.Spawn:create(bezierAction,seq1)
    mah:runAction(spawn1)
    return animTime
end

function UIMahHandArea:_checkHandIsStand(handMahValue)
    local bStand = true
    if self._localSeat ~= CF.GameDefine.LOCAL_SEAT.BOTTOM then
        bStand = MahLogic.checkIsMahBack(handMahValue)
    end
    return bStand
end

function UIMahHandArea:_getMaxPlayerCount()
    return self._maxPlayerCount or CF.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN
end

function UIMahHandArea:_updateAllMahsJokerIcon()
    for _, comb in pairs(self._combs) do
        comb:setJokerData(self._jokerData, self._insteadData)
    end

    local allStandMahs = self:_getAllStandMahs()
    for _, mah in pairs(allStandMahs) do
        self:updateMahJokerIcon(mah)
    end
end

function UIMahHandArea:_onSetConfig(changedConfig)
    -- 设置所有站立手牌
    local allStandMahs = self:_getAllStandMahs()
    for _, mah in pairs(allStandMahs) do
        mah:setConfig(self._config)
    end
    -- 设置所有comb
    for _, comb in pairs(self._combs) do
        comb:setConfig(self._config)
    end

    self:_updateCombsPosition()
    self:_updateHandMahsPosition()
end

------------------------------------------------------------------------------------------
--对外接口
------------------------------------------------------------------------------------------

-- 获取所有手牌的牌值（不包含单放）
function UIMahHandArea:getAllHandMahValues()
    local allMahsValues = {}
    for _, mah in ipairs(self._handMahs) do
        table.insert(allMahsValues, mah:getMahValue())
    end
    return allMahsValues
end

function UIMahHandArea:setHandMahs(handMahValues, danFangMahValue, bShowAni)
    -- 设置手牌
    local handMahsData = {}
    for _, handMahValue in ipairs(handMahValues) do
        local bStand = self:_checkHandIsStand(handMahValue)
        table.insert(handMahsData, {mahValue = handMahValue, bStand = bStand})
    end
    self:_showHandMahs(handMahsData)
    -- 设置单放牌
    local bStand = self:_checkHandIsStand(danFangMahValue)
    self:_showDanFang(danFangMahValue, bStand)
    self:_sortHandMahs()
    self:_updateHandMahsPosition()
end

function UIMahHandArea:clearHandMahs()
    self:_clearHandMahs()
    self:_delDanFang()
end

function UIMahHandArea:clearCombs()
    self:_clearCombs()
end

function UIMahHandArea:dealDanFang(mahValue)
    local bStand = self:_checkHandIsStand(mahValue)
    self:_showDanFang(mahValue, bStand)
    self:_updateHandMahsPosition()
end

function UIMahHandArea:addComb(comb)
    self:_addComb(comb)
    self:_updateCombsPosition(comb.bShowAni)
    self:_updateHandMahsPosition(comb.bMoveHand)
end

-- 补杠
function UIMahHandArea:addTKongComb(combData)
    if combData.combFlag ~= CF.GameDefine.COMB_FLAG.TKONG
    or not combData.mahValues then
        return
    end
    local pungComb = self:_findCombByMahValues(combData.mahValues)
    if pungComb then
        pungComb:setCombData(combData)
    else
        self:addComb(combData)
    end
end

function UIMahHandArea:resetCombMahs(combData, combIndex)
    local ckongComb = self._combs[combIndex]
    if ckongComb then
        ckongComb:setCombData(combData)
    end
end

function UIMahHandArea:deleteMahs(mahValues)
    for _, mahValue in ipairs(mahValues) do
        local bDelByValue = self:_delMah(mahValue)
        if not bDelByValue then
            return false
        end
    end
    self:_mergeDanFangToHandMahs()
    self:_sortHandMahs()
    self:_updateHandMahsPosition(true)
    return true
end

function UIMahHandArea:deleteMahWithIndex(index, mahValue)
    local bDelByIndex = self:_delMahWithIndex(index, mahValue)
    if not bDelByIndex then
        -- 如果按index没有删除成功，则按mahValue删除
        local bDelByValue = self:_delMah(mahValue)
        if not bDelByValue then
            return false
        end
    end
    self:_mergeDanFangToHandMahs()
    self:_sortHandMahs()
    -- 如果通过index删除失败，则不播放动画，直接刷新
    self:_updateHandMahsPosition(bDelByIndex)
    return true
end

function UIMahHandArea:showHuAniSkin()
    local isUse = XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.MAH_HU)
    if isUse and self._localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
        -- 播放胡牌动画
        local UIMahConfigBase = CF.gameRequire("Modules.GameLayer.Config.UIMahConfigBase")
        if UIMahConfigBase.HuPaiAniUpConfig[XH.XGSJ_PROP_ID.MAH_HU] then
            local sprite = XH.UITool.createFrameAni(self._danFangMah, UIMahConfigBase.HuPaiAniUpConfig[XH.XGSJ_PROP_ID.MAH_HU])
            sprite:setPosition(self._danFangMah:getContentSize().width / 2, self._danFangMah:getContentSize().height + 260)
        end
        if UIMahConfigBase.HuPaiAniDownConfig[XH.XGSJ_PROP_ID.MAH_HU] then
            local sprite = XH.UITool.createFrameAni(self._danFangMah, UIMahConfigBase.HuPaiAniDownConfig[XH.XGSJ_PROP_ID.MAH_HU])
            sprite:setPosition(self._danFangMah:getContentSize().width / 2, self._danFangMah:getContentSize().height - 80)
            sprite:setLocalZOrder(-1)
        end
    else
        CF.UITool.playJsonAnimation(
        self._danFangMah,
        "lightning_ani_1",
        "res/animation/Mahjong/Base/lightning_ani_1/lightning_ani_1.ExportJson",
        1,
        cc.p(self._danFangMah:getContentSize().width / 2, self._danFangMah:getContentSize().height / 2 + 80)
        )
    end
end

function UIMahHandArea:setHuMahs(huHandMahValues, huMahValue, bHuMahShowAni)
    local handMahsData = {}
    for _, handMahValue in ipairs(huHandMahValues) do
        table.insert(handMahsData, {mahValue = handMahValue, bStand = false})
    end
    self:_showHandMahs(handMahsData)
    self:_showDanFang(huMahValue, false)
    self:_updateHandMahsPosition()
    if bHuMahShowAni and self._danFangMah then
        self:showHuAniSkin()
    end
end

function UIMahHandArea:clearTingInfo()
    local allStandMahs = self:_getAllStandMahs()
    for _, mah in pairs(allStandMahs) do
        mah:showTingIcon(false)
    end
end

-- 是否支持展示多大听
local isSupportMoreTing = {
    30133,30140,30145,30153
}
function UIMahHandArea:showTingInfo(tingMahValues)
    self:clearTingInfo()
    local gameid = CF.roomData:getGameID()
    for i = 1, #isSupportMoreTing do
        if isSupportMoreTing[i] == gameid then
            self:showTingInfoMore(tingMahValues)
            return
        end
    end
    local allStandMahs = self:_getAllStandMahs()
    for _, mah in pairs(allStandMahs) do
        local isShowTing = MahLogic.checkMahValueIsInTable(mah:getMahValue(), tingMahValues)
        mah:showTingIcon(isShowTing)
    end
end

function UIMahHandArea:showTingInfoMore(tingMahValues)
    local sortMahsData = {}
    local seat = CF.roomData:localToSeat(CF.GameDefine.LOCAL_SEAT.BOTTOM)
    local allData = CF.game:getModule("GameLayer"):getGameData():getCanHuMahsData(seat)
    local allStandMahs = self:_getAllStandMahs()
    for mahID, v in pairs(allData) do
        local count = 0
        local fanMax = -1
        for i = 1, #v do
            if v[i].huMahID ~= 0 then
                count = count + CF.game:getModule("GameLayer"):getGameData():getSurplusMahs(v[i].huMahID)
                local tmpFan = v[i].huInfoNum
                tmpFan = string.split(tmpFan, ",")
                if tmpFan[1] and tonumber(tmpFan[1]) then
                    tmpFan = tonumber(tmpFan[1])
                    if tmpFan > fanMax then
                        fanMax = tmpFan
                    end
                end
                if v[i].huMahID == 255 then
                    fanMax = 999
                    count = 999
                end
            end
        end
        sortMahsData[#sortMahsData + 1] = {
            mahID = mahID,
            fan = fanMax,
            count = count,
        }
    end
    local maxFanIDs = {}
    local maxCountIDs = {}
    if #sortMahsData > 1 then
        -- 计算最大番
        table.sort(sortMahsData, function(a, b)
            return a.fan > b.fan
        end)
        if sortMahsData[1].fan ~= sortMahsData[#sortMahsData].fan then
            for i = 1, #sortMahsData do
                if sortMahsData[i].fan == sortMahsData[1].fan then
                    maxFanIDs[#maxFanIDs + 1] = sortMahsData[i].mahID
                end
            end
        end
        -- 计算最大张
        table.sort(sortMahsData, function(a, b)
            return a.count > b.count
        end)
        if sortMahsData[1].count ~= sortMahsData[#sortMahsData].count then
            for i = 1, #sortMahsData do
                if sortMahsData[i].count == sortMahsData[1].count then
                    maxCountIDs[#maxCountIDs + 1] = sortMahsData[i].mahID
                end
            end
        end
    end
    for _, mah in pairs(allStandMahs) do
        local isShowTing = MahLogic.checkMahValueIsInTable(mah:getMahValue(), tingMahValues)
        local isShowFan = false
        local isShowCount = false
        for i = 1, #maxFanIDs do
            if maxFanIDs[i] == mah:getMahValue() then
                isShowFan = true
                break
            end
        end
        if not isShowFan then
            for i = 1, #maxCountIDs do
                if maxCountIDs[i] == mah:getMahValue() then
                    isShowCount = true
                    break
                end
            end
        end
        mah:showTingIcon(isShowTing, isShowFan, isShowCount)
    end
end

function UIMahHandArea:setJokerData(jokerData, insteadData)
    self._jokerData = jokerData
    self._insteadData = insteadData

    self:_updateAllMahsJokerIcon()
end

function UIMahHandArea:updateMahJokerIcon(mah)
    local isJoker = MahLogic.checkMahValueIsInTable(mah:getMahValue(), self._jokerData)
    mah:showJokerIcon(isJoker)
end

function UIMahHandArea:unSelectAllMahs()
    self:_unSelectAllMahs()
end

function UIMahHandArea:lightSameValueMahs(mahValue)
    for _, comb in pairs(self._combs) do
        comb:lightSameValueMahs(mahValue)
    end
end

function UIMahHandArea:clearSameValueLight()
    for _, comb in pairs(self._combs) do
        comb:clearSameValueLight()
    end
end

function UIMahHandArea:getMahWorldSpacePos(index)
    if not index then
        return nil
    end
    if index == 0 and self._danFangMah then
        return self._danFangMah:convertToWorldSpace(cc.p(0, 0))
    end
    if self._handMahs[index] then
        return self._handMahs[index]:convertToWorldSpace(cc.p(0, 0))
    end
    return nil
end

function UIMahHandArea:setGetCursorFunc(getCursorFunc)
    self._getCursorFunc = getCursorFunc
end

function UIMahHandArea:setMaxPlayerCount(maxPlayerCount)
    self._maxPlayerCount = maxPlayerCount
end

function UIMahHandArea:setMaxHandMahCount(maxHandMahCount)
    self._maxHandMahCount = maxHandMahCount
    -- comb布局会随最大手牌数变化
    self:_updateCombsPosition()
end

return UIMahHandArea