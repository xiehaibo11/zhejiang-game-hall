local SettingData = CF.gameClass("SettingData", CF.ModuleBase)

local SaveKeyTab = {
    MUSIC = 'MUSIC_PERCENT', -- 背景音乐声音大小
    SOUND = 'SOUND_PERCENT', -- 音效大小
    MahIsNormalVoice = 'MAH_IS_NORMAL_VOICE', --是否是方言
    ClearModel = "CLEAR_MODEL",--是否纯净模式
    VOICE_TYPE = "VOICE_TYPE",--是否为男提示音
}

local configTab = {
    MUSIC = 3,
    SOUND = 1,
    MahIsNormalVoice = 2,
    ClearModel = 10,
}

--数据改变消息
SettingData.EVENT_MAH_IS_NORMAL_VOICE_CHANGED = 'EVENT_MAH_IS_NORMAL_VOICE_CHANGED'
SettingData.EVENT_MAH_MUSIC_VOLUEM_CHANGED = 'EVENT_MAH_MUSIC_VOLUEM_CHANGED'
SettingData.EVENT_MAH_SOUND_VOLUEM_CHANGED = 'EVENT_MAH_SOUND_VOLUEM_CHANGED'
SettingData.EVENT_CLEAR_MODEL = 'EVENT_CLEAR_MODEL'
SettingData.EVENT_SETTING_INIT = 'EVENT_SETTING_INIT'

function SettingData:ctor()
    SettingData.super.ctor(self)
    self._settings = {}
    self._curDefault = {}
    self:initData()
end

function SettingData:getProxyEvents()
    return {
        {module = CF.roomData, eventKeyName = "EVENT_GAMESTART_CHANGED", callBack = "onGameStartChanged"},
        {module = XH.lobby:getModule("SkinBundle"), eventKeyName = "EVENT_SKIN_BUNDLE_SHOW", callBack = "onSkinBundle"},
    }
end

function SettingData:initData()
    local defaultConf = CF.gameRequire("Modules.Setting.AreaExternConfiger")
    self._curDefault = defaultConf:getSettingDataAreaid(CF.areaData:getAreaID())
    local musicVal = self:getMusicPercent()
    CF.audioManager:SetMusicVolume(musicVal / 100)
    local soundVal = self:getSoundPercent()
    CF.audioManager:SetEffectVolume(soundVal / 100)
end

--获得根据区域ID和numid拼合的存储用的key
--saveKey   SaveKeyTab中定义的值
--customKey 额外附加一个key，比如时间等
function SettingData:getFullSaveKey(saveKey, customKey)
    local numId = CF.selfPlayerData:getNumberID()
    local areaId = CF.selfPlayerData:getBrandID()
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
        musicPercent = cc.UserDefault:getInstance():getIntegerForKey(saveKey, self._curDefault[configTab.MUSIC])
    end

    return musicPercent
end

--获得音效大小[0-100]
function SettingData:getSoundPercent()
    local soundPercent = self._settings[SaveKeyTab.SOUND]

    if soundPercent == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.SOUND)
        soundPercent = cc.UserDefault:getInstance():getIntegerForKey(saveKey, self._curDefault[configTab.SOUND])
    end

    return soundPercent
end

--设置音效大小[0-100]
function SettingData:setSoundPercent(soundPercent)
    if soundPercent and soundPercent >= 0 then
        self._settings[SaveKeyTab.SOUND] = soundPercent
        local saveKey = self:getFullSaveKey(SaveKeyTab.SOUND)
        cc.UserDefault:getInstance():setIntegerForKey(saveKey, soundPercent)
        CF.audioManager:SetEffectVolume(soundPercent / 100)
        self:dispatch(self.EVENT_MAH_SOUND_VOLUEM_CHANGED, soundPercent)
    end
end

--设置音乐大小
function SettingData:setMusicPercent(musicPercent)
    if musicPercent and musicPercent >= 0 then
        self._settings[SaveKeyTab.MUSIC] = musicPercent
        local saveKey = self:getFullSaveKey(SaveKeyTab.MUSIC)
        cc.UserDefault:getInstance():setIntegerForKey(saveKey, musicPercent)
        CF.audioManager:SetMusicVolume(musicPercent / 100)
        self:dispatch(self.EVENT_MAH_MUSIC_VOLUEM_CHANGED, musicPercent)
    end
end

