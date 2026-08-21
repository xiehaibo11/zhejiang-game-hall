local TableInfoUI = CF.gameClass("TableInfoUI", CF.ViewBase)

TableInfoUI.SANTAN_HINTINFO = 
{
	[CF.GameDefine.SANTAN_HINT_ENUM.SELF_SANTAN] = "您已经吃碰杠%s玩家2次,请注意承包",
	[CF.GameDefine.SANTAN_HINT_ENUM.OTHER_SANTAN] = "您已经被%s玩家吃碰杠2次,请注意承包",
}

function TableInfoUI:getCSBPath()
    return "res/cocosStudio/MahjongNew/GameLayer/CSB/JiaXing/JiaXingInfo.csb"
end

function TableInfoUI:getBindingInfo()
    return {
        ["_KW_PANEL_HUANGFAN"] = {varName="_panelHuangFan"},
        ["_KW_HUANGFAN_NONE"] = {varName="_huangfanNone"},
        ["_KW_HUANGFAN_SHOW"] = {varName="_huangfanShow"},
        ["_KW_HUANGFAN_LABEL"] = {varName="_huangfanLabel"},
        ["_KW_HUANGFAN_CNT"] = {varName="_huangfanCnt"},
        ["_KW_PANEL_TOUZI"] = {varName="_touziPanel"},
        ["_KW_IMG_TOUZI_1"] = {varName="_touziImg1"},
        ["_KW_IMG_TOUZI_2"] = {varName="_touziImg2"},
        ["_KW_CLOCK_FRAME"] = {varName="_clockFrame"},
        ["_KW_UI_HINT_SANTAN"] = {varName="_uihintsantan"},  
        ["_KW_TEXT_HINT_SANTAN"] = {varName="_txthintsantan"}, 
    }
end

function TableInfoUI:getProxyEvents()
    return {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_HUANGFAN", callBack = "onShowHuangFan"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_HIDE_JX_INFO", callBack = "onHideAll"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_UPDATE_TOUZI", callBack = "onUpdateTouZi"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_SANTAN_HINT", callBack = "onShowSanTanInfo"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_CLEAR_SANTAN_HINT", callBack = "clearSanTanHintActionsOnRelink"}
    }
end

function TableInfoUI:onHideAll(event)
    self._touziPanel:setVisible(false)
    self._huangfanNone:setVisible(false)
    self._huangfanShow:setVisible(false)
end

function TableInfoUI:updateNewUIPosition()
    if self._clockFrame then
        local clockW = 206
        local clockH = 200
        local hfW = 142
        local hfH = 50
        -- local py = self._clockFrame:getPositionY() + clockH/2 - hfH/2 + 5
        local ty = self._clockFrame:getPositionY() - clockH/2 + hfH/2 - 5
        local target = cc.Application:getInstance():getTargetPlatform()
        if target == cc.PLATFORM_OS_IPAD then
            ty = ty - 15
        end
        local tx = self._clockFrame:getPositionX() - clockW/2 - hfW
        local huangfanX = self._clockFrame:getPositionX() + clockW/2
        self._panelHuangFan:setPosition(cc.p(huangfanX, ty))
        self._touziPanel:setPosition(cc.p(tx, ty))
    end
end

--更新骰子
function TableInfoUI:onUpdateTouZi(event)
    if event.msg == nil then
        return
    end
    local x = self._touziPanel:getPositionX()
    print("x = " .. x)
    local name = string.format( "jx_chip_%d.png", event.msg.chips[1] )
    self._touziImg1:loadTexture(name, ccui.TextureResType.plistType)
    name = string.format( "jx_chip_%d.png", event.msg.chips[2] )
    self._touziImg2:loadTexture(name, ccui.TextureResType.plistType)
    self:updateNewUIPosition()
    --延迟显示
    self:performWithDelay(function() 
        self._touziPanel:setVisible(true)
    end, 1.5)
    
end

--显示黄番
function TableInfoUI:onShowHuangFan(event)    
    if event.msg.isShow then
        local gameData = CF.game:getModule("GameLayer"):getGameData()
        local _, cnt = gameData:getHuangFan()
        if cnt <= 0 then
            self._huangfanNone:setVisible(true)
            self._huangfanShow:setVisible(false)
        else
            self._huangfanNone:setVisible(false)
            self._huangfanShow:setVisible(true)
            self._huangfanCnt:setString(tonumber(string.format("%02d", cnt)))
        end
    else
        self._huangfanNone:setVisible(false)
        self._huangfanShow:setVisible(false)
    end
    self:updateNewUIPosition()
end

---------------------------------------------------------
--@brief 异步顺序显示三摊提示消息
--@param 
--@return
--by Ruzibeil
---------------------------------------------------------
function TableInfoUI:onShowSanTanInfo(event)
    if not event.msg then
        return
    end
	local hintSanTan = event.msg.hintmsg
	local showTime = 3
	local function showEachSanTanHint(subHint)
		self._txthintsantan:setString(subHint)
		self._uihintsantan:setVisible(true)
		self:performWithDelay(function()
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
			if  curAniCnt > 0 then
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
function TableInfoUI:clearSanTanHintActionsOnRelink()
	self._uihintsantan:stopAllActions()
	self._uihintsantan:setVisible(false)
end

return TableInfoUIm