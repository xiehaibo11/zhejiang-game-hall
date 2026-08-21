local SxvipFeedbackItem = class("SxvipFeedbackItem" , XH.ViewBase)

local SxvipConfig = require("lobby.Modules.Sxvip.Config")

function SxvipFeedbackItem:getCSBPath()
    return "cocosStudio/hall/CSB/Sxvip/SxvipFeedbackItem.csb"
end

function SxvipFeedbackItem:getBindingInfo()
    return {
        ["_KW_VIP_ROOT"] = { varName = "_root" },
        ["_KW_CONTENT_LIST"] = { varName = "_contentList" }
    }
end

function SxvipFeedbackItem:ctor()
    SxvipFeedbackItem.super.ctor(self)

    self:initView()
end

function SxvipFeedbackItem:initView()
    local size = self._root:getContentSize()
    self:setContentSize(size)
end

function SxvipFeedbackItem:refreshView()
    if device.platform == "windows" then
        return
    end
    self._contentList:removeAllChildren()
    local sz = self._contentList
    -- XH.TipTool.showLoading()
    local webView = ccexp.WebView:create()
    webView:setContentSize(sz:getContentSize())
    webView:setScalesPageToFit(true)
    webView:setPosition(cc.p(sz:getContentSize().width/2, sz:getContentSize().height/2))
    webView:setAnchorPoint(cc.p(0.5, 0.5))
    -- webView:setBackgroundColor(cc.c4b(0, 0, 0, 0)) -- 设置背景颜色为透明
    webView:setBounces(false)
    -- webView:setVisible(false)
    webView:setLocalZOrder(-1)
    sz:addChild(webView)
    self._webView = webView

    webView:setOnShouldStartLoading(function(sender,url)
        -- self._webView:setVisible(false)
        return true
    end)
    webView:setOnDidFinishLoading(function(sender,url)
        -- self._webView:setVisible(true)
        XH.TipTool.hideLoading()
    end)
    -- load feedback
    local url = SxvipConfig:getFeedbackUrl()
    local areaID = XH.areaData:getAreaID()
    local numid = XH.playerData:getNumberID()
    local lobbyID = XH.areaData:getLobbyID()
    url = url .. "?areaid=" .. areaID .. "&numid=" .. numid .. "&lobbyid=" .. lobbyID
    self._webView:loadURL(url) 
end

return SxvipFeedbackItem