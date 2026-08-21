local WinLostGoldView = CF.gameClass("WinLostGoldView", "game.Mahjong.BasicMahjong.Modules.WinLost.GoldView")

local flowerOffset = cc.p(100, -60)

function WinLostGoldView:updateResultInfoUI()
    WinLostGoldView.super.updateResultInfoUI(self)
    local showSeat = self:getResutInfoSeat()
    local strDetail = self._settleData:getDetail(showSeat)
    self._txtFanDetail:setString(strDetail)
    local detailWidth = self._txtFanDetail:getContentSize().width
    if self._panelFlower and detailWidth > self._panelFlower:getPositionX() - self._txtFanDetail:getPositionX() then
        self._panelFlower:setPositionX(self._panelFlower:getPositionX() + flowerOffset.x)
        self._panelFlower:setPositionY(self._panelFlower:getPositionY() + flowerOffset.y)
    end
end

return WinLostGoldView'