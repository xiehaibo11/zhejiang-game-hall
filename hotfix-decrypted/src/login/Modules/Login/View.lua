local LoginView = class("LoginView", XH.ViewBase)
local LoginConfig = require("login.Modules.Login.Config")
local ConfigurationDefine = require("lobby.Modules.Configuration.Define")

local UrlConf = require("app.Config.UrlConf")

local AGREEMENT_TYPE = {
    [1] = "SERVER",  --用户协议  服务协议
    [2] = "PARENT_ALGUIDANCE", -- 家长监护
    [3] = "PRIVACY"  --隐私协议
}

function LoginView:ctor(param)
    local tipParam = param or {}
    LoginView.super.ctor(self, tipParam)

    self._isShowYouKe = tipParam.isShowYouKe or false
    self.eventProxy = nil
    self.sdkProxy = nil

    self:initUI()
    -- 隐私策略新增
    self:initYscl()
    self._viewStartTime = os.time() or -1
    XH.sdkManager:callFunction("wechat_reset_pay_params")
    XH.lobby:getModule("Lobby"):openAniTopView()
    XH.lobby:getModule("Configuration"):reqConfigDataMd5(ConfigurationDefine.Config.LOGIN)
    if XH.isEmbeddedApp() then
        self:hideIcons()
        XH.login:getModule("Login"):reqPluginLogin()
    end
end

function LoginView:getCSBPath()
    return "cocosStudio/hall/CSB/LoginScene.csb"
end

