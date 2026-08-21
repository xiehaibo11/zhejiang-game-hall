local CURRENT_MODULE_NAME = ...
local GameScene = class("GameScene")
local GameSceneDefine = import(".GameSceneDefine",CURRENT_MODULE_NAME)
local PlayerData = import("GameCommon.Code.GameData.PlayerData")
local GameKeyWord = import("..Config.GameKeyWord",CURRENT_MODULE_NAME)
local PathKeyWord = import("..Config.PathKeyWord",CURRENT_MODULE_NAME)
local GameCard = require("LiangBang.Code.GameAlgorithm.GameCard")

local MyCardsType = import("..GameAlgorithmTZ.MyCardsType",CURRENT_MODULE_NAME)
local CardAlgorithm = import("..GameAlgorithmTZ.CardAlgorithm",CURRENT_MODULE_NAME)
local KW_POS_GAMEAREA_BOOM_XIAN = "KW_ACTION_POS"
local KW_PATH_GAMEAREA_BOOM_XIAN_JSON = GameSceneDefine.KW_GAME_PATH .. "/LiangBang/Json/movie_xian/movie_xian.ExportJson"
local KW_PATH_GAMEAREA_SHUNZI_JSON = GameSceneDefine.KW_GAME_PATH .. "/LiangBang/Json/supper_card_style/supper_card_style.ExportJson"
local KW_PATH_GAMEAREA_BOOM_JSON_ = GameSceneDefine.KW_GAME_PATH .. "/LiangBang/Json/boom/boom_%d.ExportJson"
local KW_PATH_GAMEAREA_BAODAN_JSON = GameSceneDefine.KW_GAME_PATH .. "/LiangBang/Json/baodan_ani/baodan_ani.ExportJson"
local KW_PATH_GAMEAREA_JINGBAOQI_JSON = GameSceneDefine.KW_GAME_PATH .. "/LiangBang/Json/jingbaoqi_ani/jingbaoqi_ani.ExportJson"
local KW_PATH_SHUFFLE_ANI_JSON = GameSceneDefine.KW_GAME_PATH .. "/LiangBang/Json/Shuffle_Ani/NewAnimation.ExportJson"
local KW_PATH_SHOW_BOMG_ANI_JSON = GameSceneDefine.KW_GAME_PATH .. "/LiangBang/Json/DDZ_zhadan/DDZ_zhadan.ExportJson"
local KW_ANI_BOOM_XIAN_NAME = "xian%d"
local KW_ANI_SHUNZI_NAME = "shun%d"
local KW_ANI_BOOM_SCENCE_ANI_NAME = "boom_%d"
local KW_PANEL_BAODAN = 'KW_PANEL_BAODAN'
local KW_POS_SHUFFLE_ANI_POS = 'KW_POS_SHUFFLE_ANI_POS'
local KW_SHUFFLE_CARD_LAYER = 'KW_SHUFFLE_CARD_LAYER'
local KW_TXT_SHUFFLE_PLAYER = 'KW_TXT_SHUFFLE_PLAYER'
local KW_UI_SHUFFLE_PLAYER = 'KW_UI_SHUFFLE_PLAYER'
local KW_BOMB_SCORE = 'KW_BOMB_SCORE'
local KW_BG_PER_PLAYER_SCORE = 'KW_BG_PER_PLAYER_SCORE'
local KW_IMG_SCORE_BG = 'KW_IMG_SCORE_BG'
local KW_IMG_NO_BOMB = "KW_IMG_NO_BOMB_"
local KW_IMG_LB_SCORE_BG = "KW_IMG_LB_SCORE_BG"
local KW_SCORE_TJ_TEXT = "KW_SCORE_TJ_TEXT_"

local UICardsArea = import("GameCommon.Code.CardLayer.CardLayerBase.UICardsArea")

function GameScene:showMenu(bMenuIsIn)
    local targetNode = nil
    local menuPanel = ccui.Helper:seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_UI_MENU)
    if menuPanel then 
        menuPanel:stopAllActions()
        if bMenuIsIn then 
            local btnMenu = ccui.Helper:seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_BTN_MENU)
            if btnMenu then 
                btnMenu:loadTextures("game_amenu_lb_1.png","game_amenu_lb_2.png","game_amenu_lb_2.png",ccui.TextureResType.plistType)
            end
            targetNode = ccui.Helper:seekWidgetByName(self:getRootNode(), GameSceneDefine.KW_UI_MENU_IN_POS)
        else 
            local btnMenu = ccui.Helper:seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_BTN_MENU)
            if btnMenu then 
                btnMenu:loadTextures("game_menu_lb_1.png","game_menu_lb_2.png","game_menu_lb_2.png",ccui.TextureResType.plistType)
            end
            targetNode = ccui.Helper:seekWidgetByName(self:getRootNode(), GameSceneDefine.KW_UI_MENU_OUT_POS)
        end 
        if targetNode then 
            local action = cc.MoveTo:create(0.2, cc.p(targetNode:getPositionX(), targetNode:getPositionY()))
            menuPanel:runAction(action)
            local btnAction = {} 
            local children = menuPanel:getChildren()
            for i = 1 , #children do
                local strName = children[i]:getName()
                if string.find(strName, "KW_BTN_") then
                    children[i]:setOpacity(0) 
                    btnAction[i] = cc.Sequence:create(cc.FadeOut:create(0.05*i),cc.FadeIn:create(0.1),cc.ScaleTo:create(0.1,1.1),cc.ScaleTo:create(0.1,1.0)) 
                    children[i]:runAction(btnAction[i])
                end
            end
        end 
    end   
    local boxRoomMenuPanel = ccui.Helper:seekWidgetByName(self:getRootNode(), GameSceneDefine.KW_UI_BOX_ROOM_MENU)
    if boxRoomMenuPanel then
        boxRoomMenuPanel:stopAllActions()
        if bMenuIsIn then
            local btnMenu = ccui.Helper:seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_BTN_MENU)
            if btnMenu then 
                btnMenu:loadTextures("game_amenu_lb_1.png","game_amenu_lb_2.png","game_amenu_lb_2.png",ccui.TextureResType.plistType)
            end
            targetNode = ccui.Helper:seekWidgetByName(self:getRootNode(), GameSceneDefine.KW_UI_MENU_IN_POS)
        else
            local btnMenu = ccui.Helper:seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_BTN_MENU)
            if btnMenu then 
                btnMenu:loadTextures("game_menu_lb_1.png","game_menu_lb_2.png","game_menu_lb_2.png",ccui.TextureResType.plistType)
            end
            targetNode = ccui.Helper:seekWidgetByName(self:getRootNode(), GameSceneDefine.KW_UI_MENU_OUT_POS)
        end
        if targetNode then
            local action = cc.MoveTo:create(0.2,cc.p(targetNode:getPositionX(),targetNode:getPositionY()))
            boxRoomMenuPanel:runAction(action)
            local btnAction = {} 
            local children = boxRoomMenuPanel:getChildren()
            for i = 1 , #children do
                local strName = children[i]:getName()
                if string.find(strName, "KW_BTN_") then
                    children[i]:setOpacity(0)
                    btnAction[i] = cc.Sequence:create(cc.FadeOut:create(0.05*i),cc.FadeIn:create(0.1),cc.ScaleTo:create(0.1,1.1),cc.ScaleTo:create(0.1,1.0)) 
                    children[i]:runAction(btnAction[i])
                end
            end
        end
    end
