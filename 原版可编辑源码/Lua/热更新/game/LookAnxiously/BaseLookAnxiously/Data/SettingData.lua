local SettingData = CF.gameClass("SettingData", "game.GameBase.Data.SettingData")

local userDefault = cc.UserDefault:getInstance()

local SaveKeyTab = {
    CardBackStyle = 'CARD_BACK_STYLE', --牌背样式
    GameTableStyle = 'CARD_TABLE_STYLE', --桌布样式
    LanguageStyle = 'LOOKANXIOUSLY_LAUGUAGE_STYLE', --方言开关
}

SettingData.tagInfo = {
    ["TABLE_STYLE"] = {posY = 10, fontSize = 32, propID = XH.XGSJ_PROP_ID.TABLE, index = 3, nameKey = "IMG_TABLE_BG", nodeKey = "_tableStyle_"},
    ["BACK_TYPE"] = {posY = -10, fontSize = 24, propID = XH.XGSJ_PROP_ID.POKER, index = 3, nameKey = "IMG_CARD_BACK", nodeKey = "_cardBack_"}
}

SettingData.throwDataBgName = {
    [1] = "3维",
    [2] = "2维_深绿",
    [3] = "霞光胜境",
    [4] = "background_3",
    [5] = "background_2",
    [6] = "background_1",
}

--数据改变消息
SettingData.EVENT_CARD_BACK_STYLE_CHANGED = 'EVENT_CARD_BACK_STYLE_CHANGED'
SettingData.EVENT_TABLE_STYLE_CHANGED = 'EVENT_TABLE_STYLE_CHANGED'

--------------对外接口---------------
--设置牌背样式
function SettingData:setCardBackStyle(style)
    if style then
        self._settings[SaveKeyTab.CardBackStyle] = style
        local saveKey = self:getFullSaveKey(SaveKeyTab.CardBackStyle)
        userDefault:setIntegerForKey(saveKey, style)
        self:dispatch(self.EVENT_CARD_BACK_STYLE_CHANGED, style)
    end
end

--获得牌背样式
function SettingData:getCardBackStyle()
    local style = self._settings[SaveKeyTab.CardBackStyle]

    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.CardBackStyle)
        style = userDefault:getIntegerForKey(saveKey, 2)
    end
    return style
end

--设置桌布样式
function SettingData:setGameTableStyle(style)
    if style then
        self._settings[SaveKeyTab.GameTableStyle] = style
        local saveKey = self:getFullSaveKey(SaveKeyTab.GameTableStyle)
        userDefault:setIntegerForKey(saveKey, style)
        self:dispatch(self.EVENT_TABLE_STYLE_CHANGED, style)
        self:throwTableStyleData(style)
    end
end

--获得桌布样式
function SettingData:getGameTableStyle()
    local style = self._settings[SaveKeyTab.GameTableStyle]

    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.GameTableStyle)
        style = userDefault:getIntegerForKey(saveKey, 1)
    end
    return style
end

--设置方言
function SettingData:setIsNormalVoice(isNormal)
    if isNormal ~= nil then
        self._settings[SaveKeyTab.LanguageStyle] = isNormal
        local saveKey = self:getFullSaveKey(SaveKeyTab.LanguageStyle)
        userDefault:setBoolForKey(saveKey, isNormal)
        self:dispatch(self.EVENT_MAH_IS_NORMAL_VOICE_CHANGED, isNormal)
    end
end

--获得是否是普通话 1-方言 0-普通话
function SettingData:getIsNormalVoice()
    local style = self._settings[SaveKeyTab.LanguageStyle]

    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.LanguageStyle)
        style = userDefault:getBoolForKey(saveKey, true)
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
                    if self:getGameTableStyle() ~= index then
                        self:setGameTableStyle(index)
                        haveChange = true
                    end
                elseif tagKey == "BACK_TYPE" then
                    if self:getCardBackStyle() ~= index then
                        self:setCardBackStyle(index)
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
            if self:getGameTableStyle() == SettingData.tagInfo.TABLE_STYLE.index then
                local saveKey = self:getFullSaveKey(SaveKeyTab.GameTableStyle)
                local normalData = 1
                self:setGameTableStyle(normalData)
                haveChange = true
            end
        end
        local isUse = XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.POKER)
        if not isUse then
            if self:getCardBackStyle() == SettingData.tagInfo.BACK_TYPE.index then
                local saveKey = self:getFullSaveKey(SaveKeyTab.CardBackStyle)
                local normalData = 1
                self:setCardBackStyle(normalData)
                haveChange = true
            end
        end
        if haveChange then
            self:dispatch(self.EVENT_SETTING_INIT)
        end
    end
end

return SettingData