local SoundManager = CF.gameClass("SoundManager", "game.Landlords.BaseLandlords.Manager.SoundManager")
local CardType = CF.gameRequire("Define.CardType")

local KW_PATH_GAMESOUND_FILE = "res/audio/Landlords/GameLayer/"

local sexPath = {
    [1] = "Man/",
    [2] = "Women/",
}

function SoundManager:playSoundCards(bMan, sCardType, sStartPower, gameID, first)
    local fangyan = CF.settingData:getLandlordsIsNormalVoice()
    local path
    if gameID == nil or not fangyan then 
        path =  KW_PATH_GAMESOUND_FILE .. "0/"
    else 
        path =  KW_PATH_GAMESOUND_FILE .. gameID .. "/"
    end

    if bMan then
        path = path .. sexPath[1]
    else
        path = path .. sexPath[2]
    end

    local isBoom = false
    local daniEffect = false
    local cardIndex = math.floor(sCardType / 1000)

    local tempCardTypeID = CardType.MappingTable[sCardType]
    if CardType:isLianDui(tempCardTypeID) then
        path = path .. "liandui"
        daniEffect = true
    elseif CardType:isFeiJi(tempCardTypeID) then
        path = path .. "feiji"
        daniEffect = true
    elseif CardType:isN3Dai1Dui(tempCardTypeID) then
        path = path .. "sandaiyidui"
        daniEffect = true
    elseif CardType:isBoom(tempCardTypeID) then
        path = path .. "zhadan"
        isBoom = true
    elseif CardType:isWangZha(tempCardTypeID) then
        path = path .. "wangzha"

    else
        path = path .. cardIndex .. "_" .. sStartPower
    end
    path = path .. ".mp3"
         
    local isExist = cc.FileUtils:getInstance():isFileExist(path)
    if isExist then 
        if not first and daniEffect then
            self:playEventSound(bMan, SoundManager.EventEffect.DaNi)
        else
            self:playEffect(path)
        end
        
        if isBoom then
            self:playSoundBoom()
        end
    else 
        if gameID ~= 0 then 
            self:playSoundCards(bMan, sCardType, sStartPower, 0, first)
        end
    end
end

return SoundManager