local WXPublicView = class("WXPublicView", XH.ViewBase)
local WXPublicConfig = require("lobby.Modules.WXPublic.Config")

function WXPublicView:getCSBPath()
    return "cocosStudio/hall/CSB/WxPublicLayer.csb"
end

function WXPublicView:getBindingInfo()
    return {
        ["_KW_TEXT_PUBLIC_NOTICE"] = { varName = "_textNotice" },
        ["_KW_PLANE_PUBLIC_ICON"] = { varName = "_planeIcon" },
        ["_KW_TEXT_PUBLIC_NAME"] = { varName = "_textName" },
        ["_KW_BTN_GOTO"] = { varName = "_btnGoTo", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchGoTo" },
        ["_KWA_BTND_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchClose" },
    }
end

function WXPublicView:ctor()
    WXPublicView.super.ctor(self)
    self:updateCodeInfo()
end

function WXPublicView:onTouchClose(send, eventType)
    self:close()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.WX_PUBLIC_CLICK_CLOSE)
end

function WXPublicView:onTouchGoTo(send, eventType)
    if XH.sdkManager:isInstallWeChat() then
        cc.Application:getInstance():openURL("weixin://")
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.WX_PUBLIC_CLICK_GOTO)
end

function WXPublicView:getCodeInfo()
    if not WXPublicConfig.PublicConfig[XH.areaData:getLobbyID()] then
        return 
    end
    local publicName = WXPublicConfig.PublicConfig[XH.areaData:getLobbyID()].Name
    local iconPath = "cocosStudio/hall/Image/WxPublicLocalRes/WxPublicCode_"..XH.areaData:getLobbyID()..".png"
    return {Name = publicName, Icon = iconPath}
end

function WXPublicView:updateCodeInfo()
    local info = self:getCodeInfo() or {}
    local nameStr = "【"..(info.Name or "").."】"
    local noticeStr = "关注官方微信公众号【"..(info.Name or "").."】，了解最新官方活动，游戏资讯，还有神秘礼品等您发现哦！"
    self._textName:setText(nameStr)
    self._textNotice:setText(noticeStr)
    local headNode = XH.UIRemoteImage.create(self._planeIcon)
    if headNode then
        headNode:setDefaultTexture(info.Icon or "", ccui.TextureResType.localType)
        -- headNode:setUrl()
    end

    XH.SysTool.copyString(info.Name or "")
    XH.TipTool.showToast("已为您复制公众号", 2)
end

return WXPublicView	