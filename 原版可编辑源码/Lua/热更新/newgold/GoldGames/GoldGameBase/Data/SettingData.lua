local SettingData = NG.GAME.gameClass("SettingData", NG.ModuleBase)
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")

local SaveKeyTab = {
    MUSIC = 'MUSIC_PERCENT', -- 背景音乐声音大小
    SOUND = 'SOUND_PERCENT', -- 音效大小
    VOICE_TYPE = "VOICE_TYPE",--是否为男提示音
}

function SettingData:ctor()
    SettingData.super.ctor(self)
    self._settings = {}
    self._curDefault = {
        [SaveKeyTab.MUSIC] = 100,
        [SaveKeyTab.SOUND] = 100,
    }
    self:initData()
end

function SettingData:initData()
    local musicVal = self:getMusicPercent()
    NG.audioManager:SetMusicVolume(musicVal / 100)
    local soundVal = self:getSoundPercent()
    NG.audioManager:SetEffectVolume(soundVal / 100)
end

function SettingData:getFullSaveKey(saveKey, customKey)
    local numId = GoldPlayerData.UserId
    local areaId = GoldPlayerData.AreaId
    saveKey = saveKey .. areaId .. numId
    if customKey then
        saveKey = saveKey .. customKey
    end
    return saveKey
end

--------------对外接口---------------
--获得音乐大小
function SettingData:getMusicPercent()
    local musicPercent = self._settings[SaveKeyTab.MUSIC]

    if musicPercent == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.MUSIC)
        musicPercent = cc.UserDefault:getInstance():getIntegerForKey(saveKey, self._curDefault[SaveKeyTab.MUSIC])
    end

    return musicPercent
end

--获得音效大小[0-100]
function SettingData:getSoundPercent()
    local soundPercent = self._settings[SaveKeyTab.SOUND]

    if soundPercent == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.SOUND)
        soundPercent = cc.UserDefault:getInstance():getIntegerForKey(saveKey, self._curDefault[SaveKeyTab.SOUND])
    end

    return soundPercent
end

--设置音效大小[0-100]
function SettingData:setSoundPercent(soundPercent)
    if soundPercent and soundPercent >= 0 then
        self._settings[SaveKeyTab.SOUND] = soundPercent
        local saveKey = self:getFullSaveKey(SaveKeyTab.SOUND)
        cc.UserDefault:getInstance():setIntegerForKey(saveKey, soundPercent)
        NG.audioManager:SetEffectVolume(soundPercent / 100)
    end
end

--设置音乐大小
function SettingData:setMusicPercent(musicPercent)
    if musicPercent and musicPercent >= 0 then
        self._settings[SaveKeyTab.MUSIC] = musicPercent
        local saveKey = self:getFullSaveKey(SaveKeyTab.MUSIC)
        cc.UserDefault:getInstance():setIntegerForKey(saveKey, musicPercent)
        NG.audioManager:SetMusicVolume(musicPercent / 100)
    end
end

--设置提示声音(男,女)
function SettingData:setVoiceType(bMan)
    if bMan ~= nil then
        self._settings[SaveKeyTab.VOICE_TYPE] = bMan
        local saveKey = self:getFullSaveKey(SaveKeyTab.VOICE_TYPE)
        cc.UserDefault:getInstance():setBoolForKey(saveKey, bMan)
    end
end

--获得是否为男提示音
function SettingData:getVoiceType()
    local style = self._settings[SaveKeyTab.VOICE_TYPE]
    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.VOICE_TYPE)
        style = cc.UserDefault:getInstance():getBoolForKey(saveKey,  true or false)
    end
    return style
end

return SettingData