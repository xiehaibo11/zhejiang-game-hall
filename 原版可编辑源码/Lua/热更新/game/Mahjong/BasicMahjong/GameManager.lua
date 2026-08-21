local GameManager = CF.gameClass("MahjongManager", "game.GameBase.GameManager")

function GameManager:clearResCache()
    local MahLogic = CF.gameRequire("Modules.GameLayer.MahLogic")
    MahLogic.removeAllMahSpriteFrames()
end

return GameManager