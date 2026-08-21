local AutoLogoutView = class("AutoLogoutView", XH.ViewBase)

function AutoLogoutView:getCSBPath()
    return "cocosStudio/hall/CSB/window/AutoLogoutView.csb"
end

function AutoLogoutView:getBindingInfo()
    return {
        ["_KW_PANEL_URLMSG"] = { varName = "_urlBg" },
        ["_KW_PANEL_MASK"] = { varName = "_btnClose" },
        ["_KW_BTN_BACK"] = { varName = "_btnBack", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_TEXT_LOADING"] = { varName = "_loadingText" },
    }
end

function AutoLogoutView:getProxyEvents()
    return {
        { module = XH.playerData, eventKeyName = "EVENT_NEW_APPLY_WRITE_OFF", callBack = "onNewApplyWriteOff" },
        
    }
end

function AutoLogoutView:ctor(info)
    AutoLogoutView.super.ctor(self)
    self._webView = nil
    self._info = info or ''
    self:initWebView()
    self:reqSessionID()
end

function AutoLogoutView:initWebView()
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

function AutoLogoutView:initServiceLayer(tempSession)
    if device.platform == "windows" then
        return
    end
    local GlobalCfg = require("app.Config.GlobalConfig")
    local url =  GlobalCfg.IsDebug and "http://appstore.racyqp.com:8090/api/user/logoff/page?" or "https://wechat.hzxuanming.com/api/user/logoff/page?"
    local areaid = XH.areaData:getAreaID()
    local sid = XH.areaData:getAreaWindID()
    local gameid = XH.areaData:getConfigGameID()
    local numid = XH.playerData:getNumberID()
    local ssid = string.urlencode(tempSession)
    local uid = string.urlencode(XH.playerData:getUserID())
    local revoke_token = self._info ~= '' and string.urlencode(json.encode({sid = self._info})) or ''
    local ServiceUrl = url .. string.format("areaid=%d&sid=%d&gameid=%d&numid=%s&ssid=%s&uid=%s&revoke_token=%s", areaid,sid,gameid,numid,ssid,uid,revoke_token)
    self._webView:loadURL(ServiceUrl)
end

-- 关闭按钮
function AutoLogoutView:onTouchEventClose(send, event)
    XH.playerData:startReq("ReqPlayerWriteOffStatus", XH.KW_CONFIG_LOGIC_TIME_OUT, 1)
    -- self:close()
end

function AutoLogoutView:reqSessionID()
    local srsGroupID = XH.areaData:getSrsGroupID()
    local ReqSessionID = require("app.Req.ReqSessionID")
    local reqSessionID = ReqSessionID:new()
    reqSessionID:addReqCallBack(self, self.onTempSessionBack)
    reqSessionID:start(0, XH.playerData:getBrandID(),
    XH.playerData:getNumberID(), un.StringUtils.UTF8_TO_GB_18030_2000(XH.playerData:getUserID()), XH.playerData:getSessionID(false), srsGroupID, 10)
end

function AutoLogoutView:onTempSessionBack(cell, type, data1)
    if type == XH.Req.TYPE.SUCCESS then
        self:initServiceLayer(data1)
    end
end

function AutoLogoutView:onNewApplyWriteOff(event)
    self:close()
    if event.bNewApply and event.bNewApply == 1 then
        local isShowYouKe = false
        if XH.playerData:getPlayerIsAgent() and XH.areaData:getAgentShowYouKe() then
            isShowYouKe = true
        end
        XH.login:getModule("Login"):clearLoginStates()
        XH.Controller:getInstance():enterLogin(isShowYouKe)
    end
end

return AutoLogoutView