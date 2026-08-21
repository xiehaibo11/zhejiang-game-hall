local EarlyQuickStartUI = CF.gameClass("EarlyQuickStartUI", CF.ViewBase)

local KW_IMG_HEAD_FRAME = "KW_IMG_HEAD_FRAME"
local KW_TEXT_NICK_NAME = "KW_TEXT_NICK_NAME"
local KW_TEXT_STATE = "KW_TEXT_STATE"
local KW_DEFAULT_HEAD_IMG_NAME = "KW_DEFAULT_HEAD_IMG_NAME"

EarlyQuickStartUI.STATUS = {
    DEFAULT = 1,    --待确认
    AGREE = 2,      --同意
    REFUSE = 3,     --拒绝
    REQUEST = 4     --请求开局
}

EarlyQuickStartUI.START_FLAG = {
    EARLY_START_NONE = 0,   --没有玩家请求提前开局
    EARLY_START_CANCEL = 0, --取消提前开局请求
    EARLY_START_WAIT = 1,       --有玩家请求，正在等待其他玩家选择
    EARLY_START_DISAGREE = 2,   --有玩家不同意
    EARLY_START_AGREE = 3,      --所有玩家同意
    EARLY_START_SUCCESS = 4,    --提前开局成功
    EARLY_START_PLAYERCNT = 5,  --满足椅子数，取消提前开局
}

EarlyQuickStartUI.ClsName = "EarlyQuickStartUI"
EarlyQuickStartUI.ObjName = "EarlyQuickStartUI"

local statusChinese = {"待确认...", "同意", "拒绝", "同意"}
local statusColor = {cc.c3b(134, 134, 134), cc.c3b(9, 168, 1), cc.c3b(242, 51, 51), cc.c3b(9, 168, 1),}

function EarlyQuickStartUI:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/ShuKe/EarlyStart.csb"
end

function EarlyQuickStartUI:getBindingInfo()
    return {
        ["_KW_IMG_BG"] = {varName="_imgBg"},
        ["_KW_TEXT_NICK_NAME"] = {varName="_requestName"},
        ["_KW_TEXT_OUT_TIME_TIP"] = {varName="_outTimeTip"},
        ["_KW_IMG_CLOCK"] = {varName="_clockRoot"},
        ["_KW_TEXT_CLOCK_TIP"] = {varName="_clockTip"},
        ["_KW_PANEL_PLAYER_MOD"] = {varName="_playerMod"},
        ["_KW_BTN_CLOSE"] = {varName="_btnClose",type = CF.UI_TYPE.BUTTON,onTouchEnded="onBtnClose"},
        ["_KW_BTN_REFUSE"] = {varName="_btnRefuse",type = CF.UI_TYPE.BUTTON,onTouchEnded="onBtnRefuseEvent"},
        ["_KW_BTN_AGREE"] = {varName="_btnAgree",type = CF.UI_TYPE.BUTTON,onTouchEnded="onBtnAgreeEvent"},
        ["_KW_PANEL_PLAYER_POS"] = {varName="_panelPlayerPos",},
    }
end

function EarlyQuickStartUI:ctor(param)
    param = param or {}
    EarlyQuickStartUI.super.ctor(self, param)
    --requestSeat 字段不传表示使用没有头像的UI
    self._isShowMore = param.isShowMore or false
    self._requestSeat = param.requestSeat or -1 
    self._timeLimit = param.time or 0
    self._playersNode = {}

    self:createChildren()
end

function EarlyQuickStartUI:getProxyEvents()
    return {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_UPDATE_EARLY_BEGIN_UI", callBack = "onUpdateEarlyQuickStartUI"},
    }
end

function EarlyQuickStartUI:createChildren()
    self:startclock(self._timeLimit)

    if self._isShowMore then
        self:initPlayersInfo()
    end
end

function EarlyQuickStartUI:initPlayersInfo()
    local players = CF.roomData:getPlayerDatas()
    local playerCount = CF.roomData:getCurPlayerCount()

    local index = 0
    for _, player in pairs(players) do
        local status = EarlyQuickStartUI.STATUS.DEFAULT
        local seat = player:getSeat()
        local url = player:getAvatarUrl()
        local name = CF.StringTool.cutStringByLength(player:getNickName())

        local tmpPlayerNode = self._playerMod:clone()
        if tmpPlayerNode then
            CF.UITool.setText(tmpPlayerNode, KW_TEXT_NICK_NAME, name)
            CF.UITool.setText(tmpPlayerNode, KW_TEXT_STATE, statusChinese[status])
            CF.UITool.setTextColor(tmpPlayerNode, KW_TEXT_STATE, statusColor[status])
            local headPosNode = CF.UITool.seekNodeByName(tmpPlayerNode, KW_IMG_HEAD_FRAME)
            self:updateImg(headPosNode, url)
            tmpPlayerNode:setPosition(self:calPlayerInfo(index, playerCount))
                        :addTo(self._imgBg)
            self._playersNode[seat] = tmpPlayerNode
        end
        index = index + 1
    end
