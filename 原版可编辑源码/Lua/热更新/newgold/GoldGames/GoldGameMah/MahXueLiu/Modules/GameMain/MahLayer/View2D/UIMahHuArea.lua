local UIMah = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View2D.UIMah")
local UIMahConfig = NG.GAME.gameRequire("Modules.GameMain.MahLayer.Config.UIMahConfig2D")
local UIMahSettingValueInterface = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View2D.Interface.UIMahSettingValueInterface")

local UIMahHuArea = NG.GAME.gameClass("UIMahHuArea2D", "newgold.GoldGames.GoldGameMah.MahXueLiu.Modules.GameMain.MahLayer.ViewBase.UIMahHuAreaBase")

function UIMahHuArea:ctor(localSeat, config)
    UIMahSettingValueInterface.extend(self, config)
    UIMahHuArea.super.ctor(self)

    self._localSeat = localSeat
    self._allMahs = {}     
end

function UIMahHuArea:_getMahType()
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

function UIMahHuArea:_createMah(mahValue)
    local mahType = self:_getMahType()
    local mah = UIMah.new(mahType, self._config)
    if mahValue ~= nil then
        mah:setMahValue(mahValue)
    end
    return mah
end

function UIMahHuArea:_getLayoutConfig()
    return UIMahConfig.HuAreaLayout[self._localSeat] or {}
end

function UIMahHuArea:_updateMahsPosition()
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

function UIMahHuArea:_addHu(HuMahValue)
    local HuMah = self:_createMah(HuMahValue)
    if HuMah then
        self:addChild(HuMah)
        table.insert(self._allMahs, HuMah)
    end
    return HuMah
end

function UIMahHuArea:addHus(HuMahValues)
    if not HuMahValues then
        return 
    end
    
    for _, HuMahValue in ipairs(HuMahValues) do
        self:_addHu(HuMahValue)
    end

    self:_updateMahsPosition()
end

function UIMahHuArea:setHus(HuMahValues)
    self:clearHus()
    self:addHus(HuMahValues)
end

function UIMahHuArea:clearHus()
    for _, mah in pairs(self._allMahs) do
        mah:removeFromParent()
    end
    self._allMahs = {}
end

function UIMahHuArea:_onSetConfig(changedConfig)
    for _, mah in pairs(self._allMahs) do
        mah:setConfig(self._config)
    end
end

return UIMahHuArea