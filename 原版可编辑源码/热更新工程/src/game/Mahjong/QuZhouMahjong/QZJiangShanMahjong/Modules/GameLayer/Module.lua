local GameModule = CF.gameClass("GameModule", "game.Mahjong.QuZhouMahjong.QZQuZhouBase.Modules.GameLayer.Module")

GameModule.EVENT_MAHLAYER_REPLACER_FLOWER = "EVENT_MAHLAYER_REPLACER_FLOWER"

-- 补花
function GameModule:onMsgReplace(msgData)
    GameModule.super.onMsgReplace(self, msgData)
    local _localSeat = CF.roomData:seatToLocal(msgData.nSeat)    
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_REPLACER_FLOWER, msg = {localSeat = _localSeat} })
end

return GameModule