local ContinueView = CF.gameClass("ContinueView", CF.ViewBase)

local KW_IMG_HEAD_FRAME = "KW_IMG_HEAD_FRAME"
local KW_TEXT_NICK_NAME = "KW_TEXT_NICK_NAME"
local KW_TEXT_STATE = "KW_TEXT_STATE"
local KW_DEFAULT_HEAD_IMG_NAME = "KW_DEFAULT_HEAD_IMG_NAME"

ContinueView.Status = {
    DEFAULT = 1, --选择中
    AGREE = 2, --同意
    REFUSE = 3, --拒绝
    REQUEST = 4 --请求解散
}

ContinueView.DisplayStatus = {
    DEFAULT = 1, --默认显示
    REMOVE = 2, --移除
    HIDE = 3, --隐藏
    SHOW = 4 --隐藏后显示
}

ContinueView.ClsName = "ContinueView"
ContinueView.ObjName = "ContinueView"

local statusChinese = {"选择中...", "同意", "拒绝", "同意"}
local statusColor = {cc.c3b(134, 134, 134), cc.c3b(9, 168, 1), cc.c3b(242, 51, 51), cc.c3b(9, 168, 1)}

function ContinueView:ctor(param)
    param = param or {}
    ContinueView.super.ctor(self, param)

    --requestSeat 字段不传表示使用没有头像的UI
    self._isShowMore = param.isShowMore or false
    self._requestSeat = param.requestSeat or -1
    self._timeLimit = param.time or 0
    self._playersNode = {}

    self:createChildren()
end

function ContinueView:getCSBPath()
    return "cocosStudio/Common/CSB/Continue.csb"
end

