local UIMah = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View2D.UIMah")
local UIMahConfig = NG.GAME.gameRequire("Modules.GameMain.MahLayer.Config.UIMahConfig2D")
local UIMahSettingValueInterface = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View2D.Interface.UIMahSettingValueInterface")

local UIMahFlowerArea = NG.GAME.gameClass("UIMahFlowerArea2D", "newgold.GoldGames.GoldGameMah.MahXueLiu.Modules.GameMain.MahLayer.ViewBase.UIMahFlowerAreaBase")

function UIMahFlowerArea:ctor(localSeat, config)
    UIMahSettingValueInterface.extend(self, config)
    UIMahFlowerArea.super.ctor(self)

    self._localSeat = localSeat
    self._allMahs = {}     
end

function UIMahFlowerArea:_getMahType()
    if self._localSeat == NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM then
        return NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP
    elseif self._localSeat == NG.GAME.GameDefine.LOCAL_SEAT.RIGHT then
        return NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT
    elseif self._localSeat == NG.GAME.GameDefine.LOCAL_SEAT.TOP then
        return NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP
    elseif self._localSeat == NG.GAME.GameDefine.LOCAL_SEAT.LEFT then
        return NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT
    end
end

function UIMahFlowerArea:_createMah(mahValue)
    local mahType = self:_getMahType()
    local mah = UIMah.new(mahType, self._config)
    if mahValue ~= nil then
        mah:setMahValue(mahValue)
    end
    return mah
end

function UIMahFlowerArea:_getLayoutConfig()
    return UIMahConfig.FlowerAreaLayout[self._localSeat] or {}
end

function UIMahFlowerArea:_updateMahsPosition()
    local layoutConf = self:_getLayoutConfig()
    for index, mah in ipairs(self._allMahs) do
        mah:setAnchorPoint(layoutConf.AnchorPoint)
        if layoutConf.AddDirection > 0 then
            mah:setLocalZOrder(99 - index)
        end
        local mahPos = cc.p(0,0)
        if layoutConf.IsHorizontalAdd then
            mahPos.x = (index - 1) * mah:getTopEdgeWidth() * layoutConf.AddDirection
        else
            mahPos.y = (index - 1) * mah:getTopEdgeWidth() * layoutConf.AddDirection
        end
        mah:setPosition(mahPos)
    end
end

function UIMahFlowerArea:_addFlower(flowerMahValue)
    local flowerMah = self:_createMah(flowerMahValue)
    if flowerMah then
        self:addChild(flowerMah)
        table.insert(self._allMahs, flowerMah)
    end
    return flowerMah
end

function UIMahFlowerArea:addFlowers(flowerMahValues)
    if not flowerMahValues then
        return 
    end
    
    for _, flowerMahValue in ipairs(flowerMahValues) do
        self:_addFlower(flowerMahValue)
    end

    self:_updateMahsPosition()
end

function UIMahFlowerArea:setFlowers(flowerMahValues)
    self:clearFlowers()
    self:addFlowers(flowerMahValues)
end

function UIMahFlowerArea:clearFlowers()
    for _, mah in pairs(self._allMahs) do
        mah:removeFromParent()
    end
    self._allMahs = {}
end

function UIMahFlowerArea:_onSetConfig(changedConfig)
    for _, mah in pairs(self._allMahs) do
        mah:setConfig(self._config)
    end
end

return UIMahFlowerArea