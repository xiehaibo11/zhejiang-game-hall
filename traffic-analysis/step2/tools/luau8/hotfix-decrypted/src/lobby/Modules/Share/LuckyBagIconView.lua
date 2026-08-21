-- 福袋活动icon
local LuckyBagIconView = class("LuckyBagIconView", XH.ViewBase)

function LuckyBagIconView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/LobbyShare/LuckyBagIconView.csb"
end

function LuckyBagIconView:getBindingInfo()
    return {
        --
        ["_KW_BTN"] = {varName = "_btn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "btnClick"},
        ["_KW_TXT_TIME_1"] = {varName = "_txtTime1"},
        ["_KW_TXT_TIME_2"] = {varName = "_txtTime2"},
        ["_KW_TXT_TIME_BG"] = {varName = "_txtTimeBg"},
        ["_KW_IMAGE_ICON"] = {varName = "_imgIcon"},
    }
end

function LuckyBagIconView:ctor(instance, param)
    LuckyBagIconView.super.ctor(self)
    self:setCascadeOpacityEnabled(true)

    self._source = param.source or "大厅"
    self:initUI()
    self._listenerForeground = cc.EventListenerCustom:create("APP_ENTER_FOREGROUND_EVENT", handler(self, self.onEnterForeground))
    cc.Director:getInstance():getEventDispatcher():addEventListenerWithSceneGraphPriority(self._listenerForeground, self)
end

function LuckyBagIconView:onExit()
    LuckyBagIconView.super.onExit(self)
    if self._listenerForeground then
        cc.Director:getInstance():getEventDispatcher():removeEventListener(self._listenerForeground)
    end
end

function LuckyBagIconView:onEnterForeground()
    XH.lobby:getModule("Share"):reqLuckyBag()
end

function LuckyBagIconView:initUI()
    if self._source and string.find(self._source, "金币") then
        self._txtTime = self._txtTime1
        self._txtTime2:setVisible(false)
        self._txtTimeBg:setVisible(false)
    else
        self._txtTime = self._txtTime2
        self._txtTime1:setVisible(false)
    end
    self:checkShow()
    self:runAction(cc.RepeatForever:create(cc.Sequence:create(cc.DelayTime:create(1), cc.CallFunc:create(function()
        self:checkShow()
    end))))
end

function LuckyBagIconView:checkShow()
    local t = XH.lobby:getModule("Share"):getRemainTime()
    self._txtTime:setString(self:getLeftTimeStr(t))
end

function LuckyBagIconView:getLeftTimeStr(time)
    local h = math.floor(time/3600)
    local m = math.floor((time%3600)/60)
    local s = math.floor(time%60)
    return string.format("%02d:%02d:%02d", h, m, s)
end

function LuckyBagIconView:btnClick()
    XH.viewManager:openView("LuckyBagView", nil, {source = self._source})
end

function LuckyBagIconView:changeIcon(isNewGoldLobby)
    self._imgIcon:ignoreContentAdaptWithSize(true)
    local imageUrl = isNewGoldLobby and "hall/CSB/Activity/LobbyShare/luckybag/lucky_bag_icon_1.png" or "hall/CSB/Activity/LobbyShare/luckybag/lucky_bag_icon_2.png"
    self._imgIcon:loadTexture(imageUrl, ccui.TextureResType.plistType)
end

return LuckyBagIconView
�
