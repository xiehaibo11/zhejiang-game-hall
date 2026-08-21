local SettingData = CF.gameClass("SettingData", "game.GameBase.Data.SettingData")

local userDefault = cc.UserDefault:getInstance()

local GameSaveKeyTab = {
    GameBackStyle           = 'DATONG_SET_BACK_STYLE', --牌背样式
    GameFaceStyle           = 'DATONG_SET_FACE_STYLE', --牌面样式
    GameTableStyle          = 'DATONG_SET_TABLE_STYLE', --桌布样式
    GameIsNormalVoice       = 'DATONG_SET_IS_NORMAL_VOICE', --是否是方言
    GameIs2D                = 'GAME_SET_IS_2D', --是否是2D
}

SettingData.tagInfo = {
    ["TABLE_STYLE"] = {posY = 10, fontSize = 32, propID = XH.XGSJ_PROP_ID.TABLE, index = 3, nameKey = "IMG_TABLE_BG", nodeKey = "_tableStyle_"},
    ["BACK_TYPE"] = {posY = -10, fontSize = 24, propID = XH.XGSJ_PROP_ID.POKER, index = 2, nameKey = "IMG_CARD_BACK", nodeKey = "_cardBack_"}
}

SettingData.throwDataBgName = {
    [1] = "3维",
    [2] = "2维_深绿",
    [3] = "霞光胜境",
    [4] = "background_3",
    [5] = "background_2",
    [6] = "background_1",
}

SettingData.EVENT_GAME_BACK_STYLE_CHANGED       = 'EVENT_GAME_BACK_STYLE_CHANGED'
SettingData.EVENT_GAME_FACE_STYLE_CHANGED       = 'EVENT_GAME_FACE_STYLE_CHANGED'
SettingData.EVENT_GAME_TABLE_STYLE_CHANGED      = 'EVENT_GAME_TABLE_STYLE_CHANGED'
SettingData.EVENT_GAME_IS_NORMAL_VOICE_CHANGED  = 'EVENT_GAME_IS_NORMAL_VOICE_CHANGED'
SettingData.EVENT_GAME_IS_2D_CHANGED            = 'EVENT_GAME_IS_2D_CHANGED'

--设置方言
function SettingData:setIsNormalVoice(isNormal)
    if isNormal ~= nil then
        self._settings[GameSaveKeyTab.GameIsNormalVoice] = isNormal
        local saveKey = self:getFullSaveKey(GameSaveKeyTab.GameIsNormalVoice)
        userDefault:setBoolForKey(saveKey, isNormal)
        self:dispatch(self.EVENT_GAME_IS_NORMAL_VOICE_CHANGED, isNormal)
    end
end

--获得是否是普通话
function SettingData:getIsNormalVoice()
    local style = self._settings[GameSaveKeyTab.GameIsNormalVoice]

    if style == nil then
        local saveKey = self:getFullSaveKey(GameSaveKeyTab.GameIsNormalVoice)
        style = userDefault:getBoolForKey(saveKey, true)
    end
    return style
end

--设置背面样式
function SettingData:setBackStyle(style)
    if style then
        self._settings[GameSaveKeyTab.GameBackStyle] = style
        local saveKey = self:getFullSaveKey(GameSaveKeyTab.GameBackStyle)
        userDefault:setIntegerForKey(saveKey, style)
        self:dispatch(self.EVENT_GAME_BACK_STYLE_CHANGED, style)
    end
end

--获得背面样式
function SettingData:getBackStyle()
    local style = self._settings[GameSaveKeyTab.GameBackStyle]

    if style == nil then
        local saveKey = self:getFullSaveKey(GameSaveKeyTab.GameBackStyle)
        style = userDefault:getIntegerForKey(saveKey, 1)
    end
    return style
end

--设置正面样式
function SettingData:setFaceStyle(style)
    if style then
        self._settings[GameSaveKeyTab.GameFaceStyle] = style
        local saveKey = self:getFullSaveKey(GameSaveKeyTab.GameFaceStyle)
        userDefault:setIntegerForKey(saveKey, style)
        self:dispatch(self.EVENT_GAME_FACE_STYLE_CHANGED, style)
    end
