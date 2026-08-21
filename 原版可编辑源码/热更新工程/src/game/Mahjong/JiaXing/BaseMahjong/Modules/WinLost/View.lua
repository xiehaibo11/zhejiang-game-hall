local WinLostView = CF.gameClass("WinLostView", "game.Mahjong.BasicMahjong.Modules.WinLost.View")

function WinLostView:updateEndTypeTitle()
	local endType = self:getWinLostData():getEndType()
	if endType == CF.GameDefine.END_TYPE.ET_DRAW then
		self._titleSp:loadTexture("settle_text_liuju.png", ccui.TextureResType.plistType)
	elseif endType == CF.GameDefine.END_TYPE.ET_NONE then
		self._titleSp:loadTexture("settle_text_run.png", ccui.TextureResType.plistType)
	elseif endType == CF.GameDefine.END_TYPE.ET_SELF then
		local pngPath = "res/cocosStudio/MahjongNew/GameLayer/Image/JiaXing/jx_result_win.png"
		if cc.FileUtils:getInstance():isFileExist(pngPath) then
			self._titleSp:loadTexture(pngPath, ccui.TextureResType.localType)
		end
	else
		local pngPath = "res/cocosStudio/MahjongNew/GameLayer/Image/JiaXing/jx_result_lose.png"
		if cc.FileUtils:getInstance():isFileExist(pngPath) then
			self._titleSp:loadTexture(pngPath, ccui.TextureResType.localType)
		end
	end
end

--设置规则
function WinLostView:initGameRule()
	local ruleStr = CF.roomData:getGameRule()
	if CF.gameSub.getGameNameByGameId then
        ruleStr = CF.gameSub:getGameNameByGameId() .. ":" .. ruleStr
    end
    self._textGameRule:setText(ruleStr)
end

return WinLostView