local CURRENT_MODULE_NAME = ... 
local GameScene = class("GameScene")
local GameSceneDefine = import(".GameSceneDefine",CURRENT_MODULE_NAME)
local PlayerData = import("GameCommon.Code.GameData.PlayerData")

function GameScene:getRootNode()
    if self._rootNode == nil then
        self._rootNode = self._gameLayer:getChildByName(GameSceneDefine.KW_ROOT_LAYER)
    end
    return self._rootNode
end

function GameScene:getUIBoxMenu()
    if self._uiBoxMenu == nil then
        self._uiBoxMenu = ccui.Helper:seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_UI_BOX_ROOM_MENU)
    end
    return self._uiBoxMenu
end

function GameScene:getUINormalMenu()
    if self._uiNormalMenu == nil then
        self._uiNormalMenu = ccui.Helper:seekWidgetByName(self:getRootNode(),"KW_UI_MENU")
    end
    return self._uiNormalMenu
end

function GameScene:getUIPlayerHead(localSeat)
    if self._uiPlayerHead == nil then
        self._uiPlayerHead = {}
        for i = 1,Game.FrameworkFunction.getMaxPlayer() do
            self._uiPlayerHead[i] = ccui.Helper:seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_PANEL_HEAD_..i)
        end
    end
    return self._uiPlayerHead[localSeat]
end

function GameScene:getContributionBySeat(localSeat)
    if localSeat == Game.FrameworkFunction.getSelfLocalSeat() then
        return Game.UIFunction.seekWidgetByName(self._rootNode,GameSceneDefine.KW_TEXT_CONTRIBUTION)
    else
        local headUI = self:getUIPlayerHead(localSeat)
        if headUI then
            return Game.UIFunction.seekWidgetByName(headUI,GameSceneDefine.KW_TEXT_PLAYER_CONTRIBUTION)
        end
    end
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

function GameScene:getUITalk()
    if self._uiTalk == nil then
        local UITalkLayer = import("..GameUI.UITalk", CURRENT_MODULE_NAME)
        self._uiTalk = UITalkLayer:new()
        local uiTalkLayer = ccui.Helper:seekWidgetByName(self:getRootNode(),"KW_PANEL_TALK")
        self._uiTalk:init(uiTalkLayer,self._gameID)
    end
    return self._uiTalk
end

function GameScene:getUIHeadTimerProgress(localSeat)
    if self._uiHeadTimerProgressUI == nil then
        self._uiHeadTimerProgressUI = {}
        for i = 1 , Game.FrameworkFunction.getMaxPlayer() do
            local posTime = ccui.Helper:seekWidgetByName(self:getUIPlayerHead(i),GameSceneDefine.KW_UI_PLAYER_TIME )
            if posTime then
                --[[
                if i == 2 then 
                    self._uiHeadTimerProgressUI[i] = cc.ProgressTimer:create(cc.Sprite:create(GameSceneDefine.KW_PATH_RESOUCE_IMAGE .. "/game_clocklight_me.png"))
                else 
                    -- self._uiHeadTimerProgressUI[i] = cc.ProgressTimer:create(cc.Sprite:create(GameSceneDefine.KW_PATH_RESOUCE_IMAGE .. "/game_clocklight.png"))
                end
                ]]
                self._uiHeadTimerProgressUI[i] = cc.ProgressTimer:create(cc.Sprite:create(GameSceneDefine.KW_PATH_RESOUCE_IMAGE_NEW .. "/game_clocklight_lb.png"))
                if self._uiHeadTimerProgressUI[i] then
                    posTime:addChild(self._uiHeadTimerProgressUI[i])
                    self._uiHeadTimerProgressUI[i]:setType(cc.PROGRESS_TIMER_TYPE_RADIAL)
                    self._uiHeadTimerProgressUI[i]:setReverseDirection(true)
                    self._uiHeadTimerProgressUI[i]:setVisible(true)
                    self._uiHeadTimerProgressUI[i]:setPercentage(100)
                end
            end
        end
    end
    return self._uiHeadTimerProgressUI[localSeat]
end

