local RoomCenterInfoView = CF.gameClass("RoomCenterInfoView", CF.ViewBase)

function RoomCenterInfoView:ctor()
    RoomCenterInfoView.super.ctor(self)
    self:initUI()
end

function RoomCenterInfoView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/RoomCenterInfoLayer.csb"
end

function RoomCenterInfoView:getBindingInfo()
    return {
        ["_KW_GAMELAYER_BG"] = {varName = "_imgTableBg"},
        ["_KW_PANEL_TABLE_BG"] = {varName="_propTableBgPanel"},
        ["_KW_PANEL_CENTER_TOP_INFO"] = {varName = "_centerTopPanel"},
        ["_KW_IMG_GAME_ROOM_ID"] = {varName = "_centerRoomIdImg"},
        ["_KW_TEXT_GAME_ROOM_ID"] = {varName = "_centerRoomIdText"},
        ["_KW_IMG_GAME_RULE_BG"] = {varName = "_gameRuleBg"},
        ["_KW_TEXT_GAME_RULE"] = {varName = "_gameRuleLabel"},
        ["_KW_LOGO_BG"] = {varName = "_gameLogo"},
        ["_KW_PANEL_BASESCORE"] = {varName = "_baseScorePanel"},
        ["_KW_TEXT_BASESCORE"] = {varName = "_baseScoreText"},
        ["_KW_IMG_BOTTOM"] = {varName = "_KW_IMG_BOTTOM"},
    }
end

function RoomCenterInfoView:getProxyEvents()
    return {
        {module = CF.roomData, eventKeyName = "EVENT_GAME_PLAYCOUNT_CHANGED", callBack = "onPlayCountChanged"},
        {module = CF.roomData, eventKeyName = "EVENT_GAMERULE_CHANGED", callBack = "onGameRuleChanged"},
        {module = CF.roomData, eventKeyName = "EVENT_TABLE_BG_PROP_CHANGED", callBack = "onTableBgPropChanged" },
        {module = CF.settingData, eventKeyName = "EVENT_CLEAR_MODEL", callBack = "onEventClearModel" },--纯净模式    

        {module = CF.roomData, eventKeyName = "EVENT_BASESCORE_CHANGED", callBack = "onBaseScoreChanged"},
        {module = CF.game:getModule("Player"), eventKeyName = "EVENT_HIDE_BASE_SCORE", callBack = "hideBaseScore" },
        {module = CF.game:getModule("RoomInfo"), eventKeyName = "EVENT_HIDE_BASE_SCORE", callBack = "hideBaseScore" },
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_START", callBack = "onGameStart" },
        { module = CF.goldManager, eventKeyName = "EVENT_MATCH_STATUS_CHANGE", callBack = "onMatchStatusEvent" },
    }
end

function RoomCenterInfoView:initUI()
    self:updateTableBg()
    self:initCenterRoomInfo()
    self:updateLogo()
end

function RoomCenterInfoView:updateTableText()
    local isUse = XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.TABLE)
    local opacity = CF.roomData:is50Match() and 0.35 or 0.5
    self._gameRuleLabel:setOpacity(255 * opacity)
    self._gameRuleLabel:setTextColor(cc.c3b(0, 0, 0))
    self._gameRuleBg:setVisible(false)
end

