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

function SoundManager:playSoundMingPai(mingPaiID, bMan, gameID, bFangYan)
    local boxGameId = CF.gameSub:getGoldToBoxGameId(gameID)
    if boxGameId then
        gameID = boxGameId
    end
    local path
    if not bFangYan then
        if bMan then
            path = PATH_MAHJONG .. soundPath[2] .. gameID .. "/" .. mahPath[2] .. "0/MahAction/" .. sexPath[1] .. "MingPaiType_" ..mingPaiID .. musicType[1]
        else
            path = PATH_MAHJONG .. soundPath[2] .. gameID .. "/" .. mahPath[2] .. "0/MahAction/" .. sexPath[2] .. "MingPaiType_"  .. mingPaiID .. musicType[1]
        end
        self:playEffect(path)
    else
        if bMan then
            path = PATH_MAHJONG .. soundPath[2] .. gameID .. "/" .. mahPath[2] .. sexPath[1] .. "MingPaiType_" .. mingPaiID .. musicType[1]
        else
            path = PATH_MAHJONG .. soundPath[2] .. gameID .. "/" .. mahPath[2] .. sexPath[2] .. "MingPaiType_" .. mingPaiID .. musicType[1]
        end
        self:playEffect(path)
    end
end

function SoundManager:playSoundHuType(maxFanType, bMan, gameID, bFangYan)
    local path
    if not bFangYan then
        if bMan then
            path = PATH_MAHJONG .. soundPath[2] .. gameID .. "/" .. mahPath[2] .. "0/HuType/" .. sexPath[1] .. maxFanType .. musicType[1]
        else
            path = PATH_MAHJONG .. soundPath[2] .. gameID .. "/" .. mahPath[2] .. "0/HuType/" .. sexPath[2] .. maxFanType .. musicType[1]
        end
        self:playEffect(path)
    else
        if bMan then
            path = PATH_MAHJONG .. soundPath[2] .. gameID .. "/" .. mahPath[2] .. sexPath[1] .. maxFanType .. musicType[1]
        else
            path = PATH_MAHJONG .. soundPath[2] .. gameID .. "/" .. mahPath[2] .. sexPath[2] .. maxFanType .. musicType[1]
        end
        self:playEffect(path)
    end
end

return SoundManager	