function GameScene:getUIWinLost()
    if self._uiWinLost == nil then
        local UIWinLostLayer = import("..GameUI.UIWinLostEx",CURRENT_MODULE_NAME)
        self._uiWinLost = UIWinLostLayer:new()
        local winLostLayer = ccui.Helper:seekWidgetByName(self:getRootNode(),"KW_PANEL_WINLOST")
        self._uiWinLost:init(winLostLayer,Game.FrameworkFunction.getChairs(),self._gameID)
    end
    return self._uiWinLost
end

function GameScene:getUICardLayer()
    if self._uiCardsLayer == nil then
        local UICardsLayer = import("..CardLayer.UICardsLayer",CURRENT_MODULE_NAME)
        self._uiCardsLayer = UICardsLayer:new()
        local cardsLayer = ccui.Helper:seekWidgetByName(self:getRootNode(),"KW_UI_CARD_LAYER")
        self._uiCardsLayer:init(cardsLayer)
    end
    return self._uiCardsLayer
end

function GameScene:getUISureCardLayer()
    if self._uiSureCardsLayer == nil then
        local UISureCardsLayer = import("..GameUI.UISureCard",CURRENT_MODULE_NAME)
        self._uiSureCardsLayer = UISureCardsLayer:new()
        local cardsLayer = ccui.Helper:seekWidgetByName(self:getRootNode(),"KW_UI_SURE_CARD_LAYER")
        self._uiSureCardsLayer:init(cardsLayer)
    end
    return self._uiSureCardsLayer
end

function GameScene:getUISpecfCardLayer()
    if self._uiSpecfCardLayer == nil then
        local UISpecfCardLayer = import("..CardLayer.UISpecfCardLayer",CURRENT_MODULE_NAME)
        self._uiSpecfCardLayer = UISpecfCardLayer:new()
        local specfCardLayer = ccui.Helper:seekWidgetByName(self:getRootNode(),"KW_UI_SPECF_CARD_LAYER")
        if specfCardLayer then
            self._uiSpecfCardLayer:init(specfCardLayer)
        end
    end
    return self._uiSpecfCardLayer
end

function GameScene:adapterButton(state)
    local isBoxRoom = self._roomMode == Game.FrameworkFunction.ROOM_MODE.BOXROOM
    if state == PlayerData.USER_STATEEX.psWait then
        if self._clientData._playCount ~= 0 then
            if Game.FrameworkFunction.getSelfPlayer():getStateEx() == PlayerData.USER_STATEEX.psWait then
                Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_BTN_START,true)
                if isBoxRoom then
                    Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_BTN_INVITE,false)
                end
                if self._playerEndState then
                    Game.UIFunction.setVisible(self._rootNode,GameSceneDefine.KW_PANEL_BTNS_READY , false)
                else
                    Game.UIFunction.setVisible(self._rootNode,GameSceneDefine.KW_PANEL_BTNS_READY , true)
                end
            end
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

    if isBoxRoom then
        if state == PlayerData.USER_STATEEX.psWait then
            if  self._clientData._playCount ~= 0 then
                Game.UIFunction.setPositionX(self:getRootNode(),GameSceneDefine.KW_BTN_START,Game.UIFunction.getDesignSize().width/2)
            else
                self:adjustGameBtnPosition()
            end
        elseif state == PlayerData.USER_STATEEX.psReady then
            if self._clientData._playCount == 0 then
            Game.UIFunction.setPositionX(self:getRootNode(),GameSceneDefine.KW_BTN_INVITE,Game.UIFunction.getDesignSize().width/2)
            end
        else
            self:adjustGameBtnPosition()
        end
    end
    
    if KW_CONFIG_IS_IOS_CHECK then
        Game.UIFunction.setVisible(self:getRootNode(),GameSceneDefine.KW_BTN_INVITE,false)
    end
end

function GameScene:getDismissLayer()
    if self._uiDismissLayer == nil then
        local UIDismissLayer = require("LiangBang.Code.PopLayer.DismissLayer")
        self._uiDismissLayer = UIDismissLayer:new()
        local uiDismissLayer = ccui.Helper:seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_PANEL_DISSOLVE)
        self._uiDismissLayer:init(uiDismissLayer)
    end
    return self._uiDismissLayer
end

return GameScene�(