local SoundManager = CF.gameClass("SoundManager", "game.GameBase.Manager.SoundManager")

local CardEnum = CF.gameRequire("Define.CardEnum")

local PATH_LOOKANXIOUSLY = "res/audio/LookAnxiously"
local KW_PATH_SOUND_FILE = PATH_LOOKANXIOUSLY .. "/Base/"
local KW_PATH_GAMESOUND_FILE = PATH_LOOKANXIOUSLY .. "/GameLayer/"
local PATH_SPEAK = "res/audio/Speak/"

local sexPath = {
    [1] = "Man/",
    [2] = "Women/"
}

local languageType = {
    [1] = "standard/",
    [2] = "dialect/"
}

--文件格式
local musicType = {
    [1] = ".mp3"
}
local speakString = {
    [1] = "M_Speak%02d",
    [2] = "W_Speak%02d"
}

local FILE_START_SOUND_MP3 = "start.mp3"
local FILE_BOMB_SOUND_MP3 = "bomb_4_5.mp3"
local FILE_READY_SOUND_MP3 = "OK.mp3"
local FILE_PASS_SOUND_MP3 = "pass.mp3"
local FILE_OUT_SOUND_MP3 = "Out.mp3"
local FILE_END_SOUND_MP3 = "end.mp3"
local FILE_CLOCK_SOUND_MP3 = "Clock.mp3"
local FILE_SELECT_SOUND_MP3 = "click_card.mp3"
local FILE_SORT_SOUND_MP3 = "sort_card.mp3"
local FILE_CLICK_BUTTOM_MP3 = "click_buttom.mp3"
local FILE_FUXING_SOUND_MP3 = "EndWin.mp3"
local FILE_WIN_SOUND_MP3 = "win.mp3"
local FILE_LOSE_SOUND_MP3 = "lose.mp3"
local FILE_DEAL_CARD_MP3 = "dealCard.mp3"

function SoundManager:playerSoundDealCard()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE..FILE_DEAL_CARD_MP3)
end

function SoundManager:playSoundStart()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE .. FILE_START_SOUND_MP3)
end

function SoundManager:playSoundOut()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE .. FILE_OUT_SOUND_MP3)
end

function SoundManager:playSoundPass()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE .. FILE_PASS_SOUND_MP3)
end

function SoundManager:playSoundClock()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE .. FILE_CLOCK_SOUND_MP3)
end

function SoundManager:playSoundSelectCard()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE .. FILE_SELECT_SOUND_MP3)
end

function SoundManager:playButtonClick()
    if KW_PATH_SOUND_FILE == nil then
        return
    end

    self:playEffect(KW_PATH_SOUND_FILE .. FILE_CLICK_BUTTOM_MP3)
end

function SoundManager:playSoundBoom()
    if KW_PATH_SOUND_FILE == nil then
        return
    end

    self:playEffect(KW_PATH_SOUND_FILE .. FILE_BOMB_SOUND_MP3)
end

function SoundManager:playSoundEnd()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE .. FILE_END_SOUND_MP3)
end

function SoundManager:playSoundReady()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE .. FILE_READY_SOUND_MP3)
end

function SoundManager:playSoundSortCard()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE .. FILE_SORT_SOUND_MP3)
end

function SoundManager:playSoundWin()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE..FILE_WIN_SOUND_MP3)
end

function SoundManager:playSoundLose()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE..FILE_LOSE_SOUND_MP3)
end

function SoundManager:playSoundFuXing()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE..FILE_FUXING_SOUND_MP3)
end

function SoundManager:playSoundCards(sex, cardType, cardPower, bFangYan, gameID)
    local boxGameId = CF.gameSub:getGoldToBoxGameId(gameID)
    if boxGameId then
        gameID = boxGameId
    end
    local path
    local bMan = false
    if sex == 1 then
        bMan = true
    end
    if gameID == nil or not bFangYan then
        gameID = 0
    end
    if bMan then
        path = KW_PATH_GAMESOUND_FILE .. gameID .. "/" .. sexPath[1]
    else
        path = KW_PATH_GAMESOUND_FILE .. gameID .. "/" .. sexPath[2]
    end


    if cardType >= CardEnum.CARDS_TYPE.CT_3_JUNKO_0_EXCESS_1_CONTINUOUS then
        path = path .. "zhadan.mp3"
    elseif cardType % 100 == 1 then
        path = path .. math.floor(cardType / 1000) .. "_" .. cardPower.. ".mp3"
    else
        path = path .. "s_" .. math.floor(cardType / 1000) .. ".mp3"
    end
    if cc.FileUtils:getInstance():isFileExist(path) then
        self:playEffect(path)
    elseif gameID ~= 0 then
        SoundManager:playSoundCards(sex, cardType, cardPower, false, 0)
    end
    if cardType >= CardEnum.CARDS_TYPE.CT_3_JUNKO_0_EXCESS_1_CONTINUOUS and
        cardType <= CardEnum.CARDS_TYPE.CT_6_JUNKO_0_EXCESS_1_CONTINUOUS then
        SoundManager:playSoundBoom()
    end
end

--俏皮话音效
function SoundManager:playSoundWisecrack(seat, bMan, bFangYan, gameID, index)
    local boxGameId = CF.gameSub:getGoldToBoxGameId(gameID)

    if boxGameId then
        gameID = boxGameId
    end
    local path
    if gameID == nil then
        if bMan then
            path = PATH_SPEAK .. "0/" .. sexPath[1] .. string.format(speakString, index) .. musicType[1]
        else
            path = PATH_SPEAK .. "0/" .. sexPath[2] .. string.format(speakString, index) .. musicType[1]
        end
    else
        local speakConfig = self:getSpeakConfig()
        if not speakConfig[index] then
            return
        end
        local dialectPath
        local standardPath
        if bMan then
            standardPath = PATH_SPEAK .. gameID .. "/" .. languageType[1] .. sexPath[1] .. speakConfig[index].M_SpeakFileName
            dialectPath = PATH_SPEAK .. gameID .. "/" .. languageType[2] .. sexPath[1] .. speakConfig[index].M_SpeakFileName
        else
            standardPath = PATH_SPEAK .. gameID .. "/" .. languageType[1] .. sexPath[2] .. speakConfig[index].W_SpeakFileName
            dialectPath = PATH_SPEAK .. gameID .. "/" .. languageType[2] .. sexPath[2] .. speakConfig[index].W_SpeakFileName
        end
        if bFangYan then
            path = dialectPath
            if not cc.FileUtils:getInstance():isFileExist(path) then
                path = standardPath
            end
        else
            path = standardPath
            if not cc.FileUtils:getInstance():isFileExist(path) then
                path = dialectPath
            end
        end
    end

    if cc.FileUtils:getInstance():isFileExist(path) then
        self:playEffect(path)
    end
end

function SoundManager:getSpeakConfigPath(gameID)
    return "game.LookAnxiously.GameSpeakConfig.GameSpeak_" .. gameID
end

return SoundManager
