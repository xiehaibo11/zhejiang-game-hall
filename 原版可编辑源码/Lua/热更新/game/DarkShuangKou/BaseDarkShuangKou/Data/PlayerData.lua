local PlayerData = CF.gameClass("PlayerData", CF.gameScriptRootPath .. ".GameBase.Data.PlayerData")

function PlayerData:setPlayTypeScore(score)
    self._nPlayTypeScore = score
    self:dispatch()
end

return PlayerData
