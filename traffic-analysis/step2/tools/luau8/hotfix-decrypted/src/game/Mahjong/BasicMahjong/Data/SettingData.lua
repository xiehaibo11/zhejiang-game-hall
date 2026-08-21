local SettingData = CF.gameClass("SettingData", "game.GameBase.Data.SettingData")
local MahSettingConfig = CF.gameRequire("Config.MahSettingConfig")
local userDefault = cc.UserDefault:getInstance()

local SaveKeyTab = {
    CustomStyle     = "CUSTOM_STYLE",     
    PlayerType     = "PLAYER_TYPE",     
    OutMoveStyle  = "OUT_MOVE_STYLE",  
    OutStyle       = "OUT_STYLE",       
    OutEffects     = "OUT_EFFECTS",     
    HandStyle      = "HAND_STYLE",      
    HandSortStyle = "HAND_SORT_STYLE", 
    CardWordSize = "CARD_WORD_SIZE", 
    CardWidth = "CARD_WIDTH", 
    CardHeight = "CARD_HEIGHT", 
    WordType = "WORD_TYPE",
    BackType = "BACK_TYPE",
    BodyType = "BODY_TYPE",
    FaceType = "FACE_TYPE",
    CustomIndex = "CUSTOM_INDEX",
    TABLE_STYLE = "TABLE_STYLE",
    MahIs3D = "MAHLAYER_IS_3D",     --是否3D麻将层
    OutTableCardStyle = "OUT_TABLE_CARD_STYLE",
    InsertStyle = "INSERT_STYLE",
    OutEffectsSize ="OUT_EFFECTS_SIZE", --吃碰杠动画大小

    MahBackStyle = 'MAH_BACK_STYLE', --牌背样式
    MahFaceStyle = 'MAH_FACE_STYLE', --牌面样式
    MahTableStyle = 'MAH_TABLE_STYLE', --桌布样式
    MahOutCardStyle = 'MAH_OUT_CARD_STYLE', --出牌方式
    MahIsNormalVoice = 'MAH_IS_NORMAL_VOICE', --是否是方言
    MahIsHaveAni = 'MAH_IS_HAVE_ANI', --是否有动画
    MahIsHaveTrace = 'MAH_IS_HAVE_TRACE', --是否出牌轨迹
    ting = 'HAVE_TING',
    MahLightStyle = 'MAH_LIGHT_STYLE',--牌面亮度
    OutEffectStyle = 'OUT_EFFECT_STYLE',--特效
    MahDialectType = 'MAH_DIALECT_TYPE', --方言类型
    VisualAngle3D = 'VISUAL_ANGLE_3D',  --3D视觉角度
}

local configTab = {
    MUSIC = 3,
    SOUND = 1,
    MahBackStyle = 6,
    MahFaceStyle = 7,
    MahTableStyle = 8,
    MahOutCardStyle = 5,
    MahIsNormalVoice = 2,
    MahIsHaveTrace = 4,
    ting = 9,
    ClearModel = 10,
    MahLightStyle = 11,
    OutEffectStyle = 12,
    MahDialectType = 13,
    VisualAngle3D = 14,
}