function LoginView:getBindingInfo()
    return {
        ["_KW_PANEL_BG"] = { varName = "_panelBG" },
        ["_KW_PANEL_BG_SPEC"] = { varName = "_panelBGSpec" },
        ["_KW_NODE_POS_1_1"] = { varName = "_nodePos11" },
        ["_KW_NODE_POS_2_1"] = { varName = "_nodePos21" },
        ["_KW_NODE_POS_2_2"] = { varName = "_nodePos22" },
        ["_KW_NODE_POS_3_1"] = { varName = "_nodePos31" },
        ["_KW_NODE_POS_3_2"] = { varName = "_nodePos32" },
        ["_KW_NODE_POS_3_3"] = { varName = "_nodePos33" },
        ["_KW_NODE_POS_4_1"] = { varName = "_nodePos41" },
        ["_KW_NODE_POS_4_2"] = { varName = "_nodePos42" },
        ["_KW_NODE_POS_4_3"] = { varName = "_nodePos43" },
        ["_KW_NODE_POS_4_4"] = { varName = "_nodePos44" },
        ["_KW_BTN_TOURIST_LOGIN"] = { varName = "_touristBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouristLoginClicked" },
        ["_KW_BTN_WEIXIN_LOGIN"] = { varName = "_wChatBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onWChatLoginClicked" },
        ["_KW_BTN_PHONE_LOGIN"] = { varName = "_phoneBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onPhoneLoginClicked" },
        ["_KW_BTN_THIRD_LOGIN"] = { varName = "_thirdBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onThirdLoginClicked" },
        ["_KW_BTN_GEYAN_LOGIN"] = { varName = "_geYanBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onGeYanLoginClicked" },
        ["_KW_BTN_APPLE_LOGIN"] = { varName = "_appleBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onAppleLoginClicked" },
        ["_KW_BTN_LOGIN"] = { varName = "_loginBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onLoginClicked" },
        ["_KWA_LAST_LOGIN_TIPS"] = { varName = "_lastLoginTips",},
        ["_KW_BTN_LOGIN_CHANGE"] = { varName = "_loginChangeBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onLoginChangeClicked" },
        ["_KW_IMG_GEYAN_LOGIN"] = { varName = "_geYanImg" },
        ["_KW_IMG_PROJ_LOGO"] = { varName = "_projLogoImg" },
        ["_KW_IMG_USER_SERVICE"] = { varName = "_userService", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onUserServiceClicked" },
        ["_KW_IMG_USER_PARTENS"] = { varName = "_userPartens", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onUserParentClicked" },
        ["_KW_IMG_PRIVACY_PROTOCOL"] = { varName = "_privacyProtocol", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onPrivacyProtocolClicked" },
        ["_KW_CHECK_YI_YUEDU"] = { varName = "_checkYueDu", onTouchEnded = "onYueDuClicked" },
        ["_KW_PANEL_THIRD_MASK"] = { varName = "_thirdMask", type = XH.UI_TYPE.PANEL_TOBUTTON, onTouchEnded = "onThridMaskClicked" },
        ["_KW_BTN_WX"] = { varName = "_wxBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onWChatLoginClicked" },
        ["_KW_CHECK_YI_YUEDU_LIGHT"] = { varName = "_checkYueDuLight" },
        ["_KW_IMG_AGE_TIP"] = { varName = "_imgAge", type = XH.UI_TYPE.IMAGE_TOBUTTON,onTouchEnded = "onAgetipClicked"},
        --定位相关
        ["_KW_PANEL_GPS"] = { varName = "_panelGps"},
        ["_KW_IMG_BG"] = { varName = "_imgBgGps", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onShowChooseArea" },
        ["_KW_TEXT_AREA"] = { varName = "_textArea"},
        ["_KW_TEXT"] = { varName = "_text"},
        ["_KW_IMG_LINE"] = { varName = "_imgLine"},
        ["_KW_PANEL_START_1"] = { varName = "_panelStartPoint1"},
        ["_KW_PANEL_START_2"] = { varName = "_panelStartPoint2"},
        ["_KW_PANEL_START_3"] = { varName = "_panelStartPoint3"},
        ["_KW_PANEL_TEXT"] = { varName = "_panelText"},
        ["_KW_PANEL_IMAGE"] = { varName = "_panelImage"},   

        ["_KW_IMAGE_CHANGE_SRS"] = { varName = "_imgChangeSrs", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onChangeSrs"},
        ["_KW_LOGIN_SERVICE"] = { varName = "_imgTmpCusService", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onOpenTempService"},
        ["_KW_TEXT_TIP_AND"] = { varName = "_textand"},   
        ["_KW_TEXT_TIP_IOS"] = { varName = "_textios"},   
        -- cps控制浙江游戏大厅的显隐性
        ["_KW_IMG_LOGIN_LOGO"] = {varName = "_loginLogo"},
        ["_KW_LOGIN_IMG_BG"] = {varName = "_loginImg"},
        ["_KW_IMG_CAR_LOGO"] = {varName = "_carloginLogo"},

        --外省竞品包 全国区
        ["_KW_PANEL_GPS_COUNTRY"] = {varName = "_loginCountry"},
        ["_KW_BTN_HM_WX_LOGIN"] = {varName = "_KW_BTN_HM_WX_LOGIN", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onHMWChatLoginClicked"},
    }
end

function LoginView:getProxyEvents()
    return {
        { module = XH.areaData, eventKeyName = "EVENT_LOBBY_CHANGED", callBack = "onLobbyChanged" },
        { module = XH.sdkManager, eventKeyName = "EVENT_LOGIN_CALLBACK", callBack = "onCheckInstallWeChatCallback" },
    }
end

function LoginView:initYscl()
    self:initYueDuCheckSelectedState()
    self:showYueDuButtonLightAnim()
end

function LoginView:showLoginStyle()
    if  XH.login:getModule("LoginMethod") then
        local style = XH.login:getModule("LoginMethod"):checkShowNewLoginStyle()
        if type(style) ~= "boolean" then return end
        self._panelBG:setVisible(not style)
        self._panelBGSpec:setVisible(style)
        if style then 
            local lastLoginType = XH.login:getModule("LoginMethod"):getLastLoginType()
            if type(lastLoginType) ~= "number" then return end
            self._loginChangeBtn:setVisible(lastLoginType ~= 0)
            self._lastLoginTips:setVisible(lastLoginType ~= 0)
            -- 处理相关展示
            if lastLoginType ~= 0 then
                local weixinIcon = XH.UITool.seekNodeByName(self._lastLoginTips, "_KWA_ICON_WEIXIN")
                if weixinIcon then
                    weixinIcon:setVisible(lastLoginType == 1)
                end
                local phoneIcon = XH.UITool.seekNodeByName(self._lastLoginTips, "_KWA_ICON_PHONE")
                if phoneIcon then
                    phoneIcon:setVisible(lastLoginType == 2 or lastLoginType == 4)
                end
                local appleIcon = XH.UITool.seekNodeByName(self._lastLoginTips, "_KWA_ICON_APPLE")
                if appleIcon then
                    appleIcon:setVisible(lastLoginType == 3)
                end
                self:setQxTips()
            else
                local sessionInfo = XH.loginData:getSessionLoginInfo()
                if not sessionInfo then
                    XH.viewManager:openView("LoginMethodView")
                end
            end
        end
    end
end

function LoginView:initUI()
    local touristBtn = self._touristBtn
    local wChatBtn = self._wChatBtn
    local phoneBtn = self._phoneBtn
    local geYanBtn = self._geYanBtn
    local appleBtn = self._appleBtn
    local projLogoImg = self._projLogoImg
    self:hideAllBtn()
    local isSupportPhoneLogin = XH.areaData:isSupportPhoneLogin()
    self:flushTextUI()
    if projLogoImg then
        if device.platform == "ios" then
            projLogoImg:setVisible(false)
        else
            projLogoImg:setVisible(true)
        end
    end
    local btns = {}
    if device.platform == "windows" then
        if touristBtn then
            touristBtn:setVisible(true)
        end
    else
        if touristBtn then
            touristBtn:setVisible(self._isShowYouKe)
        end
    end
    if geYanBtn then
        geYanBtn:setVisible(isSupportPhoneLogin)
        if isSupportPhoneLogin then
            table.insert(btns, geYanBtn)
        end
    end
    if phoneBtn then
        phoneBtn:setVisible(true)
        table.insert(btns, phoneBtn)
    end
    if wChatBtn and XH.sdkManager:isInstallWeChat() then
        wChatBtn:setVisible(true)
        table.insert(btns, wChatBtn)
    end
    if appleBtn and device.platform == "ios" and XH.SysTool:CompareToBundleVersion("1.3.13") then
        appleBtn:setVisible(true)
        table.insert(btns, appleBtn)
    end
    if self._KW_BTN_HM_WX_LOGIN and LoginConfig.HMLogin[XH.areaData:getAreaID()] and (string.match(un.Device.getDeviceName(), "HUAWEI") or string.match(un.Device.getDeviceName(), "huawei")) then
        self._KW_BTN_HM_WX_LOGIN:setVisible(true)
        table.insert(btns, self._KW_BTN_HM_WX_LOGIN)
    end
    self:refreshBtns(btns)
    if XH.areaData:getAreaName() then
        self:flushGpsUI(XH.areaData:getAreaName())
    end

    local lobbyid = XH.areaData:getLobbyID()
    if lobbyid == XH.LOBBY_ID.QINGTIAN 
    or lobbyid == XH.LOBBY_ID.LISHUI 
    or lobbyid == XH.LOBBY_ID.WENZHOU 
    or lobbyid == XH.LOBBY_ID.SHUKE then
        self._imgChangeSrs:setVisible(true)
        self:flushSrsStateUI()
    else
        self._imgChangeSrs:setVisible(false)
    end
    -- 刷新针对特殊渠道的UI
    self:updateChannelUI()

    if not self._checkSpine then
        local aniPath = "animation/Lobby/Base/shoudianji/"
        local params = {path = aniPath, tex = "ShouDianJi.json", ske = "ShouDianJi.atlas", armatureName = "ShouDianJi", scale=1}
        local spineNode = display.playDargonBonesSpine(params)
        if spineNode then
            -- local size = cc.Director:getInstance():getWinSize()
            spineNode:setPosition(50, 40)
            self._checkYueDu:addChild(spineNode)
            self._checkSpine = spineNode
        end
    end

    if string.match(un.Device.getDeviceName(), "HUAWEI") or string.match(un.Device.getDeviceName(), "huawei") then
        --
    else
        self:showLoginStyle()
    end
end

function LoginView:updateChannelUI( )
    if XH.ChannelTool.checkIsCPSChannel() then
        self._panelGps:setVisible(false)
        self._loginLogo:setVisible(false)
        local imgName = XH.ChannelTool.getCPSHotupdateImg()
        if imgName and imgName ~= "" then 
            self._loginImg:loadTexture(imgName, ccui.TextureResType.localType) 
        end
    elseif XH.ChannelTool.checkIsWaishengChannel() then 
        self._loginLogo:setVisible(false)
        self._loginCountry:setVisible(true)
        self._panelGps:setVisible(false)
    elseif XH.ChannelTool.checkIsZJQuDaoChannel() then
        self._loginLogo:setVisible(false)
        self._panelGps:setVisible(false)
    elseif XH.ChannelTool.checkIsECarChannel() then
        self._loginLogo:setVisible(false)
        self._panelGps:setVisible(false)
    end
end

function LoginView:flushTextUI()
    local textand = "浙网文[2015]0486-205号   登记号:2017SR496171   ICP证号:浙B2-20170498   批文号:新广出审[2017]9754号\n出版文号:ISBN 978-7-498-00334-8   著作权人:杭州边锋软件技术有限公司   出版单位:杭州边锋网络技术有限公司\n适龄提醒：本网络游戏适合年满18周岁以上的用户使用，为了您的健康，请您合理控制游戏时间。"
    local textios = "浙网文[2015]0486-205号   登记号:2017SR496171   ICP证号:浙B2-20201044   批文号:新广出审[2017]9754号\n出版文号:ISBN 978-7-498-00334-8   著作权人:杭州边锋软件技术有限公司   出版单位:杭州边锋网络技术有限公司\n适龄提醒：本网络游戏适合年满18周岁以上的用户使用，为了您的健康，请您合理控制游戏时间。"
    local targetPlatform = cc.Application:getInstance():getTargetPlatform()
    if cc.PLATFORM_OS_ANDROID == targetPlatform or device.platform == "windows" then
        self._textand:setString(textand)
        local finalStr = self:refreshTextAgreement(self._textand:getString())
        if finalStr then
            self._textand:setString(finalStr) 
        end
        self._textand:setVisible(true)
    else
        self._textios:setString(textios)
        self._textios:setVisible(true)
    end
end 

function LoginView:flushSrsStateUI()
    local isAbroadSrs = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_DATA_IS_ABROAD_SRS, false)
    if isAbroadSrs then
        self._imgChangeSrs:loadTexture("login_change_china_srs.png", ccui.TextureResType.plistType)
    else
        self._imgChangeSrs:loadTexture("login_change_abroad_srs.png", ccui.TextureResType.plistType)
    end
end

function LoginView:flushGpsUI(areaName)
    if string.len(areaName) <= 6 then
        --两个字，丽水，乐清，瑞安等
        self._panelText:setPosition(self._panelStartPoint3:getPositionX(), self._panelStartPoint3:getPositionY())
    elseif string.len(areaName) > 6 and string.len(areaName) < 12 then
        --带括号的3个字，温州(茶)等
        self._panelText:setPosition(self._panelStartPoint2:getPositionX(), self._panelStartPoint2:getPositionY())
    else
        --带括号的4个字，杭州(宝宝)
        self._panelText:setPosition(self._panelStartPoint1:getPositionX(), self._panelStartPoint1:getPositionY())
    end
    self._textArea:setText(areaName)
    self._imgLine:setContentSize(self._textArea:getContentSize().width, self._imgLine:getContentSize().height)
    local tempWidth = self._text:getContentSize().width + self._textArea:getContentSize().width
    self._panelImage:setPosition(self._panelText:getPositionX() + tempWidth - 80, self._panelImage:getPositionY())
    self._panelGps:setVisible(true)
end

function LoginView:refreshBtns(btns)
    local btnCount = #btns
    for i = 1, btnCount do
        local nodePos = self["_nodePos" .. btnCount .. i]
        if btns[i] ~= nil and nodePos ~= nil then
            btns[i]:setPositionX(nodePos:getPositionX())
        end
    end
end

function LoginView:onYueDuClicked(send, eventType)
    local checkYueDu = self._checkYueDu
    if not checkYueDu then
        return
    end
    local isEnableLogin = self._checkYueDu:isSelected()
    if device.platform == "android" and XH.SysTool:GetBundleVersion() <= "1.0.9" then
        isEnableLogin = not self._checkYueDu:isSelected()
    end
    if self._checkSpine then
        self._checkSpine:setVisible(not isEnableLogin)
    end
    if isEnableLogin then
        if device.platform == "android" and not XH.login:getModule("Login"):getSDKInitState() then
            XH.login:getModule("Login"):setSDKInitState(true)
            if XH.SysTool:GetBundleVersion() >= "1.0.3" then
                XH.ThirdDefine.INIT_SDK_FUNC("bfdata_need_permission")
            end
            -- if not XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_WRITE_EXTERNAL_STORAGE_PERMISSION_STATE, false) then
            --     local size = cc.Director:getInstance():getWinSize()
            --     XH.TipTool.showToast("储存权限：用于玩家信息的本地储存", 2, cc.p(size.width/2,size.height - 80))
            --     XH.SysTool.performDelayOnce(function()
            --         XH.sdkManager:callFunction("user_initiative")
            --         local args = {
            --             ["0"] = XH.sdkManager.AndroidPermission.WRITE_EXTERNAL_STORAGE,
            --         }
            --         XH.sdkManager:setCurrnetCheckPermission(XH.sdkManager.AndroidPermission.WRITE_EXTERNAL_STORAGE)
            --         XH.sdkManager:callFunctionWithMap("add_permission",args)
            --     end, 0.1)
            -- end
            if XH.SysTool:GetBundleVersion() >= "1.1.2"  then
                local obj = un.Encryption:new()
                obj:buglyInit()
            end
            -- XH.SysTool.performDelayOnce(function()
            --     local value = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_PERMISSION_TIP_SHOW, 0, {})
            --     if value == 0 then
            --         XH.viewManager:openView("PermissionTipView", nil, "应用列表：", "用于为您提供微信登录，查看是否安装微信")
            --         XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_PERMISSION_TIP_SHOW, 1, {})
            --     end
            -- end, 1)
        end

        --隐私权限相关修改，将推送初始化延后
        if device.platform == "ios" and XH.SysTool:CompareToBundleVersion("1.3.10") then
            XH.sdkManager:xhCallOCFunc("", "gt_regist_notify_privacy")
            XH.sdkManager:xhCallOCFunc("", "request_att_permission")
        end
    end
    local conventionData = {}
    conventionData.label = isEnableLogin==true and "勾选" or "不勾选"
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.LOGIN_SELECTED, conventionData, {user_ip=un.Device.getIp()})
    self:showYueDuButtonLightAnim()
    if isEnableLogin then
        XH.NewThrowDataManager:AnalyseStartData("勾选协议")
    end
end

function LoginView:onThridMaskClicked(send, eventType)
    if self._thirdMask then
        self._thirdMask:setVisible(false)
    end
end

function LoginView:isYueDuCheckSelected()
    local isSelected = self._checkYueDu:isSelected()
    return isSelected
end

function LoginView:checkIsCanLogin(from, send)
    if not self._checkYueDu:isSelected()then
        -- XH.TipTool.showToast("请阅读并同意《用户协议》和《隐私政策》")
        local funcMap = {
            youke=self.onTouristLoginClicked,
            wechat=self.onWChatLoginClicked,
            phone=self.onPhoneLoginClicked,
            third=self.onThirdLoginClicked,
            geyan=self.onGeYanLoginClicked,
            apple=self.onAppleLoginClicked,
            hmwechat=self.onHMWChatLoginClicked,
        }
        XH.viewManager:openView("PermissionSmallTipView", nil, {
            onOkClicked = function() 
                self._checkYueDu:setSelected(true)
                self:onYueDuClicked()
                if self._checkSpine then
                    self._checkSpine:setVisible(false)
                end
                XH.SysTool.performDelayOnce(function()
                    funcMap[from](self, send)
                end, 0.5)
            end,
            onHYXYClicked = function() self:onUserServiceClicked() end,
            onJZJHGCClicked = function() self:onUserParentClicked() end,
            onYSZCClicked = function() self:onPrivacyProtocolClicked() end,
        })
        return false
    end
    return true
end

-- 是否要选中阅读的勾选按钮
-- 当session登录时可以选中，其他时候都需要不选中
function LoginView:isNeedSelectYueDuCheck()
    local pathFile = cc.FileUtils:getInstance():getWritablePath() .. "SessionLoginData_" .. XH.areaData:getLobbyID() .. ".dat"
    if cc.FileUtils:getInstance():isFileExist(pathFile) then
        return true
    end
    return false
end

function LoginView:initYueDuCheckSelectedState()
    local isNeedSelect = self:isNeedSelectYueDuCheck()
    self._checkYueDu:setSelected(isNeedSelect)
    if self._checkSpine then
        self._checkSpine:setVisible(not isNeedSelect)
    end
    if isNeedSelect then
        self:setQxTips()
    end
end

--游客登陆
function LoginView:onTouristLoginClicked(send, eventType)
    self:loginRecoedClick("游客登录")
    if not self:checkIsCanLogin("youke", send) then
        return
    end
    if device.platform == "android" and XH.loginData:getLobbyID() == 0 then
        XH.viewManager:openView("ChooseAreaView")
    else
        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_RN_TOURIST_LOGIN, false)
        XH.login:getModule("Login"):reqTouristLogin()
    end
    self:recordLoginViewData(os.time(),send:getName())
end

function LoginView:onHMWChatLoginClicked(send, eventType)
    self:loginRecoedClick("鸿蒙微信登录")
    if not self:checkIsCanLogin("hmwechat", send) then
        return
    end
    XH.login:getModule("Login"):reqGenerateTempUUID()
end

--微信登陆
function LoginView:onWChatLoginClicked(send, eventType)
    self:loginRecoedClick("微信登录")
    if not self:checkIsCanLogin("wechat", send) then
        return
    end
    if device.platform == "android" and XH.loginData:getLobbyID() == 0 then
        XH.viewManager:openView("ChooseAreaView")
    else
        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_RN_TOURIST_LOGIN, false)
        XH.login:getModule("Login"):wxLogin()
    end
    self:recordLoginViewData(os.time(),send:getName())
    XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.LOGIN_REGISTER_4)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.LOGIN_WXLOGIN, nil, {user_ip=un.Device.getIp()})