function RoomCenterInfoView:updateTableBg()
    self:updateTableText()
    local tableBgFileStr = self:getTableBgFileStr()
    if cc.FileUtils:getInstance():isFileExist(tableBgFileStr) and not XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.TABLE) then
        if self._imgTableBg then
            self._imgTableBg:loadTexture(tableBgFileStr, ccui.TextureResType.localType)
            self._imgTableBg:setVisible(true)
        end
        local ruleTab = string.split(tableBgFileStr,"/")
        if #ruleTab > 0 then
            CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.GAME_SET_DESK_BG, {bg = ruleTab[#ruleTab], gameName = CF.gameSub:getGameNameByGameId()})
        end
    else
        self._imgTableBg:setVisible(false)
    end
    if CF.roomData and CF.roomData:isNewUI() then
        self._imgTableBg:ignoreContentAdaptWithSize(false)
        self._imgTableBg:setContentSize(self._imgTableBg:getVirtualRendererSize())
        local bgSize = self._imgTableBg:getContentSize()
        local screenSize = cc.Director:getInstance():getWinSize()
        local scaleX = screenSize.width / bgSize.width
        local scaleY = screenSize.height / bgSize.height
        local scale = scaleX > scaleY and scaleX or scaleY
        self._imgTableBg:setScale(scale)
        self._KW_IMG_BOTTOM:setVisible(true)
    end
end

function RoomCenterInfoView:getTableBgFileStr()
    return ""
end

--显示桌布水印
function RoomCenterInfoView:updateTableBgProp()
    if not self._propTableBgPanel then return end
    local inUse = XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.TABLE)
    if inUse then
        self._propTableBgPanel:removeAllChildren()
        return
    end
    local tableBgData = CF.roomData:getSelfTableBgData() or {}
    if next(tableBgData) and not CF.settingData:getIsMahlayer3D() then
        local tableBgUrl = tableBgData[1].img_url
        local GameBagUILogic = CF.gameRequire("Modules.GameBag.UILogic")
        GameBagUILogic.showTableBg(self._propTableBgPanel, tableBgUrl)
    else
        local GameBagUILogic = CF.gameRequire("Modules.GameBag.UILogic")
        GameBagUILogic.showTableBg(self._propTableBgPanel, "")
    end
end

function RoomCenterInfoView:onEventClearModel()
    self:updateTableBgProp()
end

--桌布
function RoomCenterInfoView:onTableBgPropChanged(event)
    self:updateTableBgProp()
end

function RoomCenterInfoView:initCenterRoomInfo()
    if CF.roomData:isGoldRoom() then
        self._centerTopPanel:setVisible(false)
    end
    self._centerRoomIdText:setString(CF.game:getModule("RoomInfo"):getShowRoomID())
end

function RoomCenterInfoView:updateRoomIdImg()
    local playCount = CF.roomData:getPlayCount()
    self._centerRoomIdImg:setVisible(playCount == 0 and not CF.roomData:isGoldRoom())
end

function RoomCenterInfoView:onPlayCountChanged(event)
    if tolua.isnull(self) or not self.updateRoomIdImg then
        return
    end
    self:updateRoomIdImg()
end

--游戏规则更新
function RoomCenterInfoView:onGameRuleChanged(event)
    local ruleStr = CF.roomData:getGameRule()
    self:setCenterRuleString(ruleStr)
end

function RoomCenterInfoView:setCenterRuleString(ruleStr)
    if CF.roomData:is50Match() and not CF.gameSub:isMahjong(CF.roomData:getGameID()) then
        self:setGoldRuleString()
        return
    end
    if CF.gameSub.getGameNameByGameId then
        ruleStr = CF.gameSub:getGameNameByGameId() .. ":" .. ruleStr
    end
    self._gameRuleLabel:setString(ruleStr)
    local textSize = self._gameRuleLabel:getContentSize()
    self._gameRuleBg:setContentSize(cc.size(textSize.width + 30, textSize.height + 10))
end

function RoomCenterInfoView:onGameStart(event)
    if CF.roomData and CF.roomData:isNewUI() then
        self._baseScorePanel:setVisible(true)
        local getGlobalDefine = CF.getGlobalDefine("GOLD_LEVEL_DEFAULT_NAME")
        local roomLevelName = getGlobalDefine[CF.roomData:getRoomLevel()%10]
        self._baseScoreText:setString((roomLevelName and roomLevelName .. "-" or "") .. "底分" .. CF.roomData:getBaseScore())
    end
end

function RoomCenterInfoView:hideBaseScore(event)
    if CF.roomData and CF.roomData:isNewUI() then
        self._baseScorePanel:setVisible(true)
        self._baseScoreText:setString("底分--")
    end
end

function RoomCenterInfoView:onBaseScoreChanged(event)
    if CF.roomData and CF.roomData:isNewUI() then
        local getGlobalDefine = CF.getGlobalDefine("GOLD_LEVEL_DEFAULT_NAME")
        local roomLevelName = getGlobalDefine[CF.roomData:getRoomLevel()%10]
        local strScore = CF.roomData:getIsGameStart() and ("底分" .. CF.roomData:getBaseScore()) or "底分--"
        strScore = (roomLevelName and roomLevelName .. "-" or "") .. strScore
        self._baseScoreText:setString(strScore)
    end
end

function RoomCenterInfoView:updateLogo()
    if CF.roomData and CF.roomData:isNewUI() then
        self._gameLogo:setVisible(true)
        local strImg = "img_game_txt_qbbw.png"
        self._gameLogo:loadTexture(strImg, ccui.TextureResType.plistType)
        self._gameLogo:ignoreContentAdaptWithSize(false)
        self._gameLogo:setContentSize(self._gameLogo:getVirtualRendererSize())
    end
end

function RoomCenterInfoView:setGoldRuleString()
    if not CF.roomData:is50Match() then
        return
    end
    local ruleStr = ""
    local gameName = CF.gameSub:getGameNameByGameId() or ""

    local roomLevel = CF.roomData:getRoomLevel()
    local gameID = CF.roomData:getGameID()
    local chairs = CF.roomData:getChairs()
    local confID = CF.goldConfigManager:getConfIDByGameID(gameID, chairs, roomLevel)
    
    if not confID then return end
    
    local goldInfo = CF.goldConfigManager:getGoldRoomInfoByIndex(confID)
    if not goldInfo or not goldInfo.roomInfo then return end

    local levelIndex = roomLevel % 10
    local defaultName = XH.GOLD_LEVEL_DEFAULT_NAME[levelIndex] or ""
    local roomName = goldInfo.roomInfo.roomName or {}
    local customName = roomName[levelIndex] or ""
    local levelName = (customName ~= "") and customName or defaultName
    ruleStr = gameName .. "·" .. levelName
    self._gameRuleLabel:setString(ruleStr)
    self._centerTopPanel:setVisible(true)
end

function RoomCenterInfoView:onMatchStatusEvent(event)
    local show = event.msg.show or false
    if show then
        self:onBaseScoreChanged()
    end
end

return RoomCenterInfoView