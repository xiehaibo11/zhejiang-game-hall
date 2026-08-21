local ReqToponAds = class("ReqToponAds", XH.Req)

-- 安卓:a5f3e0c35c2f7e	b5f3e0c4643fe4  >="1.0.6"  b5f8ceca962d11
-- IOS:a5f3e0c11b6c80	b5f3e0c51b4dc7

-- topon Flag：
--local TOPON_FLAG_SDK_CLICKED        = 121000;       -- 广告点击
--local TOPON_FLAG_SDK_CLOSE          = 121001;       -- 广告关闭
--local TOPON_FLAG_SDK_LOADFAIL       = 121002;       -- 加载失败
--local TOPON_FLAG_SDK_SHOWSUCCESS    = 121003;       -- 展示成功
local TOPON_FLAG_SDK_LOADSUCCESS    = 121004;       -- 加载成功
--local TOPON_FLAG_SDK_VIDEOSUCCESS   = 121005;       -- 视频播放完成
--local TOPON_FLAG_SDK_JLSUCCESS      = 121006;       -- 激励校验成功
local TOPON_FLAG_SDK_HAVELOAD       = 121007;       -- 已加载过
--local TOPON_FLAG_SDK_ISLOADING      = 121008;       -- 还在加载中
--local TOPON_FLAG_SDK_LOADINGAPI     = 121009;       -- 调起加载api 用于埋点
--local TOPON_FLAG_SDK_NOTREADY       = 121010;       -- not ready
--local TOPON_FLAG_SDK_MDAPI          = 121011;       -- 调起显示api 用于埋点
--local TOPON_FLAG_SDK_SHOWFAILED     = 121012;       -- 广告展示失败
--local TOPON_FLAG_SDK_JLFAIL         = 121013;       -- 激励校验失败

function ReqToponAds:ctor()
    ReqToponAds.super.ctor(self)
    self._isShouldShowAd = false
    self._listener = nil
    self._getState = nil
end

function ReqToponAds:start(getState)
    if ReqToponAds.super.start(self, 15) == false then
        return
    end
    self._getState = getState
    if XH.sdkManager:getToponCanShow(XH.ThirdDefine.TOPONSDK_AD_TYPE.REWARDEVIDEO) then
        if self._getState == "show" then
            XH.TipTool.hideLoading()
            self:startShowAds()
            XH.sdkManager:setToponCanShow(XH.ThirdDefine.TOPONSDK_AD_TYPE.REWARDEVIDEO, false)
            self._getState = nil
        end
    else
        if device.platform == "ios" then
            self:callNativeFuncIOS()
        elseif device.platform == "android" then
            self:callNativeFuncAndroid()
        end
    end
end

function ReqToponAds:success(data)
    ReqToponAds.super.success(self, data)
    self:removeListener()
end

function ReqToponAds:fail(data)
    ReqToponAds.super.fail(self, data)
    self:removeListener()
end

function ReqToponAds:timeout(data)
    ReqToponAds.super.timeout(self, data)
    self:removeListener()
end

function ReqToponAds:addListener()
    if self._listener == nil then
        self._listener = cc.EventProxy.new(XH.sdkManager)
        :addEventListener(XH.sdkManager.EVENT_TOPONSDK_CALLBACK, handler(self, self.onToponSdkCallback))
    end
end

function ReqToponAds:removeListener()
    if self._listener then
        self._listener:removeAllEventListeners()
        self._listener = nil
    end
end

-- IOS请求相关
function ReqToponAds:callNativeFuncIOS()
    local bundleId = "b5f3e0c51b4dc7"
    if XH.SysTool:GetBundleVersion() >= "1.1.2" then
        bundleId = "b5fe541416dccd"
    end
    local getToponInfo = {
        ["functionName"] = "topon_load_rewardvideo_ad",
        ["args"] = {
            ["placement_id"] = bundleId,
        }
    }
    XH.sdkManager:xhCallOCFunc("UserInterface", "callFunction", getToponInfo)
end

-- 安卓请求相关
function ReqToponAds:callNativeFuncAndroid()
    local functionName = "topon_load_rewardvideo_ad"
    local bundleId = "b5f3e0c4643fe4"
    if XH.SysTool:GetBundleVersion() >= "1.0.6" then
        bundleId = "b5f8ceca962d11"
    end
    local args = {
        ["0"] = bundleId
    }
    XH.sdkManager:callFunctionWithMap(functionName, args)
end

-- 回调相关
function ReqToponAds:onToponSdkCallback(event)
    -- local msg = event.data.msg
    local code = event.data.code
    if (code == TOPON_FLAG_SDK_LOADSUCCESS) then
        XH.TipTool.hideLoading()
        -- self:removeListener()
        if self._getState == "show" then
            self:startShowAds()
            self._getState = nil
        end
    elseif (code == TOPON_FLAG_SDK_HAVELOAD) then
        XH.TipTool.hideLoading()
        -- self:removeListener()
        if self._getState == "show" then
            self:startShowAds()
            self._getState = nil
        end
    end
end

-- 开始播放广告
function ReqToponAds:startShowAds()
    if device.platform == "ios" then
        local bundleId = "b5f3e0c51b4dc7"
        if XH.SysTool:GetBundleVersion() >= "1.1.2" then
            bundleId = "b5fe541416dccd"
        end
        local getToponInfo = {
            ["functionName"] = "topon_show_rewardvideo_ad",
            ["args"] =
            {
                ["placement_id"] = bundleId,
            }
        }
        XH.sdkManager:xhCallOCFunc("UserInterface", "callFunction", getToponInfo)
    elseif device.platform == "android" then
        local functionName = "topon_show_rewardvideo_ad"
        XH.sdkManager:callFunctionWithMap(functionName, { })
    end
end

return ReqToponAds