end

--手机登陆
function LoginView:onPhoneLoginClicked(send, eventType)
    self:loginRecoedClick("手机登录")
    if not self:checkIsCanLogin("phone", send) then
        return
    end
    if device.platform == "android" and XH.loginData:getLobbyID() == 0 then
        XH.viewManager:openView("ChooseAreaView")
    else
        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_RN_TOURIST_LOGIN, false)
        XH.viewManager:openView("PhoneLoginView")
    end
    self:recordLoginViewData(os.time(),send:getName())
    XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.LOGIN_REGISTER_3) 
end

--第三方登陆
function LoginView:onThirdLoginClicked(send, eventType)
    if not self:checkIsCanLogin("third", send) then
        return
    end
    if self._thirdMask then
        self._thirdMask:setVisible(true)
    end
    self:recordLoginViewData(os.time(),send:getName())
end

--个验登陆
function LoginView:onGeYanLoginClicked(send, eventType)
    self:loginRecoedClick("一键登录")
    if not self:checkIsCanLogin("geyan", send) then
        return
    end
    if device.platform == "android" and XH.loginData:getLobbyID() == 0 then
        XH.viewManager:openView("ChooseAreaView")
    else
        if XH.SysTool:GetBundleVersion() == "1.1.9" and device.platform ~= "android" then
            XH.TipTool.showToast("该版本暂不支持该功能")
        else
            XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_RN_TOURIST_LOGIN, false)
            XH.login:getModule("Login"):reqGYLogin()
        end
    end
    self:recordLoginViewData(os.time(),send:getName())
    XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.LOGIN_REGISTER_2) 