--设置麻将动画
function SettingData:setIsClearModel(isClear)
    if isClear ~= nil then
        self._settings[SaveKeyTab.ClearModel] = isClear
        local saveKey = self:getFullSaveKey(SaveKeyTab.ClearModel)
        cc.UserDefault:getInstance():setBoolForKey(saveKey, isClear)
        self:dispatch(self.EVENT_CLEAR_MODEL, isClear)
    end
end

--设置方言
function SettingData:setIsNormalVoice(isNormal)
    if isNormal ~= nil then
        self._settings[SaveKeyTab.MahIsNormalVoice] = isNormal
        local saveKey = self:getFullSaveKey(SaveKeyTab.MahIsNormalVoice)
        cc.UserDefault:getInstance():setBoolForKey(saveKey, isNormal)
        self:dispatch(self.EVENT_MAH_IS_NORMAL_VOICE_CHANGED, isNormal)
    end
end

--获得是否是普通话
function SettingData:getIsNormalVoice()
    local style = self._settings[SaveKeyTab.MahIsNormalVoice]

    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.MahIsNormalVoice)
        style = cc.UserDefault:getInstance():getBoolForKey(saveKey, self._curDefault[configTab.MahIsNormalVoice] == 0 and true or false)
    end
    return style
end

--设置提示声音(男,女)
function SettingData:setVoiceType(bMan)
    if bMan ~= nil then
        self._settings[SaveKeyTab.VOICE_TYPE] = bMan
        local saveKey = self:getFullSaveKey(SaveKeyTab.VOICE_TYPE)
        local player = CF.roomData:getPlayerDataBySeatId(CF.roomData:getSelfSeat())
        cc.UserDefault:getInstance():setBoolForKey(saveKey, bMan)
        if bMan == true then
            player:setSex(1)
            CF.selfPlayerData:reqChangePlayerSex(bMan)
        else
            player:setSex(0)
            CF.selfPlayerData:reqChangePlayerSex(bMan)
        end
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

--获得是否纯净模式
function SettingData:getIsClearModel()
    local style = self._settings[SaveKeyTab.ClearModel]
    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.ClearModel)
        style = cc.UserDefault:getInstance():getBoolForKey(saveKey, self._curDefault[configTab.ClearModel] == 1 and true or false)
    end
    return style
end

function SettingData:dispatch(name, data)
    self:dispatchEvent({ name = name, data = data })
end

function SettingData:setXGClock()
    self._isXGClock = XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.CLOCK)
end

function SettingData:getXGClock()
    return self._isXGClock == nil and false or self._isXGClock
end

function SettingData:onSkinBundle(event)
    if self.judgeSkinBundle then
        self:judgeSkinBundle()
    end
end

function SettingData:onGameStartChanged(event)
    if not event or not event.msg then
        return
    end
    self:setXGClock()
    if event.msg.oldState ~= event.msg.nowState then
        if not event.msg.nowState then
            if self.judgeSkinBundle then
                self:judgeSkinBundle()
            end
        end
    end
end

-- 是否是会员牌桌，目前大于霞光牌桌的是会员牌桌
function SettingData:isVipTable(index)
    if not index then return false end
    return index > CF.settingData.tagInfo.TABLE_STYLE.index
end

function SettingData:getVipTableBgByStyle(style)
    local XGIndex = CF.settingData.tagInfo.TABLE_STYLE.index
    if not style or style <= XGIndex then
        return ""
    end
    local styleIndexDelta = style - XGIndex
    local styleToPath = {
        [1] = "res/tex/image/background_3.jpg",
        [2] = "res/tex/image/background_2.jpg",
        [3] = "res/tex/image/background_1.jpg",
    }
    return styleToPath[styleIndexDelta] or ""
end

-- 检测会员牌桌，不是会员return true
function SettingData:checkVIPTable(style)
    if not style then
        return true
    end
    if CF.getLobbyModule("Sxvip"):isExpire() and CF.settingData:isVipTable(style) then
        CF.gameRequire("Modules.Setting.TablePreView").new({style = style}):showSelf()
        return true
    end
    return false
end

function SettingData:getBgNameByStyle(style)
    if not style or style > #CF.settingData.throwDataBgName then
        style = 1
    end
    return CF.settingData.throwDataBgName[style]
end

function SettingData:throwTableStyleData(style)
    local data = {
        block_item_id = CF.settingData:getBgNameByStyle(style),
        game_id = CF.areaData:getAreaID() .. "_" .. CF.roomData:getGameID()
    }
    CF.NewThrowDataManager:throwData(CF.NewThrowDataDefine.zyt2025071801, data)
end

return SettingDataV"