local PlayerHeadNode = CF.gameClass("PlayerHeadNode", "game.Mahjong.ShengZhou.ShengZhouMahjong.Modules.Player.HeadNode")

function PlayerHeadNode:updatePaoFlag(event)
    local msg = event.msg
    if not msg then
        return
    end
    if msg.seat ~= self._seatId then
        return
    end
    if msg.show == true and msg.paoNum then
        self._fntPao:setString(tonumber(msg.paoNum))
        self._fntPao:setVisible(true)
    else
        self._fntPao:setVisible(false)
    end
end

return PlayerHeadNode