local WinLostGoldView = CF.gameClass("WinLostGoldView", "game.Mahjong.BasicMahjong.Modules.WinLost.GoldView")

WinLostGoldView.EndTypeEx =
    {
        [0] = "img_result_win.png",  --胜利
		[1] = "img_result_lost.png",  --失败
		[2] = "settle_text_liuju.png",  --流局
    }

function WinLostGoldView:updateResultInfoUI()
    WinLostGoldView.super.updateResultInfoUI(self)
    local endType = self:getWinLostData():getEndType()
    if endType ~= CF.GameDefine.HU_TYPE.ET_DRAWN then
        local bHuSeat = false
        local gameData = CF.game:getModule("GameLayer"):getGameData()
        local huSeats = gameData:getHuSeat()
        local selfSeat = self:getSelfSeat()
        for i = 1, #huSeats do
            if huSeats[i] == selfSeat then
                bHuSeat = true
                break
            end
        end
        if bHuSeat then
            endType = 0
        else
            endType = 1
        end
    else
        endType = 2
    end
    self._titleSp:loadTexture(WinLostGoldView.EndTypeEx[endType], ccui.TextureResType.plistType)
end

return WinLostGoldView