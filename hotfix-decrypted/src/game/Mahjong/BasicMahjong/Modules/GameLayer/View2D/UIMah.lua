local UIMahConfig = CF.gameRequire("Modules.GameLayer.Config.UIMahConfig2D")
local MahLogic = CF.gameRequire("Modules.GameLayer.MahLogic")
local UIMahSettingValueInterface = CF.gameRequire("Modules.GameLayer.View2D.Interface.UIMahSettingValueInterface")

local UIMah = CF.gameClass("UIMah2D", "game.Mahjong.BasicMahjong.Modules.GameLayer.ViewBase.UIMahBase")

local IconType = {
    Joker = 1,
    Flower = 2,
    Ting = 3,
    Bao = 4,
    TingFanMax = 5,
    TingCountMax = 6,
}

local GroundImgType = {
    Back = "Back",
    FaceGround = "FaceGround",
    BackPattern = "BackPattern"
}

-- 与 GameDefine.MAH_VALUE.BACK 一致；CF.GameDefine 未就绪时兜底
local MAH_VALUE_BACK_FALLBACK = 7 * 16 + 2
local function safeMahValueBack()
    local gd = CF and CF.GameDefine
    if gd and gd.MAH_VALUE and gd.MAH_VALUE.BACK ~= nil then
        return gd.MAH_VALUE.BACK
    end
    return MAH_VALUE_BACK_FALLBACK
end

local ImgSource = {
    Plist = "Plist",
    Local = "Local",
    Download = "DownLoad",
}

function UIMah:ctor(mahType, config)
    UIMahSettingValueInterface.extend(self, config)
    self._mahType = mahType
    self._mahValue = CF.GameDefine.MAH_VALUE.NONE
    self._initPosition = cc.p(0,0)
    self._bSelected = false
    self._bTouchLimit = false
    -- 碰杠遮罩
    self._bActionMask = false
    --是否显示额外增加的牌花数字，一般没有牌花数字才进行增加
    self._bShowFlowerNumber = config.showFlowerNumber
    -- 打出是否可能会承包
    self._bPreBao = false
    UIMah.super.ctor(self, mahType)
    self:_initEvent()
end

-- 牌花资源
function UIMah:_addFaceSpriteFrames()
    local faceType = self:_getConfigValueByKey(UIMahConfig.MahSettingKey.FaceType)
    if UIMahConfig.MahFacePlistPath[faceType] then
        MahLogic.addPlistSpriteFrames(UIMahConfig.MahFacePlistPath[faceType])
    end
end

function UIMah:_initView()
    self._rootNode = nil
    self._mahFaceGroundImg = nil -- 牌面
    self._mahFaceGroundImgInitSize = cc.size(0,0)
    self._mahBackImg = nil -- 牌背
    self._mahBackImgInitSize = cc.size(0,0)
    self._mahFaceImg = nil -- 牌花
    self._jokerIcon = nil -- 财神标识
    self._flowerIcon = nil -- 花牌标识
    self._flowerNumber = nil --花牌数字
    self._mahBackPatternImg = nil           --道具背包系统新加牌背图案

    self:setCascadeOpacityEnabled(true)
    self:setCascadeColorEnabled(true)

    self:_initRootNode()
    self:_initFaceGroundAndBackImg()
    -- 刷新总尺寸值
    self:_updateLayoutAndSize()
    self:setAnchorPoint(display.CENTER)
    self:_setBackPatternImgVisible(not CF.settingData:getIsClearModel())
end

function UIMah:_initEvent()
    self._settingDataProxy = cc.EventProxy.new(CF.settingData,self)
        :addEventListener(CF.settingData.EVENT_CLEAR_MODEL, handler(self,self.onEventClearModel))--纯净模式
        :addEventListener(CF.settingData.EVENT_MAHJONG_CONFIG, handler(self,self.onEventMahJongConfig))
end

function UIMah:onEventClearModel(event)
    local isClear = event.data
    self:_setBackPatternImgVisible(not isClear)
end

function UIMah:onEventMahJongConfig(event)
    local config = event.data
    local isShow = not CF.settingData:getIsClearModel()
    if config.mahBackPatternType and next(config.mahBackPatternType) and isShow then
        if self._config then
            self._config.mahBackPatternType = config.mahBackPatternType
            self:_resetBackPatternImg()
        end
    end

    self._bShowFlowerNumber = config.showFlowerNumber
    self:_updateFlowerNumber()
end

function UIMah:_initRootNode()
    self._rootNode = ccui.Layout:create()
    self._rootNode:setCascadeOpacityEnabled(true)
    self._rootNode:setCascadeColorEnabled(true)
    self:addChild(self._rootNode)
end

