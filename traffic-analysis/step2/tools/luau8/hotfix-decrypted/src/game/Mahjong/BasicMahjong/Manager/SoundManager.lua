local SoundManager = CF.gameClass("SoundManager", "game.GameBase.Manager.SoundManager")

local ENUM_AUDIO_STATUS_PLAYING = "AUDIO_PLAYING"
-- local ENUM_AUDIO_STATUS_PAUSED = "AUDIO_PAUSED"
local ENUM_AUDIO_STATUS_STOPED = "AUDIO_STOPED"

local PATH_MAHJONG = "res/audio/Mahjong/"
local PATH_SPEAK = "res/audio/Speak/"

local FILE_START_SOUND_MP3 = "start.mp3"
local FILE_END_SOUND_MP3 = "end.mp3"
local FILE_CLICK_BUTTOM_MP3 = "Button.mp3"
local FILE_CHIP_MP3 = "Chip.mp3"
local FILE_OUT_SOUND_MP3 = "Out.mp3"
local FILE_CLOCK_SOUND_MP3 = "Clock.mp3"

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

local languageType = {
    [1] = "standard/",
    [2] = "dialect",
}

-- local mahActionPath = {
--     [1] = "Chow",
--     [2] = "Pung",
--     [3] = "MKong",
--     [4] = "CKong",
--     [5] = "TKong",
--     [6] = "hu_self",
--     [7] = "hu_other",
-- }

local mahPropName = {
    [1] = "bomb_in.mp3",
}

local speakString = "M_Speak%02d"

local musicType = {
    [1] = ".mp3"
}

--俏皮话列表索引
-- local speakListIndex = {
--     standard = 1,  --普通俏皮话
--     dialect = 2    --方言俏皮话
-- }

function SoundManager:getSpeakConfigPath(gameID)
    return "game.Mahjong.GameSpeakConfig.GameSpeak_" .. gameID
end

function SoundManager:playMusic(path, callback)
    local isExist = cc.FileUtils:getInstance():isFileExist(path)
    if not isExist then
        return
    end
    local handle = {}
    handle.name = path
    handle.status = ENUM_AUDIO_STATUS_PLAYING
    local audioID = CF.audioManager:playMusic(path,true,function()
        handle.status = ENUM_AUDIO_STATUS_STOPED
        if callback then
            callback()
        end
    end)
    handle.id = audioID
    self._currentMusic = handle
end

--俏皮话音效
function SoundManager:playSoundWisecrack(seat ,bMan, bFangYan, gameID, index)
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    local boxGameId = CF.gameSub:getGoldToBoxGameId(gameID)

    if boxGameId then
        gameID = boxGameId
    end
    local path
    -- bMan = false
    if gameID == nil then
        if bMan then
            path = PATH_SPEAK .. "0/" .. sexPath[1] .. string.format(speakString,index) .. musicType[1]
        else
            path = PATH_SPEAK .. "0/" .. sexPath[2] .. string.format(speakString,index) .. musicType[1]
        end
    else
        local speakConfig = self:getSpeakConfig()
        if not speakConfig[index] then
            return
        end
        if bFangYan then
        -- ++
            local dialectType = CF.settingData:getMahDialectVoiceType()
            dialectType = (dialectType == 2 or dialectType == 1) and "" or tostring(dialectType)
            if bMan then
                path = PATH_SPEAK .. gameID .. "/" .. languageType[2] .. dialectType .. "/" .. sexPath[1] .. speakConfig[index].M_SpeakFileName
            else
                path = PATH_SPEAK .. gameID .. "/" .. languageType[2] .. dialectType .. "/" .. sexPath[2] .. speakConfig[index].W_SpeakFileName
            end
            local isExist = cc.FileUtils:getInstance():isFileExist(path)
            if not isExist then
                if bMan then
                    path = PATH_SPEAK .. gameID .. "/" .. languageType[1] .. sexPath[1] .. speakConfig[index].M_SpeakFileName
                else
                    path = PATH_SPEAK .. gameID .. "/" .. languageType[1] .. sexPath[2] .. speakConfig[index].W_SpeakFileName
                end 
            end
        else
            if bMan then
                path = PATH_SPEAK .. gameID .. "/" .. languageType[1] .. sexPath[1] .. speakConfig[index].M_SpeakFileName
            else
                path = PATH_SPEAK .. gameID .. "/" .. languageType[1] .. sexPath[2] .. speakConfig[index].W_SpeakFileName
            end
            local isExist = cc.FileUtils:getInstance():isFileExist(path)
            if not isExist then
                if bMan then
                    path = PATH_SPEAK .. gameID .. "/" .. languageType[2] .. "/" .. sexPath[1] .. speakConfig[index].M_SpeakFileName
                else
                    path = PATH_SPEAK .. gameID .. "/" .. languageType[2] .. "/" .. sexPath[2] .. speakConfig[index].W_SpeakFileName
                end
            end
        end
    end
    self:playEffect(path)
