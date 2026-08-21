local RuleView = CF.gameClass("RuleView", CF.ViewBase)

function RuleView:ctor(param)
    param = param or {}
    RuleView.super.ctor(self, param)
    self:init()
end

function RuleView:getCSBPath()
    return CF.gameResourceRootPath .. "DarkShuangKou/GameLayer/CSB/GameRule.csb"
end

function RuleView:getBindingInfo()
    return {
        ["_KW_PANEL_LOADING"] = {varName = "_panelLoading"},
        ["_KW_PANEL_GAME_RULE"] = {varName = "_panelGameRule"},
        ["_KW_PANEL_TOUCH"] = {varName = "_KW_PANEL_TOUCH", onTouchEnded = "close"},
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose", type = CF.UI_TYPE.BUTTON, onTouchEnded = "close"}
    }
end

function RuleView:getProxyEvents()
    local eventTable = {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_TOTAL_WINLOST", callBack = "onHideView"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_HIDE_GAME_RULE", callBack = "onHideView"}
    }
    return eventTable
end

function RuleView:init()
    self:updateRuleWebView()
end

function RuleView:updateRuleWebView()
    if device.platform == "windows" then
        return
    end
    self:initWebView()
    local UrlConf = require("app.Config.UrlConf")
    local url = string.format(UrlConf.GAME_RULE_HTML_ADDR .. "/%d/7128/%d.html", CF.SysTool:getChannelID(), CF.roomData:getGameID())
    if url then
        self._webView:loadURL(url)
    end
end

function RuleView:initWebView()
    local sz = self._panelGameRule
    if self._webView == nil then
        local webView = ccexp.WebView:create()
        webView:setContentSize(sz:getContentSize())
        webView:setScalesPageToFit(false)
        webView:setPosition(sz:getPosition())
        webView:setAnchorPoint(sz:getAnchorPoint())
        webView:setBounces(false)
        webView:setVisible(false)
        self._panelGameRule:addChild(webView)
        self._webView = webView

        webView:setOnShouldStartLoading(
            function(sender, url)
                self._panelLoading:setVisible(true)
                self._webView:setVisible(false)
                return true
            end
        )

        webView:setOnDidFinishLoading(
            function(sender, url)
                self._panelLoading:setVisible(false)
                self._webView:setVisible(true)
            end
        )
    end
end

--将窗体显示到屏幕
function RuleView:showSelf(zOrder)
    zOrder = zOrder or 10002
    CF.addViewToGameScene(self, zOrder)
    return self
end

function RuleView:onHideView()
    self:close()
end

return RuleView
