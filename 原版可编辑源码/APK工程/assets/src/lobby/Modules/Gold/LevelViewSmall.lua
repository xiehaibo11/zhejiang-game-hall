local LevelView = require("lobby.Modules.Gold.LevelView")
local LevelViewSmall = class("LevelView",LevelView)

function LevelViewSmall:getCSBPath()
    return "cocosStudio/hall/CSB/goldroom/GoldLevelLayer_2.csb" 
end

function LevelViewSmall:getBindingInfo()
    return {
        -- 金币场相关
        ["_KW_UI_GOLD_LEVEL_ROOT"] = { varName = "_goldLevelRoot" },
        ["_KW_ITEM_CONTAIN"] = { varName = "_itemContain" },
        ["_KW_UI_GOLD_LEVEL_ITEM_1"] = { varName = "_goldLevelItem1" },
        ["_KW_UI_GOLD_LEVEL_ITEM_2"] = { varName = "_goldLevelItem2" },
        ["_KW_UI_GOLD_LEVEL_ITEM_3"] = { varName = "_goldLevelItem3" },
        ["_KW_UI_CLOSE_BTN"] = { varName = "_closeBtn",type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose"  },
    }
end

function LevelViewSmall:createLevelItem()
    local roomInfo = self._roomInfo
    for i = 1, #self._roomLevelInfos do
        local roomLevelInfo = self._roomLevelInfos[i]
        local itemType = roomLevelInfo.itemType or 1
        local itemNode = self["_goldLevelItem"..itemType]:clone()
        self._itemContain:addChild(itemNode)
        local posNode = XH.UITool.seekNodeByName(self._itemContain, "KW_POS_" .. i)
        if posNode then 
            itemNode:setPosition(posNode:getPosition())
        end 
        itemNode:setVisible(true)

        local roomDesc
        if roomLevelInfo.maxrich >= 40000000 or roomLevelInfo.maxrich == -1 then
            roomDesc = self:getRichString(roomLevelInfo.minrich) .. "以上"
        else
            roomDesc = self:getRichString(roomLevelInfo.minrich) .. "-" .. self:getRichString(roomLevelInfo.maxrich)
        end

        local baseTxt = XH.UITool.seekNodeByName(itemNode, "KW_UI_GOLD_BASE_SCORE")
        if baseTxt then
            baseTxt:setString(roomLevelInfo.basescore)
            local plusText = XH.UITool.seekNodeByName(baseTxt, "KW_TEXT_PLUS")
            if plusText then 
                plusText:setPositionX(baseTxt:getContentSize().width)
            end
        end
        XH.UITool.setText(itemNode, "KW_UI_GOLD_LIMIT","准入:" .. roomDesc)
        XH.UITool.setText(itemNode, "KW_UI_LEVEL_NAME",roomInfo.roomName[i])
        XH.UITool.loadTexture(itemNode, "KW_UI_PLAY_TYPE", roomInfo.playTypeImage[i], ccui.TextureResType.plistType)
        XH.UITool.loadTexture(itemNode, "KW_UI_PROMOTE", roomInfo.roomPromoteImage[i], ccui.TextureResType.plistType)
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

return LevelViewSmall