end

function GameScene:showSysTime()
    local sysTimeNode = ccui.Helper:seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_TEXT_SYS_TIME)
    if sysTimeNode then
        local delay = cc.DelayTime:create(60)
        local sequence = cc.Sequence:create(cc.CallFunc:create(function() 
            local data = os.date("%H %M", socket.gettime())
            sysTimeNode:setString(data)
        end),delay)
        local action = cc.RepeatForever:create(sequence)
        sysTimeNode:runAction(action)
    end

    local sysTimePointNode = ccui.Helper:seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_TEXT_SYS_TIME_POINT)
    if sysTimePointNode then
        local delay = cc.DelayTime:create(0.5)
        local sequence = cc.Sequence:create(cc.CallFunc:create(function() 
            local bShow = sysTimePointNode:isVisible()
            sysTimePointNode:setVisible(not bShow)
        end),delay)
        local action = cc.RepeatForever:create(sequence)
        sysTimePointNode:runAction(action)
    end
end

function GameScene:showWifiState(delayTime)
    local wifiStateNode = ccui.Helper:seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_UI_WIFI_STATE)
    if wifiStateNode then
        if delayTime <= 150 then
            -- wifiStateNode:loadTexture(string.format("%s%d.png","wifi_icon_", 3),ccui.TextureResType.plistType)
            wifiStateNode:loadTexture(string.format("%s%d.png","img_wifi_", 3),ccui.TextureResType.plistType)
        elseif delayTime <= 800 then
            wifiStateNode:loadTexture(string.format("%s%d.png","img_wifi_", 2),ccui.TextureResType.plistType)
        else
            wifiStateNode:loadTexture(string.format("%s%d.png","img_wifi_", 1),ccui.TextureResType.plistType)
        end
    end
end

function GameScene:showPowerState()
    local powerStateNode = ccui.Helper:seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_UI_POWER_STATE)
    if powerStateNode then
        local delay = cc.DelayTime:create(60)
        local sequence = cc.Sequence:create(cc.CallFunc:create(function() 
            local battery = XH.bf.SysFunc:GetCurBattery()
            local batteryLevel  = battery[1] / battery[2] * 100
            powerStateNode:setPercent(batteryLevel)
        end),delay)
        local action = cc.RepeatForever:create(sequence)
        powerStateNode:runAction(action)      
    end
end

function GameScene:adjustGameBtnPosition()
    Game.UIFunction.setPositionX(self:getRootNode(),GameSceneDefine.KW_BTN_START,250)
    Game.UIFunction.setPositionX(self:getRootNode(),GameSceneDefine.KW_BTN_INVITE,710)
end

function GameScene:turnBoxRoomFeatures(render)
    Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_UI_BOX_ROOM_MENU,render)
    Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_UI_BOX_ROOM_INFO,render)
    Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_TEXT_ROOM_RULE,render)
    if render then
        self:adjustGameBtnPosition()
        Game.UIFunction.setText(self:getRootNode(),GameSceneDefine.KW_TEXT_ROOM_ID,self._boxRoomID)
    end
end

function GameScene:turnNormalRoomFeatures(render)
    Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_UI_MENU,render)
    if render then
        Game.UIFunction.setPositionX(self:getRootNode(),GameSceneDefine.KW_BTN_START,Game.UIFunction.getDesignSize().width/2)
    end
end

function GameScene:showInfoPanel(localSeat,render)
    self._initInfoPanel = self._initInfoPanel or {}
    if self._initInfoPanel[localSeat] == nil then
        self._initInfoPanel[localSeat] = true
        local uiBtnReplay = Game.UIFunction.seekWidgetByName(self:getUIPlayerHead(localSeat),GameSceneDefine.KW_BTN_REPLAY)
        if uiBtnReplay then
            uiBtnReplay:addTouchEventListener(handler(localSeat,handler(self,self.onTouchEventReplay)))
        end
    end
    Game.UIFunction.setVisible(self:getUIPlayerHead(localSeat),GameSceneDefine.KW_UI_INFO_PANEL,render)
    if render then
        local uiHeadNode = self:getUIPlayerHead(localSeat)
        uiHeadNode:stopAllActions()
        performWithDelay(uiHeadNode,function()
            Game.UIFunction.setVisible(self:getUIPlayerHead(localSeat),GameSceneDefine.KW_UI_INFO_PANEL,false)
        end,3)
    end
end

function GameScene:showHeadClock(bShow,nTime,localSeat)
    local headUI = self:getUIPlayerHead(localSeat) 
    if headUI == nil then
        return
    end
    
    local timeWight = 96 
    local timeHeight = 104 
    if localSeat == 2 then 
        timeWight = 98 
        timeHeight = 100
    end
    local function getClockParticlePosition(Percentage)
        local step = {}
        for i = 1,4 do
            step[i] = i * 25 - 12.5
        end
        local x = 0
        local y = 0
        local percentage = (100 - Percentage)
        local percentageRaid = (100 - Percentage) /100 * 2 * math.pi
        if percentage < step[1] or percentage >= step[4] then
            x =  math.tan(percentageRaid) * timeWight / 2
            y = timeHeight / 2
        elseif percentage < step[2] then
            y = - math.tan(percentageRaid - math.pi / 2) * timeHeight / 2
            x = timeWight / 2
        elseif percentage < step[3] then
            x = - math.tan(percentageRaid) * timeWight / 2
            y = -timeHeight / 2
        else
            y = math.tan(percentageRaid - math.pi / 2) * timeHeight / 2
            x = - timeWight / 2
        end
        
        return cc.p(x,y)
    end
    
    local nTime = nTime
    local showClock = bShow and nTime > 0 
    local timerProgress = self:getUIHeadTimerProgress(localSeat)
    local timeParticle = Game.UIFunction.seekWidgetByName(headUI,GameSceneDefine.KW_POS_TIME_PARTICLE_ANI)
    local clock = Game.UIFunction.seekWidgetByName(headUI,GameSceneDefine.KW_UI_PLAYER_TIME)
    if clock then
        clock:setVisible(showClock) 
    end
    
    if showClock then
        --设置时钟数字
        Game.UIFunction.setText(headUI,GameSceneDefine.KW_TEXT_PLAYER_TIME,string.format("%02d",nTime))
        if clock then
            clock:stopAllActions()
            local delay = cc.DelayTime:create(1)
            local callback = cc.CallFunc:create(function()
                nTime = nTime - 1
                Game.UIFunction.setText(headUI,GameSceneDefine.KW_TEXT_PLAYER_TIME,string.format("%02d",nTime))
                if nTime < GameKeyWord.KW_COUNT_CLOCK_WARNING then
                    Game.GameSound.playSoundClock()
                end
            end)
            local squence = cc.Repeat:create(cc.Sequence:create(delay,callback),nTime)
            clock:runAction(squence)
        end
        --设置时钟动画、闪光位置
        if timerProgress then
            timerProgress:stopAllActions()
            timerProgress:setPercentage(100)
            local nTotalClock = nTime
            local nStartTime = socket.gettime()
            local delay = cc.DelayTime:create(0.05)
            local callback = cc.CallFunc:create(function()
                local delatTime = (socket.gettime()- nStartTime)
                local curPercentage = (1 -  delatTime / nTotalClock) * 100
                timerProgress:setPercentage(curPercentage)
                local particlePos = getClockParticlePosition(curPercentage)
                if timeParticle then 
                    timeParticle:setVisible(true)
                    timeParticle:setPosition(particlePos)
                end
                if nTime <= 0 then
                    timerProgress:setPercentage(0)
                    timerProgress:stopAllActions() 
                end
            end)
            local squence = cc.RepeatForever:create(cc.Sequence:create(delay,callback))
            timerProgress:runAction(squence)  
        end
    else
        if clock then
            clock:stopAllActions()
        end
        if timerProgress then
            timerProgress:stopAllActions()
        end
        if timeParticle then
            timeParticle:setVisible(false)
        end
        return
    end

