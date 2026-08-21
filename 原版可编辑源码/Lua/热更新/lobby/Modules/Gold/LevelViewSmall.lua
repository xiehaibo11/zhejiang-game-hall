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
        ["_KW_UI_FISH_ITEM"] = { varName = "_fishItem" ,type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventFishItem" },
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
        if itemNode and roomInfo.roomFlagImage and #roomInfo.roomFlagImage > 0 and roomInfo.roomFlagImage[i] ~= "" then
            self:loadTexture(itemNode,roomInfo.roomFlagImage[i])
        end
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
        if not roomInfo.playTypeImage then
            XH.UITool.setVisible(itemNode, "KW_UI_PLAY_TYPE",false)
        else
            XH.UITool.loadTexture(itemNode, "KW_UI_PLAY_TYPE", roomInfo.playTypeImage[i], ccui.TextureResType.plistType)
        end
        XH.UITool.setVisible(itemNode, "KW_UI_PROMOTE", false)
        if roomInfo.roomTitle and roomInfo.roomTitle[i] and roomInfo.roomTitle[i] ~= '' then
            XH.UITool.setVisible(itemNode, "KW_UI_PROMOTE", true)
            XH.UITool.setText(itemNode, "KW_TEXT_LEVEL_TITLE", roomInfo.roomTitle[i])
            -- 设置描边颜色以及透明度
            XH.UITool.enableOutline(itemNode, "KW_TEXT_LEVEL_TITLE", cc.c4b(13, 49, 19, 77), 3)
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
    if self._fishItem then 
        self._fishItem:setVisible(false)
    end 
end

function LevelViewSmall:onTouchEventFishItem(send, eventType)
    local throwDataID = XH.NewThrowDataDefine.jb24101703
    local gameID = 0
    local gameName = ""
    if self._roomInfo then 
        gameID = self._roomInfo.GameID or 0
        gameName = self._roomInfo.GameTitle or ""
    end 
    local areaIDAndGameID = XH.areaData:getAreaID() .. "_" .. gameID
    XH.NewThrowDataManager:throwData(throwDataID, {page_label = "联运",block_label = "人人捕鱼",item_id = gameName,game_id = areaIDAndGameID })

    if XH.lobby:getModule("RRBuYu"):isDownloading() then 
        XH.TipTool.showToast("正在加载中，请稍等...", 3)
        return
    end

    local enterRRBY = function()
        if device.platform == "android" then
            XH.lobby:getModule("RRBuYu"):isDownloadCompleted(true)
            XH.lobby:getModule("Replugin"):postToSepperllitaPlugin(1)
        elseif device.platform == "ios" then
            XH.lobby:getModule("RRBuYu"):joinInRRBuyu()
        end
    end
    local position = XH.playerData:getPlayerPosition()
    if position.gameID ~= 0 then
        XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK_CANCEL,
            funcOK = function()
                enterRRBY()
            end
        }, "当前正在对局中，是否前往？")
        return
    end
    enterRRBY()
end

return LevelViewSmall