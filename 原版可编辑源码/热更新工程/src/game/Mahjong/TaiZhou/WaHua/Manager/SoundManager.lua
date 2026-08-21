local SoundManager = CF.gameClass("SoundManager", "game.Mahjong.BasicMahjong.Manager.SoundManager")

local PATH_MAHJONG = "res/audio/Mahjong/"
local soundPath = {
    [1] = "Base/",
    [2] = "MahLayer/",
    [3] = "MahEffect/",
    [4] = "Prop/",
}

local mahPath = {
    [1] = "Mah/",
    [2] = "MahAction/",
}

local sexPath = {
    [1] = "Man/",
    [2] = "Women/",
}

local musicType = {
    [1] = ".mp3"
}

function SoundManager:playSoundMah(mahID, bMan, gameID)
    gameID = gameID or CF.roomData:getGameID()
    local boxGameId = CF.gameSub:getGoldToBoxGameId(gameID)

    if boxGameId then
        gameID = boxGameId
    end
    mahID = mahID % CF.GameDefine.MAH_DIVIDED
    local path
    local bFangYan = not CF.settingData:getMahIsNormalVoice()
    if not bFangYan then
        if bMan then
             path = PATH_MAHJONG .. soundPath[2] .. gameID .. "/" .. mahPath[1] .. sexPath[1] .. mahID .. musicType[1]
        else
             path = PATH_MAHJONG .. soundPath[2] .. gameID .. "/" .. mahPath[1] .. sexPath[2] .. mahID .. musicType[1]
        end
    else
        if bMan then
             path = PATH_MAHJONG .. soundPath[2] .. gameID .. "/" .. gameID .. "/" .. mahPath[1] .. sexPath[1] .. mahID .. musicType[1]
        else
             path = PATH_MAHJONG .. soundPath[2] .. gameID .. "/" .. gameID .. "/" .. mahPath[1] .. sexPath[2] .. mahID .. musicType[1]
        end
    end

    self:playEffect(path)
end

function SoundManager:playSoundMahAction(actionIndex, bMan, gameID)
    gameID = gameID or CF.roomData:getGameID()
    local boxGameId = CF.gameSub:getGoldToBoxGameId(gameID)

    if boxGameId then
        gameID = boxGameId
    end
    local path
    local bFangYan = not CF.settingData:getMahIsNormalVoice()
    if not bFangYan then
        if bMan then
            path = PATH_MAHJONG .. soundPath[2] .. gameID .. "/" .. mahPath[2] .. sexPath[1] .. actionIndex .. musicType[1]
        else
            path = PATH_MAHJONG .. soundPath[2] .. gameID .. "/" .. mahPath[2] .. sexPath[2] .. actionIndex .. musicType[1]
        end
    else
        if bMan then
            path = PATH_MAHJONG .. soundPath[2] .. gameID .. "/" .. gameID .. "/" .. mahPath[2] .. sexPath[1] .. actionIndex .. musicType[1]
        else
            path = PATH_MAHJONG .. soundPath[2] .. gameID .. "/" .. gameID .. "/" .. mahPath[2] .. sexPath[2] .. actionIndex .. musicType[1]
        end
    end

    self:playEffect(path)
end

return SoundManager