function UIMah:_addToRootNode(node, zorder)
    if not self._rootNode or not node then
        return
    end
    if zorder ~= nil then
        self._rootNode:addChild(node, zorder)
    else
        self._rootNode:addChild(node)
    end
end

-- 需要检测的设置选项的key，UIMahSettingValueInterface中调用
function UIMah:_getWatchValueKeys()
    return {
        UIMahConfig.MahSettingKey.ShapeType,
        UIMahConfig.MahSettingKey.LightType,
        UIMahConfig.MahSettingKey.BackColorType,
        UIMahConfig.MahSettingKey.FaceType,
        UIMahConfig.MahSettingKey.FaceSizeRatio,
        UIMahConfig.MahSettingKey.HeightRatio,
        UIMahConfig.MahSettingKey.ThickRatio,
    }
end

function UIMah:_setRootNodePosition(pos)
    if not self._rootNode or not pos then
        return
    end
    self._rootNode:setPosition(pos)
end

function UIMah:_initFaceGroundAndBackImg()
    self:_resetFaceGroundAndBackImg()
    self:_resetBackPatternImg()
end

function UIMah:_resetFaceGroundAndBackImg()
    self:_resetBackImg()
    self:_resetFaceGroundImg()
end

-- 初始化牌背
function UIMah:_resetBackImg()
    if self._mahBackImg then
        self._mahBackImg:removeFromParent()
        self._mahBackImg = nil
    end
    self._mahBackImg = self:_createMahImg(GroundImgType.Back, ImgSource.Plist)
    self._mahBackImgInitSize = self._mahBackImg:getContentSize()
    self:_updateThick()
end

-- 初始化道具背包系统的牌背图案
function UIMah:_resetBackPatternImg()
     if self._mahBackPatternImg then
         self._mahBackPatternImg:removeFromParent()
         self._mahBackPatternImg = nil
     end
    local changeCardModule = CF.game:getModule("ChangeCard")
    local isChanged = changeCardModule and changeCardModule:isChangeCardSuccess()
    local source = ImgSource.Download
    if isChanged then
        source = ImgSource.Plist
    end
    self._mahBackPatternImg = self:_createMahImg(GroundImgType.BackPattern, source)
end

--道具背包系统的牌背图案是否可见
function UIMah:_setBackPatternImgVisible(visible)
    if self._mahBackPatternImg and not tolua.isnull(self._mahBackPatternImg) then
        self._mahBackPatternImg:setVisible(visible)
    end
end

-- 初始化牌面底
function UIMah:_resetFaceGroundImg()
    if self._mahFaceGroundImg then
        self._mahFaceGroundImg:removeFromParent()
        self._mahFaceGroundImg = nil
    end
    self._mahFaceGroundImg = self:_createMahImg(GroundImgType.FaceGround, ImgSource.Plist)
    self._mahFaceGroundImgInitSize = self._mahFaceGroundImg:getContentSize()
    if not self:_updateFaceGroundHeight() then
        self:_updateFacePosition()
    end
end

function UIMah:_addToFaceGround(node, zorder)
    if not self._mahFaceGroundImg or not node then
        return
    end
    if zorder ~= nil then
        self._mahFaceGroundImg:addChild(node, zorder)
    else
        self._mahFaceGroundImg:addChild(node)
    end
end

function UIMah:_getAddHeight()
    if not MahLogic.isCanChangeHeight(self._mahType) then
        return 0
    end
    local maxAddHeight = UIMahConfig.HandMahMaxHeight - UIMahConfig.HandMahMinHeight
    return maxAddHeight * self:_getConfigValueByKey(UIMahConfig.MahSettingKey.HeightRatio)
end

-- 刷新牌面底的高度
function UIMah:_updateFaceGroundHeight()
    if not MahLogic.isCanChangeHeight(self._mahType) then
        return false
    end
    if not self._mahFaceGroundImg then
        return false
    end
    
    local width = self._mahFaceGroundImg:getContentSize().width
    self._mahFaceGroundImg:setContentSize(cc.size(
        width, 
        UIMahConfig.HandMahMinHeight + self:_getAddHeight()))
    
    return self:_updateFacePosition()
end

function UIMah:_updateFacePosition()
    if not self._mahFaceImg or not self._mahFaceGroundImg then
        return false
    end

    local layoutConf = UIMahConfig.MahLayout[self._mahType]
    if not layoutConf or not layoutConf.FaceGround or not layoutConf.FaceGround.InitialThick then
        return false
    end
    
    local totalHeight = self._mahFaceGroundImg:getContentSize().height
    local exceptThickHeight = totalHeight - layoutConf.FaceGround.InitialThick
    -- 如果是站立牌，则牌面厚度是在上部显示
    if MahLogic.isStandMah(self._mahType) then
        self._mahFaceImg:setPosition(0 ,0 - layoutConf.FaceGround.InitialThick - exceptThickHeight / 2)
    else
        self._mahFaceImg:setPosition(0 ,layoutConf.FaceGround.InitialThick + exceptThickHeight / 2)
    end