SettingData.EVENT_MAH_CUSTOM_STYLE          = 'EVENT_MAH_CUSTOM_STYLE'
SettingData.EVENT_MAH_OUT_MOVE_STYLE        = 'EVENT_MAH_OUT_MOVE_STYLE'
SettingData.EVENT_MAH_OUT_STYLE             = 'EVENT_MAH_OUT_STYLE'
SettingData.EVENT_MAH_OUT_EFFECTS           = 'EVENT_MAH_OUT_EFFECTS'
SettingData.EVENT_MAH_HAND_STYLE            = 'EVENT_MAH_HAND_STYLE'
SettingData.EVENT_MAH_HAND_SORT_STYLE       = 'EVENT_MAH_HAND_SORT_STYLE'
SettingData.EVENT_MAH_CARD_HEIGHT           = 'EVENT_MAH_CARD_HEIGHT'
SettingData.EVENT_MAH_CARD_WIDTH            = 'EVENT_MAH_CARD_WIDTH'
SettingData.EVENT_MAH_CARD_WORD_SIZE        = 'EVENT_MAH_CARD_WORD_SIZE'
SettingData.EVENT_MAH_CARD_WORD_TYPE        = 'EVENT_MAH_CARD_WORD_TYPE'
SettingData.EVENT_MAH_CARD_BACK_TYPE        = 'EVENT_MAH_CARD_BACK_TYPE'
SettingData.EVENT_MAH_CARD_BODY_TYPE        = 'EVENT_MAH_CARD_BODY_TYPE'
SettingData.EVENT_MAH_CARD_FACE_TYPE        = 'EVENT_MAH_CARD_FACE_TYPE'
SettingData.EVENT_MAH_PLAYER_TYPE           = 'EVENT_MAH_PLAYER_TYPE'
SettingData.EVENT_MAHJONG_CONFIG            = 'EVENT_MAHJONG_CONFIG'
SettingData.EVENT_TABLE_STYLE               = 'EVENT_TABLE_STYLE'
SettingData.EVENT_CHECK_MAHLAYER_DIMENSION  = 'EVENT_CHECK_MAHLAYER_DIMENSION'
SettingData.EVENT_MAH_TABLE_OUTMAH_TYPE     = "EVENT_MAH_TABLE_OUTMAH_TYPE"
SettingData.EVENT_MAH_INSERT_STYLE          = 'EVENT_MAH_INSERT_STYLE'

SettingData.EVENT_MAH_BACK_STYLE_CHANGED = 'EVENT_MAH_BACK_STYLE_CHANGED'
SettingData.EVENT_MAH_FACE_STYLE_CHANGED = 'EVENT_MAH_FACE_STYLE_CHANGED'
SettingData.EVENT_MAH_LIGHT_STYLE_CHANGED = 'EVENT_MAH_LIGHT_STYLE_CHANGED'
SettingData.EVENT_MAH_OUT_CARD_STYLE_CHANGED = 'EVENT_MAH_OUT_CARD_STYLE_CHANGED'
SettingData.EVENT_MAH_IS_HAVE_ANI_CHANGED = 'EVENT_MAH_IS_HAVE_ANI_CHANGED'
SettingData.EVENT_MAH_IS_HAVE_TRACE_CHANGED = 'EVENT_MAH_IS_HAVE_TRACE_CHANGED'
SettingData.EVENT_HAVE_TING = 'EVENT_HAVE_TING'
SettingData.EVENT_VISUAL_ANGLE_3D               = 'EVENT_VISUAL_ANGLE_3D'

function SettingData:getConfigByKey(configKey, indexKey)
    if not configKey then
        return nil
    end
    local conf = MahSettingConfig[CF.areaData:getAreaID()]
    if not indexKey then
        if not conf or not conf[configKey] then
            conf = MahSettingConfig["NORMAL"]
        end
        return conf[configKey]
    else
        if not conf or not conf[configKey] or not conf[configKey][indexKey] then
            conf = MahSettingConfig["NORMAL"]
        end
        if conf[configKey] then
            return conf[configKey][indexKey]
        else
            return nil
        end
    end
end

function SettingData:getNormalData(configKey)
    return self:getConfigByKey(configKey, "normal")
end

function SettingData:getDefaultData(customIndex, bSwitchKey)
    local switchKey = function ( cusData, bSwitch)
        if not bSwitch then
            return cusData
        end
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
        cfg.showFlowerNumber = self:isShowFlowerNumber()
        cfg.mahOutEffectsSize = cusData.OUT_EFFECTS_SIZE
        cfg.visualAngle3D = cusData.VISUAL_ANGLE_3D
        return cfg
    end
    customIndex = customIndex or self:getPlayerType()
    local conf = self:getConfigByKey(SaveKeyTab.CustomStyle, customIndex)
    if conf then
        return switchKey(conf, bSwitchKey), true
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
    data.OUT_EFFECTS_SIZE  = self:getMahEffectsSize()
    data.VISUAL_ANGLE_3D  = self:get3DVisualAngle()
    return switchKey(data, bSwitchKey), false
end

--设置自定义布局方案按钮index
function SettingData:setCustonTypeIndex(style)
    if style then
        self._settings[SaveKeyTab.CustomIndex] = style
        local saveKey = self:getFullSaveKey(SaveKeyTab.CustomIndex)
        userDefault:setIntegerForKey(saveKey, style)
    end
