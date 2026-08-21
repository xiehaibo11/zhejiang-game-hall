local UIMah = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View2D.UIMah")
local UIMahConfig = NG.GAME.gameRequire("Modules.GameMain.MahLayer.Config.UIMahConfig2D")
local MahLogic = NG.GAME.gameRequire("Modules.GameMain.MahLayer.MahLogic")
local UIMahSettingValueInterface = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View2D.Interface.UIMahSettingValueInterface")
local UIMahOutArea = NG.GAME.gameClass("UIMahOutArea2D", "newgold.GoldGames.GoldGameMah.MahXueLiu.Modules.GameMain.MahLayer.ViewBase.UIMahOutAreaBase")

function UIMahOutArea:ctor(config)
    UIMahSettingValueInterface.extend(self, config)
    UIMahOutArea.super.ctor(self)

    self._allOutMahs = {}
    self:initMahConfigData()
end

function UIMahOutArea:initMahConfigData()
    self.emptyCount = UIMahConfig.OutMahsCountConf.EmptyCount
    self.singleLineMaxCount = UIMahConfig.OutMahsCountConf.SingleLineMaxCount
end

function UIMahOutArea:_getMahType()
    return UIMahConfig.OutMahsMahType.Together
end

function UIMahOutArea:_createSingleOutMah(mahValue)
    if mahValue == nil then
        return nil
    end
    local mahType = self:_getMahType()
    local lieMah = UIMah.new(mahType, self._config)
    if mahValue ~= nil then
        lieMah:setMahValue(mahValue)
        self:updateMahJokerIcon(lieMah)
    end
    return lieMah
end

function UIMahOutArea:_getSingleLayerMaxCount()
    local maxCount = 0
    for _, emptyCount in ipairs(self.emptyCount) do
        maxCount = maxCount + (self.singleLineMaxCount - emptyCount)
    end
    return maxCount
end

function UIMahOutArea:setOutAreaEnoughCallback(func)
    self._callback = func
end

-- 获取下一张麻将所在位置（第几层、第几行、第几个）
function UIMahOutArea:_getNextMahPosIndex()
    local outMahsTotalCount = #self._allOutMahs
    local singleLayerMaxCount = self:_getSingleLayerMaxCount() -- 单层最大麻将数
    local singleLineMaxCount = self.singleLineMaxCount -- 单行最大麻将数
    local nowLayerCount = outMahsTotalCount % singleLayerMaxCount -- 当前这一层已放置的麻将数
    if outMahsTotalCount > 0 and nowLayerCount == 0 then
        nowLayerCount = outMahsTotalCount
    end
    if outMahsTotalCount == 0 or singleLayerMaxCount == outMahsTotalCount then
        return math.ceil(outMahsTotalCount/singleLayerMaxCount) + 1, 1, 1
    end
    local lineIndex = 1
    local mahIndex = 1
    for index, emptyCount in ipairs(self.emptyCount) do
        local singleLineCount = singleLineMaxCount - emptyCount
        if nowLayerCount < singleLineCount then
            lineIndex = index
            mahIndex = nowLayerCount + 1
            if nowLayerCount >= math.floor(singleLineCount / 2) then
                mahIndex = mahIndex + emptyCount
            end
            break
        elseif nowLayerCount == singleLineCount then
            lineIndex = index + 1
            mahIndex = 1
            break
        end
        nowLayerCount = nowLayerCount - singleLineCount
    end
    return math.ceil(outMahsTotalCount/singleLayerMaxCount), lineIndex, mahIndex
end

