---@class TeaHouseAgentBillTablePanel : View
local TeaHouseAgentBillTablePanel = class("TeaHouseAgentBillTablePanel", TeaHouse.View)

local KW_MAX_SINGLE_PLAYER_COUNT = 4
TeaHouseAgentBillTablePanel.ColorTextWinScore = cc.c3b(222, 75, 59)
TeaHouseAgentBillTablePanel.ColorTextLoseScore = cc.c3b(30, 145, 141)

--总单名字字号
TeaHouseAgentBillTablePanel.SizeTextName = {
    [1] = 36,
    [2] = 36,
    [3] = 36,
    [4] = 36,
    [5] = 34,
    [6] = 34,
    [7] = 34,
    [8] = 34,
}

TeaHouseAgentBillTablePanel.DetailSizeTextName = {
    [1] = 34,
    [2] = 34,
    [3] = 34,
    [4] = 34,
    [5] = 30,
    [6] = 30,
    [7] = 30,
    [8] = 30,
}

TeaHouseAgentBillTablePanel.CUR_ITEM_TYPE = {
    PLAYBACK = 1,
    SHARE = 2,
}

TeaHouseAgentBillTablePanel.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseAgentBillItem/TeaHouseAgentBillTablePanel.csb",
    binding = {
        ["_KW_PANEL_ROOT"] = { tag = "_KW_PANEL_ROOT", name = "_panelRoot", class = "panel" },
        ["_KW_LIST_VIEW"] = { tag = "_KW_LIST_VIEW", name = "_listView", class = "listview" },

        ["_KW_BTN_BACKLIST"] = { tag = "_KW_BTN_BACKLIST", name = "_btnBackList", class = "btn", events = "onBackListClicked" },
        ["_KW_TEXT_ROOM_NUMBER"] = { tag = "_KW_TEXT_ROOM_NUMBER", name = "_textRoomNumber", class = "text" },
        ["_KW_TEXT_BILL_TIME"] = { tag = "_KW_TEXT_BILL_TIME", name = "_textBillTime", class = "text" },
        ["_KW_TEXT_PLAY_COUNT"] = { tag = "_KW_TEXT_PLAY_COUNT", name = "_textPlayCount", class = "text" },
        ["_KW_TEXT_COST"] = { tag = "_KW_TEXT_COST", name = "_textCost", class = "text" },
        ["_KW_PANEL_NAME_SCORE"] = { tag = "_KW_PANEL_NAME_SCORE", name = "_panelNameScore", class = "panel" },
        ["_KW_PANEL_NAME_SCORE_ITEM"] = { tag = "_KW_PANEL_NAME_SCORE_ITEM", name = "_panelNameScoreItem", class = "panel" },

        ["_KW_PANEL_DETAIL_PLAYERINFO"] = { tag = "_KW_PANEL_DETAIL_PLAYERINFO", name = "_panelDetailPlayerInfo", class = "panel" },
        ["_KW_TEXT_NICKNAME"] = { tag = "_KW_TEXT_NICKNAME", name = "_textNickName", class = "text" },
        ["_KW_TEXT_ID"] = { tag = "_KW_TEXT_ID", name = "_textID", class = "text" },
        ["_KW_BTN_SWITCH_PLAYBACK"] = { tag = "_KW_BTN_SWITCH_PLAYBACK", name = "_btnSwitchPlayBack", class = "btn", events = "onSwitchPlayBack" },
        ["_KW_BTN_SWITCH_SHARE"] = { tag = "_KW_BTN_SWITCH_SHARE", name = "_btnSwitchShare", class = "btn", events = "onSwitchShare" },

        ["_KW_TABLE_INFO_ITEM"] = { tag = "_KW_TABLE_INFO_ITEM", name = "_panelDetailItem", class = "panel" },
        ["_KW_TEXT_TABLE_INFO_SCORE"] = { tag = "_KW_TEXT_TABLE_INFO_SCORE", name = "_textItemScore", class = "text" },
        ["_KW_BTN_ITEM_PLAYBACK"] = { tag = "_KW_BTN_ITEM_PLAYBACK", name = "_btnItemPlayBack", class = "btn", events = "onItemPlayBack" },
        ["_KW_BTN_ITEM_SHARE"] = { tag = "_KW_BTN_ITEM_SHARE", name = "_btnItemShare", class = "btn", events = "onItemShare" },
    }
}

