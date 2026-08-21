local WinLostView = CF.gameClass("WinLostView", "game.Mahjong.BasicMahjong.Modules.WinLost.View")

WinLostView.EndType =
{
    [0] = "settle_text_dismiss.png",  --逃跑
    [1] = "settle_text_zimo.png",  --自摸
    [2] = "settle_text_dianpao.png",  --点炮
    [3] = "settle_text_qianggang.png", --抢杠
    [5] = "settle_text_liuju.png", --流局
}

function WinLostView:getProxyEvents()
    local proxyEvents = WinLostView.super.getProxyEvents(self)
    local winLostData = self:getWinLostData()
    proxyEvents[#proxyEvents + 1] = { module = winLostData, eventKeyName = "EVENT_RESULT_SET_GAMERULE", callBack = "onSetGameRule" }
    return proxyEvents
end

function WinLostView:createChildren()
    local SettleItemNode = CF.gameRequire("Modules.WinLost.ItemNode")
	local len = CF.roomData:getChairs()
	for i = 1, len do
		local item = SettleItemNode.new({seatId = i - 1})
		self._listView:addChild(item)
	end

	--房间号
	local roomId = CF.roomData:getRoomID()
    local roomNum = string.format("房间号:%06d", roomId)
	self._roomNumLabel:setString(roomNum)

	--局数信息
	self._playCount = CF.roomData:getPlayCount()
	self._maxPlayCount = CF.roomData:getMaxPlayCount()
	self._roomJuShuLabel:setString("局数"..self._playCount.."/"..self._maxPlayCount)

    if self._imgGang then
		self._imgGang:setVisible(self:getWinLostData():getIsShowHua())
	end

	--系统时间
    local expirydate = os.date("%Y-%m-%d  %H:%M:%S", os.time())
	self._timeLabel:setString(expirydate)
	local isPlayBack = false
	self._timeLabel:setVisible(not isPlayBack)

	self:setShufflePropType()
	self:setShufflePropCount()

	--显示洗牌按钮
	self:initCutCard()
	self:initShuffle()

    --显示花
    self:initHuaShow()

    self:onUpdateUI()
end

function WinLostView:initHuaShow()
    if self._imgGang then
        self._imgGang:ignoreContentAdaptWithSize(true)
        self._imgGang:loadTexture("settle_title_hua.png", ccui.TextureResType.plistType)
    end
end

--最后一局小结束时，取消自动跳转大结束
function WinLostView:onTimeClose()
end

function WinLostView:onUpdateUI()
    local endType = self:getWinLostData():getEndType()
    self._titleSp:loadTexture(self.EndType[endType], ccui.TextureResType.plistType)
    if CF.roomData:isPlayBack() then
        self._checkTableBtn:setVisible(true)
    end
	if CF.roomData:getIsSeer() then
		self._exitWatchBtn:setVisible(true)
	end
    self._imgFan:setVisible(self:getWinLostData():getIsShowFan())
    if CF.roomData:getIsGameOver() then
        self:updateBtnInEnd()
	end
end

--设置规则
function WinLostView:onSetGameRule()
    self._textGameRule:setText(self:getWinLostData():getGameRule())
end

return WinLostView