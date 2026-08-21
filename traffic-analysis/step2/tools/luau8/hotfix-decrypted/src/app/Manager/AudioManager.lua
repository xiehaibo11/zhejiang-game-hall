local AE = ccexp.AudioEngine


local AudioManager = class("AudioManager")

local tAudioConf = {}

local DefaultAudioConf = {
    BUTTON_CLICK = {name = "BUTTON_CLICK", type = "SFX", file = "audio/lobby_btn_effect.mp3", volume = 1.0, preload = true},
    ACT_GET_AWARD = {name = "ACT_GET_AWARD", type = "SFX", file = "audio/lobby_act_get_award.mp3", volume = 1.0, preload = true},
    BG_START = {name = "BG_START", type = "MUSIC", file = "audio/lobby_bgm.mp3", volume = 1.0, preload = true},
    PRAY_ACT_OPEN = {name = "PRAY_ACT_OPEN", type = "SFX", file = "audio/prayact.mp3", volume = 1.0, preload = true},
}

local TYPE_MUSIC = "MUSIC"
local TYPE_SFX = "SFX"

local ENUM_AUDIO_STATUS_PLAYING = "AUDIO_PLAYING"
local ENUM_AUDIO_STATUS_PAUSED = "AUDIO_PAUSED"
local ENUM_AUDIO_STATUS_STOPED = "AUDIO_STOPED"

function AudioManager:ctor()
    self:initDefaultConfig()
end

function AudioManager.init()
end

local preloadList = {}
local co
--初始化preload
function AudioManager:startPreload(loadInterval)
	loadInterval = loadInterval or 0.2				
	if co or #preloadList == 0 then
		return
	end

	co = coroutine.create(function()
		local sAudioName = table.remove(preloadList, 1)
		if not sAudioName then 
			co = nil
			return
		end
        --load
        local cfg = tAudioConf[sAudioName]
        local file = cfg.file
        AE:preload(file)
		coroutine.yield()
	end)

	local function startLoadTimer()
        local schedule = require(cc.PACKAGE_NAME .. ".scheduler")
        local handler
		handler = schedule.scheduleScriptFunc(function()
			if co and coroutine.status(co) ~= "dead" then
				coroutine_resume_with_debug(co)
			else
				schedule.unscheduleScriptEntry(handler)
			end
		end, loadInterval, false)
	end

	startLoadTimer()
end

function AudioManager:initDefaultConfig()
    self:addConfig(DefaultAudioConf)
end

--添加配置信息
function AudioManager:addConfig(c, bPreload)
	bPreload = bPreload or false
	for name, conf in pairs(c) do
		tAudioConf[name] = conf
		if conf.preload then
			table.insert(preloadList, name)
		end
	end

	if bPreload then
		self:startPreload()
	end
end


local currentMusic 
local sfxDic = {} 
local musicVolume = 1.0
local sfxVolume = 1.0

function AudioManager:GetMusicVolume(volume)
    return musicVolume
end

function AudioManager:GetSFXVolume(volume)
    return sfxVolume
end

function AudioManager:SetMusicVolume(volume)
    musicVolume = volume
    if currentMusic and currentMusic.status == ENUM_AUDIO_STATUS_PLAYING then
        AE:setVolume(currentMusic.id, volume)
    end
end

function AudioManager:SetSFXVolume(volume)
    sfxVolume = volume
    for _, handle in pairs(sfxDic) do
        if handle.status == ENUM_AUDIO_STATUS_PLAYING then
            AE:setVolume(handle.id, volume)
        end
    end
end

--播放音乐/音效
function AudioManager:play(name, finishCB)
    local cfg = tAudioConf[name]
    assert(cfg, "AudioManager:Play cfg cfg is nil:" .. name)
    local type = cfg.type
    local loop = type == TYPE_MUSIC
    local file = cfg.file
    local volume = cfg.volume

    if type == TYPE_MUSIC then
        volume = volume * musicVolume
    elseif type == TYPE_SFX then
        volume = volume * sfxVolume
    end

    if type == TYPE_MUSIC and currentMusic then
        if currentMusic.name == name then
            return
        end
        --stop current MUSIC
        --TODO: cc.EaseSineIn.create()
        AE:stop(currentMusic.id)
        currentMusic = nil
    end

    local audioID = AE:play2d(file, loop, volume)
    local handle = {}
    handle.name = name
    handle.id = audioID
    handle.status = ENUM_AUDIO_STATUS_PLAYING

    if not loop then
        AE:setFinishCallback(audioID, function()
            handle.status = ENUM_AUDIO_STATUS_STOPED
            sfxDic[audioID] = nil
            if finishCB then
                finishCB()
            end            
        end)
    end

    if type == TYPE_MUSIC then
        currentMusic = handle
    elseif type == TYPE_SFX then
        sfxDic[audioID] = handle
    end

    return handle
end

--播放音乐/音效
function AudioManager:playEffect(file, loop, volume)
    ccexp.AudioEngine:play2d(file)
end

local function pauseAudio(handle)
    AE:pause(handle.id)
    handle.status = ENUM_AUDIO_STATUS_PAUSED
end

local function resumeAudio(handle)
    AE:resume(handle.id)
    handle.status = ENUM_AUDIO_STATUS_PLAYING
end


local function stopAudio(handle, isSFX)
    AE:stop(handle.id)
    handle.status = ENUM_AUDIO_STATUS_STOPED
    if isSFX then
        sfxDic[handle.id] = nil
    end
end

--暂停当前音乐
function AudioManager:pauseMusic()
    if not currentMusic then
        print("WARN: AudioManager:pauseMusic: currentMusic is nil")
        return
    end

    pauseAudio(currentMusic)
end

--恢复播放当前音乐
function AudioManager:resumeMusic()
    if not currentMusic then
        print("WARN: AudioManager:resumeMusic: currentMusic is nil")
        return
    end
    resumeAudio(currentMusic)
end

--停止当前音乐
function AudioManager:stopMusic()
    if not currentMusic then
        print("WARN: AudioManager:stopMusic: currentMusic is nil")
        return
    end
    stopAudio(currentMusic, false)
end

--暂停单个SFX
function AudioManager:pauseSFX(handle)
    assert(handle, "AudioManager:pauseSFX: handle is nil")
    if not handle.status == ENUM_AUDIO_STATUS_PLAYING then
        print("WARN: AudioManager:pauseSFX: sfx not playing")
        return
    end

    pauseAudio(handle)
end

--恢复单个SFX
function AudioManager:resumeSFX(handle)
    assert(handle, "AudioManager:resumeSFX: handle is nil")
    if not handle.status == ENUM_AUDIO_STATUS_PAUSED then
        print("WARN: AudioManager:pauseSFX: sfx not paused")
        return
    end

    resumeAudio(handle)
end

--暂停所有SFX
function AudioManager:pauseAllSFX()
    for _, handle in pairs(sfxDic) do
        if handle.status == ENUM_AUDIO_STATUS_PLAYING then
            self:pauseSFX(handle)
        end
    end
end

--停止所有SFX
function AudioManager:stopAllSFX()
    for _, handle in pairs(sfxDic) do
        stopAudio(handle, true)
    end
end





return AudioManager