end

function UIMah:_updateThick()
    -- 当前麻将类型是否可以改变厚度
    if not MahLogic.isCanChangeThick(self._mahType) then
        return
    end

    if not self._mahBackImg then
        return
    end

    local initSize = self._mahBackImgInitSize
    local addThick = UIMahConfig.MahMaxAddThick * self:_getConfigValueByKey(UIMahConfig.MahSettingKey.ThickRatio)
    self._mahBackImg:setContentSize(cc.size(initSize.width, initSize.height + addThick))
end

-- 重置牌花
function UIMah:_updateFace()
    if not MahLogic.isShowFaceByMahType(self._mahType) then
        return
    end

    local isRenYiMahValue = MahLogic.isRenYiMahValue(self._mahValue)
    if not isRenYiMahValue and not MahLogic.isNormalMahValue(self._mahValue) then
        return
    end

    if not self._mahFaceImg then
        self._mahFaceImg = ccui.ImageView:create()
        self:_addToRootNode(self._mahFaceImg, UIMahConfig.MahZorderConf.Face)
    end

    local faceLayoutConf = UIMahConfig.MahLayout[self._mahType].Face or {}
    self._mahFaceImg:setRotation(faceLayoutConf.Rotation or 0)
    if isRenYiMahValue then
        MahLogic.addPlistSpriteFrames(UIMahConfig.MahIconPlistPath)
        self._mahFaceImg:loadTexture(UIMahConfig.MahRenYiFrameName, ccui.TextureResType.plistType)
    else
        self:_addFaceSpriteFrames()
        if self:_getFaceFrameName() then
            self._mahFaceImg:loadTexture(self:_getFaceFrameName(), ccui.TextureResType.plistType)
        end
    end
    self:_updateFaceSize()
    self:_updateFacePosition()
end

function UIMah:_getFaceFrameName()
    if not MahLogic.isNormalMahValue(self._mahValue) then
        return nil
    end
    local faceType = self:_getConfigValueByKey(UIMahConfig.MahSettingKey.FaceType)
    if not UIMahConfig.MahFacePlistPath[faceType] then
        return nil
    end
    return string.format(UIMahConfig.MahFrameNameStr, faceType, self._mahValue)
end

-- 是否需要在现有的基础上缩小牌花比例
function UIMah:_isNeedLessenFaceScale()
    if self._mahType == CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT
    or self._mahType == CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT then
        return true
    end
    return false
end

-- 刷新牌花尺寸
function UIMah:_updateFaceSize()
    if not self._mahFaceImg then
        return
    end
    local faceScale = UIMahConfig.MahFaceMinScale + (UIMahConfig.MahFaceMaxScale - UIMahConfig.MahFaceMinScale) * self:_getConfigValueByKey(UIMahConfig.MahSettingKey.FaceSizeRatio)
    if self:_isNeedLessenFaceScale() then
        -- 美术设计横躺的牌牌面较窄，需要使用更小缩放比
        faceScale = faceScale * 0.9
    end
    if faceScale < UIMahConfig.MahFaceMinScale then
        faceScale = UIMahConfig.MahFaceMinScale
    end
    self._mahFaceImg:setScale(faceScale)
end

function UIMah:_createMahImg(keyStr, imgSource)
    local frameNameStr = UIMahConfig.MahFrameName[self._mahType][keyStr]
    local layoutConfig = UIMahConfig.MahLayout[self._mahType][keyStr]
    if keyStr ~= GroundImgType.BackPattern then
        if not frameNameStr or not layoutConfig then
            return 
        end
    else
        if not layoutConfig then
            return
        end
    end
    
    
    local shapeType = self:_getConfigValueByKey(UIMahConfig.MahSettingKey.ShapeType)
    local shapeStr = UIMahConfig.MahGroundShapeStr[shapeType]

    local frameName = self:_getFrameName(keyStr, frameNameStr, shapeStr)
    if frameName == "" then
        return
    end

    local newImg = self:_getNewImg(imgSource, frameName, layoutConfig, keyStr)
    if not newImg then
        return
    end

    newImg:setAnchorPoint(layoutConfig.AnchorPoint)
    newImg:setPosition(layoutConfig.Position)
    self:_addToRootNode(newImg, layoutConfig.Zorder)
    return newImg
end

