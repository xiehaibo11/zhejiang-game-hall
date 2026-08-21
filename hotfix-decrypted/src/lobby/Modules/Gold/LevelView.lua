local LevelView = class("LevelView", XH.ViewBase)

local KW_DATA_SET_LEVEL = {
    [2] = "KW_GOLD_LEVEL_MID_TIPS",
    [3] = "KW_GOLD_LEVEL_HIGH_TIPS",
}

function LevelView:getCSBPath()
    return "cocosStudio/hall/CSB/goldroom/GoldLevelLayer.csb" 
end

function LevelView:getBindingInfo()
    return {
        -- 金币场相关
        ["_KW_UI_GOLD_LEVEL_ROOT"] = { varName = "_goldLevelRoot" },
        ["_KW_ITEM_LIST"] = { varName = "_itemList" },
        ["_KW_UI_GOLD_LEVEL_ITEM"] = { varName = "_goldLevelItem" },
        ["_KW_UI_CLOSE_BTN"] = { varName = "_closeBtn",type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose"  },
        ["_KW_UI_GOLD_LZDDZ_ITEM"] = { varName = "_KW_UI_GOLD_LZDDZ_ITEM",type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventGoldScene"  },
    }
end

function LevelView:getProxyEvents()
    return {
        { module = XH.goldConfigManager, eventKeyName = "GOLD_EVENT_SHOWPLAYER_COUNT", callBack = "onRespGoldPlayerCount" },
    }
end

function LevelView:ctor(confID, gameID)
    self._confID = confID
    LevelView.super.ctor(self)
	self._roomConf = XH.goldConfigManager:getGoldRoomInfoByIndex(confID)
    self._roomInfo = self._roomConf.roomInfo
    self._gameID = gameID
    self._roomLevelInfos = self._roomConf.roomLevelInfos
    self:createLevelItem()
end

function LevelView:getRichString(rich)
    if rich < 0 then
        return 1000
    end
    if rich < 10000 then
        return rich
    end
    if rich < 100000000 then
        return rich / 10000 .. "万"
    end
    return rich / 100000000 .. "亿"
end

-- 判断是否显示连炸斗地主
function LevelView:isShowGoldScene()
    if not XH.lobby:getModule("NewGoldScene"):getIconVisible() then
        return false
    end
    if not string.find(self._roomInfo.GameTitle, "斗地主") then
        return false
    end
    return false
end

-- 显示连炸斗地主
function LevelView:judgeShowGoldScene()
    if not self:isShowGoldScene() then
        return
    end
    local tempItem = self._KW_UI_GOLD_LZDDZ_ITEM:clone()
    tempItem:setVisible(true)
    self._itemList:addChild(tempItem)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.NEW_GOLD_THROW_ERQI_3, nil, { area_id = XH.areaData:getAreaID() })
end

function LevelView:onTouchEventGoldScene()
    XH.lobby:getModule("Lobby"):enterNewGold()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.NEW_GOLD_THROW_ERQI_4, nil, { area_id = XH.areaData:getAreaID() })
    self:close()
end

