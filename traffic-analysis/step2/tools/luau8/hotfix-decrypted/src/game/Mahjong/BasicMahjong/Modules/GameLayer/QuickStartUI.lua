local QuickStartUI = CF.gameClass("QuickStartUI", CF.ViewBase)

local KW_IMG_HEAD_FRAME = "KW_IMG_HEAD_FRAME"
local KW_TEXT_NICK_NAME = "KW_TEXT_NICK_NAME"
local KW_TEXT_STATE = "KW_TEXT_STATE"
local KW_DEFAULT_HEAD_IMG_NAME = "KW_DEFAULT_HEAD_IMG_NAME"

QuickStartUI.Status = {
    REFUSE = 1,      --拒绝
    AGREE = 2,       --同意
    WAIT = 3,         --等待
    DEFAULT = 4,     --选择中
}

QuickStartUI.ClsName = "QuickStartUI"
QuickStartUI.ObjName = "QuickStartUI"

local statusChinese = {"拒绝", "同意", "选择中...","选择中..."}
local statusColor = {cc.c3b(242, 51, 51), cc.c3b(9, 168, 1), cc.c3b(134, 134, 134),   cc.c3b(134, 134, 134),}

function QuickStartUI:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/QuickGame.csb"
end

function QuickStartUI:getBindingInfo()
    return {
        ["_KW_IMG_BG"] = {varName="_imgBg"},
        ["_KW_TEXT_NICK_NAME"] = {varName="_requestName"},
        ["_KW_TEXT_PLAYER_COUNT"] = {varName="_playerCount"},
        ["_KW_TEXT_OUT_TIME_TIP"] = {varName="_outTimeTip"},
        ["_KW_IMG_CLOCK"] = {varName="_clockRoot"},
        ["_KW_TEXT_CLOCK_TIP"] = {varName="_clockTip"},
        ["_KW_PANEL_PLAYER_MOD"] = {varName="_playerMod"},
        ["_KW_BTN_CLOSE"] = {varName="_btnClose",type = CF.UI_TYPE.BUTTON,onTouchEnded="onBtnClose"},
        ["_KW_BTN_REFUSE"] = {varName="_btnRefuse",type = CF.UI_TYPE.BUTTON,onTouchEnded="onBtnRefuseEvent"},
        ["_KW_BTN_AGREE"] = {varName="_btnAgree",type = CF.UI_TYPE.BUTTON,onTouchEnded="onBtnAgreeEvent"},
    }
end

function QuickStartUI:getProxyEvents()
    return {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_UPDATE_QUICK_UI", callBack = "onUpdateQuickStartUI"},
    }
end

function QuickStartUI:ctor(param)
    param = param or {}
    QuickStartUI.super.ctor(self, param)

    self._isShowMore = param.isShowMore or false
    self._timeLimit = param.time or 0
    self._playerCount:setString("是否同意更换为【"..param.nPlayerCnt.."人】立即开始？")
    self._nFirstLaunchSeat = param.nFirstLaunchSeat
    self._playersNode = {}

    self:createChildren()
end

function QuickStartUI:createChildren()
    self:startclock(self._timeLimit)
    if self._isShowMore then
        self:initPlayersInfo()
    end
end

