local SoundManager = CF.gameClass("SoundManager", "game.GameBase.Manager.SoundManager")

local CardEnum = CF.gameRequire("Define.CardEnum")
local CardLogic = CF.gameRequire("Logic.CardLogic")
local PATH_DOUBLEKOU = "res/audio/DoubleKou"
local KW_PATH_SOUND_FILE = PATH_DOUBLEKOU .. "/GameLayer/" --除俏皮话之外的路径
local FILE_BOMB_SOUND_MP3 = "0/Other/"
local FILE_READY_SOUND_MP3 = "0/Other/OK.mp3"
local FILE_PASS_SOUND_MP3 = "0/Other/pass.mp3"
local FILE_OUT_SOUND_MP3 = "0/Other/Out.mp3"
local FILE_END_SOUND_MP3 = "0/Other/end.mp3"
local FILE_CLOCK_SOUND_MP3 = "0/Other/Clock.mp3"
local FILE_SELECT_SOUND_MP3 = "0/Other/Select.mp3"
local FILE_SORT_SOUND_MP3 = "0/Other/Sort.mp3"
local FILE_START_SOUND_MP3 = "0/Other/start.mp3"
local FILE_START_ANI_SOUND_MP3 = "0/Other/startAni.mp3"

--俏皮话列表索引
local speakListIndex = {
    standard = 1, --普通俏皮话
    dialect = 2 --方言俏皮话
}

-- 音效配置
local KW_MP3_CARD_TYPE_XIAN = {
    [1] = "",
    [2] = "",
    [3] = "",
    [4] = "",
    [5] = "",
    [6] = "",
    [7] = "xian_7.mp3",
    [8] = "xian_8.mp3",
    [9] = "xian_9.mp3",
    [10] = "xian_10.mp3",
    [11] = "xian_11.mp3",
    [12] = "xian_12.mp3",
    [13] = "xian_13.mp3",
    [14] = "xian_14.mp3",
    [15] = "xian_15.mp3",
    [16] = "xian_16.mp3",
    [17] = "xian_17.mp3",
    [18] = "xian_18.mp3",
    [19] = "xian_19.mp3",
    [20] = "xian_20.mp3",
    [21] = "xian_21.mp3",
    [22] = "xian_22.mp3",
    [23] = "xian_23.mp3",
    [24] = "xian_24.mp3",
}

local KW_MP3_CARD_TYPE_BOOM = {
    [1] = "",
    [2] = "",
    [3] = "",
    [4] = "bomb_4_5.mp3",
    [5] = "bomb_4_5.mp3",
    [6] = "bomb_4_5.mp3",
    [7] = "bomb_4_5.mp3",
    [8] = "bomb_4_5.mp3",
    [9] = "bomb_6_7.mp3",
    [10] = "bomb_6_7.mp3",
    [11] = "bomb_6_7.mp3",
    [12] = "bomb_6_7.mp3",
    [13] = "bomb_8_9.mp3",
    [14] = "bomb_8_9.mp3",
    [15] = "bomb_8_9.mp3",
    [16] = "bomb_8_9.mp3",
    [17] = "bomb_10_12.mp3",
    [18] = "bomb_10_12.mp3",
    [19] = "bomb_10_12.mp3",
    [20] = "bomb_10_12.mp3",
    [21] = "bomb_10_12.mp3",
    [22] = "bomb_10_12.mp3",
    [23] = "bomb_10_12.mp3",
    [24] = "bomb_10_12.mp3",
}

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

function SoundManager:playSoundPlayCardType(sex, cardType, cardPower, bFangYan, gameID, outCardIDs)
    local boxGameId = CF.gameSub:getGoldToBoxGameId(gameID)
    if boxGameId then
        gameID = boxGameId
    end
    local path
    local bMan = false
    if sex == 1 then
        bMan = true
    end
    if gameID == nil then
        gameID = 0
    end
    if bMan then
        path = "/CardType/" .. sexPath[1]
    else
        path = "/CardType/" .. sexPath[2]
    end

    if cardType < CardEnum.CARDS_TYPE.CT_4_JUNKO_1_CONTINUOUS then
        if cardType % 100 == 1 then
            path = path .. math.floor(cardType / 100) .. "_" .. cardPower .. ".mp3"
        else
            path = path .. "s_" .. math.floor(cardType / 100) .. ".mp3"
        end
    else
        local boomXian = CardLogic.GetBombLineNumberByType(cardType, outCardIDs)
        self:playEffect(KW_PATH_SOUND_FILE .. FILE_BOMB_SOUND_MP3 .. KW_MP3_CARD_TYPE_BOOM[boomXian])
        local tmpPath
        if cardType % 100 == 1 then
            tmpPath = path .. math.floor(cardType / 100) .. "_" .. cardPower .. ".mp3"
            if KW_MP3_CARD_TYPE_XIAN[math.floor(cardType / 100)] ~= "" then
                tmpPath = path .. KW_MP3_CARD_TYPE_XIAN[math.floor(cardType / 100)]
            end
        else
            if KW_MP3_CARD_TYPE_XIAN[boomXian] ~= "" then
                tmpPath = path .. KW_MP3_CARD_TYPE_XIAN[boomXian]
            end
        end
        path = tmpPath
    end
    local fangYanPath = KW_PATH_SOUND_FILE .. gameID .. path
    local normalPath = KW_PATH_SOUND_FILE .. 0 .. path
    if bFangYan and cc.FileUtils:getInstance():isFileExist(fangYanPath) then
        self:playEffect(fangYanPath)
    elseif cc.FileUtils:getInstance():isFileExist(normalPath) then
        self:playEffect(normalPath)
    end
end

function SoundManager:playSoundStart()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE .. FILE_START_SOUND_MP3)
end

function SoundManager:playSoundEnd()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE .. FILE_END_SOUND_MP3)
end

function SoundManager:getSpeakConfigPath(gameID)
    return "game.WuLong.GameSpeakConfig.GameSpeak_" .. gameID
end

local PATH_SPEAK = "res/audio/Speak/"
local speakString = {
    [1] = "M_Speak%03d",
    [2] = "W_Speak%03d"
}
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

function SoundManager:getSpeakConfig()
    local listIndex = CF.settingData:getDoubleKouIsNormalVoice() and speakListIndex.standard or speakListIndex.dialect
    local config = self._speakCfg[listIndex]
    if not config and listIndex == speakListIndex.dialect then
        config = self._speakCfg[speakListIndex.standard]
    end
    return config
end

function SoundManager:playSoundStartAni()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE .. FILE_START_ANI_SOUND_MP3)
end

return SoundManagerP   