function UIMah:_getFrameName(keyStr, frameNameStr, shapeStr)
    local frameName = ""

    local changeCardModule = CF.game:getModule("ChangeCard")
    local isChanged = changeCardModule and changeCardModule:isChangeCardSuccess()

    if keyStr == GroundImgType.Back then

        local backColorType = self:_getConfigValueByKey(UIMahConfig.MahSettingKey.BackColorType)
        if isChanged then
            backColorType = CF.GameDefine.MAH_BACK_COLOR_TYPE.CHANGECARD
        end
        local colorStr = UIMahConfig.MahGroundColorStr[backColorType]
        if shapeStr and colorStr then
            frameName = string.format(frameNameStr, shapeStr, colorStr)
        end
    elseif keyStr == GroundImgType.BackPattern then
        local backPatternType = self:_getMahPropConfigValueByKey(UIMahConfig.MahPropKey.BackPatternType)
        if isChanged then
            if self._mahType == CF.GameDefine.MAH_TYPE.STAND_FACE_BACKWARD then
                frameName = "mahlayer_backpatter_1.png"
            elseif self._mahType == CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL then
                frameName = "mahlayer_backpatter_1.png"
            elseif self._mahType == CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_HORIZONTAL then
                frameName = "mahlayer_backpatter_2.png"
            end
        else
            if backPatternType ~= "" and type(backPatternType) == "table" then
                if self._mahType == CF.GameDefine.MAH_TYPE.STAND_FACE_BACKWARD then
                    frameName = backPatternType[1] or ""
                elseif self._mahType == CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL then
                    frameName = backPatternType[1] or ""
                elseif self._mahType == CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_HORIZONTAL then
                    frameName = backPatternType[2] or ""
                end
            end
        end
    else
        local lightType = self:_getConfigValueByKey(UIMahConfig.MahSettingKey.LightType)
        if isChanged then
            frameNameStr = "change_"..frameNameStr
        end
        local lightStr = UIMahConfig.MahGroundLightStr[lightType]
        if shapeStr and lightStr then
            frameName = string.format(frameNameStr, shapeStr, lightStr)
        end
    end
    return frameName
end

function UIMah:_getNewImg(imgSource, frameName, layoutConfig, keyStr)
    local newImg
    if imgSource == ImgSource.Plist then
        if keyStr == GroundImgType.BackPattern then
            MahLogic.addPlistSpriteFrames(UIMahConfig.MahGroundPlistPath)
            newImg = ccui.ImageView:create()
            newImg:loadTexture(frameName, ccui.TextureResType.plistType)
            local blendFunc = cc.blendFunc( gl.ONE, gl.ONE)
            if newImg.setBlendFunc then
                newImg:setBlendFunc(blendFunc) --精灵叠加模式
                newImg:setOpacity(77)
            end
            if newImg.ignoreContentAdaptWithSize then
                newImg:ignoreContentAdaptWithSize(false)
            end
        else
            MahLogic.addPlistSpriteFrames(UIMahConfig.MahGroundPlistPath)
            newImg = ccui.ImageView:create()
            newImg:loadTexture(frameName, ccui.TextureResType.plistType)
            if layoutConfig.CapInsets then
                newImg:setScale9Enabled(true)
                newImg:setCapInsets(layoutConfig.CapInsets)
            end
        end
    elseif imgSource == ImgSource.Download then
        newImg = CF.RemoteImage.new()
        if newImg.ignoreContentAdaptWithSize then
            newImg:ignoreContentAdaptWithSize(false)
        end
        newImg:setCallBack(function()
            local blendFunc = cc.blendFunc( gl.ONE, gl.ONE)
            if newImg.setBlendFunc then
                newImg:setBlendFunc(blendFunc) --精灵叠加模式
                newImg:setOpacity(77)
            end
        end)
        newImg:setUrl(frameName)
    else
        newImg = ccui.ImageView:create(frameName)
    end
    return newImg
end

