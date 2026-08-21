local SettingData = CF.gameClass("SettingData", "game.Mahjong.BasicMahjong.Data.SettingData")
local userDefault = cc.UserDefault:getInstance()

SettingData.tagInfo = {
    ["TABLE_STYLE"] = {posY = 10, fontSize = 32, propID = XH.XGSJ_PROP_ID.TABLE, index = 7, nameKey = "IMG_TABLE_BG", nodeKey = "_tableStyle_"},
    ["BACK_TYPE"] = {posY = -10, fontSize = 24, propID = XH.XGSJ_PROP_ID.MAH, index = 6, nameKey = "IMG_CARD_BACK", nodeKey = "_cardBack_"}
}

SettingData.EVENT_SWITCH_LINE_TYPE_EVENT = 'EVENT_SWITCH_LINE_TYPE_EVENT'  --单双排切换

function SettingData:getHaveTing()
    return false
end

function SettingData:getOutTableCardStyle()
    return CF.GameDefine.OUTMAHS_PUT_TYPE.FOUR_DIRECTION
end

function SettingData:getIsMahlayer3D()
    return false
end

--获得单双排状态,默认双排
function SettingData:getLineType()
    local lineType = self._settings["WA_HUA_LINE_TYPE"]
    if lineType == nil then
        local saveKey = self:getFullSaveKey("WA_HUA_LINE_TYPE")
        lineType = userDefault:getIntegerForKey(saveKey, CF.GameDefine.LineType.Double)
    end
    return lineType
end

function SettingData:getIsDoubleLine()
    local lineType = self._settings["WA_HUA_LINE_TYPE"]
    if lineType == nil then
        local saveKey = self:getFullSaveKey("WA_HUA_LINE_TYPE")
        lineType = userDefault:getIntegerForKey(saveKey, CF.GameDefine.LineType.Double)
    end
    local isDoubleLine = (lineType == CF.GameDefine.LineType.Double)
    return isDoubleLine
end

--切换单双排
function SettingData:switchLineType()
    local lineType = self._settings["WA_HUA_LINE_TYPE"]
    if lineType == nil then
        local saveKey = self:getFullSaveKey("WA_HUA_LINE_TYPE")
        lineType = userDefault:getIntegerForKey(saveKey, CF.GameDefine.LineType.Double)
    end
    self._settings["WA_HUA_LINE_TYPE"] = (lineType == CF.GameDefine.LineType.Single) and CF.GameDefine.LineType.Double or CF.GameDefine.LineType.Single
    local saveKey = self:getFullSaveKey("WA_HUA_LINE_TYPE")
    userDefault:setIntegerForKey(saveKey, self._settings["WA_HUA_LINE_TYPE"])
    self:dispatch(self.EVENT_SWITCH_LINE_TYPE_EVENT, self._settings["WA_HUA_LINE_TYPE"])
end

function SettingData:getDefaultData()
    local switchKey = function ( cusData, bSwitch)
        local cfg = {}
        cfg.mahShapeType = cusData.BODY_TYPE
        cfg.mahLightType = cusData.FACE_TYPE
        cfg.mahBackColorType = cusData.BACK_TYPE
        cfg.mahFaceType = cusData.WORD_TYPE
        cfg.mahFaceSizeRatio = cusData.CARD_WORD_SIZE
        cfg.mahHeightRatio = cusData.CARD_HEIGHT
        cfg.mahThickRatio  = cusData.CARD_WIDTH
        cfg.combLieType  = cusData.HAND_STYLE
        cfg.handAreaPlaceType  = cusData.HAND_SORT_STYLE
        cfg.handMahsPlayType =  self:getMahOutCardStyle() --双击出牌设置后不生效修改
        cfg.mahOutTableCardStyle = cusData.OUT_TABLE_CARD_STYLE
        return cfg
    end
    local data = {}
    data.CARD_WIDTH      = self:getCardWidth()
    data.CARD_HEIGHT     = self:getCardHeight()
    data.WORD_TYPE       = self:getWordType()
    data.BACK_TYPE       = self:getBackType()
    data.BODY_TYPE       = self:getBodyType()
    data.FACE_TYPE       = self:getFaceType()
    data.CARD_WORD_SIZE  = self:getCardWordSize()
    data.HAND_STYLE = self:getHandStyle()
    data.HAND_SORT_STYLE = self:getHandSortStyle()
    data.TABLE_STYLE    = self:getMahTableStyle()
    data.OUT_MOVE_STYLE = self:getOutMoveStyle()
    data.OUT_STYLE      = self:getOutStyle()
    data.OUT_EFFECTS    = self:getOutEffects()
    data.OUT_CARD_TYPE  = self:getMahOutCardStyle()
    data.OUT_TABLE_CARD_STYLE = self:getOutTableCardStyle()
    data.INSERT_STYLE   = self:getInsertStyle()
    return switchKey(data)
end

function SettingData:setHandSortStyle(style)
    SettingData.super.setHandSortStyle(self, CF.GameDefine.HANDAREA_PLACE_TYPE.COMB_AT_LEFT)
end

function SettingData:getHandSortStyle()
    return CF.GameDefine.HANDAREA_PLACE_TYPE.COMB_AT_LEFT
end

function SettingData:setMahOutCardStyle(style)
    SettingData.super.setMahOutCardStyle(self, style)
    if style then
        local cusData = CF.settingData:getDefaultData()
        CF.settingData:dispatchMahjongCfg(cusData)
    end
end

return SettingData