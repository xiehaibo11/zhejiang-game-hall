local UIMah3D = CF.gameClass("UIMah3D", "game.Mahjong.BasicMahjong.Modules.GameLayer.ViewBase.UIMahBase")

UIMah3D.IconConfigKey = {
    [UIMah3D.IconType.Joker] = "Joker",
    [UIMah3D.IconType.Flower] = "Flower",
    [UIMah3D.IconType.Ting] = "Ting",
}

function UIMah3D:ctor(mahType, mahValue, colorFlag)
    self._colorFlag = colorFlag
    UIMah3D.super.ctor(self, mahType, mahValue)
end

function UIMah3D:getProxyEvents()
    return {
        { module = CF.settingData, eventKeyName = "EVENT_TABLE_STYLE", callBack = "onEventTableStyle" }
    }
end

function UIMah3D:_getUIConfig()
    if not self._UIConfig then
        self._UIConfig = CF.gameRequire("Modules.GameLayer.Config.UIMahConfig3D")
    end
    return self._UIConfig
end

function UIMah3D:_initView()
    UIMah3D.super._initView(self)
    self._lightMask = cc.LightFlag.LIGHT0
    self._mahSprite3D = nil
    self._initPosition3D = cc.vec3(0,0,0)
    if self._mahType == CF.GameDefine.MAH_TYPE.STAND_FACE_FORWARD then
        self._mahBatchPath = self:_getUIConfig().materialPath_Hand
    elseif self._mahType >= CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP and self._mahType <= CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT then
        self._mahBatchPath = self:_getUIConfig().materialPath_OutMah
    else
        self._mahBatchPath = self:_getUIConfig().materialPath
    end

    self:_resetMah()
end

function UIMah3D:_getMahModelPath()
    local mahModelPath = string.format(self:_getUIConfig().MahModelPathStr, self._mahValue)
    if cc.FileUtils:getInstance():isFileExist(mahModelPath) then
        return mahModelPath
    else
        return self:_getUIConfig().EmptyMahModelPath
   end
end

function UIMah3D:_getMahLayoutConf()
    return self:_getUIConfig().MahLayout[self._mahType]
end

function UIMah3D:_getMahRotation3D()
    if self:_getMahLayoutConf() then
        return self:_getMahLayoutConf().Rotation3D
    end
    return cc.vec3(0,0,0)
end

function UIMah3D:_removeMahSprite3D()
    self:_removeJokerIcon()
    self:_removeFlowerIcon()
    self:_removeTingIcon()
    if self._mahSprite3D then
        self._mahSprite3D:removeFromParent()
        self._mahSprite3D = nil
    end
    if self._shadow then
        self._shadow:removeFromParent()
        self._shadow = nil
    end
end

function UIMah3D:_createMah()
    local mahModelPath = self:_getMahModelPath()
    local mahSprite3D = cc.Sprite3D:create(mahModelPath)
    if cc.BatchSprite3D then
        mahSprite3D = cc.BatchSprite3D:create(mahModelPath, self._mahBatchPath)
    end

    if not self._colorFlag or not self:_getUIConfig().MahTextureConf[self._colorFlag] then
        self._colorFlag = CF.GameDefine.MAH_BACK_COLOR_TYPE.GREEN
    end
    mahSprite3D:setTexture(self:_getUIConfig().MahTextureConf[self._colorFlag])
    mahSprite3D:setCameraMask(self:getCameraMask())
    mahSprite3D:setScale(1)
    mahSprite3D:setRotation3D(self:_getMahRotation3D())
    mahSprite3D:setLightMask(self._lightMask)
    return mahSprite3D
end

function UIMah3D:_updateShadow()
    -- 霞光去除阴影
    if XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.TABLE) then
        if self._shadow then
            self._shadow:removeFromParent()
            self._shadow = nil
        end
        return
    else
        if self._shadow then
            return
        end
    end
    if self._mahSprite3D == nil or self._mahType == CF.GameDefine.MAH_TYPE.STAND_FACE_FORWARD then
        return
    end

    if cc.BatchSprite3D then
        self._shadow = cc.BatchSprite3D:create(self:_getUIConfig().ShadowModelPath, self:_getUIConfig().materialPath_Shadow)
        self._shadow:setRotation3D(cc.vec3(0, 0, 0))
        self._shadow:setCameraMask(self:getCameraMask())
        self._shadow:setScale(1)
        self._shadow:setLightMask(0)
        self:addChild(self._shadow)

        local aabb = self._mahSprite3D:getAABB()
        local min = aabb._min
        local max = aabb._max
        local size = cc.vec3(max.x - min.x, max.y - min.y, max.z - min.z)
        local a = self:_getUIConfig().MahModelSize.Thick
        local b = self:_getUIConfig().MahModelSize
        if self._mahType >= CF.GameDefine.MAH_TYPE.STAND_FACE_FORWARD and self._mahType <= CF.GameDefine.MAH_TYPE.STAND_FACE_BACKWARD then
            self._shadow:setPosition3D(cc.vec3(0, 0, -self:_getUIConfig().MahModelSize.Height / 2))
            self._shadow:setScaleX(size.x / size.x)
            self._shadow:setScaleY(size.y / size.z)
        elseif self._mahType == CF.GameDefine.MAH_TYPE.STAND_FACE_TORIGHT then 
            self._shadow:setPosition3D(cc.vec3(0, 0, -self:_getUIConfig().MahModelSize.Height / 2))
            self._shadow:setScaleX(size.x / size.y)
            self._shadow:setScaleY(size.y / size.z)
        elseif self._mahType == CF.GameDefine.MAH_TYPE.STAND_FACE_TOLEFT then 
            self._shadow:setPosition3D(cc.vec3(0, 0, -self:_getUIConfig().MahModelSize.Height / 2))
            self._shadow:setScaleX(size.x / size.y)
            self._shadow:setScaleY(size.y / size.z)
        elseif
            self._mahType == CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP or self._mahType == CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN or
                self._mahType == CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL or
                self._mahType == CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL_TODOWN
         then
            self._shadow:setPosition3D(cc.vec3(0, 0, -self:_getUIConfig().MahModelSize.Thick / 2))
            self._shadow:setScaleX(size.x / size.x)
            self._shadow:setScaleY(size.z / size.z)
        else
            self._shadow:setPosition3D(cc.vec3(0, 0, -self:_getUIConfig().MahModelSize.Thick / 2))
            self._shadow:setScaleX(size.x / size.y)
            self._shadow:setScaleY(size.y / size.x)
        end
    end