-- 刷新布局和尺寸
function UIMah:_updateLayoutAndSize()
    if not self._mahBackImg or not self._mahFaceGroundImg then
        return
    end

    local layoutConfig = UIMahConfig.MahLayout[self._mahType]
    if not layoutConfig then
        return
    end

    if MahLogic.isLeftOrRightStandMah(self._mahType) then
        self:setContentSize(cc.size(self._mahBackImgInitSize.width + self._mahFaceGroundImgInitSize.width, self._mahBackImgInitSize.height))
        if MahLogic.checkSamePosition(layoutConfig.Back.AnchorPoint, display.RIGHT_CENTER) then
            self:_setRootNodePosition(cc.p(self._mahBackImgInitSize.width, self._mahBackImgInitSize.height / 2))
        else
            self:_setRootNodePosition(cc.p(self._mahFaceGroundImgInitSize.width, self._mahFaceGroundImgInitSize.height / 2))
        end
        return
    end
    
    local topImg = self._mahFaceGroundImg
    local bottomImg = self._mahBackImg
    if layoutConfig.Back.Zorder >  layoutConfig.FaceGround.Zorder then
        topImg = self._mahBackImg
        bottomImg = self._mahFaceGroundImg
    end

    local totalHeight
    local rootNodePosY
    if MahLogic.checkSamePosition(layoutConfig.Back.AnchorPoint, layoutConfig.FaceGround.AnchorPoint) then
        totalHeight = topImg:getContentSize().height + topImg:getPositionY() + math.abs(bottomImg:getPositionY())
        rootNodePosY = math.abs(bottomImg:getPositionY())
    elseif MahLogic.isStandMah(self._mahType) then
        totalHeight = bottomImg:getContentSize().height - math.abs(bottomImg:getPositionY()) + topImg:getContentSize().height
        rootNodePosY = totalHeight - bottomImg:getContentSize().height + math.abs(bottomImg:getPositionY())
    else
        totalHeight = bottomImg:getContentSize().height - math.abs(bottomImg:getPositionY()) + topImg:getContentSize().height
        rootNodePosY = bottomImg:getContentSize().height - math.abs(bottomImg:getPositionY())
    end

    self:setContentSize(cc.size(self._mahBackImgInitSize.width, totalHeight))
    self:_setRootNodePosition(cc.p(self._mahBackImgInitSize.width/2, rootNodePosY))
    self:_updateJokerIconPosition()
    self:_updateFlowerIconPosition()
    self:_updateTingIconPosition()
    self:_updateBackPatternPosition()
    self:_updateBaoIconPosition()
end

function UIMah:_updateBackPatternPosition()
    local mahSize = self:getContentSize()
    local thick = self:getThick() / self:getScale()
    if not self._mahBackPatternImg then
        return
    end
    local x = self._mahBackPatternImg:getPositionX()
    if self._mahType == CF.GameDefine.MAH_TYPE.STAND_FACE_BACKWARD then
        local y = (mahSize.height - thick)/2 - self._rootNode:getPositionY()
        self._mahBackPatternImg:setPosition(x, y)
    elseif self._mahType == CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL then
        local y = (mahSize.height - thick)/2 + thick - self._rootNode:getPositionY()
        self._mahBackPatternImg:setPosition(x, y)
    elseif self._mahType == CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_HORIZONTAL then
        local y = (mahSize.height - thick)/2 + thick - self._rootNode:getPositionY()
        self._mahBackPatternImg:setPosition(x, y)
    end
end

function UIMah:_updateJokerIconPosition()
    if not self._jokerIcon then
        return 
    end
    local jockerIconSize = self._jokerIcon:getContentSize()
    local selfSize = self:getContentSize()
    local thick = self:getThick() / self:getScale()

    if self._mahType == CF.GameDefine.MAH_TYPE.STAND_FACE_FORWARD then
        self._jokerIcon:setPosition(jockerIconSize.width/2, selfSize.height-thick-jockerIconSize.height/2)
    elseif self._mahType == CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP then
        self._jokerIcon:setPosition(jockerIconSize.width/2, selfSize.height-jockerIconSize.height/2)
    elseif self._mahType == CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN then
        self._jokerIcon:setPosition(selfSize.width - jockerIconSize.width/2, thick+jockerIconSize.height/2)
    elseif self._mahType == CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT then
        self._jokerIcon:setPosition(jockerIconSize.height/2, thick+jockerIconSize.width/2)
    elseif self._mahType == CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT then
        self._jokerIcon:setPosition(selfSize.width - jockerIconSize.height/2, selfSize.height-jockerIconSize.width/2)
    end
end

function UIMah:_updateFlowerIconPosition()
    if not self._flowerIcon then
        return
    end
    local flowerIconSize = self._flowerIcon:getContentSize()
    local selfSize = self:getContentSize()
    self._flowerIcon:setPosition(selfSize.width - flowerIconSize.width/2, selfSize.height-flowerIconSize.height/2)
end

function UIMah:_updateMaskColor()
    if self._bActionMask then
        self:setColor(UIMahConfig.MahColor.ActionShader)
    elseif self._bTouchLimit then
        self:setColor(UIMahConfig.MahColor.Limit)
    elseif self._bPreBao then
        self:setColor(UIMahConfig.MahColor.PreBao)
    else
        self:setColor(UIMahConfig.MahColor.Normal)
    end
end

