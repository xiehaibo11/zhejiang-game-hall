local GoldView = CF.gameClass("GoldView", "game.Mahjong.BasicMahjong.Modules.WinLost.GoldView")

function GoldView:updateResultInfoUI()
    GoldView.super.updateResultInfoUI(self)
    local showSeat = self:getResutInfoSeat()
    local strFanName = self:getWinLostData():getFanNameBySeat(showSeat)
    local strJokerMoney = "财神分:" .. self:getWinLostData():getJokerMoneyData(showSeat) .. " "
    local strKungInfo = self:getWinLostData():getKungInfoData(showSeat)
    local strFollowMah = ""
    if self:getWinLostData():getFollowMahData(showSeat) ~= "" then
        strFollowMah = "跟风:" .. self:getWinLostData():getFollowMahData(showSeat)
    end
    self._txtFanDetail:setString(strFanName .. strJokerMoney .. strKungInfo .. strFollowMah)

    --标题显示软牌硬牌双翻四翻
	local endType = self:getWinLostData():getEndType()
	if endType ~= CF.GameDefine.HU_TYPE.ET_NONE then
		local huType = self:getWinLostData():getHuType()
        local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
		if huType and WinLostFanConfig.KW_WINLOST_TITLE_RUANYING_TYPE[huType] then
			self._titleSp:loadTexture(WinLostFanConfig.KW_WINLOST_TITLE_RUANYING_TYPE[huType], ccui.TextureResType.plistType)
		end
	end
end

return GoldView