end

function GameScene:showTrustPanel(render)
    if render == false then
        local botPanel = ccui.Helper:seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_PANEL_ROBOT)
        if botPanel then
            botPanel:setVisible(render)
            local botPos = ccui.Helper:seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_POS_ROBOT_ANI)
            if botPos then
                botPos:removeChildByName(GameSceneDefine.ROBOT_ARMATURE)
            end
        end
    else
        ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(
            GameSceneDefine.KW_GAMECOMMON_PATH .. "/GameCommon/Json/bot/bot.png",
            GameSceneDefine.KW_GAMECOMMON_PATH .. "/GameCommon/Json/bot/bot.plist",
            GameSceneDefine.KW_GAMECOMMON_PATH .. "/GameCommon/Json/bot/bot.ExportJson")
        local lastArmature = ccs.Armature:create("bot")
        local botPanel = ccui.Helper:seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_PANEL_ROBOT)
        if botPanel then
            botPanel:setVisible(true)
            lastArmature:setName(GameSceneDefine.ROBOT_ARMATURE)
            local botPos = ccui.Helper:seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_POS_ROBOT_ANI)
            if botPos then
                botPos:removeAllChildren()
                botPos:addChild(lastArmature)
            end
        end
        lastArmature:setAnchorPoint(cc.p(0.5, 0.5))
        lastArmature:getAnimation():playWithIndex(0,-1,1)
    end
end

function GameScene:showCardCount(localSeat,count,show)
    local KW_NUM_WARNING_COUNT = 10
    local headUI = self:getUIPlayerHead(localSeat)
    if headUI then 
        local cardLeftUI = ccui.Helper:seekWidgetByName(headUI,GameSceneDefine.KW_UI_PLAYER_CARD_LEFT)
        if cardLeftUI then 
            if count > 0 then 
                cardLeftUI:setVisible(show)
            else 
                cardLeftUI:setVisible(false)
                self:showAlert(localSeat,false)
            end
            if count <= KW_NUM_WARNING_COUNT and count > 0 then
                local warningCardLeftUI = ccui.Helper:seekWidgetByName(cardLeftUI,GameSceneDefine.KW_TEXT_PLAYER_CARD_LEFT_NUM)
                if warningCardLeftUI then
                    warningCardLeftUI:stopAllActions()
                    local actionEnlarge = cc.ScaleTo:create(0.3,2.0,2.0)
                    local actionReduce = cc.ScaleTo:create(0.3,1.5,1.5)
                    local actionSequence = cc.Sequence:create(actionEnlarge,actionReduce)
                    local actionLoop = cc.RepeatForever:create(actionSequence)
                    warningCardLeftUI:runAction(actionLoop)
                end
                Game.UIFunction.setFntFile(cardLeftUI,GameSceneDefine.KW_TEXT_PLAYER_CARD_LEFT_NUM,GameSceneDefine.KW_PATH_RESOUCE_FONT .. "/game_card_loster2-export.fnt")
                self:showAlert(localSeat,true)
            else 
                local warningCardLeftUI = ccui.Helper:seekWidgetByName(cardLeftUI,GameSceneDefine.KW_TEXT_PLAYER_CARD_LEFT_NUM)
                if warningCardLeftUI then
                    warningCardLeftUI:stopAllActions()
                    warningCardLeftUI:setScale(1.5,1.5)
                end
                Game.UIFunction.setFntFile(cardLeftUI,GameSceneDefine.KW_TEXT_PLAYER_CARD_LEFT_NUM,GameSceneDefine.KW_PATH_RESOUCE_FONT .. "/game_card_loster1-export.fnt")
            end
            Game.UIFunction.setText(cardLeftUI,GameSceneDefine.KW_TEXT_PLAYER_CARD_LEFT_NUM,count)
        end
    end
end

function GameScene:showPassAni(localSeat)
    local handTipsUI = Game.UIFunction.seekWidgetByName(self._rootNode,GameSceneDefine.KW_PANEL_HEAD_TIPS_ .. localSeat)
    if handTipsUI then 
        local passNode = Game.UIFunction.seekWidgetByName(handTipsUI,GameSceneDefine.KW_UI_PASS)
        if passNode then
            passNode:setVisible(true)
            passNode:setOpacity(255)
            local delayAction = cc.DelayTime:create(0.2 + 0.2)
            local fadeOutAction = cc.FadeOut:create(0.4)
            passNode:runAction(cc.Sequence:create(delayAction,fadeOutAction))
        end
    end
end

function GameScene:showNoBigAni()
    local localSelfSeat = Game.FrameworkFunction.getSelfLocalSeat()
    local handTipsUI = Game.UIFunction.seekWidgetByName(self._rootNode,GameSceneDefine.KW_PANEL_HEAD_TIPS_ .. localSelfSeat)
    if handTipsUI then 
        local noBigNode = Game.UIFunction.seekWidgetByName(handTipsUI,GameSceneDefine.KW_UI_NOCARDBIG)
        if noBigNode then
            noBigNode:setVisible(true)
            noBigNode:setOpacity(255)
            local delayAction = cc.DelayTime:create(0.2 + 0.2)
            local fadeOutAction = cc.FadeOut:create(0.4)
            noBigNode:runAction(cc.Sequence:create(delayAction,fadeOutAction))
        end
    end
end

