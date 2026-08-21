local UIMahWallArea3D = CF.gameRequire("Modules.GameLayer.View3D.UIMahWallArea3D")
local UIMahConfig3D = CF.gameRequire("Modules.GameLayer.Config.UIMahConfig3D") 
local UIMahHandArea3D = CF.gameRequire("Modules.GameLayer.View3D.UIMahHandArea3D")
local UIMahTouchHandArea3D = CF.gameRequire("Modules.GameLayer.View3D.UIMahTouchHandArea3D")
local UIMahFlowerArea3D = CF.gameRequire("Modules.GameLayer.View3D.UIMahFlowerArea3D")
local UIMahPlayerOutArea3D = CF.gameRequire("Modules.GameLayer.View3D.UIMahPlayerOutArea3D")
local UIMahComb = CF.gameRequire("Modules.GameLayer.View2D.UIMahComb")

local UIMahLayer3D = CF.gameClass("UIMahLayer3D", "game.Mahjong.BasicMahjong.Modules.GameLayer.ViewBase.UIMahLayerBase")

UIMahLayer3D.Sprite3DFlag = {
    Floor = 1,
    Desk = 2,
    LiftingPlatform = 3,
    CenterDisc = 4,
    DiceBox = 5,
    DiceAct = 6,
    Dice    = 7,
    DiceBoxTop = 8,
}

UIMahLayer3D.Sprite3DConfigKey = {
    [UIMahLayer3D.Sprite3DFlag.Floor] = "Floor",
    [UIMahLayer3D.Sprite3DFlag.Desk] = "Desk",
    [UIMahLayer3D.Sprite3DFlag.LiftingPlatform] = "LiftingPlatform",
    [UIMahLayer3D.Sprite3DFlag.CenterDisc] = "CenterDisc",
    [UIMahLayer3D.Sprite3DFlag.DiceBox] = "DiceBox",
    [UIMahLayer3D.Sprite3DFlag.DiceAct] = "DiceAct",
    [UIMahLayer3D.Sprite3DFlag.Dice] = "Dice",
    [UIMahLayer3D.Sprite3DFlag.DiceBoxTop] = "DiceBoxTop",
}

UIMahLayer3D.FntFlag = { 
    ColckStr = 1,
    ColckStrUrgent = 2,
}

UIMahLayer3D.FntConfigKey = {
    [UIMahLayer3D.FntFlag.ColckStr] = "ColckStr",
    [UIMahLayer3D.FntFlag.ColckStrUrgent] = "ColckStrUrgent",
}

function UIMahLayer3D:getCSBPath()
    return "cocosStudio/MahjongNew/MahLayer/CSB/MahLayer3D.csb"
end

function UIMahLayer3D:getBindingInfo()
    return {
        ["_KW_ACTION_MOVE_PANEL"] = { varName = "_actionMovePanel"},
        ["_KW_ACTION_IN_TARGET_POS"] = { varName = "_showActionPoint"},
        ["_KW_ACTION_COMBS_BACK"] = { varName = "_actionCombsBack"},
        ["_KW_ACTION_COMBS_MOVE_PANEL"] = { varName = "_actionCombsMovePanel"},
        ["_KW_ACTION_COMBS_IN_TARGET_POS"] = { varName = "_showActionCombsPoint"},
        ["_KW_ACTION_PANEL"] = { varName = "_actionPanel"},
        ["_KW_ACTION_COMBS_PANEL"] = { varName = "_actionCombsPanel"},
        ["_KW_ACTION_CANCEL_BTN"] = { varName = "_actionCancel", onTouchEnded = "onTouchEventActionCancel"},
        ["_KW_MAH_COUTNS"] = { varName = "_mahsSurPlusCounts"},
        ["_KW_JOKER_MAH"] = { varName = "_mahsJoker"},
        ["_KW_JOKER_MAH_PANEL"] = { varName = "_KW_JOKER_MAH_PANEL"},
        ["_KW_MAH_SURPLUS_NODE"] = { varName = "_mahsSurPlusNode"},
        ["_KW_IMG_ZHUANG_TYPE"] = { varName = "_bankerZhuangType"},
        ["_KW_FNT_ZHUANG_NUM"] = { varName = "_bankerZhuangNum"},
        ["_KW_ACTION_OUT_TARGET_POS_"] = { varName = "_hideActionPoint", beginIndex = 1, endIndex = 6},
        ["_KW_ACTION_BTN_"] = { varName = "_actionButton", beginIndex = 1, endIndex = 7, onTouch = "onTouchEventActionButton"},
        ["_KW_ACTION_COMBS_OUT_TARGET_POS_"] = { varName = "_hideActionCombsPoint", beginIndex = 2, endIndex = 4},
    }
