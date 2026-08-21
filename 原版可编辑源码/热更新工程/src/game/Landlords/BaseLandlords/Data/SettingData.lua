local SettingData = CF.gameClass("SettingData", "game.GameBase.Data.SettingData")

local userDefault = cc.UserDefault:getInstance()

local LandlordsSaveKeyTab = {
    LandlordsBackStyle = 'LANDLORDS_SET_BACK_STYLE', --牌背样式
    LandlordsFaceStyle = 'LANDLORDS_SET_FACE_STYLE', --牌面样式
    LandlordsTableStyle = 'LANDLORDS_SET_TABLE_STYLE', --桌布样式
    LandlordsIsNormalVoice = 'LANDLORDS_SET_IS_NORMAL_VOICE', --是否是方言
    LandlordsIs2D = 'LANDLORDS_SET_IS_2D', --是否是2D
}

SettingData.tagInfo = {
    ["TABLE_STYLE"] = {posY = 10, fontSize = 32, propID = XH.XGSJ_PROP_ID.TABLE, index = 2, nameKey = "IMG_TABLE_BG", nodeKey = "_tableStyle_"},
    ["BACK_TYPE"] = {posY = -10, fontSize = 24, propID = XH.XGSJ_PROP_ID.POKER, index = 2, nameKey = "IMG_CARD_BACK", nodeKey = "_cardBack_"}
}

SettingData.throwDataBgName = {
    [1] = "3维",
    [2] = "霞光胜境",
    [3] = "background_3",
    [4] = "background_2",
    [5] = "background_1",
}

SettingData.EVENT_LANDLORDS_BACK_STYLE_CHANGED      = 'EVENT_LANDLORDS_BACK_STYLE_CHANGED'
SettingData.EVENT_LANDLORDS_FACE_STYLE_CHANGED      = 'EVENT_LANDLORDS_FACE_STYLE_CHANGED'
SettingData.EVENT_LANDLORDS_TABLE_STYLE_CHANGED     = 'EVENT_LANDLORDS_TABLE_STYLE_CHANGED'
SettingData.EVENT_LANDLORDS_IS_2D_CHANGED           = 'EVENT_LANDLORDS_IS_2D_CHANGED'
SettingData.EVENT_LANDLORDS_IS_NORMAL_VOICE_CHANGED = 'EVENT_LANDLORDS_IS_NORMAL_VOICE_CHANGED'

--设置方言
function SettingData:setLandlordsIsNormalVoice(isNormal)
    if isNormal ~= nil then
        self._settings[LandlordsSaveKeyTab.LandlordsIsNormalVoice] = isNormal
        local saveKey = self:getFullSaveKey(LandlordsSaveKeyTab.LandlordsIsNormalVoice)
        userDefault:setBoolForKey(saveKey, isNormal)
        self:dispatch(self.EVENT_LANDLORDS_IS_NORMAL_VOICE_CHANGED, isNormal)
    end
end

--获得是否是普通话
function SettingData:getLandlordsIsNormalVoice()
    local style = self._settings[LandlordsSaveKeyTab.LandlordsIsNormalVoice]

    if style == nil then
        local saveKey = self:getFullSaveKey(LandlordsSaveKeyTab.LandlordsIsNormalVoice)
        style = userDefault:getBoolForKey(saveKey, true)
    end
    return style
end

--设置背面样式
function SettingData:setLandlordsBackStyle(style)
    if style then
        self._settings[LandlordsSaveKeyTab.LandlordsBackStyle] = style
        local saveKey = self:getFullSaveKey(LandlordsSaveKeyTab.LandlordsBackStyle)
        userDefault:setIntegerForKey(saveKey, style)
        self:dispatch(self.EVENT_LANDLORDS_BACK_STYLE_CHANGED, style)
    end
end