end

--apple登录
function LoginView:onAppleLoginClicked(send, eventType)
    self:loginRecoedClick("苹果登录")
    if not self:checkIsCanLogin("apple", send) then
        return
    end
    if XH.loginData:getLobbyID() == 0 then
        XH.viewManager:openView("ChooseAreaView")
    else
        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_RN_TOURIST_LOGIN, false)
        XH.login:getModule("Login"):reqAppleLogin()
    end
    self:recordLoginViewData(os.time(),send:getName())
    XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.LOGIN_REGISTER_6) 
end

-- 快捷登陆
function LoginView:onLoginClicked(send, eventType)
    local lastLoginType = XH.login:getModule("LoginMethod"):getLastLoginType()
    if type(lastLoginType) ~= "number" then return end
    -- 使用上次方式登录
    if lastLoginType == XH.SDK_LOGIN_TYPE.SDK_WX then
        if device.platform == "android" and XH.loginData:getLobbyID() == 0 then
            XH.viewManager:openView("ChooseAreaView")
        else
            XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_RN_TOURIST_LOGIN, false)
            XH.login:getModule("Login"):wxLogin()
        end
    elseif lastLoginType == XH.SDK_LOGIN_TYPE.SDK_GY then
        if device.platform == "android" and XH.loginData:getLobbyID() == 0 then
            XH.viewManager:openView("ChooseAreaView")
        else
            if XH.SysTool:GetBundleVersion() == "1.1.9" and device.platform ~= "android" then
                XH.TipTool.showToast("该版本暂不支持该功能")
            else
                XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_RN_TOURIST_LOGIN, false)
                XH.login:getModule("Login"):reqGYLogin()
            end
        end
    elseif lastLoginType == XH.SDK_LOGIN_TYPE.SDK_APPLE then
        if XH.loginData:getLobbyID() == 0 then
            XH.viewManager:openView("ChooseAreaView")
        else
            XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_RN_TOURIST_LOGIN, false)
            XH.login:getModule("Login"):reqAppleLogin()
        end
    elseif lastLoginType == XH.SDK_LOGIN_TYPE.SDK_PHONE then
        XH.viewManager:openView("PhoneLoginView")
    else
        XH.viewManager:openView("LoginMethodView")
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.xyh25011301)
end

