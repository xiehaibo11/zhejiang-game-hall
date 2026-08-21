local SoundManager = CF.gameClass("SoundManager")

local ENUM_AUDIO_STATUS_PLAYING = "AUDIO_PLAYING"

--俏皮话列表索引
local speakListIndex = {
    standard = 1, --普通俏皮话
    dialect = 2 --方言俏皮话
}

function SoundManager:ctor()
    self._currentMusic = nil
    self._sfxDic = {}
    self._musicVolume = 1.0
    self._sfxVolume = 1.0
    self._speakCfg = {}
    self._bEffectlimit = false
    self:initSpeak(CF.roomData:getGameID())
end

function SoundManager:getSpeakConfigPath(gameID)
    return "GameSpeak_" .. gameID
end

function SoundManager:initSpeak(gameID)
    self._speakCfg = {}
    if not gameID then
        return
    end
    local boxGameId = CF.gameSub:getGoldToBoxGameId(gameID)
    if boxGameId then
        gameID = boxGameId
    end

    local confFileName = self:getSpeakConfigPath(gameID)
    if CF.FileTool.isFileExist(confFileName) then
        local config = CF.gameRequire(confFileName).GameSpeakConfigByConfID or {}
        for _, v in pairs(config) do
            if not self._speakCfg[v.listIndex] then
                self._speakCfg[v.listIndex] = {}
            end
            self._speakCfg[v.listIndex][v.index] = v
        end
    end
end

function SoundManager:getSpeakConfig()
    local listIndex = CF.settingData:getIsNormalVoice() and speakListIndex.standard or speakListIndex.dialect
    local config = self._speakCfg[listIndex]
    if not config and listIndex == speakListIndex.dialect then
        config = self._speakCfg[speakListIndex.standard]
    end
    return config
end

function SoundManager:getSpeakTextByIndex(index)
    local speakText = ""
    local config = self:getSpeakConfig()
    if config then
        speakText = config[index].SpeakText or ""
    end
    return speakText
end

--设置音效限制
function SoundManager:setPlayEffectLimit(bLimit)
    self._bEffectlimit = bLimit
end

--获取音效限制
function SoundManager:getPlayEffectLimit()
    return self._bEffectlimit
end

--设置音效声音
function SoundManager:setPlayEffectVolme(volume)
    self._sfxVolume = volume
    for _, info in pairs(self._sfxDic) do
        if info.status == ENUM_AUDIO_STATUS_PLAYING then
            CF.audioManager:SetEffectVolume(info.id, volume)
        end
    end
end

--播放音效
function SoundManager:playEffect(path)
    local isExist = cc.FileUtils:getInstance():isFileExist(path)
    if not isExist then
        print("path is not found! path = " .. tostring(path))
        return
    end
    if not self:getPlayEffectLimit() then
        CF.audioManager:playEffect(path)
    end
end

function SoundManager:playSoundReady()
end


function SoundManager:playSoundAddMultipleType(sex, addMutipleType)
    local sexPath = {
    [1] = "Man/",
    [2] = "Women/"
}
    local bMan = false
    if sex == 1 then
        bMan = true
    end
    local path = ""
    if bMan then
        path = "res/GameCommon/GameCommon/Sound/AddMultiple/" .. sexPath[1]
    else
        path = "res/GameCommon/GameCommon/Sound/AddMultiple/" .. sexPath[2]
    end

    if addMutipleType == CF.GameProtocol.msgAddMulti.ADDMULTITYPE.PASS then 
        path = path .. "bujiabei.mp3"
    elseif addMutipleType == CF.GameProtocol.msgAddMulti.ADDMULTITYPE.DEFAULT then 
        path = path .. "jiabei.mp3"
    elseif addMutipleType == CF.GameProtocol.msgAddMulti.ADDMULTITYPE.SUPER then 
        path = path .. "chaojijiabei.mp3"
    end 
    self:playEffect(path)
end

return SoundManager
