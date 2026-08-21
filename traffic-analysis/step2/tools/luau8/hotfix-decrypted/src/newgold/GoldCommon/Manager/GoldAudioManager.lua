local GoldAudioManager = class("GoldAudioManager")

function GoldAudioManager:SetMusicVolume(volume)
    XH.audioManager:SetMusicVolume(volume)
end

function GoldAudioManager:GetMusicVolume()
    return XH.audioManager:GetMusicVolume()
end

function GoldAudioManager:SetEffectVolume(volume)
    XH.audioManager:SetSFXVolume(volume)
end

function GoldAudioManager:GetSFXVolume()
    return XH.audioManager:GetSFXVolume()
end

function GoldAudioManager:play(name)
    XH.audioManager:play(name)
end

function GoldAudioManager:playMusic(name, loop, finishCallback)
    if not name then
        return
    end
    local audioID = ccexp.AudioEngine:play2d(name, loop, self:GetMusicVolume())
    if not loop then
        ccexp.AudioEngine:setFinishCallback(
            audioID,
            function()
                if finishCallback then
                    finishCallback()
                end
            end
        )
    end
    return audioID
end

function GoldAudioManager:pauseMusic()
    XH.audioManager:pauseMusic()
end

function GoldAudioManager:resumeMusic()
    XH.audioManager:resumeMusic()
end

function GoldAudioManager:stopMusic()
    XH.audioManager:stopMusic()
end

function GoldAudioManager:playEffect(file)
    local audioID = ccexp.AudioEngine:play2d(file, false, self:GetSFXVolume())
    return audioID
end

function GoldAudioManager.pauseEffect(effectId)
    ccexp.AudioEngine:pause(effectId)
end

function GoldAudioManager:addConfig(conf)
    XH.audioManager:addConfig(conf)
end

return GoldAudioManager
7