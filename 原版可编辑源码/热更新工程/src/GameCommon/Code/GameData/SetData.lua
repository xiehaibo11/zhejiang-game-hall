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

--牌面样式
local KW_DATA_SET_CARD_STYLE_TYPE          = "KW_DATA_SET_CARD_STYLE_TYPE"
--桌布样式
local KW_DATA_SET_CARD_BACK_STYLE_TYPE         = "KW_DATA_SET_CARD_BACK_STYLE_TYPE"
--方言种类
local KW_DATA_SET_DIALECT_TYPE            = "KW_DATA_SET_DIALECT_TYPE"

--牌面样式  （关牌双扣的牌层）
local KW_DATA_SET_CARD_FACE_TYPE          = "KW_DATA_SET_CARD_FACE_TYPE"
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

function SetData.getCardStyleType()
    local cardStyleType = cc.UserDefault:getInstance():getIntegerForKey(KW_DATA_SET_CARD_STYLE_TYPE,1)
    return cardStyleType
end

function SetData.getCardFaceType()
    local cardFaceType = cc.UserDefault:getInstance():getIntegerForKey(KW_DATA_SET_CARD_FACE_TYPE,1)
    return cardFaceType
end

function SetData.getBackStyleType()
    local backStyleType = cc.UserDefault:getInstance():getIntegerForKey(KW_DATA_SET_CARD_BACK_STYLE_TYPE,1)
    return backStyleType
end 
function SetData.setAniOpen(aniOpen)
    local aniOpen = aniOpen or true
    cc.UserDefault:getInstance():setBoolForKey(KW_DATA_SET_ANI_OPEN,aniOpen)
    --SetData.super.updateData(self)
end

function SetData.setDialectOpen(dialectOpen)
    local dialectOpen = dialectOpen or true
    cc.UserDefault:getInstance():setBoolForKey(KW_DATA_SET_DIALECT_OPEN,dialectOpen)
    --SetData.super.updateData(self)
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
    local autoStart = autoStart or false
    cc.UserDefault:getInstance():setBoolForKey(KW_DATA_SET_AUTO_START_OPEN,autoStart)
end

function SetData.setCardStyleType(styleType)
    cc.UserDefault:getInstance():setIntegerForKey(KW_DATA_SET_CARD_STYLE_TYPE,styleType)
end 

function SetData.setCardFaceType(faceType)
    cc.UserDefault:getInstance():setIntegerForKey(KW_DATA_SET_CARD_FACE_TYPE,faceType)
end 

function SetData.setBackStyleType(styleType)
    cc.UserDefault:getInstance():setIntegerForKey(KW_DATA_SET_CARD_BACK_STYLE_TYPE,styleType)
end 
function SetData.getDialectType()
    local _dialectType = cc.UserDefault:getInstance():getIntegerForKey(KW_DATA_SET_DIALECT_TYPE,0)
    return _dialectType
end

function SetData.setDialectType(dialectType)
    local _dialectType = dialectType or 0
    cc.UserDefault:getInstance():setIntegerForKey(KW_DATA_SET_DIALECT_TYPE,_dialectType)
end

return SetData