function GameScene:showMikeRecordAni(show)
    if self._playRecordAniNode == nil then
        self._playRecordAniNode = ccui.Helper:seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_POS_MIKE_ANI)
        if self._playRecordAniNode then
            ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(
                GameSceneDefine.KW_GAMECOMMON_PATH .. "/GameCommon/Json/GameRecordLight_Ani/game_recording_light0.png",
                GameSceneDefine.KW_GAMECOMMON_PATH .. "/GameCommon/Json/GameRecordLight_Ani/game_recording_light0.plist",
                GameSceneDefine.KW_GAMECOMMON_PATH .. "/GameCommon/Json/GameRecordLight_Ani/game_recording_light.ExportJson")

            local lastArmature = ccs.Armature:create("game_recording_light")
            self._playRecordAniNode:addChild(lastArmature)
            lastArmature:setAnchorPoint(cc.p(0.5, 0.5))
            lastArmature:getAnimation():playWithIndex(0,-1,1)
        end
    end

    if tolua.isnull(self._playRecordAniNode) == false then
        self._playRecordAniNode:setVisible(show)
    end


end

function GameScene:showPlayVoiceAni(localSeat, show)
    if self._playOtherRecordNodes == nil then
        self._playOtherRecordNodes = {}
        for i = 1, Game.FrameworkFunction.getMaxPlayer() do
            local headPanel = self:getUIPlayerHead(i)
            if headPanel then
                local aniPos = ccui.Helper:seekWidgetByName(headPanel, GameSceneDefine.KW_PLAY_RECORD_POS)
                if aniPos then
                    self._playOtherRecordNodes[i] = aniPos
                    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(
                        GameSceneDefine.KW_GAMECOMMON_PATH .. "/GameCommon/Json/OtherPlayerRecord_Ani/recording_otherplayer.ExportJson")
                    local lastArmature = ccs.Armature:create("recording_otherplayer")
                    aniPos:addChild(lastArmature)
                    lastArmature:setAnchorPoint(cc.p(0.5, 0.5))
                    lastArmature:getAnimation():playWithIndex(0,-1,1)
                end
            end
        end
    end

    if show then
        local speakoutPanel = ccui.Helper:seekWidgetByName(self:getUIPlayerHead(localSeat),GameSceneDefine.KW_UI_SPEAK_BG)
        if speakoutPanel then
            speakoutPanel:setVisible(true)
            speakoutPanel:stopAllActions()
            speakoutPanel:runAction(cc.Sequence:create(cc.FadeIn:create(0.4)))
        end
        self._playOtherRecordNodes[localSeat]:stopAllActions()
        self._playOtherRecordNodes[localSeat]:setVisible(true)
        Game.UIFunction.setVisible(self:getUIPlayerHead(localSeat),GameSceneDefine.KW_PLAY_RECORD_POS,true)
        Game.UIFunction.setVisible(self:getUIPlayerHead(localSeat),GameSceneDefine.KW_TEXT_SPEAK,false)
    else
        local speakoutPanel = ccui.Helper:seekWidgetByName(self:getUIPlayerHead(localSeat),GameSceneDefine.KW_UI_SPEAK_BG)
        if speakoutPanel then
            speakoutPanel:stopAllActions()
            speakoutPanel:runAction(cc.FadeOut:create(0.4))
            self._playOtherRecordNodes[localSeat]:stopAllActions()
            local action = cc.Sequence:create(cc.DelayTime:create(0.4),cc.CallFunc:create(function()
                self._playOtherRecordNodes[localSeat]:setVisible(false)
            end))
            self._playOtherRecordNodes[localSeat]:runAction(action)
        end
    end
end

function GameScene:showPlayVoice()
    -- 播放音效接口
    if self._isPlayingVoice == false and self._isRecordingVoice == false and #self._playVoiceList > 0 then
        Game.GameSound.setPlayEffectLimit(true)
        self._isPlayingVoice = true
        Game.FrameworkFunction.stopSoundInSpeaking()
        local mapData = {}
        mapData["0"] = self._playVoiceList[1]["voiceUrl"]
        print("self._playVoiceList[1][voiceUrl]" .. self._playVoiceList[1]["voiceUrl"])
        print("self._playVoiceList[1][voicelocalSeat]" .. self._playVoiceList[1]["voicelocalSeat"])
        XH.bf.ThirdManager:getInstance():callFunctionWithMap("fastvo_start_play",mapData)
        self._justPlayLocalSeatToURL[self._playVoiceList[1]["voicelocalSeat"]] = self._playVoiceList[1]["voiceUrl"]
        self:showPlayVoiceAni(self._playVoiceList[1]["voicelocalSeat"],true)
    end
end

function GameScene:showPlayerHeadEffect(seat, bShow)
    local localSeat = Game.FrameworkFunction.seatToLocal(seat)
    local playerHead = self:getUIPlayerHead(localSeat)
    local playerHeadEffectPos = Game.UIFunction.seekWidgetByName(playerHead, GameSceneDefine.KW_POS_PLAYER_HEAD_EFFECT)
    if playerHeadEffectPos then 
        playerHeadEffectPos:removeAllChildren()    

        if bShow then 
            local jsonPath = GameSceneDefine.KW_HEAD_EFFECT_PATH .. GameSceneDefine.KW_HEAD_EFFECT_JSON .. ".ExportJson"
            if cc.FileUtils:getInstance():isFileExist(jsonPath) then 
                XH.GT.UIFunction.playAniWithTargetPosNew(nil,playerHead,GameSceneDefine.KW_POS_PLAYER_HEAD_EFFECT,
                    GameSceneDefine.KW_HEAD_EFFECT_PATH,GameSceneDefine.KW_HEAD_EFFECT_JSON,GameSceneDefine.KW_HEAD_EFFECT_ANI,-1)
            end  
        end         

    end 
end

function GameScene:showWirebreakSign(seat, bShow)
end

function GameScene:showCardTypeAni(seat,headPos,cardType)
    print('hcc>>GameScene:showCardTypeAni：' .. tostring(cardType))
    if cardType >= 321 and cardType <= 325 then
        return
    end
    local localSeat = Game.FrameworkFunction.seatToLocal(seat)
    if cardType > MyCardsType.CardsType.CT_4_JUNKO_0_CONTINUOUS then
        local boomXian = CardAlgorithm.GetXianByType( cardType)
        local function BoomAniScence()
            self:showStartShowBombAni(nil)
            Game.GameSound.playSoundBomb()
        end
        BoomAniScence()
    end
end

function GameScene:showMoviePlaySpeed()
    if self._playbackSpeed >= 1 then
        Game.UIFunction.setText(self:getRootNode(),GameSceneDefine.KW_TEXT_SPEED,string.format("%dX",self._playbackSpeed))
    else
        Game.UIFunction.setText(self:getRootNode(),GameSceneDefine.KW_TEXT_SPEED,string.format("%dX",-1/self._playbackSpeed))
    end
end

