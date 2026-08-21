local CURRENT_MODULE_NAME = ...
local GameSceneBase = import("..GameScene.GameSceneShowUI",CURRENT_MODULE_NAME)
local GameScene = class("GameScene",GameSceneBase)
local GameSceneDefine = import("..GameScene.GameSceneDefine",CURRENT_MODULE_NAME)
local PlayerData = import("GameCommon.Code.GameData.PlayerData")
local SetData = import("GameCommon.Code.GameData.SetData")
local MatchKeyWord = import("..Config.MatchKeyWord",CURRENT_MODULE_NAME)

function GameScene:adapterButton(state)
    local isBoxRoom = self._roomMode == Game.FrameworkFunction.ROOM_MODE.BOXROOM
    if state == PlayerData.USER_STATEEX.psWait then
        if self._clientData._playCount ~= 0 then
          XH.SysTool.performWithDelayGlobal(function()
                local selfPlayer = Game.FrameworkFunction.getSelfPlayer()
                if selfPlayer and selfPlayer:getStateEx() == PlayerData.USER_STATEEX.psWait then
                    if isBoxRoom then
                        Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_BTN_INVITE,false)
                    end
                end
            end,3.2)
        elseif self._clientData._playCount == 0 then
            Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_BTN_START,true)
            if isBoxRoom then
                Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_BTN_INVITE,true)
            end
        end
    elseif state == PlayerData.USER_STATEEX.psReady then
        local btnState = self._clientData._playCount == 0 and {false, true} or {false, false}
        Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_BTN_START,btnState[1])
        if isBoxRoom then
            Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_BTN_INVITE,btnState[2])
        end
    else
        Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_BTN_START,false)
        if isBoxRoom then
            Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_BTN_INVITE,false)
        end
    end
    
    if isBoxRoom and not self._setDataGameTypeOpen then
        if state == PlayerData.USER_STATEEX.psWait then
            if  self._clientData._playCount ~= 0 then
                Game.UIFunction.setPositionX(self:getRootNode(),GameSceneDefine.KW_BTN_START,Game.UIFunction.getDesignSize().width/2)
            else
                Game.UIFunction.setPositionX(self:getRootNode(),GameSceneDefine.KW_BTN_START,340)
                Game.UIFunction.setPositionX(self:getRootNode(),GameSceneDefine.KW_BTN_INVITE,620)
            end
        elseif state == PlayerData.USER_STATEEX.psReady then
            if self._clientData._playCount == 0 then
                Game.UIFunction.setPositionX(self:getRootNode(),GameSceneDefine.KW_BTN_INVITE,Game.UIFunction.getDesignSize().width/2)
            end
        else
            Game.UIFunction.setPositionX(self:getRootNode(),GameSceneDefine.KW_BTN_START,340)
            Game.UIFunction.setPositionX(self:getRootNode(),GameSceneDefine.KW_BTN_INVITE,620)
        end
    end
    
    if KW_CONFIG_IS_IOS_CHECK then
        Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_BTN_INVITE,false)
        Game.UIFunction.setPositionX(self:getRootNode(),GameSceneDefine.KW_BTN_START,480)
    end
    
    -- if XH.bf.ThirdManager:getInstance():getChannelID() >= 10000101 and 
    --     XH.bf.ThirdManager:getInstance():getChannelID() <= 10000153 or 
    --     XH.bf.ThirdManager:getInstance():getChannelID() >= 100001001 and 
    --     XH.bf.ThirdManager:getInstance():getChannelID() <= 100001599 or 
    --     XH.bf.ThirdManager:getInstance():getChannelID() == 10017 then 
    --     local render = cc.UserDefault:getInstance():getBoolForKey(GameSceneDefine.KW_DATA_SHOW_MAHJONG_GUIDE, true)
    --     if render then 
    --         local inviteNode = ccui.Helper:seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_BTN_INVITE)
    --         if inviteNode and inviteNode:isVisible() then
    --             Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_UI_GUIDE,true)
    --             cc.UserDefault:getInstance():setBoolForKey(GameSceneDefine.KW_DATA_SHOW_MAHJONG_GUIDE, false)
    --         end
    --     end
    -- end
        
    Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_BTN_START,false)
end

function GameScene:hideMatchStartBtn()
    self:getUIWinLost():showContinueBtn(false)
    Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_BTN_START,false)
end

function GameScene:clearMatchUI()
    -- 比赛排名信息拉取
    self:reqPlayerMatchInfo()
    self:getUIWinLost():showWinLostPanel(false)
    self:getUIWinLost():clearWinLostPanelUI()
    self:showMatchWaitUpAni(false)
    Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_TEXT_ROOM_RULE_BG,false)
    Game.Interface.popLayer("MatchGameWaitMessage")
end

