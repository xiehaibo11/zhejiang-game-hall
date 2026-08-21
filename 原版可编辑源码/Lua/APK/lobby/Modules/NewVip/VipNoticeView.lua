-- 会员须知
local VipNoticeLayer = class("VipNoticeLayer",XH.ViewBase)
local UrlConf = require("app.Config.UrlConf")

function VipNoticeLayer:getCSBPath()
    return "cocosStudio/hall/CSB/vip/VipNoticeLayer.csb"
end

function VipNoticeLayer:getBindingInfo()
    return {
        ["_KWA_BTND_CLOSE"] = {varName="_btnClose",type = XH.UI_TYPE.BUTTON,onTouchEnded = "onTouchEventClose"},
        ["_KW_PANEL_BG"] = {varName="_btnClose",onTouchEnded = "onTouchEventClose"},
        ["_KWA_BTND_NOTICE"] = {varName="_noticeBtn",type = XH.UI_TYPE.BUTTON,onTouchEnded = "onTouchAgreeMent"},
    }
end

function VipNoticeLayer:ctor(param)
    param = param or {}
    VipNoticeLayer.super.ctor(self,param)
end

function VipNoticeLayer:onTouchEventClose(send, eventType)
    self:close()
end

function VipNoticeLayer:onTouchAgreeMent(send, eventType)
    self:close()
    local targetPlatform = cc.Application:getInstance():getTargetPlatform()
    if cc.PLATFORM_OS_ANDROID == targetPlatform then
        cc.Application:getInstance():openURL(UrlConf.HTTP_ID_CHONG_ZHI)
    else
        cc.Application:getInstance():openURL(UrlConf.HTTP_ID_CHONG_ZHI_IOS)
    end
    print("onTouchAgreeMent")
end

return VipNoticeLayer