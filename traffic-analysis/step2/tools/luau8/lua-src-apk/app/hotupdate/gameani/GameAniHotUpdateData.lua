
local GameAni = {
    HotUpdateLoaderPath = "app.hotupdate.gameani.GameAniHotUpdateLoader",
    HotUpdateScenePath  = "app.hotupdate.gameani.GameAniHotUpdateScene",
    HotUpdateManifest = "Ani/project_%s" ..  ".manifest",
}


function GameAni.getGameAniHotUpdateManifest(gameType)
    gameType = gameType or ""
    local stringManifest = string.format( GameAni.HotUpdateManifest, gameType )
    return stringManifest
end

return GameAni