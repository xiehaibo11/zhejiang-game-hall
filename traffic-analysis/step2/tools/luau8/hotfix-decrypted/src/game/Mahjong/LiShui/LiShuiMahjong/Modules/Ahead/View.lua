local AheadView = CF.gameClass("AheadView", CF.ViewBase)
local AheadConfig = CF.gameRequire("game.Mahjong.LiShui.LiShuiMahjong.Config.AheadConfig")

AheadView.Status = {
    DEFAULT = 1, --选择中
    AGREE = 2, --同意
    REFUSE = 3, --拒绝
}

AheadView.ClsName = "AheadView"
AheadView.ObjName = "AheadView"

local statusChinese = {"选择中...", "同意", "拒绝"}
local statusColor = {cc.c3b(134, 134, 134), cc.c3b(9, 168, 1), cc.c3b(242, 51, 51)}

function AheadView:ctor(param)
    param = param or {}
    AheadView.super.ctor(self, param)

    self._timeLimit = param.data.sAheadLeftTime or 0

    self:createChildren()
    CF.NewThrowDataManager:throwData(CF.NewThrowDataDefine.LSMJ_NEW_PLAYTYPE_AHEAD_PUSH)
end

function AheadView:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/LiShui/AheadVote.csb"
end

function AheadView:getBindingInfo()
    return {
        ["_KW_IMG_BG"] = {varName = "_bg"},
        ["_KW_PANEL_PLAYER_MOD"] = {varName = "_playerMod"},
        ["_KW_PANEL_PLAYER_MOD_POS_1"] = {varName = "_playerModPos1"},
        ["_KW_PANEL_PLAYER_MOD_POS_2"] = {varName = "_playerModPos2"},
        ["_KW_IMG_CLOCK"] = {varName = "_clockRoot"},
        ["_KW_TEXT_CLOCK_TIP"] = {varName = "_clockTip"},
        ["_KW_TEXT_CLOCK_ON_BTN"] = {varName = "_clockTipOnBtn"},
        ["_KW_AHEAD_TIPS"] = {varName = "_aheadTips"},
        ["_KW_TEXT_RULE"] = {varName = "_aheadRule"},
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnClose"},
        ["_KW_BTN_REFUSE"] = {varName = "_btnRefuse", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnRefuseEvent"},
        ["_KW_BTN_AGREE"] = {varName = "_btnAgree", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnAgreeEvent"},
        ["_KW_BTN_RULE"] = {varName = "_btnRule", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnRule"}
    }
end

function AheadView:getProxyEvents()
    return {
        {module = CF.game:getModule("Ahead"), eventKeyName = "EVENT_CLOSE_VIEW", callBack = "onCloseView"},
        {module = CF.game:getModule("Ahead"), eventKeyName = "EVENT_PLAYER_VOTE", callBack = "onPlayerVote"},
    }
end

function AheadView:createChildren()
    self:startclock(self._timeLimit)
    self:initPlayersInfo()
    self._clockRoot:setVisible(false)
    self._btnClose:setVisible(false)
    self._aheadTips:setString(AheadConfig.AHEAD_TIPS[math.random(#(AheadConfig.AHEAD_TIPS))])
    self._aheadRule:setString(AheadConfig.AHEAD_RULE[CF.roomData:getRoomMode2()] or "")
    if CF.teaHouseManager:isInTeaHouse() then
        self._aheadRule:setString(CF.game:getModule("Ahead"):getTeaModeRuleChinese())
    end
end

function AheadView:initPlayersInfo()
    local players = CF.roomData:getPlayerDatas()
    for k, player in pairs(players) do
        local status = AheadView.Status.DEFAULT
        local seat = player:getSeat()
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
            tmpPlayerNode:setPosition(0, 0)
            self["_playerModPos" .. k]:addChild(tmpPlayerNode)
        end
    end
end

function AheadView:updateImg(node, url)
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

function AheadView:updateHeadFrame(node, numid)
    local headFrame = CF.roomData:getHeadFrameData(numid) or {}
    local GameBagUILogic = CF.gameRequire("Modules.GameBag.UILogic")
    GameBagUILogic.showHeadFrame(node, headFrame.frame_url, cc.size(0, 5), cc.size(45, 45), headFrame.propid)
end

function AheadView:setColockTime(tm)
    tm = tm or 0
    local tipStr = tm .. "秒     等待结果......"
    self._clockTip:setString(tipStr)
    local tipStr2 = "(" .. tm .. "秒)"
    self._clockTipOnBtn:setString(tipStr2)
end

function AheadView:startclock(tm)
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

function AheadView:showSelf(zorder)
    zorder = zorder or CF.ZORDER.WINDOW
    local runningScene = display.getRunningScene()
    if runningScene then
        self:setName(AheadView.ObjName)
        runningScene:addChild(self, zorder)
    end
    return self
end

function AheadView:onBtnClose(send, eventType)
    self:close()
end

function AheadView:onBtnAgreeEvent(send, eventType)
    CF.msgManager:sendAheadVote(true)
    self:changeToWaiteUI()
    CF.NewThrowDataManager:throwData(CF.NewThrowDataDefine.LSMJ_NEW_PLAYTYPE_AHEAD_AGREE_CLICK)
end

function AheadView:onBtnRefuseEvent(send, eventType)
    CF.msgManager:sendAheadVote(false)
    self:changeToWaiteUI()
    CF.NewThrowDataManager:throwData(CF.NewThrowDataDefine.LSMJ_NEW_PLAYTYPE_AHEAD_REFUSE_CLICK)
    self:close()
end

function AheadView:onCloseView(event)
    self:close()
end

function AheadView:onPlayerVote(event)
    local data = event.data
    if not data then
        return
    end
    local player = CF.UITool.seekWidgetByName(self._bg, "_KW_PANEL_PLAYER_" .. data.sAheadVoteSeat)
    if player then
        local status = data.sAheadVoteStatus and AheadView.Status.AGREE or AheadView.Status.REFUSE
        CF.UITool.setText(player, "KW_TEXT_STATE", statusChinese[status])
        CF.UITool.setTextColor(player, "KW_TEXT_STATE", statusColor[status])
    end
end

function AheadView:changeToWaiteUI()
    self._btnAgree:setVisible(false)
    self._btnRefuse:setVisible(false)
    self._clockRoot:setVisible(true)
    self._btnClose:setVisible(true)
end

function AheadView:onBtnRule(send, eventType)
    CF.viewManager:openView("RuleView")
    CF.NewThrowDataManager:throwData(CF.NewThrowDataDefine.LSMJ_NEW_PLAYTYPE_AHEAD_RULE_CLICK)
end

return AheadView
