local View = class("View",XH.ViewBase)
local Module = XH.lobby:getModule("CusService")
View.KEFUSOURCE = {
    LOGIN = "登录页",
    GAMELOBBY = "游戏大厅",
    CREATEQYQ = "创建比赛场按钮",
    CREATETEAHOUSE =  "创建人人比赛场",
    QYQFAQ = "比赛场FAQ页" ,
    QYQDETAILS = "比赛场详情页",
    PAYCANCEL = "支付取消",
    EXCHANGERECORD = "兑换记录"
}--用于标记客服入口   
function View:getCSBPath()
    return "cocosStudio/hall/CSB/CusServiceLayer.csb"
end

function View:getBindingInfo()
    return {
        ["_KW_PANEL_URLMSG"] = { varName = "_urlBg" },
        ["_KW_PANEL_MASK"] = { varName = "_btnClose" },
        ["_KW_BTN_BACK"] = { varName = "_btnBack", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_TEXT_LOADING"] = { varName = "_loadingText" },
    }
end

function View:ctor(isTempNumid,nSourceID)
    View.super.ctor(self)
    self._webView = nil
    self._isTempNumid = isTempNumid
    if nSourceID then
        self._nSource = View.KEFUSOURCE[nSourceID]
    end
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

        webView:setOnShouldStartLoading(function(sender,url)
            self._loadingText:setVisible(true)
            self._webView:setVisible(false)
            return true
        end)

        webView:setOnDidFinishLoading(function(sender,url)
            self._loadingText:setVisible(false)
            self._webView:setVisible(true)  
        end)
    end
end

function View:initServiceLayer()
    if device.platform == "windows" then
        return
    end
    --清除未读消息
    local serviceUrl
    Module:reqCusServiceClearUnreadMsg()
    if self._nSource then
        serviceUrl = Module:getServiceUrl(self._nSource)
    else
        serviceUrl = Module:getServiceUrl()
    end
    if self._isTempNumid then
        serviceUrl = Module:getTempServiceUrl()
    end
    if serviceUrl then
        self._webView:loadURL(serviceUrl)
    end
end

-- 关闭按钮
function View:onTouchEventClose(send, event)
    self:close()
end

return View�
