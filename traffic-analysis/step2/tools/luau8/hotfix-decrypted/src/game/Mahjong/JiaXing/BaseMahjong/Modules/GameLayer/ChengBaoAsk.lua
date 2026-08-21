local ChengBaoAsk = class("ChengBaoAsk", CF.ViewBase)

ChengBaoAsk.ObjName = "ChengBaoAsk"
ChengBaoAsk.ClsName = "ChengBaoAsk"

function ChengBaoAsk:getCSBPath()
    return "res/cocosStudio/MahjongNew/GameLayer/CSB/JiaXing/ChengBaoAsk.csb"
end

function ChengBaoAsk:getBindingInfo()
    return {
        ["_KW_IMG_BG"] = {varName="_imgBg"},
        ["_KW_BTN_CLOSE"] = {varName="_btnClose", type = CF.UI_TYPE.BUTTON, onTouchEnded  = "onCloseBtnClick"},
        ["_KW_IMG_TITLE"] = {varName="_imgTitle"},
        ["_KW_TXT_NAME_1"] = {varName="_txtName1"},
        ["_KW_TXT_NAME_2"] = {varName="_txtName2"},
        ["_KW_IMG_CHENGBAO"] = {varName="_imgChengBao"},
        ["_KW_TXT_REMAINING_TIME"] = {varName="_txtRemainingTip"},
        ["_KW_TIP_CHENGBAO"] = {varName="_txtTip"},
        ["_KW_BUTTON_HINT_OK"] = {varName="_btnContinue", type = CF.UI_TYPE.BUTTON, onTouchEnded  = "onGenBtnClick"},
        ["_KW_BUTTON_HINT_CENCEL"] = {varName="_btnCancel", type = CF.UI_TYPE.BUTTON, onTouchEnded  = "onBuGenBtnClick"},
    }
end

function ChengBaoAsk:ctor(param)
    param = param or {}
    ChengBaoAsk.super.ctor(self,param)
    self:setName(self.ObjName)
    local name_CB = param[1]
    local name_FCB = param[2]
    local nRemainTime = param[3]
    local isWaiting = param[4]

    self.remainingTime = nRemainTime or 30
    self.remainingTime = os.time() + nRemainTime
    self.name1 = name_CB or ""
    self.name2 = name_FCB or ""
    self.isWaiting = isWaiting
end

function ChengBaoAsk:getProxyEvents()
    return {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "CLOSE_CHENGBAO_WINDOW", callBack = "onEventClose"},
    }
end

function ChengBaoAsk:showContent(name1, name2)
	local nodeName1 = self._txtName1
	local nodeName2 = self._txtName2
	if nodeName1~=nil then
		nodeName1:setString(name1)
	end
	if nodeName2~=nil then
		nodeName2:setString(name2)
	end
    
    local nodeRemainTime = self._txtRemainingTip
    if nodeRemainTime~=nil then
        nodeRemainTime:setString(self:getTimeString(self.remainingTime - os.time()))
    end

    if self._chengbaoScheduleID == 0 then
        self._chengbaoScheduleID = cc.Director:getInstance():getScheduler():scheduleScriptFunc(
            function ()
                local tmptime = self.remainingTime - os.time()
                if tmptime < 0 then
                    self:shutDownSchedule()
                    return
                end
                self._txtRemainingTip:setString(self:getTimeString(tmptime))
            end
            ,0.5,false)
    end
end

function ChengBaoAsk:getTimeString(remainTime)
    local retStr = ""
    local min = math.floor(remainTime / 60)
    local second = remainTime % 60

	if remainTime < 0 then
		return "已自动放弃"
	end
    
    if min > 0 then
        retStr = retStr .. min .. "分"
    end
    if second > 0 then
        retStr = retStr .. second .. "秒后"
    elseif second == 0 then
        if min == 0 then
            retStr = ""
        else
            retStr = retStr .. "钟后"
        end
    end
    retStr = retStr .. "无操作，将自动放弃"
    return retStr
end

--将窗体显示到屏幕
function ChengBaoAsk:showSelf(zorder)
	zorder = zorder or CF.ZORDER.WINDOW
	local runningScene = display.getRunningScene()
	if runningScene then
        runningScene:addChild(self, zorder)

        if self.isWaiting then
            self._btnContinue:setVisible(false)
            self._btnCancel:setVisible(false)
            self._txtTip:setVisible(true)
        else
            self._btnContinue:setVisible(true)
            self._btnCancel:setVisible(true)
            self._txtTip:setVisible(false)
        end
        self:showContent(self.name1, self.name2)
    end
	return self
end

function ChengBaoAsk:shutDownSchedule()
    if self._chengbaoScheduleID and self._chengbaoScheduleID ~= 0 then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._chengbaoScheduleID)
        self._chengbaoScheduleID = 0
    end
end

function ChengBaoAsk:close()
    self:shutDownSchedule()
	ChengBaoAsk.super.close(self)
end

function ChengBaoAsk:onGenBtnClick(send, eventType)
    self._btnContinue:setVisible(false)
    self._btnCancel:setVisible(false)
    self._txtTip:setVisible(true)
    CF.msgManager:sendGenOrBuGen(4)
end

function ChengBaoAsk:onBuGenBtnClick(send, eventType)
    self._btnContinue:setVisible(false)
    self._btnCancel:setVisible(false)
    self._txtTip:setVisible(true)
    CF.msgManager:sendGenOrBuGen(5)
end

function ChengBaoAsk:onEventClose(event)
    self:close()
end

return ChengBaoAsk