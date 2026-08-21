local UIMahConfig3D = NG.GAME.gameRequire("Modules.GameMain.MahLayer.Config.UIMahConfig3D")
local UIMah3D = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View3D.UIMah3D")

local UIMahFlowerArea3D = NG.GAME.gameClass("UIMahFlowerArea3D", "newgold.GoldGames.GoldGameMah.MahXueLiu.Modules.GameMain.MahLayer.ViewBase.UIMahFlowerAreaBase")

function UIMahFlowerArea3D:ctor(localSeat)
    self._config = {}
    UIMahFlowerArea3D.super.ctor(self, localSeat)  

    self:setCameraMask(UIMahConfig3D.DeskCameraMask)
end

function UIMahFlowerArea3D:_getMahType()
    if self._localSeat == NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM then
        return NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP
    elseif self._localSeat == NG.GAME.GameDefine.LOCAL_SEAT.RIGHT then
        return NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT
    elseif self._localSeat == NG.GAME.GameDefine.LOCAL_SEAT.TOP then
        return NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN
    elseif self._localSeat == NG.GAME.GameDefine.LOCAL_SEAT.LEFT then
        return NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT
    end
end

function UIMahFlowerArea3D:_createMah(mahValue)
    local mahType = self:_getMahType()
    local mah = UIMah3D.new(mahType, mahValue)
    if mahValue ~= nil then
        self:updateMahJokerIcon(mah)
    end
    mah:setScale(1.1)
    mah:setCameraMask(self:getCameraMask())
    mah:setLightMask(cc.LightFlag.LIGHT3)
    mah:setMahColor(self._config.mahColorFalg)
    return mah
end

function UIMahFlowerArea3D:_getLayoutConfig()
    return UIMahConfig3D.FlowerAreaLayout[self._localSeat] or {}
end

function UIMahFlowerArea3D:_updateMahsPosition()
    if #self._allMahs <= 0 then
        return
    end

    local layoutConf = self:_getLayoutConfig()
    local addDirection = layoutConf.IsForwardAdd and 1 or -1
    local totalMahWidth = 0
    for index, mah in ipairs(self._allMahs) do
        local singleLineMahsCount = self:_getSingleLineMahsCount()
        local mahPos = cc.vec3(0, 0, mah:getDistanceZ() * (math.ceil(index/singleLineMahsCount) - 1/2))
        if index % singleLineMahsCount == 1 then
            totalMahWidth = 0
        end
        if layoutConf.IsAddX then
            mahPos.x = addDirection * (totalMahWidth + mah:getDistanceX()/2)
            totalMahWidth = totalMahWidth + mah:getDistanceX()
        else
            mahPos.y = addDirection * (totalMahWidth + mah:getDistanceY()/2)
            totalMahWidth = totalMahWidth + mah:getDistanceY()
        end
        mah:setInitPosition3D(mahPos.x, mahPos.y, mahPos.z)
        mah:setPosition3D(mahPos)
    end
end

function UIMahFlowerArea3D:_getSingleLineMahsCount()
    return self._singleLineMahsCount or UIMahConfig3D.FlowerSingleLineMaxCount
end

function UIMahFlowerArea3D:setSingleLineMahsCount(mahsCount)
    self._singleLineMahsCount = mahsCount
end

function UIMahFlowerArea3D:setMahColor(colorFlag)
    self._config.mahColorFalg = colorFlag

    self:_updateMahColor()
end

function UIMahFlowerArea3D:_updateMahColor()
    for _, mah in pairs(self._allMahs) do
        mah:setMahColor(self._config.mahColorFalg)
    end
end

return UIMahFlowerArea3D