end

--获取自定义布局方案按钮index
function SettingData:getCustonTypeIndex()
    local style = self._settings[SaveKeyTab.CustomIndex]
    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.CustomIndex)
        style = userDefault:getIntegerForKey(saveKey, 0)
    end
    return style
end

--设置布局方案按钮
function SettingData:setPlayerType(style)
    if style then
        self._settings[SaveKeyTab.PlayerType] = style
        local saveKey = self:getFullSaveKey(SaveKeyTab.PlayerType)
        userDefault:setIntegerForKey(saveKey, style)
        self:dispatch(self.EVENT_MAH_PLAYER_TYPE, style)
    end
end

--获得布局方案按钮
function SettingData:getPlayerType()
    local style = self._settings[SaveKeyTab.PlayerType]

    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.PlayerType)
        style = userDefault:getIntegerForKey(saveKey, self:getNormalData(SaveKeyTab.PlayerType))
    end
    return style
end

---设置出牌轨迹
function SettingData:setOutMoveStyle(style)
    if style then
        self._settings[SaveKeyTab.OutMoveStyle] = style
        local saveKey = self:getFullSaveKey(SaveKeyTab.OutMoveStyle)
        userDefault:setIntegerForKey(saveKey, style)
        self:dispatch(self.EVENT_MAH_OUT_MOVE_STYLE, style)
    end
end

---设置插入手牌方式
function SettingData:setInsertStyle(style)
    if style then
        self._settings[SaveKeyTab.InsertStyle] = style
        local saveKey = self:getFullSaveKey(SaveKeyTab.InsertStyle)
        userDefault:setIntegerForKey(saveKey, style)
        self:dispatch(self.EVENT_MAH_INSERT_STYLE, style)
    end
end

---设置出牌显示大牌
function SettingData:setOutStyle(style)
    if style then
        self._settings[SaveKeyTab.OutStyle] = style
        local saveKey = self:getFullSaveKey(SaveKeyTab.OutStyle)
        userDefault:setIntegerForKey(saveKey, style)
        self:dispatch(self.EVENT_MAH_OUT_STYLE, style)
    end
end

---设置吃碰杠动画
function SettingData:setOutEffects(style)
    if style then
        self._settings[SaveKeyTab.OutEffects] = style
        local saveKey = self:getFullSaveKey(SaveKeyTab.OutEffects)
        userDefault:setIntegerForKey(saveKey, style)
        self:dispatch(self.EVENT_MAH_OUT_EFFECTS, style)
    end
end

---设置牌堆显示方式
function SettingData:setHandStyle(style)
    if style then
        self._settings[SaveKeyTab.HandStyle] = style
        local saveKey = self:getFullSaveKey(SaveKeyTab.HandStyle)
        userDefault:setIntegerForKey(saveKey, style)
--        self:dispatch(self.EVENT_MAH_HAND_STYLE, style)
    end
end

---设置手牌摆放方式
function SettingData:setHandSortStyle(style)
    if style then
        self._settings[SaveKeyTab.HandSortStyle] = style
        local saveKey = self:getFullSaveKey(SaveKeyTab.HandSortStyle)
        userDefault:setIntegerForKey(saveKey, style)
--        self:dispatch(self.EVENT_MAH_HAND_SORT_STYLE, style)
    end
end

---设置手牌高度
function SettingData:setCardHeight(style)
    if style then
        self._settings[SaveKeyTab.CardHeight] = style
        local saveKey = self:getFullSaveKey(SaveKeyTab.CardHeight)
        userDefault:setFloatForKey(saveKey, style)
        -- self:dispatch(self.EVENT_MAH_CARD_HEIGHT, style)
    end
end

---设置手牌厚度
function SettingData:setCardWidth(style)
    if style then
        self._settings[SaveKeyTab.CardWidth] = style
        local saveKey = self:getFullSaveKey(SaveKeyTab.CardWidth)
        userDefault:setFloatForKey(saveKey, style)
        -- self:dispatch(self.EVENT_MAH_CARD_WIDTH, style)
    end
end

