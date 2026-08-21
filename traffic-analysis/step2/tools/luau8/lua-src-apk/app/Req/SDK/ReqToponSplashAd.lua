local ReqToponSplashAd = class("ReqToponSplashAd", XH.Req)

-- 安卓:a5f3e0c35c2f7e	b5f3e0c4643fe4  >="1.0.6"  b5f8ceca962d11
-- IOS:a5f3e0c11b6c80	b5f3e0c51b4dc7

-- topon Flag：
--local TOPON_FLAG_SDK_CLICKED        = 121000;       -- 广告点击
--local TOPON_FLAG_SDK_CLOSE          = 121001;       -- 广告关闭
--local TOPON_FLAG_SDK_LOADFAIL       = 121002;       -- 加载失败
--local TOPON_FLAG_SDK_SHOWSUCCESS    = 121003;       -- 展示成功
-- local TOPON_FLAG_SDK_LOADSUCCESS    = 121004;       -- 加载成功
--local TOPON_FLAG_SDK_VIDEOSUCCESS   = 121005;       -- 视频播放完成
--local TOPON_FLAG_SDK_JLSUCCESS      = 121006;       -- 激励校验成功
-- local TOPON_FLAG_SDK_HAVELOAD       = 121007;       -- 已加载过
--local TOPON_FLAG_SDK_ISLOADING      = 121008;       -- 还在加载中
--local TOPON_FLAG_SDK_LOADINGAPI     = 121009;       -- 调起加载api 用于埋点
--local TOPON_FLAG_SDK_NOTREADY       = 121010;       -- not ready
--local TOPON_FLAG_SDK_MDAPI          = 121011;       -- 调起显示api 用于埋点
--local TOPON_FLAG_SDK_SHOWFAILED     = 121012;       -- 广告展示失败
--local TOPON_FLAG_SDK_JLFAIL         = 121013;       -- 激励校验失败

function ReqToponSplashAd:ctor()
    ReqToponSplashAd.super.ctor(self)
    self._isShouldShowAd = false
    self._listener = nil
    self._getState = nil
end

function ReqToponSplashAd:start(getState)
    if ReqToponSplashAd.super.start(self, 15) == false then
        return
    end
    self._getState = getState
    XH.TipTool.hideLoading()

    if XH.sdkManager:getToponCanShow(XH.ThirdDefine.TOPONSDK_AD_TYPE.SPLASHAD) then
        if self._getState == "show" then
            XH.TipTool.hideLoading()
            self:startShowAds()
            self._getState = nil
            XH.sdkManager:setToponCanShow(XH.ThirdDefine.TOPONSDK_AD_TYPE.SPLASHAD, false)
        end
    else
        self:callNativeFuncIOS()
    end
    self._getState = nil
end

function ReqToponSplashAd:success(data)
    ReqToponSplashAd.super.success(self, data)
    self:removeListener()
end

function ReqToponSplashAd:fail(data)
    ReqToponSplashAd.super.fail(self, data)
    self:removeListener()
end

function ReqToponSplashAd:timeout(data)
    ReqToponSplashAd.super.timeout(self, data)
    self:removeListener()
end

function ReqToponSplashAd:addListener()
    if self._listener == nil then
        self._listener = cc.EventProxy.new(XH.sdkManager)
        :addEventListener(XH.sdkManager.EVENT_TOPONSDK_CALLBACK, handler(self, self.onToponSdkCallback))
    end
end

function ReqToponSplashAd:removeListener()
    if self._listener then
        self._listener:removeAllEventListeners()
        self._listener = nil
    end
end

-- IOS请求相关
function ReqToponSplashAd:callNativeFuncIOS()
    local bundleId = "b6040b59751698"
    local getToponInfo = {
        ["functionName"] = "topon_load_splash_ad",
        ["args"] = {
            ["placement_id"] = bundleId,
        }
    }
    XH.sdkManager:xhCallOCFunc("UserInterface", "callFunction", getToponInfo)
end

-- 开始播放广告
function ReqToponSplashAd:startShowAds()
    if device.platform == "ios" then
        local bundleId = "b6040b59751698"
        local getToponInfo = {
            ["functionName"] = "topon_show_splash_ad",
            ["args"] =
            {
                ["placement_id"] = bundleId,
            }
        }
        XH.sdkManager:xhCallOCFunc("UserInterface", "callFunction", getToponInfo)
    elseif device.platform == "android" then
        local functionName = "topon_show_splash_ad"
        local bundleId = "b6040b5a40c4b1"
        local args = {
            ["0"] = bundleId,
        }
        XH.sdkManager:callFunctionWithMap(functionName, args)
    end
end

return ReqToponSplashAd
A