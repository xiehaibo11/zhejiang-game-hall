local DismissView = CF.gameClass("DismissView", CF.ViewBase)

local KW_IMG_HEAD_FRAME = "KW_IMG_HEAD_FRAME"
local KW_TEXT_NICK_NAME = "KW_TEXT_NICK_NAME"
local KW_TEXT_STATE = "KW_TEXT_STATE"
local KW_DEFAULT_HEAD_IMG_NAME = "KW_DEFAULT_HEAD_IMG_NAME"

DismissView.Status = {
    DEFAULT = 1, --选择中
    AGREE = 2, --同意
    REFUSE = 3, --拒绝
    REQUEST = 4 --请求解散
}

DismissView.ClsName = "DismissView"
DismissView.ObjName = "DismissView"

local statusChinese = {"选择中...", "同意", "拒绝", "同意"}
local statusColor = {cc.c3b(134, 134, 134), cc.c3b(9, 168, 1), cc.c3b(242, 51, 51), cc.c3b(9, 168, 1)}

function DismissView:ctor(param)
    param = param or {}
     --paramTest
    DismissView.super.ctor(self, param)

    --requestSeat 字段不传表示使用没有头像的UI
    self._isShowMore = param.isShowMore or false
    self._requestSeat = param.requestSeat or -1
    self._timeLimit = param.time or 0
    self._playersNode = {}

    self:createChildren()
end

function DismissView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/GPDismissLayer.csb"
end

function DismissView:getBindingInfo()
    return {
        ["_KW_IMG_BG"] = {varName = "_imgBg"},
        ["_KW_TEXT_NICK_NAME"] = {varName = "_requestName"},
        ["_KW_TEXT_OUT_TIME_TIP"] = {varName = "_outTimeTip"},
        ["_KW_IMG_CLOCK"] = {varName = "_clockRoot"},
        ["_KW_TEXT_CLOCK_TIP"] = {varName = "_clockTip"},
        ["_KW_PANEL_PLAYER_MOD"] = {varName = "_playerMod"},
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnClose"},
        ["_KW_BTN_REFUSE"] = {varName = "_btnRefuse", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnRefuseEvent"},
        ["_KW_BTN_AGREE"] = {varName = "_btnAgree", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnAgreeEvent"}
    }
end

function DismissView:getProxyEvents()
    return {
        {module = CF.game:getModule("Dismiss"), eventKeyName = "EVENT_UPDATE_DISMISS_UI", callBack = "onUpdateDismissUI"},
        {module = CF.game:getModule("Dismiss"), eventKeyName = "EVENT_CLOSE_VIEW", callBack = "onCloseView"}
    }
end

function DismissView:createChildren()
    self:startclock(self._timeLimit)

    if self._isShowMore then
        self:initPlayersInfo()
    end

    self._btnClose:setVisible(false)
    self._clockTip:setVisible(false)
end

function DismissView:initPlayersInfo()
    local players = CF.roomData:getPlayerDatas()
    local playerCount = table.nums(players)
    for _, player in pairs(players) do
        local status = DismissView.Status.DEFAULT
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
            self:updateHeadFrame(headPosNode, player:getNumberID())
            tmpPlayerNode:setPosition(self:calPlayerInfo(seat, playerCount)):addTo(self._imgBg)
            self._playersNode[seat] = tmpPlayerNode
        end
    end
end

function DismissView:calPlayerInfo(seat, playerCount)
    local itemSize = self._playerMod:getContentSize()
    local displaySize = self._imgBg:getContentSize()

    local averWidth = (displaySize.width - itemSize.width * playerCount) / (playerCount + 1)
    return cc.p((averWidth + itemSize.width / 2) + (itemSize.width + averWidth) * seat, displaySize.height / 2)
end

function DismissView:changeToWaiteUI(isChange)
    isChange = isChange or false
    self._btnAgree:setVisible(not isChange)
    self._btnRefuse:setVisible(not isChange)

    if self._isShowMore then
        self._clockRoot:setVisible(isChange and self._timeLimit > 0)
        self._outTimeTip:setVisible(not isChange)
        self._clockTip:setVisible(isChange)
    else
        self:close()
    end
end

function DismissView:setColockTime(tm)
    tm = tm or 0
    local tipStr = tm .. "秒     等待结果......"
    local tipStr2 = "(超过" .. tm .. "秒未做选择,则默认同意)"
    self._clockTip:setString(tipStr)
    self._outTimeTip:setString(tipStr2)
end

function DismissView:startclock(tm)
    tm = tm or 0
    local isHaveTimeLimit = tm > 0
    self._clockRoot:setVisible(isHaveTimeLimit)
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

function DismissView:updateImg(node, url)
    if not node then
        return
    end

    if url == "" then
        url = "http://thirdwx.qlogo.cn/mmopen/vi_32/RZWHFDljz1SW2Azl6kZyxic4ziaibicnUPo8dB3YiaGbhpyx3Tq34Vemk6KqexyJQJtAphjc9TELicPuRryc0UQ4DPmw/132"
    end

    local headImg = CF.UITool.seekNodeByName(node, KW_DEFAULT_HEAD_IMG_NAME)
    if headImg == nil then
        local size = node:getContentSize()
        headImg =
            CF.RemoteImage.new():setPosition(size.width / 2, size.height / 2):ignoreContentAdaptWithSize(false):setContentSize(size.width, size.height):setName(KW_DEFAULT_HEAD_IMG_NAME):addTo(node)
    end
    headImg:setUrl(url)
end

function DismissView:onUpdateDismissUI(event)
    local seat = event.msg.seat
    local status = event.msg.status or DismissView.Status.DEFAULT
    local isRemove = event.msg.remove or false

    if isRemove then
        self:close()
        return
    end

    if seat then
        if status == DismissView.Status.REQUEST then
            self._requestSeat = seat
            local players = CF.roomData:getPlayerDataBySeatId(seat)
            if players then
                self._requestName:setString(players:getNickName())
                if CF.roomData:getSelfSeat() == seat then
                    self:changeToWaiteUI(true)
                end
            else
                self:close()
                return
            end
        elseif status == DismissView.Status.AGREE or status == DismissView.Status.REFUSE then
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

function DismissView:showSelf(zorder)
    zorder = zorder or CF.ZORDER.WINDOW
    local runningScene = display.getRunningScene()
    if runningScene then
        self:setName(DismissView.ObjName)
        runningScene:addChild(self, zorder)
    end
    return self
end

function DismissView:onBtnClose(send, eventType)
    CF.msgManager:sendGPDismiss(2)
    self:close()
end

function DismissView:onBtnAgreeEvent(send, eventType)
    CF.msgManager:sendGPDismiss(1)
    self:changeToWaiteUI(true)
    CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.TABLE_21)
end

function DismissView:onBtnRefuseEvent(send, eventType)
    CF.msgManager:sendGPDismiss(2)
    self:changeToWaiteUI(true)
    CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.TABLE_22)
end

function DismissView:onCloseView(event)
    self:close()
end

function DismissView:updateHeadFrame(node, numid)
    local headFrame = CF.roomData:getHeadFrameData(numid) or {}
    local GameBagUILogic = CF.gameRequire("Modules.GameBag.UILogic")
    GameBagUILogic.showHeadFrame(node, headFrame.frame_url, cc.size(0, 5), cc.size(45, 45), headFrame.propid)
end

return DismissView
