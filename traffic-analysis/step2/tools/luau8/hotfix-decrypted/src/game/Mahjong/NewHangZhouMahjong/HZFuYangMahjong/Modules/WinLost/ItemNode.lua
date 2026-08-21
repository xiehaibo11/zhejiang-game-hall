local WinLostItemNode = CF.gameClass("WinLostItemNode", "game.Mahjong.BasicMahjong.Modules.WinLost.ItemNode")

function WinLostItemNode:updateBankerFlag()
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local isBanker = gameData:isBanker(self._seatId)
    local laozhuangNum = gameData:getLaoZhuangNum()
    self._bankerFlagSp:setVisible(isBanker)
    if isBanker and laozhuangNum == 2 then
        self._bankerFlagSp:loadTexture("img_jiezhuang_flag.png", ccui.TextureResType.plistType)
        local mark = ccui.ImageView:create()
        mark:loadTexture("img_jiezhuang_double.png", ccui.TextureResType.plistType)
        mark:addTo(self._hejiLabel:getParent())
        mark:setPosition(1865, 160)
    end
end

return WinLostItemNode