function UIMah:_onSetConfig(changedConfig)
    if not changedConfig then
        return
    end
    -- 牌面底和牌背相关设置
    if changedConfig[UIMahConfig.MahSettingKey.ShapeType] then
        -- 角的方圆变化，牌面底和牌背一起重置，则不需要再刷新其他相关配置
        self:_resetFaceGroundAndBackImg()
        self:_updateJokerIcon()
    else
        if changedConfig[UIMahConfig.MahSettingKey.BackColorType] then
            self:_resetBackImg()
        elseif changedConfig[UIMahConfig.MahSettingKey.ThickRatio] then
            self:_updateThick()
        end

        if changedConfig[UIMahConfig.MahSettingKey.LightType] then
            self:_resetFaceGroundImg()
        elseif changedConfig[UIMahConfig.MahSettingKey.HeightRatio] then
            self:_updateFaceGroundHeight()
        end
    end
    -- 牌花相关设置
    if changedConfig[UIMahConfig.MahSettingKey.FaceType] then
        self:_updateFace()
    elseif changedConfig[UIMahConfig.MahSettingKey.FaceSizeRatio] then
        self:_updateFaceSize()
    end

    if changedConfig[UIMahConfig.MahPropKey.BackPatternType] then
        self:_resetBackPatternImg()
    end

    self:_updateLayoutAndSize()
end

function UIMah:_createIconImg(iconType)
    local frameName = ""
    if iconType == IconType.Joker then
        local shapeType = self:_getConfigValueByKey(UIMahConfig.MahSettingKey.ShapeType)
        if shapeType == CF.GameDefine.MAH_SHAPE_TYPE.SQUARE then
            frameName = UIMahConfig.MahJokerIconFrameName.Square
        else
            frameName = UIMahConfig.MahJokerIconFrameName.Circle
        end
        if UIMahConfig.JokerSet and UIMahConfig.JokerSet[CF.roomData:getGameID()] then
            frameName = UIMahConfig.JokerSet[CF.roomData:getGameID()]
        end
    elseif iconType == IconType.Flower then
        local shapeType = self:_getConfigValueByKey(UIMahConfig.MahSettingKey.ShapeType)
        if shapeType == CF.GameDefine.MAH_SHAPE_TYPE.SQUARE then
            frameName = UIMahConfig.MahFlowerIconFrameName.Square
        else
            frameName = UIMahConfig.MahFlowerIconFrameName.Circle
        end
    elseif iconType == IconType.Ting then
        frameName = UIMahConfig.MahTingIconFrameName
    elseif iconType == IconType.Bao then
        frameName = UIMahConfig.MahBaoIconFrameName
    end
    local iconImg = ccui.ImageView:create()
    if frameName and frameName ~= "" then
        MahLogic.addPlistSpriteFrames(UIMahConfig.MahIconPlistPath)
        iconImg:loadTexture(frameName, ccui.TextureResType.plistType)
    end
    return iconImg
end

function UIMah:_removeJokerIcon()
    if self._jokerIcon then
        self._jokerIcon:removeFromParent()
        self._jokerIcon = nil
    end
end

function UIMah:_updateJokerIcon()
    if not self._bShowJoker then
        self:_removeJokerIcon()
        return
    end

    local jokerIconLayoutConf = UIMahConfig.MahLayout[self._mahType].JokerIcon
    if not jokerIconLayoutConf then
        return
    end

    if not self._jokerIcon then
        local jokerIcon = self:_createIconImg(IconType.Joker)
        jokerIcon:setAnchorPoint(display.CENTER)
        jokerIcon:setRotation(jokerIconLayoutConf.Rotation)
        self:addChild(jokerIcon, UIMahConfig.MahZorderConf.JokerIcon)
        self._jokerIcon = jokerIcon
    end

    if UIMahConfig.JokerColorSet and UIMahConfig.JokerColorSet[CF.roomData:getGameID()] then
        self._mahFaceGroundImg:setColor(cc.c3b(255,255,119))
    end

    self:_updateJokerIconPosition()
end

function UIMah:_removeFlowerIcon()
    if self._flowerIcon then
        self._flowerIcon:removeFromParent()
        self._flowerIcon = nil
    end
end

function UIMah:_updateFlowerIcon()
    if not self._bShowFlower then
        self:_removeFlowerIcon()
        return
    end
    
    local flowerIconLayoutConf = UIMahConfig.MahLayout[self._mahType].JokerIcon
    if not flowerIconLayoutConf then
        return
    end

    if not self._flowerIcon then
        local flowerIcon = self:_createIconImg(IconType.Flower)
        flowerIcon:setAnchorPoint(display.CENTER)
        flowerIcon:setRotation(flowerIconLayoutConf.Rotation)
        self:addChild(flowerIcon, UIMahConfig.MahZorderConf.JokerIcon)
        self._flowerIcon = flowerIcon
    end

    self:_updateFlowerIconPosition()
end

function UIMah:_removeTingIcon()
    if self._tingIcon then
        self._tingIcon:removeFromParent()
        self._tingIcon = nil
    end
end