-- 更换登陆方式
function LoginView:onLoginChangeClicked(send, eventType)
    XH.viewManager:openView("LoginMethodView")
end

function LoginView:checkZJQuDaoBao()
    local QuDaoName =XH.ChannelTool.checkIsZJQuDaoChannel()
    if QuDaoName then
        local lobbyID = XH.LOBBY_ID[QuDaoName]
        if lobbyID then
            XH.loginData:setLobbyID(lobbyID)
            XH.login:getModule("Login"):enterLobby(lobbyID)
            XH.userDefault:setValue(XH.userDefault.KEY_ID.LAST_ENTER_AREA_NAME , XH.login:getModule("ChooseArea"):getAreaName(lobbyID))
            return true
        end
    end
    return false
end

--服务协议
function LoginView:onUserServiceClicked(send, eventType)
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

--家长监护
function LoginView:onUserParentClicked(send, eventType)
    local targetPlatform = cc.Application:getInstance():getTargetPlatform()
    if self:openUrlByAgreementType(AGREEMENT_TYPE[2]) then 
        return 
    end
    if cc.PLATFORM_OS_ANDROID == targetPlatform then
        cc.Application:getInstance():openURL(UrlConf.URL_PARTENTS_SERVICE)
    else
        cc.Application:getInstance():openURL(UrlConf.URL_PARTENTS_SERVICE_IOS)
    end