end
function UIMahLayer3D:getProxyEvents()
    local proxyEvents = UIMahLayer3D.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_UPDATE_CLOCK", callBack = "onUpdateClock" }
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_ROTATE_WIND_POS", callBack = "onRotateWindSeat" }
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_MAHLAYER_SHOW_CHIPS_3D", callBack = "onShowChipsEvent" }
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_MAHLAYER_HIDE_CHIPS_3D", callBack = "onHideChipsEvent" }
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_CHIPS_FINISHED", callBack = "onChipsAniFinshed" }
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_UPDATE_MAH_WALL", callBack = "onUpdateMahWall" }
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_ALL_CHIPS", callBack = "onGetAllChips" }
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_TAKE_MAH_FROM_WALL", callBack = "onTakeMahFromWall" }
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_START", callBack = "onGameStartToDo" }
    proxyEvents[#proxyEvents + 1] = { module = CF.settingData, eventKeyName = "EVENT_MAH_BACK_STYLE_CHANGED", callBack = "onEventFlushMahBack" }
    proxyEvents[#proxyEvents + 1] = { module = CF.settingData, eventKeyName = "EVENT_MAH_OUT_CARD_STYLE_CHANGED", callBack = "onEventOutCardStyleChange" }
    proxyEvents[#proxyEvents + 1] = { module = CF.settingData, eventKeyName = "EVENT_MAH_LIGHT_STYLE_CHANGED", callBack = "onEventMahLightStyleChange" }
    proxyEvents[#proxyEvents + 1] = { module = CF.settingData, eventKeyName = "EVENT_VISUAL_ANGLE_3D", callBack = "onEventVisualAngle3DChange" }
    proxyEvents[#proxyEvents + 1] = { module = CF.settingData, eventKeyName = "EVENT_TABLE_STYLE", callBack = "onEventTableStyle" }
    return proxyEvents
end

function UIMahLayer3D:ctor(param, rootNode)
    UIMahLayer3D.super.ctor(self, param, rootNode)
    CF.UITool.adaptForLiuHai({self._actionPanel,self._actionCombsPanel})
    CF.UITool.adaptForLiuHai({self._KW_JOKER_MAH_PANEL})
end

function UIMahLayer3D:initTempWallData()
    self._tempOpenWallIndex = nil
    self._tempWallData = nil
end

function UIMahLayer3D:initView()
    UIMahLayer3D.super.initView(self)
    
    self:initDeskCamera()
    self:initHandCamera()
    self:initFloor()
    self:initDesk()
    self:initLiftingPlatform()
    self:initCenterDisc()
    self:initDice()
    self:initClockStr()
    self:initLight()
    self:flushCenterDis()
end

function UIMahLayer3D:_runLiftingPlatformAction()
    if not self._liftingPlatform then
        return
    end
    self._liftingPlatform:stopAllActions()
    local pos3D = self._liftingPlatform:getPosition3D()
    local act1 = cc.MoveTo:create(0.5, cc.vec3(pos3D.x,pos3D.x,pos3D.z - UIMahConfig3D.WallLiftingPlatformDis.v))
    local act2 = cc.DelayTime:create(0.5) 
    local act3 = cc.MoveTo:create(0.5, cc.vec3(pos3D.x,pos3D.x,pos3D.z))
    self._liftingPlatform:runAction(cc.Sequence:create(act1, act2, act3))

    self:performWithDelay(function ()
        self._liftingPlatform:stopAllActions()
        self._liftingPlatform:setPosition3D(pos3D)
    end, 1.5 + 0.02)
end

function UIMahLayer3D:setMahMaxCounts(maxCount)
    if maxCount == nil then
        return
    end
    self._maxHandMahCount = maxCount
    for _, handArea in pairs(self._handAreas) do
        handArea:setMaxHandMahCount(maxCount)
    end
end

function UIMahLayer3D:setOutMahType(outMahType)
    if outMahType == nil then
        return
    end
    self._outMahType = outMahType
end

function UIMahLayer3D:initDeskCamera()
    local winSize = cc.Director:getInstance():getWinSize()
	local deskCamera=cc.Camera:createPerspective(
        UIMahConfig3D.DeskCameraLayout.FieldOfView, 
        winSize.width / winSize.height, 
        UIMahConfig3D.DeskCameraLayout.NearPlane, 
        UIMahConfig3D.DeskCameraLayout.FarPlane)
    deskCamera:setCameraFlag(UIMahConfig3D.DeskCameraLayout.CameraFlag)
    deskCamera:setPosition3D(UIMahConfig3D.DeskCameraLayout.Position)
    deskCamera:setRotation3D(UIMahConfig3D.DeskCameraLayout.Rotation)
    self:addChild(deskCamera)
    self._deskCamera = deskCamera
end

function UIMahLayer3D:initHandCamera()
    local winSize = cc.Director:getInstance():getWinSize()
    local handCamera=cc.Camera:createOrthographic(
        UIMahConfig3D.SelfHandCameraLayout.ZoomX, 
        winSize.height / winSize.width * UIMahConfig3D.SelfHandCameraLayout.ZoomX,
        UIMahConfig3D.SelfHandCameraLayout.NearPlane, 
        UIMahConfig3D.SelfHandCameraLayout.FarPlane)
    handCamera:setCameraFlag(UIMahConfig3D.SelfHandCameraLayout.CameraFlag)
    handCamera:setPosition3D(UIMahConfig3D.SelfHandCameraLayout.Position)
    handCamera:setRotation3D(UIMahConfig3D.SelfHandCameraLayout.Rotation)
    self:addChild(handCamera)
    self._handCamera = handCamera
end

function UIMahLayer3D:_createSprite3D(spriteFlag)
    if not self.Sprite3DConfigKey[spriteFlag] then
        return nil
    end
    local confKey = self.Sprite3DConfigKey[spriteFlag]
    local layoutConf = UIMahConfig3D.MahLayerSpriteLayout[confKey]
    if not layoutConf then
        return nil
    end
    local sprite3D = cc.Sprite3D:create(layoutConf.ResPath)
    sprite3D:setCameraMask(layoutConf.CameraMask)
    if layoutConf.LightMask then
        sprite3D:setLightMask(layoutConf.LightMask)
    end
    sprite3D:setScale(layoutConf.Scale)
    sprite3D:setPosition3D(layoutConf.Position3D)
    sprite3D:setRotation3D(layoutConf.Rotation3D)
    if layoutConf.VisibleFalse then
        sprite3D:setVisible(false)
    end
    return sprite3D
end

function UIMahLayer3D:_createLabelWithFont(fntFlag)
    if not self.FntConfigKey[fntFlag] then
        return nil
    end
    local confKey = self.FntConfigKey[fntFlag]
    local layoutConf = UIMahConfig3D.MahLayerFntLayout[confKey]
    if not layoutConf then
        return nil
    end
    local label = cc.Label:createWithBMFont(layoutConf.ResPath ,"")
    label:setCameraMask(layoutConf.CameraMask)
    label:setScale(layoutConf.Scale)
    label:setPosition3D(layoutConf.Position3D)
    label:setRotation3D(layoutConf.Rotation3D)
    label:setVisible(layoutConf.Visible)
    label:setString(layoutConf.String)
    return label
end

function UIMahLayer3D:_addToRootNode(sprite)
    if not sprite then
        return
    end
    self:addChild(sprite)
end

function UIMahLayer3D:initFloor()
    self._floor = self:_createSprite3D(self.Sprite3DFlag.Floor)
    self:_addToRootNode(self._floor)
end

function UIMahLayer3D:initDesk()
    self._desk = self:_createSprite3D(self.Sprite3DFlag.Desk)
    self:_addToRootNode(self._desk)
end

function UIMahLayer3D:initLiftingPlatform()
    self._liftingPlatform = self:_createSprite3D(self.Sprite3DFlag.LiftingPlatform)
    self:_addToRootNode(self._liftingPlatform)
end

function UIMahLayer3D:initCenterDisc()
    self._centerDisc = self:_createSprite3D(self.Sprite3DFlag.CenterDisc)
    if self._centerDisc:getChildren() then
        for _, node in pairs(self._centerDisc:getChildren()) do
            node:setLightMask(cc.LightFlag.LIGHT2)
            if node:getName() ~= "desk_s" then
                node:setVisible(false)
            end
        end
    end
    self:_addToRootNode(self._centerDisc)
end

function UIMahLayer3D:initClockStr()
    self._colckStr = self:_createLabelWithFont(self.FntFlag.ColckStr)
    self._colckStrUrgent = self:_createLabelWithFont(self.FntFlag.ColckStrUrgent)
    self._diceBoxTop:addChild(self._colckStr)
    self._diceBoxTop:addChild(self._colckStrUrgent)
end

function UIMahLayer3D:initDice()
    self._diceBox = self:_createSprite3D(self.Sprite3DFlag.DiceBox)
    self:_addToRootNode(self._diceBox)

    self._diceAct = self:_createSprite3D(self.Sprite3DFlag.DiceAct)
    self:_addToRootNode(self._diceAct)
    self._diceAct:setVisible(false)

    self._diceBoxTop = self:_createSprite3D(self.Sprite3DFlag.DiceBoxTop)
    self:_addToRootNode(self._diceBoxTop)
    self._diceBoxTop:setVisible(true)

    self._dice1 = self:_createSprite3D(self.Sprite3DFlag.Dice)
    self._dice2 = self:_createSprite3D(self.Sprite3DFlag.Dice)
    local Dummy001 = self._diceAct:getChildByName("Dummy001")
    local Dummy002 = self._diceAct:getChildByName("Dummy002")

    Dummy001:setRotation3D(cc.vec3(-90, 180, 0))
    Dummy001:setPosition3D(cc.vec3(0,0,0))
    Dummy002:setRotation3D(cc.vec3(-90, 180, 0))
    Dummy002:setPosition3D(cc.vec3(0,0,0))

    Dummy001:addChild(self._dice1)
    Dummy002:addChild(self._dice2)

    local actResPath = UIMahConfig3D.MahLayerSpriteLayout[self.Sprite3DConfigKey[self.Sprite3DFlag.DiceAct]].ResPath
    local Animation = cc.Animation3D:create(actResPath)
    local act = cc.Animate3D:createWithFrames(Animation,49,50)
    self._diceAct:stopAllActions()
    self._diceAct:runAction(act)
end

function UIMahLayer3D:initLight()
    local lightSet = CF.settingData:getMahLightStyle() == 1 and 1 or 0.6
    self._mahLight = {}
    -- 麻将子光源
    local mahLight1 = cc.AmbientLight:create(cc.WHITE)
    mahLight1:setLightFlag(cc.LightFlag.LIGHT0)
    mahLight1:setIntensity(0.3)
    self:addChild(mahLight1)
    
    local mahLight = cc.DirectionLight:create(cc.vec3(0, 0, -1),cc.WHITE)
    mahLight:setRotation3D(cc.vec3(50, 0, 0))
    mahLight:setLightFlag(cc.LightFlag.LIGHT0)
    mahLight:setIntensity(0.9 * lightSet)
    self:addChild(mahLight)

    -- 桌子光源
    local deskLight1 = cc.AmbientLight:create(cc.WHITE)
    deskLight1:setLightFlag(cc.LightFlag.LIGHT2)
    deskLight1:setIntensity(0.9 * lightSet)
    self._mahLight["mah"] = mahLight
    self:addChild(deskLight1)

    -- hand光源
    local handLight1 = cc.AmbientLight:create(cc.WHITE)
    handLight1:setLightFlag(cc.LightFlag.LIGHT1)
    handLight1:setIntensity(0.45)
    self:addChild(handLight1)
    
    local handLight = cc.DirectionLight:create(cc.vec3(0, 0, -1),cc.WHITE)
    handLight:setRotation3D(cc.vec3(50, 0, 0))
    handLight:setLightFlag(cc.LightFlag.LIGHT1)
    handLight:setIntensity(1.2 * lightSet)
    self._mahLight["hand"] = handLight
    self:addChild(handLight)

    -- 出牌光源
    local outMahLight1 = cc.AmbientLight:create(cc.WHITE)
    outMahLight1:setLightFlag(cc.LightFlag.LIGHT3)
    outMahLight1:setIntensity(0.4)
    self:addChild(outMahLight1)
    
    local outMahLight = cc.DirectionLight:create(cc.vec3(0, 0, -1),cc.WHITE)
    --outMahLight:setRotation3D(cc.vec3(30, 0, 0))
    outMahLight:setLightFlag(cc.LightFlag.LIGHT3)
    outMahLight:setIntensity(0.8 * lightSet)
    self._mahLight["out"] = outMahLight
    self:addChild(outMahLight)
    --若想要透明麻将的阴影 需要先生成麻将阴影的批处理实例
    -- if cc.BatchSprite3D then
    --     cc.BatchSprite3D:create(UIMahConfig3D.ShadowModelPath, UIMahConfig3D.materialPath_Shadow)
    -- end
end

function UIMahLayer3D:_createHandArea(localSeat)
    local newHandMahArea = UIMahHandArea3D.new(localSeat)
    newHandMahArea:setPosition3D(UIMahConfig3D.HandAreaLayout[localSeat].PositionInLayer)
    newHandMahArea:setMahColor(self:_getNowMahColor())
    return newHandMahArea
end

function UIMahLayer3D:_createTouchHandArea(localSeat)
    if CF.roomData:getIsSeer() then
        return self:_createHandArea(localSeat)
    end
    local newHandMahArea = UIMahTouchHandArea3D.new(localSeat)
    newHandMahArea:initTouchEvent(self._handCamera, self)
    newHandMahArea:setPosition3D(UIMahConfig3D.HandAreaLayout[localSeat].PositionInLayer)
    newHandMahArea:setMahColor(self:_getNowMahColor())
    newHandMahArea:setIsSingleClick(self:_isNowOutSingleClick())
    return newHandMahArea
end

function UIMahLayer3D:_getHandAreaRootNode(localSeat)
    return self
end

function UIMahLayer3D:_createFlowerArea(localSeat)
    local newFlowerMahArea = UIMahFlowerArea3D.new(localSeat)
    newFlowerMahArea:setPosition3D(UIMahConfig3D.FlowerAreaLayout[localSeat].PositionInLayer)
    newFlowerMahArea:setMahColor(self:_getNowMahColor())
    return newFlowerMahArea
end

function UIMahLayer3D:_getFlowerAreaRootNode(localSeat)
    return self
end

-- 牌墙显示的牌墩数 key为localSeat
function UIMahLayer3D:_getWallMahsCountConfig()
    return {18,18,18,18}
end

-- 牌墙总牌数
function UIMahLayer3D:_getWallMahsCount()
    local mahCounts = self:_getWallMahsCountConfig() or {}
    local totalCount = 0
    for _, count in pairs(mahCounts) do
        totalCount = totalCount + count * 2
    end
    return totalCount
end

function UIMahLayer3D:_getWallArea()
    if not self._wallArea then
        local wallArea = UIMahWallArea3D.new()
        wallArea:setPosition3D(UIMahConfig3D.WallAreaPosition)
        wallArea:setMahColor(self:_getNowMahColor())
        self:addChild(wallArea)
        self._wallArea = wallArea
    end
    return self._wallArea
end

function UIMahLayer3D:_checkIsShowActionWithWallMahsCount(wallMahsCnt)
    wallMahsCnt = wallMahsCnt or 0
    return wallMahsCnt == self:_getWallMahsCount()
end

function UIMahLayer3D:_getDelCountAsc(nAsc, nFirstAsc)
    if nAsc <= nFirstAsc then
        return nFirstAsc - nAsc
    else
        local totalCount = self:_getWallMahsCount()
        return nFirstAsc + (totalCount - nAsc)
    end
end

function UIMahLayer3D:_getDelCountDesc(nDesc, nFirstDesc)
    if nDesc >= nFirstDesc then
        return nDesc - nFirstDesc
    else
        local totalCount = self:_getWallMahsCount()
        return nDesc + (totalCount - nFirstDesc)
    end
end

function UIMahLayer3D:_getDelMahsCountData()
    if not self._tempWallData or not self._tempOpenWallIndex then
        return 
    end
    
    local delData = {
        asc = 0,
        desc = 0
    }
    delData.desc = self:_getDelCountDesc(self._tempWallData.nDesc, self._tempWallData.nFirstDesc)
    delData.asc = self:_getDelCountAsc(self._tempWallData.nAsc, self._tempWallData.nFirstAsc)

    local tempDescDelCount = self:_getDelCountDesc(self._tempOpenWallIndex, self._tempWallData.nFirstDesc)
    local tempAscDelCount = self:_getDelCountAsc(self._tempOpenWallIndex, self._tempWallData.nFirstAsc)
    if tempDescDelCount < delData.desc then
        delData.desc = delData.desc - 1
    elseif tempAscDelCount < delData.asc then
        delData.asc = delData.asc - 1
    end
    return delData
end

function UIMahLayer3D:checkDelMahsCount()
    if not self._tempWallData or not self._tempOpenWallIndex then
        return 
    end
    
    local delData = self:_getDelMahsCountData()
    if delData then
        self:_getWallArea():setDelMahsCount(delData)
    end
end


function UIMahLayer3D:setWallMahsCountConfigByWallEvent(event)

end

function UIMahLayer3D:onUpdateMahWall(event)
do return end 
    if not event.msg then
        return
    end

    self:setWallMahsCountConfigByWallEvent(event)

    local bShowAction = self:_checkIsShowActionWithWallMahsCount(event.msg.nWallCnt)
    self:showWall(bShowAction)
    
    self._tempWallData = event.msg

    self:checkDelMahsCount()
end

function UIMahLayer3D:onGameStart(event)
    -- self:showWall(true)
end

function UIMahLayer3D:onGameStartToDo()
    local handArea = self:_getHandArea(CF.GameDefine.LOCAL_SEAT.BOTTOM)
    if handArea then
        handArea:resetHandCameraMask()
    end
end

function UIMahLayer3D:onOpenWallMah(event)
    self:_getWallArea():addOpenMahValue(event.msg.nMah)
    self._tempOpenWallIndex = event.msg.nIndex
    self:checkDelMahsCount()
end

function UIMahLayer3D:showWall(bShowAction)
    if CF and CF.roomData and CF.roomData:getIsRestart() then
        if self:_getWallArea()._bInit then
            self:_getWallArea():refillWall(self:_getWallMahsCountConfig())
        end
        CF.roomData:setIsRestart(false)
    end
    self:_getWallArea():initWall(self:_getWallMahsCountConfig(),bShowAction)
    if bShowAction then
        self:_runLiftingPlatformAction()
    end
end

function UIMahLayer3D:onUpdateClock(event)
    local seat = event.msg.seat
    local tm = event.msg.time
    if not seat or not self._colckStr  then
        return
    end

    local bankSeat = self:getGameData():getBankerSeat()
    local localBankerSeat = self:getGameData():getDefaultEastWindPos()
    if bankSeat ~= CF.roomData:getMaxPlayer() then
        localBankerSeat = CF.roomData:seatToLocal(bankSeat)
    end

    if seat > 0 and seat <= CF.roomData:getMaxPlayer() then 
        local direct = (seat - localBankerSeat  + 2 + 4) % 4
        local d2s = {
            [0] = "xi",
            [1] = "bei",
            [2] = "dong",
            [3] = "nan",
        }
        local lightDirect 
        local nodes = self._centerDisc:getChildren()
        for _, v in pairs(nodes) do
            if d2s[direct] ==  v:getName() then
                v:setVisible(true)
                v:setOpacity(255)
                lightDirect = v
                v:stopAllActions()
            elseif v:getName() == "desk_s" or v:getName() == "ys" then
                v:setVisible(true)
                v:setOpacity(255)
            else
                v:setVisible(false)
                v:stopAllActions()
            end
        end
    else 
        self:clearLightDirect()
    end 
    

    if lightDirect then
        lightDirect:setOpacity(0)
        local act = cc.EaseSineOut:create(cc.FadeIn:create(0.5))
        local act2 = cc.EaseSineIn:create(cc.FadeOut:create(0.5))
        local act3 = cc.Sequence:create(act,act2)
        lightDirect:runAction(cc.RepeatForever:create(act3))        
    end

    local loadColckfunc = function(time)
        if time >= 0 then
            self._colckStr:setString(string.format("%02d", time))
            self._colckStrUrgent:setString(string.format("%02d", time))
             if time <= 2 then
                self._colckStrUrgent:setVisible(true and not self._inShowChipsAni)
                self._colckStr:setVisible(false)
                CF.soundManager:playSoundClock()
             else
                self._colckStrUrgent:setVisible(false)
                self._colckStr:setVisible(true and not self._inShowChipsAni)
             end
        else
            self._colckStr:stopAllActions()
        end     
    end

    --倒计时
    if self._colckStr then
        if self._diceAct and self._diceAct:isVisible() then
            --self._diceAct:setVisible(false)
            --self._diceBoxTop:setVisible(true)
        end
        self._colckStr:stopAllActions()
        loadColckfunc(tm)
        CF.UITool.createRepeateAction(self._colckStr, 1, function()
            tm = tm - 1
            loadColckfunc(tm)
        end )
    end
end

function UIMahLayer3D:clearLightDirect()
    local nodes = self._centerDisc:getChildren()
    for _, v in pairs(nodes) do
        if v:getName() == "desk_s" or v:getName() == "ys" then
            v:setVisible(true)
            v:setOpacity(255)
        else
            v:setVisible(false)
            v:stopAllActions()
        end
    end
end

function UIMahLayer3D:clearClock()
    self._colckStr:setString(string.format("%02d", 00))
    self._colckStrUrgent:setString(string.format("%02d", 00))
    self._colckStrUrgent:setVisible(false)
    self._colckStr:setVisible(false)
end

function UIMahLayer3D:onRotateWindSeat(event)
    local turnRotation = event.msg - 180
    self._centerDisc:setRotation(turnRotation)
end

function UIMahLayer3D:onGetAllChips(event)
    if event.msg == nil then
        return
    end
    if event.msg.msgThrowChip == nil then
        return
    end

    dump(event.msg.msgThrowChip)
    -- 设置牌墙初始抓牌数据
    local startTakeData, openMahPos = self:_getWallStartData(event.msg.msgThrowChip)
    self:_getWallArea():setStartTakeData(startTakeData, openMahPos)
end

function UIMahLayer3D:_getWallStartData(chips)
    
end

function UIMahLayer3D:onHideChipsEvent(event)
    self._inShowChipsAni = false
    self._diceBoxTop:setVisible(not self._inShowChipsAni)
end

function UIMahLayer3D:onShowChipsEvent(event)
    self._inShowChipsAni = true --正在转筛子
    self._diceBoxTop:setVisible(false)
    self._diceAct:setVisible(true)

    local chips = event.data
    local speedScale = event.speedScale or 1
    if speedScale <= 0 then
        speedScale = 1
    end
    local actResPath = UIMahConfig3D.MahLayerSpriteLayout[self.Sprite3DConfigKey[self.Sprite3DFlag.DiceAct]].ResPath
    local Animation = cc.Animation3D:create(actResPath)
    local act = cc.Animate3D:createWithFrames(Animation,0,50)
    if act.setSpeed then
        act:setSpeed(speedScale)
    end

    self._diceAct:stopAllActions()
    self._diceAct:runAction(act)
    
    local dice1Rot = {
        cc.vec3(0, 180, 0),
        cc.vec3(0, -90, 0),
        cc.vec3(0, 0, 90),
        cc.vec3(0, 0, -90),
        cc.vec3(0, 90, 0),
        cc.vec3(0, 0, 0),
    }
    self._dice1:setRotation3D(dice1Rot[chips[2]])
    
    local dice2Rot = {
        cc.vec3(0, 0, 0),
        cc.vec3(0, 90, 0),
        cc.vec3(0, 0, -90),
        cc.vec3(0, 0, 90),
        cc.vec3(0, -90, 0),
        cc.vec3(0, 180, 0),
    }
    self._dice2:setRotation3D(dice2Rot[chips[1]])

    if self._tempShowChipsSchedule then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._tempShowChipsSchedule)
    end
    self._tempShowChipsSchedule = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        self._inShowChipsAni = false
        if self._diceAct then
            self._diceAct:setVisible(false)
            self._diceBoxTop:setVisible(true)
        end
        if self._tempShowChipsSchedule then
            cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._tempShowChipsSchedule)
        end
        self._tempShowChipsSchedule = nil
    end, 3 / speedScale, false)
end

function UIMahLayer3D:onChipsAniFinshed(event)
    
end
    

function UIMahLayer3D:_createPlayerOutArea(localSeat)
    local newOutArea = UIMahPlayerOutArea3D.new(localSeat)
    newOutArea:setPosition3D(UIMahConfig3D.OutMahsLayout.FourDirection[localSeat].PositionInLayer)
    newOutArea:showAsPlayer2(CF.roomData:getChairs() == 2)
    newOutArea:setMahColor(self:_getNowMahColor())
    return newOutArea
end

function UIMahLayer3D:_getPlayerOutAreaRootNode(localSeat)
    return self
end

function UIMahLayer3D:createActionComb(combMahValues)
    local config = self:_getNowConfig2D()
    local combData = {}
    combData.mahValues = combMahValues
    local comb = UIMahComb.new(CF.GameDefine.LOCAL_SEAT.BOTTOM, combData, config)
    comb:setAnchorPoint(display.LEFT_BOTTOM)
    comb:setScale(0.7)
    comb:setTouchEnabled(true)
    comb:addTouchEventListener(handler(self,self.onTouchEventActionComb))
    return comb
end

function UIMahLayer3D:onTakeMahFromWall(event)
    self:_getWallArea():delMahs(not event.msg.isFront)
end

function UIMahLayer3D:_getLastOutMahCursor()
    local layoutConfig = UIMahConfig3D.OutMahCursorLayout
    if not self._cursorImg then
        self._cursorImg = cc.Sprite3D:create(layoutConfig.ModelPath)
        self._cursorImg:setScale(layoutConfig.Scale)
        self._cursorImg:setRotation3D(layoutConfig.Rotation3D)
        self._cursorImg:setLightMask(layoutConfig.LightMask)
        self._cursorImg:retain()
    end
    if self._cursorImg:getParent() then
        self._cursorImg:retain()
        self._cursorImg:removeSelf()
    end
    self._cursorImg:stopAllActions()
    self._cursorImg:setPosition3D(cc.vec3(0, 0, 2.2))
    local act1 = cc.MoveBy:create(layoutConfig.ActionMoveTime, cc.vec3(0,0,layoutConfig.ActionMoveDis))
    local act2 = cc.MoveBy:create(layoutConfig.ActionMoveTime, cc.vec3(0,0,-layoutConfig.ActionMoveDis))
    self._cursorImg:runAction(cc.RepeatForever:create(cc.Sequence:create(act1, act2)))
    return self._cursorImg
end

function UIMahLayer3D:setOpenMahs(openMahs)
    openMahs = openMahs or {}
    local openMahsNode = self._mahsJoker
    if not openMahsNode then
        return
    end
    self:clearOpenMahs()
    local UIMahJokerArea = CF.gameRequire("Modules.GameLayer.View3D.UIMahJokerArea3D")
    self._openMahs = UIMahJokerArea.new()
    self._openMahs:init(openMahsNode)
    --财神标志变为花牌标志
    if self:getGameData():getIsJokerToFlower() then
        self._openMahs:setIsFlower(true)
    end
    self._openMahs:setJokerMahs(openMahs)
    self._openMahs:setConfig(self:_getNowConfig2D())
end

function UIMahLayer3D:onEventSurplusMah(event)
    local surplusCounts = self:getGameData():getSurPlusCounts()
    self:showSurPlusMahBack()
    self._mahsSurPlusCounts:setVisible(true)
    self._mahsSurPlusCounts:setString(surplusCounts)
end

function UIMahLayer3D:_getNowMahColor()
    return self:_switchMahBackStyleToColorFlag(CF.settingData:getMahBackStyle())
end

local MAH_BACK_COLOR_STYLE_TO_TYPE = {
    [1] = CF.GameDefine.MAH_BACK_COLOR_TYPE.GREEN,
    [2] = CF.GameDefine.MAH_BACK_COLOR_TYPE.ORANGE,
    [6] = CF.GameDefine.MAH_BACK_COLOR_TYPE.XGSJ,
}
function UIMahLayer3D:_switchMahBackStyleToColorFlag(style)
    local colorFlag = CF.GameDefine.MAH_BACK_COLOR_TYPE.GREEN
    if style and MAH_BACK_COLOR_STYLE_TO_TYPE[style] then
        colorFlag = MAH_BACK_COLOR_STYLE_TO_TYPE[style]
    end
    return colorFlag
end

function UIMahLayer3D:_getNowConfig2D()
    local colorFlag = self:_getNowMahColor()
    return UIMahConfig3D.MahColorConf2D[colorFlag]
end

function UIMahLayer3D:onEventFlushMahBack(event)
    local colorFlag = self:_switchMahBackStyleToColorFlag(event.data)
    for _, handArea in pairs(self._handAreas) do
        handArea:setMahColor(colorFlag)
    end
    for _, outArea in pairs(self._playerOutMahAreas) do
        outArea:setMahColor(colorFlag)
    end
    for _, flowerArea in pairs(self._flowerAreas) do
        flowerArea:setMahColor(colorFlag)
    end
    if self._outMahArea then
        self._outMahArea:setMahColor(colorFlag)
    end
    if self._wallArea then
        self._wallArea:setMahColor(colorFlag)
    end

    local config2D = self:_getNowConfig2D()
    if self._surPlusMahBackMah then
        self._surPlusMahBackMah:setConfig(config2D)
    end
    if self._openMahs then
        self._openMahs:setConfig(config2D)
    end
end

local MAH_OUT_STYLE_TO_TYPE = {
    [1] = CF.GameDefine.HANDMAHS_PLAY_TYPE.SINGLE_CLICK,
    [2] = CF.GameDefine.HANDMAHS_PLAY_TYPE.DOUBLE_CLICK
}
function UIMahLayer3D:_switchOutCardStyleToType(style)
    local outType = CF.GameDefine.HANDMAHS_PLAY_TYPE.SINGLE_CLICK
    if style and MAH_OUT_STYLE_TO_TYPE[style] then
        outType = MAH_OUT_STYLE_TO_TYPE[style]
    end
    return outType
end

function UIMahLayer3D:_getNowOutType()
    return self:_switchOutCardStyleToType(CF.settingData:getMahOutCardStyle())
end

function UIMahLayer3D:_isNowOutSingleClick()
    return self:_getNowOutType() == CF.GameDefine.HANDMAHS_PLAY_TYPE.SINGLE_CLICK
end

function UIMahLayer3D:onEventOutCardStyleChange(event)
    local selfHandArea = self._handAreas[CF.GameDefine.LOCAL_SEAT.BOTTOM]
    if selfHandArea and selfHandArea.setIsSingleClick then
        selfHandArea:setIsSingleClick(self:_isNowOutSingleClick())
    end
end

function UIMahLayer3D:onEventMahLightStyleChange(event)
    local style = event.data
    if style and self._mahLight then
        local lightSet =  style == 1 and 1.67 or 0.6
        for _, lightNode in pairs(self._mahLight) do
            lightNode:setIntensity(lightNode:getIntensity() * lightSet)
        end
    end
end

function UIMahLayer3D:_createCanHuMahsUI(mahValue)
    local data = {}
    data.tingMahID = mahValue
    data.mahConfig = self:_getNowConfig2D()
    return CF.gameRequire("Modules.GameLayer.CanHuMahsUI").new(data)
end

function UIMahLayer3D:onEventClearAll()
    if self._wallArea then
        self._wallArea:reset()
    end
    self:initTempWallData()
    self:clearLightDirect()
    self:clearClock()
end

function UIMahLayer3D:onEventSetLaoZhuang()
    self._bankerZhuangType:setVisible(CF.configData:getIsShowLaoZhuang())
    local laozhuangNum = self:getGameData():getLaoZhuangNum()
    self._bankerZhuangNum:setString("x"..laozhuangNum)
end

function UIMahLayer3D:onEventClearLaoZhuang()
    self._bankerZhuangType:setVisible(false)
end

function UIMahLayer3D:showSurPlusMahBack()
    if self._surPlusMahBackMah then
        return
    end
    local config = self:_getNowConfig2D()
    local UIMah = CF.gameRequire("Modules.GameLayer.View2D.UIMah")
    local standMah = UIMah.new(CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL, config)
    standMah:setScale(0.4)
    standMah:setAnchorPoint(display.CENTER)
    self._mahsSurPlusNode:addChild(standMah)
    self._surPlusMahBackMah = standMah
end


function UIMahLayer3D:onEventVisualAngle3DChange(event)
    local style = event.data
    if style == 1 then
        --UIMahConfig3D = CF.gameRequire("Modules.GameLayer.Config.UIMahConfig3D") 
    elseif style == 2 then
        --UIMahConfig3D = CF.gameRequire("Modules.GameLayer.Config.UIMahConfig3DOld") 
    end
end

function UIMahLayer3D:onEventTableStyle()
    self:flushCenterDis()
end

function UIMahLayer3D:flushCenterDis()
    self:flushCenterDiscBgSkin(self._diceBox, UIMahConfig3D.CenterDiscBg)
    if self._centerDisc:getChildren() then
        for _, node in pairs(self._centerDisc:getChildren()) do
            if node:getName() ~= "desk_s" then
                self:flushCenterDiscBgSkin(node, UIMahConfig3D.CenterDiscArrow)
            else
                self:flushCenterDiscBgSkin(node, UIMahConfig3D.CenterDiscBg)
            end
        end
    end
    local isUseTableSkin = XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.TABLE)
    local colckStrKey = self.FntConfigKey[self.FntFlag.ColckStr]
    local colckStrUrgentKey = self.FntConfigKey[self.FntFlag.ColckStrUrgent]
    if colckStrKey and UIMahConfig3D.MahLayerFntLayout[colckStrKey] then
        self._colckStr:setBMFontFilePath(isUseTableSkin and UIMahConfig3D.MahLayerFntLayout[colckStrKey].XGSJResPath or UIMahConfig3D.MahLayerFntLayout[colckStrKey].ResPath)
        self._colckStr:setScale(isUseTableSkin and UIMahConfig3D.MahLayerFntLayout[colckStrKey].ScaleXGSJ or UIMahConfig3D.MahLayerFntLayout[colckStrKey].Scale)
    end
    if colckStrUrgentKey and UIMahConfig3D.MahLayerFntLayout[colckStrUrgentKey] then
        self._colckStrUrgent:setBMFontFilePath(isUseTableSkin and UIMahConfig3D.MahLayerFntLayout[colckStrUrgentKey].XGSJResPath or UIMahConfig3D.MahLayerFntLayout[colckStrUrgentKey].ResPath)
        self._colckStrUrgent:setScale(isUseTableSkin and UIMahConfig3D.MahLayerFntLayout[colckStrKey].ScaleXGSJ or UIMahConfig3D.MahLayerFntLayout[colckStrKey].Scale)
    end
    self._floor:setVisible(not isUseTableSkin)
    self._desk:setVisible(not isUseTableSkin)
    self._liftingPlatform:setVisible(not isUseTableSkin)
    -- 因为直接setTexture会有阴影，先隐藏设置完后再显示
    if isUseTableSkin then
        self:flushCenterVisible(false)
        XH.SysTool.performDelayOnce(function()
            if not self or tolua.isnull(self) then
                return
            end
            self:flushCenterVisible(true)
        end, 1 / 30)
    end
end

function UIMahLayer3D:flushCenterDiscBgSkin(node, config)
    if XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.TABLE) then
        node:setTexture(config[XH.XGSJ_PROP_ID.TABLE])
    else
        node:setTexture(config[0])
    end
end

function UIMahLayer3D:flushCenterVisible(isShow)
    self._centerDisc:setVisible(isShow)
    self._diceBox:setVisible(isShow)
    self._diceBoxTop:setVisible(isShow)
end

return UIMahLayer3D