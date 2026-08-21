local CeLueQuanXianView = class("CeLueQuanXianView", XH.ViewBase)
local UrlConf = require("app.Config.UrlConf")

function CeLueQuanXianView:getCSBPath()
    return "cocosStudio/hall/CSB/window/YinSiCeLue/YsclQuanXianView.csb"
end

function CeLueQuanXianView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = { varName = "_closeBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_BTN_AGREE"] = { varName = "_agreeBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventAgree" },
        ["_KW_BTN_REFUSE"] = { varName = "_refuseBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_BTN_YHXY"] = { varName = "_yxxyBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventYhxy" },
        ["_KW_BTN_BFYXYSZC"] = { varName = "_bfyxyszcBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventYszhengce" },
    }
end

function CeLueQuanXianView:ctor()
    CeLueQuanXianView.super.ctor(self)
end

-- 同意按钮
function CeLueQuanXianView:onTouchEventAgree(send, eventType)
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_YSCL_LOGIN_YSQX, 1)
    XH.login:getModule("Login"):flushLoginState(false)
    self:setQxTips(true)
    self:close()

end

-- 权限设置调用
function CeLueQuanXianView:setQxTips(state)
    if device.platform == "android" and XH.SysTool:GetBundleVersion() >= "1.0.3" then
        local luaj = require("cocos.cocos2d.luaj")
        local sigs = "(Ljava/lang/String;)V"
        local strClass = XH.ThirdDefine.SDK_YMN_CLASS or ""
        if state == true then
            XH.login:getModule("Login"):setSDKInitState(true)
            luaj.callStaticMethod(strClass, "initStaticBfData", { "bfdata_need_permission" }, sigs)
            luaj.callStaticMethod("org/cocos2dx/lua/AppActivity", "initSDKYMN", { }, "()V")
            XH.ThirdDefine.isInit = true
        end
    end
    if device.platform == "android" and XH.SysTool:GetBundleVersion() >= "1.1.2" then
        if state == true then
            local obj = un.Encryption:new()
            obj:buglyInit()
        end
    end
    if XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_YSCL_LOGIN_YSQX, 0) == 1 then
        local bPacketUpdateOpen = false
        local targetPlatform = cc.Application:getInstance():getTargetPlatform()
        if cc.PLATFORM_OS_IPAD == targetPlatform or cc.PLATFORM_OS_IPHONE == targetPlatform or cc.PLATFORM_OS_ANDROID == targetPlatform then
            bPacketUpdateOpen = false
        end
        if bPacketUpdateOpen then
            local callback = function()
                cc.Director:getInstance():popScene()
            end
            require("app.hotupdate.universe.init")
            local ui = require("app.PackageDownload.UI").new(true)
            ui:start()
            local check = require("app.PackageDownload.Check").new()
            check:start(callback)
        end
    end
end

-- 关闭按钮
function CeLueQuanXianView:onTouchEventClose(send, eventType)
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_YSCL_LOGIN_YSQX, 2)
    XH.login:getModule("Login"):flushLoginState(false)
    self:setQxTips()
    self:close()
end

-- 用户协议按钮
function CeLueQuanXianView:onTouchEventYhxy(send, eventType)
    local targetPlatform = cc.Application:getInstance():getTargetPlatform()
    if cc.PLATFORM_OS_ANDROID == targetPlatform then
        cc.Application:getInstance():openURL(UrlConf.URL_USER_SERVICE)
    else
        cc.Application:getInstance():openURL(UrlConf.URL_USER_SERVICE_IOS)
    end
end

-- 隐私政策按钮
function CeLueQuanXianView:onTouchEventYszhengce(send, eventType)
    local targetPlatform = cc.Application:getInstance():getTargetPlatform()
    if cc.PLATFORM_OS_ANDROID == targetPlatform then
        cc.Application:getInstance():openURL(UrlConf.URL_PRIVACY_PROTOCOL)
    else
        cc.Application:getInstance():openURL(UrlConf.URL_PRIVACY_PROTOCOL_IOS)
    end
end

return CeLueQuanXianView