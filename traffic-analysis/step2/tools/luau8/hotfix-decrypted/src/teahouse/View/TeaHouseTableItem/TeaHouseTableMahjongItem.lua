---@class TeaHouseTableMahjongItem : View
local TeaHouseTableMahjongItem = class("TeaHouseTableMahjongItem", TeaHouse.View)

local KW_MAHJONG_TABLE_PNGS = {
    "tea_house_main_small_bright_table.png",
    "tea_house_main_small_dark_table.png",
}

local KW_MAHJONG_TWO_TABLE_PNGS = {
    "tea_house_main_two_bright_table.png",
    "tea_house_main_two_dark_table.png",
}

local KW_MAHJONG_TABLE_PLIST = "res/cocosStudio/TeaHouse/Image/tea_house_main_view.plist"
local KW_TABLE_COLOR_PLIST = "res/cocosStudio/TeaHouse/Image/tea_house_set_table_color.plist"

TeaHouseTableMahjongItem.PlayersMapping = {
    [1] = {[1] = 1 },
    [2] = {[1] = 1, [2] = 3 },
    [3] = {[1] = 1, [2] = 2, [3] = 3 },
    [4] = {[1] = 1, [2] = 2, [3] = 3, [4] = 4 },
}

--根据规则字段显示缺X色/缺X门
--30066等:DelColor='1';-->缺一色, DelColor='2';-->缺二色
--30133/30145等:isQueYiMen='1';-->缺一门, isQueYiMen='2';-->缺二门
local KW_QUE_MEN_RULE_MAP = {
    [30066] = {
        { pattern = "DelColor='2';",    text = "缺二色" },
        { pattern = "DelColor='1';",    text = "缺一色" },
    },
    [30133] = {
        { pattern = "isQueYiMen='2';",  text = "缺二门" },
        { pattern = "isQueYiMen='1';",  text = "缺一门" },
    },
    [30145] = {
        { pattern = "isQueYiMen='2';",  text = "缺二门" },
        { pattern = "isQueYiMen='1';",  text = "缺一门" },
    },
    [30109] = {
        { pattern = "DelColor='2';",    text = "缺二色" },
        { pattern = "DelColor='1';",    text = "缺一色" },
    },
    [30286] = {
        { pattern = "DelColor='2';",    text = "缺二色" },
        { pattern = "DelColor='1';",    text = "缺一色" },
    },
    [30268] = {
        { pattern = "DelColor='2';",    text = "缺二色" },
        { pattern = "DelColor='1';",    text = "缺一色" },
    },
    [30151] = {
        { pattern = "isWuZiPai='1';",    text = "无字牌" },
    },
    [30025] = {
        { pattern = "DelColor='2';",    text = "缺二色" },
        { pattern = "DelColor='1';",    text = "缺一色" },
    },
}

local KW_MAX_PLAYER_COUNT = 4
local KW_TYPE_TEA_OWNER = 2