--获得背面样式
function SettingData:getLandlordsBackStyle()
    local style = self._settings[LandlordsSaveKeyTab.LandlordsBackStyle]

    if style == nil then
        local saveKey = self:getFullSaveKey(LandlordsSaveKeyTab.LandlordsBackStyle)
        style = userDefault:getIntegerForKey(saveKey, 1)
    end
    return style
end

--设置正面样式
function SettingData:setLandlordsFaceStyle(style)
    if style then
        self._settings[LandlordsSaveKeyTab.LandlordsFaceStyle] = style
        local saveKey = self:getFullSaveKey(LandlordsSaveKeyTab.LandlordsFaceStyle)
        userDefault:setIntegerForKey(saveKey, style)
        self:dispatch(self.EVENT_LANDLORDS_FACE_STYLE_CHANGED, style)
    end
end

--获得正面样式
function SettingData:getLandlordsFaceStyle()
    local style = self._settings[LandlordsSaveKeyTab.LandlordsFaceStyle]

    if style == nil then
        local saveKey = self:getFullSaveKey(LandlordsSaveKeyTab.LandlordsFaceStyle)
        style = userDefault:getIntegerForKey(saveKey, 1)
    end
    return style
end

--设置桌布样式
function SettingData:setLandlordsTableStyle(style)
    if style then
        self._settings[LandlordsSaveKeyTab.LandlordsTableStyle] = style
        local saveKey = self:getFullSaveKey(LandlordsSaveKeyTab.LandlordsTableStyle)
        userDefault:setIntegerForKey(saveKey, style)
        self:dispatch(self.EVENT_LANDLORDS_TABLE_STYLE_CHANGED, style)
        self:throwTableStyleData(style)
    end
end

--获得桌布样式
function SettingData:getLandlordsTableStyle()
    local style = self._settings[LandlordsSaveKeyTab.LandlordsTableStyle]

    if style == nil then
        local saveKey = self:getFullSaveKey(LandlordsSaveKeyTab.LandlordsTableStyle)
        style = userDefault:getIntegerForKey(saveKey, 1)
    end
    return style
end

--设置2D
function SettingData:setLandlordsIs2D(is2D)
    if is2D ~= nil then
        self._settings[LandlordsSaveKeyTab.LandlordsIs2D] = is2D
        local saveKey = self:getFullSaveKey(LandlordsSaveKeyTab.LandlordsIs2D)
        userDefault:setBoolForKey(saveKey, is2D)
        self:dispatch(self.EVENT_LANDLORDS_IS_2D_CHANGED, is2D)
    end
end

--获得是否是2D
function SettingData:getLandlordsIs2D()
    local style = self._settings[LandlordsSaveKeyTab.LandlordsIs2D]

    if style == nil then
        local saveKey = self:getFullSaveKey(LandlordsSaveKeyTab.LandlordsIs2D)
        style = userDefault:getBoolForKey(saveKey, false)
    end
    return style
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
                    if self:getLandlordsTableStyle() ~= index then
                        self:setLandlordsTableStyle(index)
                        haveChange = true
                    end
                elseif tagKey == "BACK_TYPE" then
                    if self:getLandlordsBackStyle() ~= index then
                        self:setLandlordsBackStyle(index)
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
            if self:getLandlordsTableStyle() == SettingData.tagInfo.TABLE_STYLE.index then
                local saveKey = self:getFullSaveKey(LandlordsSaveKeyTab.LandlordsTableStyle)
                local normalData = 1
                self:setLandlordsTableStyle(normalData)
                haveChange = true
            end
        end
        local isUse = XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.POKER)
        if not isUse then
            if self:getLandlordsBackStyle() == SettingData.tagInfo.BACK_TYPE.index then
                local saveKey = self:getFullSaveKey(LandlordsSaveKeyTab.LandlordsBackStyle)
                local normalData = 1
                self:setLandlordsBackStyle(normalData)
                haveChange = true
            end
        end
        if haveChange then
            self:dispatch(self.EVENT_SETTING_INIT)
        end
    end
end

return SettingData