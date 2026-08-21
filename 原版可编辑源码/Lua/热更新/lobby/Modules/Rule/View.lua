local RuleView = class("RuleView",XH.ViewBase)
local Mark = require("lobby.Modules.Mark.View")
local MutiVersionGameConfig =  require("lobby.Config.MutiVersionGameConfig")
local AdaptNodeList = {"_KW_LISTVIEW_CHOOSE_GAME", "_KW_PANEL_LOADING", "KW_IMG_SPLIT_LINE"}
local BtnConfig = {
    Selected = {
        Color = cc.c3b(255, 251, 205),
        FontSize = 60
    },
    UnSelected = {
        Color = cc.c3b(163, 111, 72),
        FontSize = 54
    }
}

function RuleView:getCSBPath()
    return "cocosStudio/hall/CSB/GameRuleLayer.csb"
end

function RuleView:getBindingInfo()
    return {
        ["_KW_BTN_BACK"] = {varName="_btnClose",type = XH.UI_TYPE.BUTTON,onTouchEnded = "onTouchEventClose"},
        ["_KW_BTN_MODULE"] = {varName="_btnModule",type = XH.UI_TYPE.BUTTON,onTouchEnded = "onTouchChangeGame"},
        ["_KW_TXT_BUTTON"] = {varName="_textImageText"},
        ["_KW_BTN_IMAGE_TEXT"] = {varName="_btnImageText",type = XH.UI_TYPE.BUTTON,onTouchEnded = "onTouchEventImageText"},
        ["_KW_PANEL_LOADING"] = {varName="_panelLoading"},
        ["_KW_PANEL_GAME_RULE"] = {varName="_panelGameRule"},
        ["_KW_LISTVIEW_CHOOSE_GAME"] = {varName="_listviewChooseGame"},
    }
end

function RuleView:ctor()
	RuleView.super.ctor(self)
    self._curSelectGame = XH.userDefault:getValue(XH.userDefault.KEY_ID.LAST_CHOOSE_GAME_ID, 0)
    self._webView = nil
    self._gameBtns = {}
    self:initUI()
end

function RuleView:initUI()
    self._panelLoading:setVisible(true)
    self:initGameBtnsList()
    self:selectGameByID(self._curSelectGame)
    -- 刘海屏适配
    self:adaptForLiuHai()
end

function RuleView:initGameBtnsList()
    if not self._listviewChooseGame then
        return
    end
    
    local boxGameIdList = XH.areaData:getBoxRoomGameList()
    local teaGameIdList = XH.areaData:getTeaHouseRoomGameList()
    local gameIdList = clone(boxGameIdList)
    for i = 1, #teaGameIdList do
        local bFind = false
        for j = 1, #boxGameIdList do
            if teaGameIdList[i] == boxGameIdList[j] or teaGameIdList[i] == 302841 then
                bFind = true
                break
            end
        end
        if not bFind then
            table.insert(gameIdList, 1, teaGameIdList[i])
        end
    end
    local gameNameList = XH.areaData:getAreaGameNameList()

    if MutiVersionGameConfig.OriginalGameList[XH.areaData:getLobbyID()] then 
        gameIdList = MutiVersionGameConfig.OriginalGameList[XH.areaData:getLobbyID()]
    end

    XH.playerData:screenGameList(gameIdList,2)
    self._haveGames = true

    local goldGameIds = {
        [30116] = "茶苑双扣",
        [30579] = "暗斗双扣"
    }
    for gameID, name in pairs(goldGameIds) do
        local newBtn = self:createGameBtn(gameID, name)
        self._listviewChooseGame:addChild(newBtn)
        self._gameBtns[gameID] = newBtn 

        if self._curSelectGame == 0 then
            self._curSelectGame = tonumber(gameID)
        end
    end
    -- if #gameIdList == 0 then
    --     self._haveGames = false
    --     self._panelGameRule:setVisible(false)
    --     local _panelLoadingTxt = self._panelLoading:getChildByName("Text_1")
    --     _panelLoadingTxt:setText("当前地区正在升级，暂无游戏，可前往休闲场游戏")
    --     return
    -- end
    -- 初始化按钮
    if #gameIdList > 0 then
        for _, gameID in pairs(gameIdList) do
            local newBtn = self:createGameBtn(gameID, gameNameList[gameID])
            self._listviewChooseGame:addChild(newBtn)
            self._gameBtns[gameID] = newBtn 

            if self._curSelectGame == 0 then
                self._curSelectGame = tonumber(gameID)
            end
        end
    end
    self._listviewChooseGame:setScrollBarEnabled(false)
