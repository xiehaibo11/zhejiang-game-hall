local UIMah = CF.gameRequire("Modules.GameLayer.View2D.UIMah")
local UIMahConfig = CF.gameRequire("Modules.GameLayer.Config.UIMahConfig2D")
local MahLogic = CF.gameRequire("Modules.GameLayer.MahLogic")
local UIMahSettingValueInterface = CF.gameRequire("Modules.GameLayer.View2D.Interface.UIMahSettingValueInterface")

local UIMahComb = CF.gameClass("UIMahComb2D", "game.Mahjong.BasicMahjong.Modules.GameLayer.ViewBase.UIMahCombBase")

local SingleLayerMahCount = 3

function UIMahComb:ctor(localSeat, combData, config)
    UIMahSettingValueInterface.extend(self, config)
    UIMahComb.super.ctor(self)

    self._localSeat = localSeat
    self._combData = combData or {}

    self:_initView()
end

function UIMahComb:_initView()
    self._allMahs = {}
    
    self:_initMahs()
end

function UIMahComb:_initMahs()
    self:_resetMahs()
end

function UIMahComb:_clearAllMahs()
    for _, mah in pairs(self._allMahs) do
        mah:removeFromParent()
    end
    self._allMahs = {}
end

-- 重置所有麻将牌
function UIMahComb:_resetMahs()
    self:_clearAllMahs()

    local bFindInMah = false
    local showMahValues = self:getShowMahValues()
    local inMahValue = self._combData.inMahValue or CF.GameDefine.MAH_VALUE.NONE
    for index, mahValue in ipairs(showMahValues) do
        if index > UIMahConfig.MaxCombMahsCount then
            break
        end
        local isUsedByArrow = false 
        if self:_isArrowByIconLieType() then
            isUsedByArrow = not bFindInMah and inMahValue == mahValue
        elseif self:_isNeedShowArrowByMah() then
            -- if self._combData.combFlag == CF.GameDefine.COMB_FLAG.CHOW then
            --     isUsedByArrow = not bFindInMah and inMahValue == mahValue
            -- else
                local arrowMahIndex = UIMahConfig.CombMahLayout[self._localSeat].FaceUp.Rotate[self._combData.fromLocalSeat].MahIndex
                isUsedByArrow = arrowMahIndex == index
            -- end
        end
        local lieMah = self:_createLieMah(mahValue, isUsedByArrow)
        self:addChild(lieMah)
        self._allMahs[#self._allMahs + 1] = lieMah
        if inMahValue == mahValue then
            bFindInMah = true
        end
    end

    self:_updateLayoutAndSize()
end

-- 是否需要通过横向摆放麻将子来表示进牌箭头方向
function UIMahComb:_isNeedShowArrowByMah()
    if self:_isArrowByIconLieType() then
        return false
    end
    if not MahLogic.checkLocalSeat(self._combData.fromLocalSeat) then
        return false
    end
    if self:getCombFlag() == CF.GameDefine.COMB_FLAG.CKONG then
        return false
    end
    return true
end

-- 排序吃comb， 使每个位置显示的牌顺序保持一致
function UIMahComb:_sortChowMahValues(showMahValues)
    if self:getCombFlag() ~= CF.GameDefine.COMB_FLAG.CHOW then
        return showMahValues
    end
    if self._localSeat == CF.GameDefine.LOCAL_SEAT.TOP or self._localSeat == CF.GameDefine.LOCAL_SEAT.LEFT then
        local finalMahValues = {}
        local nowMahValues = showMahValues or {}
        local nowMahsCount = #nowMahValues
        for i = 1, nowMahsCount do
            finalMahValues[i] = nowMahValues[nowMahsCount+1-i]
        end
        return finalMahValues
    end
    return showMahValues
end

-- 是否是通过图标来显示进牌方向
function UIMahComb:_isArrowByIconLieType()
    return self:_getConfigValueByKey(UIMahConfig.MahSettingKey.LieType) == CF.GameDefine.COMB_LIE_TYPE.ARROW_BY_ICON
end

-- 创建单张麻将牌
function UIMahComb:_createLieMah(mahValue, bUsedByArrow)
    local bShowBack = not MahLogic.isNormalMahValue(mahValue)
    local mahType = self:_getMahType(bShowBack, bUsedByArrow)
    local lieMah = UIMah.new(mahType, self._config)
    lieMah:setMahValue(mahValue)
    self:updateMahJokerIcon(lieMah)

    local fromLocalSeat = self._combData.fromLocalSeat
    if MahLogic.checkLocalSeat(fromLocalSeat) and self._localSeat ~= fromLocalSeat and bUsedByArrow and self:_isArrowByIconLieType() then
        local markLayoutConfig = UIMahConfig.CombArrowLayout[self._localSeat]
        if markLayoutConfig then
            local mark = ccui.ImageView:create()
            mark:loadTexture(UIMahConfig.CombArrowImage, ccui.TextureResType.localType)
            local startRotation = 90 * (4 - self._localSeat)
            mark:setRotation(startRotation + 90 * (self._localSeat - fromLocalSeat))
            mark:setPositionX(lieMah:getBoundingBox().width * markLayoutConfig.IconPosition.x)
            mark:setPositionY(lieMah:getBoundingBox().height * markLayoutConfig.IconPosition.y)
            mark:setScale(markLayoutConfig.IconScale)
            lieMah:addChild(mark, UIMahConfig.MahZorderConf.ArrowIcon)
        end
    end
    return lieMah
end

function UIMahComb:_getMahType(bShowBack, bUsedByArrow)
    if self:_isArrowByIconLieType() then
        if bShowBack then
            return UIMahConfig.CombMahLayout[self._localSeat].FaceDown
        else
            return UIMahConfig.CombMahLayout[self._localSeat].FaceUp.Normal
        end
    else
        if bShowBack then
            return UIMahConfig.CombMahLayout[self._localSeat].FaceDown
        elseif bUsedByArrow and MahLogic.checkLocalSeat(self._combData.fromLocalSeat) then
            return UIMahConfig.CombMahLayout[self._localSeat].FaceUp.Rotate[self._combData.fromLocalSeat].MahType
        else
            return UIMahConfig.CombMahLayout[self._localSeat].FaceUp.Normal
        end
    end
end

function UIMahComb:_updateLayoutAndSize()
    if self._localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM or self._localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
        self:_updateVerticalLayoutAndSize()
    else
        self:_updateHorizontalLayoutAndSize()
    end
end

function UIMahComb:_getAlignMahIndex(index)
    local arrowMahIndex = 0
    if self:_isNeedShowArrowByMah() then
        arrowMahIndex = UIMahConfig.CombMahLayout[self._localSeat].FaceUp.Rotate[self._combData.fromLocalSeat].MahIndex
        if arrowMahIndex > 4 or arrowMahIndex < 0 then
            arrowMahIndex = 0
        end
    end
    local alignMahIndex = UIMahConfig.CombAlignIndexConfig[self._localSeat][arrowMahIndex][index-SingleLayerMahCount] or 1
    return alignMahIndex
end

function UIMahComb:_updateHorizontalLayoutAndSize()
    local totalWidth = 0
    local totalHeight = 0
    for index, mah in ipairs(self._allMahs) do
        local mahSize = mah:getContentSize()
        if index > SingleLayerMahCount then
            local alignMahIndex = self:_getAlignMahIndex(index)
            local alignMah = self._allMahs[alignMahIndex]
            mah:setPosition(alignMah:getPositionX(), alignMah:getPositionY() + mah:getThick())
            mah:setLocalZOrder(alignMah:getLocalZOrder() + SingleLayerMahCount)
        else
            if totalHeight == 0 then
                mah:setPosition(mahSize.width / 2, mahSize.height / 2)
                totalHeight = mahSize.height
            else
                mah:setPosition(mahSize.width / 2, totalHeight - mahSize.height / 2 + mah:getTopEdgeWidth())
                totalHeight = totalHeight + mah:getTopEdgeWidth()
            end
            if mahSize.width > totalWidth then
                totalWidth = mahSize.width
            end
            mah:setLocalZOrder(SingleLayerMahCount - index)
        end
    end
    self:setContentSize(cc.size(totalWidth, totalHeight))
end

function UIMahComb:_updateVerticalLayoutAndSize()
    local totalWidth = 0
    local totalHeight = 0
    for index, mah in ipairs(self._allMahs) do
        if index > SingleLayerMahCount then
            local alignMahIndex = self:_getAlignMahIndex(index)
            local alignMah = self._allMahs[alignMahIndex]
            mah:setPosition(alignMah:getPositionX(), alignMah:getPositionY() + mah:getThick())
        else
            local mahSize = mah:getContentSize()
            mah:setPosition( totalWidth + mahSize.width / 2, mahSize.height / 2)
            totalWidth = totalWidth + mahSize.width
            if mahSize.height > totalHeight then
                totalHeight = mahSize.height
            end
        end
        mah:setLocalZOrder(index)
    end
    self:setContentSize(cc.size(totalWidth, totalHeight))
end

function UIMahComb:_onSetConfig(changedConfig)
    if changedConfig and changedConfig[UIMahConfig.MahSettingKey.LieType] then
        -- 配置变化，重置所有手牌
        self:_resetMahs()
        return
    end
    for _, mah in pairs(self._allMahs) do
        mah:setConfig(self._config)
    end
    self:_updateLayoutAndSize()
end

function UIMahComb:setCombData(combData)
    self._combData = combData or {}
    self:_resetMahs()
end

function UIMahComb:getCombFlag()
    return self._combData.combFlag or CF.GameDefine.COMB_FLAG.NONE
end

function UIMahComb:getMahValues()
    return self._combData.mahValues or {}
end

function UIMahComb:getShowMahValues()
    local backUpMahIndexs = self._combData.showBackIndexs or {}
    local mahValues = clone(self._combData.mahValues or {})
    local inMahValue = self._combData.inMahValue or CF.GameDefine.MAH_VALUE.NONE
    local showMahValues = {}
    local bFindInMah = false
    if self:_isNeedShowArrowByMah() then
        if inMahValue ~= CF.GameDefine.MAH_VALUE.NONE then
            table.insert(showMahValues, inMahValue)
            for index, mahValue in ipairs(mahValues) do
                if mahValue == inMahValue and not bFindInMah then
                    table.remove(mahValues, index)
                    bFindInMah = true
                end
            end
        end
    end
    for index, mahValue in ipairs(mahValues) do
        if MahLogic.checkMahValueIsInTable(index ,backUpMahIndexs) then
            table.insert(showMahValues, CF.GameDefine.MAH_VALUE.BACK)
        else
            table.insert(showMahValues, mahValue)
        end
    end
    return self:_sortChowMahValues(showMahValues)
end

function UIMahComb:setJokerData(jokerData, insteadData)
    self._jokerData = jokerData
    self._insteadData = insteadData

    for _, mah in pairs(self._allMahs) do
        self:updateMahJokerIcon(mah)
    end
end

function UIMahComb:updateMahJokerIcon(mah)
    local isJoker = MahLogic.checkMahValueIsInTable(mah:getMahValue(), self._jokerData)
    mah:showJokerIcon(isJoker)
end

function UIMahComb:getMahNodes()
    return self._allMahs or {}
end

function UIMahComb:lightSameValueMahs(mahValue)
    for _, mah in pairs(self._allMahs) do
        if mahValue == mah:getMahValue() then
            mah:setColor(UIMahConfig.MahColor.SameValue)
        else
            mah:setColor(UIMahConfig.MahColor.Normal)
        end
    end
end

function UIMahComb:clearSameValueLight()
    for _, mah in pairs(self._allMahs) do
        mah:setColor(UIMahConfig.MahColor.Normal)
    end
end

-- 显示最后出牌的标识
-- getCursorFunc为获取标识动画的方法
function UIMahComb:showLastOutMahCursor(getCursorFunc)
    if not getCursorFunc then
        return
    end
    for _, mah in ipairs(self._allMahs) do
        if mah:getMahValue() == self._combData.inMahValue then
            local mahSize = mah:getContentSize()
            local cursorImg = getCursorFunc()
            cursorImg:setPosition(cc.p(mahSize.width/2, mahSize.height + 20))
            mah:addChild(cursorImg, UIMahConfig.MahZorderConf.LastOutFlagIcon)
            return
        end
    end
end

-- 获取真实的高度，ContentSize设置的只是单层的尺寸，ContentSize.height只是单层高度
function UIMahComb:getRealHeight()
    if #self._allMahs <= 0 then
        return 0
    end
    local layerCount = math.ceil(#self._allMahs / SingleLayerMahCount)
    return self:getContentSize().height + (layerCount - 1) * self._allMahs[1]:getThick()
end

return UIMahComb