function GameScene:showNoOutZanDanGongXian( score,bShow)
    local noOutBombPanel =  Game.UIFunction.seekWidgetByName(self._rootNode,GameSceneDefine.KW_PANEL_NOOUTZADAN)
    if noOutBombPanel then
        noOutBombPanel:setVisible(bShow)
    end
    if bShow then
        local moveDistance = 
            {
                {["x"] = 0,["y"] = 50},
                {["x"] = 0,["y"] = 50},
                {["x"] = 0,["y"] = 50},
                {["x"] = 0,["y"] = 50},
            }
        local startPos={}
        local endPos ={}
        local ihide = true
        for seat = 0,Game.FrameworkFunction.getMaxPlayer()-1 do
            local player = Game.PlayerData.getPlayerBySeat(seat)
            if player then
                local localSeat = Game.FrameworkFunction.seatToLocal(seat)
                local noOutBombContent = Game.UIFunction.seekWidgetByName(noOutBombPanel,"KW_PANEL_CONTENT_" .. localSeat)
                if noOutBombContent then 
                    local passNode = Game.UIFunction.seekWidgetByName(noOutBombContent,"KW_LABEL_SCORE")
                    if passNode then
                        if #score > 0  and (score[seat]>0) then
                            passNode:setString("+"..score[seat])
                            ihide = false
                            local spos={}
                            local epos={}
                            spos[0]=noOutBombContent:getPositionX()
                            spos[1]=noOutBombContent:getPositionY()
                            startPos[localSeat]=spos
                            if (localSeat==2) or (localSeat==4) then
                                local displayHandPos = ccui.Helper:seekWidgetByName(self:getRootNode(),"KW_PANEL_HEAD_DISPLAY_POS_" .. localSeat)
                                epos[0]=displayHandPos:getPositionX()+30
                                epos[1]=displayHandPos:getPositionY()-30
                            else
                                epos[0]=self:getUIPlayerHead(localSeat):getPositionX()+30
                                epos[1]=self:getUIPlayerHead(localSeat):getPositionY()-30
                            end
                            endPos[localSeat]=epos
                            noOutBombContent:setVisible(true) 
                            
                            local moveAction1 = cc.Spawn:create(cc.FadeIn:create(0.2),cc.MoveBy:create(0.3,cc.p(moveDistance[localSeat])))
                            local moveAction2 = cc.MoveTo:create(0.2,cc.p(endPos[localSeat][0],endPos[localSeat][1]))
                            local seqAction = cc.Sequence:create(cc.DelayTime:create(0.5),moveAction1,cc.DelayTime:create(1),moveAction2,cc.CallFunc:create(
                                function ()
                                    noOutBombContent:setVisible(false) 
                                    noOutBombContent:setPosition(cc.p(startPos[localSeat][0],startPos[localSeat][1])) 
                                    local targetContribution = self:getContributionBySeat(localSeat)
                                    targetContribution:runAction(cc.Sequence:create(cc.ScaleTo:create(0.2,2),cc.ScaleTo:create(0.2,1)))
                                end
                            ))
                            noOutBombContent:runAction(seqAction)
                        else
                            noOutBombContent:setVisible(false)
                        end
                    end
                end
            end
        end 
        if ihide then
            if noOutBombPanel then
                noOutBombPanel:setVisible(false)
            end
        end
    else
        for seat = 0,Game.FrameworkFunction.getMaxPlayer()-1 do
            local noOutBombContent = Game.UIFunction.seekWidgetByName(noOutBombPanel,"KW_PANEL_CONTENT_" .. seat)
            if noOutBombContent then 
                noOutBombContent:setVisible(bShow)
            end
        end 
    end 
end

--------------------------------------------   一下方法用于比赛实现的空接口，子类GameSceneMatch 下的都得去实现

function GameScene:hideMatchStartBtn()
end

function GameScene:clearMatchUI()
end

function GameScene:showMatchGameUI(playerCount)
end

function GameScene:getUITipsLayer()
    if self._uiTipsLayer == nil then
        local UITips = import("..GameUI.UITipsLayer",CURRENT_MODULE_NAME)
        self._uiTipsLayer = UITips:new()
        self._uiTipsLayer:setMiniTips({

                "心态要稳，算牌要准，下手要狠",
                "一炸善等待，多炸应果断！",
                "压上家，顶下家，放对家",
                "关注台州休闲公众号免费领福利",
                "选择顺子的头牌和尾牌，可以立起该顺子",
                "点击非牌区可以落下所有选中的牌",
                "有2的循环炸弹是同牌型中最小的循环炸弹",

                "双扣是一个团队游戏，互相配合才是取胜的关键",
                "一盘接一盘，炸弹越炸越多",
                "双扣游戏，七分牌技，三分运气",

                "点击一头一尾两张牌，就可以提起长顺子",
                "点击右下角的“排序”按钮，自由切换排序方式",
                "逃跑的人需要承包所有玩家的得分！",
                "”三王”是最小的6线炸弹",
                "”四王”是最小的7线炸弹",
                "单局打出4个4线，将获得1个6线的贡献分",
                "单局打出2个5线，将获得1个6线的贡献分",
                "单局打出2个6线，将获得1个7线的贡献分",
                "7线贡献分为18！",
                "8线贡献分为30！",
                "9线贡献分为45！",
                "10线贡献分为60！",
                "11线贡献分为75！",
                "12线贡献分为90！"
        })
        self._uiTipsLayer:setMiniTips({})
        local tipsNode = ccui.Helper:seekWidgetByName(self:getRootNode(),"KW_UI_TIPS")
        if tipsNode then
            self._uiTipsLayer:init(tipsNode)
        end
    end
    return self._uiTipsLayer
end

function GameScene:showDelayTime(delayTime)
    local delayTimeNode = ccui.Helper:seekWidgetByName(self:getRootNode(),"KW_TEXT_DELAY")
    if delayTimeNode then
        if delayTime > 9999 then
            delayTime = 9999 
        end
        local colorWeight = (delayTime - 150) / (800 - 150)

        if colorWeight < 0 then
            colorWeight = 0
        elseif colorWeight > 1 then
            colorWeight = 1
        end

        local green = {r = 17, g = 113, b = 52}
        local yellow = {r = 227, g = 145, b = 28}
        local rad = {r = 255, g = 6, b = 6}

        local color = {r = 0, g = 0, b = 0}

        if colorWeight < 0.5 then
            color.r = green.r + (yellow.r - green.r) * colorWeight * 2
            color.g = green.g + (yellow.g - green.g) * colorWeight * 2
            color.b = green.b + (yellow.b - green.b) * colorWeight * 2
        else
            color.r = yellow.r + (rad.r - yellow.r) * (colorWeight - 0.5) * 2
            color.g = yellow.g + (rad.g - yellow.g) * (colorWeight - 0.5) * 2 
            color.b = yellow.b + (rad.b - yellow.b) * (colorWeight - 0.5) * 2       
        end
        delayTimeNode:setColor(cc.c3b(color.r, color.g, color.b) )
        Game.UIFunction.setText(self:getRootNode(),"KW_TEXT_DELAY",math.floor(delayTime) .. "ms")
    end
end