TeaHouseTableMahjongItem.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseTableItem/TeaHouseTableMahjongItem.csb",
    binding = {
        ["_KW_PANEL_ROOT"] = { tag = "_KW_PANEL_ROOT", name = "_panelRoot", class = "panel" },
        ["_KW_BTN_TABLE"] = { tag = "_KW_BTN_TABLE", name = "_btnTable", class = "btn", events = "onTableClicked" },
        ["_KW_BTN_CLOSE"] = { tag = "_KW_BTN_CLOSE", name = "_btnClose", class = "btn", events = "onCloseClicked" },
        ["_KW_IMG_ROUND_BG"] = { tag = "_KW_IMG_ROUND_BG", name = "_textRoundBg", class = "img" },
        ["_KW_IMG_ROOM_ID_BG"] = { tag = "_KW_IMG_ROOM_ID_BG", name = "_textRoomIDBg", class = "img" },
        ["_KW_TEXT_ROUND"] = { tag = "_KW_TEXT_ROUND", name = "_textRound", class = "text" },
        ["_KW_TEXT_ROOM_ID"] = { tag = "_KW_TEXT_ROOM_ID", name = "_textRoomID", class = "text" },
        ["_KW_TEXT_RULE_1"] = { tag = "_KW_TEXT_RULE_1", name = "_textRule1", class = "text" },
        ["_KW_TEXT_RULE_2"] = { tag = "_KW_TEXT_RULE_2", name = "_textRule2", class = "text" },
        ["_KW_TEXT_GAME"] = { tag = "_KW_TEXT_GAME", name = "_textGame", class = "text" },
        ["_KW_TEXT_RULE_3"] = { tag = "_KW_TEXT_RULE_3", name = "_textRule3", class = "text" },
        ["_KW_BTN_RULE"] = { tag = "_KW_BTN_RULE", name = "_btnRule", class = "btn" },
        ["_KW_FOUR_TO_TWO_TIP"] = { tag = "_KW_FOUR_TO_TWO_TIP", name = "_tipFourToTwo", class = "img" },
        ["_KW_IMG_TABLE_COLOR"] = {tag = "_KW_IMG_TABLE_COLOR",name = "_imgTableColor",class = "img"},
        ["_KW_PROMOTE_ACT"] = {tag = "_KW_PROMOTE_ACT",name = "_imgPromoteAct",class = "img"},
        ["_KW_BTN_WATCH"] = {tag = "_KW_BTN_WATCH",name = "_KW_BTN_WATCH",class = "img", events = "onTableSeeClicked" },
        ["_KW_BTN_WATCH_VIP"] = {tag = "_KW_BTN_WATCH_VIP",name = "_KW_BTN_WATCH_VIP",class = "img", events = "onTableVipSeeClicked" },
    }
}

TeaHouse.SysTool.mergeCsbBinding(TeaHouseTableMahjongItem.RAW_RES_BINDING_CSB, {
    preKey = "_KW_BTN_SEAT_", startNum = 1, endNum = KW_MAX_PLAYER_COUNT, preName = "_btnSeat", class = "btn"
})
TeaHouse.SysTool.mergeCsbBinding(TeaHouseTableMahjongItem.RAW_RES_BINDING_CSB, {
    preKey = "_KW_IMG_PLAYER_", startNum = 1, endNum = KW_MAX_PLAYER_COUNT, preName = "_imgPlayer", class = "img"
})
TeaHouse.SysTool.mergeCsbBinding(TeaHouseTableMahjongItem.RAW_RES_BINDING_CSB, {
    preKey = "_KW_TEXT_NAME_", startNum = 1, endNum = KW_MAX_PLAYER_COUNT, preName = "_textName", class = "text"
})
TeaHouse.SysTool.mergeCsbBinding(TeaHouseTableMahjongItem.RAW_RES_BINDING_CSB, {
    preKey = "_KW_TEXT_ID_", startNum = 1, endNum = KW_MAX_PLAYER_COUNT, preName = "_textID", class = "text"
})
TeaHouse.SysTool.mergeCsbBinding(TeaHouseTableMahjongItem.RAW_RES_BINDING_CSB, {
    preKey = "_KW_PANEL_HEAD_", startNum = 1, endNum = KW_MAX_PLAYER_COUNT, preName = "_panelHead", class = "panel"
})
TeaHouse.SysTool.mergeCsbBinding(TeaHouseTableMahjongItem.RAW_RES_BINDING_CSB, {
    preKey = "_KW_IMG_OFFLINE_", startNum = 1, endNum = KW_MAX_PLAYER_COUNT, preName = "_imgOffline", class = "img"
})

function TeaHouseTableMahjongItem:ctor()
    TeaHouseTableMahjongItem.super.ctor(self)

    if self._panelRoot then
        self._panelRoot:removeFromParent()
        self:addChild(self._panelRoot)
    end
end

