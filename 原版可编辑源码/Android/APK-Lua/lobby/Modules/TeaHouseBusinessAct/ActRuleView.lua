local ActRuleView = class("ActRuleView", XH.ViewBase)

local KW_ACT_RULE_ID = 20210118

function ActRuleView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/BusinessAct/BusinessActRule.csb"
end

function ActRuleView:getBindingInfo()
    return {
        --规则
        ["_KW_IMG_RULE_BACK"] = {varName="_panelRuleBg",onTouchEnded = "onTouchEventRuleClose"},
        ["_KW_PANEL_LOADING"] = {varName="_panelLoading"},
        ["_KW_PANEL_GAME_RULE"] = {varName="_panelGameRule"},
        ["_KW_CLOSE_RULE"] = {varName="_btnCloseRule",onTouchEnded = "onTouchEventRuleClose"},
    }
end

function ActRuleView:ctor(param)
    ActRuleView.super.ctor(self, param)
    self:initWebView()
    self:loadWebViewUrl()
end

function ActRuleView:initWebView()
    if device.platform == "windows" then
        return
    end
    if self._webView == nil then
        local webView = ccexp.WebView:create()
        webView:setContentSize(self._panelGameRule:getContentSize())
        webView:setScalesPageToFit(false)
        webView:setPosition(cc.p(self._panelGameRule:getContentSize().width/2, self._panelGameRule:getContentSize().height))
        webView:setAnchorPoint(self._panelGameRule:getAnchorPoint())
        webView:setBounces(false)
        webView:setVisible(false)
        self._panelGameRule:addChild(webView)
        self._webView = webView
        webView:setOnShouldStartLoading(function(sender,url)
            self._panelLoading:setVisible(true)
            self._webView:setVisible(false)
            return true
        end)
        webView:setOnDidFinishLoading(function(sender,url)
            self._panelLoading:setVisible(false)
            self._webView:setVisible(true)
        end)
    end
end

function ActRuleView:loadWebViewUrl()
    local UrlConf = require("app.Config.UrlConf")
    local url = string.format(UrlConf.GAME_RULE_HTML_ADDR .. "/%d/%d/%d.html", XH.SysTool:getChannelID(), XH.areaData:getAreaID(), KW_ACT_RULE_ID)
    if url and self._webView then
        self._webView:loadURL(url)
    end
end

function ActRuleView:onTouchEventRuleClose(send,eventType)
    self:close()
end

return ActRuleView