function UIMahOutArea:_addOutMah(outMah)
    if not outMah then
        return
    end
    local singleLineMaxCount = self.singleLineMaxCount
    local mahEdgeWidth = outMah:getTopEdgeWidth()
    local mahEdgeHeight = outMah:getLeftRightEdgeHeight()
    local mahThick = outMah:getThick()
    local layerIndex, lineIndex, mahIndex = self:_getNextMahPosIndex()
    local mahPosX = (mahIndex-1-singleLineMaxCount/2) * mahEdgeWidth
    local mahPosY = (layerIndex - 1)*mahThick - mahEdgeHeight*(lineIndex-1)
    outMah:setScale(UIMahConfig.OutMahsLayout.Together)
    outMah:setAnchorPoint(display.LEFT_BOTTOM)
    outMah:setPosition(cc.p(mahPosX, mahPosY))
    self:addChild(outMah)
    if self:judgeOutAreaEnough() then
        if self._callback then 
            self._callback()
        end 
    end
end

function UIMahOutArea:_onSetConfig(changedConfig)
    for _, mah in pairs(self._allOutMahs) do
        mah:setConfig(self._config)
    end
end

function UIMahOutArea:setOutMahs(mahValues)
    self:clearAllOutMahs()
    self:addOutMahs(mahValues)
end

function UIMahOutArea:addOutMahs(mahValues)
    for _, mahValue in ipairs(mahValues) do
        local outMah = self:_createSingleOutMah(mahValue)
        self:_addOutMah(outMah)
        table.insert(self._allOutMahs, outMah)
    end
end

function UIMahOutArea:clearAllOutMahs()
    for _, mah in pairs(self._allOutMahs) do
        mah:removeFromParent()
    end
    self._allOutMahs = {}
end

function UIMahOutArea:deleteLastOutMah()
    if #self._allOutMahs > 0 then
        self._allOutMahs[#self._allOutMahs]:removeFromParent()
        table.remove(self._allOutMahs, #self._allOutMahs)
    end
end

function UIMahOutArea:setJokerData(jokerData, insteadData)
    self._jokerData = jokerData
    self._insteadData = insteadData

    for _, mah in pairs(self._allOutMahs) do
        self:updateMahJokerIcon(mah)
    end
end

function UIMahOutArea:updateMahJokerIcon(mah)
    local isJoker = MahLogic.checkMahValueIsInTable(mah:getMahValue(), self._jokerData)
    mah:showJokerIcon(isJoker)
end

function UIMahOutArea:getLastOutMah()
    if #self._allOutMahs > 0 then
        return self._allOutMahs[#self._allOutMahs]
    end
    return nil
end

function UIMahOutArea:lightSameValueMahs(mahValue)
    for _, mah in pairs(self._allOutMahs) do
        if mahValue == mah:getMahValue() then
            mah:setColor(UIMahConfig.MahColor.SameValue)
        else
            mah:setColor(UIMahConfig.MahColor.Normal)
        end
    end
end

function UIMahOutArea:clearSameValueLight()
    for _, mah in pairs(self._allOutMahs) do
        mah:setColor(UIMahConfig.MahColor.Normal)
    end
end

--------------------------------------------------
--最后一张牌 设置光标
--------------------------------------------------
function UIMahOutArea:showLastOutMahCursor()
    if not self._getCursorFunc then
        return
    end
    local lastMah = self:getLastOutMah()
    local mahSize = lastMah:getContentSize()
    local cursorImg = self._getCursorFunc()
    cursorImg:setPosition(cc.p(mahSize.width/2, mahSize.height + 20))
    lastMah:addChild(cursorImg, UIMahConfig.MahZorderConf.LastOutFlagIcon)
end

function UIMahOutArea:setGetCursorFunc(getCursorFunc)
    self._getCursorFunc = getCursorFunc
end

function UIMahOutArea:setMahEmptyCount(EmptyCount)
    self.emptyCount = EmptyCount
end

function UIMahOutArea:setMahSingleLineMaxCount(SingleLineMaxCount)
    self.singleLineMaxCount = SingleLineMaxCount
end

function UIMahOutArea:judgeOutAreaEnough()
    local outMahsTotalCount = #self._allOutMahs
    local singleLayerMaxCount = self:_getSingleLayerMaxCount()
    if outMahsTotalCount >= singleLayerMaxCount then 
        return true 
    else
        return false
    end
end

return UIMahOutArea