function TeaHouseTableMahjongItem:initMaxPlayerCount(maxPlayerCount)
    for i = 1, KW_MAX_PLAYER_COUNT do
        local btnSeat = self["_btnSeat" .. i]
        if btnSeat then
            btnSeat:setVisible(false)
        end
        local imgPlayer = self["_imgPlayer" .. i]
        if imgPlayer then
            imgPlayer:setVisible(false)
        end
    end
    if maxPlayerCount > KW_MAX_PLAYER_COUNT then
        maxPlayerCount = KW_MAX_PLAYER_COUNT
    end
    local playerMapping = TeaHouseTableMahjongItem.PlayersMapping[maxPlayerCount]
    if playerMapping == nil then
        return
    end
    for i = 1, #playerMapping do
        local seatID = playerMapping[i]
        local btnSeat = self["_btnSeat" .. seatID]
        if btnSeat then
            btnSeat:setVisible(true)
            btnSeat:addTouchEventListener(function(send, eventType)
                self:onSeatClicked(send, eventType, i)
            end)
        end
    end
end

function TeaHouseTableMahjongItem:getSize()
    if self._panelRoot ~= nil then
        return self._panelRoot:getContentSize()
    end
    return cc.size(0, 0)
end

function TeaHouseTableMahjongItem:setRoomID(roomID)
    if roomID == nil then
        if self._textRoomIDBg then
            self._textRoomIDBg:setVisible(false)
        end
    else
        if self._textRoomIDBg then
            self._textRoomIDBg:setVisible(true)
        end
        if self._textRoomID then
            self._textRoomID:setString(string.format("房间号:%06d", roomID))
        end
    end
end

function TeaHouseTableMahjongItem:setRound(round, totalRound)
    if round == nil or totalRound == nil then
        if self._textRoundBg then
            self._textRoundBg:setVisible(false)
        end
    else
        if self._textRoundBg then
            self._textRoundBg:setVisible(true)
        end
        if self._textRound then
            if totalRound < 100 then
                self._textRound:setString(string.format("%d/%d", round, totalRound))
            else
                self._textRound:setString(string.format("%d", round))
            end
        end
    end
end

function TeaHouseTableMahjongItem:setState(isStart, tableSize)
    if not self._btnTable then
        return
    end
    local pngTable = KW_MAHJONG_TABLE_PNGS
    if isStart then
        cc.SpriteFrameCache:getInstance():addSpriteFrames(KW_MAHJONG_TABLE_PLIST)
        self._btnTable:loadTexture(pngTable[1], ccui.TextureResType.plistType)
    else
        cc.SpriteFrameCache:getInstance():addSpriteFrames(KW_MAHJONG_TABLE_PLIST)
        self._btnTable:loadTexture(pngTable[2], ccui.TextureResType.plistType)
    end
end

function TeaHouseTableMahjongItem:setBaseScore(data)
    if self._textRule1 then
        self._textRule1:setVisible(false)
        data = string.gsub(data, ";", ",")
        data = string.gsub(data, "，", ",")
        local itemList = string.split(data, ",")
        if itemList ~= nil then
            for _, item in ipairs(itemList) do
                if string.find(item, "底分") then
                    self._textRule1:setVisible(true)
                    self._textRule1:setString(item)
                    break
                end
            end
        end
    end
end

function TeaHouseTableMahjongItem:setBaseScoreEx(baseScore)
    if self._textRule1 and baseScore then
        self._textRule1:setVisible(true)
        self._textRule1:setString("底分" .. baseScore)
    end
end

function TeaHouseTableMahjongItem:setAutoChange(isShow)
    if self._textRule1 and isShow then
        self._textRule1:setVisible(true)
        self._textRule1:setString("随机落座")
    end
end

function TeaHouseTableMahjongItem:setQueMen(gameid, data)
    if not data or data == "" or not gameid or not KW_QUE_MEN_RULE_MAP[gameid] then
        return
    end
    if not self._textRule1 then
        return
    end
    for _, info in ipairs(KW_QUE_MEN_RULE_MAP[gameid]) do
        if string.find(data, info.pattern, 1, true) then
            self._textRule1:setVisible(true)
            self._textRule1:setString(info.text)
            return
        end
    end
end

