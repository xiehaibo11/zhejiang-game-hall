local GameManager = CF.gameClass("GameManager", "game.Mahjong.BasicMahjong.GameManager")

function GameManager:getPermanentModules()
    local permanentModules = GameManager.super.getPermanentModules(self)
    table.insert(permanentModules, "EarlyStart")
    return permanentModules
end

return GameManager: