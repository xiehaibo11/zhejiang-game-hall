local QiaoFengLayer = CF.gameClass("QiaoFengLayer", CF.ViewBase)

function QiaoFengLayer:getCSBPath()
    return "res/cocosStudio/MahjongNew/GameLayer/CSB/QZLongYou/QiaoFengLayer.csb"
end

function QiaoFengLayer:getBindingInfo()
    return  {
        ["_KW_QIAOFENG_BTN_1"] = {varName = "_qiaoFenBtn1", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onQiaoFenBtnClick"},
        ["_KW_QIAOFENG_BTN_2"] = {varName = "_qiaoFenBtn2", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onQiaoFenBtnClick"},
        ["_KW_QIAOFENG_BTN_3"] = {varName = "_qiaoFenBtn3", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onQiaoFenBtnClick"},
        ["_KW_QIAOFENG_BTN_4"] = {varName = "_qiaoFenBtn4", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onQiaoFenBtnClick"},
        ["_KW_QIAOFENG_BTN_5"] = {varName = "_qiaoFenBtn5", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onQiaoFenBtnClick"},
        ["_KW_QIAOFENG_BTN_6"] = {varName = "_qiaoFenBtn6", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onQiaoFenBtnClick"},
        ["_KW_QIAOFENG_TIME"] = {varName = "_qiaoFenTimeText"},
    }
end

function QiaoFengLayer:ctor(param)
	QiaoFengLayer.super.ctor(self,param)
    self.timeout = param.timeout
    if QiaoFengLayer._qiaoFengScheduleID == nil then
        QiaoFengLayer._qiaoFengScheduleID = 0
    end

    if QiaoFengLayer._qiaoFengScheduleID ~= 0 then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(QiaoFengLayer._qiaoFengScheduleID)
        QiaoFengLayer._qiaoFengScheduleID = 0
    end
end

function QiaoFengLayer:getProxyEvents()
    return {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "CLOSE_QIAOFENG_WINDOW", callBack = "onEventClose"},
        { module = CF.game:getModule("GameLayer"), eventKeyName = "UPDATE_QIAOFENG_TEXT", callBack = "onEventCloseSeer"}
    }
end

--将窗体显示到屏幕
function QiaoFengLayer:showSelf(zorder)
	zorder = zorder or CF.ZORDER.WINDOW
	local runningScene = display.getRunningScene()
	if runningScene then
        runningScene:addChild(self, zorder)
        QiaoFengLayer._qiaoFengScheduleID = cc.Director:getInstance():getScheduler():scheduleScriptFunc(
            function ()
                if not self or tolua.isnull(self) then
                    return
                end
                if QiaoFengLayer._qiaoFengScheduleID == 0 then
                    return
                end
                self.timeout = self.timeout - 1
                if self.timeout < 1 then
                    self:close()
                else
                    self._qiaoFenTimeText:setString(tostring(self.timeout))
                end
            end
            ,1,false)
	end
	return self
end

--移除窗口
function QiaoFengLayer:shutDownSchedule()
    if QiaoFengLayer._qiaoFengScheduleID and QiaoFengLayer._qiaoFengScheduleID ~= 0 then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(QiaoFengLayer._qiaoFengScheduleID)
        QiaoFengLayer._qiaoFengScheduleID = 0
    end
end

function QiaoFengLayer:close()
    self:shutDownSchedule()
	self:removeSelf()
end

function QiaoFengLayer:onQiaoFenBtnClick(send, eventType)
    if CF.roomData and CF.roomData:getIsSeer() then
        return
    end
    local istr = CF.StringTool.getNumberSuffixByString(send:getName())
    local i = tonumber(istr)
    if i >= 1 and i <= 6 then
        self:sendQiaoFeng(i-1)
        self:close()
    end
end

function QiaoFengLayer:sendQiaoFeng(index)
    local msg = CF.GameProtocol.msgQiaoFengResp:new()
    msg.seat = CF.roomData:getSelfSeat()
    msg.qiaoFeng = index
    CF.netEngine.sendStreamPacket(msg)
end

function QiaoFengLayer:onEventClose(event)
    self:close()
end

function QiaoFengLayer:onEventCloseSeer()
    if CF.roomData and CF.roomData:getIsSeer() then
        self:close()
    end
end

return QiaoFengLayer8