end

function UIMah3D:_resetMah()
    self:_removeMahSprite3D()

    local mahSprite3D = self:_createMah()
    self:addChild(mahSprite3D)
    self._mahSprite3D = mahSprite3D

    self:_updateShadow()
    self:_updateJokerIcon()
    self:_updateFlowerIcon()
    self:_updateTingIcon()
end

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
        return icon
    else
        local iconImg = ccui.ImageView:create(iconLayout.ImagePath)
        iconImg:setScale(iconLayout.Scale)
        iconImg:setCameraMask(self:getCameraMask())
        return iconImg
    end
end

function UIMah3D:_initJokerIcon()
    if self._jokerIcon then
        return
    end

    if not self._mahSprite3D then
        return
    end

    local jokerIcon = self:_createIcon(self.IconType.Joker)
    self._mahSprite3D:addChild(jokerIcon)
    self._jokerIcon = jokerIcon
end

function UIMah3D:_initTingIcon()
    if self._tingIcon then
        return
    end

    if not self._mahSprite3D then
        return
    end

    local tingIcon = self:_createIcon(self.IconType.Ting)
    self._mahSprite3D:addChild(tingIcon)
    self._tingIcon = tingIcon
end

function UIMah3D:_updateTingIconPosition()
    if not self._tingIcon then
        return
    end

    local iconLayout = self:_getUIConfig().MahIconLayout.Ting
    self._tingIcon:setPosition3D(iconLayout.Position3D)
end

function UIMah3D:_updateSelectState()
    if self._bSelected then
        local selectedAdd = self._selectedAdd or 1
        self:setPosition3D(cc.vec3(self._initPosition3D.x, self._initPosition3D.y, self._initPosition3D.z + selectedAdd))
    else
        self:setPosition3D(self._initPosition3D)
        self:_updateMaskColor()
    end
end

-- 设置牌值
function UIMah3D:setMahValue(value)
    if not UIMah3D.super.setMahValue(self, value) then
        return
    end
    self:_resetMah()
end

function UIMah3D:setMahTypeAndValue(mahType, mahValue)
    if not mahType then
        return
    end
    self._mahType = mahType
    self:setMahValue(mahValue)
    self:_resetMah()
end

function UIMah3D:setInitPosition3D(posX, posY, posZ)
    self._initPosition3D.x = posX or 0
    self._initPosition3D.y = posY or 0
    self._initPosition3D.z = posZ or 0
end

function UIMah3D:getInitPosition3D()
    return clone(self._initPosition3D)
end

function UIMah3D:getDistanceX()
    return self:_getMahLayoutConf().DistanceX * self:getScale()
end

function UIMah3D:getDistanceY()
    return self:_getMahLayoutConf().DistanceY * self:getScale()
end

function UIMah3D:getDistanceZ()
    return self:_getMahLayoutConf().DistanceZ * self:getScale()
end

-- 触摸检测
function UIMah3D:hitTest(ray)
    if self._mahSprite3D then
        local aabb = self._mahSprite3D:getAABB()
        if ray:intersects(aabb) then
            return true
        end
    end
    return false
end

function UIMah3D:_getAllIcons()
    local allIcons = {}
    if self._jokerIcon then
        table.insert(allIcons, self._jokerIcon)
    end
    return allIcons
end

function UIMah3D:setLightMask(lightMask)
    self._lightMask = lightMask

    for _, icon in pairs(self:_getAllIcons()) do
        icon:setLightMask(self._lightMask)
    end

    if self._mahSprite3D then
        self._mahSprite3D:setLightMask(self._lightMask)
    end
end

function UIMah3D:setMahColor(colorFlag)
    self._colorFlag = colorFlag

    self:_resetMah()
end

function UIMah3D:showOutAni()
    local isUse = XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.MAH_OUT)
    if isUse then
        -- 播放出牌动画
        local UIMahConfigBase = CF.gameRequire("Modules.GameLayer.Config.UIMahConfigBase")
        if UIMahConfigBase.ChuPaiAniConfig[XH.XGSJ_PROP_ID.MAH_OUT] then
            local sprite = XH.UITool.createFrameAni(self._mahSprite3D, UIMahConfigBase.ChuPaiAniConfig[XH.XGSJ_PROP_ID.MAH_OUT])
            sprite:setPosition3D(cc.vec3(-0.1, 0.2, -1))
            sprite:setScale(0.04)
            sprite:setCameraMask(self:getCameraMask())
        end
    end
end

function UIMah3D:onEventTableStyle()
    self:_updateShadow()
end

return UIMah3D �)  