function LevelView:createLevelItem()
    local roomInfo = self._roomInfo
    local reqData = {}
    self:judgeShowGoldScene()
    for i = 1, #self._roomLevelInfos do
        local tempItem = self._goldLevelItem:clone()
        local roomLevelInfo = self._roomLevelInfos[i]
        local node = XH.UITool.seekNodeByName(tempItem, "_KW_UI_GOLD_LEVEL_ITEM")
        if node and roomInfo.roomFlagImage and #roomInfo.roomFlagImage > 0 then
            self:loadTexture(node,roomInfo.roomFlagImage[i])
        end

        if node and roomInfo.BaseScoreImage and roomInfo.BaseScoreImage ~= "" then
            XH.UITool.loadTexture(tempItem, "KW_IMAGE_DIFEN", roomInfo.BaseScoreImage, ccui.TextureResType.plistType)
            XH.UITool.setTextColor(tempItem, "KW_UI_GOLD_LIMIT",cc.c3b(29, 78, 101))
        end

        local roomDesc
        if roomLevelInfo.maxrich == -1 then
            roomDesc = self:getRichString(roomLevelInfo.minrich) .. "以上"
        else
            roomDesc = self:getRichString(roomLevelInfo.minrich) .. "-" .. self:getRichString(roomLevelInfo.maxrich)
        end

        XH.UITool.setText(tempItem, "KW_UI_GOLD_LIMIT","准入:" .. roomDesc)
        XH.UITool.setText(tempItem, "KW_UI_GOLD_BASE_SCORE",roomLevelInfo.basescore)

        if roomLevelInfo.gameid == 30117 and roomLevelInfo.roomnameflag == 4 then
            XH.UITool.setVisible(tempItem, "KW_IMG_FLAG_7CS", true)
        else
            XH.UITool.setVisible(tempItem, "KW_IMG_FLAG_7CS", false)
        end

        tempItem:addTouchEventListener(handler(self, self.onJoinGoldRoomTouchEvent))

        local tempInfo = {}
        tempInfo.ConfID = self._confID
        tempInfo.Level = roomInfo.roomFlag[i] or -1
        if type(roomInfo.SrsGroupId) == "table" then
            tempInfo.SrsGroupId = roomInfo.SrsGroupId[i]
        end
        local level = roomInfo.roomFlag[i] or 0
        if level == 3 then
            level = 4
        end

        tempItem.roomInfo = tempInfo or nil
        -- local pos = self:getPositionByIndex(i)
        -- tempItem:setPosition(pos)
        self._itemList:addChild(tempItem)
        tempItem:setVisible(true)
        -- self._goldLevelRoot:addChild(tempItem,#self._roomLevelInfos - i)
        reqData[i] = {}
        reqData[i].gameID = roomInfo.GameID
        reqData[i].level = level

        if self._roomInfo.GoldActRoomType and self._roomInfo.GoldActRoomType[tempInfo.Level] ~= nil and self._roomInfo.GoldActRoomType[tempInfo.Level] ~= "" then
            local goldActQiPao = XH.UITool.seekNodeByName(tempItem, "_KW_GOLD_PLAY_QIPAO")
            if goldActQiPao then
                goldActQiPao:setVisible(true)
                local text = XH.UITool.seekNodeByName(goldActQiPao, "_KW_GOLD_PLAY_QIPAO_TEXT")
                local btn = XH.UITool.seekNodeByName(goldActQiPao, "_KW_GOLD_PALY_JOIN_BTN")
                if text then
                    text:setString(self._roomInfo.GoldActRoomType[tempInfo.Level])
                end
                if btn then
                    btn:addTouchEventListener(handler(self, self.onJoinGoldRoomTouchEvent))
                    btn.roomInfo = tempInfo or nil
                end
            end
            
        else
            local goldActQiPao = XH.UITool.seekNodeByName(tempItem, "_KW_GOLD_PLAY_QIPAO")
            goldActQiPao:setVisible(false)
        end
    end
    XH.goldConfigManager:reqRoomPlayerCount(reqData)

    local itemCount = #self._itemList:getChildren() 
    if itemCount == 1 then
        self._itemList:setContentSize(cc.size(355,620))
    elseif itemCount == 2 then
        self._itemList:setContentSize(cc.size(870,620))
    elseif itemCount == 3 then
        self._itemList:setContentSize(cc.size(1385,620))
    elseif itemCount > 3 then
        self._itemList:setContentSize(cc.size(1560,620))
    end
end

function LevelView:onRespGoldPlayerCount(event)
    if event.level == 0 then
        return
    end
    for _, node in pairs(self._itemList:getChildren()) do
        if node.roomInfo then
            --判断是否是当前游戏的活动
            local gameLevel = node.roomInfo.Level
            if gameLevel == 3 then
                gameLevel = 4
            end
            if gameLevel == event.level and event.gameID == self._gameID then
                local data = event.data[self._gameID]
                XH.UITool.setVisible(node, "_KW_GAME_PLAYER_COUNT_BG", true)
                XH.UITool.setText(node, "_KW_LABEL_PLAYER_COUNT", data.level[gameLevel])
                return
            end
        end
    end
end

function LevelView:onJoinGoldRoomTouchEvent(send, eventType)   
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local levelInfo = send.roomInfo
    local Score = 0
    if self._roomConf.roomLevelInfos[levelInfo.Level] then
        Score = self._roomConf.roomLevelInfos[levelInfo.Level].basescore
    else
        for _,v in pairs(self._roomConf.roomLevelInfos) do
            if v.roomnameflag == levelInfo.Level then
                Score = v.basescore
            end
        end
    end
    XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.GOLD_GAME_1,{GameName =self._roomInfo.GameTitle,Score = Score})
    local roominfo = XH.goldConfigManager:getGoldRoomInfoByIndex(levelInfo.ConfID)
    XH.lobby:getModule("Gold"):reqJoinGoldRoom(levelInfo.ConfID, levelInfo.Level, levelInfo.SrsGroupId) 
    self:close()
end

function LevelView:onTouchEventClose(send,eventType)
    self:close()
end

function LevelView:loadTexture(node,fileName)
    node:loadTexture(fileName, ccui.TextureResType.plistType)
end

--计算位置
function LevelView:getPositionByIndex(index)
    index = index - 1
    local roomCnt = #self._roomConf.roomLevelInfos
    local itemSize = self._goldLevelItem:getContentSize()
    itemSize.width = itemSize.width + 100
    local displaySize = self._goldLevelRoot:getContentSize()
    local posX = displaySize.width / 2
    if roomCnt % 2 == 0 then
        posX = posX + ((index + 0.5 - roomCnt/2) * itemSize.width)
    else
        posX = posX + ((index - math.floor(roomCnt/2)) * itemSize.width)
    end

    return cc.p(posX, displaySize.height / 2)
end

return LevelView
   �"  