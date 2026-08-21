local View = class("View", XH.ViewBase)

function View:getCSBPath()
    return "cocosStudio/hall/CSB/FeedBackLayer.csb"
end

function View:getBindingInfo()
    return {
        ["_KW_PANEL_URLMSG"] = { varName = "_urlBg" },
        ["_KW_PANEL_MASK"] = { varName = "_btnClose" },
        ["_KW_BTN_BACK"] = { varName = "_btnBack", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_TEXT_LOADING"] = { varName = "_loadingText" },
    }
end

function View:ctor(gameName)
    View.super.ctor(self)
    self._webView = nil
    self._gameName = gameName or ""
    self:initWebView()
    self:initServiceLayer()
end

function View:initWebView()
    if device.platform == "windows" then
        return
    end

    local sz = self._urlBg
    if self._webView == nil then
        local webView = ccexp.WebView:create()
        webView:setContentSize(sz:getContentSize())
        webView:setScalesPageToFit(false)
        webView:setPosition(sz:getPosition())
        webView:setAnchorPoint(sz:getAnchorPoint())
        webView:setBounces(false)
        webView:setVisible(false)
        self:addChild(webView)
        self._webView = webView

        webView:setOnShouldStartLoading(function(sender, url)
            self._loadingText:setVisible(true)
            self._webView:setVisible(false)
            return true
        end)

        webView:setOnDidFinishLoading(function(sender, url)
            self._loadingText:setVisible(false)
            self._webView:setVisible(true)
        end)
    end
end

function View:initServiceLayer()
    if device.platform == "windows" then
        return
    end
    local DEBUG = require("app.Config.GlobalConfig").IsDebug
    local url = "https://ioposs.gameteamobile.com/h5/feedback/index.html?"
    if DEBUG then
        url = "http://ioposs.gameteamobile.com/h5/feedback/index.html?"
    end
    url = url .. "areaid=" .. XH.areaData:getAreaID()
    url = url .. "&package_type=" .. 0
    url = url .. "&numid=" .. XH.playerData:getNumberID()
    url = url .. "&nickname=" .. string.urlencode(XH.playerData:getNickName())
    url = url .. "&play_name=" .. string.urlencode(self._gameName)
    url = url .. "&t=" .. os.time()
    url = url .. "&url=" .. string.urlencode(XH.lobby:getModule("CusService"):getServiceUrl())
    url = url .. "&jwt_token=" .. XH.WebToken:getWebToken()
    self._webView:loadURL(url)
end

-- 关闭按钮
function View:onTouchEventClose(send, event)
    self:close()
end

return View