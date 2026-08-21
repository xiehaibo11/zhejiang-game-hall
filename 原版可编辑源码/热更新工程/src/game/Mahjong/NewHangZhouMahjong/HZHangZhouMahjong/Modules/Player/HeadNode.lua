local PlayerHeadNode = CF.gameClass("PlayerHeadNode", "game.Mahjong.BasicMahjong.Modules.Player.HeadNode")

function PlayerHeadNode:getProxyEvents()
    local proxyEvents = PlayerHeadNode.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("RoomInfo"), eventKeyName = "EVENT_SET_SCORE", callBack = "setScore"}
    return proxyEvents
end

function PlayerHeadNode:ctor(param)
    PlayerHeadNode.super.ctor(self, param)
    self._nscore = 0
end

function PlayerHeadNode:setScore(event)
    local score = event.msg.score
    self._nscore = score[self._seatId]
    self._scoreLabel:setString(score[self._seatId])
end

function PlayerHeadNode:updateUI()
    PlayerHeadNode.super.updateUI(self)
    self._scoreLabel:setString(self._nscore)
end

return PlayerHeadNode