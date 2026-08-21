local SoundManager = NG.GAME.gameClass("SoundManager", "newgold.GoldGames.GoldGameBase.Manager.SoundManager")
local GameMainDefine = NG.GAME.gameRequire("Modules.GameMain.Define.GameMainDefine")
local GoldSoundConfig = NG.GAME.gameRequire("Config.GoldSoundConfig")

function SoundManager:ctor()
    SoundManager.super.ctor(self)

    NG.audioManager:addConfig({
        GOLD_BBXL_BG = { name = "GOLD_BBXL_BG", type = "MUSIC", file = self:getSoundBasePath() .. "bg.MP3", volume = 1, preload = true },
    })
end

function SoundManager:getSoundBasePath()
    return self._basePath .. "20801/"
end

-- 播放俏皮话音效
function SoundManager:playTalkEffect(index)
    local path = GameMainDefine.ChatListSound[index]
    if path == nil then
        return
    end
    local soundPath = self:getSoundBasePath() .. "talk/man/Man" .. path
    if not self:isManSound() then
        soundPath = self:getSoundBasePath() .. "talk/woman/Woman" .. path
    end
    self:playEffect(soundPath)
end


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


local musicType = {
    [1] = ".mp3"
}

function SoundManager:playMusic(callback)
    self:stopMusic()
    NG.audioManager:play("GOLD_BBXL_BG", callback)
end

function SoundManager:stopMusic()
    NG.audioManager:stopMusic()
end

function SoundManager:getSexPath(bMan)
    return sexPath[self:isManSound() and 1 or 2]
end


function SoundManager:playSoundMah(mahID, bMan, gameID)
    local path = PATH_MAHJONG .. soundPath[1] .. mahPath[1] .. self:getSexPath(bMan) .. mahID .. musicType[1]
    self:playEffect(path)
end

function SoundManager:playSoundMahAction(actionIndex, bMan, gameID)
    local path = PATH_MAHJONG .. soundPath[1] .. mahPath[2] .. self:getSexPath(bMan) .. actionIndex .. musicType[1]
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
    local path = PATH_MAHJONG .. "Sound/" .. FILE_CHIP_MP3
    self:playEffect(path)
end

function SoundManager:playSoundOut()
    local path = PATH_MAHJONG .. "Sound/" .. FILE_OUT_SOUND_MP3
    self:playEffect(path)
end

function SoundManager:playSoundClock()
    local path = PATH_MAHJONG .. "Sound/" .. FILE_CLOCK_SOUND_MP3
    self:playEffect(path)
end

function SoundManager:playFaceAniMoveSound(strFaceAniName)
    local path = PATH_MAHJONG .. "Sound/FaceAni/" .. strFaceAniName .. ".mp3"
    self:playEffect(path)
end

function SoundManager:playFaceAniEndSound(strFaceAniName)
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
    if config and index and config[index] then
        speakText = config[index].SpeakText or ""
    end
    return speakText
end


function SoundManager:playNewEffect(fileName)
    self:playEffect(self:getSoundBasePath() .. "effect/" .. fileName)
end
return SoundManager