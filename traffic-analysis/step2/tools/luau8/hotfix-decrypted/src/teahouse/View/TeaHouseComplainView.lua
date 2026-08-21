---@class TeaHouseComplainView : View
local TeaHouseComplainView = class("TeaHouseComplainView", TeaHouse.View)
--local KW_VIEW_URL = "https://survey.dingwei.netease.com/htmls/ezlb3n/paper.html?numid=%s&areaid=%d"
-- local KW_VIEW_URL = "https://survey.dingwei.netease.com/htmls/a12o5g/paper.html?numid=%s"

local ArmatureFileConf = {
    ExportJsonPath = "animation/Lobby/Base/loading_small_ani/loading_small_ani.ExportJson",
    PlistPath = "animation/Lobby/Base/loading_small_ani/loading_small_ani0.plist",
    PngPath = "animation/Lobby/Base/loading_small_ani/loading_small_ani0.png",
}

local KW_LOADING = "KW_LOADING"

TeaHouseComplainView.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseComplainView.csb",
    binding = {
        ["_KW_PANEL_QUESTIONNAIRE"] = { tag = "_KW_PANEL_QUESTIONNAIRE", name = "_panelQuestionnaire", class = "panel" },
        ["_KW_PANEL_VIEW"] = { tag = "_KW_PANEL_VIEW", name = "_panelView", class = "panel" },
        ["_KW_BTN_CLOSE"] = { tag = "_KW_BTN_CLOSE", name = "_btnClose", class = "btn", events = "onBtnEventClose" },
    }
}

function TeaHouseComplainView:ctor()
    TeaHouseComplainView.super.ctor(self)
    self._webView = nil
    self:initUI()
end

function TeaHouseComplainView:initUI()
    if device.platform == "windows" then
        return
    end
    self:showLoadingAni()
    self:initWebView()
    local KW_VIEW_URL = ""
    local tmpData = TeaHouse.BridgeData.getComplainData()
    if tmpData and tmpData.url then 
        KW_VIEW_URL = tmpData.url
    end
    local url = string.format(KW_VIEW_URL, TeaHouse.BridgeData.getNumberID(), TeaHouse.BridgeData.getAreaID())
    print("spideman " .. url)
    if url then
        self._webView:loadURL(url)
    end
end

function TeaHouseComplainView:initWebView()
    local sz = self._panelView
    if self._webView == nil then
        local webView = ccexp.WebView:create()
        webView:setContentSize(sz:getContentSize())
        webView:setScalesPageToFit(false)
        webView:setPosition(sz:getContentSize().width / 2, sz:getContentSize().height / 2)
        webView:setAnchorPoint(cc.p(0.5, 0.5))
        webView:setBounces(false)
        webView:setVisible(false)
        sz:addChild(webView)
        self._webView = webView

        webView:setOnShouldStartLoading(function(sender,url)
            print("spideman setOnShouldStartLoading")
            self._webView:setVisible(false)
            return true
        end)

        webView:setOnDidFinishLoading(function(sender,url)
            print("spideman setOnDidFinishLoading")
            self:stopLoadingAni()
            self._webView:setVisible(true)
        end)
    end
end

function TeaHouseComplainView:onBtnEventClose(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:close()
end


function TeaHouseComplainView:showLoadingAni()
    if not cc.FileUtils:getInstance():isFileExist(ArmatureFileConf.ExportJsonPath) then
        return
    end
    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(
        ArmatureFileConf.PngPath, 
        ArmatureFileConf.PlistPath,
        ArmatureFileConf.ExportJsonPath)

    local lastCreatArmature = ccs.Armature:create("loading_small_ani")
    if lastCreatArmature then
        lastCreatArmature:setName(KW_LOADING)
        if self._panelView then
            self._panelView:addChild(lastCreatArmature)
            lastCreatArmature:setPosition(self._panelView:getContentSize().width / 2, self._panelView:getContentSize().height / 2)
        end
        lastCreatArmature:setAnchorPoint(cc.p(0.5, 0.5))
        lastCreatArmature:getAnimation():play("Animation1", -1, 1)
    end
end

function TeaHouseComplainView:stopLoadingAni()
    if self._panelView then
        local aniNode = self._panelView:getChildByName(KW_LOADING)
        if aniNode then
            aniNode:stopAllActions()
            aniNode:removeFromParent()
        end
    end
end

return TeaHouseComplainView