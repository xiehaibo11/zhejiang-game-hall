local YSCLView = class("YSCLView", XH.ViewBase)
local UrlConf = require("app.Config.UrlConf")

function YSCLView:getCSBPath()
    return "cocosStudio/hall/CSB/window/YinSiCeLue/YsclQuanXianView.csb"
end

function YSCLView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = { varName = "_closeBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_BTN_AGREE"] = { varName = "_agreeBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventAgree" },
        ["_KW_BTN_REFUSE"] = { varName = "_refuseBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_BTN_YHXY"] = { varName = "_yxxyBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventYhxy" },
        ["_KW_BTN_BFYXYSZC"] = { varName = "_bfyxyszcBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventYszhengce" },
        ["_KW_BTN_ETXY"] = { varName = "_etxyBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventEtyx" },
        ["_KW_BG_IMG"] = { varName = "_bgImg"},
    }
end

function YSCLView:ctor()
    YSCLView.super.ctor(self)
    self:initBgImg()
    self._closeBtn:setVisible(false)
end

local DEFAULT_BG_IMG_PATH = "cocosStudio/hall/Image/login_background.jpg"
function YSCLView:initBgImg()
    local bgImgPath = DEFAULT_BG_IMG_PATH
    if XH.ChannelTool.checkIsCPSChannel() then
        local imgName = XH.ChannelTool.getCPSHotupdateImg()
        if imgName and imgName ~= "" then 
            bgImgPath = imgName
        end
    end
    self._bgImg:loadTexture(bgImgPath, ccui.TextureResType.localType)
    self._bgImg:setVisible(true)
end

-- 同意按钮
function YSCLView:onTouchEventAgree(send, eventType)
    cc.UserDefault:getInstance():setIntegerForKey("KW_YSCL_YSQX", 1)
    XH.loginData:cleanAllAreasSessionLoginInfo()
    self:removeSelf()
    require("app.Launcher"):getInstance():start()
end

-- 关闭按钮
function YSCLView:onTouchEventClose(send, eventType)
    XH.TipTool.showTip({
        type = XH.TIP_LAYER_TYPE.OK_CANCEL,
        funcOK = function ()
            cc.UserDefault:getInstance():setIntegerForKey("KW_YSCL_YSQX", 2)
            self:removeSelf()
            cc.Director:getInstance():endToLua()
        end
    }, "未同意用户协议和游戏隐私政策将退出游戏，是否继续退出？")
end

-- 用户协议按钮
function YSCLView:onTouchEventYhxy(send, eventType)
    local targetPlatform = cc.Application:getInstance():getTargetPlatform()
    if cc.PLATFORM_OS_ANDROID == targetPlatform then
        cc.Application:getInstance():openURL(UrlConf.URL_USER_SERVICE)
    else
        cc.Application:getInstance():openURL(UrlConf.URL_USER_SERVICE_IOS)
    end
end

-- 隐私政策按钮
function YSCLView:onTouchEventYszhengce(send, eventType)
    local targetPlatform = cc.Application:getInstance():getTargetPlatform()
    if cc.PLATFORM_OS_ANDROID == targetPlatform then
        cc.Application:getInstance():openURL(UrlConf.URL_PRIVACY_PROTOCOL)
    else
        cc.Application:getInstance():openURL(UrlConf.URL_PRIVACY_PROTOCOL_IOS)
    end
end

function YSCLView:onTouchEventEtyx(send, eventType)
    local targetPlatform = cc.Application:getInstance():getTargetPlatform()
    if cc.PLATFORM_OS_ANDROID == targetPlatform then
        cc.Application:getInstance():openURL(UrlConf.URL_PRIVACY_PROTOCOL_CHILDREN)
    else
        cc.Application:getInstance():openURL(UrlConf.URL_PRIVACY_PROTOCOL_IOS_CHILDREN)
    end
end

return YSCLView