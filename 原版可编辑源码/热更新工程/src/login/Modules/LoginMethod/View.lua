local LoginMethodView = class("LoginMethodView", XH.ViewBase)
local UrlConf = require("app.Config.UrlConf")

local AGREEMENT_TYPE = {
    [1] = "SERVER",  --用户协议  服务协议
    [2] = "PARENT_ALGUIDANCE", -- 家长监护
    [3] = "PRIVACY"  --隐私协议
}

function LoginMethodView:ctor()
    LoginMethodView.super.ctor(self)

    self:initUI()
    self:initYueDuCheckSelectedState()

    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.xyh25011302)
end

function LoginMethodView:getBindingInfo()
    return {
        ["_KWA_POS_PANEL"] = { varName = "_posPanel"},
        ["_POS_TOP"] = { varName = "_posTop"},
        ["_KW_NODE_POS_1_1"] = { varName = "_nodePos11"},
        ["_KW_NODE_POS_2_1"] = { varName = "_nodePos21"},
        ["_KW_NODE_POS_2_2"] = { varName = "_nodePos22"},
        ["_KW_NODE_POS_3_1"] = { varName = "_nodePos31"},
        ["_KW_NODE_POS_3_2"] = { varName = "_nodePos32"},
        ["_KW_NODE_POS_3_3"] = { varName = "_nodePos33"},
        ["_KWA_BTND_WX"] = {varName = "_btnWX", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onWXClick"},
        ["_KWA_BTND_GY"] = {varName = "_btnGY", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onGYClick"},  
        ["_KWA_BTND_PHONE"] = {varName = "_btnPhone", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onPhoneClick"},
        ["_KWA_BTND_APPLE"] = {varName = "_btnApple", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onAppleClick"},
        ["_KWA_BTND_CLOSE"] = {varName="KWA_BTND_CLOSE", type = XH.UI_TYPE.BUTTON,onTouchEnded = "on_KWA_BTND_CLOSE"},
        ["_KW_CHECK_YI_YUEDU"] = { varName = "_checkYueDu", onTouchEnded = "onYueDuClicked" },
        ["_KW_IMG_USER_SERVICE"] = { varName = "_userService", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onUserServiceClicked" },
        ["_KW_IMG_USER_PARTENS"] = { varName = "_userPartens", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onUserParentClicked" },
        ["_KW_IMG_PRIVACY_PROTOCOL"] = { varName = "_privacyProtocol", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onPrivacyProtocolClicked" },
        ["_KWA_BTND_LARGE"] = { varName = "_btnLarge", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onLargeClick" },
        ["_KWA_LAST_LOGIN_TIPS"] = { varName = "_lastLoginTips"},
    }
end

function LoginMethodView:getCSBPath()
    return "cocosStudio/hall/CSB/LoginMethodUI.csb"
end

function LoginMethodView:getProxyEvents()
    return {
        { module = XH.sdkManager, eventKeyName = "EVENT_LOGIN_CALLBACK", callBack = "onCheckInstallWeChatCallback" },
    }
end

function LoginMethodView:initUI()
    local btns = {}
    -- 微信登陆
    if self._btnWX and XH.sdkManager:isInstallWeChat() then
        table.insert(btns, self._btnWX)
    end
    -- 手机一键登陆
    local isSupportPhoneLogin = XH.areaData:isSupportPhoneLogin()
    if self._btnGY and isSupportPhoneLogin then
        table.insert(btns, self._btnGY)
    end
    -- 手机登陆
    if self._btnPhone then
        table.insert(btns, self._btnPhone)
    end
    -- 苹果登陆
    if self._btnApple and device.platform == "ios" and XH.SysTool:CompareToBundleVersion("1.3.13") then
        table.insert(btns, self._btnApple)
    end
    -- 显示所有按钮,并且进行位置排列
    local btnNums = table.nums(btns)
    local btnKey  = "_nodePos" .. (btnNums -1)
    for i, btn in ipairs(btns) do
        if btn then
            -- 是否展示上次登陆
            self:checkShowLastLoginTips(btn)
            local index = i - 1
            local nodeName = btnKey .. index
            -- 针对top位置上的按钮做下处理
            if index == 0 then
                nodeName = "_posTop"
                btn = self:initLargeBtn(btn)
            end
            if self[nodeName] then
                local x, y = self[nodeName]:getPosition()
                btn:setPosition(x, y)
                btn:setVisible(true)
            end
        end
    end
    -- 动画
    if not self._checkSpine then
        local aniPath = "animation/Lobby/Base/shoudianji/"
        local params = {path = aniPath, tex = "ShouDianJi.json", ske = "ShouDianJi.atlas", armatureName = "ShouDianJi", scale=1}
        local spineNode = display.playDargonBonesSpine(params)
        if spineNode then
            -- local size = cc.Director:getInstance():getWinSize()
            spineNode:setPosition(50, 10)
            self._checkYueDu:addChild(spineNode)
            self._checkSpine = spineNode
        end
    end
end


-- SDK_UNKNOWN = 0,    -- 未知
-- SDK_WX = 1,         --微信登录
-- SDK_GY = 2,         --个验登录
-- SDK_APPLE = 3,      --苹果登录
-- SDK_PHONE = 3,      --手机登录
function LoginMethodView:checkShowLastLoginTips(btn)
    local lastLoginType = XH.login:getModule("LoginMethod"):getLastLoginType()
    if type(lastLoginType) ~= "number" then return end
    local lastLoginTip = btn:getChildByName("_KWA_LAST_LOGIN_TIPS")
    if not lastLoginTip then return end
    if btn == self._btnWX then
        lastLoginTip:setVisible(lastLoginType == 1)
    elseif btn == self._btnGY then
        lastLoginTip:setVisible(lastLoginType == 2)
    elseif btn == self._btnPhone then --手机登陆
        lastLoginTip:setVisible(lastLoginType == 4)
    elseif btn == self._btnApple then
        lastLoginTip:setVisible(lastLoginType == 3)
    end
end

function LoginMethodView:initLargeBtn(btn)
    local desc = self._btnLarge:getChildByName("_KWA_LARGE_DESC")
    local callback = nil
    if btn == self._btnWX then
        callback = handler(self, self.onWXClick)
        desc:setString("通过微信登录")
    elseif btn == self._btnGY then
        callback = handler(self, self.onGYClick)
        desc:setString("通过手机号码快捷登录")
    elseif btn == self._btnPhone then
        callback = handler(self, self.onPhoneClick)
        desc:setString("通过手机号码登录")
    elseif btn == self._btnApple then
        callback = handler(self, self.onAppleClick)
        desc:setString("通过Apple登录")
    end
    local lastLoginTip = btn:getChildByName("_KWA_LAST_LOGIN_TIPS")
    local largeLoginTip = self._btnLarge:getChildByName("_KWA_LAST_LOGIN_TIPS")
    if largeLoginTip and lastLoginTip then
        largeLoginTip:setVisible(lastLoginTip:isVisible())
    end
    self._btnLarge.subBtn = btn
    self._btnLarge.subCallback = callback
    return self._btnLarge
end

function LoginMethodView:onWXClick(sender, eventType)
    self:loginRecoedClick("微信登录")
    if not self:checkIsCanLogin("wechat", sender) then
        return
    end
    if device.platform == "android" and XH.loginData:getLobbyID() == 0 then
        XH.viewManager:openView("ChooseAreaView")
    else
        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_RN_TOURIST_LOGIN, false)
        XH.login:getModule("Login"):wxLogin()
    end
end

function LoginMethodView:onGYClick(sender, eventType)
    self:loginRecoedClick("一键登录")
    if not self:checkIsCanLogin("geyan", sender) then
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
end

function LoginMethodView:onPhoneClick(sender, eventType)
    self:loginRecoedClick("手机登录")
    if not self:checkIsCanLogin("phone", sender) then
        return
    end
    if device.platform == "android" and XH.loginData:getLobbyID() == 0 then
        XH.viewManager:openView("ChooseAreaView")
    else
        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_RN_TOURIST_LOGIN, false)
        XH.viewManager:openView("PhoneLoginView")
    end
end

function LoginMethodView:onAppleClick(sender, eventType)
    self:loginRecoedClick("苹果登录")
    if not self:checkIsCanLogin("apple", sender) then
        return
    end
    if XH.loginData:getLobbyID() == 0 then
        XH.viewManager:openView("ChooseAreaView")
    else
        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_RN_TOURIST_LOGIN, false)
        XH.login:getModule("Login"):reqAppleLogin()
    end
end

function LoginMethodView:onLargeClick(sender, eventType)
    if self._btnLarge.subBtn and self._btnLarge.subCallback then
        self._btnLarge.subCallback(self._btnLarge.subBtn)
    end
end

function LoginMethodView:on_KWA_BTND_CLOSE(send,eventType)
    self:close()
end

function LoginMethodView:onCheckInstallWeChatCallback(event)
    self:initUI()
end

--服务协议
function LoginMethodView:onUserServiceClicked(send, eventType)
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
function LoginMethodView:onUserParentClicked(send, eventType)
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
function LoginMethodView:onPrivacyProtocolClicked(send, eventType)
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

-- 勾选阅读协议
function LoginMethodView:onYueDuClicked(send, eventType)
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
            if XH.SysTool:GetBundleVersion() >= "1.1.2"  then
                local obj = un.Encryption:new()
                obj:buglyInit()
            end
        end
        --隐私权限相关修改，将推送初始化延后
        if device.platform == "ios" and XH.SysTool:CompareToBundleVersion("1.3.10") then
            XH.sdkManager:xhCallOCFunc("", "gt_regist_notify_privacy")
            XH.sdkManager:xhCallOCFunc("", "request_att_permission")
        end
        XH.NewThrowDataManager:AnalyseStartData("勾选协议")
    end
end

function LoginMethodView:initYueDuCheckSelectedState()
    local isNeedSelect = self:isNeedSelectYueDuCheck()
    self._checkYueDu:setSelected(isNeedSelect)
    if self._checkSpine then
        self._checkSpine:setVisible(not isNeedSelect)
    end
    if isNeedSelect then
        self:setQxTips()
    end
end

-- 权限设置调用
function LoginMethodView:setQxTips()
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

function LoginMethodView:isNeedSelectYueDuCheck()
    local pathFile = cc.FileUtils:getInstance():getWritablePath() .. "SessionLoginData_" .. XH.areaData:getLobbyID() .. ".dat"
    if cc.FileUtils:getInstance():isFileExist(pathFile) then
        return true
    end
    return false
end

function LoginMethodView:checkIsCanLogin(from, send)
    if not self._checkYueDu:isSelected()then
        local funcMap = {
            wechat=self.onWXClick,
            phone=self.onPhoneClick,
            geyan=self.onGYClick,
            apple=self.onAppleClick,
            large=self.onLargeClick,
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

function LoginMethodView:openUrlByAgreementType(type)
    local targetPlatform = cc.Application:getInstance():getTargetPlatform()
    local AgreementConfig = XH.lobby:getModule("Set"):getAgreementConfig(XH.areaData:getLobbyID(),type,targetPlatform)
    if AgreementConfig and AgreementConfig.url then 
        cc.Application:getInstance():openURL(AgreementConfig.url)
        return true
    end
    return false
end

function LoginMethodView:loginRecoedClick(strName)
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

return LoginMethodView