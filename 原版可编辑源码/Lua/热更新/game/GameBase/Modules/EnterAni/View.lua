local EnterAniView = CF.gameClass("EnterAniView", CF.ViewBase)

function EnterAniView:getCSBPath()
    return "cocosStudio/Common/CSB/EnterAniLayer.csb"
end

function EnterAniView:getBindingInfo()
    return {
        ["_BG"] = {varName = "_bg"},
        ["_BG_FIX"] = {varName = "_bgFix"},
        ["_ANI_NODE"] = {varName = "_aniNode"}
    }
end

function EnterAniView:ctor()
    EnterAniView.super.ctor(self)
    self._showEnterAni = false

    if CF.settingData.judgeSkinBundle then
        CF.settingData:judgeSkinBundle()
    end

    self:initSelfCamera()

    local isFirstEnter = false
    if CF.roomData:isBoxRoom() then
        local p = XH.playerData:getPlayerPosition()
        if p and p.gameID == 0 then
            isFirstEnter = true
        end
    elseif CF.roomData:is50() then
        isFirstEnter = not CF.roomData:isReconnect()
    elseif CF.roomData:isBianChaDKGoldRoom() then
        isFirstEnter = not (XH.GT_DK_RECONNECT == true)
        XH.GT_DK_RECONNECT = nil
    end
    local inUse = XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.TABLE)
    if inUse and isFirstEnter then
        self._showEnterAni = true
    else
        CF.game:getModule("EnterAni"):dispatchEnterAniFinish()
    end
end

function EnterAniView:initSelfCamera()
    if self._userCamera == nil then
        local visibleSize = cc.Director:getInstance():getWinSize()
        local camera2D = cc.Camera:createOrthographic(visibleSize.width, visibleSize.height, -1024, 1024)
        camera2D:setCameraFlag(cc.CameraFlag.USER3) -- 设置摄像机标志
        camera2D:setPosition3D(cc.vec3(0, 0, 0))
        camera2D:setRotation3D(cc.vec3(0, 0, 0))
        camera2D:setDepth(-2)
        self:addChild(camera2D) -- 添加到场景
        self._userCamera = camera2D
    end
end

function EnterAniView:onEnter()
    self:updateTableBg()
    self._showEnterAni = false
end

function EnterAniView:getProxyEvents()
    local events = {
        {module = CF.settingData, eventKeyName = "EVENT_CHECK_MAHLAYER_DIMENSION", callBack = "onTableBgChangedMah3D"},
        {module = CF.settingData, eventKeyName = "EVENT_TABLE_STYLE", callBack = "onTableBgChanged"},
        {module = CF.settingData, eventKeyName = "EVENT_DOUBLEKOU_TABLE_STYLE_CHANGED", callBack = "onTableBgChanged"},
        {module = CF.settingData, eventKeyName = "EVENT_TABLE_STYLE_CHANGED", callBack = "onTableBgChanged"},
        {module = CF.settingData, eventKeyName = "EVENT_LANDLORDS_TABLE_STYLE_CHANGED", callBack = "onTableBgChanged"},
        {module = CF.settingData, eventKeyName = "EVENT_HONGSHI_TABLE_STYLE_CHANGED", callBack = "onTableBgChanged"},
        {module = CF.settingData, eventKeyName = "EVENT_VISUAL_ANGLE_3D", callBack = "onTableBgChanged"}
    }
    return events
end

function EnterAniView:onTableBgChangedMah3D()
    if CF.settingData.judgeSkinBundle then
        CF.settingData:judgeSkinBundle()
    end
    self:updateTableBg()
end

function EnterAniView:onTableBgChanged()
    self:updateTableBg()
end