end

--获得正面样式
function SettingData:getFaceStyle()
    local style = self._settings[GameSaveKeyTab.GameFaceStyle]

    if style == nil then
        local saveKey = self:getFullSaveKey(GameSaveKeyTab.GameFaceStyle)
        style = userDefault:getIntegerForKey(saveKey, 1)
    end
    return style
end

--设置桌布样式
function SettingData:setTableStyle(style)
    if style then
        self._settings[GameSaveKeyTab.GameTableStyle] = style
        local saveKey = self:getFullSaveKey(GameSaveKeyTab.GameTableStyle)
        userDefault:setIntegerForKey(saveKey, style)
        self:dispatch(self.EVENT_GAME_TABLE_STYLE_CHANGED, style)
        self:setGameIs2D(style == 2)
        self:throwTableStyleData(style)
    end
end

--获得桌布样式
function SettingData:getTableStyle()
    local style = self._settings[GameSaveKeyTab.GameTableStyle]

    if style == nil then
        local saveKey = self:getFullSaveKey(GameSaveKeyTab.GameTableStyle)
        style = userDefault:getIntegerForKey(saveKey, 1)
    end
    return style
end

--设置2D
function SettingData:setGameIs2D(is2D)
    if is2D ~= nil then
        self._settings[GameSaveKeyTab.GameIs2D] = is2D
        local saveKey = self:getFullSaveKey(GameSaveKeyTab.GameIs2D)
        userDefault:setBoolForKey(saveKey, is2D)
        self:dispatch(self.EVENT_GAME_IS_2D_CHANGED, is2D)
    end
end

--获得是否是2D
function SettingData:getDaTongIs2D()
    local style = self._settings[GameSaveKeyTab.GameIs2D]

    if style == nil then
        local saveKey = self:getFullSaveKey(GameSaveKeyTab.GameIs2D)
        style = userDefault:getBoolForKey(saveKey, false)
    end
    return style
end

--设置音乐大小
function SettingData:setMusicPercent(musicPercent)
    SettingData.super.setMusicPercent(self,musicPercent)
end

--设置音效大小[0-100]
function SettingData:setSoundPercent(soundPercent)
    SettingData.super.setSoundPercent(self,soundPercent)
end

function SettingData:judgeSkinBundle()
    if XH.lobby:getModule("SkinBundle") then
        local haveChange = false
        for tagKey, value in pairs(SettingData.tagInfo) do
            local index = value.index
            local propID = value.propID
            local isUse = XH.lobby:getModule("SkinBundle"):isPropInUse(propID)
            if isUse then
                if tagKey == "TABLE_STYLE" then
                    if self:getTableStyle() ~= index then
                        self:setTableStyle(index)
                        haveChange = true
                    end
                elseif tagKey == "BACK_TYPE" then
                    if self:getBackStyle() ~= index then
                        self:setBackStyle(index)
                        haveChange = true
                    end
                end
            end
        end
        if haveChange then
            self:dispatch(self.EVENT_SETTING_INIT)
        end
    end
    if CF.roomData:getIsGameStart() then
        return
    end
    if XH.lobby:getModule("SkinBundle") then
        local haveChange = false
        local isUse = XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.TABLE)
        if not isUse then
            if self:getTableStyle() == SettingData.tagInfo.TABLE_STYLE.index then
                local saveKey = self:getFullSaveKey(GameSaveKeyTab.GameTableStyle)
                local normalData = 1
                self:setTableStyle(normalData)
                haveChange = true
            end
        end
        local isUse = XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.POKER)
        if not isUse then
            if self:getBackStyle() == SettingData.tagInfo.BACK_TYPE.index then
                local saveKey = self:getFullSaveKey(GameSaveKeyTab.GameBackStyle)
                local normalData = 1
                self:setBackStyle(normalData)
                haveChange = true
            end
        end
        if haveChange then
            self:dispatch(self.EVENT_SETTING_INIT)
        end
    end
end

return SettingData