function TeaHouseAgentBillTablePanel:ctor(callback)
    TeaHouseAgentBillTablePanel.super.ctor(self)

    self._callback = callback

    self:initUI()
end

function TeaHouseAgentBillTablePanel:initUI()
    if self._panelRoot then
        self._panelRoot:removeFromParent()
        self:addChild(self._panelRoot)
    end
    if self._listView and self._panelDetailItem then
        self._listView:setItemModel(self._panelDetailItem)
        self._listView:removeAllChildren()
    end
    if self._btnSwitchPlayBack then
        self._btnSwitchPlayBack:setVisible(true)
    end
    if self._btnSwitchShare then
        self._btnSwitchPlayBack:setVisible(true)
    end
end

function TeaHouseAgentBillTablePanel:onBackListClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    if self._callback then
        self._callback()
    end
end

function TeaHouseAgentBillTablePanel:onSwitchPlayBack(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:setItemTabType(TeaHouseAgentBillTablePanel.CUR_ITEM_TYPE.SHARE)
end

function TeaHouseAgentBillTablePanel:onSwitchShare(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:setItemTabType(TeaHouseAgentBillTablePanel.CUR_ITEM_TYPE.PLAYBACK)
end

function TeaHouseAgentBillTablePanel:onItemPlayBack(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local shareID = send:getParent():getTag()
    TeaHouse.startPlayBack(shareID)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zyt24041702, {block_label='比赛场战绩单场详情_单局'})
end

function TeaHouseAgentBillTablePanel:onItemShare(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local shareID = send:getParent():getTag()
    local gameNameList = TeaHouse.BridgeData.getGameNameList()
    local gameName = gameNameList[self._gameID] or ""
    local sText = gameName .. "，精彩对决欢迎查看回放码：" .. shareID
    TeaHouse.SysTool.copyClipboard(sText)
    TeaHouse.TipTool.showToast("成功复制回放码信息！粘贴分享给您的好友吧！")
    TeaHouse.SysTool.openWeChat()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zyt24041705, {block_label='比赛场战绩单场详情_单局'})
end

function TeaHouseAgentBillTablePanel:setItemTabType(tabType)
    if self._curItemTabType == tabType then
        return
    end
    self._curItemTabType = tabType
    self._btnSwitchPlayBack:setVisible(tabType == TeaHouseAgentBillTablePanel.CUR_ITEM_TYPE.PLAYBACK)
    self._btnSwitchShare:setVisible(tabType == TeaHouseAgentBillTablePanel.CUR_ITEM_TYPE.SHARE)
    local items = self._listView:getItems()
    for i = 1, #items do
        local item = items[i]
        local btnPlayBack = item:getChildByName("_KW_BTN_ITEM_PLAYBACK")
        local btnShare = item:getChildByName("_KW_BTN_ITEM_SHARE")
        if btnPlayBack then
            btnPlayBack:setVisible(tabType == TeaHouseAgentBillTablePanel.CUR_ITEM_TYPE.PLAYBACK)
        end
        if btnShare then
            btnShare:setVisible(tabType == TeaHouseAgentBillTablePanel.CUR_ITEM_TYPE.SHARE)
        end
    end
end

function TeaHouseAgentBillTablePanel:updateDetailInfo(roomInfo, detailInfo)
    if not roomInfo or next(roomInfo) == nil or not detailInfo or next(detailInfo) == nil then
        return
    end
    self._gameID = roomInfo.ledgerInfo.gameID or 0
    if self._textRoomNumber then
        self._textRoomNumber:setString("房间号:" .. (roomInfo.ledgerInfo.roomNum or ""))
    end
    if self._textBillTime then
        local sDate = os.date("%Y-%m-%d %H:%M:%S", roomInfo.ledgerInfo.starttime) or ""
        self._textBillTime:setString(sDate)
    end
    if self._textPlayCount then
        local strPlayCount = string.format("局数:%d/%d", roomInfo.ledgerInfo.finishgames, roomInfo.ledgerInfo.totalgames)
        self._textPlayCount:setString(strPlayCount)
    end
    if self._textCost then
        -- local usePropCnt = roomInfo.ledgerInfo.nUsePropCnt
        -- if roomInfo.ledgerInfo.propsid and roomInfo.ledgerInfo.propsid == TeaHouse.BridgeData.getSmallRoomCardID() then
        --     usePropCnt = usePropCnt / TeaHouse.BridgeData.getSmallRoomCardRatio()
        -- end
        local nCardCost = roomInfo.nCardCost
        if roomInfo.ledgerInfo.propsid and roomInfo.ledgerInfo.propsid == TeaHouse.BridgeData.getSmallRoomCardID() then
            nCardCost = nCardCost / TeaHouse.BridgeData.getSmallRoomCardRatio()
        end
        self._textCost:setString("房卡消耗:" .. tostring(nCardCost))
    end

    local playerInfos = roomInfo.ledgerInfo.playerInfos or {}
    local endInfoEx = roomInfo.ledgerInfo.endInfoEx
    self:updatePlayerScore(playerInfos, endInfoEx)
    self:updateDetailPlayInfo(playerInfos)

    -- 服务下发总单与详单不匹配，需要重新排序,记录总单的numid
    self._billNumId = {}
    for i = 1, #playerInfos do
        self._billNumId[#self._billNumId + 1] = playerInfos[i].numid
    end

    if self._listView then
        self._listView:removeAllChildren()
    end
    self._detailBillScore = {}
    for i = 1, detailInfo.finishgames do
        self:addDetailItem(i, detailInfo.gameDetail[i])
    end
end

-- 设置总单玩家昵称和分数
function TeaHouseAgentBillTablePanel:updatePlayerScore(playerInfos, endInfoEx)
    if not self._panelNameScore or not self._panelNameScoreItem then
        return
    end

    if self._tbNameScoreLayouts then
        for _, v in pairs(self._tbNameScoreLayouts) do
            v:removeFromParent()
        end
    end
    self._tbNameScoreLayouts = {}

    local panelSize = self._panelNameScore:getContentSize()
    local playerCount = #playerInfos
    local singleWidth = panelSize.width / playerCount
    if playerCount > KW_MAX_SINGLE_PLAYER_COUNT then
        singleWidth = panelSize.width / KW_MAX_SINGLE_PLAYER_COUNT
    end
    local singleHeight = panelSize.height / 2
    for i = 1, playerCount do
        local nameScoreLayout = self._panelNameScoreItem:clone()
        local nickNameNode = nameScoreLayout:getChildByName("_KW_TEXT_NICKNAME_ITEM")
        local scoreNode
        if nickNameNode then
            scoreNode = nickNameNode:getChildByName("_KW_TEXT_SCORE_ITEM")
        end

        if nickNameNode then
            local strNickName = playerInfos[i].nickname or ""
            if playerCount <= 4 then
                strNickName = TeaHouse.StringTool.getTrimName(strNickName)
            else
                strNickName = TeaHouse.StringTool.getTrimName(strNickName)
            end
            nickNameNode:setString(strNickName .. ":")
            nickNameNode:setFontSize(self.SizeTextName[playerCount])
        end
        if scoreNode then
            local strScore = tostring(playerInfos[i].totalscore)
            scoreNode:setColor(self.ColorTextLoseScore)
            scoreNode:setFontSize(self.SizeTextName[playerCount])
            if playerInfos[i].totalscore >= 0 then
                strScore = "+" .. strScore
                scoreNode:setColor(self.ColorTextWinScore)
            end

            if endInfoEx then
                local endInfoExItem = endInfoEx[tostring(playerInfos[i].numid)]
                if endInfoExItem then
                    local kongsr = endInfoExItem["KONGSC"]
                    local isSuanGangScore = endInfoExItem["ISSGF"] or 0
                    if kongsr and isSuanGangScore == 0 then
                        strScore = strScore .. "("..kongsr..")"
                    end
                end  
            end
            scoreNode:setString(strScore)

            scoreNode:setPositionX(nickNameNode:getContentSize().width + nickNameNode:getPositionX() + 5)
            scoreNode:setPositionY(nickNameNode:getContentSize().height / 2)
        end
        if playerCount <= KW_MAX_SINGLE_PLAYER_COUNT then
            nameScoreLayout:setPositionX(singleWidth * (i - 1 / 2))
        else
            if i <= KW_MAX_SINGLE_PLAYER_COUNT then
                nameScoreLayout:setPositionX(singleWidth * (i - 1 / 2))
            else
                nameScoreLayout:setPositionX(singleWidth * (i - KW_MAX_SINGLE_PLAYER_COUNT - 1 / 2))
            end
            nameScoreLayout:setPositionY(singleHeight * (3 - math.ceil(i / KW_MAX_SINGLE_PLAYER_COUNT) - 1 / 2))
        end
        self._panelNameScore:addChild(nameScoreLayout)
        self._tbNameScoreLayouts[i] = nameScoreLayout
    end
end

-- 设置详单头部玩家昵称和ID
function TeaHouseAgentBillTablePanel:updateDetailPlayInfo(playerInfos)
    if not self._panelDetailPlayerInfo or not self._textNickName then
        return
    end

    if self._tbDetailPlayerInfoLayouts then
        for _, v in pairs(self._tbDetailPlayerInfoLayouts) do
            v:removeFromParent()
        end
    end
    self._tbDetailPlayerInfoLayouts = {}

    local panelSize = self._panelDetailPlayerInfo:getContentSize()
    local playerCount = #playerInfos
    local singleWidth = panelSize.width / playerCount
    for i = 1, playerCount do
        local nameScoreLayout = self._textNickName:clone()
        local strNickName = TeaHouse.StringTool.getTrimName(playerInfos[i].nickname or "")
        local strNumId = tostring(playerInfos[i].numid)
        nameScoreLayout:setString(strNickName)
        nameScoreLayout:setFontSize(self.DetailSizeTextName[playerCount])
        nameScoreLayout:setPositionX(singleWidth * (i - 1 / 2))
        local textNodeID = nameScoreLayout:getChildByName("_KW_TEXT_ID")
        if textNodeID then
            textNodeID:setPositionX(nameScoreLayout:getContentSize().width / 2)
            textNodeID:setString(strNumId)
        end
        self._panelDetailPlayerInfo:addChild(nameScoreLayout)
        self._tbDetailPlayerInfoLayouts[i] = nameScoreLayout
    end
end

function TeaHouseAgentBillTablePanel:addDetailItem(index, data)
    if not self._listView then return end
    self._listView:pushBackDefaultItem()
    local items = self._listView:getItems()
    local item = items[#items]
    local txtJuShu = item:getChildByName("_KW_TEXT_TABLE_INFO_JUSHU")
    if txtJuShu then
        txtJuShu:setString(string.format("第%d局", index))
    end
    local shareCodeItem = ccui.Helper:seekWidgetByName(item, "_KW_TEXT_SHARE_CODE")
    local strShareCode = tostring(data.shareID)
    if not data.shareID then
        strShareCode = "无"
    end
    if shareCodeItem then
        shareCodeItem:setString("回放码:" .. strShareCode)
    end
    item:setTag(data.shareID)
    local panelItemScore = item:getChildByName("_KW_PANEL_DETAIL_SCORE")

    -- 服务下发总单与详单不匹配，需要重新排序,根据总单numid对详单分数进行排序
    local sortScores = {}
    for i = 1, #self._billNumId do
        for j = 1, #data.scores do
            if data.numid[j] == self._billNumId[i] then
                sortScores[i] = data.scores[j]
            end
        end
    end
    self:updateDetailPlayScore(panelItemScore, sortScores, #self._billNumId)
end

-- 更新详细分数
function TeaHouseAgentBillTablePanel:updateDetailPlayScore(panelItemScore, scores, playerCount)
    if not panelItemScore or not self._textItemScore then
        return
    end

    local panelSize = panelItemScore:getContentSize()
    local singleWidth = panelSize.width / playerCount
    for i = 1, playerCount do
        if scores[i] then
            local nameScoreLayout = self._textItemScore:clone()
            local strScore = tostring(scores[i])
            if scores[i] >= 0 then
                strScore = "+" .. strScore
            end
            nameScoreLayout:setString(strScore)
            nameScoreLayout:setPositionX(singleWidth * (i - 1 / 2))
            panelItemScore:addChild(nameScoreLayout)
        end
    end
end

return TeaHouseAgentBillTablePanel�<