local RoomCenterInfoView = CF.gameClass("RoomCenterInfoView", CF.ViewBase)

function RoomCenterInfoView:ctor()
    RoomCenterInfoView.super.ctor(self)
    self:initUI()
end

function RoomCenterInfoView:getCSBPath()
    return CF.gameResourceRootPath .. "DarkShuangKou/GameLayer/CSB/RoomCenterInfoLayer.csb"
end

function RoomCenterInfoView:getBindingInfo()
    return {
        ["_KW_GAMELAYER_BG"] = {varName = "_imgTableBg"},
        ["_KW_PANEL_TABLE_BG"] = {varName = "_propTableBgPanel"},
        ["_KW_PANEL_CENTER_TOP_INFO"] = {varName = "_centerTopInfoPanel"},
        ["_KW_IMG_LOGO"] = {varName = "_imgLogo"},
        ["_KW_TEXT_GAME_RULE_"] = {varName = "_gameRuleLabel", beginIndex = 1, endIndex = 2}
    }
end

function RoomCenterInfoView:getProxyEvents()
    return {
        {module = CF.goldManager, eventKeyName = "EVENT_MATCH_STATUS_CHANGE", callBack = "onMatchStatusEvent"},
        {module = CF.goldManager, eventKeyName = "EVENT_MATCH_FLAG_SHOW", callBack = "onMatchFlagShowEvent"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_RULE_CHANGED", callBack = "onGameRuleChanged"}
    }
end

function RoomCenterInfoView:initUI()
    self:updateTableBg()
end

function RoomCenterInfoView:updateTableBg()
    local fileNames = {
        "res/tex/image/background_1.jpg",
        "res/tex/image/background_2.jpg",
        "res/tex/image/background_3.jpg",
        "res/tex/image/background_3.jpg"
    }
    local tableBgFileStr = "res/tex/image/background_1.jpg"
    pcall(
        function()
            if fileNames[CF.roomData:getRoomLevel()] then
                tableBgFileStr = fileNames[CF.roomData:getRoomLevel()]
            end
        end
    )
    if cc.FileUtils:getInstance():isFileExist(tableBgFileStr) then
        if self._imgTableBg then
            self._imgTableBg:loadTexture(tableBgFileStr, ccui.TextureResType.localType)
            self._imgTableBg:setVisible(true)
        end
    end
end

--游戏规则更新
function RoomCenterInfoView:onGameRuleChanged(event)
    local msgData = CF.game:getModule("GameLayer"):getGameData():getGameInfo()

    local roomLevelName = ""
    pcall(
        function()
            local getGlobalDefine = CF.getGlobalDefine("GOLD_LEVEL_DEFAULT_NAME")
            roomLevelName = getGlobalDefine[CF.roomData:getRoomLevel()]
        end
    )
    local rule = string.format("暗斗双扣%s   每轮封顶   %s金币", roomLevelName, CF.StringTool.numberToStringNew(msgData.iMaximumLimit, 2))
    self._gameRuleLabel1:setString(rule)
    self:updateTableBg()
end

function RoomCenterInfoView:onMatchStatusEvent(event)
    local show = event.msg.show or false
    self:updateTableBg()
    self._centerTopInfoPanel:setVisible(not show)
end

function RoomCenterInfoView:onMatchFlagShowEvent(event)
    local show = event.msg.show or false
    self:updateTableBg()
    self._centerTopInfoPanel:setVisible(not show)
end

return RoomCenterInfoView
