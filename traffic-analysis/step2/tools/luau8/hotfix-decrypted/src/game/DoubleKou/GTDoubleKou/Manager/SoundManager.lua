local SoundManager = CF.gameClass("SoundManager", "game.DoubleKou.BaseDoubleKou.Manager.SoundManager")

--俏皮话列表索引
local speakListIndex = {
    standard = 1, --普通俏皮话
    dialect = 2 --方言俏皮话
}

function SoundManager:getSpeakConfigEx()
    local speakConfig = {}
    local confFileName = self:getSpeakConfigPath(42038)
    if CF.FileTool.isFileExist(confFileName) then
        local config = CF.gameRequire(confFileName).GameSpeakConfigByConfID or {}
        for _, v in pairs(config) do
            if not speakConfig[v.listIndex] then
                speakConfig[v.listIndex] = {}
            end
            speakConfig[v.listIndex][v.index] = v
        end
    end
    local listIndex = CF.settingData:getIsNormalVoice() and speakListIndex.standard or speakListIndex.dialect
    local config = speakConfig[listIndex]
    if not config and listIndex == speakListIndex.dialect then
        config = speakConfig[speakListIndex.standard]
    end
    return config
end

function SoundManager:initSpeak(gameID)
    self._speakCfg = {}
    if not gameID then
        return
    end
    gameID = 30116 -- 获取转换关系
    local boxGameId = CF.gameSub:getGoldToBoxGameId(gameID)
    if boxGameId then
        gameID = "1_" .. boxGameId
    end

    local confFileName = self:getSpeakConfigPath(gameID)
    if CF.FileTool.isFileExist(confFileName) then
        local config = CF.gameRequire(confFileName).GameSpeakConfigByConfID or {}
        for _, v in pairs(config) do
            if not self._speakCfg[v.listIndex] then
                self._speakCfg[v.listIndex] = {}
            end
            self._speakCfg[v.listIndex][v.index] = v
        end
    end
end

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

local PATH_SPEAK = "res/audio/Speak/"
local speakString = {
    [1] = "M_Speak%03d",
    [2] = "W_Speak%03d"
}
--俏皮话音效
function SoundManager:playSoundWisecrack(seat, bMan, bFangYan, gameID, index)
    local boxGameId = CF.gameSub:getGoldToBoxGameId(30116)
    if boxGameId then --and index >= 300 then
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
        -- if CF.TableTool.isValueInTable(gameID, CF.GameDefine.GAME_ID_CONF.SHUKE) then
        --     index = index + 100
        -- end
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

local PATH_DOUBLEKOU = "res/audio/DoubleKou"
local KW_PATH_SOUND_FILE = PATH_DOUBLEKOU .. "/GameLayer/" --除俏皮话之外的路径
local CardEnum = CF.gameRequire("Define.CardEnum")
local CardLogic = CF.gameRequire("Logic.CardLogic")
local FILE_BOMB_SOUND_MP3 = "0/Other/"
local FILE_READY_SOUND_MP3 = "0/Other/OK.mp3"
local FILE_PASS_SOUND_MP3 = "0/Other/pass.mp3"
local FILE_OUT_SOUND_MP3 = "0/Other/Out.mp3"
local FILE_END_SOUND_MP3 = "0/Other/end.mp3"
local FILE_CLOCK_SOUND_MP3 = "0/Other/Clock.mp3"
local FILE_SELECT_SOUND_MP3 = "0/Other/Select.mp3"
local FILE_SORT_SOUND_MP3 = "0/Other/Sort.mp3"

local KW_MP3_CARD_TYPE_XIAN = {
    [1] = "",
    [2] = "",
    [3] = "",
    [4] = "",
    [5] = "xian_5.mp3",
    [6] = "xian_6.mp3",
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
}

local KW_MP3_CARD_TYPE_BOOM = {
    [1] = "",
    [2] = "",
    [3] = "",
    [4] = "bomb_4_5.mp3",
    [5] = "bomb_4_5.mp3",
    [6] = "bomb_6_7.mp3",
    [7] = "bomb_6_7.mp3",
    [8] = "bomb_8_9.mp3",
    [9] = "bomb_8_9.mp3",
    [10] = "bomb_10_12.mp3",
    [11] = "bomb_10_12.mp3",
    [12] = "bomb_10_12.mp3",
    [13] = "bomb_10_12.mp3",
    [14] = "bomb_10_12.mp3",
    [15] = "bomb_10_12.mp3",
    [16] = "bomb_10_12.mp3",
    [17] = "bomb_10_12.mp3",
    [18] = "bomb_10_12.mp3",
}

function SoundManager:playSoundPlayCardType(sex, cardType, cardPower, bFangYan, gameID)
    local boxGameId = CF.gameSub:getGoldToBoxGameId(30116)
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
        path = KW_PATH_SOUND_FILE .. gameID .. "/CardType/" .. sexPath[1]
    else
        path = KW_PATH_SOUND_FILE .. gameID .. "/CardType/" .. sexPath[2]
    end

    if cardType < CardEnum.CARDS_TYPE.CT_4_JUNKO_1_CONTINUOUS then
        if cardType % 100 == 1 then
            path = path .. math.floor(cardType / 100) .. "_" .. cardPower .. ".mp3"
        else
            path = path .. "s_" .. math.floor(cardType / 100) .. ".mp3"
        end
    else
        local boomXian = CardLogic.GetBombLineNumberByType(cardType)
        self:playEffect(KW_PATH_SOUND_FILE .. FILE_BOMB_SOUND_MP3 .. KW_MP3_CARD_TYPE_BOOM[boomXian])
        if cardType % 100 == 1 then
            local tmpPath = path .. math.floor(cardType / 100) .. "_" .. cardPower .. ".mp3"
            if not cc.FileUtils:getInstance():isFileExist(tmpPath) or math.random(2) == 2 and KW_MP3_CARD_TYPE_XIAN[math.floor(cardType / 100)] ~= "" then
                tmpPath = path .. KW_MP3_CARD_TYPE_XIAN[math.floor(cardType / 100)]
            end
            path = tmpPath
        else
            if cardType > CardEnum.CARDS_TYPE.CT_0_KING then
                local count = cardType - CardEnum.CARDS_TYPE.CT_3_KING + 3
                path = path .. "wang_" .. count .. ".mp3"
            else
                local tmpPath = path .. "lian_" .. math.floor(cardType % 100) .. "_" .. math.random(2) .. ".mp3"
                if not cc.FileUtils:getInstance():isFileExist(tmpPath) then
                    tmpPath = path .. KW_MP3_CARD_TYPE_XIAN[boomXian]
                end
                path = tmpPath
            end
        end
    end
    if cc.FileUtils:getInstance():isFileExist(path) then
        self:playEffect(path)
    elseif bFangYan then
        self:playSoundPlayCardType(sex, cardType, cardPower, false)
    end
end

return SoundManagera