function GameScene:showMatchGameUI(playerCount)
    Game.TableData._chairs = playerCount
    if self._joinRoomID == 0 then
        if self._matchInfo.starttype==MatchKeyWord.MatchTypes.Human_Match then 
            self:reqSignUpCnt(self._matchInfo.matchid, self._matchInfo.subid, self._matchInfo.appID)
        end
        self._matchHintLayer = Game.Interface.showPopLayer("Match32.MatchGameWaitMessage")
        if self._matchHintLayer then
            self._matchHintLayer:setText("正在为您匹配中，请耐心等待...")
        end
    end

    --隐藏聊天按钮
    Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_BTN_TALK, false)
    --显示比赛信息
    Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_UI_MATCH_INFO_PANEL, true)
    --隐藏底分
    Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_UI_ROOM_INFO, true)    
    --隐藏语音
    Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_BTN_MIKE, false) 
    --隐藏表情
    Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_BTN_EMOJI, false)
    --隐藏比赛规则
    Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_ROOM_RULE_LAYOUT, false)
    Game.UIFunction.addTouchEventListenerByObj(self:getRootNode(),GameSceneDefine.KW_BTN_HOSTING,self,self.onTouchEventTrust)
    Game.UIFunction.addTouchEventListenerByObj(self:getRootNode(),GameSceneDefine.KW_PANEL_ROBOT,self,self.onTouchEventRobotPanel)
    Game.UIFunction.addTouchEventListenerByObj(self:getUINormalMenu(),GameSceneDefine.KW_BTN_EXIT,self,self.onTouchEventExit)
    Game.UIFunction.addTouchEventListenerByObj(self:getUINormalMenu(),GameSceneDefine.KW_BTN_SETTING,self,self.onTouchEventSetUp)
    if self._setDataGameTypeOpen then
        local robotPanel = Game.UIFunction.seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_PANEL_ROBOT)
        Game.UIFunction.addTouchEventListenerByObj(robotPanel,"KW_BTN_CANCEL_HOSTING",self,self.onTouchEventRobotPanel)
    end
end

function GameScene:showMatchStartGameAni(isFinals)
    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(
        "LSMahjong/majiang/Json/match/star_ani/star_ani.ExportJson")
    local lastArmature = ccs.Armature:create("star_ani")

    local startgamePanel = ccui.Helper:seekWidgetByName(self:getRootNode(),"KW_PANEL_MATCH_STARTGAME")
    if startgamePanel then
        startgamePanel:setVisible(true)
        lastArmature:setName("KW_UI_STARTGAME_ARMATURE")
        local startgamePos = ccui.Helper:seekWidgetByName(self:getRootNode(),"KW_POS_STARTGAME_ANI")
        if startgamePos then
            startgamePos:removeAllChildren()
            startgamePos:addChild(lastArmature)
        end

        lastArmature:setAnchorPoint(cc.p(0.5, 0.5))

        if isFinals ~= true then
            lastArmature:getAnimation():playWithIndex(0,-1,1)
        else
            lastArmature:getAnimation():playWithIndex(1,-1,1)
        end

        lastArmature:getAnimation():setMovementEventCallFunc(function()
            startgamePos:removeAllChildren()
            startgamePanel:setVisible(false)
        end)
    end
end

function GameScene:showMatchWaitUpAni(render,count)   
    local startgamePanel = ccui.Helper:seekWidgetByName(self:getRootNode(),"KW_PANEL_MATCH_WAITUP")
    local startgamePos = ccui.Helper:seekWidgetByName(self:getRootNode(),"KW_POS_WAITUP_ANI")
    if render == false then
        if startgamePanel then
            startgamePanel:setVisible(false)
            if startgamePos then
                startgamePos:removeAllChildren()
            end
        end
    else
        ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(
            "LSMahjong/majiang/Json/match/dengdai-ani/dengdai-ani.ExportJson")

        local lastArmature = ccs.Armature:create("dengdai-ani")

        if startgamePanel then
            startgamePanel:setVisible(true)
            lastArmature:setName("KW_UI_WAITUP_ARMATURE")
            if startgamePos then
                startgamePos:removeAllChildren()
                startgamePos:addChild(lastArmature)
            end

            lastArmature:setAnchorPoint(cc.p(0.5, 0.5))
            lastArmature:getAnimation():playWithIndex(0,-1,1)
        end

        Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_BTN_START,false)
        Game.UIFunction.setText(startgamePanel, "KW_TEXT_WAIT_COUNT", count)
    end
end

function GameScene:showMatchStateHint(show, msg)
    local parent = ccui.Helper:seekWidgetByName(self:getRootNode(),"KW_TEXT_MATCH_ROOM_HINT_BG")
    if parent == nil then
        return
    end

    if show then
        local timeTxtNode = ccui.Helper:seekWidgetByName(self:getRootNode(),"KW_TEXT_MATCH_ROOM_HINT")
        if timeTxtNode then
            timeTxtNode:setString(msg)
            timeTxtNode:setVisible(true)
            local width = timeTxtNode:getContentSize().width + timeTxtNode:getPositionX() * 2
            parent:setContentSize(width,parent:getContentSize().height * 1)     
            parent:setVisible(true)
        end
    else
        parent:setVisible(false)
    end
end

function GameScene:updateMatchSignUpCnt(matchid,cnt)
    if self._matchHintLayer then
        self._matchHintLayer:setText("正在为您匹配中，请耐心等待... 人数"..cnt.."/".. self._matchInfo.mincnt)
    end
end

return GameScene�(