---设置手牌牌花大小
function SettingData:setCardWordSize(style)
    if style then
        self._settings[SaveKeyTab.CardWordSize] = style
        local saveKey = self:getFullSaveKey(SaveKeyTab.CardWordSize)
        userDefault:setFloatForKey(saveKey, style)
        -- self:dispatch(self.EVENT_MAH_CARD_WORD_SIZE, style)
    end
end

---设置手牌牌花(字体)
function SettingData:setWordType(style)
    if style then
        self._settings[SaveKeyTab.WordType] = style
        local saveKey = self:getFullSaveKey(SaveKeyTab.WordType)
        userDefault:setIntegerForKey(saveKey, style)
        -- self:dispatch(self.EVENT_MAH_CARD_WORD_TYPE, style)
    end
end

---设置手牌牌背(颜色)
function SettingData:setBackType(style)
    if style then
        self._settings[SaveKeyTab.BackType] = style
        local saveKey = self:getFullSaveKey(SaveKeyTab.BackType)
        userDefault:setIntegerForKey(saveKey, style)
        -- self:dispatch(self.EVENT_MAH_CARD_BACK_TYPE, style)
    end
end

---设置手牌牌身(圆方)
function SettingData:setBodyType(style)
    if style then
        self._settings[SaveKeyTab.BodyType] = style
        local saveKey = self:getFullSaveKey(SaveKeyTab.BodyType)
        userDefault:setIntegerForKey(saveKey, style)
        -- self:dispatch(self.EVENT_MAH_CARD_BODY_TYPE, style)
    end
end

---设置手牌牌面(亮暗)
function SettingData:setFaceType(style)
    if style then
        self._settings[SaveKeyTab.FaceType] = style
        local saveKey = self:getFullSaveKey(SaveKeyTab.FaceType)
        userDefault:setIntegerForKey(saveKey, style)
        -- self:dispatch(self.EVENT_MAH_CARD_FACE_TYPE, style)
    end
end

--设置麻将子亮度
function SettingData:setMahLightStyle(style)
    if style then
        self._settings[SaveKeyTab.MahLightStyle] = style
        local saveKey = self:getFullSaveKey(SaveKeyTab.MahLightStyle)
        userDefault:setIntegerForKey(saveKey, style)
        self:dispatch(self.EVENT_MAH_LIGHT_STYLE_CHANGED, style)
    end
end

--设置麻将桌布样式
function SettingData:setMahTableStyle(style)
    if style then
        self._settings[SaveKeyTab.TABLE_STYLE] = style
        local saveKey = self:getFullSaveKey(SaveKeyTab.TABLE_STYLE)
        userDefault:setIntegerForKey(saveKey, style)
        self:dispatch(self.EVENT_TABLE_STYLE, style)
    end
end

--出牌摆放方式
function SettingData:setOutTableCardStyle(style)
    if style then
        self._settings[SaveKeyTab.OutTableCardStyle] = style
        local saveKey = self:getFullSaveKey(SaveKeyTab.OutTableCardStyle)
        userDefault:setIntegerForKey(saveKey, style)
        self:dispatch(self.EVENT_MAH_TABLE_OUTMAH_TYPE, style)
    end
end

---获取出牌轨迹
function SettingData:getOutMoveStyle()
    local style = self._settings[SaveKeyTab.OutMoveStyle]

    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.OutMoveStyle)
        style = userDefault:getIntegerForKey(saveKey, self:getNormalData(SaveKeyTab.OutMoveStyle))
    end
    return style
end

---获取插牌方式
function SettingData:getInsertStyle()
    local style = self._settings[SaveKeyTab.InsertStyle]

    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.InsertStyle)
        style = userDefault:getIntegerForKey(saveKey, self:getNormalData(SaveKeyTab.InsertStyle))
    end
    return style
end

---获取出牌显示大牌
function SettingData:getOutStyle(dv)
    local style = self._settings[SaveKeyTab.OutStyle]

    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.OutStyle)
        style = userDefault:getIntegerForKey(saveKey, dv or self:getNormalData(SaveKeyTab.OutStyle))
    end
    return style
end

---获取吃碰杠动画
function SettingData:getOutEffects()
    local style = self._settings[SaveKeyTab.OutEffects]

    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.OutEffects)
        style = userDefault:getIntegerForKey(saveKey, self:getNormalData(SaveKeyTab.OutEffects))
    end
    return style
