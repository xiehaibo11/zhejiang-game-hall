local ShareHmqNode = class("ShareHmqNode",XH.ViewBase)

ShareHmqNode.KW_NAME_SHARE_HMQ = "KW_NAME_SHARE_HMQ"

local KW_CONFIG_PRIZEGOT = {
    HAVE_GOT_FIRST = 1,
    HAVE_GOT_SECOND = 2,
}

local KW_CONTENT_TEXT = {
    [1] = "2小时以后可以再次领取奖励",
    [2] = "明日再来领取奖励"
}

function ShareHmqNode:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/ShareHmqAct.csb"
end

function ShareHmqNode:ctor(param)
    param = param or {}
    ShareHmqNode.super.ctor(self,param) 
    self.csbNode = self
	self:setName(self.KW_NAME_SHARE_HMQ)
    self._playerData = {}
    XH.lobby:getModule("TabsActivity"):reqGetShareInfo()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.GOLD_SHARE_NEW_HMQ_SHARE_PUSH, nil, {area_id = XH.areaData:getAreaID()})
end

function ShareHmqNode:getBindingInfo()
    return {
        ["_KW_BTN_SHARE_FRIENDS"] = { varName = "_btnShare", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventShare" },
        ["_KT_TIME_PANEL"] = { varName = "_timePanel" },
        ["_KW_TEXT_TIME_"] = { beginIndex = 1, endIndex = 3, varName = "_timeText"},
        ["_KW_IMG_GOT_PRIZE_"] = { beginIndex = 1, endIndex = 2, varName = "_getPrize"},
    }
end

function ShareHmqNode:getProxyEvents()
    return {
        { module = XH.lobby:getModule("TabsActivity"), eventKeyName = "EVENT_SHARE_TO_HMQ_SUCCESS", callBack = "onShareSuccessCallBack" },
        { module = XH.lobby:getModule("TabsActivity"), eventKeyName = "EVENT_HMQ_GET_SHARE_INFO", callBack = "onGetShareInfoMsg" },
        { module = XH.lobby:getModule("TabsActivity"), eventKeyName = "EVENT_HMQ_GET_SHARE_AWARD", callBack = "onGetShareAwardInfo" },
        { module = XH.lobby:getModule("TabsActivity"), eventKeyName = "EVENT_CLOSE_TABS_ACTIVITY", callBack = "onGetCloseInfo" },
    }
end

function ShareHmqNode:reqShareAwardFailed()
    --
end

function ShareHmqNode:onTouchEventShare(send, eventType)
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.TABS_ACTIVITY_SHARE_CARD)
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.TABS_ACTIVITY_JOINACT)
    if self._timePanel:isVisible() then
        XH.lobby:getModule("Share"):share()
    else
        XH.lobby:getModule("Share"):setShareScene("大厅", "分享送房卡")
        XH.lobby:getModule("Share"):startShareFzb(self.onGetShareAward, self.reqShareAwardFailed, self)
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.GOLD_SHARE_NEW_HMQ_SHARE_CLICK, nil, {area_id = XH.areaData:getAreaID()})
end

function ShareHmqNode:onGetShareAward()
    XH.lobby:getModule("TabsActivity"):onShareToMomentByHmq()
end

-- 界面处理
function ShareHmqNode:updateUI()
    local msgData = self._playerData
    if msgData then
        if msgData.waitTime > 0 then
            self._timePanel:setVisible(true)
            self:removeEvent()
            self._tempScheduleScriptID = cc.Director:getInstance():getScheduler():scheduleScriptFunc( function()
                if self.refreshHmqActTime then
                    self:refreshHmqActTime()
                end
            end , 1.0, false)
        end
        self._getPrize1:setVisible(msgData.awardTimes >= KW_CONFIG_PRIZEGOT.HAVE_GOT_FIRST)
        self._getPrize2:setVisible(msgData.awardTimes >= KW_CONFIG_PRIZEGOT.HAVE_GOT_SECOND)
        self:refreshHmqActTime()
    end
end

-- 刷新时间
function ShareHmqNode:refreshHmqActTime()
    local hour = string.format("%02d", math.modf(self._playerData.waitTime / 3600))
    local min = string.format("%02d", math.modf(self._playerData.waitTime % 3600 / 60))
    local second = string.format("%02d", math.modf(self._playerData.waitTime % 3600 % 60))
    self._playerData.waitTime = self._playerData.waitTime - 1
    if self._playerData.waitTime < 0 then
        self._playerData.waitTime = 0
        self._timePanel:setVisible(false)
        self:removeEvent()
    else
        self._timeText1:setText(hour)
        self._timeText2:setText(min)
        self._timeText3:setText(second)
    end
end

-- 分享成功后处理
function ShareHmqNode:onShareSuccessCallBack(msg)
    local shareTimes = self._playerData.awardTimes or 0
    if shareTimes >= KW_CONFIG_PRIZEGOT.HAVE_GOT_SECOND then
--        XH.TipTool.showTip( {
--            type = XH.TIP_LAYER_TYPE.OK,
--        } , "今日分享获得奖励已达上限~")
        return
    end
    XH.lobby:getModule("TabsActivity"):reqGetShareAward(shareTimes + 1)
end

-- 获取到玩家信息
function ShareHmqNode:onGetShareInfoMsg(msg)
    if msg then
        self._playerData = msg.data
        self:updateUI()
    end
end

-- 分享成功后请求奖励后处理
function ShareHmqNode:onGetShareAwardInfo(msg)
    if msg.data then
        local exTextContent = KW_CONTENT_TEXT[self._playerData.awardTimes + 1] or ""
        XH.TipTool.showTip( {
            type = XH.TIP_LAYER_TYPE.OK,
        } , msg.data .. "\n" .. exTextContent)
        XH.lobby:getModule("TabsActivity"):reqGetShareInfo()
        XH.playerData:flushPlayerDrop()
        XH.playerData:flushGoldCoin()
    end
end

-- 监听关闭事件
function ShareHmqNode:onGetCloseInfo()
    self:removeEvent()
end

function ShareHmqNode:removeEvent()
    if self._tempScheduleScriptID then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._tempScheduleScriptID)
        self._tempScheduleScriptID = nil
    end
end

return ShareHmqNode