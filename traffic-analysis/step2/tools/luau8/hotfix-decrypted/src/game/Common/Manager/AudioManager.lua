local AudioManager = class("AudioManager")

function AudioManager:SetMusicVolume(volume)
    XH.audioManager:SetMusicVolume(volume)
end

function AudioManager:GetMusicVolume()
    return XH.audioManager:GetMusicVolume()
end

function AudioManager:SetEffectVolume(volume)
    XH.audioManager:SetSFXVolume(volume)
end

function AudioManager:GetSFXVolume()
    return XH.audioManager:GetSFXVolume()
end

function AudioManager:play(name,cb)
    XH.audioManager:play(name,cb)
end

function AudioManager:playMusic(name, loop, finishCallback)
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

function AudioManager:pauseMusic()
    XH.audioManager:pauseMusic()
end

function AudioManager:resumeMusic()
    XH.audioManager:resumeMusic()
end

function AudioManager:stopMusic()
    XH.audioManager:stopMusic()
end

function AudioManager:playEffect(file)
    if CF and CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end

    local audioID = ccexp.AudioEngine:play2d(file, false, self:GetSFXVolume())
    return audioID
end

function AudioManager.pauseEffect(effectId)
    ccexp.AudioEngine:pause(effectId)
end

function AudioManager:addConfig(conf)
    XH.audioManager:addConfig(conf)
end

return AudioManager
\