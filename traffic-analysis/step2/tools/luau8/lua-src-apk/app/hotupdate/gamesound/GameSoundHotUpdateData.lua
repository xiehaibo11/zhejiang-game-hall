
local GameSound = {
    HotUpdateLoaderPath = "app.hotupdate.gamesound.GameSoundHotUpdateLoader",
    HotUpdateScenePath  = "app.hotupdate.gamesound.GameSoundHotUpdateScene",
    HotUpdateManifest = "Sound/project_%d" ..  ".manifest",
}


function GameSound.getGameSoundHotUpdateManifest(gameid)
    local configer = require("app.Config.Parse.GameSubConfiger").new()
    if gameid == 42038 then
        gameid = 30116 
    end
    local boxGameId = configer:getGoldToBoxGameId(gameid)
    if boxGameId then
        gameid = boxGameId
    end
    local stringManifest = string.format( GameSound.HotUpdateManifest, gameid )
    return stringManifest
end

return GameSound