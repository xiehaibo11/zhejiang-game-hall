-- 升场UI
local ChangeLevelView = CF.gameClass("ChangeLevelView", CF.ViewBase)

local KW_MAHJONG_POSITION = cc.p(1560, 300)

local KW_GAME_TYPE = {
    MAHJONG = "mahjong"
}

function ChangeLevelView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/ChangeLevelLayer.csb"
end

function ChangeLevelView:getBindingInfo()
    return {
        -- 游戏区转场
        ["_KW_PANEL_LEVEL_CHANGE"] = {varName = "_panelGoldChange"},
        ["_KW_TEXT_CHANGE_GOLD"] = {varName = "_textGoldRoomName"},
        ["_KW_BTN_GOLD_CHANGE"] = {varName = "_btnGoldChange", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onGoldChangeClicked"},
        ["_KW_BTN_GOLD_CLOSE"] = {varName = "_btnGoldClose", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onPanelLevelChangeClose"}
    }
end

function ChangeLevelView:ctor(param)
    param = param or {}
    ChangeLevelView.super.ctor(self, param)
    self._goldNums = param.score or 0
    if param.gameType and param.gameType == KW_GAME_TYPE.MAHJONG then
        self._panelGoldChange:setPosition(KW_MAHJONG_POSITION)
    end
    self:setGoldLevelMsg()
end

function ChangeLevelView:getProxyEvents()
    return {
        {module = CF.game:getModule("ChangeLevel"), eventKeyName = "EVENT_GAME_SCORE_CHANGE", callBack = "onRefrshGoldLevel"},
        {module = CF.game:getModule("ChangeLevel"), eventKeyName = "EVENT_GAME_STATUS_CHANGE", callBack = "closeView"},
        {module = CF.goldManager, eventKeyName = "EVENT_GAME_START_CHANGE", callBack = "closeView"}
    }
end

--将窗体显示到屏幕
function ChangeLevelView:showSelf(zOrder)
    zOrder = zOrder or CF.ZORDER.WINDOW
    local runningScene = display.getRunningScene()
    runningScene:addChild(self, zOrder)
    return self
end

function ChangeLevelView:onGoldChangeClicked(send, eventType)
    local level = cc.UserDefault:getInstance():getIntegerForKey("_KW_DATA_LAST_JOIN_GOLD_LEVEL_" .. CF.areaData:getLobbyID())
    if CF.roomData:is50Match() then 
        CF.game:getModule("CenterBtns"):onStartGameEvent(1)
    else 
        CF.goldManager:setChangeLevelType(CF.goldManager.ENUM_CHANGE_TYPE.SIMPLE, level + 1)
        CF.roomManager:reqLeaveRoom(CF.roomData._appID, CF.roomData._srsGroupID)
    end

    if CF.game:getModule("WinLost").hideGoldView then
        CF.game:getModule("WinLost"):hideGoldView()
    else
        self:closeView()
    end
end

function ChangeLevelView:onPanelLevelChangeClose(send, eventType)
    self._panelGoldChange:setVisible(false)
    cc.UserDefault:getInstance():setBoolForKey("isNeedHideAdvertisement", true)
end

function ChangeLevelView:onRefrshGoldLevel(data)
    self._goldNums = data.score
    self:setGoldLevelMsg()
end

function ChangeLevelView:setGoldLevelMsg()
    print("setGoldLevelMsg goldNums .... " .. self._goldNums)
    if CF.roomData:isGoldRoom() and self._goldNums then
        local getGlobalDefine = CF.getGlobalDefine("GOLD_LEVEL_DEFAULT_NAME")
        local level = cc.UserDefault:getInstance():getIntegerForKey("_KW_DATA_LAST_JOIN_GOLD_LEVEL_" .. CF.areaData.getLobbyID())
        local confID = CF.userDefault:getValue(CF.userDefault.KEY_ID.LAST_JOIN_GOLD_INDEX)
        local index = level
        local getGoldRoomInfo = CF.goldConfigManager:getGoldRoomInfoByIndex(confID)
        local isSameRoomType = false
        if getGoldRoomInfo and getGoldRoomInfo.roomInfo and getGoldRoomInfo.roomInfo.roomFlag then
            for i = 1, #getGoldRoomInfo.roomInfo.roomFlag do
                if level == getGoldRoomInfo.roomInfo.roomFlag[i] then
                    index = i
                end
            end
            if getGoldRoomInfo.roomInfo.roomFlag[index + 1] then
                isSameRoomType = math.floor(level / 10) == math.floor(getGoldRoomInfo.roomInfo.roomFlag[index + 1] / 10)
            end
        end
        if getGlobalDefine[(level+1)%10] and getGoldRoomInfo and getGoldRoomInfo.roomInfo and getGoldRoomInfo.roomInfo.SpecialPlayer == 0 then
            self._textGoldRoomName:setText(getGlobalDefine[(level+1)%10])
            if getGoldRoomInfo and getGoldRoomInfo.roomLevelInfos[index + 1] then
                self._panelGoldChange:setVisible(self._goldNums >= getGoldRoomInfo.roomLevelInfos[index + 1].minrich and isSameRoomType)
            end
        end
    else
        self._panelGoldChange:setVisible(false)
    end

    if cc.UserDefault:getInstance():getBoolForKey("isNeedHideAdvertisement") then
        self._panelGoldChange:setVisible(false)
    end
end

function ChangeLevelView:closeView()
    self:close()
end

return ChangeLevelView
*