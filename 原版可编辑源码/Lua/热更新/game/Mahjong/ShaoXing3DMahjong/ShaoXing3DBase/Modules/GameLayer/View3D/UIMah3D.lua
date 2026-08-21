local UIMah3D = CF.gameClass("UIMah3D", "game.Mahjong.BasicMahjong.Modules.GameLayer.View3D.UIMah3D")

function UIMah3D:_createIcon(iconType)
    local configKey = self.IconConfigKey[iconType]
    if not configKey then
        return
    end
    local iconLayout = self:_getUIConfig().MahIconLayout[configKey]
    if iconLayout.Is3D then
        local icon = cc.Sprite3D:create(iconLayout.ModelPath)
        icon:setTexture(iconLayout.Texture)
        icon:setCameraMask(self:getCameraMask())
        icon:setScale(iconLayout.Scale)
        icon:setRotation3D(iconLayout.Rotation3D)
        icon:setPosition3D(iconLayout.Position3D)
        icon:setLightMask(self._lightMask)
        if iconLayout.Color and self._mahSprite3D then
            self._mahSprite3D:setColor(iconLayout.Color)
        end
        return icon
    else
        local iconImg = ccui.ImageView:create(iconLayout.ImagePath)
        iconImg:setScale(iconLayout.Scale)
        iconImg:setCameraMask(self:getCameraMask())
        return iconImg
    end
end

return UIMah3D