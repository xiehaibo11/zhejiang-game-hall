local PlayerHeadNode = CF.gameClass("PlayerHeadNode", "game.Mahjong.BasicMahjong.Modules.Player.HeadNode")

function PlayerHeadNode:ctor(param)
	PlayerHeadNode.super.ctor(self, param)
	self._bankerFlagSpClone = nil
end

function PlayerHeadNode:updateBankerFlag()
	local gameData = CF.game:getModule("GameLayer"):getGameData()
    local isBanker = gameData:isBanker(self._seatId)
    if self._bankerFlagSp then
        if not self._bankerFlagSpClone then
            self._bankerFlagSpClone = self._bankerFlagSp:clone()
            self._bankerFlagSpClone:loadTexture("img_jiezhuang_flag.png", ccui.TextureResType.plistType)
            self._bankerFlagSpClone:addTo(self._bankerFlagSp:getParent())
            self._bankerFlagSpClone:setPosition(self._bankerFlagSp:getPosition())
        end
        self._bankerFlagSp:setVisible(false)
        self._bankerFlagSpClone:setVisible(false)
        local laozhuangNum = gameData:getLaoZhuangNum()
        if laozhuangNum == 2 then
            self._bankerFlagSpClone:setVisible(isBanker)
        else
            self._bankerFlagSp:setVisible(isBanker)
        end
	end
end

return PlayerHeadNode