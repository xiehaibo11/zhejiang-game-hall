local SetView = class("SetView", XH.ViewBase)
local UrlConf = require("app.Config.UrlConf")

local AGREEMENT_TYPE = {
    [1] = "SERVER",  --用户协议 
    [2] = "PRIVACY"  --隐私协议
}

local KW_SEX_TYPE = {
    TYPE_MALE = 0,
    TYPE_FAMALE = 1,
}

function SetView:ctor(param)
    param = param or {}
    SetView.super.ctor(self,param)
    
    self:initUI()
end

function SetView:getCSBPath()
    return "cocosStudio/hall/CSB/SettingLayer.csb"
end

function SetView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = {varName="_btnClose", onTouchEnded = "onTouchEventClose", type = XH.UI_TYPE.BUTTON},
        ["_KW_PANEL_BG"] = {varName="_panelBG",onTouchEnded = "onTouchEventBG"},
        ["_KW_PROGRESSBAR_EFFECT"] = {varName="_soundSlider",onTouchEnded = "onTouchEventSoundSlider"},
        ["_KW_PROGRESSBAR_MUSIC"] = {varName="_musicSlider",onTouchEnded = "onTouchEventMusicSlider"},
        ["_KW_PROGRESSBAR_VOICE"] = {varName="_voiceSlider",onTouchEnded = "onTouchEventVoiceSlider"},
        ["_KW_VOICE"] = {varName="_voiceName"},
        ["_KW_CHECK_UPDATE"] = {varName="_btnCheckUpdate", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventCheckUpdate"},
        ["_KW_CHECK_PROTOCOL"] = {varName="_btnProtocol", onTouchEnded = "onTouchEventProtocol", type = XH.UI_TYPE.BUTTON},
        ["_KW_CHECK_PRIVACY"] = {varName="_btnPrivacy", onTouchEnded = "onTouchEventPrivacy", type = XH.UI_TYPE.BUTTON},
        ["_KW_CHECK_QUALIFICATION"] = {varName="_btnQualification", onTouchEnded = "onTouchEventQualification", type = XH.UI_TYPE.BUTTON},
        ["_KW_CHECK_PERSONAL_LIST"] = {varName="_btnPersonalList", onTouchEnded = "onTouchEventPersonalList", type = XH.UI_TYPE.BUTTON},
        ["_KW_CHECK_SHARE_PERSONAL_LIST"] = {varName="_btnSharePersonalList", onTouchEnded = "onTouchEventSharePersonalList", type = XH.UI_TYPE.BUTTON},
 
        ["_KW_PANEL_MALE"] = { varName = "_panelMale", type = XH.UI_TYPE.LAYOUT, onTouchEnded = "onMaleClicked" },
        ["_KW_PANEL_FEMALE"] = { varName = "_panelFemale", type = XH.UI_TYPE.LAYOUT, onTouchEnded = "onFemaleClicked" },
        ["_KW_BTN_MALE"] = { varName = "_btnMale", type = XH.UI_TYPE.BUTTON,onTouchEnded = "onMaleClicked" },
        ["_KW_BTN_FEMALE"] = { varName = "_btnFemale", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onFemaleClicked" },
        ["_KW_PANEL_SEXVOICE"] = {varName = "_panelVoice"},
    }
end

function SetView:initUI()
    self._soundSlider:setPercent(XH.lobby:getModule("Set"):getSoundPercent())
    self._musicSlider:setPercent(XH.lobby:getModule("Set"):getMusicPercent())
    self._voiceName:setVisible(device.platform == "android")
    self._voiceSlider:setVisible(device.platform == "android")
    self._voiceSlider:setPercent(XH.lobby:getModule("Set"):getVoicePercent())
    self:initVoiceTipData()
end

function SetView:initVoiceTipData()
    self:initVoiceType()
    self:updataVoicePos()
    self._btnMale:setSelected(XH.lobby:getModule("Set"):getVoiceType() == true)
    self._btnFemale:setSelected(XH.lobby:getModule("Set"):getVoiceType() == false)
end

function SetView:initVoiceType()
    --第一次会根据你本身的性别来设置
    local FIRSTGETSEX = "FIRST_GETSEX" ..  XH.areaData:getAreaID()
    if not cc.UserDefault:getInstance():getBoolForKey(FIRSTGETSEX, false) then
        cc.UserDefault:getInstance():setBoolForKey(FIRSTGETSEX, true)
        if XH.playerData:getSex() == 1 then 
            XH.lobby:getModule("Set"):setVoiceType(true)
        else
            XH.lobby:getModule("Set"):setVoiceType(false)
        end    
     end
end

function SetView:updataVoicePos()
    if device.platform == "ios" or device.platform == "windows" then
        if self._panelVoice and self._voiceSlider then 
            self._panelVoice:setPositionY(self._voiceSlider:getPositionY())
        end     
    end
end

function SetView:onTouchEventClose(send, event)
    self:close()
end

function SetView:onTouchEventBG(send, event)
    self:close()
end

function SetView:onTouchEventProtocol(send, event)
    local targetPlatform = cc.Application:getInstance():getTargetPlatform()
    if self:openUrlByAgreementType(AGREEMENT_TYPE[1]) then 
        return 
    end
    if cc.PLATFORM_OS_ANDROID == targetPlatform then
        cc.Application:getInstance():openURL(UrlConf.URL_USER_SERVICE)
    else
        cc.Application:getInstance():openURL(UrlConf.URL_USER_SERVICE_IOS)
    end
end

function SetView:onTouchEventPrivacy(send, event)
    local targetPlatform = cc.Application:getInstance():getTargetPlatform()
    if self:openUrlByAgreementType(AGREEMENT_TYPE[2]) then 
        return 
    end
    if cc.PLATFORM_OS_ANDROID == targetPlatform then
        cc.Application:getInstance():openURL(UrlConf.URL_PRIVACY_PROTOCOL)
    else
        cc.Application:getInstance():openURL(UrlConf.URL_PRIVACY_PROTOCOL_IOS)
    end
end

function SetView:openUrlByAgreementType(type)
    local targetPlatform = cc.Application:getInstance():getTargetPlatform()
    local AgreementConfig = XH.lobby:getModule("Set"):getAgreementConfig(XH.areaData:getLobbyID(),type,targetPlatform)
    if AgreementConfig and AgreementConfig.url then 
        cc.Application:getInstance():openURL(AgreementConfig.url)
        return true
    end
    return false
end

function SetView:onTouchEventQualification(send,event)
    XH.viewManager:openView("QualificationView")
end

function SetView:onTouchEventPersonalList(send, event)
    local targetPlatform = cc.Application:getInstance():getTargetPlatform()
    if cc.PLATFORM_OS_ANDROID == targetPlatform then
        cc.Application:getInstance():openURL(UrlConf.URL_PERSONAL_INFORMATION_COLLECTION_LIST)
    else
        cc.Application:getInstance():openURL(UrlConf.URL_PERSONAL_INFORMATION_COLLECTION_LIST_IOS)
    end
end

function SetView:onTouchEventSharePersonalList(send, event)
    local targetPlatform = cc.Application:getInstance():getTargetPlatform()
    if cc.PLATFORM_OS_ANDROID == targetPlatform then
        cc.Application:getInstance():openURL(UrlConf.URL_THIRD_SHARE_PERSONAL_INFORMATION_COLLECTION_LIST)
    else
        cc.Application:getInstance():openURL(UrlConf.URL_THIRD_SHARE_PERSONAL_INFORMATION_COLLECTION_LIST_IOS)
    end
end

function SetView:onTouchEventSoundSlider(send, event)
    local soundPercent = send:getPercent()
    XH.lobby:getModule("Set"):setSoundPercent(soundPercent)
end

function SetView:onTouchEventMusicSlider(send, event)
    local musicPercent = send:getPercent()
    XH.lobby:getModule("Set"):setMusicPercent(musicPercent)
end

function SetView:onTouchEventVoiceSlider(send, event)
    local voicePercent = send:getPercent()
    XH.lobby:getModule("Set"):setVoicePercent(voicePercent)
end

function SetView:onMaleClicked(send, event)
    self._sexType = KW_SEX_TYPE.TYPE_MALE
    XH.lobby:getModule("Set"):setVoiceType(true)
    self:refreshSex()
end

function SetView:onFemaleClicked(sned, event)
    self._sexType = KW_SEX_TYPE.TYPE_FAMALE
    XH.lobby:getModule("Set"):setVoiceType(false)
    self:refreshSex()
end


function SetView:refreshSex()
    if self._btnMale then
        self._btnMale:setSelected(self._sexType == KW_SEX_TYPE.TYPE_MALE)
    end
    if self._btnFemale then
        self._btnFemale:setSelected(self._sexType == KW_SEX_TYPE.TYPE_FAMALE)
    end
end


function SetView:onTouchEventCheckUpdate(send, event)
    XH.lobby:getModule("Set"):startFourceUpdate()
    self:close()
end


return SetView
