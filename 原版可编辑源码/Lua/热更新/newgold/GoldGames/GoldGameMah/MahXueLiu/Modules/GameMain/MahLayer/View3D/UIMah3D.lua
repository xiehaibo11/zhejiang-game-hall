local UIMah3D = NG.GAME.gameClass("UIMah3D", "newgold.GoldGames.GoldGameMah.MahXueLiu.Modules.GameMain.MahLayer.ViewBase.UIMahBase")

UIMah3D.IconConfigKey = {
    [UIMah3D.IconType.Joker] = "Joker",
    [UIMah3D.IconType.BaiBian] = "BaiBian",
    [UIMah3D.IconType.BaiBianBtn] = "BaiBianBtn",
    [UIMah3D.IconType.Flower] = "Flower",
    [UIMah3D.IconType.Ting] = "Ting",
}

function UIMah3D:ctor(mahType, mahValue, colorFlag)
    self._colorFlag = colorFlag
    UIMah3D.super.ctor(self, mahType, mahValue)
end

function UIMah3D:_getUIConfig()
    if not self._UIConfig then
        self._UIConfig = NG.GAME.gameRequire("Modules.GameMain.MahLayer.Config.UIMahConfig3D")
    end
    return self._UIConfig
end

function UIMah3D:_initView()
    UIMah3D.super._initView(self)
    self._lightMask = cc.LightFlag.LIGHT0
    self._mahSprite3D = nil
    self._initPosition3D = cc.vec3(0,0,0)
    if self._mahType == NG.GAME.GameDefine.MAH_TYPE.STAND_FACE_FORWARD then
        self._mahBatchPath = self:_getUIConfig().materialPath_Hand
    elseif self._mahType >= NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP and self._mahType <= NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT then
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
    self:_removeBaiBianIcon()
    self:_removeBaiBianBtn()
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
        self._colorFlag = NG.GAME.GameDefine.MAH_BACK_COLOR_TYPE.GREEN
    end
    mahSprite3D:setTexture(self:_getUIConfig().MahTextureConf[self._colorFlag])
    mahSprite3D:setCameraMask(self:getCameraMask())
    mahSprite3D:setScale(1)
    mahSprite3D:setRotation3D(self:_getMahRotation3D())
    mahSprite3D:setLightMask(self._lightMask)
    return mahSprite3D
end

function UIMah3D:_updateShadow()
    if self._mahSprite3D == nil or self._mahType == NG.GAME.GameDefine.MAH_TYPE.STAND_FACE_FORWARD then
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

        if self._mahType >= NG.GAME.GameDefine.MAH_TYPE.STAND_FACE_FORWARD and self._mahType <= NG.GAME.GameDefine.MAH_TYPE.STAND_FACE_TORIGHT then
            self._shadow:setPosition3D(cc.vec3(0, 0, -self:_getUIConfig().MahModelSize.Height / 2))
            self._shadow:setScaleX(size.x / size.x)
            self._shadow:setScaleY(size.y / size.z)
        elseif
            self._mahType == NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP or self._mahType == NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN or
                self._mahType == NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL or
                self._mahType == NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL_TODOWN
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
    self:_updateBaiBianIcon()
    self:_updateBaiBianBtn()
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

function UIMah3D:_updateJokerIconPosition()
    if not self._jokerIcon then
        return
    end

    local iconLayout = self:_getUIConfig().MahIconLayout.Joker
    self._jokerIcon:setPosition3D(iconLayout.Position3D)
end


function UIMah3D:_initBaiBianIcon()
    if self._baiBianIcon then
        return
    end

    if not self._mahSprite3D then
        return
    end

    local baiBianIcon = self:_createIcon(self.IconType.BaiBian)
    self._mahSprite3D:addChild(baiBianIcon)
    self._baiBianIcon = baiBianIcon
end

function UIMah3D:_updateBaiBianIconPosition()
    if not self._baiBianIcon then
        return
    end

    local iconLayout = self:_getUIConfig().MahIconLayout.BaiBian
    self._baiBianIcon:setPosition3D(iconLayout.Position3D)
end

