local SetLayer = NG.GAME.gameClass("SetLayer", NG.ViewBase)

local SWITCH_ON_IMG = "newgold_gameset_tc_image_01.png"
local SWITCH_OFF_IMG = "newgold_gameset_tc_image_02.png"

function SetLayer:ctor()
    SetLayer.super.ctor(self)

    self:initView()
end

function SetLayer:getCSBPath()
    return "cocosStudio/GoldNew/Game/GameBase/CSB/Set/SetLayer.csb"
end

function SetLayer:getBindingInfo()
    return {
        --
        ["_KW_BTN_CLOSE"] = {varName = "_closeBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onCloseBtnClicked"},
        ["_KW_IMG_EFFECT_ON_OFF"] = {varName = "_effectOnOff", type = NG.UI_TYPE.IMAGE_TOBUTTON, style = NG.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onEffectOnOffClicked"},
        ["_KW_IMG_MUSIC_ON_OFF"] = {varName = "_musicOnOff", type = NG.UI_TYPE.IMAGE_TOBUTTON, style = NG.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onMusicOnOffClicked"},
        ["_KW_CHECKBOX_LANGUAGE_MAN"] = {varName = "_langManCheck", type = NG.UI_TYPE.CHECKBOX, onSelect = "onLangManChecked"},
        ["_KW_CHECKBOX_LANGUAGE_WOMAN"] = {varName = "_langWomanCheck", type = NG.UI_TYPE.CHECKBOX, onSelect = "onLangWomanChecked"},
        ["_KW_NODE_LANGUAGE"] = {varName = "_langNode"},
    }
end

function SetLayer:initView()
    local musicPercent = NG.GAME.settingData:getMusicPercent()
    if musicPercent > 0 then
        self._musicOnOff:loadTexture(SWITCH_ON_IMG, ccui.TextureResType.plistType)
    else
        self._musicOnOff:loadTexture(SWITCH_OFF_IMG, ccui.TextureResType.plistType)
    end

    local effectPercent = NG.GAME.settingData:getSoundPercent()
    if effectPercent > 0 then
        self._effectOnOff:loadTexture(SWITCH_ON_IMG, ccui.TextureResType.plistType)
    else
        self._effectOnOff:loadTexture(SWITCH_OFF_IMG, ccui.TextureResType.plistType)
    end

    local voiceType = NG.GAME.settingData:getVoiceType()
    self._langManCheck:setSelected(voiceType)
    self._langWomanCheck:setSelected(not voiceType)
end

function SetLayer:onCloseBtnClicked()
    self:close()
end

function SetLayer:onEffectOnOffClicked()
    local effectPercent = NG.GAME.settingData:getSoundPercent()
    if effectPercent > 0 then
        NG.GAME.settingData:setSoundPercent(0)
        self._effectOnOff:loadTexture(SWITCH_OFF_IMG, ccui.TextureResType.plistType)
    else
        NG.GAME.settingData:setSoundPercent(100)
        self._effectOnOff:loadTexture(SWITCH_ON_IMG, ccui.TextureResType.plistType)
    end
end

function SetLayer:onMusicOnOffClicked()
    local musicPercent = NG.GAME.settingData:getMusicPercent()
    if musicPercent > 0 then
        NG.GAME.settingData:setMusicPercent(0)
        self._musicOnOff:loadTexture(SWITCH_OFF_IMG, ccui.TextureResType.plistType)
    else
        NG.GAME.settingData:setMusicPercent(100)
        self._musicOnOff:loadTexture(SWITCH_ON_IMG, ccui.TextureResType.plistType)
    end
end

function SetLayer:onLangManChecked()
    NG.GAME.settingData:setVoiceType(true)
    self._langManCheck:setSelected(true)
    self._langWomanCheck:setSelected(false)
end

function SetLayer:onLangWomanChecked()
    NG.GAME.settingData:setVoiceType(false)
    self._langManCheck:setSelected(false)
    self._langWomanCheck:setSelected(true)
end

function SetLayer:showSelf()
    local parent = display.getRunningScene()
    parent:addChild(self, NG.ZORDER.WINDOW)
end

return SetLayer
