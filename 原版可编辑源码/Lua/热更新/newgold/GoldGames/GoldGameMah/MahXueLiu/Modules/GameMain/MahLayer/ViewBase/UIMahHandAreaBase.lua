local MahLogic = NG.GAME.gameRequire("Modules.GameMain.MahLayer.MahLogic")

local UIMahHandAreaBase = NG.GAME.gameClass("UIMahHandAreaBase", NG.ViewBase)

function UIMahHandAreaBase:ctor(localSeat, config)
    UIMahHandAreaBase.super.ctor(self)
    self._localSeat = localSeat
    self._handMahs = {}     -- 手牌(除单放)
    self._danFangMah = nil
    self._combs = {}
    self._maxHandMahCount = NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN
    self._UIConfig = nil
    self._freeSelect = false --自由选择
    self._freeSelectMahs = {} --自由选择的麻将
    self._gameData = NG.goldGame:getModule("GameMain.MahLayer"):getGameData()
    self._isFire = false
    self:_initView()
end

function UIMahHandAreaBase:_getUIConfig()
    if not self._UIConfig then
        self._UIConfig = NG.GAME.gameRequire("Modules.GameMain.MahLayer.Config.UIMahConfigBase")
    end
    return self._UIConfig
end

function UIMahHandAreaBase:_initView()
    
end

-- 获取麻将牌类型
function UIMahHandAreaBase:_getHandMahType(bStand)
    if self._localSeat == NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM then
        return bStand and NG.GAME.GameDefine.MAH_TYPE.STAND_FACE_FORWARD or NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP
    elseif self._localSeat == NG.GAME.GameDefine.LOCAL_SEAT.RIGHT then
        return bStand and NG.GAME.GameDefine.MAH_TYPE.STAND_FACE_TORIGHT or NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT
    elseif self._localSeat == NG.GAME.GameDefine.LOCAL_SEAT.TOP then
        return bStand and NG.GAME.GameDefine.MAH_TYPE.STAND_FACE_BACKWARD or NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP
    elseif self._localSeat == NG.GAME.GameDefine.LOCAL_SEAT.LEFT then
        return bStand and NG.GAME.GameDefine.MAH_TYPE.STAND_FACE_TOLEFT or NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT
    end
end

function UIMahHandAreaBase:_createMah(mahValue, bStand)
    return nil
end

function UIMahHandAreaBase:_getLayoutConfig()
    return {}
end

function UIMahHandAreaBase:_showDanFang(mahValue, bStand)
    if not mahValue or mahValue == NG.GAME.GameDefine.MAH_VALUE.NONE then
        return
    end
    self:_delDanFang()
    local danFangMah = self:_createMah(mahValue, bStand or false)
    if danFangMah then
        self._danFangMah = danFangMah
        self:addChild(danFangMah)
        self:updateMahBaiBian(danFangMah)
        if self._isFire then
            danFangMah:showFire()
        end
    end
end

function UIMahHandAreaBase:_delDanFang()
    if self._danFangMah then
        self._danFangMah:removeFromParent()
        self._danFangMah = nil
    end
end

-- 获取所有站立牌（包含手牌和单放牌）
function UIMahHandAreaBase:_getAllStandMahs()
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
function UIMahHandAreaBase:_sortHandMahs()
    local allMahsValues = self:getAllHandMahValues()
    MahLogic.sortMahValues(allMahsValues, self._jokerData, self._insteadValues)

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

function UIMahHandAreaBase:_isCombShowArrowByMah()
    return true
end

function UIMahHandAreaBase:_isCombsAtLeft()
    return true
end

function UIMahHandAreaBase:_getHandMahsStartPos()
    return cc.p(0, 0)
end

function UIMahHandAreaBase:_updateHandMahsPosition(bShowAction)
    
end

function UIMahHandAreaBase:_onFinishAllMahsAction()
    self:_updateHandMahsPosition()
end

function UIMahHandAreaBase:_showHandMahs(handMahsData)
    self:_clearHandMahs()

    for _, mahData in ipairs(handMahsData) do
        self:_addHandMah(mahData.mahValue, mahData.bStand or false)
    end
    self:updateAllMahsBaiBianIcon()
end