end

---获取牌堆显示方式
function SettingData:getHandStyle()
    local style = self._settings[SaveKeyTab.HandStyle]

    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.HandStyle)
        style = userDefault:getIntegerForKey(saveKey, self:getNormalData(SaveKeyTab.HandStyle))
    end
    return style
end

---获取手牌摆放方式
function SettingData:getHandSortStyle()
    local style = self._settings[SaveKeyTab.HandSortStyle]

    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.HandSortStyle)
        style = userDefault:getIntegerForKey(saveKey, self:getNormalData(SaveKeyTab.HandSortStyle))
    end
    return style
end

---获取手牌高度
function SettingData:getCardHeight(dv)
    local style = self._settings[SaveKeyTab.CardHeight]

    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.CardHeight)
        style = userDefault:getFloatForKey(saveKey, dv or self:getNormalData(SaveKeyTab.CardHeight))
    end
    return style
end

---获取手牌厚度
function SettingData:getCardWidth(dv)
    local style = self._settings[SaveKeyTab.CardWidth]

    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.CardWidth)
        style = userDefault:getFloatForKey(saveKey, dv or self:getNormalData(SaveKeyTab.CardWidth))
    end
    return style
end

---获取手牌牌花大小
function SettingData:getCardWordSize(dv)
    local style = self._settings[SaveKeyTab.CardWordSize]

    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.CardWordSize)
        style = userDefault:getFloatForKey(saveKey, dv or self:getNormalData(SaveKeyTab.CardWordSize))
    end
    return style
end

---获取手牌牌花(字体)
function SettingData:getWordType(dv)
    local style = self._settings[SaveKeyTab.WordType]

    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.WordType)
        style = userDefault:getIntegerForKey(saveKey, dv or self:getNormalData(SaveKeyTab.WordType))
    end
    return style
end

---获取手牌牌背(颜色)
function SettingData:getBackType(dv)
    local style = self._settings[SaveKeyTab.BackType]

    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.BackType)
        style = userDefault:getIntegerForKey(saveKey, dv or self:getNormalData(SaveKeyTab.BackType))
    end
    return style
end

---获取手牌牌身(圆方)
function SettingData:getBodyType(dv)
    local style = self._settings[SaveKeyTab.BodyType]

    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.BodyType)
        style = userDefault:getIntegerForKey(saveKey, dv or self:getNormalData(SaveKeyTab.BodyType))
    end
    return style
end

---获取手牌牌面(亮暗)
function SettingData:getFaceType(dv)
    local style = self._settings[SaveKeyTab.FaceType]

    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.FaceType)
        style = userDefault:getIntegerForKey(saveKey, dv or self:getNormalData(SaveKeyTab.FaceType))
    end
    return style
end

--获得牌面亮度设置
function SettingData:getMahLightStyle(dv)
    local style = self._settings[SaveKeyTab.MahLightStyle]

    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.MahLightStyle)
        style = userDefault:getIntegerForKey(saveKey, dv or self._curDefault[configTab.MahLightStyle])
    end
    return style
end

--获得桌布样式
function SettingData:getMahTableStyle(dv)
    local style = self._settings[SaveKeyTab.TABLE_STYLE]

    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.TABLE_STYLE)
        style = userDefault:getIntegerForKey(saveKey, dv or self:getNormalData(SaveKeyTab.TABLE_STYLE))
    end
    return style
end

---获取出牌摆放方式
function SettingData:getOutTableCardStyle()
    if self:getIsMahlayer3D() then
        return CF.GameDefine.OUTMAHS_PUT_TYPE.FOUR_DIRECTION
    end
    local style = self._settings[SaveKeyTab.OutTableCardStyle]
    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.OutTableCardStyle)
        style = userDefault:getIntegerForKey(saveKey, self:getNormalData(SaveKeyTab.OutTableCardStyle))
    end
    return style
end

function SettingData:dispatchMahjongCfg(cusData)
    self:dispatch(SettingData.EVENT_MAHJONG_CONFIG, cusData)
end

