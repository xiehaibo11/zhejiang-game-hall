local SettingData = CF.gameClass("SettingData", "game.GameBase.Data.SettingData")

local userDefault = cc.UserDefault:getInstance()

local DoubleKouSaveKeyTab = {
    DoubleKouBackStyle = 'DOUBLE_SET_BACK_STYLE', --牌背样式
    DoubleKouFaceStyle = 'DOUBLE_SET_FACE_STYLE_EX', --牌面样式
    DoubleKouTableStyle = 'DOUBLE_SET_TABLE_STYLE', --桌布样式
    DoubleKouIsNormalVoice = 'DOUBLE_SET_IS_NORMAL_VOICE', --是否是方言
    DoubleKouIs2D = 'DOUBLE_SET_IS_2D', --是否是2D
}

SettingData.tagInfo = {
    ["TABLE_STYLE"] = { posY = 10, fontSize = 32, propID = XH.XGSJ_PROP_ID.TABLE, index = 4, nameKey = "IMG_TABLE_BG", nodeKey = "_tableStyle_" },
    ["BACK_TYPE"] = { posY = -10, fontSize = 24, propID = XH.XGSJ_PROP_ID.POKER, index = 2, nameKey = "IMG_CARD_BACK", nodeKey = "_cardBack_" }
}

SettingData.throwDataBgName = {
    [1] = "3维",
    [2] = "2维_深绿",
    [3] = "2维_浅绿",
    [4] = "霞光胜境",
    [5] = "background_3",
    [6] = "background_2",
    [7] = "background_1",
}

SettingData.EVENT_DOUBLEKOU_BACK_STYLE_CHANGED = 'EVENT_DOUBLEKOU_BACK_STYLE_CHANGED'
SettingData.EVENT_DOUBLEKOU_FACE_STYLE_CHANGED = 'EVENT_DOUBLEKOU_FACE_STYLE_CHANGED'
SettingData.EVENT_DOUBLEKOU_TABLE_STYLE_CHANGED = 'EVENT_DOUBLEKOU_TABLE_STYLE_CHANGED'
SettingData.EVENT_DOUBLEKOU_IS_NORMAL_VOICE_CHANGED = 'EVENT_DOUBLEKOU_IS_NORMAL_VOICE_CHANGED'
SettingData.EVENT_DOUBLEKOU_IS_2D_CHANGED = 'EVENT_DOUBLEKOU_IS_2D_CHANGED'

--设置方言
function SettingData:setDoubleKouIsNormalVoice(isNormal)
    if isNormal ~= nil then
        self._settings[DoubleKouSaveKeyTab.DoubleKouIsNormalVoice] = isNormal
        local saveKey = self:getFullSaveKey(DoubleKouSaveKeyTab.DoubleKouIsNormalVoice)
        userDefault:setBoolForKey(saveKey, isNormal)
        self:dispatch(self.EVENT_DOUBLEKOU_IS_NORMAL_VOICE_CHANGED, isNormal)
    end
end

--获得是否是普通话
function SettingData:getDoubleKouIsNormalVoice()
    local style = self._settings[DoubleKouSaveKeyTab.DoubleKouIsNormalVoice]

    if style == nil then
        local saveKey = self:getFullSaveKey(DoubleKouSaveKeyTab.DoubleKouIsNormalVoice)
        style = userDefault:getBoolForKey(saveKey, true)
    end
    return style
end

--设置背面样式
function SettingData:setDoubleKouBackStyle(style)
    if style then
        self._settings[DoubleKouSaveKeyTab.DoubleKouBackStyle] = style
        local saveKey = self:getFullSaveKey(DoubleKouSaveKeyTab.DoubleKouBackStyle)
        userDefault:setIntegerForKey(saveKey, style)
        self:dispatch(self.EVENT_DOUBLEKOU_BACK_STYLE_CHANGED, style)
    end
end

