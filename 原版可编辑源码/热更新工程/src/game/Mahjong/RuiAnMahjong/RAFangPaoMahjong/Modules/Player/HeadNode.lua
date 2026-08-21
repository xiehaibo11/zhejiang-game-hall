local PlayerHeadNode = CF.gameClass("PlayerHeadNode", "game.Mahjong.BasicMahjong.Modules.Player.HeadNode")


function PlayerHeadNode:getProxyEvents()
	local proxyEvents = PlayerHeadNode.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("RoomInfo"), eventKeyName = "EVENT_SET_SCORE", callBack = "setScore" }
    return proxyEvents
end

function PlayerHeadNode:setScore(event)
    local score = event.msg
    self._scoreLabel:setString(self._playerData:getPlayTypeScore() + score[self._seatId])
end

return PlayerHeadNode