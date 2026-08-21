local SettingView = CF.gameClass("SettingView", "game.Mahjong.BasicMahjong.Modules.Setting.View")

local KW_SWITCH_OFF_PNG = "mah_btn_off.png"
local KW_SWITCH_NO_PNG = "mah_btn_no.png"
local KW_SELECT_FLAG = "KW_IMG_FLAG"

local KW_SWITCH_OFF_PNG_3 = "set_mah_btn_off_4.png"             --女   (出牌语音)
local KW_SWITCH_NO_PNG_3 = "set_mah_btn_on_4.png"               --男
local KW_QUIT_BTN_TEXTUTRE = "set_mah_btn_quit.png"

local BAKC_TYPE = {
    [1] = CF.GameDefine.MAH_BACK_COLOR_TYPE.GREEN,
    [2] = CF.GameDefine.MAH_BACK_COLOR_TYPE.ORANGE,
    [3] = CF.GameDefine.MAH_BACK_COLOR_TYPE.GREEN,
    [6] = CF.GameDefine.MAH_BACK_COLOR_TYPE.XGSJ
}

function SettingView:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/TaiZhou/WaHua/Setting.csb"
end

function SettingView:getBindingInfo()
    local bindInfo = SettingView.super.getBindingInfo(self)
    bindInfo["_KW_IMG_CL_8"] = { varName = "_clearImage", type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouched" }
    bindInfo["_KW_IMG_CPYY_9"] = { varName = "_cpyyImage",type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouched"}
    bindInfo["_KW_IMG_CARD_BACK_"] = { varName = "_cardBack_", beginIndex = 1, endIndex = 6, type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onSelectMahBackStyle" }
    bindInfo["_KW_IMG_CARD_FACE_"] = { varName = "_cardFace_", beginIndex = 1, endIndex = 4, type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onSelectMahFaceStyle" }
    bindInfo["_KW_IMG_TABLE_BG_"] = { varName = "_tableStyle_", beginIndex = 1, endIndex = 7, type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onSelectMahTableStyle" }
    return bindInfo
end

function SettingView:initUI()
    self._tableStyleVarNames = { "_tableStyle_1", "_tableStyle_2", "_tableStyle_3", "_tableStyle_4", "_tableStyle_5", "_tableStyle_6", "_tableStyle_7" }
    self._faceStyleVarNames = { "_cardFace_1", "_cardFace_2", "_cardFace_3",  "_cardFace_4"}
    self._backStyleVarNames = { "_cardBack_1", "_cardBack_2", "_cardBack_3", "_cardBack_4","_cardBack_5", "_cardBack_6" }
    self._switchNames = { "_yxImage", "_txImage", "_yyImage", "_fyImage", "_cpImage", "_gjImage", "_tingImage","_clearImage","_cpyyImage"}
    self._outCardStyleVarNames = { "_outCardCB_1", "_outCardCB_2" }
    
    cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/MahjongNew/GameLayer/Image/settingNew.plist")
    for k, _ in pairs(self._switchNames) do
        self:selectMahSwitchStyle(k, true)
    end

    --解散按钮状态
    self._btnDismiss:loadTexture(KW_QUIT_BTN_TEXTUTRE, ccui.TextureResType.plistType)

    self:selectMahBackStyle(CF.settingData:getMahBackStyle())
    self:selectMahFaceStyle(CF.settingData:getMahFaceStyle())
    self:selectMahTableStyle(CF.settingData:getMahTableStyle())

    if self._outCardStyleVarNames then
        local selectIndxe = CF.settingData:getMahOutCardStyle()
        for key,v in pairs(self._outCardStyleVarNames) do
            local chBox = self[v]
            if chBox then
                chBox:setSelected(key == selectIndxe)
            end
        end
    end

    if CF.configData:haveTing() then
        self._tingLogo:setVisible(true)
        self._tingImage:setVisible(true)
    end

    --金币场和包厢场不同退出方式
    self:updateBtnStatus()
    self:setDetailTagActiveTime("TABLE_STYLE")
    self:setDetailTagActiveTime("BACK_TYPE")
end

function SettingView:selectMahBackStyle(style)
    if not self._outCardStyleVarNames then
        return
    end
    for k, v in pairs(self._backStyleVarNames) do
        if self[v] then
            local flagImg = self[v]:getChildByName(KW_SELECT_FLAG)
            flagImg:setTouchEnabled(k == style)
            flagImg:setVisible(k == style)
        end
    end
end

function SettingView:selectMahFaceStyle(style)
    if not self._faceStyleVarNames then
        return
    end
    for k, v in pairs(self._faceStyleVarNames) do
        local flagImg = self[v]:getChildByName(KW_SELECT_FLAG)
        flagImg:setTouchEnabled(k == style)
        flagImg:setVisible(k == style)
    end
end

function SettingView:selectMahTableStyle(style)
    if not self._tableStyleVarNames then
        return
    end
    for k, v in pairs(self._tableStyleVarNames) do
        if self[v] then
            local flagImg = self[v]:getChildByName(KW_SELECT_FLAG)
            flagImg:setTouchEnabled(k == style)
            flagImg:setVisible(k == style)
        end
    end
end

function SettingView:selectMahSwitchStyle(style, isFirst)
    if style then
        local switch = self[self._switchNames[style]]
        if not switch then
            return
        end
        local isEnableTab = {
            function(settingData) return settingData:getSoundPercent() > 0 end,
            function(settingData) return settingData:getMahIsHaveAni() end,
            function(settingData) return settingData:getMusicPercent() > 0 end,
            function(settingData) return not settingData:getMahIsNormalVoice() end,
            function(settingData) return settingData:getMahOutCardStyle() == 1 end,
            function(settingData) return settingData:getMahIsHaveTrace() end,
            function(settingData) return settingData:getHaveTing() end,
            function(settingData) return settingData:getIsClearModel() end,
            function(settingData) return settingData:getVoiceType() end,
        }

        local setData = {
            function(data) CF.settingData:setSoundPercent(data and 100 or 0) end,
            function(data) CF.settingData:setMahIsHaveAni(data) end,
            function(data) CF.settingData:setMusicPercent(data and 100 or 0) end,
            function(data) CF.settingData:setMahIsNormalVoice(not data) end,
            function(data) CF.settingData:setMahOutCardStyle(data and 1 or 2) end,
            function(data) CF.settingData:setMahIsHaveTrace(data) end,
            function(data) CF.settingData:setHaveTing(data) end,
            function(data) CF.settingData:setIsClearModel(data) end,
            function(data) CF.settingData:setVoiceType(data) end,
        }

        local isEnabled = isEnableTab[style](CF.settingData)
        if not isFirst then
            isEnabled = not isEnabled
        end

        if isEnabled then
            if style == 9 then 
                switch:loadTexture(KW_SWITCH_NO_PNG_3, ccui.TextureResType.plistType)
            else
                switch:loadTexture(KW_SWITCH_NO_PNG, ccui.TextureResType.plistType)
            end
        else
            if style == 9 then 
                switch:loadTexture(KW_SWITCH_OFF_PNG_3, ccui.TextureResType.plistType)
            else
                switch:loadTexture(KW_SWITCH_OFF_PNG, ccui.TextureResType.plistType)
            end
        end
        if not isFirst then
            setData[style](isEnabled)
        end
    end
end

--设置牌背
function SettingView:onSelectMahBackStyle(send, eventType)
    local name = send:getName()
    self:settingthrowData(name)
    if self:checkXGProp(name) then
        return
    end
    local style = CF.StringTool.getNumberSuffixByString(name)
    self:selectMahBackStyle(style)
    if XH.lobby:getModule("SkinBundle") then
        XH.lobby:getModule("SkinBundle"):setPropEquipped(XH.XGSJ_PROP_ID.MAH, name == "_KW_IMG_CARD_BACK_6")
    end
    CF.settingData:setMahBackStyle(style)
    CF.settingData:setBackType(BAKC_TYPE[style])
    local cusData = CF.settingData:getDefaultData()
    CF.settingData:dispatchMahjongCfg(cusData)
end

--设置牌面
function SettingView:onSelectMahFaceStyle(send, eventType)
    local name = send:getName()
    local style = CF.StringTool.getNumberSuffixByString(name)
    self:selectMahFaceStyle(style)
    CF.settingData:setMahFaceStyle(style)
    CF.settingData:setWordType(style)
    local cusData = CF.settingData:getDefaultData()
    CF.settingData:dispatchMahjongCfg(cusData)
    self:settingthrowData(name)
end

--设置桌布
function SettingView:onSelectMahTableStyle(send, eventType)
    local name = send:getName()
    self:settingthrowData(name)
    if self:checkXGProp(name) then
        return
    end
    local style = CF.StringTool.getNumberSuffixByString(name)
    self:selectMahTableStyle(style)
    if XH.lobby:getModule("SkinBundle") then
        XH.lobby:getModule("SkinBundle"):setPropEquipped(XH.XGSJ_PROP_ID.TABLE, name == "_KW_IMG_TABLE_BG_7")
    end
    CF.settingData:setMahTableStyle(style)
end

return SettingView