--转盘活动界面
local ActHelpView = class("ActHelpView", XH.ViewBase)

local KW_ACT_RULE_ID = 20210301

function ActHelpView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/LuckyTurnTableAct/LuckyTurnTableHelpLayer.csb"
end

function ActHelpView:getBindingInfo()
    return {
        ["_KWA_BTND_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KWA_BTND_OK"] = { varName = "_btnOK", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_PANEL_GAME_RULE"] = {varName="_panelGameRule"},
        ["_KW_PANEL_LOADING"] = {varName="_panelLoading"},
    }
end

function ActHelpView:ctor(param)
    param = param or {}
	ActHelpView.super.ctor(self, param)
    self:initView()
    self:loadWebViewUrl()
end

function ActHelpView:initView()
    self:initWebView()
end

function ActHelpView:onTouchEventClose(send, eventType)
    self:close()
end

function ActHelpView:loadWebViewUrl()
    local UrlConf = require("app.Config.UrlConf")
    local url = string.format(UrlConf.GAME_RULE_HTML_ADDR .. "/%d/%d/%d.html", XH.SysTool:getChannelID(), XH.areaData:getAreaID(), KW_ACT_RULE_ID)
    if url then
        self._webView:loadURL(url)
    end
end

function ActHelpView:initWebView()
    if device.platform == "windows" then
        return
    end
    local sz = self._panelGameRule
    if self._webView == nil then
        local webView = ccexp.WebView:create()
        webView:setContentSize(sz:getContentSize())
        webView:setScalesPageToFit(false)
        webView:setPosition(cc.p(sz:getContentSize().width/2, sz:getContentSize().height))
        webView:setAnchorPoint(sz:getAnchorPoint())
        webView:setBounces(false)
        webView:setVisible(false)
        sz:addChild(webView)
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

return ActHelpView