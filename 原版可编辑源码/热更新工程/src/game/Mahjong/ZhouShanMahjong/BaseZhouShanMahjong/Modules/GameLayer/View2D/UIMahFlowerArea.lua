local UIMah = CF.gameRequire("Modules.GameLayer.View2D.UIMah")
local UIMahConfig = CF.gameRequire("Modules.GameLayer.Config.UIMahConfig2D")

local UIMahFlowerArea = CF.gameClass("UIMahFlowerArea2D", "game.Mahjong.BasicMahjong.Modules.GameLayer.View2D.UIMahFlowerArea")

function UIMahFlowerArea:ctor(localSeat, config, isSettle)
    UIMahFlowerArea.super.ctor(self, localSeat, config)
    self._isSettle = isSettle  
end

function UIMahFlowerArea:_getMahType()
    if self._isSettle then
        return CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP
    end
    return UIMahFlowerArea.super._getMahType(self)
end

function UIMahFlowerArea:_getLayoutConfig()
    if self._isSettle then
        return UIMahConfig.FlowerAreaLayout[CF.GameDefine.LOCAL_SEAT.BOTTOM] or {}
    end
    return UIMahFlowerArea.super._getLayoutConfig(self)
end

function UIMahFlowerArea:_createMah(mahValue)
    local mahType = self:_getMahType()
    local mah = UIMah.new(mahType, self._config)
    if mahValue ~= nil then
        mah:setMahValue(mahValue)
        -- 本花变色
        local seat = CF.roomData:localToSeat(self._localSeat)
        if CF.game:getModule("GameLayer").isBenHua and CF.game:getModule("GameLayer"):isBenHua(seat, mahValue) then
            mah:setColor(UIMahConfig.BenMahColor)
        end
    end
    return mah
end


return UIMahFlowerArea