function EnterAniView:updateTableBg()
    if not XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.TABLE) then
        self._bg:setVisible(false)
        self._bgFix:setVisible(false)
        self._aniNode:removeAllChildren()
        return
    end
    self._bg:setVisible(false)
    self._bgFix:setVisible(false)

    self:flushBGCamera()
    self:flushCamera()

    if self._showEnterAni then
        local aniInfo = self:getAniInfo()
        local showEnterDelay = aniInfo.showEnterDelay and aniInfo.showEnterDelay(self._showEnterAni)
        local messageDelay = showEnterDelay or 0.1 -- 发送事件延迟时间
        self:runAction(
            cc.Sequence:create(
                cc.DelayTime:create(messageDelay),
                cc.CallFunc:create(
                    function()
                        CF.game:getModule("EnterAni"):dispatchEnterAniFinish()
                    end
                )
            )
        )
    end
end

function EnterAniView:getAniInfo()
    local info = XH.XGSJ_BUNDLE_INFO[XH.XGSJ_PROP_ID.TABLE]
    local gameID = CF.roomData:getGameID()
    local aniInfo = info.mah
    if CF.gameSub:isMahjong(CF.roomData:getGameID()) and CF.settingData:getIsMahlayer3D() then
        aniInfo = info.mah3D
        if CF.settingData:get3DVisualAngle() == 2 then
            aniInfo.animationLoop = aniInfo.animationLoop3 ~= nil and aniInfo.animationLoop3 or aniInfo.animationLoop
            aniInfo.animationCX = aniInfo.animationCX3 ~= nil and aniInfo.animationCX3 or aniInfo.animationCX
        elseif aniInfo.animationLoop2 then
            aniInfo.animationLoop = aniInfo.animationLoop2 ~= nil and aniInfo.animationLoop2 or aniInfo.animationLoop
            aniInfo.animationCX = aniInfo.animationCX2 ~= nil and aniInfo.animationCX2 or aniInfo.animationCX
        end
    elseif CF.gameSub:isMahjong(gameID) then
        aniInfo = info.mah
    else
        aniInfo = info.card
    end
    return aniInfo
end

function EnterAniView:flushBGCamera()
    local aniInfo = self:getAniInfo()
    if aniInfo.bgPath then
        self._bg:removeLuaComponent(cc.ext.CompScrollPictures)
        if CF.gameSub:isMahjong(CF.roomData:getGameID()) and CF.settingData:getIsMahlayer3D() then
            self._bg:tryAddLuaComponent(cc.ext.CompScrollPictures, {images = {{path = aniInfo.bgPath, adaptHeight = true}}, camera = cc.CameraFlag.USER3})
        else
            self._bg:tryAddLuaComponent(cc.ext.CompScrollPictures, {images = {{path = aniInfo.bgPath, adaptHeight = true}}})
        end
        self._bg:setVisible(true)
        self._bgFix:loadTexture(aniInfo.bgPath, ccui.TextureResType.localType)
        self._bgFix:setVisible(true)
    end
    local scale = aniInfo.scaleFunc and aniInfo.scaleFunc() or 1
    self._aniNode:setScale(scale)
end

function EnterAniView:flushCamera()
    local aniInfo = self:getAniInfo()

    if self._showEnterAni then
        XH.SpineManager:playAniWithComplete(self._aniNode, aniInfo.aniPath, aniInfo.filename, aniInfo.animationCX, false, aniInfo.animationLoop, true)
    else
        XH.SpineManager:playAni(self._aniNode, aniInfo.aniPath, aniInfo.filename, aniInfo.animationLoop, true)
    end
    if CF.gameSub:isMahjong(CF.roomData:getGameID()) and CF.settingData:getIsMahlayer3D() then
        self._bg:setCameraMask(cc.CameraFlag.USER3)
        self._bgFix:setCameraMask(cc.CameraFlag.USER3)
        self._aniNode:setCameraMask(cc.CameraFlag.USER3)
    else
        self._bg:setCameraMask(cc.CameraFlag.DEFAULT)
        self._bgFix:setCameraMask(cc.CameraFlag.DEFAULT)
        self._aniNode:setCameraMask(cc.CameraFlag.DEFAULT)
    end
end

return EnterAniView