function UIMahHandAreaBase:_addHandMah(mahValue, bStand)
    local handMah = self:_createMah(mahValue, bStand)
    if handMah then
        self:addChild(handMah)
        self._handMahs[#self._handMahs+1] = handMah
        self:updateMahBaiBian(handMah)
        if self._isFire then
            handMah:showFire()
        end
    end
    return handMah
end

--清除手牌
function UIMahHandAreaBase:_clearHandMahs()
    for _, mah in pairs(self._handMahs) do
        mah:stopAllActions()
        mah:removeFromParent()
    end
    self._handMahs = {}
end

--清除手牌
function UIMahHandAreaBase:_clearCombs()
    for _, comb in pairs(self._combs) do
        comb:stopAllActions()
        comb:removeFromParent()
    end
    self._combs = {}
end

function UIMahHandAreaBase:_createComb(combData)
    return nil
end

function UIMahHandAreaBase:_addComb(combData)
    local newComb = self:_createComb(combData)
    if newComb then
        newComb:setJokerData(self._jokerData, self._insteadData)
        if combData.bShowAni then
            newComb:showLastOutMahCursor(self._getCursorFunc)
        end
        self:addChild(newComb)
        table.insert(self._combs, newComb)
    end
    return newComb
end

function UIMahHandAreaBase:_findCombByMahValues(mahValues)
    for _, comb in ipairs(self._combs) do
        local combMahValues = comb:getMahValues()
        if MahLogic.checkMahValuesIsInTable(combMahValues, mahValues) then
            return comb
        end
    end
    return nil
end

-- 获取mah在手牌中序号，0表示单放（与原有逻辑保持一致）
function UIMahHandAreaBase:_getMahIndexInHandMahs(mah)
    for index, handMah in ipairs(self._handMahs) do
        if mah == handMah then
            return index
        end
    end
    return 0
end

function UIMahHandAreaBase:_setCombs(combDatas)
    for _, combData in ipairs(combDatas) do
        self:_addComb(combData)
    end
    self:_updateCombsPosition()
    self:_updateHandMahsPosition(false)
end

function UIMahHandAreaBase:_updateCombsPosition(bShowAction)
    
end

function UIMahHandAreaBase:_delMah(mahValue)
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

function UIMahHandAreaBase:_delMahWithIndex(index, mahValue)
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
function UIMahHandAreaBase:_mergeDanFangToHandMahs()
    if not self._danFangMah then
        return
    end

    local danFangValue = self._danFangMah:getMahValue()
    
    local addMah = self:_addHandMah(danFangValue, self:_checkHandIsStand(danFangValue))
    addMah:setPosition(self._danFangMah:getPosition())
    self._tempDanFangMah = addMah
    self:_delDanFang()
end

function UIMahHandAreaBase:_checkHandIsStand(handMahValue)
    local bStand = true
    if self._localSeat ~= NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM then
        bStand = MahLogic.checkIsMahBack(handMahValue)
    end
    return bStand
end

function UIMahHandAreaBase:_updateAllMahsJokerIcon()
    for _, comb in pairs(self._combs) do
        comb:setJokerData(self._jokerData, self._insteadData)
    end

    local allStandMahs = self:_getAllStandMahs()
    for _, mah in pairs(allStandMahs) do
        self:updateMahJokerIcon(mah)
    end
end

function UIMahHandAreaBase:updateAllMahsBaiBianIcon(mahValue)
    local allStandMahs = self:_getAllStandMahs()
    for _, mah in pairs(allStandMahs) do
        if mahValue == nil or mahValue == mah:getMahValue() then
            self:updateMahBaiBian(mah)
        end
    end
end

------------------------------------------------------------------------------------------
-- 麻将子选中相关
------------------------------------------------------------------------------------------

function UIMahHandAreaBase:_setMahSelected(mah, bSelected)
    if not mah or bSelected == nil then
        return
    end
    if bSelected then
        self:_setAllMahsUnSelected()
    end
    if bSelected and self._selectedMahCallBack then
        self._selectedMahCallBack(mah:getMahValue())
    end
    mah:setSelected(bSelected)
end

function UIMahHandAreaBase:_setAllMahsUnSelected()
    local allStandMahs = self:_getAllStandMahs()
    for _, mah in pairs(allStandMahs) do
        self:_setMahSelected(mah, false)
        self:_setMahDraging(mah, false)
    end
end

function UIMahHandAreaBase:_unSelectAllMahs()
    if self._selectedMahCallBack then
        self._selectedMahCallBack()
    end
    self:_setAllMahsUnSelected()
end

function UIMahHandAreaBase:_getSelectedMah()
    local allStandMahs = self:_getAllStandMahs()
    for _, mah in pairs(allStandMahs) do
        if mah:isSelected() then
            return mah
        end
    end
    return nil
end

function UIMahHandAreaBase:_getDragMahColor()
    return self:_getUIConfig().MahColor.Drag
end

function UIMahHandAreaBase:_getNormalMahColor()
    return self:_getUIConfig().MahColor.Normal
end

function UIMahHandAreaBase:_setMahDraging(mah, isDraging)
    if not mah then
        return
    end
    if mah:isMahTouchLimit() then
        return
    end
    if isDraging then
        mah:setColor(self:_getDragMahColor())
    else
        mah:setColor(self:_getNormalMahColor())
    end
end

------------------------------------------------------------------------------------------
--对外接口
------------------------------------------------------------------------------------------

-- 获取所有手牌的牌值（不包含单放）
function UIMahHandAreaBase:getAllHandMahValues()
    local allMahsValues = {}
    for _, mah in ipairs(self._handMahs) do
        table.insert(allMahsValues, mah:getMahValue())
    end
    return allMahsValues
end

function UIMahHandAreaBase:setHandMahs(handMahValues, danFangMahValue, bShowAni)
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

function UIMahHandAreaBase:clearHandMahs()
    self:_clearHandMahs()
    self:_delDanFang()
    self:hideFire()
end

function UIMahHandAreaBase:clearCombs()
    self:_clearCombs()
end

function UIMahHandAreaBase:dealDanFang(mahValue)
    local bStand = self:_checkHandIsStand(mahValue)
    self:_showDanFang(mahValue, bStand)
    self:_updateHandMahsPosition()
end

function UIMahHandAreaBase:addComb(comb)
    self:_addComb(comb)
    self:_updateCombsPosition(comb.bShowAni)
    self:_updateHandMahsPosition(comb.bMoveHand)
end

-- 补杠
function UIMahHandAreaBase:addTKongComb(combData)
    if (combData.combFlag ~= NG.GAME.GameDefine.COMB_FLAG.TKONG  and combData.combFlag ~= NG.GAME.GameDefine.COMB_FLAG.CKONG) or not combData.mahValues then
        return
    end
    local pungComb = self:_findCombByMahValues(combData.mahValues)
    if pungComb then
        pungComb:setCombData(combData)
    else
        self:addComb(combData)
    end
end

function UIMahHandAreaBase:resetCombMahs(combData, combIndex)
    local ckongComb = self._combs[combIndex]
    if ckongComb then
        ckongComb:setCombData(combData)
    end
end

function UIMahHandAreaBase:deleteMahs(mahValues)
    for _, mahValue in ipairs(mahValues) do
        local bDelByValue = self:_delMah(mahValue)
        if not bDelByValue then
            return false
        end
    end
    self:_mergeDanFangToHandMahs()
    self:_sortHandMahs()
    self:_updateHandMahsPosition(true)
    -- self:setFreeSelect(false)
    return true
end

function UIMahHandAreaBase:deleteMahWithIndex(index, mahValue)
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

function UIMahHandAreaBase:setHuMahs(huHandMahValues, huMahValue, bHuMahShowAni)
    local handMahsData = {}
    for _, handMahValue in ipairs(huHandMahValues) do
        table.insert(handMahsData, {mahValue = handMahValue, bStand = false})
    end
    self:_showHandMahs(handMahsData)
    self:_showDanFang(huMahValue, false)
    self:_updateHandMahsPosition()
end

function UIMahHandAreaBase:clearTingInfo()
    local allStandMahs = self:_getAllStandMahs()
    for _, mah in pairs(allStandMahs) do
        mah:showTingIcon(false)
    end
end

function UIMahHandAreaBase:showTingInfo(tingMahValues)
    self:clearTingInfo()
    local allStandMahs = self:_getAllStandMahs()
    for _, mah in pairs(allStandMahs) do
        local isShowTing = MahLogic.checkMahValueIsInTable(mah:getMahValue(), tingMahValues)
        mah:showTingIcon(isShowTing)
    end
end

function UIMahHandAreaBase:resetJokerData()
    self._jokerData = nil
end

function UIMahHandAreaBase:setJokerData(jokerData, insteadData)
    self._jokerData = jokerData
    self._insteadData = insteadData

    self:_updateAllMahsJokerIcon()
end

function UIMahHandAreaBase:updateMahJokerIcon(mah)
    local isJoker = MahLogic.checkMahValueIsInTable(mah:getMahValue(), self._jokerData)
    mah:showJokerIcon(isJoker)
    -- self:updateMahBaiBian(mah)
end

function UIMahHandAreaBase:updateMahBaiBian(mah)
    if self._localSeat == NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM then
        local mv = mah:getMahValue()
        local idx = 0
        local allMahs = self:_getAllStandMahs()
        local bFind = false
        for i=1, #allMahs do
            if allMahs[i]:getMahValue() == mah:getMahValue() then
                idx = idx +1
                if allMahs[i] == mah then
                    bFind = true
                    break
                end
            end
        end
        if not bFind then
            idx = idx + 1
            -- printError("百变牌 序号查询异常"..mah:getMahValue())
            -- return
        end
        local isBaiBian, cnt = self._gameData:isBaiBian(mv, idx)
        mah:showBaiBianIcon(isBaiBian)
        mah:showBaiBianBtn(isBaiBian, cnt, idx)
    end
end

function UIMahHandAreaBase:unSelectAllMahs()
    self:_unSelectAllMahs()
end

function UIMahHandAreaBase:lightSameValueMahs(mahValue)
    for _, comb in pairs(self._combs) do
        comb:lightSameValueMahs(mahValue)
    end
end

function UIMahHandAreaBase:clearSameValueLight()
    for _, comb in pairs(self._combs) do
        comb:clearSameValueLight()
    end
end

function UIMahHandAreaBase:setGetCursorFunc(getCursorFunc)
    self._getCursorFunc = getCursorFunc
end

function UIMahHandAreaBase:setMaxHandMahCount(maxHandMahCount)
    for _, count in pairs(NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE) do
        if count == maxHandMahCount then
            self._maxHandMahCount = maxHandMahCount
        end
    end
end

function UIMahHandAreaBase:addPlayMahCallBack(playMahCallBack)
    self._playMahCallBack = playMahCallBack
end

function UIMahHandAreaBase:addSelectedMahCallBack(selectedMahCallBack)
    self._selectedMahCallBack = selectedMahCallBack
end

function UIMahHandAreaBase:setLimitHandMahs(limitMahValues)
    limitMahValues = limitMahValues or {}
    local templimitMahValues = clone(limitMahValues)
    local allStandMahs = self:_getAllStandMahs()
    for _, mah in ipairs(allStandMahs) do
        local isLimit, index = MahLogic.checkMahValueIsInTable(mah:getMahValue(), templimitMahValues)
        mah:setMahTouchLimit(isLimit)
        if isLimit then
            table.remove(templimitMahValues, index)
        end
    end
end

function UIMahHandAreaBase:flushMahBack()
    local handMahsData = {}
    for i = 1, #self._handMahs do
        handMahsData[i] = {mahValue = NG.GAME.GameDefine.MAH_VALUE.BACK, bStand = false}
    end
    self:_showHandMahs(handMahsData)
    -- 设置单放牌
    self:_showDanFang(NG.GAME.GameDefine.MAH_VALUE.BACK, false)
    self:_updateHandMahsPosition()
end

function UIMahHandAreaBase:setFreeSelect(freeSelect)
    self._freeSelect = freeSelect
    self._freeSelectMahs = {}
    -- self:_unSelectAllMahs()
end

function UIMahHandAreaBase:getFreeSelectMahs()
    return self._freeSelectMahs
end

function UIMahHandAreaBase:addMahs(mahValues, df)
    local mahs = {}
    for _, mahData in ipairs(mahValues) do
        table.insert(mahs, self:_addHandMah(mahData.mahValue, mahData.bStand or false))
    end
    -- self:_mergeDanFangToHandMahs()
    self:_sortHandMahs()
    if df then
        self:_showDanFang(df, true)
    end
    self:_updateHandMahsPosition(false)

    for _, mah in ipairs(mahs) do
        mah:setSelected(true)
    end
    if df then
        self._danFangMah:setSelected(true)
    end
    self:runAction(cc.Sequence:create(cc.DelayTime:create(0.5),cc.CallFunc:create(function()
        self:_updateHandMahsPosition(true)
    end)))
    return true
end
function UIMahHandAreaBase:updateBaiBian(data)
    local allMahs = self:_getAllStandMahs()
    local mah = nil
    if data.mah then
        for i=1, #allMahs do
            if allMahs[i] == data.mah then
                mah = allMahs[i]
                break
            end
        end
    else
        for i=1, #allMahs do
            if allMahs[i]:getMahValue() == data.nValueBefore and allMahs[i]._bShowBaiBianBtn then
                mah = allMahs[i]
                break
            end
        end
    end
    if mah == nil then
        printError("变牌数据异常"..data.nValueBefore)
        return
    end
    mah:BaiBianSyn(data.nValueAfter, data.nCnt, data.newIdx)
    mah:setSelected(true)
    mah:showBianAni()
    self:runAction(cc.Sequence:create(cc.DelayTime:create(0.3),cc.CallFunc:create(function()
        self:_sortHandMahs()
        mah.bBianPai = true
        self:_updateHandMahsPosition(true)
    end)))
    self:updateAllMahsBaiBianIcon(data.nValueBefore)
end

function UIMahHandAreaBase:bankrup()
end

function UIMahHandAreaBase:showFire()
    self._isFire = true
    local allStandMahs = self:_getAllStandMahs()
    for _, mah in pairs(allStandMahs) do
        mah:showFire(mah)
    end
end

function UIMahHandAreaBase:hideFire()
    self._isFire = false
    local allStandMahs = self:_getAllStandMahs()
    for _, mah in pairs(allStandMahs) do
        mah:hideFire(mah)
    end
end
return UIMahHandAreaBase