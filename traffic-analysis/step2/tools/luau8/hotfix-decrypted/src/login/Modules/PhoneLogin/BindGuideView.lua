local PhoneBindGuideView = class("PhoneBindGuideView", XH.ViewBase)

function PhoneBindGuideView:ctor(param)
    local tipParam = param or {}
    PhoneBindGuideView.super.ctor(self, tipParam)
    XH.viewManager:closeView("PhoneLoginView")
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.xgj25070401)
end

function PhoneBindGuideView:getCSBPath()
    return "cocosStudio/hall/CSB/window/PhoneBindGuideLayer.csb"
end

function PhoneBindGuideView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = { varName = "_KW_BTN_CLOSE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_BTN_SHARE"] = { varName = "_KW_BTN_SHARE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventShare" },
        ["_KW_BTN_COPY"] = { varName = "_KW_BTN_COPY", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventCopy" },
        ["_KW_BTN_GOWX"] = { varName = "_KW_BTN_GOWX", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventGoWe" },
    }
end

function PhoneBindGuideView:getShareUrl()
    local ConfigurationDefine = require("lobby.Modules.Configuration.Define")
    local configJsonData = XH.lobby:getModule("Configuration"):getConfigJsonData(ConfigurationDefine.Config.LOGIN, "AllConfig")
    local url = "https://dwz.hzmjbf.com/sp/wxwh92gj?"
    if configJsonData and configJsonData.bindAreaUrl then
        url = configJsonData.bindAreaUrl
    end
    local param = "areaid=" .. XH.areaData:getAreaID() .. "&lobbyid=0"
    return url .. param
end

function PhoneBindGuideView:onTouchEventShare()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.xgj25070402, { page_item_id = '分享链接' })
    local strText = "点击链接进入将手机号与【浙江游戏大厅】进行绑定，后续便于进行登录"
    local shareInfo = {
        textTitle = "手机号绑定入口", --分享标题
        textTitleUrl = "", --微信不用
        site = "", --微信不用
        siteUrl = "", --微信不用
        imagePath = "", --微信不用
        url = self:getShareUrl(), --微信网页模式分享的链接
        type = "url", --word是文字分享，url网页模式分享，pic分享图片
        scene = "0", --0是分享到好友会话，1是分享到朋友圈
        imageUrl = "", --分享图片地址（分享网页模式，需要传安卓包名）
        text = strText, --分享内容 
        comment = "", --微信不用
    }
    XH.sdkManager:startShare(shareInfo)
end

function PhoneBindGuideView:onTouchEventCopy()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.xgj25070402, { page_item_id = '复制链接' })
    XH.SysTool.copyString(self:getShareUrl())
    XH.TipTool.showToast("已复制，请前往微信")
    self:close()
end

function PhoneBindGuideView:onTouchEventGoWe()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.xgj25070402, { page_item_id = '去公众号' })
    XH.SysTool.copyString("浙江游戏互动大厅")
    XH.TipTool.showToast("已复制，请去微信搜索公众号")
    self:close()
end

function PhoneBindGuideView:onTouchEventClose()
    self:close()
end

return PhoneBindGuideViewp