function GameScene:moveHeadWithOpenHand(localSeat,bOpenHand)
    local headPanel = ccui.Helper:seekWidgetByName(self:getRootNode(),"KW_PANEL_HEAD_" .. localSeat)
    local hideHandPos = ccui.Helper:seekWidgetByName(self:getRootNode(),"KW_PANEL_HEAD_HIDE_POS_" .. localSeat)
    local displayHandPos = ccui.Helper:seekWidgetByName(self:getRootNode(),"KW_PANEL_HEAD_DISPLAY_POS_" .. localSeat)
    if not headPanel or not hideHandPos or not displayHandPos then
        return
    end
    local moveToPos = {}
    if bOpenHand then
        moveToPos.x,moveToPos.y = displayHandPos:getPosition()
    else
        moveToPos.x,moveToPos.y = hideHandPos:getPosition()
    end
    headPanel:stopAllActions()
    headPanel:runAction(cc.EaseExponentialIn:create(cc.MoveTo:create(1, moveToPos)))
end

function GameScene:adaptGoldRoomInfo(parameters)
    local roomInfoPanel = Game.UIFunction.seekWidgetByName(self:getRootNode(),"KW_UI_ROOM_INFO")
    local roomInfoGoldPos = Game.UIFunction.seekWidgetByName(self:getRootNode(),"KW_GOLD_ROOM_INFO_POS")
    if roomInfoPanel and roomInfoGoldPos then
        local moveToPos = {}
        moveToPos.x,moveToPos.y = roomInfoGoldPos:getPosition()
        roomInfoPanel:setPosition(moveToPos)
    end
end

function GameScene:showBombScore(localseat, score)
    localseat = localseat or 2
    score = score or ""
    local headNode = Game.UIFunction.seekWidgetByName(self:getRootNode(), GameSceneDefine.KW_PANEL_HEAD_INDEX..localseat)
    if headNode then
        Game.UIFunction.setText(headNode, GameSceneDefine.KW_TEXT_BOMB, score)
    end
end

function GameScene:showPerPlayerScore(localseat, score)
    localseat = localseat or 2
    score = score or ""
    local headNode = Game.UIFunction.seekWidgetByName(self:getRootNode(), GameSceneDefine.KW_PANEL_HEAD_INDEX..localseat)
    if headNode then
        Game.UIFunction.setText(headNode, "KW_TEXT_PLAYER_SCORE_PER", score)
    end
end

function GameScene:showPerPlayerAllScore(localseat, score)
    localseat = localseat or 2
    score = score or ""
    local headNode = Game.UIFunction.seekWidgetByName(self:getRootNode(), GameSceneDefine.KW_PANEL_HEAD_INDEX..localseat)
    if headNode then
        Game.UIFunction.setText(headNode, "KW_TEXT_PLAYER_SCORE_ALL", score)
    end
end

function GameScene:showOpenCardValue(ucCard)
    local MyCard = require("LiangBang.Code.GameAlgorithm.MyCard")
    local gameCard = GameCard:new()
    gameCard:setID(ucCard)
    local cardText = gameCard:GetText()
    if cardText == "J" then
        cardText = "j"
    elseif cardText == "Q" then
        cardText = "q"
    elseif cardText == "K" then
        cardText = "k"
    elseif cardText == "A" then
        cardText = "a"
    elseif cardText == "F" then
        cardText = "x"
    elseif cardText == "Z" then
        cardText = "d"
    end
    local Color = gameCard:GetColor()
    if Color == MyCard.CardColor.CC_DIAMOND or Color == MyCard.CardColor.CC_HEART or cardText == "d" then
        -- 设置牌值字体显示红黑
        Game.UIFunction.setVisible(self:getRootNode(), GameSceneDefine.KW_FNT_CARD_VALUE_RED, true)
        Game.UIFunction.setVisible(self:getRootNode(), GameSceneDefine.KW_FNT_CARD_VALUE_BLACK, false)
        Game.UIFunction.setText(self:getRootNode(), GameSceneDefine.KW_FNT_CARD_VALUE_RED, cardText)
        -- 设置显示方块，红桃和大王牌背
        if Color == MyCard.CardColor.CC_DIAMOND then
            Game.UIFunction.loadTexture(self:getRootNode(), GameSceneDefine.KW_IMG_CARD_COLOR, "OpenCardDiamond.png",ccui.TextureResType.plistType)
        elseif Color == MyCard.CardColor.CC_HEART then
            Game.UIFunction.loadTexture(self:getRootNode(), GameSceneDefine.KW_IMG_CARD_COLOR, "OpenCardHeart.png",ccui.TextureResType.plistType)
        elseif cardText == "d" then
            Game.UIFunction.loadTexture(self:getRootNode(), GameSceneDefine.KW_IMG_CARD_COLOR, "OpenCardBJ.png",ccui.TextureResType.plistType)
        end
    elseif Color == MyCard.CardColor.CC_CLUB or Color == MyCard.CardColor.CC_SPADE or cardText == "x" then
        -- 设置牌值字体显示红黑
        Game.UIFunction.setVisible(self:getRootNode(), GameSceneDefine.KW_FNT_CARD_VALUE_RED, false)
        Game.UIFunction.setVisible(self:getRootNode(), GameSceneDefine.KW_FNT_CARD_VALUE_BLACK, true)
        Game.UIFunction.setText(self:getRootNode(), GameSceneDefine.KW_FNT_CARD_VALUE_BLACK, cardText)
        -- 设置显示草花，黑桃和小王牌背
        if Color == MyCard.CardColor.CC_CLUB then
            Game.UIFunction.loadTexture(self:getRootNode(), GameSceneDefine.KW_IMG_CARD_COLOR, "OpenCardClub.png",ccui.TextureResType.plistType)
        elseif Color == MyCard.CardColor.CC_SPADE then
            Game.UIFunction.loadTexture(self:getRootNode(), GameSceneDefine.KW_IMG_CARD_COLOR, "OpenCardSpade.png",ccui.TextureResType.plistType)
        elseif cardText == "x" then
            Game.UIFunction.loadTexture(self:getRootNode(), GameSceneDefine.KW_IMG_CARD_COLOR, "OpenCardSJ.png",ccui.TextureResType.plistType)
        end
    end
    Game.UIFunction.setVisible(self:getRootNode(), GameSceneDefine.KW_IMG_CARD_COLOR, true)
end

function GameScene:showStartButton()
    local autoReady = self._clientData:getAutoReady()
    Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_BTN_START,(((tonumber(autoReady) == 0) and true) or false))

    local player = Game.FrameworkFunction.getSelfPlayer()
    if player:getStateEx() >= PlayerData.USER_STATEEX.psPlaying then
        Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_BTN_START,false)
    end
    if self._playback:isPlayback() then
        Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_BTN_START, false)
    end
end

