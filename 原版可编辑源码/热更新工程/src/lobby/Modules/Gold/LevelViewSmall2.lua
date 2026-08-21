local LevelView = require("lobby.Modules.Gold.LevelView")
local LevelViewSmall2 = class("LevelView", LevelView)

function LevelViewSmall2:getCSBPath()
    return "cocosStudio/hall/CSB/goldroom/GoldLevelLayer_3.csb"
end

function LevelViewSmall2:getBindingInfo()
    return {
        -- 金币场相关
        ["_KW_UI_GOLD_LEVEL_ROOT"] = {varName = "_goldLevelRoot"},
        ["_KW_ITEM_CONTAIN"] = {varName = "_itemContain"},
        ["_KW_UI_GOLD_LEVEL_ITEM_1"] = {varName = "_goldLevelItem1"},
        ["_KW_UI_GOLD_LEVEL_ITEM_2"] = {varName = "_goldLevelItem2"},
        ["_KW_UI_GOLD_LEVEL_ITEM_3"] = {varName = "_goldLevelItem3"},
        ["_KW_UI_CLOSE_BTN"] = {varName = "_closeBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose"}
    }
end

function LevelViewSmall2:createLevelItem()
    local roomInfo = self._roomInfo
    for i = 1, #self._roomLevelInfos do
        local roomLevelInfo = self._roomLevelInfos[i]
        local itemType = roomLevelInfo.itemType or 1
        local itemNode = self["_goldLevelItem" .. itemType]:clone()
        self._itemContain:addChild(itemNode)
        local posNode = XH.UITool.seekNodeByName(self._itemContain, "KW_POS_" .. i)
        if posNode then
            itemNode:setPosition(posNode:getPosition())
        end
        itemNode:setVisible(true)

        local roomDesc
        if roomLevelInfo.maxrich == -1 then
            roomDesc = self:getRichString(roomLevelInfo.minrich) .. "以上"
        else
            roomDesc = self:getRichString(roomLevelInfo.minrich) .. "-" .. self:getRichString(roomLevelInfo.maxrich)
        end

        XH.UITool.setText(itemNode, "KW_UI_GOLD_BASE_SCORE", roomLevelInfo.basescore)
        XH.UITool.setText(itemNode, "KW_UI_GOLD_LIMIT", "准入:" .. roomDesc)
        XH.UITool.setText(itemNode, "KW_UI_LEVEL_NAME", roomInfo.roomName[i])
        if roomInfo.playTypeImage and roomInfo.playTypeImage[i] ~= "" then
            XH.UITool.setVisible(itemNode, "KW_UI_PLAY_TYPE", true)
            XH.UITool.loadTexture(itemNode, "KW_UI_PLAY_TYPE", roomInfo.playTypeImage[i], ccui.TextureResType.plistType)
        else
            XH.UITool.setVisible(itemNode, "KW_UI_PLAY_TYPE", false)
        end
        if roomInfo.roomPromoteImage and roomInfo.roomPromoteImage[i] ~= "" then
            XH.UITool.setVisible(itemNode, "KW_UI_PROMOTE", true)
            XH.UITool.loadTexture(itemNode, "KW_UI_PROMOTE", roomInfo.roomPromoteImage[i], ccui.TextureResType.plistType)
        else
            XH.UITool.setVisible(itemNode, "KW_UI_PROMOTE", false)
        end
        local tempInfo = {}
        tempInfo.ConfID = self._confID
        tempInfo.Level = roomInfo.roomFlag[i] or -1
        if type(roomInfo.SrsGroupId) == "table" then
            tempInfo.SrsGroupId = roomInfo.SrsGroupId[i]
        end

        itemNode:addTouchEventListener(handler(self, self.onJoinGoldRoomTouchEvent))
        itemNode.roomInfo = tempInfo or nil
    end
end

function LevelViewSmall2:onJoinGoldRoomTouchEvent(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local levelInfo = send.roomInfo
    local Score = 0
    local minrich = 0
    if self._roomConf.roomLevelInfos[levelInfo.Level] then
        Score = self._roomConf.roomLevelInfos[levelInfo.Level].basescore
        minrich = self._roomConf.roomLevelInfos[levelInfo.Level].minrich
    else
        for _, v in pairs(self._roomConf.roomLevelInfos) do
            if v.roomnameflag == levelInfo.Level then
                Score = v.basescore
                minrich = v.minrich
            end
        end
    end
    if XH.playerData:getSR() > minrich and self._gameID == 30579 then
        local showTeaching = cc.UserDefault:getInstance():getBoolForKey("KW_TEST_DARKSHUANGKOU_SHOW_TEACHING", false)
        local gifts = XH.lobby:getModule("TeachingGift"):getGifts()
        local isShow = XH.lobby:getModule("TeachingGift"):getDarkShuangKouTeachingABTest()
        if (#gifts > 1 and isShow) or showTeaching == true then
            XH.roomManager:gameStart({gameID = 30579, appID = 1, srsGroupID = 1, roomID = 0, roomMode = XH.ROOM_MODE.MOBILE, teaching = true, is50 = true})
            return
        end
    end
    XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.GOLD_GAME_1, {GameName = self._roomInfo.GameTitle, Score = Score})
    local roominfo = XH.goldConfigManager:getGoldRoomInfoByIndex(levelInfo.ConfID)
    XH.lobby:getModule("Gold"):reqJoinGoldRoom(levelInfo.ConfID, levelInfo.Level, levelInfo.SrsGroupId)
    XH.userDefault:setValue(XH.userDefault.KEY_ID.LAST_JOIN_GOLD_GAME_ID, levelInfo.ConfID)
    XH.userDefault:setValue(XH.userDefault.KEY_ID.LAST_JOIN_GOLD_LEVEL, levelInfo.Level)
    self:close()
end

return LevelViewSmall2
