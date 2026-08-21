local VoteView = CF.gameClass("VoteView", CF.ViewBase)

VoteView.Status = {
    REFUSE = 1, --拒绝
    AGREE = 2, --同意
    DEFAULT = 3, --选择中
}

VoteView.ClsName = "VoteView"
VoteView.ObjName = "VoteView"

local statusChinese = {"拒绝", "同意", "选择中..."}
local statusColor = {cc.c3b(242, 51, 51), cc.c3b(9, 168, 1), cc.c3b(134, 134, 134)}

function VoteView:ctor(param)
    param = param or {}
    VoteView.super.ctor(self, param)

    self._timeLimit = param.data.voteTime or 0
    self._voteRes = param.data.playersVote or {}

    self:createChildren()
end

function VoteView:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/ZhouShan/Vote.csb"
end

function VoteView:getBindingInfo()
    return {
        ["_KW_IMG_BG"] = {varName = "_bg"},
        ["_KW_PANEL_PLAYER_MOD"] = {varName = "_playerMod"},
        ["_KW_IMG_CLOCK"] = {varName = "_clockRoot"},
        ["_KW_TEXT_CLOCK_TIP"] = {varName = "_clockTip"},
        ["_KW_TEXT_CLOCK_ON_BTN"] = {varName = "_clockTipOnBtn"},
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnClose"},
        ["_KW_BTN_REFUSE"] = {varName = "_btnRefuse", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnRefuseEvent"},
        ["_KW_BTN_AGREE"] = {varName = "_btnAgree", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnAgreeEvent"},
        ["_KW_PANEL_HEAD_POS"] = {varName = "_headPos"}
    }
end

function VoteView:getProxyEvents()
    return {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_CLOSE_VIEW", callBack = "onCloseView"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_PLAYER_VOTE", callBack = "onPlayerVote"},
    }
end

function VoteView:createChildren()
    self:startclock(self._timeLimit)
    self:initPlayersInfo()
    self._clockRoot:setVisible(false)
    self._btnClose:setVisible(false)
    if self._voteRes and self._voteRes[CF.roomData:getSelfSeat()] ~= -1 then
        self:changeToWaiteUI()
    end
end

function VoteView:initPlayersInfo()
    if not self._headPos then
        return
    end
    self._headPos:removeAllChildren()
    local players = CF.roomData:getPlayerDatas()
    for k, player in pairs(players) do
        local seat = player:getSeat()
        local status = self._voteRes[seat] ~= -1 and (self._voteRes[seat] + 1) or VoteView.Status.DEFAULT
        local url = player:getAvatarUrl()
        local name = CF.StringTool.cutStringByLength(player:getNickName())
        local tmpPlayerNode = self._playerMod:clone()
        if tmpPlayerNode then
            CF.UITool.setText(tmpPlayerNode, "KW_TEXT_NICK_NAME", name)
            CF.UITool.setText(tmpPlayerNode, "KW_TEXT_STATE", statusChinese[status])
            CF.UITool.setTextColor(tmpPlayerNode, "KW_TEXT_STATE", statusColor[status])
            local headPosNode = CF.UITool.seekNodeByName(tmpPlayerNode, "KW_IMG_HEAD_FRAME")
            self:updateImg(headPosNode, url)
            self:updateHeadFrame(headPosNode, player:getNumberID())
            tmpPlayerNode:setName("_KW_PANEL_PLAYER_" .. seat)
            tmpPlayerNode:addTo(self._headPos)
            local posX = k * (self._headPos:getContentSize().width / (#players + 1))
            tmpPlayerNode:setPosition(posX, 0)
        end
    end
end

function VoteView:updateImg(node, url)
    if not node then
        return
    end

    if url == "" then
        url = "http://thirdwx.qlogo.cn/mmopen/vi_32/RZWHFDljz1SW2Azl6kZyxic4ziaibicnUPo8dB3YiaGbhpyx3Tq34Vemk6KqexyJQJtAphjc9TELicPuRryc0UQ4DPmw/132"
    end

    local headImg = CF.UITool.seekNodeByName(node, "KW_DEFAULT_HEAD_IMG_NAME")
    if headImg == nil then
        local size = node:getContentSize()
        headImg =
            CF.RemoteImage.new():setPosition(size.width / 2, size.height / 2):ignoreContentAdaptWithSize(false):setContentSize(size.width, size.height):setName("KW_DEFAULT_HEAD_IMG_NAME"):addTo(node)
    end
    headImg:setUrl(url)
end

function VoteView:updateHeadFrame(node, numid)
    local headFrame = CF.roomData:getHeadFrameData(numid) or {}
    local GameBagUILogic = CF.gameRequire("Modules.GameBag.UILogic")
    GameBagUILogic.showHeadFrame(node, headFrame.frame_url, cc.size(0, 5), cc.size(45, 45), headFrame.propid)
end

function VoteView:setColockTime(tm)
    tm = tm or 0
    local tipStr = tm .. "秒     等待结果......"
    self._clockTip:setString(tipStr)
    local tipStr2 = "(" .. tm .. "秒)"
    self._clockTipOnBtn:setString(tipStr2)
end

function VoteView:startclock(tm)
    tm = tm or 0
    local isHaveTimeLimit = tm > 0
    self._clockRoot:setVisible(isHaveTimeLimit)

    --倒计时刷新
    if isHaveTimeLimit then
        self:setColockTime(tm)
        self._clockRoot:stopAllActions()

        CF.UITool.createRepeateAction(
            self._clockRoot,
            1,
            function()
                tm = tm - 1
                if tm < 0 then
                    self._clockRoot:stopAllActions()
                else
                    self:setColockTime(tm)
                end
            end
        )
    end
end

function VoteView:showSelf(zorder)
    zorder = zorder or CF.ZORDER.WINDOW
    local runningScene = display.getRunningScene()
    if runningScene then
        self:setName(VoteView.ObjName)
        runningScene:addChild(self, zorder)
    end
    return self
end

function VoteView:onBtnClose(send, eventType)
    self:close()
end

function VoteView:onBtnAgreeEvent(send, eventType)
    CF.msgManager:sendVote(true)
    self:changeToWaiteUI()
end

function VoteView:onBtnRefuseEvent(send, eventType)
    CF.msgManager:sendVote(false)
    self:changeToWaiteUI()
    self:close()
end

function VoteView:onCloseView(event)
    self:close()
end

function VoteView:onPlayerVote(event)
    local data = event.data
    if not data then
        return
    end
    for i = 0, CF.roomData:getMaxPlayer() do
        local player = CF.UITool.seekWidgetByName(self._bg, "_KW_PANEL_PLAYER_" .. i)
        if player then
            local status = data.playersVote[i] ~= -1 and data.playersVote[i] or 2
            CF.UITool.setText(player, "KW_TEXT_STATE", statusChinese[status + 1])
            CF.UITool.setTextColor(player, "KW_TEXT_STATE", statusColor[status + 1])
        end
    end
end

function VoteView:changeToWaiteUI()
    self._btnAgree:setVisible(false)
    self._btnRefuse:setVisible(false)
    self._clockRoot:setVisible(true)
    self._btnClose:setVisible(true)
end

return VoteView
