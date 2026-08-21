local FanZhaNode = class("FanZhaNode" , XH.ViewBase)
local UrlConf = require("app.Config.UrlConf")

-- 界面停留时长
local AWARD_TIME = 60

function FanZhaNode:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/ActivityFanZha.csb"
end

function FanZhaNode:getBindingInfo()
    return {
        ["_KW_UI_ROOT_LAYER"] = { varName = "_root" },
        ["_KW_CONTENT_LIST"] = { varName = "_contentList" }
    }
end

function FanZhaNode:ctor()
    FanZhaNode.super.ctor(self)

    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.tx24060402)
    self._needRequestAward = false  -- 界面停留时长是否足够
    XH.lobby:getModule("TabsActivity"):reqFanZhaGiftInfo()
    self:initView()
    self:refreshView()
    self:reqScheduleAward()
end

function FanZhaNode:reqScheduleAward()
    if self._awardScheduleID and self._awardScheduleID ~= 0 then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._awardScheduleID)  
        self._awardScheduleID = 0
    end
    self._awardScheduleID = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        if not self or tolua.isnull(self) then
            return
        end
        if self._awardScheduleID and self._awardScheduleID ~= 0 then
            self._needRequestAward = true
            cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._awardScheduleID)  
            self._awardScheduleID = 0
        end
    end, AWARD_TIME, false)
end

function FanZhaNode:initView()
    local size = self._root:getContentSize()
    self:setContentSize(size)
end

function FanZhaNode:refreshView()
    if device.platform == "windows" then
        return
    end
    self._contentList:removeAllChildren()
    local sz = self._contentList
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
        return true
    end)
    webView:setOnDidFinishLoading(function(sender,url)
        XH.TipTool.hideLoading()
    end)
    local url = UrlConf.URL_FANZHA_QUES
    local areaID = XH.areaData:getAreaID()
    local numid = XH.playerData:getNumberID()
    local lobbyID = XH.areaData:getLobbyID()
    url = url .. "?areaid=" .. areaID .. "&numid=" .. numid .. "&lobbyid=" .. lobbyID
    self._webView:loadURL(url)
end

function FanZhaNode:close()
    -- 请求服务领取奖励
    if self._needRequestAward and XH.lobby:getModule("TabsActivity"):getCanGetFanZhaAward() then
        XH.lobby:getModule("TabsActivity"):reqFanZhaGift()
    end
    self._needRequestAward = false
    if self._awardScheduleID and self._awardScheduleID ~= 0 then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._awardScheduleID)  
        self._awardScheduleID = 0
    end
    FanZhaNode.super.close(self)
end

return FanZhaNode