--获得麻将是否3D
function SettingData:getIsMahlayer3D()
    local style = self._settings[SaveKeyTab.MahIs3D]

    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.MahIs3D)
        style = userDefault:getBoolForKey(saveKey, self._curDefault[SaveKeyTab.MahIs3D] == 1 and true or false)
    end
    return style
end

function SettingData:setMahlayerDimension(cusData)
    local style
    if self:getIsMahlayer3D() then
        style = false
    else
        style = true
    end

    if style and not CF.SysTool.support3DMahLayer() then
        CF.TipTool.showTip({
            type = CF.TIP_LAYER_TYPE.OK,
            funcOK = function()
                CF.SysTool.downloadNewVersionApp()
            end,
        }, "当前游戏版本不支持3D场景,\n是否进行更新？")
        return
    end

    local saveKey = self:getFullSaveKey(SaveKeyTab.MahIs3D)
    userDefault:setBoolForKey(saveKey, style)
    self:dispatch(SettingData.EVENT_CHECK_MAHLAYER_DIMENSION, cusData)

    local areaIDAndGameID = CF.areaData:getAreaID() .. "_" .. CF.roomData:getGameID() 
    local roomMode = CF.roomData:getRoomMode2()
    local strPageItemID = ""
    if self:getIsMahlayer3D() then
        strPageItemID = "3d"
    else
        strPageItemID = "2d"
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.dh25022702, {page_item_id = strPageItemID,game_id = areaIDAndGameID,room_mode = roomMode})

end


--设置麻将子背面样式
function SettingData:setMahBackStyle(style)
    if style then
        self._settings[SaveKeyTab.MahBackStyle] = style
        local saveKey = self:getFullSaveKey(SaveKeyTab.MahBackStyle)
        userDefault:setIntegerForKey(saveKey, style)
        self:dispatch(self.EVENT_MAH_BACK_STYLE_CHANGED, style)
    end
end

--设置麻将子正面样式
function SettingData:setMahFaceStyle(style)
    if style then
        self._settings[SaveKeyTab.MahFaceStyle] = style
        local saveKey = self:getFullSaveKey(SaveKeyTab.MahFaceStyle)
        userDefault:setIntegerForKey(saveKey, style)
        self:dispatch(self.EVENT_MAH_FACE_STYLE_CHANGED, style)
    end
end

--设置麻将出牌方式
function SettingData:setMahOutCardStyle(style)
    if style then
        self._settings[SaveKeyTab.MahOutCardStyle] = style
        local saveKey = self:getFullSaveKey(SaveKeyTab.MahOutCardStyle)
        userDefault:setIntegerForKey(saveKey, style)
        self:dispatch(self.EVENT_MAH_OUT_CARD_STYLE_CHANGED, style)
    end
end

--设置麻将方言
function SettingData:setMahIsNormalVoice(isNormal)
    if isNormal ~= nil then
        self._settings[SaveKeyTab.MahIsNormalVoice] = isNormal
        local saveKey = self:getFullSaveKey(SaveKeyTab.MahIsNormalVoice)
        userDefault:setBoolForKey(saveKey, isNormal)
        self:dispatch(self.EVENT_MAH_IS_NORMAL_VOICE_CHANGED, isNormal)
    end
end

--设置麻将方言类型
function SettingData:setMahDialectVoiceType(type)
    if type ~= nil then
        self._settings[SaveKeyTab.MahDialectType .. CF.roomData:getGameID()] = type
        local saveKey = self:getFullSaveKey(SaveKeyTab.MahDialectType, CF.roomData:getGameID())
        userDefault:setIntegerForKey(saveKey, type)
    end
end

--设置麻将动画
function SettingData:setMahIsHaveAni(isHaveAni)
    if isHaveAni ~= nil then
        self._settings[SaveKeyTab.MahIsHaveAni] = isHaveAni
        local saveKey = self:getFullSaveKey(SaveKeyTab.MahIsHaveAni)
        userDefault:setBoolForKey(saveKey, isHaveAni)
        self:dispatch(self.EVENT_MAH_IS_HAVE_ANI_CHANGED, isHaveAni)
    end
end

--设置麻将有无听牌
function SettingData:setHaveTing(isTing)
    if isTing ~= nil then
        self._settings[SaveKeyTab.ting] = isTing
        local saveKey = self:getFullSaveKey(SaveKeyTab.ting)
        userDefault:setBoolForKey(saveKey, isTing)
        self:dispatch(self.EVENT_HAVE_TING, isTing)
    end