end

--隐私协议
function LoginView:onPrivacyProtocolClicked(send, eventType)
    local targetPlatform = cc.Application:getInstance():getTargetPlatform()
    if self:openUrlByAgreementType(AGREEMENT_TYPE[3]) then 
        return 
    end
    if cc.PLATFORM_OS_ANDROID == targetPlatform then
        cc.Application:getInstance():openURL(UrlConf.URL_PRIVACY_PROTOCOL)
    else
        cc.Application:getInstance():openURL(UrlConf.URL_PRIVACY_PROTOCOL_IOS)
    end
end

function LoginView:openUrlByAgreementType(type)
    local targetPlatform = cc.Application:getInstance():getTargetPlatform()
    local AgreementConfig = XH.lobby:getModule("Set"):getAgreementConfig(XH.areaData:getLobbyID(),type,targetPlatform)
    if AgreementConfig and AgreementConfig.url then 
        cc.Application:getInstance():openURL(AgreementConfig.url)
        return true
    end
    return false
end

--适龄提示
function LoginView:onAgetipClicked(send,eventType)
    -- XH.viewManager:openView("CeLueAgeView")
    XH.TipTool.showTip({
      type = XH.TIP_LAYER_TYPE.OK,
  }, "1.本网络游戏适合年满18周岁以上的用户使用，为了您的健康，请您合理控制游戏时间")
