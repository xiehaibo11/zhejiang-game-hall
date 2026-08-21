local SettingView = CF.gameClass("SettingView", CF.ViewBase)
local GlobalCfg = require("app.Config.GlobalConfig")
local DEBUG = GlobalCfg.IsDebug

function SettingView:ctor(param)
    param = param or {}
    SettingView.super.ctor(self, param)

    self:initUI()
end

function SettingView:getCSBPath()
    return CF.gameResourceRootPath .. "DarkShuangKou/GameLayer/CSB/Setting.csb"
end

function SettingView:getBindingInfo()
    return {
        ["_KW_PANAEL_BG"] = {varName = "_settingBg", onTouchEnded = "onBtnClose"},
        ["_KW_DEBUG_PANEL"] = {varName = "_debugPanel"},
        ["_KW_CHECK_BOX_1"] = {varName = "_checkbox1", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnCheckBox1"},
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnClose"},
        ["_KW_IMG_YX_1"] = {varName = "_yxImage", type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouched"},
        ["_KW_IMG_YY_3"] = {varName = "_yyImage", type = CF.UI_TYPE.IMAGE_TOBUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouched"}
    }
end

function SettingView:getProxyEvents()
    return {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_TOTAL_WINLOST", callBack = "onBtnClose"}
    }
end

function SettingView:initUI()
    self:setUI()
    self:initDebugUI()
end

function SettingView:initDebugUI()
    self._debugPanel:setVisible(DEBUG)
    local x = cc.UserDefault:getInstance():getBoolForKey("KW_DARKSHUANGKOU_SET_CARD", true)
    self._checkbox1:setSelected(not x)

    local editBox = ccui.EditBox:create(cc.size(210, 55), "tea_house_createroom_textfield.png")
    if editBox then
        editBox:setName("_EDIT_SPEED")
        editBox:setAnchorPoint(cc.p(0.5, 0.5))
        editBox:setPosition(cc.p(620, 162))
        editBox:setFontSize(30)
        editBox:setFontColor(cc.c3b(0, 0, 0))
        editBox:setInputMode(cc.EDITBOX_INPUT_MODE_ANY)
        editBox:setText(cc.Director:getInstance():getScheduler():getTimeScale())
        editBox:setContentSize(100, 35)
        editBox:registerScriptEditBoxHandler(
            function(eventName)
                if eventName == "ended" or eventName == "return" then
                    local speed = tonumber(editBox:getText()) or 1
                    cc.Director:getInstance():getScheduler():setTimeScale(speed)
                end
            end
        )
        self._debugPanel:addChild(editBox)
    end
end

-- 设置声音,音效....
function SettingView:onTouched(send, eventType)
    if send:getName() == "_KW_IMG_YX_1" then
        local soundVal = CF.settingData:getSoundPercent()
        CF.settingData:setSoundPercent(soundVal > 0 and 0 or 100)
    elseif send:getName() == "_KW_IMG_YY_3" then
        local musicVal = CF.settingData:getMusicPercent()
        CF.settingData:setMusicPercent(musicVal > 0 and 0 or 100)
    end
    self:setUI()
end

function SettingView:setUI()
    local musicVal = CF.settingData:getMusicPercent()
    if musicVal > 0 then
        self._yyImage:loadTexture("DarkShuangKouPop_Btn_on.png", ccui.TextureResType.plistType)
    else
        self._yyImage:loadTexture("DarkShuangKouPop_Btn_off.png", ccui.TextureResType.plistType)
    end
    local soundVal = CF.settingData:getSoundPercent()
    if soundVal > 0 then
        self._yxImage:loadTexture("DarkShuangKouPop_Btn_on.png", ccui.TextureResType.plistType)
    else
        self._yxImage:loadTexture("DarkShuangKouPop_Btn_off.png", ccui.TextureResType.plistType)
    end
end

function SettingView:showSelf()
    local parent = display.getRunningScene()
    parent:addChild(self, CF.ZORDER.WINDOW)
end

-- 关闭按钮
function SettingView:onBtnClose(send, eventType)
    self:close()
end

function SettingView:onBtnCheckBox1(send, eventType)
    if self._checkbox1:isSelected() then
        cc.UserDefault:getInstance():setBoolForKey("KW_DARKSHUANGKOU_SET_CARD", false)
    else
        cc.UserDefault:getInstance():setBoolForKey("KW_DARKSHUANGKOU_SET_CARD", true)
    end
end

return SettingView
K