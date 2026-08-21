local PlayerModule = CF.gameClass("PlayerModule", "game.Mahjong.BasicMahjong.Modules.Player.Module")

PlayerModule.EVENT_DYNAMIC_CHANGE_SEAT = "EVENT_DYNAMIC_CHANGE_SEAT"

function PlayerModule:dynamicChangeSeat(pSeat)
    self:dispatchEvent( { name = self.EVENT_DYNAMIC_CHANGE_SEAT , msg = {seat = pSeat}})
end

return PlayerModule