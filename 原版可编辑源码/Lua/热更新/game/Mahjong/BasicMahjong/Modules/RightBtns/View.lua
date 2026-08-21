local RightBtnsView = CF.gameClass("RightBtnsView", "game.GameBase.Modules.RightBtns.View")

local REDPOINT_EXCHANGE = "REDPOINT_EXCHANGE"
local FIRSTVOICETIPINGAME = "FIRST_GETSEX" ..  CF.areaData:getAreaID()
function RightBtnsView:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/RightBtnsLayer.csb"
end

function RightBtnsView:getBindingInfo()
    local bindingInfo = RightBtnsView.super.getBindingInfo(self)
    bindingInfo["_KW_BTN_TING"] = {varName = "_tingBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onTingBtnClicked"}
    bindingInfo["_KW_GAMELAYER_BG"] = {varName = "_imgTableBg"}
    bindingInfo["_KW_IMG_RED_POINT"] = {varName = "_imgRedPoint"}
    return bindingInfo
end

function RightBtnsView:getProxyEvents()
    local proxyEvents = RightBtnsView.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("RightBtns"), eventKeyName = "EVENT_SHOW_TING_BUTTON", callBack = "onShowTingButton"}
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("RightBtns"), eventKeyName = "EVENT_HIDE_TING_BUTTON", callBack = "onHideTingButton"}
    proxyEvents[#proxyEvents + 1] = {module = CF.roomData, eventKeyName = "EVENT_GAMESTART_CHANGED", callBack = "onGameStartChanged"}
    proxyEvents[#proxyEvents + 1] = {module = CF.settingData, eventKeyName = "EVENT_HAVE_TING", callBack = "onEventFlushTingInfo"}
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("Setting"), eventKeyName = "EVENT_HIGH_SETTING_BUTTON_TOUCHED", callBack = "onHideGuideAnim"}
    return proxyEvents
end

function RightBtnsView:initUI()
    RightBtnsView.super.initUI(self)
    if not cc.UserDefault:getInstance():getBoolForKey(REDPOINT_EXCHANGE, false) then
        self._imgRedPoint:setVisible(true)
    end
end

function RightBtnsView:getAdaptationConfig()
    local config = RightBtnsView.super.getAdaptationConfig(self)
    config[#config + 1] = {node = self._tingBtn, bRight = true, bHalf = false}
    return config
end

function RightBtnsView:onShowTingButton()
    if CF.roomData and CF.roomData:getIsSeer() then
        return
    end
    self._tingBtn:setVisible(true)
end

function RightBtnsView:onHideTingButton()
    self._tingBtn:setVisible(false)
end

function RightBtnsView:onHideGuideAnim()
    if CF.areaData:isOpenSimpleSettingGuide() then
        CF.userDefault:setValue(CF.userDefault.KEY_ID.KW_SETTING_GUIDE_STATUS, 1)
    end
    if self._aniGuideNode then
        self._aniGuideNode:setVisible(false)
    end
end

function RightBtnsView:onEventFlushTingInfo(event)
    if event.data == false then
        self:onHideTingButton()
    end
end

function RightBtnsView:onTingBtnClicked(send, eventType)
    CF.gameRequire("Modules.GameLayer.CanHuMahsUI").new():showSelf()
end

function RightBtnsView:onGameStartChanged(event)
    if not event or not event.msg then
        return
    end
    if not event.msg.nowState then
        self._tingBtn:setVisible(false)
    end
end

function RightBtnsView:onSetBtnClicked(send, eventType)
    local voiceTip = self._setBtn:getParent()
    :getChildByName("KW_IMG_BUBBLETIP")
    if  voiceTip ~= nil then
        self._setBtn:getParent():removeChildByName("KW_IMG_BUBBLETIP")
        cc.UserDefault:getInstance():setBoolForKey(FIRSTVOICETIPINGAME, true)
    end
    if not cc.UserDefault:getInstance():getBoolForKey(REDPOINT_EXCHANGE, false) then
        cc.UserDefault:getInstance():setBoolForKey(REDPOINT_EXCHANGE, true)
        self._imgRedPoint:setVisible(false)
    end
    if not CF.settingData:getIsMahlayer3D() then
        CF.gameRequire("Modules.Setting.View").new():showSelf()
    else
        CF.gameRequire("Modules.Setting.View3D").new():showSelf()
    end
    CF.game:getModule("IconAnimationManager"):reportData("菜单")
end

return RightBtnsView