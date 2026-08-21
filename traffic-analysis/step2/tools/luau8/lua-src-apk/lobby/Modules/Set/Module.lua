local SetModule = class("SetModule", XH.ModuleBase)
local userDefault = cc.UserDefault:getInstance()

local SaveKeyTab = {
    MUSIC = "MUSIC_PERCENT",-- 背景音乐声音大小 
    SOUND = "SOUND_PERCENT",-- 音效大小
    VOICE = "VOICE_PERCENT",-- 语音大小
    VOICE_TYPE = "VOICE_TYPE",--是否为男提示音
}

function SetModule:ctor()
    SetModule.super.ctor(self)
    self._updateDataFunId = 0
    self._curUserIdentfity = ""
    self._settings = { }
end

function SetModule:getProxyEvents()
    return {
        { module = XH.login:getModule("Login"), eventKeyName = "LOGIN_EVENT_SUCCESS", callBack = "onUserLoggin" },
    }
end

-- 用于区分不同用户，构成为 areaid_numid
function SetModule:setUserIdentfity(identfity)
    if identfity and identfity ~= "" then
        self._curUserIdentfity = identfity
    end 
end

--获得根据区域ID和numid拼合的存储用的key
--saveKey   SaveKeyTab中定义的值
function SetModule:getFullSaveKey(saveKey)
    if self._curUserIdentfity ~= "" then
        saveKey = saveKey .. self._curUserIdentfity
    end
    return saveKey
end

--重置数据
function SetModule:resetData()
    self._curUserIdentfity = ""
    self._settings = { }
end

-------------事件处理-------------------
--玩家切换账号消息
function SetModule:onUserLoggin()
    self:reload()
end

--------------对外接口---------------
--获得音乐大小
function SetModule:getMusicPercent()
    local musicPercent = self._settings[SaveKeyTab.MUSIC]

    if musicPercent == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.MUSIC)
        musicPercent = userDefault:getIntegerForKey(saveKey, 100)
    end

    return musicPercent
end

--获得音效大小[0-100]
function SetModule:getSoundPercent()
    local soundPercent = self._settings[SaveKeyTab.SOUND]

    if soundPercent == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.SOUND)
        soundPercent = userDefault:getIntegerForKey(saveKey, 100)
    end

    return soundPercent
end

--获得语音大小[0-100]
function SetModule:getVoicePercent()
    local soundPercent = self._settings[SaveKeyTab.VOICE]

    if soundPercent == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.VOICE)
        soundPercent = userDefault:getIntegerForKey(saveKey, 50)
    end

    return soundPercent
end

--设置音效大小[0-100]
function SetModule:setSoundPercent(soundPercent)
    if soundPercent and soundPercent >= 0 then
        self._settings[SaveKeyTab.SOUND] = soundPercent
        local saveKey = self:getFullSaveKey(SaveKeyTab.SOUND)
        userDefault:setIntegerForKey(saveKey, soundPercent)
    end
    XH.audioManager:SetSFXVolume(soundPercent / 100)
end

--设置音乐大小
function SetModule:setMusicPercent(musicPercent)
    if musicPercent and musicPercent >= 0 then
        self._settings[SaveKeyTab.MUSIC] = musicPercent
        local saveKey = self:getFullSaveKey(SaveKeyTab.MUSIC)
        userDefault:setIntegerForKey(saveKey, musicPercent)
    end
    XH.audioManager:SetMusicVolume(musicPercent / 100)
end

--设置语音大小
function SetModule:setVoicePercent(voicePercent)
    if voicePercent and voicePercent >= 0 then
        self._settings[SaveKeyTab.VOICE] = voicePercent
        local saveKey = self:getFullSaveKey(SaveKeyTab.VOICE)
        userDefault:setIntegerForKey(saveKey, voicePercent)
    end
end

--设置提示声音(男,女)
function SetModule:setVoiceType(bMan)
    if bMan ~= nil then
        self._settings[SaveKeyTab.VOICE_TYPE] = bMan
        local saveKey = self:getFullSaveKey(SaveKeyTab.VOICE_TYPE)
        cc.UserDefault:getInstance():setBoolForKey(saveKey, bMan)
        if bMan == true then
            XH.playerData:reqChangePlayerInfo(1,XH.playerData:getNickName(),XH.playerData:getWeChatURL(), true,XH.playerData:isBindPhone())
        else
            XH.playerData:reqChangePlayerInfo(0,XH.playerData:getNickName(),XH.playerData:getWeChatURL(), true,XH.playerData:isBindPhone())
        end
    end
end

--获得是否为男提示音
function SetModule:getVoiceType()
    local style = self._settings[SaveKeyTab.VOICE_TYPE]
    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.VOICE_TYPE)
        style = cc.UserDefault:getInstance():getBoolForKey(saveKey,  true or false)
    end
    return style
end

--重新读取配置
function SetModule:reload()
    local numId = XH.playerData:getNumberID()
    local areaId = XH.playerData:getBrandID()
    local identfity = areaId .. numId
    
    self:resetData()
    self:setUserIdentfity(identfity)

    XH.audioManager:SetMusicVolume(self:getMusicPercent() / 100)
    XH.audioManager:SetSFXVolume(self:getSoundPercent() / 100)
end

function SetModule:getQualificationConfig(lobbyID)
    self._QualificationConfig = require("lobby.Config.Qualification.Qualification_" .. lobbyID).QualificationByConfID or {}
    return self._QualificationConfig
end

function SetModule:getAgreementConfig(lobbyID,type,targetPlatform)
    self._AgreementConfig = require("lobby.Config.Qualification.Qualification_" .. lobbyID).AgreementConfigByConfID or {}
    if not self._AgreementConfig then 
        return nil
    end 
    for i = 1,#self._AgreementConfig do 
        if self._AgreementConfig[i].AgreementType == type and self._AgreementConfig[i].Platform == targetPlatform then 
            return self._AgreementConfig[i]
        end 
    end
    return nil 
end

function SetModule:startFourceUpdate()
    local bHotUpdateOpen = false
    local targetPlatform = cc.Application:getInstance():getTargetPlatform()
    if cc.PLATFORM_OS_IPAD == targetPlatform or cc.PLATFORM_OS_IPHONE == targetPlatform or cc.PLATFORM_OS_ANDROID == targetPlatform then
        bHotUpdateOpen = true
    end
    local callback = function()
        if bHotUpdateOpen then
            require("app.hotupdate.universe.init")
            local ResChecker = require("app.hotupdate.lobby.ResChecker")
            ResChecker.start(nil, true)
            return
        end
    end
    require("app.hotupdate.universe.init")
    local ui = require("app.PackageDownload.UI").new(true)
    ui:start(callback)
    local check = require("app.PackageDownload.Check").new()
    check:start(callback)
end


return SetModule1