--获得背面样式
function SettingData:getDoubleKouBackStyle()
    local style = self._settings[DoubleKouSaveKeyTab.DoubleKouBackStyle]

    if style == nil then
        local saveKey = self:getFullSaveKey(DoubleKouSaveKeyTab.DoubleKouBackStyle)
        style = userDefault:getIntegerForKey(saveKey, 1)
    end
    return style
end

--设置正面样式
function SettingData:setDoubleKouFaceStyle(style)
    if style then
        self._settings[DoubleKouSaveKeyTab.DoubleKouFaceStyle] = style
        local saveKey = self:getFullSaveKey(DoubleKouSaveKeyTab.DoubleKouFaceStyle)
        userDefault:setIntegerForKey(saveKey, style)
        self:dispatch(self.EVENT_DOUBLEKOU_FACE_STYLE_CHANGED, style)
    end
end

--获得正面样式
function SettingData:getDoubleKouFaceStyle()
    local style = self._settings[DoubleKouSaveKeyTab.DoubleKouFaceStyle]

    if style == nil then
        local saveKey = self:getFullSaveKey(DoubleKouSaveKeyTab.DoubleKouFaceStyle)
        style = userDefault:getIntegerForKey(saveKey, 1)
    end
    return style
end

--设置桌布样式
function SettingData:setDoubleKouTableStyle(style)
    if style then
        self._settings[DoubleKouSaveKeyTab.DoubleKouTableStyle] = style
        local saveKey = self:getFullSaveKey(DoubleKouSaveKeyTab.DoubleKouTableStyle)
        userDefault:setIntegerForKey(saveKey, style)
        self:dispatch(self.EVENT_DOUBLEKOU_TABLE_STYLE_CHANGED, style)
        --考虑后期2D和2.5D功能，先做处理
        self:setDoubleKouIs2D(style == 2)
        self:throwTableStyleData(style)
    end
end

--获得桌布样式
function SettingData:getDoubleKouTableStyle()
    local style = self._settings[DoubleKouSaveKeyTab.DoubleKouTableStyle]

    if style == nil then
        local saveKey = self:getFullSaveKey(DoubleKouSaveKeyTab.DoubleKouTableStyle)
        style = userDefault:getIntegerForKey(saveKey, 1)
    end
    return style
end

--设置2D
function SettingData:setDoubleKouIs2D(is2D)
    if is2D ~= nil then
        self._settings[DoubleKouSaveKeyTab.DoubleKouIs2D] = is2D
        local saveKey = self:getFullSaveKey(DoubleKouSaveKeyTab.DoubleKouIs2D)
        userDefault:setBoolForKey(saveKey, is2D)
        self:dispatch(self.EVENT_DOUBLEKOU_IS_2D_CHANGED, is2D)
    end
end

--获得是否是2D
function SettingData:getDoubleKouIs2D()
    local style = self._settings[DoubleKouSaveKeyTab.DoubleKouIs2D]

    if style == nil then
        local saveKey = self:getFullSaveKey(DoubleKouSaveKeyTab.DoubleKouIs2D)
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
                    if self:getDoubleKouTableStyle() ~= index then
                        self:setDoubleKouTableStyle(index)
                        haveChange = true
                    end
                elseif tagKey == "BACK_TYPE" then
                    if self:getDoubleKouBackStyle() ~= index then
                        self:setDoubleKouBackStyle(index)
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
            if self:getDoubleKouTableStyle() == SettingData.tagInfo.TABLE_STYLE.index then
                local saveKey = self:getFullSaveKey(DoubleKouSaveKeyTab.DoubleKouTableStyle)
                local normalData = 1
                self:setDoubleKouTableStyle(normalData)
                haveChange = true
            end
        end
        local isUse = XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.POKER)
        if not isUse then
            if self:getDoubleKouBackStyle() == SettingData.tagInfo.BACK_TYPE.index then
                local saveKey = self:getFullSaveKey(DoubleKouSaveKeyTab.DoubleKouBackStyle)
                local normalData = 1
                self:setDoubleKouBackStyle(normalData)
                haveChange = true
            end
        end
        if haveChange then
            self:dispatch(self.EVENT_SETTING_INIT)
        end
    end
end

return SettingData