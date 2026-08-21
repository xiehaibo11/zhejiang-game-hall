

local UIMahWallArea3D = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View3D.UIMahWallArea3D")
local UIMahConfig3D = NG.GAME.gameRequire("Modules.GameMain.MahLayer.Config.UIMahConfig3D") 
local UIMahHandArea3D = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View3D.UIMahHandArea3D")
local UIMahTouchHandArea3D = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View3D.UIMahTouchHandArea3D")
local UIMahFlowerArea3D = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View3D.UIMahFlowerArea3D")
local UIMahHuArea3D = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View3D.UIMahHuArea3D")
local UIMahPlayerOutArea3D = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View3D.UIMahPlayerOutArea3D")
local UIMahComb = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View2D.UIMahComb")
local IsGoldBoxTest = require("app.Config.GlobalConfig").IsGoldBoxTest
local UIMahLayer3D = NG.GAME.gameClass("UIMahLayer3D", "newgold.GoldGames.GoldGameMah.MahXueLiu.Modules.GameMain.MahLayer.ViewBase.UIMahLayerBase")

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
    DeskBaseScore = 3,
}

UIMahLayer3D.FntConfigKey = {
    [UIMahLayer3D.FntFlag.ColckStr] = "ColckStr",
    [UIMahLayer3D.FntFlag.ColckStrUrgent] = "ColckStrUrgent",
    [UIMahLayer3D.FntFlag.DeskBaseScore] = "DeskBaseScore",
}

function UIMahLayer3D:getCSBPath()
    return "cocosStudio/GoldNew/Game/MahXueLiu/CSB/GameMain/MahLayer/MahLayer3D.csb"
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

        ["_KW_ACTION_OUT_TARGET_POS_"] = { varName = "_hideActionPoint", beginIndex = 1, endIndex = 6},
        ["_KW_ACTION_BTN_"] = { varName = "_actionButton", beginIndex = 1, endIndex = 7, type = NG.UI_TYPE.BUTTON, onTouch = "onTouchEventActionButton"},
        ["_KW_ACTION_COMBS_OUT_TARGET_POS_"] = { varName = "_hideActionCombsPoint", beginIndex = 2, endIndex = 4},
    }
end