end

function RuleView:createGameBtn(gameID, gameName)
    if not self._btnModule then
       return 
    end
    local newBtn = self._btnModule:clone()
    newBtn:setTag(gameID)
    XH.UITool.setText(newBtn, "_KW_TEXT_MODEl", gameName)
    --判断是否为标记游戏
    if XH.lobby:getModule("Mark"):isShowMarkGame(gameID) then
        local markText = XH.lobby:getModule("Mark"):getMarkTextByGameID(gameID)
        if not markText then 
            return
        end
        XH.UITool.setText(newBtn, "_KW_TEXT_MODEl", markText.gameName) 
        local newMark = Mark.new(gameID)
        newBtn:addChild(newMark)
        newMark:setPosition(cc.p(0 , 0))
    end
    return newBtn
end

function RuleView:selectGameByID(selectGameID)

    local gameIdList = XH.areaData:getBoxRoomGameList()
    if #gameIdList == 0 then
        return
    end
    self._curSelectGame = selectGameID
    XH.userDefault:setValue(XH.userDefault.KEY_ID.LAST_CHOOSE_GAME_ID, selectGameID)
    for gameID, btn in pairs(self._gameBtns) do
        self:setBtnSelectState(btn, gameID == selectGameID)
    end
    self:updateRuleWebView()
end

function RuleView:updateRuleWebView()
    self._textImageText:setVisible(self._curSelectGame == 30579)
    self._btnImageText:setVisible(self._curSelectGame == 30579)
    if device.platform == "windows" then
        return
    end
    self:initWebView()
    local UrlConf = require("app.Config.UrlConf")
    local url = string.format(UrlConf.GAME_RULE_HTML_ADDR .. "/%d/%d/%d.html", XH.SysTool:getChannelID(), XH.areaData:getAreaID(), self._curSelectGame)
    -- 干瞪眼使用同1个游戏gameid，目前配置在丽水地区
    if self._curSelectGame == 30577 or self._curSelectGame == 30579 or self._curSelectGame == 30588 then
        url = string.format(UrlConf.GAME_RULE_HTML_ADDR .. "/%d/7128/%d.html", XH.SysTool:getChannelID(), self._curSelectGame)
    end
    if url then
        self._webView:loadURL(url)
    end
end

function RuleView:initWebView()
    local sz = self._panelGameRule
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
            self._panelLoading:setVisible(true)
            self._webView:setVisible(false)
            return true
        end)

        webView:setOnDidFinishLoading(function(sender,url)
            self._panelLoading:setVisible(false)
            self._webView:setVisible(true)  
        end)
    end
end

function RuleView:setBtnSelectState(btn, bSelected)
    local conf = bSelected and BtnConfig.Selected or BtnConfig.UnSelected
    XH.UITool.setTextColor(btn, "_KW_TEXT_MODEl", conf.Color)
    XH.UITool.setFontSize(btn, "_KW_TEXT_MODEl", conf.FontSize)
    btn:setEnabled(not bSelected)
end

function RuleView:adaptForLiuHai()
    local nodeList = {}
    for _,name in pairs(AdaptNodeList) do
        nodeList[#nodeList + 1] = XH.UITool.seekNodeByName(self, name)
    end
    XH.UITool.adaptForLiuHai(nodeList)
end

--------------事件处理------------

-- 关闭按钮
function RuleView:onTouchEventClose(send, event)
    self:close()
end

-- 选择游戏
function RuleView:onTouchChangeGame(send, event)
    if not self._haveGames then
        return 
    end
    self:selectGameByID(send:getTag())
end

function RuleView:onTouchEventImageText(send, event)
    XH.viewManager:openView("ImageTextTutorialView", self:getLocalZOrder(), {gameid = self._curSelectGame})
    self:close()
end

return RuleView