function UIMah:_updateTingIcon(iconType)
    if not self._bShowTing then
        self:_removeTingIcon()
        return
    end

    if not self._tingIcon then
        local tingIcon = self:_createIconImg(IconType.Ting)
        if iconType == IconType.TingFanMax or iconType == IconType.TingCountMax then
            MahLogic.addPlistSpriteFrames("cocosStudio/MahjongNew/GameLayer/Image/HangZhou/TingMore.plist")
            if iconType == IconType.TingCountMax then
                tingIcon:loadTexture("hangzhou_Img_duo.png", 1)
            elseif iconType == IconType.TingFanMax then
                tingIcon:loadTexture("hangzhou_Img_da.png", 1)
            end
        end
        tingIcon:setAnchorPoint(display.CENTER_BOTTOM)
        self:addChild(tingIcon, UIMahConfig.MahZorderConf.TingIcon)
        self._tingIcon = tingIcon
    end

    self:_updateTingIconPosition()
end

function UIMah:_updateTingIconPosition()
    if not self._tingIcon then
        return
    end
    self._tingIcon:setPosition(self:getContentSize().width / 2, self:getContentSize().height)
end

------------------------------------------------------------------------------------------
--对外接口
------------------------------------------------------------------------------------------

-- 设置初始坐标
function UIMah:setInitPosition(posX, posY)
    if posX == nil or posY == nil then
        return
    end
    self._initPosition = cc.p(posX, posY)
end

function UIMah:getInitPosition()
    return clone(self._initPosition)
end

-- 设置牌值
function UIMah:setMahValue(value)
    if not value or self._mahValue == value then
        return
    end
    if not MahLogic.isShowFaceByMahType(self._mahType) then
        return
    end
    self._mahValue = value
    self:_updateFace()
    self:_updateFlowerNumber()
end

-- 获取牌值
function UIMah:getMahValue()
    if not MahLogic.isShowFaceByMahType(self._mahType) then
        return safeMahValueBack()
    end
    return self._mahValue
end

-- 获取麻将视觉上的顶边宽度
function UIMah:getTopEdgeWidth()
    local edgeWidth = UIMahConfig.MahTopEdgeWidth[self._mahType] or 0
    return edgeWidth * self:getScale()
end

-- 获取麻将视觉上的左右两边高度
function UIMah:getLeftRightEdgeHeight()
    local edgeHeight = UIMahConfig.MahLeftRightEdgeWidth[self._mahType] or 0
    edgeHeight = edgeHeight + self:_getAddHeight()
    return edgeHeight * self:getScale()
end

-- 获取厚度
function UIMah:getThick()
    local layoutConf = UIMahConfig.MahLayout[self._mahType]
    local initialThick = layoutConf.Back.InitialThick + layoutConf.FaceGround.InitialThick
    if not MahLogic.isCanChangeThick(self._mahType) then
        return initialThick * self:getScale()
    end
    return (UIMahConfig.MahMaxAddThick * self:_getConfigValueByKey(UIMahConfig.MahSettingKey.ThickRatio) + initialThick) * self:getScale()
end

-- 设置选中麻将时的提起高度
function UIMah:setSelectedAdd(selectedAdd)
    self._selectedAdd = selectedAdd
end

-- 设置选中状态
function UIMah:setSelected(bSelected)
    self._bSelected = bSelected

    if self._bSelected then
        local selectedAddY = self._selectedAdd or UIMahConfig.HandAreaPlayConf.SelectedAddY
        self:setPositionY(self._initPosition.y + selectedAddY)
        if not self._bPreBao then
            self:setColor(UIMahConfig.MahColor.Selected)
        end
    else
        self:setPositionY(self._initPosition.y)
        self:_updateMaskColor()
    end
end

-- 是否被选中
function UIMah:isSelected()
    if self:getPositionY() ~= self._initPosition.y and self._bSelected then
        return true
    end
    return false
end

-- 设置麻将是否可以触摸选择
function UIMah:setMahTouchLimit(bLimit)
    self._bTouchLimit = bLimit or false
    self:setTouchEnabled(not self._bTouchLimit)
    
    self:_updateMaskColor()
end

-- 刷新麻将触摸状态（播放动画时不可触摸）
function UIMah:updateTouchEnabled()
    local isRunningAction = self:getNumberOfRunningActions() > 0
    self:setTouchEnabled(not self._bTouchLimit and not isRunningAction)
end

-- 是否被限制触摸
function UIMah:isMahTouchLimit()
    return self._bTouchLimit
end

-- 设置麻将是否打出可能会承包
function UIMah:setMahPreBao(bPreBao)
    if not self._mahType == CF.GameDefine.MAH_TYPE.STAND_FACE_FORWARD then
        return
    end
    self._bPreBao = bPreBao or false
    self:_updateMaskColor()
    self:_updateBaoIcon()
end

-- 是否被限制触摸
function UIMah:isMahPreBao()
    return self._bPreBao
end

-- 是否碰杠遮罩
function UIMah:isMahActionMask()
    return self._bActionMask
end

