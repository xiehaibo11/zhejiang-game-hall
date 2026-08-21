local MahLogic = NG.GAME.gameRequire("Modules.GameMain.MahLayer.MahLogic")

local UIMahCombBase = NG.GAME.gameClass("UIMahCombBase", NG.ViewBase)

UIMahCombBase.SingleLayerMahCount = 3

function UIMahCombBase:ctor(localSeat, combData, realLocalSeat)
    UIMahCombBase.super.ctor(self)
    self._localSeat = localSeat -- 用于控制麻将布局显示的视图位置（正常情况下showLocalSeat和realLocalSeat一致）
    self._realLocalSeat = realLocalSeat or localSeat -- 真实的视图位置
    self._combData = combData or {}
    self._UIConfig = nil

    self:_initView()
end

function UIMahCombBase:_getUIConfig()
    if not self._UIConfig then
        self._UIConfig = NG.GAME.gameRequire("Modules.GameMain.MahLayer.Config.UIMahConfigBase")
    end
    return self._UIConfig
end

function UIMahCombBase:_initView()
    self._allMahs = {}
    
    self:_initMahs()
end

function UIMahCombBase:_initMahs()
    self:_resetMahs()
end

function UIMahCombBase:_clearAllMahs()
    for _, mah in pairs(self._allMahs) do
        mah:removeFromParent()
    end
    self._allMahs = {}
end

-- 重置所有麻将牌
function UIMahCombBase:_resetMahs()
    
end

------------------------------------------------------------
-- comb数据
------------------------------------------------------------

function UIMahCombBase:setCombData(combData)
    self._combData = combData or {}
    self:_resetMahs()
end

function UIMahCombBase:getCombFlag()
    return self._combData.combFlag or NG.GAME.GameDefine.COMB_FLAG.NONE
end

------------------------------------------------------------
-- 牌值
------------------------------------------------------------

-- 获取真实的牌值
function UIMahCombBase:getMahValues()
    return self._combData.mahValues or {}
end

-- 获取显示的牌值
function UIMahCombBase:getShowMahValues()
    local backUpMahIndexs = self._combData.showBackIndexs or {}
    local mahValues = self._combData.mahValues or {}
    local showMahValues = {}
    for index, mahValue in ipairs(mahValues) do
        if MahLogic.checkMahValueIsInTable(index ,backUpMahIndexs) then
            table.insert(showMahValues, NG.GAME.GameDefine.MAH_VALUE.BACK)
        else
            table.insert(showMahValues, mahValue)
        end
    end
    return showMahValues
end

------------------------------------------------------------
-- LocalSeat
------------------------------------------------------------

function UIMahCombBase:getShowLocalSeat()
    return self._localSeat
end

function UIMahCombBase:getRealLocalSeat()
    return self._realLocalSeat
end

------------------------------------------------------------
-- 牌组箭头指示方式
------------------------------------------------------------

-- 是否需要通过横向摆放麻将子来表示进牌箭头方向
function UIMahCombBase:_isNeedShowArrowByMah()
    if self:_isArrowByIconLieType() then
        return false
    end
    if not MahLogic.checkLocalSeat(self._combData.fromLocalSeat) then
        return false
    end
    return true
end

-- 是否是通过图标来显示进牌方向
function UIMahCombBase:_isArrowByIconLieType()
    if not MahLogic.checkLocalSeat(self._combData.fromLocalSeat) then
        return false
    end
    return false
end

------------------------------------------------------------
-- 财神标志
------------------------------------------------------------

function UIMahCombBase:setJokerData(jokerData, insteadData)
    self._jokerData = jokerData
    self._insteadData = insteadData

    for _, mah in pairs(self._allMahs) do
        self:updateMahJokerIcon(mah)
    end
end

function UIMahCombBase:updateMahJokerIcon(mah)
    local isJoker = MahLogic.checkMahValueIsInTable(mah:getMahValue(), self._jokerData)
    mah:showJokerIcon(isJoker)
end

------------------------------------------------------------
-- 点亮相同牌值
------------------------------------------------------------

function UIMahCombBase:lightSameValueMahs(mahValue)
    for _, mah in pairs(self._allMahs) do
        if mahValue == mah:getMahValue() then
            mah:setColor(self:_getSameValueMahColor())
        else
            mah:setColor(self:_getNormalMahColor())
        end
    end
end

function UIMahCombBase:clearSameValueLight()
    for _, mah in pairs(self._allMahs) do
        mah:setColor(self:_getNormalMahColor())
    end
end

function UIMahCombBase:_getSameValueMahColor()
    return self:_getUIConfig().MahColor.SameValue
end

function UIMahCombBase:_getNormalMahColor()
    return self:_getUIConfig().MahColor.Normal
end

------------------------------------------------------------
-- 出牌标识
------------------------------------------------------------

-- 显示最后出牌的标识
-- getCursorFunc为获取标识动画的方法
function UIMahCombBase:showLastOutMahCursor(getCursorFunc)
    
end

return UIMahCombBase