end
    

function SoundManager:playSoundMah(mahID, bMan ,gameID)
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    local boxGameId = CF.gameSub:getGoldToBoxGameId(gameID)
    
    if boxGameId then
        gameID = boxGameId
    end
    local path
    if gameID == nil then
        if bMan then
             path = PATH_MAHJONG .. soundPath[1] .. mahPath[1] .. sexPath[1] .. mahID .. musicType[1]
        else
             path = PATH_MAHJONG .. soundPath[1] .. mahPath[1] .. sexPath[2] .. mahID .. musicType[1]
        end
    else
        --++ 
        local dialectType = CF.settingData:getMahDialectVoiceType()
        dialectType = (dialectType == 2 or dialectType == 1) and "" or tostring(dialectType)

        if bMan then
            path = PATH_MAHJONG .. soundPath[2] .. gameID .. dialectType .. "/" .. mahPath[1] .. sexPath[1] .. mahID .. musicType[1]
        else
            path = PATH_MAHJONG .. soundPath[2] .. gameID .. dialectType .. "/"  .. mahPath[1] .. sexPath[2] .. mahID .. musicType[1]
        end
    end
    
    self:playEffect(path)
end

function SoundManager:playSoundMahAction(actionIndex, bMan ,gameID)
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    local boxGameId = CF.gameSub:getGoldToBoxGameId(gameID)
    
    if boxGameId then
        gameID = boxGameId
    end
    local path
    if gameID == nil then
        if bMan then
            path = PATH_MAHJONG .. soundPath[1] .. mahPath[2] .. sexPath[1] .. actionIndex .. musicType[1]
        else
            path = PATH_MAHJONG .. soundPath[1] .. mahPath[2] .. sexPath[2] .. actionIndex .. musicType[1]
        end
    else
        -- ++
        local dialectType = CF.settingData:getMahDialectVoiceType()
        dialectType = (dialectType == 2 or dialectType == 1)  and "" or tostring(dialectType)
        if bMan then
            path = PATH_MAHJONG .. soundPath[2] .. gameID .. dialectType .. "/" .. mahPath[2] .. sexPath[1] .. actionIndex .. musicType[1]
        else
            path = PATH_MAHJONG .. soundPath[2] .. gameID .. dialectType .. "/"  .. mahPath[2] .. sexPath[2] .. actionIndex .. musicType[1]
        end
    end

    self:playEffect(path)
end

