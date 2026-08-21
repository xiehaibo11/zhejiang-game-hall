local TableInfoWindow = CF.gameClass("TableInfoWindow", CF.ViewBase)

function TableInfoWindow:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/ShengZhou/TableInfo.csb"
end

function TableInfoWindow:getBindingInfo()
    return {
        ["_KW_PANEL_ANTE"] = {varName="_antePanel"},
        ["_KW_BTN_ANTE_1"] = {varName="_anteBtn_1",type = CF.UI_TYPE.BUTTON,onTouchEnded = "onAnteBtnClicked"},
        ["_KW_BTN_ANTE_2"] = {varName="_anteBtn_2",type = CF.UI_TYPE.BUTTON,onTouchEnded = "onAnteBtnClicked"},
        ["_KW_BTN_ANTE_3"] = {varName="_anteBtn_3",type = CF.UI_TYPE.BUTTON,onTouchEnded = "onAnteBtnClicked"},
        ["_KW_UI_REPLACE_SEAT_1"] = {varName="_replacePanel_1"},
        ["_KW_UI_REPLACE_SEAT_2"] = {varName="_replacePanel_2"},
        ["_KW_UI_REPLACE_SEAT_3"] = {varName="_replacePanel_3"},
        ["_KW_UI_REPLACE_SEAT_4"] = {varName="_replacePanel_4"},
		--by Ruzibeil
		["_KW_UI_HINT_SANTAN"] = {varName="_uihintsantan"},
		["_KW_TEXT_HINT_SANTAN"] = {varName="_txthintsantan"},
    }
end

--by Ruzibeil
TableInfoWindow.SANTAN_HINTINFO =
{
	[CF.GameDefine.SANTAN_HINT_ENUM.SELF_SANTAN] = "您已经吃碰杠%s玩家2次,请注意承包",
	[CF.GameDefine.SANTAN_HINT_ENUM.OTHER_SANTAN] = "您已经被%s玩家吃碰杠2次,请注意承包",
}

function TableInfoWindow:getProxyEvents()
    return {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_ANTE", callBack = "onShowAnte"},
        {module = CF.game:getModule("WinLost"), eventKeyName = "EVENT_SHOW_HU_ANI", callBack = "onShowHuAni"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_SANTAN_HINT", callBack = "onShowSanTanInfo"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_CLEAR_SANTAN_HINT", callBack = "clearSanTanHintActionsOnRelink"},
    }
end

function TableInfoWindow:onShowAnte(event)
    if event.msg == nil then
        return
    end
    if event.msg.show == nil then
        return
    end
    self._antePanel:setVisible(event.msg.show)
end

function TableInfoWindow:onAnteBtnClicked(send, eventType)
    local Num = CF.StringTool.getNumberSuffixByString(send:getName())
    CF.msgManager:sendPlayerAnte(Num - 1)
    self._antePanel:setVisible(false)
end

function TableInfoWindow:onShowHuAni(event)
    if event.msg == nil then
        return
    end
    local localSeat = event.msg.localSeat
    local huType = event.msg.huType

    local panelUI = {"_replacePanel_1", "_replacePanel_2", "_replacePanel_3", "_replacePanel_4"}
    local aniPanel = self[panelUI[localSeat]]
    if aniPanel == nil then return end

    local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
    local aniPath = "res/animation/Mahjong/ShengZhou/Sx_niao/Sx_niao.ExportJson"
    local aniName = nil
    if huType == WinLostFanConfig.HuType.NONE then
        return
    elseif huType == WinLostFanConfig.HuType.FANG_CHONG then
        aniName = "fangchong"
    elseif huType == WinLostFanConfig.HuType.ZI_MO then
        aniName = "zimo"
    elseif huType == WinLostFanConfig.HuType.QIANG_GANG_HU then
        aniName = "qianggang"
    elseif huType == WinLostFanConfig.HuType.GANG_KAI_HU then
        aniName = "gangkai"
    elseif huType == WinLostFanConfig.HuType.CAI_NIAO then
        aniName = "cainiao"
    elseif huType == WinLostFanConfig.HuType.FEI_NIAO then
        aniName = "feiniao"
    elseif huType == WinLostFanConfig.HuType.SHAUNG_FEI then
        aniName = "shuangniao"
    elseif huType == WinLostFanConfig.HuType.SAN_FEI then
        aniName = "sanfei"
    end
    if aniName and aniName ~= "" then
        aniPanel:stopAllActions()
        aniPanel:removeAllChildren()
        aniPanel:setVisible(true)
        CF.UITool.playJsonAnimationByName(aniPanel, "Sx_niao", aniPath, 0, aniName, nil, nil, function()
            aniPanel:setVisible(false)
        end)
    end
end

---------------------------------------------------------
--@brief 异步顺序显示三摊提示消息
--@param
--@return
--by Ruzibeil
---------------------------------------------------------
function TableInfoWindow:onShowSanTanInfo(event)
    if not event.msg then
        return
    end
	local hintSanTan = event.msg.hintmsg
	local showTime = 2
	local function showEachSanTanHint(subHint)
		self._txthintsantan:setString(subHint)
		self._uihintsantan:setVisible(true)
		CF.SysTool.performWithDelayGlobal(function()
			 self._uihintsantan:setVisible(false)
        end,showTime)
	end
	local showHintSequence = {}
	for _,subHintSanTan in pairs(hintSanTan) do
		local hintInfoFormat = self.SANTAN_HINTINFO[subHintSanTan.hintType]
		if hintInfoFormat then
			local showMsg = string.format(hintInfoFormat,subHintSanTan.nickName)
			local aniShow = {}
			aniShow.callFunc = function()
				showEachSanTanHint(showMsg)
			end
			table.insert(showHintSequence,aniShow)
		end
	end
	local aniSequence = nil
	for _,subshowSeq in pairs(showHintSequence) do
		if not aniSequence then
			local curAniCnt = cc.Director:getInstance():getActionManager():getNumberOfRunningActionsInTarget(self._uihintsantan)
			if   curAniCnt > 0 then
				local delayTime = (showTime + 1) * curAniCnt
				aniSequence = cc.Sequence:create(cc.DelayTime:create(delayTime),cc.CallFunc:create(subshowSeq.callFunc),cc.DelayTime:create(showTime))
			else
				aniSequence = cc.Sequence:create(cc.CallFunc:create(subshowSeq.callFunc),cc.DelayTime:create(showTime))
			end
		else
			local concatSeq = cc.Sequence:create(cc.CallFunc:create(subshowSeq.callFunc),cc.DelayTime:create(showTime))
			aniSequence = cc.Sequence:create(aniSequence,concatSeq)
		end
	end
	if aniSequence then
		self._uihintsantan:runAction(aniSequence)
	end
end

---------------------------------------------------------
--@brief 重连时清除所有动画
--@param
--@return
--by Ruzibeil
---------------------------------------------------------
function TableInfoWindow:clearSanTanHintActionsOnRelink()
	self._uihintsantan:stopAllActions()
	self._uihintsantan:setVisible(false)
end

return TableInfoWindow"