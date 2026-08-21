local RuleView = class("RuleView", XH.Bridge.ViewBase)
local RemoteConfig = import("...Configs.RemoteConfig")
local LocalConfig = import("...Configs.LocalConfig")
local POP_UI_PATH = LocalConfig.IMG_PATH.POP

local BtnConfig = {Selected = {Color = cc.c3b(255, 251, 205), FontSize = 60}, UnSelected = {Color = cc.c3b(163, 111, 72), FontSize = 54}}

function RuleView:getCSBPath()
    return XH.Bridge:getCCSResPath("GameRuleLayer.csb")
end

function RuleView:getBindingInfo()
    return {
        ["_KW_TXT_BUTTON"] = {varName="_textImageText"},
        ["_KW_BTN_IMAGE_TEXT"] = {varName="_btnImageText",type = XH.UI_TYPE.BUTTON,onTouchEnded = "onTouchEventImageText"},
        ["_btnClose"] = {varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose"},
        ["_itemGame"] = {varName = "_itemGame", type = XH.UI_TYPE.IMAGE, onTouchEnded = "onTouchChangeGame"},
        ["_panelLoading"] = {varName = "_panelLoading"},
        ["_listRight"] = {varName = "_panelGameRule"},
        ["_listLeft"] = {varName = "_listviewChooseGame"}
    }
end

function RuleView:ctor(leisureID)
    RuleView.super.ctor(self)
    self._curSelectGame = leisureID or 0
    self._webView = nil
    self._gameBtns = {}
    self._itemGame:setVisible(false)
    self:initUI()
end

function RuleView:initUI()
    self._panelLoading:setVisible(true)
    self:initGameBtnsList()
    self:selectGameByLeisureID(self._curSelectGame)
end

function RuleView:initGameBtnsList()
    if not self._listviewChooseGame then
        return
    end

    local createBtnByID = function(gameInfo)
        local newBtn = self:createGameBtn(gameInfo.GameTitle, gameInfo.LeisureID)
        self._listviewChooseGame:addChild(newBtn)
        self._gameBtns[gameInfo.LeisureID] = newBtn
    end

    if self._curSelectGame ~= 0 then
        local gameInfo = RemoteConfig:getRoomInfoByLeisureID(self._curSelectGame)
        if gameInfo and self._curSelectGame == tonumber(gameInfo.LeisureID) then
            createBtnByID(gameInfo)
        end
    else
        local gameIdList = RemoteConfig:getGoldRoomLeisureIDs()
        for _, leisureID in ipairs(gameIdList) do
            if leisureID > 0 then
                local gameInfo = RemoteConfig:getRoomInfoByLeisureID(leisureID)
                if gameInfo and self._curSelectGame ~= tonumber(gameInfo.LeisureID) then
                    createBtnByID(gameInfo)
                    if self._curSelectGame == 0 then
                        self._curSelectGame = tonumber(gameInfo.LeisureID)
                    end
                end
            end
        end
    end

    self._listviewChooseGame:setScrollBarEnabled(false)
end

function RuleView:createGameBtn(gameName, leisureID)
    if not self._itemGame then
        return
    end
    local newBtn = self._itemGame:clone()
    newBtn:setTag(leisureID)
    newBtn:setVisible(true)
    XH.UITool.setText(newBtn, "_txtName", gameName)
    return newBtn
end

function RuleView:selectGameByLeisureID(leisureID)
    self._curSelectGame = leisureID
    for id, btn in pairs(self._gameBtns) do
        self:setBtnSelectState(btn, id == leisureID)
    end
    self:updateRuleWebView()
end

function RuleView:updateRuleWebView()
    if device.platform == "windows" then
        return
    end
    self:initWebView()
    local gameInfo = RemoteConfig:getRoomInfoByLeisureID(self._curSelectGame)
    self._textImageText:setVisible(gameInfo.GameID == 30579)
    self._btnImageText:setVisible(gameInfo.GameID == 30579)
    local UrlConf = XH.Bridge:require("app.Config.UrlConf")
    local url = string.format(UrlConf.GAME_RULE_HTML_ADDR .. "/%d/%d/%d.html", XH.SysTool:getChannelID(), 7128, gameInfo.GameID)
    -- 干瞪眼使用同1个游戏gameid，目前配置在丽水地区
    -- if self._curSelectGame == 30577 then
    --     url = string.format(UrlConf.GAME_RULE_HTML_ADDR .. "/%d/7128/%d.html", XH.SysTool:getChannelID(), self._curSelectGame)
    -- end
    if url then
        self._webView:loadURL(url)
    end
end

function RuleView:initWebView()
    local gameInfo = RemoteConfig:getRoomInfoByLeisureID(self._curSelectGame)
    if gameInfo.GameID == 30579 then
        self._panelGameRule:setContentSize(cc.size(self._panelGameRule:getContentSize().width, 630))
    else
        self._panelGameRule:setContentSize(cc.size(self._panelGameRule:getContentSize().width, 706))
    end
    local sz = self._panelGameRule
    if self._webView == nil then
        local webView = ccexp.WebView:create()
        webView:setContentSize(sz:getContentSize())
        webView:setScalesPageToFit(false)
        webView:setPosition(sz:getPosition())
        webView:setAnchorPoint(sz:getAnchorPoint())
        webView:setBounces(false)
        webView:setVisible(false)
        sz:getParent():addChild(webView)
        self._webView = webView

        webView:setOnShouldStartLoading(function(sender, url)
            self._panelLoading:setVisible(true)
            self._webView:setVisible(false)
            return true
        end)

        webView:setOnDidFinishLoading(function(sender, url)
            self._panelLoading:setVisible(false)
            self._webView:setVisible(true)
        end)
    else
        self._webView:setContentSize(sz:getContentSize())
    end
end

function RuleView:setBtnSelectState(btn, isSelected)
    btn:setTouchEnabled(not isSelected)
    XH.UITool.loadTexture(btn, "_imgBg", POP_UI_PATH .. (isSelected and "Btn_tc_xz_di1.png" or "Btn_tc_xz_di2.png"), ccui.TextureResType.plistType)
    XH.UITool.setTextColor(btn, "_txtName", isSelected and cc.c3b(0x9d, 0x46, 0) or cc.c3b(0x99, 0x83, 0x6e))
end

--------------事件处理------------

-- 关闭按钮
function RuleView:onTouchEventClose(send, event)
    self:close()
end

-- 选择游戏
function RuleView:onTouchChangeGame(send, event)
    self:selectGameByLeisureID(send:getTag())
end

function RuleView:onTouchEventImageText(send, event)
    local gameInfo = RemoteConfig:getRoomInfoByLeisureID(self._curSelectGame)
    XH.Bridge.viewManager:openView("ImageTextTutorialView", self:getLocalZOrder(), {gameid = gameInfo.GameID})
    self:close()
end

return RuleView
