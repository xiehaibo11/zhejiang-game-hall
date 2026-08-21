local RoomCenterInfoView = CF.gameClass("RoomCenterInfoView", "game.BaseCardGame.Modules.RoomInfo.CenterView")

local TABLE_BG_STYPE = { THREE_D = 1, TWO_D = 2,} --桌面3D,2D (各个游戏的桌布配置都有可能不相同)

RoomCenterInfoView.KW_TABLE_BG_FILE_NAME = {
    [1] = "res/tex/image/card_scene_bg.jpg",
    [2] = "res/tex/image/card_scene_bg_2d.jpg",
    [3] = "", -- 霞光胜境，动画里带了 
    [4] = "res/tex/image/background_3.jpg",
    [5] = "res/tex/image/background_2.jpg",
    [6] = "res/tex/image/background_1.jpg",
}

function RoomCenterInfoView:getCSBPath()
    return "res/cocosStudio/DaTong/GameLayer/CSB/RoomCenterInfoLayer.csb"
end

function RoomCenterInfoView:getBindingInfo()
    return {
        ["_KW_GAMELAYER_BG"] = {varName = "_imgTableBg"},
        ["_KW_PANEL_TABLE_BG"] = {varName="_propTableBgPanel"},
        ["_KW_PANEL_CENTER_TOP_INFO"] = {varName = "_centerTopPanel"},
        ["_KW_IMG_GAME_RULE_BG"] = {varName = "_gameRuleBg"},
        ["_KW_TEXT_GAME_RULE"] = {varName = "_gameRuleLabel"},
        ["_KW_IMG_SCORE_ALL_BG"] = {varName = "_tableScoreALLBg"},
        ["_KW_SCORE_ALL_SCORE"] = {varName = "_tableScoreText"},
    }
end

function RoomCenterInfoView:getProxyEvents()
    local proxyEvents = RoomCenterInfoView.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = { module = CF.settingData, eventKeyName = "EVENT_GAME_TABLE_STYLE_CHANGED", callBack = "onTableBgChanged" }
    proxyEvents[#proxyEvents + 1] = { module = CF.settingData, eventKeyName = "EVENT_GAME_IS_2D_CHANGED", callBack = "onTableBgIs2DChanged" }
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SCORE_TABLE_SHOW", callBack = "onMsgScoreTableShowTurn" }
    return proxyEvents
end

function RoomCenterInfoView:initUI()
    RoomCenterInfoView.super.initUI(self)
end

function RoomCenterInfoView:onTableBgChanged()
    self:updateTableBg()
    self:updateTableBgProp()
end

function RoomCenterInfoView:getTableBgFileStr()
    local tableStyle = CF.settingData:getTableStyle()
    if CF.getLobbyModule("Sxvip"):isExpire() and CF.settingData:isVipTable(tableStyle) then
        tableStyle = 1
        CF.settingData:setTableStyle(1)
    end
    local tableBg = self.KW_TABLE_BG_FILE_NAME[1]
    if self.KW_TABLE_BG_FILE_NAME[tableStyle] then
        tableBg = self.KW_TABLE_BG_FILE_NAME[tableStyle]
    end
    return tableBg
end

function RoomCenterInfoView:updateTableText()
    local isUse = XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.TABLE)
    self._gameRuleBg:setVisible(false)
    self._tableScoreALLBg:setVisible(false)
    self._gameRuleLabel:setOpacity(255 * 0.5)
    self._gameRuleLabel:setTextColor(cc.c3b(0, 0, 0))
    self._tableScoreText:setOpacity(255 * 0.5)
    self._tableScoreText:setTextColor(cc.c3b(0, 0, 0))
end

--根据桌布背景2D/3D显示水印
function RoomCenterInfoView:updateTableBgProp()
    self:updateTableText()
    if not self._propTableBgPanel then return end
    local inUse = XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.TABLE)
    if inUse then
        self._propTableBgPanel:removeAllChildren()
        return
    end
    local tableBgData = CF.roomData:getSelfTableBgData() or {}
    local GameBagUILogic = CF.gameRequire("Modules.GameBag.UILogic")
    if next(tableBgData) then
        local tableBgUrl = tableBgData[1].img_url
        if CF.settingData:getTableStyle() == TABLE_BG_STYPE.THREE_D then
            GameBagUILogic.showTableBg(self._propTableBgPanel, tableBgUrl, cc.size(0,-60), nil, cc.p(1,0.7))
        else
            GameBagUILogic.showTableBg(self._propTableBgPanel, tableBgUrl)
        end
    end
end

function RoomCenterInfoView:onTableBgIs2DChanged(event)
    self:updateTableBgProp()
end

function RoomCenterInfoView:initCenterRoomInfo()
end

function RoomCenterInfoView:updateRoomIdImg()
end

function RoomCenterInfoView:onMsgScoreTableShowTurn(event)
    if not event.msg then return end
    local msgScoreTableShowTurn = event.msg.msgData or {}
    local sScore = msgScoreTableShowTurn.sScore or 0
    if self._tableScoreText then
        self._tableScoreText:setString("桌面分数:" .. sScore)
        local textSize = self._tableScoreText:getContentSize()
        self._tableScoreALLBg:setContentSize(cc.size(textSize.width + 30, textSize.height + 10))
    end
    self:updateTableText()
end

return RoomCenterInfoView