--瑞安的声音播放函数，继承有点麻烦要定义不少变量，干脆定义在基类
function SoundManager:playSoundMahActionWidthSuffix(actionIndex, bMan ,gameID)
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    local boxGameId = CF.gameSub:getGoldToBoxGameId(gameID)
    
    if boxGameId then
        gameID = boxGameId
    end
    local path
    if gameID == nil then
        if bMan then
            path = PATH_MAHJONG .. soundPath[1] .. mahPath[2] .. sexPath[1] .. actionIndex .. musicType[1]
        else
            path = PATH_MAHJONG .. soundPath[1] .. mahPath[2] .. sexPath[2] .. actionIndex .. musicType[1]
        end
    else
        -- if bMan then
        --     path = PATH_MAHJONG .. soundPath[2] .. gameID .. "/" .. mahPath[2] .. sexPath[1] .. actionIndex .. musicType[1]
        -- else
        --     path = PATH_MAHJONG .. soundPath[2] .. gameID .. "/"  .. mahPath[2] .. sexPath[2] .. actionIndex .. musicType[1]
        -- end
        if bMan then
            local count = 0
            while true do
                if cc.FileUtils:getInstance():isFileExist(PATH_MAHJONG .. soundPath[2] .. gameID .. "/" .. mahPath[2] .. sexPath[1] .. actionIndex .. "_" .. count .. musicType[1]) then
                    count = count + 1
                else
                    break
                end
            end
            if count == 0 then
                path = PATH_MAHJONG .. soundPath[2] .. gameID .. "/" .. mahPath[2] .. sexPath[1] .. actionIndex .. musicType[1]
            else
                local randNum = math.random(0,count-1)
                path = PATH_MAHJONG .. soundPath[2] .. gameID .. "/" .. mahPath[2] .. sexPath[1] .. actionIndex .. "_" .. randNum .. musicType[1]
            end  
        else
            local count = 0
            while true do
                if cc.FileUtils:getInstance():isFileExist(PATH_MAHJONG .. soundPath[2] .. gameID .. "/"  .. mahPath[2] .. sexPath[2] .. actionIndex .. "_" .. count .. musicType[1]) then
                    count = count + 1
                else
                    break
                end
            end
            if count == 0 then
                path = PATH_MAHJONG .. soundPath[2] .. gameID .. "/"  .. mahPath[2] .. sexPath[2] .. actionIndex .. musicType[1]
            else
                local randNum = math.random(0,count-1)
                path = PATH_MAHJONG .. soundPath[2] .. gameID .. "/"  .. mahPath[2] .. sexPath[2] .. actionIndex .. "_" .. randNum .. musicType[1]
            end  
        end
    end
    self:playEffect(path)
end

function SoundManager:playSoundMahProp(propIndex)
    local path = PATH_MAHJONG .. soundPath[4] .. mahPropName[propIndex] .. musicType[1]
    self:playEffect(path)
end

function SoundManager:playSoundMahEffect(soundName ,gameID)
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    local boxGameId = CF.gameSub:getGoldToBoxGameId(gameID)
    
    if boxGameId then
        gameID = boxGameId
    end
    local path
    if gameID == nil then
         path = PATH_MAHJONG .. soundPath[3] .. soundName .. musicType[1]
    else
         path = PATH_MAHJONG .. soundPath[3] .. gameID .. "/"  .. soundName .. musicType[1]   
    end
    
    self:playEffect(path)
end

function SoundManager:playButtonClick()
    local path = PATH_MAHJONG .. "Sound/" .. FILE_CLICK_BUTTOM_MP3
    self:playEffect(path)
end

function SoundManager:playSoundStart()
    local path = PATH_MAHJONG .. "Sound/" .. FILE_START_SOUND_MP3
    self:playEffect(path)
end

function SoundManager:playSoundEnd()
    local path = PATH_MAHJONG .. "Sound/" .. FILE_END_SOUND_MP3
    self:playEffect(path)
end

function SoundManager:playSoundChip()
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    local path = PATH_MAHJONG .. "Sound/" .. FILE_CHIP_MP3
    self:playEffect(path)
end

function SoundManager:playSoundOut()
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    local path = PATH_MAHJONG .. "Sound/" .. FILE_OUT_SOUND_MP3
    self:playEffect(path)
end

function SoundManager:playSoundClock()
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    local path = PATH_MAHJONG .. "Sound/" .. FILE_CLOCK_SOUND_MP3
    self:playEffect(path)
end

function SoundManager:playFaceAniMoveSound(strFaceAniName)
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    local path = PATH_MAHJONG .. "Sound/FaceAni/" .. strFaceAniName .. ".mp3"
    self:playEffect(path)
end

function SoundManager:playFaceAniEndSound(strFaceAniName)
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    local path = PATH_MAHJONG .. "Sound/FaceAni/" .. strFaceAniName .. ".mp3"
    self:playEffect(path)
end

function SoundManager:getDialetcConfigByGameID(gameID)
    -- ++可能出错
    local config = require("game.Mahjong.GameSpeakConfig.GameDialectCfg")
    if not gameID or not config[gameID] then
        gameID = 0
    end
    return config[gameID]
end


function SoundManager:getSpeakTextByIndex(index)
    local speakText = ""
    local config = self:getSpeakConfig()
    if config and index and config[index]  then
        speakText = config[index].SpeakText or ""
    end
    return speakText
end

return SoundManagerl0