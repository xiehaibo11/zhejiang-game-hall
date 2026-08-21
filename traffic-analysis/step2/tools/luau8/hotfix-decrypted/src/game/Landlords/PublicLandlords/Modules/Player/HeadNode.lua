local PlayerHeadNode = CF.gameClass("PlayerHeadNode", "game.Landlords.BaseLandlords.Modules.Player.HeadNode")

--设置剩余牌数
function PlayerHeadNode:setLeftCardNum(nCardNum)
	local gamerule = CF.roomData:getGameRuleDetail()
    if gamerule._showRemainNum then
        self._leftCardNumText:setString(nCardNum)
    else
        self._leftCardNumText:setString("")
    end
    self._leftCardNumPanel:setVisible(nCardNum > 0)
end

return PlayerHeadNode