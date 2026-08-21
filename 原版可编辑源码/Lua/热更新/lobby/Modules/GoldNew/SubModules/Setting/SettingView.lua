local SettingView = class("SettingView", XH.Bridge.ViewBase)
local UrlConf = XH.Bridge:require("app.Config.UrlConf")
local LocalConfig = import("...Configs.LocalConfig")
local POP_UI_PATH = LocalConfig.IMG_PATH.POP

local AGREEMENT_TYPE = {
    [1] = "SERVER", -- 用户协议 
    [2] = "PRIVACY" -- 隐私协议
}

local KW_SEX_TYPE = {TYPE_MALE = 0, TYPE_FAMALE = 1}

function SettingView:ctor(param)
    param = param or {}
    self._module = XH.Bridge:getModule(LocalConfig.MP.SET)
    SettingView.super.ctor(self, param)

    self:initUI()
end

function SettingView:getCSBPath()
    return XH.Bridge:getCCSResPath("Setting.csb")
end

function SettingView:getBindingInfo()
    return {
        ["_btnClose"] = {varName = "_btnClose", onTouchEnded = "onTouchEventClose", type = XH.UI_TYPE.BUTTON},
        ["_btnCloseDetail"] = {varName = "_btnCloseDetail", onTouchEnded = "onTouchEventCloseDetail", type = XH.UI_TYPE.BUTTON},
        ["_KW_PANEL_BG"] = {varName = "_panelBG", onTouchEnded = "onTouchEventBG"},
        ["_soundSlider"] = {varName = "_soundSlider", onTouchEnded = "onTouchEventSoundSlider"},
        ["_musicSlider"] = {varName = "_musicSlider", onTouchEnded = "onTouchEventMusicSlider"},
        ["_KW_CHECK_UPDATE"] = {varName = "_btnCheckUpdate", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventCheckUpdate"},
        ["_KW_CHECK_PROTOCOL"] = {varName = "_btnProtocol", onTouchEnded = "onTouchEventProtocol", type = XH.UI_TYPE.BUTTON},
        ["_KW_CHECK_PRIVACY"] = {varName = "_btnTxtPrivacy", onTouchEnded = "onTouchEventPrivacy", type = XH.UI_TYPE.BUTTON},
        ["_KW_CHECK_QUALIFICATION"] = {varName = "_btnQualification", onTouchEnded = "onTouchEventQualification", type = XH.UI_TYPE.BUTTON},
        ["_KW_CHECK_PERSONAL_LIST"] = {varName = "_btnPersonalList", onTouchEnded = "onTouchEventPersonalList", type = XH.UI_TYPE.BUTTON},
        ["_KW_CHECK_SHARE_PERSONAL_LIST"] = {
            varName = "_btnSharePersonalList",
            onTouchEnded = "onTouchEventSharePersonalList",
            type = XH.UI_TYPE.BUTTON
        },
        ["_KW_BTN_MALE"] = {varName = "_btnMale", type = XH.UI_TYPE.CHECKBOX, onSelect = "onMaleClicked"},
        ["_KW_BTN_FEMALE"] = {varName = "_btnFemale", type = XH.UI_TYPE.CHECKBOX, onSelect = "onFemaleClicked"},
        ["_panelVersionDetail"] = {varName = "_panelVersionDetail"},
        ["_panelSound"] = {varName = "_panelSound"},
        ["_panelPrivacy"] = {varName = "_panelPrivacy"},
        ["_txtVerDetail"] = {varName = "_txtVerDetail"},
        ["_btnChangeAccount"] = {varName = "_btnChangeAccount", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onChangeAccountClicked"},
        ["_txtVer"] = {varName = "_txtVer", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onVersionClicked"},
        ["_btnSound"] = {varName = "_btnSound", type = XH.UI_TYPE.IMAGE, onTouchEnded = "onSoundClicked"},
        ["_btnPrivacy"] = {varName = "_btnPrivacy", type = XH.UI_TYPE.IMAGE, onTouchEnded = "onPrivacyClicked"}
    }
end

function SettingView:initUI()
    self._soundSlider:setPercent(XH.Bridge:getModule("Set"):getSoundPercent())
    self._musicSlider:setPercent(XH.Bridge:getModule("Set"):getMusicPercent())

    self:initVoiceTipData()
    self._txtVer:setString(self:getLobbyVersion())
    self._txtVerDetail:setString("当前版本号：" .. self:getLobbyVersion())
    self:onSoundClicked()
end

function SettingView:isFullScreen()
    return true
end

function SettingView:initVoiceTipData()
    self._module:initVoiceType()
    local isVoiceMan = self._module:isVoiceMan()
    self._btnMale:setSelected(isVoiceMan)
    self._btnFemale:setSelected(not isVoiceMan)
end

function SettingView:onTouchEventClose(send, event)
    self:close()
end

function SettingView:onTouchEventCloseDetail(send, event)
    self._panelVersionDetail:setVisible(false)
end

function SettingView:onTouchEventBG(send, event)
    -- self:close()
end

function SettingView:onTouchEventProtocol(send, event)
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

function SettingView:onTouchEventPrivacy(send, event)
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

function SettingView:openUrlByAgreementType(type)
    local targetPlatform = cc.Application:getInstance():getTargetPlatform()
    local AgreementConfig = XH.Bridge:getModule("Set"):getAgreementConfig(XH.areaData:getLobbyID(), type, targetPlatform)
    if AgreementConfig and AgreementConfig.url then
        cc.Application:getInstance():openURL(AgreementConfig.url)
        return true
    end
    return false
end

function SettingView:onTouchEventQualification(send, event)
    XH.Bridge.viewManager:openView("QualificationView")
end

function SettingView:onTouchEventPersonalList(send, event)
    local targetPlatform = cc.Application:getInstance():getTargetPlatform()
    if cc.PLATFORM_OS_ANDROID == targetPlatform then
        cc.Application:getInstance():openURL(UrlConf.URL_PERSONAL_INFORMATION_COLLECTION_LIST)
    else
        cc.Application:getInstance():openURL(UrlConf.URL_PERSONAL_INFORMATION_COLLECTION_LIST_IOS)
    end
end

function SettingView:onTouchEventSharePersonalList(send, event)
    local targetPlatform = cc.Application:getInstance():getTargetPlatform()
    if cc.PLATFORM_OS_ANDROID == targetPlatform then
        cc.Application:getInstance():openURL(UrlConf.URL_THIRD_SHARE_PERSONAL_INFORMATION_COLLECTION_LIST)
    else
        cc.Application:getInstance():openURL(UrlConf.URL_THIRD_SHARE_PERSONAL_INFORMATION_COLLECTION_LIST_IOS)
    end
end

function SettingView:onTouchEventSoundSlider(send, event)
    local soundPercent = send:getPercent()
    XH.Bridge:getModule("Set"):setSoundPercent(soundPercent)
end

function SettingView:onTouchEventMusicSlider(send, event)
    local musicPercent = send:getPercent()
    XH.Bridge:getModule("Set"):setMusicPercent(musicPercent)
end

function SettingView:onMaleClicked(send, event)
    self._sexType = KW_SEX_TYPE.TYPE_MALE
    self._module:setVoiceType(true)
    self:refreshSex()
end

function SettingView:onFemaleClicked(send, event)
    self._sexType = KW_SEX_TYPE.TYPE_FAMALE
    self._module:setVoiceType(false)
    self:refreshSex()
end

function SettingView:onChangeAccountClicked(send, event)
    if XH.isEmbeddedApp() then
        XH.PluginModule.exitActivity()
        return
    end
    XH.playerData:stopVisitorHeart()
    local isShowYouKe = false
    if XH.playerData:getPlayerIsAgent() and XH.areaData:getAgentShowYouKe() then
        isShowYouKe = true
    end
    XH.login:getModule("Login"):clearLoginStates()
    XH.Controller:getInstance():enterLogin(isShowYouKe)
end

function SettingView:onVersionClicked(send, event)
    self._panelVersionDetail:setVisible(true)
end

function SettingView:onSoundClicked(send, event)
    self._panelSound:setVisible(true)
    self._panelPrivacy:setVisible(false)
    self:updateLeftPageState(self._btnSound)
end

function SettingView:onPrivacyClicked(send, event)
    self._panelSound:setVisible(false)
    self._panelPrivacy:setVisible(true)
    self:updateLeftPageState(self._btnPrivacy)
end

function SettingView:updateLeftPageState(selectItem)
    for _, v in ipairs({self._btnSound, self._btnPrivacy}) do
        local isSelected = selectItem == v
        v:setTouchEnabled(not isSelected)
        self:updateItemImage(v, "_imgBg", isSelected and "Btn_tc_xz_di1.png" or "Btn_tc_xz_di2.png")
        XH.UITool.setTextColor(v, "_txtName", isSelected and cc.c3b(0x9d, 0x46, 0) or cc.c3b(0x99, 0x83, 0x6e))
    end
end

function SettingView:updateItemImage(item, childName, imgName)
    if item then
        if childName then
            XH.UITool.loadTexture(item, childName, POP_UI_PATH .. imgName, ccui.TextureResType.plistType)
        else
            if tolua.type(item) == "ccui.Layout" then
                item:setBackGroundImage(POP_UI_PATH .. imgName, ccui.TextureResType.plistType)
            else
                item:loadTexture(POP_UI_PATH .. imgName, ccui.TextureResType.plistType)
            end
        end
    end
end

function SettingView:refreshSex()
    if self._btnMale then
        self._btnMale:setSelected(self._sexType == KW_SEX_TYPE.TYPE_MALE)
    end
    if self._btnFemale then
        self._btnFemale:setSelected(self._sexType == KW_SEX_TYPE.TYPE_FAMALE)
    end
end

function SettingView:onTouchEventCheckUpdate(send, event)
    XH.Bridge:getModule("Set"):startFourceUpdate()
    self:close()
end

function SettingView:getLobbyVersion(send, event)
    local manifestPath = un.FileSystem.getWritePath() .. un.const.HotFixPath .. "harbor/Lobby/project.manifest"
    local localManifest = un.hotfix.Manifest.new(manifestPath)
    local curChannel = ""
    local curVersion = ""
    if localManifest:isLoaded() then
        curChannel = localManifest:getChannel()
        curVersion = localManifest:getVersion()
    end
    return curVersion
end

return SettingView