function ContinueView:getBindingInfo()
    return {
        ["_KW_IMG_BG"] = {varName = "_imgBg"},
        ["_KW_TEXT_NICK_NAME"] = {varName = "_requestName"},
        ["_KW_TEXT_OUT_TIME_TIP"] = {varName = "_outTimeTip"},
        ["_KW_IMG_CLOCK"] = {varName = "_clockRoot"},
        ["_KW_TEXT_CLOCK_TIP"] = {varName = "_clockTip"},
        ["_KW_PANEL_PLAYER_MOD"] = {varName = "_playerMod"},
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnClose"},
        ["_KW_BTN_REFUSE"] = {varName = "_btnRefuse", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnRefuseEvent"},
        ["_KW_BTN_AGREE"] = {varName = "_btnAgree", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnAgreeEvent"},
        ["_KW_ORIGIN_POS"] = {varName = "_uOriginPos"},
        ["_KW_ANI_END_POS"] = {varName = "_uAniEndPos"}
    }
end

function ContinueView:getProxyEvents()
    return {
        {module = CF.game:getModule("Continue"), eventKeyName = "EVENT_UPDATE_CONTINUE_UI", callBack = "onUpdateContinueUI"}
    }
end

function ContinueView:createChildren()
    self:startclock(self._timeLimit)

    if self._isShowMore then
        self:initPlayersInfo()
    end

    self:updateCloseBtn()
end

function ContinueView:initPlayersInfo()
    local players = CF.roomData:getPlayerDatas()
    local playerCount = CF.roomData:getCurPlayerCount()

    for i, player in pairs(players) do
        local status = ContinueView.Status.DEFAULT
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
            local pos = self:calPlayerInfo(i-1, playerCount)
            tmpPlayerNode:setPosition(pos):addTo(self._imgBg)
            self._playersNode[seat] = tmpPlayerNode
        end

        if self._requestSeat == seat then
            self._requestName:setString(player:getNickName())
            CF.UITool.setText(tmpPlayerNode, KW_TEXT_STATE, statusChinese[ContinueView.Status.REQUEST])
            CF.UITool.setTextColor(tmpPlayerNode, KW_TEXT_STATE, statusColor[ContinueView.Status.REQUEST])
            self:changeToWaiteUI(CF.roomData:getSelfSeat() == seat)
        end
    end
end

function ContinueView:calPlayerInfo(seat, playerCount)
    local itemSize = self._playerMod:getContentSize()
    local displaySize = self._imgBg:getContentSize()

    local averWidth = (displaySize.width - itemSize.width * playerCount) / (playerCount + 1)
    return cc.p((averWidth + itemSize.width / 2) + (itemSize.width + averWidth) * seat, displaySize.height / 2)
end

function ContinueView:changeToWaiteUI(isChange)
    isChange = isChange or false
    self._btnAgree:setVisible(not isChange)
    self._btnRefuse:setVisible(not isChange)

    if self._isShowMore then
        self._clockRoot:setVisible(isChange and self._timeLimit > 0)
        self._outTimeTip:setVisible(not isChange)
    else
        self:close()
    end
end

function ContinueView:setColockTime(tm)
    tm = tm or 0
    local tipStr = tm .. "秒     等待结果......"
    local tipStr2 = "(超过" .. tm .. "秒未做选择,则默认拒绝)"
    self._clockTip:setString(tipStr)
    self._outTimeTip:setString(tipStr2)
end

function ContinueView:startclock(tm)
    tm = tm or 0
    local isHaveTimeLimit = tm > 0
    self._clockRoot:setVisible(false)
    self._outTimeTip:setVisible(isHaveTimeLimit)

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

function ContinueView:updateImg(node, url)
    if not node then
        return
    end

    local headImg = CF.UITool.seekNodeByName(node, KW_DEFAULT_HEAD_IMG_NAME)
    if headImg == nil then
        local size = node:getContentSize()
        headImg =
            CF.RemoteImage.new():setPosition(size.width / 2, size.height / 2):ignoreContentAdaptWithSize(false):setContentSize(size.width, size.height):setName(KW_DEFAULT_HEAD_IMG_NAME):addTo(node)
    end
    headImg:setUrl(url)
end

function ContinueView:updateCloseBtn()
    --如果大结束不存在，隐藏关闭按钮
    local layer = display.getRunningScene():getChildByName("BigWinLostUI")
    if layer then
        self._btnClose:setVisible(true)
    else
        self._btnClose:setVisible(false)
    end
end

function ContinueView:onUpdateContinueUI(event)
    local seat = event.msg.seat
    local status = event.msg.status or ContinueView.Status.DEFAULT
    local remove = event.msg.remove or false
    local displaySataus = event.msg.displaySataus or ContinueView.DisplayStatus.DEFAULT

    --兼容老的版本
    if remove then
        displaySataus = ContinueView.DisplayStatus.REMOVE
    end

    self:updateCloseBtn()

    if displaySataus == ContinueView.DisplayStatus.REMOVE then
        self:close() -- 移除自己
        return
    elseif displaySataus == ContinueView.DisplayStatus.HIDE then
        -- 隐藏自己
        self:closeAni()
        return
    elseif displaySataus == ContinueView.DisplayStatus.SHOW then
        self:showAni()
        return
    end

    if seat then
        if status == ContinueView.Status.REQUEST then
            self._requestSeat = seat
            local players = CF.roomData:getPlayerDataBySeatId(seat)
            if players then
                self._requestName:setString(players:getNickName())

                if CF.roomData:getSelfSeat() == seat then
                    self:changeToWaiteUI(true)
                end
            end
        end

        local player = self._playersNode[seat]
        if player and self._isShowMore then
            CF.UITool.setText(player, KW_TEXT_STATE, statusChinese[status])
            CF.UITool.setTextColor(player, KW_TEXT_STATE, statusColor[status])
        end
    end
end

function ContinueView:showSelf(zorder)
    zorder = zorder or CF.ZORDER.TIPLAYER
    local runningScene = display.getRunningScene()
    if runningScene then
        self:setName(ContinueView.ObjName)
        runningScene:addChild(self, zorder)
    end
    return self
end

function ContinueView:closeAni()
    local aniTime = 0.3
    local scaleAni = cc.ScaleTo:create(aniTime, 0.12)
    local moveAni = cc.MoveTo:create(aniTime, cc.p(self._uAniEndPos:getPosition()))
    local moveAndScaleAni = cc.Spawn:create(scaleAni, moveAni)
    local afterAniCall = function()
        self:setVisible(false)
    end
    local closeAni = cc.Sequence:create(moveAndScaleAni, cc.DelayTime:create(aniTime), cc.CallFunc:create(afterAniCall))
    self._imgBg:runAction(closeAni)
end

function ContinueView:showAni()
    self._imgBg:setScale(1)
    self._imgBg:setPosition(self._uOriginPos:getPosition())
    self:setVisible(true)
end

function ContinueView:onBtnClose(send, eventType)
    self:closeAni()
end

function ContinueView:onBtnAgreeEvent(send, eventType)
    CF.game:getModule("Continue"):doAgree()
    XH.NewThrowDataManager:throwData("ws25121901", {page_item_id="同意"})
    self:changeToWaiteUI(true)
end

function ContinueView:onBtnRefuseEvent(send, eventType)
    CF.game:getModule("Continue"):doRefuse()
    XH.NewThrowDataManager:throwData("ws25121901", {page_item_id="拒绝"})
    self:changeToWaiteUI(true)
end

return ContinueView
%