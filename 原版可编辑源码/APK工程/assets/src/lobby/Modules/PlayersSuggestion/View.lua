local View = class("View",XH.ViewBase)

local ArmatureFileConf = {
    ExportJsonPath = "animation/Lobby/Base/loading_small_ani/loading_small_ani.ExportJson",
    PlistPath = "animation/Lobby/Base/loading_small_ani/loading_small_ani0.plist",
    PngPath = "animation/Lobby/Base/loading_small_ani/loading_small_ani0.png",
}
 
function View:getCSBPath()
    return "cocosStudio/hall/CSB/window/PlayersSuggestionLayer.csb"
end

function View:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_PANEL_VIEW"] = { varName = "_panelView"},
    }
end

function View:ctor(param)
    View.super.ctor(self, param)
    self._url = ""
    self._webView = nil
    if param and param.url then
        self._url = param.url
    end
    self:initUI()
end

function View:initUI()
    if device.platform == "windows" then
        return
    end
    self:showLoadingAni()
    self:initWebView()
    local url = string.format(self._url, XH.playerData:getNumberID(), XH.areaData:getAreaID())
    print("spideman " .. url)
    if url then
        self._webView:loadURL(url)
    end
end

function View:initWebView()
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

function View:showLoadingAni()
    if not cc.FileUtils:getInstance():isFileExist(ArmatureFileConf.ExportJsonPath) then
        return
    end
    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(
        ArmatureFileConf.PngPath, 
        ArmatureFileConf.PlistPath,
        ArmatureFileConf.ExportJsonPath)

    local lastCreatArmature = ccs.Armature:create("loading_small_ani")
    if lastCreatArmature then
        lastCreatArmature:setName("KW_LOADING")
        if self._panelView then
            self._panelView:addChild(lastCreatArmature)
            lastCreatArmature:setPosition(self._panelView:getContentSize().width / 2, self._panelView:getContentSize().height / 2)
        end
        lastCreatArmature:setAnchorPoint(cc.p(0.5, 0.5))
        lastCreatArmature:getAnimation():play("Animation1", -1, 1)
    end
end

function View:stopLoadingAni()
    if self._panelView then
        local aniNode = self._panelView:getChildByName("KW_LOADING")
        if aniNode then
            aniNode:stopAllActions()
            aniNode:removeFromParent()
        end
    end
end

-- 关闭按钮
function View:onTouchEventClose(send, event)
    self:close()
end

return View