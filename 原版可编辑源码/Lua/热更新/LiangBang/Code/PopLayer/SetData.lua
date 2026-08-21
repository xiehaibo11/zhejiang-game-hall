local SetData = class("SetData")

--省电模式
local KW_DATA_SET_FRUGAL_POWER_OPEN       = "KW_DATA_SET_FRUGAL_POWER_OPEN"
--自动准备
local KW_DATA_SET_AUTO_START_OPEN         = "KW_DATA_SET_AUTO_START_OPEN"
--动画
local KW_DATA_SET_ANI_OPEN                = "KW_DATA_SET_ANI_OPEN"
--方言
local KW_DATA_SET_DIALECT_OPEN            = "KW_DATA_SET_DIALECT_OPEN"
--音效百分比
local KW_DATA_SET_SOUND_PERCENT           = "KW_DATA_SET_SOUND_PERCENT"
--音乐百分比
local KW_DATA_SET_MUSIC_PERCENT           = "KW_DATA_SET_MUSIC_PERCENT"
--双击出牌
local KW_DATA_SET_DOUBLECLICK_OPEN        = "KW_DATA_SET_DOUBLECLICK_OPEN"

function SetData:initData()
    local musicPercent = SetData.getMusicPercent()
    local soundPercent = SetData.getSoundPercent()
    local frugalPowerOpen = SetData.getFrugalPowerOpen() 
    if frugalPowerOpen then
        musicPercent = 0
        soundPercent = 0
    end
    AudioEngine.setMusicVolume(musicPercent / 100.0)
    AudioEngine.setEffectsVolume(soundPercent / 100.0) 
end

function SetData.getAniOpen(aniOpen)
    local aniOpen = cc.UserDefault:getInstance():getBoolForKey(KW_DATA_SET_ANI_OPEN,true)
    return aniOpen
end

function SetData.getSoundPercent(aniOpen)
    local soundPercent = cc.UserDefault:getInstance():getIntegerForKey(KW_DATA_SET_SOUND_PERCENT,100)
    return soundPercent
end

function SetData.getDialectOpen(aniOpen)
    local dialectOpen = cc.UserDefault:getInstance():getBoolForKey(KW_DATA_SET_DIALECT_OPEN,true)
    return dialectOpen
end

function SetData.getDoubleClickOpen()
    local doubleClickOpen = cc.UserDefault:getInstance():getBoolForKey(KW_DATA_SET_DOUBLECLICK_OPEN,false)
    return doubleClickOpen
end

function SetData.getMusicPercent(aniOpen)
    local musicPercent = cc.UserDefault:getInstance():getIntegerForKey(KW_DATA_SET_MUSIC_PERCENT,100)
    return musicPercent
end

function SetData.getFrugalPowerOpen(aniOpen)
    local frugalPowerOpen = cc.UserDefault:getInstance():getBoolForKey(KW_DATA_SET_FRUGAL_POWER_OPEN,false)
    return frugalPowerOpen
end

function SetData.getAutoStartOpen(aniOpen)
    local autoStartOpen = cc.UserDefault:getInstance():getBoolForKey(KW_DATA_SET_AUTO_START_OPEN,false)   
    return autoStartOpen
end

function SetData.setAniOpen(aniOpen)
    local aniOpen = aniOpen or true
    cc.UserDefault:getInstance():setBoolForKey(KW_DATA_SET_ANI_OPEN,aniOpen)
    --SetData.super.updateData(self)
end

function SetData.setDialectOpen(dialectOpen)
    local _dialectOpen = true
    if dialectOpen == nil then
        _dialectOpen = true
    else
        _dialectOpen = dialectOpen   
    end
    local dialectOpen = dialectOpen and true
    cc.UserDefault:getInstance():setBoolForKey(KW_DATA_SET_DIALECT_OPEN,_dialectOpen)
end

function SetData.setDoubleClickOpen(doubleClickOpen)
    cc.UserDefault:getInstance():setBoolForKey(KW_DATA_SET_DOUBLECLICK_OPEN,doubleClickOpen)
end

function SetData.setSoundPercent(soundPercent)
    local soundPercent = soundPercent or 100
    AudioEngine.setEffectsVolume(soundPercent / 100.0)
    cc.UserDefault:getInstance():setIntegerForKey(KW_DATA_SET_SOUND_PERCENT,soundPercent)
    --SetData.super.updateData(self)
end

function SetData.setMusicPercent(musicPercent)
    local musicPercent = musicPercent or 100
    AudioEngine.setMusicVolume(musicPercent / 100.0)
    cc.UserDefault:getInstance():setIntegerForKey(KW_DATA_SET_MUSIC_PERCENT,musicPercent)

end

function SetData.setFrugalPowerOpen(frugalPowerOpen)
    local frugalPowerOpen = frugalPowerOpen or false
    cc.UserDefault:getInstance():setBoolForKey(KW_DATA_SET_FRUGAL_POWER_OPEN,frugalPowerOpen)
    if frugalPowerOpen then
        SetData.setMusicPercent(0)
        SetData.setSoundPercent(0)
    else    
        SetData.setMusicPercent(66)
        SetData.setSoundPercent(66)
    end  
end

function SetData.setAutoStartOpen(autoStart) 
    local _autoStart = true
    if autoStart == nil then
        _autoStart = false
    else
        _autoStart = autoStart   
    end
    cc.UserDefault:getInstance():setBoolForKey(KW_DATA_SET_AUTO_START_OPEN,_autoStart)
end

return SetData