end

function EarlyQuickStartUI:calPlayerInfo(seat, playerCount)
    local itemSize = self._playerMod:getContentSize()
    local displaySize = self._imgBg:getContentSize()

    local averWidth = (displaySize.width - itemSize.width * playerCount) / (playerCount + 1)
    return cc.p((averWidth + itemSize.width / 2) + (itemSize.width + averWidth) * seat, self._panelPlayerPos:getPositionY())
end

function EarlyQuickStartUI:changeToWaiteUI(isChange)
    isChange = isChange or false
    self._btnAgree:setVisible(not isChange)
    self._btnRefuse:setVisible(not isChange)
    
    if self._isShowMore then
        self._clockRoot:setVisible(isChange and self._timeLimit > 0)
        --self._outTimeTip:setVisible(not isChange)
    else
        self:removeSelf()
    end
end

function EarlyQuickStartUI:setColockTime(tm)
    tm = tm or 0
    local tipStr = tm .. "秒     等待结果......"
    local tipStr2 = "(超过" .. tm .. "秒未做选择,则默认拒绝)"
    self._clockTip:setString(tipStr)
    self._outTimeTip:setString(tipStr2)
end

function EarlyQuickStartUI:startclock(tm)
    tm = tm or 0
    local isHaveTimeLimit = tm > 0
    self._clockRoot:setVisible(false)
    self._outTimeTip:setVisible(isHaveTimeLimit)

    --倒计时刷新
    if isHaveTimeLimit then
        self:setColockTime(tm)
        self._clockRoot:stopAllActions()

        CF.UITool.createRepeateAction(self._clockRoot, 1, function()
            tm = tm -1
            if tm < 0 then
                self._clockRoot:stopAllActions()
            else
                self:setColockTime(tm)
            end
        end)
    end
end

function EarlyQuickStartUI:updateImg(node, url)
    if not node then
        return
    end

    local headImg = CF.UITool.seekNodeByName(node, KW_DEFAULT_HEAD_IMG_NAME)
    if headImg == nil then
        local size = node:getContentSize()
        headImg = CF.RemoteImage.new()
        :setPosition(size.width / 2, size.height / 2)
        :ignoreContentAdaptWithSize(false)
        :setContentSize(size.width, size.height)
        :setName(KW_DEFAULT_HEAD_IMG_NAME)
        :addTo(node)
    end
    headImg:setUrl(url)
end

function EarlyQuickStartUI:onUpdateEarlyQuickStartUI(event)
    local seat = event.msg.seat
    local status = event.msg.status or EarlyQuickStartUI.STATUS.DEFAULT
    local isRemove = event.msg.remove or false

    if isRemove then
        self:removeSelf()
        return
    end

    if seat  then
        if status == EarlyQuickStartUI.STATUS.REQUEST then
            self._requestSeat = seat
            local players = CF.roomData:getPlayerDataBySeatId(seat) 
            self._requestName:setString(players:getNickName())
            if CF.roomData:getSelfSeat() == seat then
                self:changeToWaiteUI(true)
            end
        end

        local player = self._playersNode[seat]
        if player and self._isShowMore then
            CF.UITool.setText(player, KW_TEXT_STATE, statusChinese[status])
            CF.UITool.setTextColor(player, KW_TEXT_STATE, statusColor[status])
        end
    end  
end

function EarlyQuickStartUI:showSelf(zorder)
	zorder = zorder or CF.ZORDER.DIALOG
	local runningScene = display.getRunningScene()
    if runningScene then
        self:setName(EarlyQuickStartUI.ObjName)
        runningScene:addChild(self, zorder)
	end
	return self
end

function EarlyQuickStartUI:onBtnClose(send, eventType)
    CF.game:getModule("Dismiss"):sendRespondDismiss(false)
    self:removeSelf()
end

function EarlyQuickStartUI:onBtnAgreeEvent(send, eventType)
   CF.msgManager:sendGameStart()
   CF.msgManager:sendReqAdPlayerAgree(true)
   self:changeToWaiteUI(true)
end

function EarlyQuickStartUI:onBtnRefuseEvent(send, eventType)
    CF.msgManager:sendReqAdPlayerAgree(false)
    self:changeToWaiteUI(true)
end

return EarlyQuickStartUI