end

function LoginView:onEnter()
    LoginView.super.onEnter(self)

    self:preloadImageAsync()
    -- 从个人中心“刷新头像”进入时，自动执行微信登录
    self:tryAutoWeChatLogin()
end

-- 若设置了自动微信登录，则延迟一帧后执行微信登录（确保界面已就绪）
function LoginView:tryAutoWeChatLogin()
    if not XH.login:getModule("Login"):getAutoWeChatLogin() then
        return
    end
    XH.login:getModule("Login"):setAutoWeChatLogin(false)
    if not XH.sdkManager:isInstallWeChat() or not self._wChatBtn then
        return
    end
    self._checkYueDu:setSelected(true)
    XH.SysTool.performDelayOnce(function()
        self:onWChatLoginClicked(self._wChatBtn, nil)
    end, 0.3)
end

function LoginView.preloadImageAsync()
    local loadImageList = {
        "cocosStudio/hall/Image/common/common.png",
        "cocosStudio/hall/Image/lobby.png",
    }

    local fileUtils = cc.FileUtils:getInstance()
    for _, path in pairs(loadImageList) do
        local fullPath = fileUtils:fullPathForFilename(path)
        if fileUtils:isFileExist(fullPath) then
            display.loadImage(fullPath, function(texure)
            end)
        end
    end
end

function LoginView:onLobbyChanged(event)
    self:initUI()
    -- 隐私策略新增
    self:initYscl()
end

