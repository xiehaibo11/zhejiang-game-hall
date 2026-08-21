
--支付相关的字符串替换,进安卓工程做进一步处理
XH.ThirdDefine.SDK_INTERFACE_NAMES_KEY.BUY = "alipay_pay"
XH.ThirdDefine.SDK_INTERFACE_NAMES_KEY.ZFBBUY = "ZFBBUY"
XH.ThirdDefine.SDK_INTERFACE_NAMES_KEY.WXBUY = "WXBUY"
XH.ThirdDefine.SDK_INTERFACE_NAMES_KEY.WXBUY2 = "weixin_pay"
XH.ThirdDefine.SDK_INTERFACE_NAMES_KEY.H5PAY_ISS = "ymn_sdk_client JWT"
if XH.SysTool.CompareToBundleVersion and XH.SysTool:CompareToBundleVersion("1.2.1") then
    XH.ThirdDefine.SDK_INTERFACE_NAMES_KEY.WX_LOGIN = "WXSupLogin"
end
XH.ThirdDefine.SDK_YMN_CLASS = "com/bianfeng/ymnsdk/bfdata/BFDataInterface"
XH.ThirdDefine.SDK_INTERFACE_NAMES_KEY.GET_ORDERID = "ymn_get_orderid"

XH.ThirdDefine.isInit = false
XH.ThirdDefine.INIT_SDK_FUNC = function(paramStr)
    paramStr = paramStr or ""
    local luaj = require("cocos.cocos2d.luaj")
    local sigs = "(Ljava/lang/String;)V"
    local strClass = XH.ThirdDefine.SDK_YMN_CLASS
    luaj.callStaticMethod(strClass, "initStaticBfData", { paramStr }, sigs)
    luaj.callStaticMethod("org/cocos2dx/lua/AppActivity", "initSDKYMN", {}, "()V")
    if cc.Application:getInstance():getVersion() >= "1.4.2" then
        luaj.callStaticMethod("com.ymnsdk.replugin.RepluginSdkJavaBridging", "allowUserPrivacy", {}, "()V")
    end
    XH.ThirdDefine.isInit = true
end