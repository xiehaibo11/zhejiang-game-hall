local SoundManager = class("SoundManager")

function SoundManager:ctor()
    self._basePath = "res/NewGoldRes/sound/"
    self._playEffectLimit = false -- 音效限制
    self._playMusicLimit = false -- 音乐限制
end

function SoundManager:setPlayEffectLimit(isLimit)
    self._playEffectLimit = isLimit
end

function SoundManager:setPlayMusicLimit(isLimit)
    self._playMusicLimit = isLimit
end

-- 巅峰赛播放音效
function SoundManager:playMatchEffect(path)
    if path == nil then
        return
    end
    local extPath = "res/audio/" .. NG.goldLobby:getModule("PeakRaceDispatch"):getCurGameID() .. "/"
    self:playEffect(extPath .. path)
end

function SoundManager:getPlayEffectLimit()
    return self._playEffectLimit
end

function SoundManager:getPlayMusicLimit()
    return self._playMusicLimit
end

-- 播放音效
function SoundManager:playEffect(path)
    path = self:addMp3Param(path)
    local isExist = cc.FileUtils:getInstance():isFileExist(path)
    if not isExist then
        print("path is not found! path = " .. tostring(path))
        return
    end
    if not self:getPlayEffectLimit() then
        NG.audioManager:playEffect(path)
    end
end

-- 播放音乐
function SoundManager:playMusic(path)
    path = self:addMp3Param(path)
    local isExist = cc.FileUtils:getInstance():isFileExist(path)
    if not isExist then
        print("path is not found! path = " .. tostring(path))
        return
    end
    if not self:getPlayMusicLimit() then
        NG.audioManager:playMusic(path)
    end
end

-- 是否为男声
function SoundManager:isManSound()
    return NG.GAME.settingData:getVoiceType()
end

function SoundManager:addMp3Param(path)
    if not string.find(path, ".mp3") then
        path = path .. ".mp3"
    end
    return path
end

return SoundManager