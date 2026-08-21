local WinLostItemNode = CF.gameClass("ItemNode", "game.Mahjong.BasicMahjong.Modules.WinLost.ItemNode")

function WinLostItemNode:_getCKongShowBackIndexs(combData)
    if not combData.mahValues or #combData.mahValues > 4 then
        return {}
    end
    return {4}
end

function WinLostItemNode:updateSettleUI()
    WinLostItemNode.super.updateSettleUI(self)
    self._gangLabel:setVisible(true)
    local fanNum = self:getWinLostData():getFanNumBySeat(self._seatId)
    local nHuShu = self:getWinLostData():getHuShu()
    local nTotalHuShu = self:getWinLostData():getTotalHuShu()
    local winlostLabel = self._fanLabel:clone()
    if winlostLabel then
        winlostLabel:setPosition(self._fanLabel:getPositionX() - 100, self._fanLabel:getPositionY())
        winlostLabel:addTo(self._fanLabel:getParent())
    end
    if not fanNum or fanNum == "" or tonumber(fanNum) <= 0 then
        winlostLabel:setString("0")
        self._fanLabel:setString("0")
        self._gangLabel:setString("0")
    else
        winlostLabel:setString(""..fanNum)
        self._fanLabel:setString(""..nHuShu)
        self._gangLabel:setString(""..nTotalHuShu)
        if nTotalHuShu >= 500 then
            local mark = ccui.ImageView:create()
            mark:loadTexture("img_result_lazi.png", ccui.TextureResType.plistType)
            mark:addTo(self._hejiLabel:getParent())
            mark:setPosition(1550, 26)
        end
    end
end

return WinLostItemNode