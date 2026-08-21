local UIMahHuAreaBase = NG.GAME.gameClass("UIMahHuAreaBase", NG.ViewBase)
local MahLogic = NG.GAME.gameRequire("Modules.GameMain.MahLayer.MahLogic")

function UIMahHuAreaBase:ctor(localSeat, config)
    UIMahHuAreaBase.super.ctor(self)
    self._localSeat = localSeat
    self._allMahs = {}     
end

function UIMahHuAreaBase:_createMah(mahValue)
    
end

function UIMahHuAreaBase:_updateMahsPosition()
    
end

function UIMahHuAreaBase:setJokerData(jokerData, insteadData)
    self._jokerData = jokerData
    self._insteadData = insteadData

    for _, mah in pairs(self._allMahs) do
        self:updateMahJokerIcon(mah)
    end
end

function UIMahHuAreaBase:updateMahJokerIcon(mah)
    local isJoker = MahLogic.checkMahValueIsInTable(mah:getMahValue(), self._jokerData)
    mah:showJokerIcon(isJoker)
end

function UIMahHuAreaBase:getLastOutMah()
    if #self._allMahs > 0 then
        return self._allMahs[#self._allMahs]
    end
    return nil
end
--最后一张牌 设置光标
function UIMahHuAreaBase:showLastOutMahCursor()
    
end

function UIMahHuAreaBase:setGetCursorFunc(getCursorFunc)
    self._getCursorFunc = getCursorFunc
end

function UIMahHuAreaBase:_addHu(HuMahValue)
    local HuMah = self:_createMah(HuMahValue)
    if HuMah then
        self:addChild(HuMah)
        table.insert(self._allMahs, HuMah)
    end
    return HuMah
end

function UIMahHuAreaBase:addHus(HuMahValues, bAni)
    if not HuMahValues then
        return 
    end
    
    for _, HuMahValue in ipairs(HuMahValues) do
        self:_addHu(HuMahValue, bAni)
    end

    self:_updateMahsPosition()
end

function UIMahHuAreaBase:setHus(HuMahValues)
    self:clearHus()
    self:addHus(HuMahValues)
end

function UIMahHuAreaBase:clearHus()
    for _, mah in pairs(self._allMahs) do
        mah:removeFromParent()
    end
    self._allMahs = {}
end

return UIMahHuAreaBase