function CF.hotupdateGameSound(gameID)
    if gameID == 42038 then
        gameID = 30116
    end
    local boxGameId = CF.gameSub:getGoldToBoxGameId(gameID)
    if boxGameId then
        gameID = boxGameId
    end
    local key = "GameSound_" .. gameID
    local priority = 1
    local GameSoundResChecker = require("app.hotupdate.gamesound.GameSoundResChecker")
    GameSoundResChecker._startHotFix(gameID, key, priority)
end

function CF.getMahFaceHotUpdateData()
    return require("app.hotupdate.mahface.MahFaceHotUpdateData")
end

function CF.hotupdateGameAni(gametype)
    if not gametype then
        return
    end
    local GameAniResChecker = require("app.hotupdate.gameani.GameAniResChecker")
    GameAniResChecker._startHotFix(gametype, 1)
end