end

--设置麻将出牌轨迹
function SettingData:setMahIsHaveTrace(isHaveTrace)
    if isHaveTrace ~= nil then
        self._settings[SaveKeyTab.MahIsHaveTrace] = isHaveTrace
        local saveKey = self:getFullSaveKey(SaveKeyTab.MahIsHaveTrace)
        userDefault:setBoolForKey(saveKey, isHaveTrace)
        self:dispatch(self.EVENT_MAH_IS_HAVE_TRACE_CHANGED, isHaveTrace)
    end
end

--设置麻将特效
function SettingData:setOutEffectStyle(style)
    if style ~= nil then
        self._settings[SaveKeyTab.OutEffectStyle] = style
        local saveKey = self:getFullSaveKey(SaveKeyTab.OutEffectStyle)
        userDefault:setIntegerForKey(saveKey, style)
    end
end

function SettingData:set3DVisualAngle(style)
    if style ~= nil then
        self._settings[SaveKeyTab.VisualAngle3D] = style
        local saveKey = self:getFullSaveKey(SaveKeyTab.VisualAngle3D)
        userDefault:setIntegerForKey(saveKey, style)
        self:dispatch(self.EVENT_VISUAL_ANGLE_3D, style)
        self:dispatch(self.EVENT_CHECK_MAHLAYER_DIMENSION, true)

        local areaIDAndGameID = CF.areaData:getAreaID() .. "_" .. CF.roomData:getGameID() 
        local roomMode = CF.roomData:getRoomMode2()
        local strPageItemID = ""
        if style == 2 then
            strPageItemID = "3d经典"
        else
            strPageItemID = "3d新版"
        end
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.dh25022701, {page_item_id = strPageItemID,game_id = areaIDAndGameID,room_mode = roomMode})

    end
end

--获得麻将特效
function SettingData:get3DVisualAngle()
    local style = self._settings[SaveKeyTab.VisualAngle3D]

    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.VisualAngle3D)
        style = userDefault:getIntegerForKey(saveKey, self._curDefault[configTab.VisualAngle3D] or 1)
    end
    return style
end

--获得麻将特效
function SettingData:getOutEffectStyle()
    local style = self._settings[SaveKeyTab.OutEffectStyle]

    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.OutEffectStyle)
        style = userDefault:getIntegerForKey(saveKey, self._curDefault[configTab.OutEffectStyle])
    end
    return style
end

--获得将子背面样式
function SettingData:getMahBackStyle()
    local style = self._settings[SaveKeyTab.MahBackStyle]

    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.MahBackStyle)
        style = userDefault:getIntegerForKey(saveKey, self._curDefault[configTab.MahBackStyle])
    end
    return style
end

--获得将子正面样式
function SettingData:getMahFaceStyle()
    local style = self._settings[SaveKeyTab.MahFaceStyle]

    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.MahFaceStyle)
        style = userDefault:getIntegerForKey(saveKey, self._curDefault[configTab.MahFaceStyle])
    end
    return style
end

--获得出牌方式
function SettingData:getMahOutCardStyle()
    local style = self._settings[SaveKeyTab.MahOutCardStyle]

    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.MahOutCardStyle)
        style = userDefault:getIntegerForKey(saveKey, self._curDefault[configTab.MahOutCardStyle])
    end
    return style
end

--获得是否是普通话
function SettingData:getMahIsNormalVoice()
    local style = self._settings[SaveKeyTab.MahIsNormalVoice]

    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.MahIsNormalVoice)
        style = userDefault:getBoolForKey(saveKey, self._curDefault[configTab.MahIsNormalVoice] == 0 and true or false)
    end
    return style
end

--获得方言类型
function SettingData:getMahDialectVoiceType()
    local type = self._settings[SaveKeyTab.MahDialectType .. CF.roomData:getGameID()]
    
    if type == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.MahDialectType, CF.roomData:getGameID())
        type = userDefault:getIntegerForKey(saveKey, self._curDefault[configTab.MahDialectType])
    end
    return type
end


