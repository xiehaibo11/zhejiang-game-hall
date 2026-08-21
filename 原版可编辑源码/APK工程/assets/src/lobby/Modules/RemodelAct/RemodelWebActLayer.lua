local RemodelWebActLayer = class("RemodelWebActLayer", XH.ViewBase)
local UrlConf = require("app.Config.UrlConf")
local ActivityConfig = require("lobby.Modules.TabsActivity.Config")

function RemodelWebActLayer:ctor(param)
    param = param or {}
    RemodelWebActLayer.super.ctor(self, param)
    self._webView = nil
    self:initWebView()
    self:initServiceLayer(param)
end

function RemodelWebActLayer:getCSBPath()
    return "res/cocosStudio/hall/CSB/Activity/RemodelAct/RemodelWebActLayer.csb"
end

function RemodelWebActLayer:getBindingInfo()
    return {
        ["_KW_PANEL_URLMSG"] = { varName = "_urlBg"},
        ["_KW_PANEL_MASK"] = {varName="_btnClose"},
        ["_KW_BTN_BACK"] = {varName="_btnBack", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventClose"},
        ["_KW_TEXT_LOADING"] = {varName="_loadingText"},
    }
end

function RemodelWebActLayer:initWebView()
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

function RemodelWebActLayer:initServiceLayer(msgData)
    if device.platform == "windows" then
        print("windows not spourt webview")
        return
    end
    local url = UrlConf.HTTP_ID_REMODEL_WEB_ACT
    local lobbyID = XH.areaData:getLobbyID()
    local from = "pc"
    local appid = 0
    local secret = ""
    if ActivityConfig.LobbyActConfig[lobbyID] then
        appid = ActivityConfig.LobbyActConfig[lobbyID].appid or 0
        secret = ActivityConfig.LobbyActConfig[lobbyID].secret or ""
    end
    local timestamp = os.time()
    local numid = XH.playerData:getNumberID()
    local uid = un.StringUtils.GB_18030_2000_TO_UTF8(XH.playerData:getUserID())
    local uuid = XH.areaData:getAreaID()..numid..timestamp..math.random(9999)
    local signatureStr = "app_id="..appid.."&numid="..numid.."&secret="..secret.."&timestamp="..timestamp.."&uuid="..uuid
    local signature = XH.SysTool:md5_encode(signatureStr)
    local param = "from=%s&app_id=%d&timestamp=%s&signature=%s&numid=%d&uid=%s&uuid=%s"
    param = string.format(param, from, appid, timestamp, signature, numid, uid, uuid)
    local openUrl = url .. "?" .. param
    if openUrl then
        self._webView:loadURL(openUrl)
    end
end

-- 关闭按钮
function RemodelWebActLayer:onTouchEventClose(send, event)
    self:close()
end

return RemodelWebActLayer