function UIMahLayer3D:getProxyEvents()
    local proxyEvents = UIMahLayer3D.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_UPDATE_CLOCK", callBack = "onUpdateClock" }
    proxyEvents[#proxyEvents + 1] = { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_ROTATE_WIND_POS", callBack = "onRotateWindSeat" }
    proxyEvents[#proxyEvents + 1] = { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_MAHLAYER_SHOW_CHIPS_3D", callBack = "onShowChipsEvent" }
    proxyEvents[#proxyEvents + 1] = { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_MAHLAYER_HIDE_CHIPS_3D", callBack = "onHideChipsEvent" }
    proxyEvents[#proxyEvents + 1] = { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_SHOW_CHIPS_FINISHED", callBack = "onChipsAniFinshed" }
    proxyEvents[#proxyEvents + 1] = { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_UPDATE_MAH_WALL", callBack = "onUpdateMahWall" }
    proxyEvents[#proxyEvents + 1] = { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_ALL_CHIPS", callBack = "onGetAllChips" }
    proxyEvents[#proxyEvents + 1] = { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_TAKE_MAH_FROM_WALL", callBack = "onTakeMahFromWall" }
    proxyEvents[#proxyEvents + 1] = { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_GAME_START", callBack = "onGameStartToDo" }
    proxyEvents[#proxyEvents + 1] = { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_SHOW_CHIPS", callBack = "onShowChips" }

    proxyEvents[#proxyEvents + 1] = { module = NG.GAME.settingData, eventKeyName = "EVENT_MAH_BACK_STYLE_CHANGED", callBack = "onEventFlushMahBack" }
    proxyEvents[#proxyEvents + 1] = { module = NG.GAME.settingData, eventKeyName = "EVENT_MAH_OUT_CARD_STYLE_CHANGED", callBack = "onEventOutCardStyleChange" }
    proxyEvents[#proxyEvents + 1] = { module = NG.GAME.settingData, eventKeyName = "EVENT_MAH_LIGHT_STYLE_CHANGED", callBack = "onEventMahLightStyleChange" }
    return proxyEvents
end

function UIMahLayer3D:ctor(param, rootNode)
    UIMahLayer3D.super.ctor(self, param, rootNode)
end

function UIMahLayer3D:initTempWallData()
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

    local iconImg = ccui.ImageView:create("NewGoldRes/Image/MahXueLiu/ng_mah_game_bbxl.png")
    iconImg:setScale(0.07,0.10)
    iconImg:setCameraMask(self._desk:getCameraMask())
    iconImg:setPosition3D(cc.vec3(0, -12, 13.9))
    iconImg:setRotation3D(cc.vec3(0, 0, 180))
    self._desk:addChild(iconImg)
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

    self._baseScore = self:_createLabelWithFont(self.FntFlag.DeskBaseScore)
    self._baseScore:setScale(0.07,0.10)
    self._desk:addChild(self._baseScore)
    self:showServiceAni()
end

function UIMahLayer3D:initDice()
    self._diceBox = self:_createSprite3D(self.Sprite3DFlag.DiceBox)
    self:_addToRootNode(self._diceBox)

    self._diceAct = self:_createSprite3D(self.Sprite3DFlag.DiceAct)
    self:_addToRootNode(self._diceAct)

    self._diceBoxTop = self:_createSprite3D(self.Sprite3DFlag.DiceBoxTop)
    self:_addToRootNode(self._diceBoxTop)

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
    local lightSet = NG.GAME.settingData:getMahLightStyle() or 1
    self._mahLight = {}
    -- 麻将子光源
    local mahLight1 = cc.AmbientLight:create(cc.WHITE)
    mahLight1:setLightFlag(cc.LightFlag.LIGHT0)
    mahLight1:setIntensity(0.3)
    self:addChild(mahLight1)
    
    local mahLight = cc.DirectionLight:create(cc.vec3(0, 0, -1),cc.WHITE)
    mahLight:setRotation3D(cc.vec3(50, 0, 0))
    mahLight:setLightFlag(cc.LightFlag.LIGHT0)
    mahLight:setIntensity(0.9)
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

function UIMahLayer3D:_getHuAreaRootNode(localSeat)
    return self
end

function UIMahLayer3D:_createHuArea(localSeat)
    local newHuMahArea = UIMahHuArea3D.new(localSeat)
    newHuMahArea:setPosition3D(UIMahConfig3D.HuAreaLayout[localSeat].PositionInLayer)
    newHuMahArea:setMahColor(self:_getNowMahColor())
    return newHuMahArea
end

function UIMahLayer3D:_getFlowerAreaRootNode(localSeat)
    return self
end

-- 牌墙显示的牌墩数 key为localSeat
function UIMahLayer3D:_getWallMahsCountConfig()
    -- return {18,18,18,18}
    return {25,25,25,25}
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
    if not self._tempWallData then
        return 
    end
    
    local delData = {
        asc = 0,
        desc = 0
    }
    delData.desc = self:_getDelCountDesc(self._tempWallData.nDesc, self._tempWallData.nFirstDesc)
    delData.asc = self:_getDelCountAsc(self._tempWallData.nAsc, self._tempWallData.nFirstAsc)

    local tempDescDelCount = self:_getDelCountDesc(self._tempWallData.nDesc, self._tempWallData.nFirstDesc)
    local tempAscDelCount = self:_getDelCountAsc(self._tempWallData.nAsc, self._tempWallData.nFirstAsc)
    if tempDescDelCount < delData.desc then
        delData.desc = delData.desc - 1
    elseif tempAscDelCount < delData.asc then
        delData.asc = delData.asc - 1
    end
    return delData
end

function UIMahLayer3D:checkDelMahsCount()
    if not self._tempWallData then
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
    if not event.msg then
        return
    end

    
    
    self:setWallMahsCountConfigByWallEvent(event)
    
    local bShowAction = self:_checkIsShowActionWithWallMahsCount(event.msg.nWallCnt)
    self:showWall(bShowAction)
    
    -- 设置牌墙初始抓牌数据
    local startTakeData, openMahPos = self:_getWallStartDataByStartAsc(event.msg.nFirstAsc)
    self:_getWallArea():setStartTakeData(startTakeData, openMahPos)
    self._tempWallData = event.msg

    self:checkDelMahsCount()
end

function UIMahLayer3D:onGameStart(event)
    -- self:showWall(true)
end

function UIMahLayer3D:onGameStartToDo()
    -- self:showWall(true)
    local handArea = self:_getHandArea(NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM)
    if handArea then
        handArea:resetHandCameraMask()
    end
end

function UIMahLayer3D:onShowChips(event)
    if event.msg == nil then
        return
    end
    if event.msg.msgThrowChip == nil then
        return
    end
    -- -- 设置牌墙初始抓牌数据
    -- local startTakeData, openMahPos = self:_getWallStartData(event.msg.msgThrowChip.nChips)
    -- self:_getWallArea():setStartTakeData(startTakeData, openMahPos)
end

function UIMahLayer3D:onOpenWallMah(event)
    self:_getWallArea():addOpenMahValue(event.msg.nMah)
    self:checkDelMahsCount()
end

function UIMahLayer3D:showWall(bShowAction)
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
    self._diceAct:setVisible(false)
    self._diceBoxTop:setVisible(true)
    local bankSeat = self:getGameData():getBankerSeat()
    local localBankerSeat = self:getGameData():getDefaultEastWindPos()
    if bankSeat ~= NG.GAME.roomTableData:getMaxPlayer() then
        localBankerSeat = NG.GAME.roomTableData:seatToLocal(bankSeat)
    end

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

    if lightDirect then
        lightDirect:setOpacity(0)
        local act = cc.EaseSineOut:create(cc.FadeIn:create(0.5))
        local act2 = cc.EaseSineIn:create(cc.FadeOut:create(0.5))
        local act3 = cc.Sequence:create(act,act2)
        lightDirect:runAction(cc.RepeatForever:create(act3))        
    end

    local loadColckfunc = function(time)
        if time >= 0 then
            local showTime = time> 99 and 99 or time
            self._colckStr:setString(string.format("%02d", showTime))
            self._colckStrUrgent:setString(string.format("%02d", showTime))
             if time <= 2 then
                self._colckStrUrgent:setVisible(true and not self._inShowChipsAni)
                self._colckStr:setVisible(false)
                NG.soundManager:playSoundClock()
             else
                self._colckStrUrgent:setVisible(false)
                self._colckStr:setVisible(true and not self._inShowChipsAni)
                -- local v = self._colckStr:isVisible()
                -- local v1 = self._diceBox:isVisible()
                -- local v2 = self._diceAct:isVisible()
                -- local v3 = self._diceBoxTop:isVisible()
                -- print(v, v1, v2, v3)
             end
        else
            self._colckStr:stopAllActions()
        end     
    end

    --倒计时
    if self._colckStr then
        self._colckStr:stopAllActions()
        loadColckfunc(tm)
        NG.UITool.createRepeateAction(self._colckStr, 1, function()
            tm = tm - 1
            loadColckfunc(tm)
        end )
    end
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

    -- dump(event.msg.msgThrowChip)
    -- -- 设置牌墙初始抓牌数据
    -- local startTakeData, openMahPos = self:_getWallStartData(event.msg.msgThrowChip)
    -- self:_getWallArea():setStartTakeData(startTakeData, openMahPos)
end

-- 根据骰子数确定起始抓牌位置
function UIMahLayer3D:_getWallStartData(chips)
    if not chips or #chips == 0 then
        return
    end

    local bankerSeat = self:getGameData():getBankerSeat()
    if bankerSeat == NG.GAME.roomTableData:getMaxPlayer() then
        return
    end

    local chipTotalValue = 0
    local minChipValue
    local maxChipValue
    for _, chipValue in pairs(chips) do
        chipTotalValue = chipTotalValue + chipValue
        if not minChipValue or chipValue < minChipValue then
            minChipValue = chipValue
        end
        if not maxChipValue or chipValue > maxChipValue then
            maxChipValue = chipValue
        end
    end
    local bankerLocalSeat = NG.GAME.roomTableData:seatToLocal(bankerSeat)
    local startTakeData = {}
    startTakeData.startLocalSeat = (bankerLocalSeat + chipTotalValue - 1) % 4
    startTakeData.startLocalSeat = startTakeData.startLocalSeat == 0 and 4 or startTakeData.startLocalSeat
    startTakeData.startIndex = minChipValue + 1

    local openMahPos = {}
    openMahPos.mahLocalSeat = (bankerLocalSeat + chipTotalValue) % 4
    openMahPos.mahLocalSeat = openMahPos.mahLocalSeat == 0 and 4 or openMahPos.mahLocalSeat
    openMahPos.mahIndex = minChipValue

    return startTakeData, {openMahPos}
end


-- 根据startAsc起始抓牌位置
function UIMahLayer3D:_getWallStartDataByStartAsc(startAsc)

    local bankerSeat = self:getGameData():getBankerSeat()
    if bankerSeat == NG.GAME.roomTableData:getMaxPlayer() then
        return
    end
    local bankerLocalSeat = NG.GAME.roomTableData:seatToLocal(bankerSeat)
    local startTakeData = {}
    startTakeData.startLocalSeat = bankerLocalSeat
    startTakeData.startLocalSeat = startTakeData.startLocalSeat == 0 and 4 or startTakeData.startLocalSeat
    startTakeData.startIndex = 1

    local openMahPos = {}
    openMahPos.mahLocalSeat = (bankerLocalSeat + 1) % 4
    openMahPos.mahLocalSeat = openMahPos.mahLocalSeat == 0 and 4 or openMahPos.mahLocalSeat
    openMahPos.mahIndex = 1

    return startTakeData, {openMahPos}
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
    local actResPath = UIMahConfig3D.MahLayerSpriteLayout[self.Sprite3DConfigKey[self.Sprite3DFlag.DiceAct]].ResPath
    local Animation = cc.Animation3D:create(actResPath)
    local act = cc.Animate3D:createWithFrames(Animation,0,50)

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
    end, 2.5, false)
end

function UIMahLayer3D:onChipsAniFinshed(event)
    
end
    

function UIMahLayer3D:_createPlayerOutArea(localSeat)
    local newOutArea = UIMahPlayerOutArea3D.new(localSeat)
    newOutArea:setPosition3D(UIMahConfig3D.OutMahsLayout.FourDirection[localSeat].PositionInLayer)
    newOutArea:showAsPlayer2(NG.GAME.roomTableData:getChairs() == 2)
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
    local comb = UIMahComb.new(NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM, combData, config)
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
    -- local UIMahJokerArea = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View3D.UIMahJokerArea3D")
    -- self._openMahs = UIMahJokerArea.new()
    -- self._openMahs:init(openMahsNode)
    -- --财神标志变为花牌标志
    -- -- if self:getGameData():getIsJokerToFlower() then
    -- --     self._openMahs:setIsFlower(true)
    -- -- end
    -- self._openMahs:setJokerMahs(openMahs)
    -- self._openMahs:setConfig(self:_getNowConfig2D())
end

function UIMahLayer3D:onEventSurplusMah(event)
    local surplusCounts = self:getGameData():getSurPlusCounts()
    self:showSurPlusMahBack()
    self._mahsSurPlusCounts:setVisible(true)
    self._mahsSurPlusCounts:setString(surplusCounts)
end

function UIMahLayer3D:_getNowMahColor()
    return self:_switchMahBackStyleToColorFlag(NG.GAME.settingData:getMahBackStyle())
end

local MAH_BACK_COLOR_STYLE_TO_TYPE = {
    [1] = NG.GAME.GameDefine.MAH_BACK_COLOR_TYPE.GREEN,
    [2] = NG.GAME.GameDefine.MAH_BACK_COLOR_TYPE.ORANGE,
}
function UIMahLayer3D:_switchMahBackStyleToColorFlag(style)
    local colorFlag = NG.GAME.GameDefine.MAH_BACK_COLOR_TYPE.GREEN
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
    [1] = NG.GAME.GameDefine.HANDMAHS_PLAY_TYPE.SINGLE_CLICK,
    [2] = NG.GAME.GameDefine.HANDMAHS_PLAY_TYPE.DOUBLE_CLICK
}
function UIMahLayer3D:_switchOutCardStyleToType(style)
    local outType = NG.GAME.GameDefine.HANDMAHS_PLAY_TYPE.SINGLE_CLICK
    if style and MAH_OUT_STYLE_TO_TYPE[style] then
        outType = MAH_OUT_STYLE_TO_TYPE[style]
    end
    return outType
end

function UIMahLayer3D:_getNowOutType()
    return self:_switchOutCardStyleToType(NG.GAME.settingData:getMahOutCardStyle())
end

function UIMahLayer3D:_isNowOutSingleClick()
    return self:_getNowOutType() == NG.GAME.GameDefine.HANDMAHS_PLAY_TYPE.SINGLE_CLICK
end

function UIMahLayer3D:onEventOutCardStyleChange(event)
    local selfHandArea = self._handAreas[NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM]
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
    NG.goldGame:getModule("GameMain.MahLayer"):clearTingUI()
    local data = {}
    data.tingMahID = mahValue
    data.mahConfig = self:_getNowConfig2D()
    return NG.GAME.gameRequire("Modules.GameMain.MahLayer.CanHuMahsUI").new(data)
end

function UIMahLayer3D:onEventClearAll()
    self:getGameData():clearAllMahData()
    self._diceBoxTop:setVisible(false)
    self._diceAct:setVisible(true)
    
    for _, v in pairs(self._centerDisc:getChildren()) do
        if v:getName() == "desk_s" or v:getName() == "ys" then
            v:setVisible(true)
            v:setOpacity(255)
        else
            v:setVisible(false)
            v:stopAllActions()
        end
    end
    if self._wallArea then
        self._wallArea:reset()
    end
    self:initTempWallData()
end

function UIMahLayer3D:showSurPlusMahBack()
    if self._surPlusMahBackMah then
        return
    end
    local config = self:_getNowConfig2D()
    local UIMah = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View2D.UIMah")
    local standMah = UIMah.new(NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL, config)
    standMah:setScale(0.25)
    standMah:setAnchorPoint(display.CENTER)
    self._mahsSurPlusNode:addChild(standMah)
    self._surPlusMahBackMah = standMah
end

function UIMahLayer3D:showServiceAni()
    if IsGoldBoxTest and CF then
        self._baseScore:setString(''..         CF.ROOMID)
        return
    end
    local baseScore = NG.GAME.roomTableData:getBaseScore()
    if baseScore == nil then
        local info = NG.RoomTool.getGoldLevelInfo50()
        if info ~= nil then
            baseScore = info.base
        end
    end
    self._baseScore:setString('df：'.. (baseScore or ''))

end
return UIMahLayer3D(