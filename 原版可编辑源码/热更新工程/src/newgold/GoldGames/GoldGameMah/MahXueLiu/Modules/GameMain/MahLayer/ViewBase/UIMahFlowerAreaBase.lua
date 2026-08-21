local UIMahFlowerAreaBase = NG.GAME.gameClass("UIMahFlowerAreaBase", NG.ViewBase)
local MahLogic = NG.GAME.gameRequire("Modules.GameMain.MahLayer.MahLogic")

function UIMahFlowerAreaBase:ctor(localSeat, config)
    UIMahFlowerAreaBase.super.ctor(self)
    self._localSeat = localSeat
    self._allMahs = {}     
end

function UIMahFlowerAreaBase:_createMah(mahValue)
    
end

function UIMahFlowerAreaBase:_updateMahsPosition()
    
end

function UIMahFlowerAreaBase:_addFlower(flowerMahValue)
    local flowerMah = self:_createMah(flowerMahValue)
    if flowerMah then
        self:addChild(flowerMah)
        table.insert(self._allMahs, flowerMah)
    end
    return flowerMah
end

function UIMahFlowerAreaBase:addFlowers(flowerMahValues)
    if not flowerMahValues then
        return 
    end
    
    for _, flowerMahValue in ipairs(flowerMahValues) do
        self:_addFlower(flowerMahValue)
    end

    self:_updateMahsPosition()
end

function UIMahFlowerAreaBase:setFlowers(flowerMahValues)
    self:clearFlowers()
    self:addFlowers(flowerMahValues)
end

function UIMahFlowerAreaBase:clearFlowers()
    for _, mah in pairs(self._allMahs) do
        mah:removeFromParent()
    end
    self._allMahs = {}
end


function UIMahFlowerAreaBase:setJokerData(jokerData, insteadData)
    self._jokerData = jokerData
    self._insteadData = insteadData

    for _, mah in pairs(self._allMahs) do
        self:updateMahJokerIcon(mah)
    end
end

function UIMahFlowerAreaBase:updateMahJokerIcon(mah)
    local isJoker = MahLogic.checkMahValueIsInTable(mah:getMahValue(), self._jokerData)
    mah:showJokerIcon(isJoker)
end

function UIMahFlowerAreaBase:getLastOutMah()
    if #self._allMahs > 0 then
        return self._allMahs[#self._allMahs]
    end
    return nil
end
--最后一张牌 设置光标
function UIMahFlowerAreaBase:showLastOutMahCursor()
    
end

function UIMahFlowerAreaBase:setGetCursorFunc(getCursorFunc)
    self._getCursorFunc = getCursorFunc
end
return UIMahFlowerAreaBase