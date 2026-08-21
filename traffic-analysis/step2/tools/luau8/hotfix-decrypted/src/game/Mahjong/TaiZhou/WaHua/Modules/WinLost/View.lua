local WinLostView = CF.gameClass("WinLostView", "game.Mahjong.BasicMahjong.Modules.WinLost.View")

function WinLostView:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/TaiZhou/WaHua/Settle.csb"
end

WinLostView.EndType =
{
    [0] = "settle_text_run.png",  --逃跑
    [1] = "settle_text_zimo.png",  --自摸
    [2] = "settle_text_dianpao.png",  --点炮
    [3] = "settle_text_liuju.png", --流局
}

function WinLostView:getBindingInfo()
    local bindInfo = WinLostView.super.getBindingInfo(self)
    bindInfo["_KW_PANEL_YAO_ZHANG"] = { varName = "_panelYaoZhang" }
    return bindInfo
end

function WinLostView:createChildren()
	WinLostView.super.createChildren(self)
    self._roomJuShuLabel:setString("局数:" .. CF.roomData:getPlayCount())
	--显示回放的时间
    if CF.roomData:isPlayBack() then
        local systime = CF.game:getModule("PlayBack"):getJustRecordGameMsgFirstTime()
        self._timeLabel:setString(os.date("%Y-%m-%d %H:%M:%S", systime))
    end
    --摇张
    self:createYaoZhangMahs()
end

function WinLostView:initShuffle()
	self._shuffleBtn:setVisible(false)
	self._shuffleQuanBtn:setVisible(false)
	self._costInfo = {propid=CF.gameSub:getShufflePropQuanID(), costPropid=CF.gameSub:getShufflePropQuanID(), cnt=1}
	if CF.game:getModule("WinLost"):needShowShuffleButton() then
		local posX = { -500, 0, 500 }
		if CF.roomData:isGoldRoom() then
			local oriPrice = CF.game:getModule("PropUse"):getOriginalShufflePrice()
			local nowPrice = CF.game:getModule("PropUse"):getShufflePrice()
			self._txtShuffleGoldCost:setString(tostring(oriPrice))
			self._txtShuffleGoldSale:setString(tostring(nowPrice))
			if oriPrice <= nowPrice then
				self._txtShuffleGoldCost:setVisible(false)
			end
			local btn = { self._checkTableBtn, self._shuffleGoldBtn, self._nextGameBtn }
			for i, _ in ipairs(btn) do
				btn[i]:setPositionX(posX[i])
			end
			self._shuffleGoldBtn:setVisible(true)
			self._costInfo.costPropid = XH.areaData:getGoldPropId()
			self._costInfo.cnt = nowPrice
		else
			--洗牌券的道具id
            local propId = CF.gameSub:getShufflePropQuanID()
			local shuffleQuanCount = CF.game:getModule("PropUse"):getPropCnt(propId)
            local shuffleInfo = CF.game:getModule("PropUse"):getShufflePropInfo(propId)
			if shuffleQuanCount and shuffleQuanCount > 0 then
				self._shuffleQuanBtn:setVisible(true)
				local btn = { self._checkTableBtn, self._shuffleQuanBtn, self._nextGameBtn }
				for i, _ in ipairs(btn) do
					btn[i]:setPositionX(posX[i])
				end
				self._txtShufflePropCount:setString("x" .. shuffleQuanCount)
			else
				self._shuffleBtn:setVisible(true)
				local btn = { self._checkTableBtn, self._shuffleBtn, self._nextGameBtn }
				for i, _ in ipairs(btn) do
					btn[i]:setPositionX(posX[i])
				end
				self._costInfo.costPropid = shuffleInfo.propID
				self._costInfo.cnt = shuffleInfo.cost
			end
		end
	end
end

function WinLostView:onUpdateUI()
    local endType = self:getWinLostData()._sEndType
	if self.EndType[endType] then
		self._titleSp:loadTexture(self.EndType[endType], ccui.TextureResType.plistType)
	end
	if CF.roomData:getIsSeer() then
		self._exitWatchBtn:setVisible(not isFinal)
	end
    local isFinal = CF.roomData:getIsGameOver()
	self._checkTableBtn:setVisible(not isFinal)
	self._nextGameBtn:setVisible(not isFinal)
	self._checkBillBtn:setPosition(self._nextGameBtn:getPosition())
	self._checkBillBtn:setVisible(isFinal)
end

function WinLostView:createYaoZhangMahs()
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local yaoZhangData = gameData:getYaoZhangData()
    local tmpMahs = {}
    for i = 1, CF.GameDefine.YaoZhangCount do
        if not yaoZhangData[i] then
            break
        end
        table.insert(tmpMahs, yaoZhangData[i])
    end
    local config = CF.settingData:getDefaultData(nil, true)
    local UIMahHandArea = CF.gameRequire("Modules.GameLayer.View2D.UIMahHandArea")
    local UIMahConfig = CF.gameRequire("Modules.GameLayer.Config.UIMahConfig2D")
    local yaoZhangMahs = UIMahHandArea.new(CF.GameDefine.LOCAL_SEAT.BOTTOM, config)
    yaoZhangMahs:setScale(UIMahConfig.YaoZhangMahScaleSize)
    self._panelYaoZhang:addChild(yaoZhangMahs)
    yaoZhangMahs:setMaxHandMahCount(CF.GameDefine.YaoZhangCount)
    yaoZhangMahs:setHandMahs(tmpMahs ,nil, false)
end

return WinLostViewg