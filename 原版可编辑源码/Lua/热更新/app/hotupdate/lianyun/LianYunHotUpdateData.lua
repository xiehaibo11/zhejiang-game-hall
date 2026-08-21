
local LianYun = {
    HotUpdateLoaderPath = "app.hotupdate.lianyun.LianYunHotUpdateLoader",
    HotUpdateScenePath  = "app.hotupdate.lianyun.LianYunHotUpdateScene",
    CardBHotUpdateManifest = "Cardb/project.manifest",
    HallHotUpdateManifest = "Hall/project.manifest",
    QxbpHotUpdateManifest = "Qxbp/project.manifest",
}

function LianYun.getLianYunHotUpdateManifest(gameID)
    local LobbyConfig = require("lobby.Modules.Lobby.Config")
    if gameID == LobbyConfig.CARD13_GAMEID  or gameID == LobbyConfig.GAME_ID_APGDY then
        return {
            CardBHotUpdateManifest = "Cardb/project.manifest",
            HallHotUpdateManifest = "Hall/project.manifest",
        }
    else
        return {
            HallHotUpdateManifest = "Hall/project.manifest",
            QxbpHotUpdateManifest = "Qxbp/project.manifest",
        }
    end
end

return LianYun