function LoginView:onShowChooseArea(send, eventType)
    XH.viewManager:openView("ChooseAreaView")
    XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.LOGIN_REGISTER_5,{Area = XH.areaData:getLobbyID()}) 
end

function LoginView:onChangeSrs(send, eventType)
    local isAbroadSrs = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_DATA_IS_ABROAD_SRS, false)
    if isAbroadSrs then
        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_DATA_IS_ABROAD_SRS, false)
    else
        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_DATA_IS_ABROAD_SRS, true)
    end
    self:flushSrsStateUI()

    package.loaded["app.Config.UrlConf"] = nil
    UrlConf = require("app.Config.UrlConf")
end

-- 权限设置调用
function LoginView:setQxTips()
    if device.platform == "android" and XH.SysTool:GetBundleVersion() >= "1.0.3" then
        XH.ThirdDefine.INIT_SDK_FUNC()
    end
    if device.platform == "android" and XH.SysTool:GetBundleVersion() >= "1.1.2" then
        local obj = un.Encryption:new()
        obj:buglyInit()
    end
    --隐私权限相关修改，将推送初始化延后
    if device.platform == "ios" and XH.SysTool:CompareToBundleVersion("1.3.10") then
        XH.sdkManager:xhCallOCFunc("", "gt_regist_notify_privacy")
        XH.sdkManager:xhCallOCFunc("", "request_att_permission")
    end
end

function LoginView:onOpenTempService(send, eventType)
    XH.lobby:getModule("CusService"):oponCusServerView(nil,"LOGIN")
    XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.LOGIN_REGISTER_1)
end

function LoginView:recordLoginViewData(btntime,btnName)
    local data = {}
    data.time1 = self._viewStartTime
    data.button_time = btntime
    data.button_name = btnName
    XH.throwDataManager:throwData(XH.ThrowDataDefine.UserLogined,data)
end

function LoginView:loginRecoedClick(strName)
    if XH.lobby and XH.lobby:getModule("UserPath") then
        local eventData = {
            block_label = strName,
            customize ={
                choice = XH.lobby:getModule("UserPath"):firstStart(),
                state = self._checkYueDu:isSelected() and 1 or 0
            } 
        }
        XH.lobby:getModule("UserPath"):throwDataRepeat(XH.NewThrowDataDefine.dl24062401 , eventData)
    end
end

function LoginView:showYueDuButtonLightAnim()
    if self._checkYueDuLight then
        local isEnableLogin = self._checkYueDu:isSelected()
        if device.platform == "android" and XH.SysTool:GetBundleVersion() <= "1.0.9" then
            isEnableLogin = not self._checkYueDu:isSelected()
        end
        self._checkYueDuLight:setVisible(not isEnableLogin)
        self._checkYueDuLight:stopAllActions()
        if not isEnableLogin then
            local fadeOutAction = cc.FadeOut:create(1)
            local fadeInAction = cc.FadeIn:create(1)
            self._checkYueDuLight:runAction(cc.RepeatForever:create(cc.Sequence:create(fadeOutAction, fadeInAction)))
        end
    end
end

function LoginView:refreshTextAgreement(text)
    if XH.areaData:getLobbyID() == 0 then 
        return
    end
    local finalStr = XH.login:getModule("Login"):getCompanyName(XH.areaData:getLobbyID(),device.platform)
    if not finalStr then  
        return 
    end
    local findStr = "杭州边锋软件技术有限公司"
    local targetTxt = string.gsub(text,findStr,finalStr)
    return targetTxt
end

function LoginView:hideAllBtn()
    self._touristBtn:setVisible(false)
    self._wChatBtn:setVisible(false)
    self._phoneBtn:setVisible(false)
    self._geYanBtn:setVisible(false)
    self._appleBtn:setVisible(false)
    self._KW_BTN_HM_WX_LOGIN:setVisible(false)
end

function LoginView:onCheckInstallWeChatCallback(event)
    self:initUI()
end

function LoginView:hideIcons()
    self._loginLogo:setVisible(false)
    self._panelBGSpec:setVisible(false)
    self._panelBG:setVisible(false)
    self._checkYueDuLight:setVisible(false)
    self._checkYueDu:setVisible(false)
    self._panelGps:setVisible(false)
    self._imgTmpCusService:setVisible(false)
    self._imgAge:setVisible(false)
    self._textand:setVisible(false)
    local text = XH.UITool.seekNodeByName(self._csbRoot, "KW_TEXT_TIP_2")
    if text then
        text:setVisible(false)
    end
end

return LoginViewH�  