local PlayerData = CF.gameClass("PlayerData", "game.GameBase.Data.PlayerData")
function PlayerData:getPlayTypeScore()
    return self._nPlayTypeScore
end

function PlayerData:cloneDataEx(playerData)
    PlayerData.super.cloneDataEx(self,playerData)
    self._szAvatarUrl = clone(playerData:getAvatarUrl())
end

return PlayerData