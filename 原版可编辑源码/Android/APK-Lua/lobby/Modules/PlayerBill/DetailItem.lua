---@class PlayerBillDetailItem : View
local PlayerBillDetailItem = class("PlayerBillDetailItem", XH.ViewBase)

PlayerBillDetailItem.ColorScore = cc.c3b(163, 111, 72)
PlayerBillDetailItem.ColorSelfScore = cc.c3b(30, 145, 141)

function PlayerBillDetailItem:getCSBPath()
    return "cocosStudio/hall/CSB/PlayerBillDetailItem.csb"
end

function PlayerBillDetailItem:getBindingInfo()
    return {
        ["_KW_PANEL_DETAIL_ITEM"] = { varName = "_panelItem" },
        ["_KW_PANEL_PLAYER_SCORE"] = { varName = "_panelPlayerScore" },
        ["_KW_TEXT_INDEX"] = { varName = "_textIndex" },
        ["_KW_TEXT_SHARE_ID"] = { varName = "_textShareID" },
        ["_KW_BTN_SHARE"] = { varName = "_btnShare", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnEventShare" },
        ["_KW_BTN_PLAYBACK"] = { varName = "_btnPlayback", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnEventPlayback" },
        ["_KW_TEXT_PLAYER_SCORE"] = { varName = "_textPlayerScore" },
    }
end

function PlayerBillDetailItem:ctor()
    PlayerBillDetailItem.super.ctor(self)

    self._bShowShare = true

    self:initView()
end

function PlayerBillDetailItem:initView()
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

function PlayerBillDetailItem:getSize()
    if self._panelItem ~= nil then
        return self._panelItem:getContentSize()
    end
    return cc.size(0, 0)
end

function PlayerBillDetailItem:updateInfo(info, index, gameID, playerInfos)
    self._info = info
    self._gameID = gameID
    self._playerInfos = playerInfos
    self:setPlayCountIndex(index)
    self:setShareID(info.shareID)
    self:setPlayerScore()
end

function PlayerBillDetailItem:setPlayCountIndex(playCountIndex)
    if not self._textIndex then
        return
    end
    playCountIndex = playCountIndex or ""
    self._textIndex:setString("第" .. playCountIndex .. "局")
end

function PlayerBillDetailItem:setShareID(shareID)
    if not self._textShareID then
        return
    end
    if shareID == nil or shareID == 0 then
        shareID = "无"
    end
    self._textShareID:setString("回放码:" .. shareID)
end

function PlayerBillDetailItem:setPlayerScore()
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
    local displayUserId = XH.playerData:getNumberID()
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

function PlayerBillDetailItem:updateSwitchBtns()
    self._btnShare:setVisible(self._bShowShare)
    self._btnPlayback:setVisible(not self._bShowShare)
end

function PlayerBillDetailItem:onBtnEventShare(send, eventType)
    local gameNameList = XH.areaData:getAreaGameNameList()
    local gameName = gameNameList[self._gameID] or ""
    local sText = gameName .. "，精彩对决欢迎查看回放码：" .. self._info.shareID
    XH.SysTool.copyString(sText)
    XH.TipTool.showToast("成功复制回放码信息！粘贴分享给您的好友吧！")
    if XH.sdkManager:isInstallWeChat() then
        cc.Application:getInstance():openURL("weixin://")
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zyt24041705, {block_label='大厅战绩单场详情_单局'})
end

function PlayerBillDetailItem:onBtnEventPlayback(send, eventType)
    XH.lobby:getModule("PlayerBill"):startPlayBack(self._info.shareID)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zyt24041702, {block_label='大厅战绩单场详情_单局'})
end

function PlayerBillDetailItem:setShowShareBtnBool(bShowShare)
    self._bShowShare = bShowShare
    self:updateSwitchBtns()
end

return PlayerBillDetailItem