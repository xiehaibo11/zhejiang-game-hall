local UIMahFlowerAreaBase = CF.gameClass("UIMahFlowerAreaBase", CF.ViewBase)

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

return UIMahFlowerAreaBase