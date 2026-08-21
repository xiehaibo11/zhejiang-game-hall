local WinLostGoldView = CF.gameClass("WinLostGoldView", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.WinLost.GoldView")

function WinLostGoldView:updateResultInfoUI()
    WinLostGoldView.super.updateResultInfoUI(self)
    local selfSeat = self:getSelfSeat()
    local score = self:getWinLostData():getWinLost(selfSeat)
    local endType = 1
    if score then
        endType = score > 0 and 0 or (score < 0 and 1 or 2)
    end
    self._titleSp:loadTexture(WinLostGoldView.EndTypeEx[endType], ccui.TextureResType.plistType)
end

return WinLostGoldView