function GameScene:showRule(tableRule)
    if not next(tableRule) then return end
    local textBG = Game.UIFunction.seekWidgetByName(self:getRootNode(), "KW_ROOM_RULE_BG")
    if textBG then
        textBG:removeAllChildren()
        if tableRule == nil or next(tableRule) == nil then
             
        else
            local labelList = {}
            local edgeW = 12 
            local edgeH = 31
            local lineHeigh = 13
            local fontSize = 26
            local textBgHeight = textBG:getContentSize().height
            local textBgWidth = textBG:getContentSize().width
            local textWidth = 0
            for i = 1 , #tableRule do
                if tableRule[i] ~= "" then
                    -- labelList[i] =cc.ui.UILabel.new({text = tableRule[i], size = fontSize})

                    labelList[i] = ccui.Text:create()
                    labelList[i]:setFontSize(fontSize)
                    labelList[i]:setString(tableRule[i])

                    labelList[i]:setAnchorPoint(cc.p(0, 1))
                    textBG:addChild(labelList[i])
                    if textWidth < labelList[i]:getContentSize().width then
                        textWidth = labelList[i]:getContentSize().width
                    end
                end
            end

            if #labelList > 0 then
                local textHeight = (labelList[1]:getContentSize().height + lineHeigh) * #labelList - lineHeigh
                if textBgWidth < textHeight + edgeH*2 then
                    textBgHeight = textHeight + edgeH*2
                end
                if textBgWidth < textWidth + edgeW*2 then
                    textBgWidth = textWidth + edgeW*2
                end
                textBG:setContentSize(cc.size(textBgWidth, textBgHeight))
                for i = 1, #labelList do
                    labelList[i]:setPosition(cc.p(edgeW, textBgHeight - ((i - 1)*(labelList[i]:getContentSize().height + lineHeigh) + edgeH)))
                end
            end
            if self._isRuleShowFirstTime == nil or self._isRuleShowFirstTime == true then
                self._isRuleShowFirstTime = false
                self._isRuleShow = false
                local showBtn = Game.UIFunction.seekWidgetByName(self:getRootNode(), "KW_ROOM_RULE_BTN_SHOW")    
                self:onTouchEventRuleInfoShow(showBtn,ccui.TouchEventType.ended)
                XH.SysTool.performWithDelayGlobal(function()
                    if self._isRuleShow then
                        local retractBtn = Game.UIFunction.seekWidgetByName(self:getRootNode(), "KW_ROOM_RULE_BTN_RETRACT")    
                        self:onTouchEventRuleInfoRetract(retractBtn,ccui.TouchEventType.ended)
                    end
                end, 5)
            end
        end
    end
end

function GameScene:showSurrederBtn()
    local txNode = Game.UIFunction.seekWidgetByName(self:getRootNode(), GameSceneDefine.KW_BTN_SURRENDER)
    if txNode == nil then
        return
    end
    print('hcc>>: touxiangNode:' .. tostring(txNode))
    txNode:setVisible(self._surrenderBtn)
    txNode:setTouchEnabled(true)
    -- self:adjustSurrenderBtn()
end

function GameScene:adjustSurrenderBtn()
    local txNode = Game.UIFunction.seekWidgetByName(self:getRootNode(), GameSceneDefine.KW_BTN_SURRENDER)
    if txNode == nil then
        return
    end
    if txNode:isVisible() == true then
         local origPos = cc.p(864, 130)
         local mPos = cc.p(480,130)
        local btnNode = Game.UIFunction.seekWidgetByName(self:getRootNode(), "KW_PANEL_BTNS_GAME_NORMAL")
        if btnNode then
            if btnNode:isVisible() == true then
                -- txNode:setPosition(origPos) --hcc
                txNode:setPosition(mPos)
            elseif btnNode:isVisible() == false then
                txNode:setPosition(mPos)
            end
        end
    end
end

function GameScene:showAlert(localSeat, show)
    if true then return end     --两帮不显示警报器
    local headUI = self:getUIPlayerHead(localSeat)
    if not self._alertAniList then
        self._alertAniList = {}
    end

    if headUI and show then
        if self._alertAniList[localSeat] then
            self._alertAniList[localSeat]:setVisible(true)
        else
            local ani = Game.UIFunction.playAniWithTargetPos(nil,headUI,KW_PANEL_BAODAN,KW_PATH_GAMEAREA_JINGBAOQI_JSON,"jingbaoqi_ani",'jingbao_ani',-1,function()end)
            self._alertAniList[localSeat] = ani

            local player = Game.FrameworkFunction.getPlayerBySeat(Game.FrameworkFunction.localToSeat(localSeat))
            if player then
                local delay = cc.DelayTime:create(1.5)
                local cfk = cc.CallFunc:create(function()
                    Game.GameSound.playSoundAlert(player:getSex())
                end)
                local seq = cc.Sequence:create(delay,cfk)
                headUI:runAction(seq)
            end
        end
    end

    if not show then
        if self._alertAniList[localSeat] then
            self._alertAniList[localSeat]:removeFromParent()
            self._alertAniList[localSeat] = nil
        end
    end
end

function GameScene:showShuffleAni(shufferText,render)
    local shufflePanel = Game.UIFunction.seekWidgetByName(self:getRootNode(),KW_SHUFFLE_CARD_LAYER)
    if shufflePanel == nil then
        return
    end
    local shuffleAniNode = Game.UIFunction.seekWidgetByName(shufflePanel,KW_POS_SHUFFLE_ANI_POS)
    if shuffleAniNode == nil then
        shufflePanel:setVisible(false)
        return
    end

    if shufferText == nil or render == false then
        shuffleAniNode:removeAllChildren()
        shufflePanel:setVisible(false) 
        return
    end

    if render then
         local shuffNode = Game.UIFunction.playAniWithTargetPos(nil,shufflePanel,KW_POS_SHUFFLE_ANI_POS,KW_PATH_SHUFFLE_ANI_JSON,"NewAnimation",'Animation1',1,function()end)
    end
    Game.UIFunction.setText(shufflePanel, KW_TXT_SHUFFLE_PLAYER, shufferText)

    local shufferBackNode = Game.UIFunction.seekWidgetByName(shufflePanel, KW_UI_SHUFFLE_PLAYER)
    if shufferBackNode ~= nil then
        local textNode = Game.UIFunction.seekWidgetByName(shufferBackNode, KW_TXT_SHUFFLE_PLAYER)
        local textSize = textNode:getContentSize()
        local backNodeSize = shufferBackNode:getContentSize()
        shufferBackNode:setContentSize(backNodeSize.width, textSize.height)
        textNode:setPositionY(textSize.height)
    end
    shufflePanel:setVisible(true)
end

function GameScene:showFastVoiceSpeakBg(localSeat)
    local headPanel = self:getUIPlayerHead(localSeat)
    if not headPanel then return end

    Game.UIFunction.setVisible(self:getUIPlayerHead(localSeat),GameSceneDefine.KW_PLAY_RECORD_POS,false)
    local speakoutPanel = ccui.Helper:seekWidgetByName(headPanel,GameSceneDefine.KW_UI_SPEAK_BG)
    if speakoutPanel then
        local height = speakoutPanel:getContentSize().height
        speakoutPanel:setContentSize(cc.size(180,height))
        speakoutPanel:setVisible(true)
        speakoutPanel:stopAllActions()
        speakoutPanel:runAction(cc.Sequence:create(cc.FadeIn:create(0.4),cc.DelayTime:create(1),cc.FadeOut:create(0.4)))
    end
