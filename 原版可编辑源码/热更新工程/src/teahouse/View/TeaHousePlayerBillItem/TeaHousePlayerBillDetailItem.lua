---@class TeaHousePlayerBillDetailItem : View
local TeaHousePlayerBillDetailItem = class("TeaHousePlayerBillDetailItem", TeaHouse.View)

TeaHousePlayerBillDetailItem.ColorScore = cc.c3b(163, 111, 72)
TeaHousePlayerBillDetailItem.ColorSelfScore = cc.c3b(30, 145, 141)

TeaHousePlayerBillDetailItem.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHousePlayerBillItem/TeaHousePlayerBillDetailItem.csb",
    binding = {
        ["_KW_PANEL_DETAIL_ITEM"] = { tag = "_KW_PANEL_DETAIL_ITEM", name = "_panelItem", class = "panel" },
        ["_KW_PANEL_PLAYER_SCORE"] = { tag = "_KW_PANEL_PLAYER_SCORE", name = "_panelPlayerScore", class = "panel" },
        ["_KW_TEXT_INDEX"] = { tag = "_KW_TEXT_INDEX", name = "_textIndex", class = "text" },
        ["_KW_TEXT_SHARE_ID"] = { tag = "_KW_TEXT_SHARE_ID", name = "_textShareID", class = "text" },
        ["_KW_BTN_SHARE"] = { tag = "_KW_BTN_SHARE", name = "_btnShare", class = "btn", events = "onBtnEventShare" },
        ["_KW_BTN_PLAYBACK"] = { tag = "_KW_BTN_PLAYBACK", name = "_btnPlayback", class = "btn", events = "onBtnEventPlayback" },
        ["_KW_TEXT_PLAYER_SCORE"] = { tag = "_KW_TEXT_PLAYER_SCORE", name = "_textPlayerScore", class = "text" },
    }
}

function TeaHousePlayerBillDetailItem:ctor()
    TeaHousePlayerBillDetailItem.super.ctor(self)

    self._bShowShare = true

    self:initView()
end

function TeaHousePlayerBillDetailItem:initView()
    if self._panelItem then
        self._panelItem:removeFromParent()
        self:addChild(self._panelItem)
    end
    if self._btnShare then
        self._btnShare:setSwallowTouches(false)
    end
    if self._btnPlayback then
        self._btnPlayback:setSwallowTouches(false)
    end

    self:updateSwitchBtns()
end

function TeaHousePlayerBillDetailItem:getSize()
    if self._panelItem ~= nil then
        return self._panelItem:getContentSize()
    end
    return cc.size(0, 0)
end

function TeaHousePlayerBillDetailItem:updateInfo(info, index, gameID, playerInfos)
    self._info = info
    self._gameID = gameID
    self._playerInfos = playerInfos
    self:setPlayCountIndex(index)
    self:setShareID(info.shareID)
    self:setPlayerScore()
end

function TeaHousePlayerBillDetailItem:setPlayCountIndex(playCountIndex)
    if not self._textIndex then
        return
    end
    playCountIndex = playCountIndex or ""
    self._textIndex:setString("第" .. playCountIndex .. "局")
end

function TeaHousePlayerBillDetailItem:setShareID(shareID)
    if not self._textShareID then
        return
    end
    if shareID == nil or shareID == 0 then
        shareID = "无"
    end
    self._textShareID:setString("回放码:" .. shareID)
end

function TeaHousePlayerBillDetailItem:setPlayerScore()
    if not self._panelPlayerScore or not self._textPlayerScore then
        return
    end

    if self._tbScoreTexts then
        for _, v in pairs(self._tbScoreTexts) do
            v:removeFromParent()
        end
    end
    self._tbScoreTexts = {}

    local scoreData = self._info.scores
    local numidData = self._info.numid
    local displayUserId = TeaHouse.manager.playerBill:getDisplayUserId()
    local panelSize = self._panelPlayerScore:getContentSize()
    local playerCount = #self._playerInfos
    local singleWidth = panelSize.width/playerCount
    for i = 1, playerCount do
        local textScore = self._textPlayerScore:clone()
        local playerInfo = self._playerInfos[i]
        local tempNumid = playerInfo.numid
        local scoreIndex = 0
        for numidIndex, numid in ipairs(numidData) do
            if numid == tempNumid then
                scoreIndex = numidIndex
                break
            end
        end

        if scoreData[scoreIndex] then
            if scoreData[scoreIndex] >= 0 then
                textScore:setString("+"..scoreData[scoreIndex])
            else
                textScore:setString(scoreData[scoreIndex])
            end
            textScore:setTextColor(tempNumid == displayUserId and self.ColorSelfScore or self.ColorScore)
            textScore:setPositionX(singleWidth*(i-1/2))
            self._panelPlayerScore:addChild(textScore)
            self._tbScoreTexts[i] = textScore
        end
    end
end

function TeaHousePlayerBillDetailItem:updateSwitchBtns()
    self._btnShare:setVisible(self._bShowShare)
    self._btnPlayback:setVisible(not self._bShowShare)
end

function TeaHousePlayerBillDetailItem:onBtnEventShare(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local gameNameList = TeaHouse.BridgeData.getGameNameList()
    local gameName = gameNameList[self._gameID] or ""
    local sText = gameName .. "，精彩对决欢迎查看回放码：" .. self._info.shareID
    TeaHouse.SysTool.copyClipboard(sText)
    TeaHouse.TipTool.showToast("成功复制回放码信息！粘贴分享给您的好友吧！")
    TeaHouse.SysTool.openWeChat()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zyt24041705, {block_label='比赛场战绩单场详情_单局'})
end

function TeaHousePlayerBillDetailItem:onBtnEventPlayback(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    TeaHouse.startPlayBack(self._info.shareID)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zyt24041702, {block_label='比赛场战绩单场详情_单局'})
end

function TeaHousePlayerBillDetailItem:setShowShareBtnBool(bShowShare)
    self._bShowShare = bShowShare
    self:updateSwitchBtns()
end

return TeaHousePlayerBillDetailItem