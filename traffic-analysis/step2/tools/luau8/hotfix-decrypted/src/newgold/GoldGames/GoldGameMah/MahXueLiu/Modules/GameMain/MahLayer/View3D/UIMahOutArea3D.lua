local UIMahConfig3D = NG.GAME.gameRequire("Modules.GameMain.MahLayer.Config.UIMahConfig3D")
local UIMah3D = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View3D.UIMah3D")

local UIMahOutArea3D = NG.GAME.gameClass("UIMahOutArea3D", "newgold.GoldGames.GoldGameMah.MahXueLiu.Modules.GameMain.MahLayer.ViewBase.UIMahOutAreaBase")

function UIMahOutArea3D:ctor()
    self._allOutMahs = {}
    self._config = {}

    self:setCameraMask(UIMahConfig3D.DeskCameraMask)
end

function UIMahOutArea3D:_getLayoutConfig()
    return UIMahConfig3D.OutMahsLayout.Together
end

function UIMahOutArea3D:_getMahType()
    return self:_getLayoutConfig().MahType
end

function UIMahOutArea3D:_createMah(mahValue)
    local mah = UIMah3D.new(self:_getMahType(), mahValue)
    if mahValue ~= nil then
        self:updateMahJokerIcon(mah)
    end
    mah:setScale(1.1)
    mah:setCameraMask(self:getCameraMask())
    mah:setLightMask(cc.LightFlag.LIGHT3)
    mah:setMahColor(self._config.mahColorFalg)
    return mah
end

function UIMahOutArea3D:_addOutMah(outMah)
    if not outMah then
        return
    end
end

--------------------------------------------------
--最后一张牌 设置光标
--------------------------------------------------
function UIMahOutArea3D:showLastOutMahCursor()
    if not self._getCursorFunc then
        return
    end
    local lastMah = self:getLastOutMah()
    local cursorImg = self._getCursorFunc()
    cursorImg:setCameraMask(lastMah:getCameraMask())
    lastMah:addChild(cursorImg)
end

function UIMahOutArea3D:setMahColor(colorFlag)
    self._config.mahColorFalg = colorFlag

    self:_updateMahColor()
end

function UIMahOutArea3D:_updateMahColor()
    for _, mah in pairs(self._allOutMahs) do
        mah:setMahColor(self._config.mahColorFalg)
    end
end

return UIMahOutArea3DH