end

function GameScene:showCardLeftPanel(render)
    for localSeat = 1, Game.FrameworkFunction.getMaxPlayer() do
        local headUI = self:getUIPlayerHead(localSeat)
        if headUI then 
            local cardLeftPanel = ccui.Helper:seekWidgetByName(headUI,GameSceneDefine.KW_PANEL_CARD_LEFT)
            if cardLeftPanel then
                cardLeftPanel:setVisible(render)
            end
        end
    end
end

function GameScene:showStartShowBombAni(callFunc)
    local boomAni = nil
    boomAni = Game.UIFunction.playAniWithTargetPos(nil,self:getRootNode(),
        GameSceneDefine.KW_POS_SHOW_BOMB_ANI,
        KW_PATH_SHOW_BOMG_ANI_JSON,
        "DDZ_zhadan",
        'DDZ_zhadan',
        0,
        function()
            if boomAni then
                boomAni:removeFromParent(false)
            end
            if callFunc then callFunc() end
        end
    )
end
-- 无炸，放在桌面上，头像下不显示
--[[
function GameScene:showNoBomb(localSeat,render)
    local headUI = self:getUIPlayerHead(localSeat)
    if headUI then
        local noBombImg = ccui.Helper:seekWidgetByName(headUI,GameSceneDefine.KW_IMG_NO_BOMB)
        if noBombImg then
            if render then
                noBombImg:setVisible(render)
                noBombImg:setScale(2.0)
                noBombImg:runAction(cc.ScaleTo:create(0.2,1.0))
            else
                noBombImg:setVisible(render)
            end
        end
    end
end
]]

function GameScene:showNoBomb(localSeat,render)
    local noBombImg = Game.UIFunction.seekWidgetByName(self:getRootNode(), KW_IMG_NO_BOMB .. tostring(localSeat))
    if noBombImg then
        if render then
            noBombImg:setVisible(render)
            noBombImg:setScale(2.0)
            noBombImg:runAction(cc.ScaleTo:create(0.2,1.0))
        else
            noBombImg:setVisible(render)
        end
    end
end

function GameScene:showNoJoker(localSeat,render)
    local headUI = self:getUIPlayerHead(localSeat)
    if headUI then
        local noJokerImg = ccui.Helper:seekWidgetByName(headUI,GameSceneDefine.KW_IMG_NO_JOKER)
        if noJokerImg then
            if render then
                noJokerImg:setVisible(render)
                noJokerImg:setScale(2.0)
                noJokerImg:runAction(cc.ScaleTo:create(0.2,1.0))
            else
                noJokerImg:setVisible(render)
            end
        end
    end
end

function GameScene:showJokerCard(localSeat,cardsIDs,render)
    local headUI = self:getUIPlayerHead(localSeat)
    if headUI then
        local jokerPosNode = ccui.Helper:seekWidgetByName(headUI,GameSceneDefine.KW_PANEL_JOKER_POS)
        if jokerPosNode then
            if render and next(cardsIDs) then
                local cardsArea = UICardsArea:new()
                cardsArea:init(jokerPosNode)
                jokerPosNode:setScale(0.45)
                cardsArea:setCanTouch(false)
                cardsArea:setMaxCardsCount(27)
                cardsArea:setCheckDistance(50)
                cardsArea:setCardsDistance(50,30)
                cardsArea:setCardsIncreaseDirection(UICardsArea.CardIncreaseDirectionX.HorizontalCenter,UICardsArea.CardIncreaseDirectionY.VerticalCenter)
                cardsArea:setArrangementWay(UICardsArea.CardArrangement.Horizontal)
                cardsArea:setStartPos(0,0)
                cardsArea:setCards(cardsIDs)
                cardsArea:arrangeCards()
            end
            if (not cardsIDs) or (not next(cardsIDs)) or (not render) then
                jokerPosNode:removeAllChildren()
            end
        end
    end
end

function GameScene:showHeadBombAndScore(render)
    for localSeat = 1, Game.FrameworkFunction.getMaxPlayer() do
        local headUI = self:getUIPlayerHead(localSeat)
        if headUI then 
            local bombNode = ccui.Helper:seekWidgetByName(headUI,KW_BOMB_SCORE)
            local scoreNode = ccui.Helper:seekWidgetByName(headUI,KW_BG_PER_PLAYER_SCORE)
            if bombNode then
                bombNode:setVisible(render)
            end
            if scoreNode then
                scoreNode:setVisible(render)
            end
        end
    end

  local scoreBgNode = Game.UIFunction.seekWidgetByName(self:getRootNode(), KW_IMG_SCORE_BG)
  if scoreBgNode then
    scoreBgNode:setVisible(render)
  end
end

local function cutstr(str)
    if type(str) ~= 'string' then return end
    local arr = {}
    for i = 1 , string.len(str) do
        arr[i] = string.sub(str,i,i)
    end
    return arr
end

function GameScene:showTouJiaScore(scoreStr)
    scoreStr = tostring(scoreStr)
    local strSize = string.len(scoreStr)
    if strSize < 0 then return end
    if strSize == 0 then
        strSize = "000"
    elseif strSize == 1 then
        scoreStr = '00' .. scoreStr
    elseif strSize == 2 then
        scoreStr = '0' .. scoreStr
    end

    local tb = {}
    tb = cutstr(scoreStr)
    local imgLbBg = Game.UIFunction.seekWidgetByName(self:getRootNode(), KW_IMG_LB_SCORE_BG)
    for index = 1 , 3 do
        if imgLbBg then
            local text = Game.UIFunction.seekWidgetByName(imgLbBg, KW_SCORE_TJ_TEXT .. index)
            if text then
                text:setString(tostring(tb[index]))
            end
        end
    end
end

function GameScene:showHeadFrameInfo(localSeat, strUrl)
    local headUI = self:getUIPlayerHead(localSeat)
    if headUI then
        local hNode = Game.UIFunction.seekWidgetByName(headUI, "KW_UI_PLAYER_HEAD_AREA")
        if hNode and XH.GT.showPlayerFrame then
            hNode:setVisible(true)
            XH.GT.showPlayerFrame(hNode, 110, 110, true, strUrl)
        end
        local iNode = Game.UIFunction.seekWidgetByName(headUI, GameSceneDefine.KW_UI_INFO_PANEL) 
        if iNode and XH.GT.showPlayerFrame then
           XH.GT.showPlayerFrame(Game.UIFunction.seekWidgetByName(iNode, "KW_UI_INFO_PIC"), 90, 90, true, strUrl ) 
        end
    end
end

return GameScene

 ��  