-- 设置麻将是否是碰杠牌
function UIMah:setMahActionMask(bActionMask)
    self._bActionMask = bActionMask or false    
    self:_updateMaskColor()
end

-- isFanMax 最大番
-- isCountMax 最大数
function UIMah:showTingIcon(bShow, isFanMax, isCountMax)
    if not self._mahType == CF.GameDefine.MAH_TYPE.STAND_FACE_FORWARD then
        return
    end
    self._bShowTing = bShow
    if isFanMax then
        self:_updateTingIcon(IconType.TingFanMax)
        return
    end
    if isCountMax then
        self:_updateTingIcon(IconType.TingCountMax)
        return
    end
    self:_updateTingIcon()
end

function UIMah:isTing()
    if self._bShowTing then
        return true
    end
    return false
end

function UIMah:showJokerIcon(bShow)
    self._bShowJoker = bShow
    self:_updateJokerIcon()
end

function UIMah:showFlowerIcon(bShow)
    if self._mahType ~= CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP then
        return 
    end
    self._bShowFlower = bShow
    self:_updateFlowerIcon()
end

--更新牌花数字
function UIMah:_updateFlowerNumber()
    if not self._bShowFlowerNumber then
        if self._flowerNumber then
            self._flowerNumber:removeSelf()
            self._flowerNumber = nil
        end
        return 
    end
    if not MahLogic.isShowFaceByMahType(self._mahType) then
        return
    end

    if not MahLogic.isFlowerMahValue(self._mahValue) then
        return
    end

    if not self._flowerNumber then
        self._flowerNumber = ccui.ImageView:create()
        self:_addToRootNode(self._flowerNumber, UIMahConfig.MahZorderConf.Face)
    end

    local faceLayoutConf = UIMahConfig.MahLayout[self._mahType].Face or {}
    self._flowerNumber:setRotation(faceLayoutConf.Rotation or 0)
    self._flowerNumber:setScale(1.2)
    self:_addFlowerNumberSpriteFrames()
    local frameName = self:_getFlowerNumFrameName()
    if frameName then
        self._flowerNumber:loadTexture(frameName, ccui.TextureResType.plistType)
    end
    self:_updateFlowerNumPosition()
end

--更新牌花数字位置
function UIMah:_updateFlowerNumPosition()
    if not self._flowerNumber then
        return
    end

    local layoutConf = UIMahConfig.MahLayout[self._mahType]
    if not layoutConf or not layoutConf.FaceGround or not layoutConf.FaceGround.InitialThick then
        return
    end
    
    local totalHeight = self._mahFaceGroundImg:getContentSize().height
    local totalWidth = self._mahFaceGroundImg:getContentSize().height
    local posX = MahLogic.isFlowerMahNumberLeft(self._mahValue) and -totalWidth or totalWidth
    local posOffsetX,posOffsetY = 4,2.3
    if MahLogic.isStandMah(self._mahType) then
        self._flowerNumber:setPosition(cc.p(posX / posOffsetX , - layoutConf.FaceGround.InitialThick*posOffsetY)) --站立的牌
    else
        self._flowerNumber:setPosition(cc.p(posX / posOffsetX , totalHeight - layoutConf.FaceGround.InitialThick*posOffsetY)) --倒着的牌
    end
end

--获取牌花数字图片缓存名字
function UIMah:_getFlowerNumFrameName()
    if not MahLogic.isFlowerMahValue(self._mahValue) then
        return nil
    end
    local flowerNum = MahLogic.getFlowerNumber(self._mahValue)
    if not flowerNum then return end
    if MahLogic.isFlowerMahNumberLeft(self._mahValue) then
        return string.format(UIMahConfig.MahFlowerNumFrameName.Red, flowerNum)
    else
        return string.format(UIMahConfig.MahFlowerNumFrameName.Black, flowerNum)
    end
end

--花牌数字资源
function UIMah:_addFlowerNumberSpriteFrames()
    MahLogic.addPlistSpriteFrames(UIMahConfig.MahFlowerNumPlistPath)
end

function UIMah:_updateBaoIcon()
    if not self._bPreBao then
        self:_removeBaoIcon()
        return
    end

    if not self._baoIcon then
        local baoIcon = self:_createIconImg(IconType.Bao)
        baoIcon:setAnchorPoint(display.RIGHT_BOTTOM)
        self:addChild(baoIcon, UIMahConfig.MahZorderConf.JokerIcon)
        self._baoIcon = baoIcon
    end

    self:_updateBaoIconPosition()
end

function UIMah:_removeBaoIcon()
    if self._baoIcon then
        self._baoIcon:removeFromParent()
        self._baoIcon = nil
    end
end

function UIMah:_updateBaoIconPosition()
    if not self._baoIcon then
        return
    end
    self._baoIcon:setPosition(self:getContentSize().width, 0)
end

return UIMah �  