local SoundManager = CF.gameClass("SoundManager", "game.GameBase.Manager.SoundManager")

local CardEnum = CF.gameRequire("Define.CardEnum")

--目录
local PATH_HONGSHI = "res/audio/HongShi"

local sexPath = {
    [1] = "Men/",
    [2] = "Women/",
}

local languageType = {
    [1] = "standard/",
    [2] = "dialect/",
}

--文件格式
local musicType = {
    [1] = ".mp3"
}

--俏皮话列表索引
local speakListIndex = {
    standard = 1,  --普通俏皮话
    dialect = 2    --方言俏皮话
}

local PATH_SPEAK = "res/audio/Speak/"
local speakString = {
    [1] = "M_Speak%03d",
    [2] = "W_Speak%03d"
}

local KW_PATH_SOUND_FILE = PATH_HONGSHI .. "/GameLayer/" --除俏皮话之外的路径
local FILE_BOMB_SOUND_MP3 = "0/Other/Bomb.mp3"
local FILE_START_SOUND_MP3 = "0/Other/start.mp3"
local FILE_READY_SOUND_MP3 = "0/Other/OK.mp3"
local FILE_PASS_SOUND_MP3 = "0/Other/pass.mp3"
local FILE_OUT_SOUND_MP3 = "0/Other/Out.mp3"
local FILE_END_SOUND_MP3 = "0/Other/end.mp3"
local FILE_CLOCK_SOUND_MP3 = "0/Other/Clock.mp3"
local FILE_SELECT_SOUND_MP3 = "0/Other/Select.mp3"
local FILE_SORT_SOUND_MP3 = "0/Other/Sort.mp3"

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

function SoundManager:playSoundEnd()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE .. FILE_END_SOUND_MP3)
end

function SoundManager:getSpeakConfigPath(gameID)
    return "game.HongShi.GameSpeakConfig.GameSpeak_" .. gameID
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
             path = PATH_SPEAK .. "0/" .. sexPath[1] .. string.format(speakString,index)  .. musicType[1]
        else
             path = PATH_SPEAK .. "0/" .. sexPath[2] .. string.format(speakString,index)  .. musicType[1]
        end
    else
        local speakConfig = self:getSpeakConfig()
        if not speakConfig[index] then
            return
        end
        local dialectPath
        local standardPath
        if bMan then
            standardPath = PATH_SPEAK .. gameID .. "/" .. languageType[1] ..sexPath[1] .. speakConfig[index].M_SpeakFileName
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

function SoundManager:playSoundReady()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE .. FILE_READY_SOUND_MP3)
end

function SoundManager:playSoundStart()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE..FILE_START_SOUND_MP3)
end

function SoundManager:playSoundEnd()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE..FILE_END_SOUND_MP3)
end

function SoundManager:playSoundSortCard()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE .. FILE_SORT_SOUND_MP3)
end

function SoundManager:getSpeakConfig()
    local listIndex = CF.settingData:getIsNormalVoice() and speakListIndex.standard or speakListIndex.dialect
    local config = self._speakCfg[listIndex]
    if not config and listIndex == speakListIndex.dialect then
        config = self._speakCfg[speakListIndex.standard]
    end
    return config
end

function SoundManager:playSoundOut()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE..FILE_OUT_SOUND_MP3)
end

function SoundManager:playSoundPass()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE..FILE_PASS_SOUND_MP3)
end

function SoundManager:playSoundClock()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE..FILE_CLOCK_SOUND_MP3)
end

function SoundManager:playSoundSelectCard()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE..FILE_SELECT_SOUND_MP3)
end

function SoundManager:playSoundPlayCardType(sex, cardType, cardPower, bFangYan, gameID, outCards)
    local boxGameId = CF.gameSub:getGoldToBoxGameId(gameID)

    local tmpPower = clone(cardPower)
    if tmpPower == CardEnum.CARD_POWER.CP_2 then
        tmpPower = 2
    elseif tmpPower == CardEnum.CARD_POWER.CP_SJ then
        tmpPower = 15
    elseif tmpPower == CardEnum.CARD_POWER.CP_BJ then
        tmpPower = 16
    elseif tmpPower > CardEnum.CARD_POWER.CP_BJ then
        tmpPower = 10
    end
    -- bFangYan = true
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
        path = KW_PATH_SOUND_FILE .. gameID .."/CardType/" .. sexPath[1]
    else
        path = KW_PATH_SOUND_FILE .. gameID .."/CardType/" .. sexPath[2]
    end

    local strRes
    if cardType == CardEnum.CARDS_TYPE.CT_1_JUNKO_0_EXCESS_1_CONTINUOUS then
        strRes = string.format("1_%d.mp3", tmpPower)
    elseif cardType == CardEnum.CARDS_TYPE.CT_2_JUNKO_0_EXCESS_1_CONTINUOUS then
        strRes = string.format("2_%d.mp3", tmpPower)
    elseif cardType >= CardEnum.CARDS_TYPE.CT_1_JUNKO_0_EXCESS_3_CONTINUOUS and cardType <= CardEnum.CARDS_TYPE.CT_1_JUNKO_0_EXCESS_14_CONTINUOUS then
        strRes = "shunzi.mp3"
    elseif cardType >= CardEnum.CARDS_TYPE.CT_5_JUNKO_0_EXCESS_1_CONTINUOUS then
        strRes = "zha_tianwangzhang.mp3"
        self:playEffect(KW_PATH_SOUND_FILE .. FILE_BOMB_SOUND_MP3) 
    else
        math.randomseed(tostring(os.time()):reverse():sub(1, 6))
        strRes = string.format("zha_%d.mp3",math.random(1,3))
        self:playEffect(KW_PATH_SOUND_FILE .. FILE_BOMB_SOUND_MP3)
    end
    if (strRes == "") then return end

    path = path .. strRes
    if cc.FileUtils:getInstance():isFileExist(path) then
        self:playEffect(path)
    end
end

return SoundManager
