local WinLostGoldView = CF.gameClass("WinLostGoldView", "game.Mahjong.BasicMahjong.Modules.WinLost.GoldView")

function WinLostGoldView:updateEndTypeTitle()
    local endType = self:getWinLostData():getEndType()
	if endType == CF.GameDefine.END_TYPE.ET_SELF then
		local pngPath = "res/cocosStudio/MahjongNew/GameLayer/Image/JiaXing/jx_result_win.png"
		if cc.FileUtils:getInstance():isFileExist(pngPath) then
			self._lostTypeSp:loadTexture(pngPath, ccui.TextureResType.localType)
		end
	else
		local pngPath = "res/cocosStudio/MahjongNew/GameLayer/Image/JiaXing/jx_result_lose.png"
		if cc.FileUtils:getInstance():isFileExist(pngPath) then
			self._lostTypeSp:loadTexture(pngPath, ccui.TextureResType.localType)
		end
	end
end

return WinLostGoldView