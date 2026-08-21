local MahLogic = CF.gameRequire("Modules.GameLayer.MahLogic")
local UIMahConfigBase = CF.gameRequire("Modules.GameLayer.Config.UIMahConfigBase")

local UIMahOutAreaBase = CF.gameClass("UIMahOutAreaBase", CF.ViewBase)

function UIMahOutAreaBase:ctor(config)
    UIMahOutAreaBase.super.ctor(self)
    self._allOutMahs = {}
end

------------------------------------------------------------
-- 添加出牌
------------------------------------------------------------

function UIMahOutAreaBase:setOutMahs(mahValues)
    self:clearAllOutMahs()
    self:addOutMahs(mahValues)
end

function UIMahOutAreaBase:addOutMahs(mahValues, showAni)
    for _, mahValue in ipairs(mahValues) do
        local outMah = self:_createMah(mahValue)
        if showAni and outMah.showOutAni then
            outMah:showOutAni()
        end
        self:_addOutMah(outMah)
        table.insert(self._allOutMahs, outMah)
    end
    self:_updateMahsPosition(clone(self._allOutMahs), 1)
end

function UIMahOutAreaBase:_getMahType()
    return CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP
end

function UIMahOutAreaBase:_createMah(mahValue)
    return nil
end

function UIMahOutAreaBase:_addOutMah(outMah)
    
end

function UIMahOutAreaBase:_updateMahsPosition(mahs)

end

------------------------------------------------------------
-- 清除所有出牌
------------------------------------------------------------

function UIMahOutAreaBase:clearAllOutMahs()
    for _, mah in pairs(self._allOutMahs) do
        mah:removeFromParent()
    end
    self._allOutMahs = {}
end

------------------------------------------------------------
-- 最后一张牌
------------------------------------------------------------

function UIMahOutAreaBase:getLastOutMah()
    if #self._allOutMahs > 0 then
        return self._allOutMahs[#self._allOutMahs]
    end
    return nil
end

function UIMahOutAreaBase:deleteLastOutMah()
    if #self._allOutMahs > 0 then
        self._allOutMahs[#self._allOutMahs]:removeFromParent()
        table.remove(self._allOutMahs, #self._allOutMahs)
    end
end

------------------------------------------------------------
-- 财神标志
------------------------------------------------------------

function UIMahOutAreaBase:setJokerData(jokerData, insteadData)
    self._jokerData = jokerData
    self._insteadData = insteadData

    for _, mah in pairs(self._allOutMahs) do
        self:updateMahJokerIcon(mah)
    end
end

function UIMahOutAreaBase:updateMahJokerIcon(mah)
    local isJoker = MahLogic.checkMahValueIsInTable(mah:getMahValue(), self._jokerData)
    mah:showJokerIcon(isJoker)
end

------------------------------------------------------------
-- 点亮相同牌值
------------------------------------------------------------

function UIMahOutAreaBase:lightSameValueMahs(mahValue)
    for _, mah in pairs(self._allOutMahs) do
        if mahValue == mah:getMahValue() then
            mah:setColor(self:_getSameValueMahColor())
        else
            mah:setColor(self:_getNormalMahColor())
        end
    end
end

function UIMahOutAreaBase:clearSameValueLight()
    for _, mah in pairs(self._allOutMahs) do
        mah:setColor(self:_getNormalMahColor())
    end
end

function UIMahOutAreaBase:_getSameValueMahColor()
    return  UIMahConfigBase.MahColor.SameValue
end

function UIMahOutAreaBase:_getNormalMahColor()
    return  UIMahConfigBase.MahColor.Normal
end

--------------------------------------------------
-- 出牌标记
--------------------------------------------------

--最后一张牌 设置光标
function UIMahOutAreaBase:showLastOutMahCursor()
    
end

function UIMahOutAreaBase:setGetCursorFunc(getCursorFunc)
    self._getCursorFunc = getCursorFunc
end

return UIMahOutAreaBase