function QuickStartUI:initPlayersInfo()
    local players = CF.roomData:getPlayerDatas() 
    local playerCount = CF.roomData:getCurPlayerCount()
    local seatList = {}
    for _, player in pairs(players) do
        local seat = player:getSeat()
        table.insert(seatList, seat)
    end
    table.sort(seatList)
    for _, player in pairs(players) do
        local status = QuickStartUI.Status.DEFAULT
        local seat = player:getSeat()
        local url = player:getAvatarUrl()
        local name = CF.StringTool.cutStringByLength(player:getNickName())
        local tempSeat = 0
        if playerCount == 2 then
            tempSeat = seat > 0 and 1 or seat
        elseif playerCount == 3 then
            if seatList[2] == 2 then
                tempSeat = seat > 0 and seat - 1 or seat
            else
                tempSeat = seat > 1 and 2 or seat
            end
        end
        local tmpPlayerNode = self._playerMod:clone()
        if tmpPlayerNode then
            CF.UITool.setText(tmpPlayerNode, KW_TEXT_NICK_NAME, name)
            CF.UITool.setText(tmpPlayerNode, KW_TEXT_STATE, statusChinese[status])
            CF.UITool.setTextColor(tmpPlayerNode, KW_TEXT_STATE, statusColor[status])
            local headPosNode = CF.UITool.seekNodeByName(tmpPlayerNode, KW_IMG_HEAD_FRAME)
            self:updateImg(headPosNode, url)
            tmpPlayerNode:setPosition(self:calPlayerInfo(tempSeat, playerCount))
                        :addTo(self._imgBg)
            self._playersNode[seat] = tmpPlayerNode
        end
    end
end

function QuickStartUI:calPlayerInfo(seat, playerCount)
    local itemSize = self._playerMod:getContentSize()
    local displaySize = self._imgBg:getContentSize()
    local averWidth = (displaySize.width - itemSize.width * playerCount) / (playerCount + 1)
    return cc.p((averWidth + itemSize.width / 2) + (itemSize.width + averWidth) * seat, displaySize.height * 0.42)
end

function QuickStartUI:changeToWaiteUI(isChange)
    isChange = isChange or false
    self._btnAgree:setVisible(not isChange)
    self._btnRefuse:setVisible(not isChange)
    
    if self._isShowMore then
        self._clockRoot:setVisible(isChange and self._timeLimit > 0)
        self._outTimeTip:setVisible(not isChange)
    else
        self:removeSelf()
    end
end

function QuickStartUI:setColockTime(tm)
    tm = tm or 0
    local tipStr = tm .. "秒     等待结果......"
    local tipStr2 = "(超过" .. tm .. "秒未做选择,则默认拒绝)"
    self._clockTip:setString(tipStr)
    self._outTimeTip:setString(tipStr2)
end

function QuickStartUI:startclock(tm)
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

function QuickStartUI:updateImg(node, url)
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

function QuickStartUI:onUpdateQuickStartUI(event)
    local status = event.msg.status or QuickStartUI.Status
    local isRemove = event.msg.isRemove or false
    if isRemove then
        self:removeSelf()
        return
    end
    if status[CF.roomData:getSelfSeat()] ~= QuickStartUI.Status.WAIT then
        self:changeToWaiteUI(true)
    end
    for seat = 0, 3 do
        local players = CF.roomData:getPlayerDataBySeatId(seat)
        if players and self._nFirstLaunchSeat == seat then
            self._requestName:setString(players:getNickName())
        end
        local player = self._playersNode[seat]
        if player and self._isShowMore then
            CF.UITool.setText(player, KW_TEXT_STATE, statusChinese[status[seat]])
            CF.UITool.setTextColor(player, KW_TEXT_STATE, statusColor[status[seat]])
        end
    end
end

function QuickStartUI:showSelf(zorder)
	zorder = zorder or CF.ZORDER.DIALOG
	local runningScene = display.getRunningScene()
    if runningScene then
        self:setName(QuickStartUI.ObjName)
        runningScene:addChild(self, zorder)
	end
	return self
end

function QuickStartUI:onBtnClose(send, eventType)
    CF.msgManager:sendGameQuickStart(1)
    self:removeSelf()
end

function QuickStartUI:onBtnAgreeEvent(send, eventType)
   CF.msgManager:sendGameQuickStart(2)
   self:changeToWaiteUI(true)
end

function QuickStartUI:onBtnRefuseEvent(send, eventType)
    CF.msgManager:sendGameQuickStart(1)
    self:changeToWaiteUI(true)
end

return QuickStartUI