function TeaHouseTableMahjongItem:setPayType(payType)
    if self._textRule2 then
        local isCheckPayTypes = true
        local SetupConfig = TeaHouse.manager.configManager.SetupConfig
        if SetupConfig and SetupConfig.IsFixedPayType then
            isCheckPayTypes = false
        end
        if isCheckPayTypes then
            local payTypes = TeaHouse.manager.teahouseData:getPayTypeByID()
            if payTypes and #payTypes == 1 then
                payType = payTypes[1]
            end
        end
        local teahouseData = TeaHouse.manager.teahouseData
        local isLastPay = teahouseData:isLastCost()
        local winPayName = isLastPay and "末位消耗" or "冠军消耗"
        if payType then
            payType = tonumber(payType)
            if payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_OWNER or payType == KW_TYPE_TEA_OWNER then
                local payMode = TeaHouse.manager.teahouseData:getTeaHousePayMode()
                if payMode and payMode == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_FRON then
                    self._textRule2:setString(winPayName)
                else
                    self._textRule2:setString(winPayName)
                end
            elseif payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_PLAYER_AA then
                self._textRule2:setString("平摊消耗")
            elseif payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_AA then
                self._textRule2:setString("平摊消耗")
            elseif payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_ROOM_OWNER then
                self._textRule2:setString("房主消耗")
            elseif payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_PLAYER_OWNER_CARD_AA then
                self._textRule2:setString("平摊消耗")
            elseif payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_AA then
                self._textRule2:setString("平摊消耗")
                if TeaHouse.BridgeData.getLobbyID() == XH.LOBBY_ID.SHAOXING3D then
                    self._textRule2:setString(winPayName)
                end
            elseif payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_WINNER then
                self._textRule2:setString(winPayName)
            elseif payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_PLAYER_OWNER_TEACARD_AA then
                self._textRule2:setString("平摊消耗")
            elseif payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_PLAYER_OWNER_TEACARD_WIN then
                self._textRule2:setString(winPayName)
            elseif payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_OWNER_YUFU_MODE_AA then
                self._textRule2:setString("平摊消耗")
            end
        else
            local payMode = TeaHouse.manager.teahouseData:getTeaHousePayMode()
            if payMode and payMode == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_FRON then
                self._textRule2:setString(winPayName)
            else
                self._textRule2:setString(winPayName)
            end
        end
    end
    if self._btnRule then
        self._btnRule:setPositionPercent(cc.p(1, 0.48))
    end
end

function TeaHouseTableMahjongItem:setGame(text)
    if self._textGame then
        self._textGame:setString(text)
    end
end

function TeaHouseTableMahjongItem:setTableColor(isStart,color)
    if self._imgTableColor and color == 1 then
        self._imgTableColor:setVisible(false)
        return
    else
        self._imgTableColor:setVisible(true)
    end 
    if isStart then                     --开始状态桌子为亮色
        local png = string.format("tea_house_cube_%d_bright.png", color)
        cc.SpriteFrameCache:getInstance():addSpriteFrames(KW_TABLE_COLOR_PLIST)
        self._imgTableColor:loadTexture(png, ccui.TextureResType.plistType)
    else
        local png = string.format("tea_house_cube_%d_dark.png", color)
        cc.SpriteFrameCache:getInstance():addSpriteFrames(KW_TABLE_COLOR_PLIST)
        self._imgTableColor:loadTexture(png, ccui.TextureResType.plistType)
    end
end

function TeaHouseTableMahjongItem:setIsAutoReady(isAutoReady)
    if self._textRule3 then
        if isAutoReady then
            self._textRule3:setString("自动准备")
        else
            self._textRule3:setString("")
        end
    end
end

function TeaHouseTableMahjongItem:onTableClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
end

function TeaHouseTableMahjongItem:onCloseClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
end

function TeaHouseTableMahjongItem:onSeatClicked(send, eventType, seatID)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
end

function TeaHouseTableMahjongItem:updatePromoteIcon(isShow)
    if TeaHouse.PromoteConfig[XH.areaData:getLobbyID()] then
        local iconPath = TeaHouse.PromoteConfig[XH.areaData:getLobbyID()].TABLE_ICON
        if iconPath then
            self._imgPromoteAct:loadTexture(iconPath, ccui.TextureResType.localType)
        end
        if iconPath == nil then
            self._imgPromoteAct:setVisible(false)
            return
        end
    end
    self._imgPromoteAct:setVisible(isShow)
end

return TeaHouseTableMahjongItem�<