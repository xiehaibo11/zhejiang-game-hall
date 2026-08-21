local BasicBtnsLayer = NG.GAME.gameClass("BasicBtnsLayer", NG.ViewBase)
local GoldLaunchConfig = require("lobby.Modules.GoldLaunch.Config")
local IsGoldBoxTest = require("app.Config.GlobalConfig").IsGoldBoxTest

function BasicBtnsLayer:ctor()
    BasicBtnsLayer.super.ctor(self)

    self:initView()
end

function BasicBtnsLayer:getCSBPath()
    return "cocosStudio/GoldNew/Game/GameBase/CSB/Basic/BasicBtnsLayer.csb"
end

function BasicBtnsLayer:getBindingInfo()
    return {
        --
        ["_KW_BTN_LEAVE"] = {varName = "_leaveBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onLeaveBtnClicked"},
        ["_KW_BTN_MORE"] = {varName = "_moreBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onMoreBtnClicked"},
        ["_KW_BTN_UP"] = {varName = "_upBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onUPBtnClicked"},
        ["_KW_BTN_HELPER"] = {varName = "_helperBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onHelperBtnClicked"},
        ["_KW_BTN_SET"] = {varName = "_setBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onSetBtnClicked"},
        ["_KW_BTN_CHAT"] = {varName = "_chatBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onChatBtnClicked"},
        ["_KW_DIS_ICON"] = {varName = "_KW_DIS_ICON"},
        ["_KW_LAYOUT_MORE"] = {varName = "_moreLayout"}
    }
end

function BasicBtnsLayer:getProxyEvents()
    return {
        -- { module = CF.roomData, eventKeyName = "EVENT_GAME_UPDATE_SEER", callBack = "onUpdateBtnVisible" },
    }
end

function BasicBtnsLayer:initView()
    -- local disIcon = require("newgold.GoldLobby.Modules.GoldBankrupt.GoldDisIconView").new({})
    -- if disIcon then
    --     self["_KW_DIS_ICON"]:addChild(disIcon)
    -- end
end

function BasicBtnsLayer:onLeaveBtnClicked(send, eventType)
    if IsGoldBoxTest then
        NG.TipTool.hideLoading()
        NG.goldGame:exit()
        return
    end

    if NG.goldGame:getModule("GameMain") == nil then
        NG.goldGame:exit()
        return
    end
    if NG.goldGame:getModule("GameMain"):getData():getGameStart() then
        NG.TipTool.showToast("当前正在对局，无法退出牌桌")
        return
    end
    if XH.lobby:getModule("GoldLaunch"):canGetAward() then
        NG.viewManager:openView("NewGold_GoldLaunchView", nil, { type = GoldLaunchConfig.Type.EXIT })
        return
    end
    NG.goldGame:getModule("GameMain"):reqLeaveRoom()
end

function BasicBtnsLayer:onMoreBtnClicked(send, eventType)
    self:moveInAnimation()
end

function BasicBtnsLayer:onUPBtnClicked(send, eventType)
    self:moveOutAnimation()
end

function BasicBtnsLayer:onSetBtnClicked(send, eventType)
    NG.goldGame:showSetting()
end

function BasicBtnsLayer:onHelperBtnClicked(send, eventType)
    NG.goldGame:showHelper()
end

function BasicBtnsLayer:onChatBtnClicked(send, eventType)
    NG.goldGame:showChat()
end

function BasicBtnsLayer:moveInAnimation()
    if self._moreLayout then
        self._moreLayout:stopAllActions()
        local posX = self._moreLayout:getPositionX()
        local moveAni = cc.MoveTo:create(0.2, cc.p(posX, 52))
        self._moreLayout:runAction(moveAni)
    end
end

function BasicBtnsLayer:moveOutAnimation()
    if self._moreLayout then
        self._moreLayout:stopAllActions()

        local posX = self._moreLayout:getPositionX()
        local moveAni = cc.MoveTo:create(0.2, cc.p(posX, 365))
        self._moreLayout:runAction(moveAni)
    end
end

return BasicBtnsLayer
