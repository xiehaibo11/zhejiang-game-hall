local CommonRuleView = class("CommonRuleView", XH.ViewBase)

function CommonRuleView:getCSBPath()
    return "cocosStudio/hall/CSB/window/CommonRuleLayer.csb"
end

function CommonRuleView:getBindingInfo()
    return {
        ["_KW_PANEL_BG"] = {varName = "_panelBG", onTouchEnded = "close"},
        ["_KW_CLOSE_BTN"] = {varName = "_btnClose", onTouchEnded = "close"},
        ["_KW_RULE_WEB_VIEW"] = {varName = "_ruleWebView"},
    }
end

function CommonRuleView:ctor(ruleId)
    CommonRuleView.super.ctor(self)
    self._ruleId = ruleId or 0
    self:initWebView()
end
function CommonRuleView:initWebView()
    if device.platform == "windows" then
        return
    end
    local sz = self._ruleWebView
    if self._webView == nil then
        local webView = ccexp.WebView:create()
        webView:setContentSize(sz:getContentSize())
        webView:setScalesPageToFit(false)
        webView:setPosition(cc.p(sz:getContentSize().width/2, sz:getContentSize().height/2))
        webView:setAnchorPoint(cc.p(0.5, 0.5))
        webView:setBounces(false)
        webView:setVisible(false)
        sz:addChild(webView)
        self._webView = webView

        webView:setOnShouldStartLoading(function(sender,url)
            self._webView:setVisible(false)
            return true
        end)
        webView:setOnDidFinishLoading(function(sender,url)
            self._webView:setVisible(true)
        end)

        local UrlConf = require("app.Config.UrlConf")
        local url = string.format(UrlConf.GAME_RULE_HTML_ADDR .. "/%d/%d/%d.html", XH.SysTool:getChannelID(), XH.areaData:getAreaID(), self._ruleId)
        if url then
            self._webView:loadURL(url)
        end
    end
end

return CommonRuleView