function UIMah3D:_createBaiBianBtn()
    local iconLayout = self:_getUIConfig().MahIconLayout["BaiBianBtn"]
    local imgUrl = self._baiBianCnt == 0 and iconLayout.Disable or iconLayout.Normal
    local iconImg = ccui.ImageView:create(imgUrl)
    iconImg.cfg = iconLayout
    iconImg:setScale(iconLayout.Scale)
    iconImg:setCameraMask(self:getCameraMask())
    if iconLayout.Children then
        for i=1, #iconLayout.Children do
            local cfg = iconLayout.Children[i]
            if cfg.type == "text" then
                local text = cc.Label:createWithSystemFont(self._baiBianCnt .. "/3", "", cfg.fontSize or 30)
                text:setPosition(cfg.position or cc.p(0,0))
                text:setColor(self._baiBianCnt == 0 and cc.c3b(96,96,96) or cc.c3b(192,51,8))
                text:setCameraMask(self:getCameraMask())
                text:setName(cfg.name or "text")
                iconImg:addChild(text)
            end
        end
    end
    -- NG.UITool.gray(iconImg)
    -- iconImg:loadTexture(iconImg.cfg.Disable, ccui.TextureResType.localType)
    if iconLayout.TouchEnable then
        iconImg:setTouchEnabled(true)
        iconImg:setSwallowTouches(true)
        iconImg:addClickEventListener(function(event) 
            local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
            local event = cc.EventCustom:new(iconLayout.EventName or "_")
            event.data = self
            eventDispatcher:dispatchEvent(event)
        end)
    end
    return iconImg
end

function UIMah3D:_initBaiBianBtn()
    if self._baiBianBtn then
        return
    end

    if not self._mahSprite3D then
        return
    end

    local baiBianBtn = self:_createBaiBianBtn()
    self._mahSprite3D:addChild(baiBianBtn)
    self._baiBianBtn = baiBianBtn
end

function UIMah3D:_updateBaiBianBtnPosition()
    if not self._baiBianBtn then
        return
    end

    local iconLayout = self:_getUIConfig().MahIconLayout.BaiBianBtn
    self._baiBianBtn:setPosition3D(iconLayout.Position3D)
end

function UIMah3D:updateBaiBianCnt(cnt)
    if not self._baiBianBtn then
        return
    end
    if not self._mahSprite3D then
        return
    end
    local label = self._baiBianBtn:getChildByName("text")
    label:setString(cnt.."/3")
    if cnt == 0 then
        label:setColor(cc.c3b(96,96,96))
        self._baiBianBtn:loadTexture(self._baiBianBtn.cfg.Disable, ccui.TextureResType.localType)
        self._baiBianBtn:setTouchEnabled(false)
    else
        label:setColor(cc.c3b(192,51,8))
        self._baiBianBtn:loadTexture(self._baiBianBtn.cfg.Normal, ccui.TextureResType.localType)
        self._baiBianBtn:setTouchEnabled(true)
    end
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
    -- if self._jokerIcon then
    --     table.insert(allIcons, self._jokerIcon)
    -- end
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

-- function UIMah3D:onHuanPaiStart()
--     if self._baiBianBtn then
--         self._baiBianBtn:setVisible(false)
--     end
-- end
-- function UIMah3D:onHuanPaiEnd()
--     if self._baiBianBtn and self._bShowBaiBian then
--         self._baiBianBtn:setVisible(true)
--     end
-- end
function UIMah3D:_updateMaskColor()
    if self._bTouchLimit then
        self:setColor(self:_getLimitMahColor())
    else
        self:setColor(self:_getNormalMahColor())
    end
    if self._jokerIcon then
        self._jokerIcon:setColor(self:getColor())
    end
end


function UIMah3D:bankrup()
    -- self._resetMah()
    self:setMahValue(114)
    self:_removeBaiBianBtn()
    self:hideFire()
end

function UIMah3D:showFire()
    if self._fireNode then
        return
    end
    self._fireNode = NG.UITool.playDargonBonesSpine("NewGoldRes/Spine/Common/Fire/", "Hp_zdtp.json", "Hp_zdtp.atlas", "animation0", true)
    self._fireNode:setScaleX(0.03)
    self._fireNode:setScaleY(0.15)
    self._fireNode:setCameraMask(self:getCameraMask())
    self._fireNode:setPosition3D(cc.vec3(0, 3.5, 0.95))
    self._fireNode:setName("fire")
    self:addChild(self._fireNode)
end

function UIMah3D:hideFire()
    if self._fireNode then
        self:removeChild(self._fireNode)
    end
end

function UIMah3D:showBianAni()
    local ani = NG.UITool.playDargonBonesSpine("NewGoldRes/Spine/MahXueLiu/", "bianpai.json", "bianpai.atlas", "animation", false)
    ani:setScaleX(0.04)
    ani:setScaleY(0.1)
    ani:setCameraMask(self:getCameraMask())
    ani:setPosition3D(cc.vec3(0, -7, 0))
    ani:setName("fire")
    self:addChild(ani)
    ani:runAction(cc.Sequence:create(cc.DelayTime:create(1),cc.CallFunc:create(function()
        ani:removeFromParent()
    end)))
end
return UIMah3D