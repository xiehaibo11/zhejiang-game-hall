local SettingData = CF.gameClass("SettingData", "game.GameBase.Data.SettingData")

local userDefault = cc.UserDefault:getInstance()

local HongShiSaveKeyTab = {
    HongShiBackStyle = 'HONGSHI_SET_BACK_STYLE', --牌背样式
    HongShiFaceStyle = 'HONGSHI_SET_FACE_STYLE', --牌面样式
    HongShiTableStyle = 'HONGSHI_SET_TABLE_STYLE', --桌布样式
    HongShiIsNormalVoice = 'HONGSHI_SET_IS_NORMAL_VOICE', --是否是方言
    HongShiIs2D = 'HONGSHI_SET_IS_2D', --是否是2D
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

SettingData.EVENT_HONGSHI_BACK_STYLE_CHANGED = 'EVENT_HONGSHI_BACK_STYLE_CHANGED'
SettingData.EVENT_HONGSHI_FACE_STYLE_CHANGED = 'EVENT_HONGSHI_FACE_STYLE_CHANGED'
SettingData.EVENT_HONGSHI_TABLE_STYLE_CHANGED = 'EVENT_HONGSHI_TABLE_STYLE_CHANGED'
SettingData.EVENT_HONGSHI_IS_NORMAL_VOICE_CHANGED = 'EVENT_HONGSHI_IS_NORMAL_VOICE_CHANGED'
SettingData.EVENT_HONGSHI_IS_2D_CHANGED = 'EVENT_HONGSHI_IS_2D_CHANGED'

--设置方言
function SettingData:setIsNormalVoice(isNormal)
    if isNormal ~= nil then
        self._settings[HongShiSaveKeyTab.HongShiIsNormalVoice] = isNormal
        local saveKey = self:getFullSaveKey(HongShiSaveKeyTab.HongShiIsNormalVoice)
        userDefault:setBoolForKey(saveKey, isNormal)
        self:dispatch(self.EVENT_HONGSHI_IS_NORMAL_VOICE_CHANGED, isNormal)
    end
end

--获得是否是普通话
function SettingData:getIsNormalVoice()
    local style = self._settings[HongShiSaveKeyTab.HongShiIsNormalVoice]

    if style == nil then
        local saveKey = self:getFullSaveKey(HongShiSaveKeyTab.HongShiIsNormalVoice)
        style = userDefault:getBoolForKey(saveKey, true)
    end
    return style
end

--设置背面样式
function SettingData:setBackStyle(style)
    if style then
        self._settings[HongShiSaveKeyTab.HongShiBackStyle] = style
        local saveKey = self:getFullSaveKey(HongShiSaveKeyTab.HongShiBackStyle)
        userDefault:setIntegerForKey(saveKey, style)
        self:dispatch(self.EVENT_HONGSHI_BACK_STYLE_CHANGED, style)
    end
end

--获得背面样式
function SettingData:getBackStyle()
    local style = self._settings[HongShiSaveKeyTab.HongShiBackStyle]

    if style == nil then
        local saveKey = self:getFullSaveKey(HongShiSaveKeyTab.HongShiBackStyle)
        style = userDefault:getIntegerForKey(saveKey, 1)
    end
    return style
end

--设置正面样式
function SettingData:setFaceStyle(style)
    if style then
        self._settings[HongShiSaveKeyTab.HongShiFaceStyle] = style
        local saveKey = self:getFullSaveKey(HongShiSaveKeyTab.HongShiFaceStyle)
        userDefault:setIntegerForKey(saveKey, style)
        self:dispatch(self.EVENT_HONGSHI_FACE_STYLE_CHANGED, style)
    end
end

--获得正面样式
function SettingData:getFaceStyle()
    local style = self._settings[HongShiSaveKeyTab.HongShiFaceStyle]

    if style == nil then
        local saveKey = self:getFullSaveKey(HongShiSaveKeyTab.HongShiFaceStyle)
        style = userDefault:getIntegerForKey(saveKey, 1)
    end
    return style
end

--设置桌布样式
function SettingData:setTableStyle(style)
    if style then
        self._settings[HongShiSaveKeyTab.HongShiTableStyle] = style
        local saveKey = self:getFullSaveKey(HongShiSaveKeyTab.HongShiTableStyle)
        userDefault:setIntegerForKey(saveKey, style)
        self:dispatch(self.EVENT_HONGSHI_TABLE_STYLE_CHANGED, style)

        --考虑后期2D和2.5D功能，先做处理
        self:setIs2D(style == 2)
        self:throwTableStyleData(style)
    end
end

--获得桌布样式
function SettingData:getTableStyle()
    local style = self._settings[HongShiSaveKeyTab.HongShiTableStyle]

    if style == nil then
        local saveKey = self:getFullSaveKey(HongShiSaveKeyTab.HongShiTableStyle)
        style = userDefault:getIntegerForKey(saveKey, 1)
    end
    return style
end

--设置2D
function SettingData:setIs2D(is2D)
    if is2D ~= nil then
        self._settings[HongShiSaveKeyTab.HongShiIs2D] = is2D
        local saveKey = self:getFullSaveKey(HongShiSaveKeyTab.HongShiIs2D)
        userDefault:setBoolForKey(saveKey, is2D)
        self:dispatch(self.EVENT_HONGSHI_IS_2D_CHANGED, is2D)
    end
end

--获得是否是2D
function SettingData:getIs2D()
    local style = self._settings[HongShiSaveKeyTab.HongShiIs2D]

    if style == nil then
        local saveKey = self:getFullSaveKey(HongShiSaveKeyTab.HongShiIs2D)
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
    local haveChange = false
    if XH.lobby:getModule("SkinBundle") then
        local isUse = XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.TABLE)
        if not isUse then
            if self:getTableStyle() == SettingData.tagInfo.TABLE_STYLE.index then
                local saveKey = self:getFullSaveKey(HongShiSaveKeyTab.HongShiTableStyle)
                local normalData = 1
                self:setTableStyle(normalData)
                haveChange = true
            end
        end
        local isUse = XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.POKER)
        if not isUse then
            if self:getBackStyle() == SettingData.tagInfo.BACK_TYPE.index then
                local saveKey = self:getFullSaveKey(HongShiSaveKeyTab.HongShiBackStyle)
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