--获得是否有动画
function SettingData:getMahIsHaveAni()
    local style = self._settings[SaveKeyTab.MahIsHaveAni]

    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.MahIsHaveAni)
        style = userDefault:getBoolForKey(saveKey, self._curDefault[configTab.MahIsHaveAni] == 1 and true or false)
    end
    return style
end


--获得麻将出牌轨迹
function SettingData:getMahIsHaveTrace()
    local style = self._settings[SaveKeyTab.MahIsHaveTrace]

    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.MahIsHaveTrace)
        style = userDefault:getBoolForKey(saveKey, self._curDefault[configTab.MahIsHaveTrace] == 1 and true or false)
    end
    return style
end

--获得麻将是否有听牌
function SettingData:getHaveTing()
    local style = self._settings[SaveKeyTab.ting]

    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.ting)
        style = userDefault:getBoolForKey(saveKey, self._curDefault[configTab.ting] == 1 and true or false)
    end
    return style
end

--是否显示额外的牌花数字,逻辑各自子类重写
function SettingData:isShowFlowerNumber()
    return false
end

function SettingData:getMahEffectsSize()
    local style = self._settings[SaveKeyTab.OutEffectsSize]
    if style == nil then
        local saveKey = self:getFullSaveKey(SaveKeyTab.OutEffectsSize)
        local value  = self:getNormalData(SaveKeyTab.OutEffectsSize)
        if value then
            style = userDefault:getFloatForKey(saveKey, value)
        end
    end
    return style
end

function SettingData:setMahEffectsSize(style)
    if style then
        self._settings[SaveKeyTab.OutEffectsSize] = style
        local saveKey = self:getFullSaveKey(SaveKeyTab.OutEffectsSize)
        userDefault:setFloatForKey(saveKey, style)
    end
end

function SettingData:judgeSkinBundle()
    if XH.lobby:getModule("SkinBundle") then
        local haveChange = false
        for tagKey, value in pairs(MahSettingConfig.Index2PropID) do
            for index, propID in pairs(value) do
                local isUse = XH.lobby:getModule("SkinBundle"):isPropInUse(propID)
                if isUse then
                    if tagKey == "TABLE_STYLE" then
                        if self:getMahTableStyle() ~= index then
                            self:setMahTableStyle(index)
                            CF.settingData:setCustonTypeIndex(1)
                            CF.settingData:setPlayerType(0)
                            haveChange = true
                        end
                    elseif tagKey == "BACK_TYPE" then
                        if self:getMahBackStyle() ~= index then
                            self:setMahBackStyle(index)
                            haveChange = true
                        end
                        if self:getBackType() ~= index then
                            self:setBackType(index)
                            CF.settingData:setCustonTypeIndex(1)
                            CF.settingData:setPlayerType(0)
                            local cusData = CF.settingData:getDefaultData(nil, true)
                            CF.settingData:dispatchMahjongCfg(cusData)
                            haveChange = true
                        end
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
            local style = self:getMahTableStyle()
            local propID = CF.game:getModule("Setting"):getSkinBundlePropInfo("TABLE_STYLE", style)
            if propID > 0 then
                if self:getIsMahlayer3D() then
                    self:setMahTableStyle(1)
                    haveChange = true
                else
                    local normalData = self:getNormalData(SaveKeyTab.TABLE_STYLE)
                    self:setMahTableStyle(normalData)
                    haveChange = true
                end
            end
        end
        local isUse = XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.MAH)
        if not isUse then
            local style = self:getMahBackStyle()
            local propID = CF.game:getModule("Setting"):getSkinBundlePropInfo("BACK_TYPE", style)
            if propID > 0 then
                local normalData = 1
                self:setMahBackStyle(normalData)
                haveChange = true
            end
            local style = self:getBackType()
            local propID = CF.game:getModule("Setting"):getSkinBundlePropInfo("BACK_TYPE", style)
            if propID > 0 then
                local normalData = self:getNormalData(SaveKeyTab.BackType)
                self:setBackType(normalData)
                local cusData = CF.settingData:getDefaultData(nil, true)
                CF.settingData:dispatchMahjongCfg(cusData)
                haveChange = true
            end
        end
        if haveChange then
            self:dispatch(self.EVENT_SETTING_INIT)
        end
    end
end

return SettingData.