local ZheJiangNewsView = class("ZheJiangNewsView", XH.ViewBase)
local UrlConf = require("app.Config.UrlConf")

function ZheJiangNewsView:ctor(param)
    param = param or {}
    ZheJiangNewsView.super.ctor(self, param)
    self._webView = nil
    self:initWebView()
    self:initServiceLayer(param)
end

function ZheJiangNewsView:getCSBPath()
    return "res/cocosStudio/hall/CSB/ZheJiangNewsLayer.csb"
end

function ZheJiangNewsView:getBindingInfo()
    return {
        ["_KW_PANEL_URLMSG"] = { varName = "_urlBg"},
        ["_KW_PANEL_MASK"] = {varName="_btnClose"},
        ["_KW_BTN_BACK"] = {varName="_btnBack", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventClose"},
        ["_KW_TEXT_LOADING"] = {varName="_loadingText"},
    }
end

function ZheJiangNewsView:initWebView()
    if device.platform == "windows" then
        print("windows not spourt webview")
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

        webView:setOnShouldStartLoading(function(sender,url)
            self._loadingText:setVisible(false)
            self._webView:setVisible(true)
            return true
        end)

        webView:setOnDidFinishLoading(function(sender,url)
            self._loadingText:setVisible(false)
            self._webView:setVisible(true)  
        end)
    end
end

function ZheJiangNewsView:initServiceLayer(msgData)
    if device.platform == "windows" then
        print("windows not spourt webview")
        return
    end
    local url = UrlConf.HTTP_ID_ZHEJIANG_NEWS
    if url then
        local ServiceUrl = url
        self._webView:loadURL(ServiceUrl)
    end
end

-- 关闭按钮
function ZheJiangNewsView:onTouchEventClose(send, event)
    self:close()
end

return ZheJiangNewsView