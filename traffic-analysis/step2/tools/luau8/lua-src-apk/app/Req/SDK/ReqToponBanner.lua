local ReqToponBanner = class("ReqToponBanner", XH.Req)

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

function ReqToponBanner:ctor()
    ReqToponBanner.super.ctor(self)
    self._isShouldShowAd = false
    self._listener = nil
    self._getState = nil
end

function ReqToponBanner:start(getState)
    if ReqToponBanner.super.start(self, 15) == false then
        return
    end
    self._getState = getState

    if getState == "close" then
        self:closeAds()
        XH.sdkManager:setToponCanShow(XH.ThirdDefine.TOPONSDK_AD_TYPE.BANNER, false)
    else
        if XH.sdkManager:getToponCanShow(XH.ThirdDefine.TOPONSDK_AD_TYPE.BANNER) then
            if self._getState == "show" then
                XH.TipTool.hideLoading()
                self:startShowAds()
                self._getState = nil
                XH.sdkManager:setToponCanShow(XH.ThirdDefine.TOPONSDK_AD_TYPE.BANNER, false)
            end
        else
            if device.platform == "ios" then
                self:callNativeFuncIOS()
            elseif device.platform == "android" then
                self:callNativeFuncAndroid()
            end
        end
    end
end

function ReqToponBanner:success(data)
    ReqToponBanner.super.success(self, data)
    self:removeListener()
end

function ReqToponBanner:fail(data)
    ReqToponBanner.super.fail(self, data)
    self:removeListener()
end

function ReqToponBanner:timeout(data)
    ReqToponBanner.super.timeout(self, data)
    self:removeListener()
end

function ReqToponBanner:addListener()
    if self._listener == nil then
        self._listener = cc.EventProxy.new(XH.sdkManager)
        :addEventListener(XH.sdkManager.EVENT_TOPONSDK_CALLBACK, handler(self, self.onToponSdkCallback))
    end
end

function ReqToponBanner:removeListener()
    if self._listener then
        self._listener:removeAllEventListeners()
        self._listener = nil
    end
end

-- IOS请求相关
function ReqToponBanner:callNativeFuncIOS()
    local bundleId = "b5fe9a2e899640"
    if XH.SysTool:GetBundleVersion() >= "1.1.2" then
        bundleId = "b5feacbdfe0d03"
    end
    local getToponInfo = {
        ["functionName"] = "topon_load_banner_ad",
        ["args"] = {
            ["placement_id"] = bundleId,
            ["position"] = "center-top",                -- 位置信息 格式:横向-竖向 left-top left-center left-bottom center-top center center-bottom right
        }
    }
    XH.sdkManager:xhCallOCFunc("UserInterface", "callFunction", getToponInfo)
end

-- 安卓请求相关
function ReqToponBanner:callNativeFuncAndroid()
    local screenSize = cc.Director:getInstance():getOpenGLView():getFrameSize()
    local x = 600
    local y = 90
    if screenSize.height >= 1080 then
        x = 900
        y = 135
    end
    local functionName = "topon_load_banner_ad"
    local bundleId = "b5fe9a0ab9f664"
    local args = {
        ["0"] = bundleId,
        ["1"] = "centertop",
        ["2"] = "0",
        ["3"] = "0",
        ["4"] = x,
        ["5"] = y,
    }
    XH.sdkManager:callFunctionWithMap(functionName, args)
end

-- 回调相关
function ReqToponBanner:onToponSdkCallback(event)

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
function ReqToponBanner:startShowAds()
    if device.platform == "ios" then
        local bundleId = "b5fe9a2e899640"
        if XH.SysTool:GetBundleVersion() >= "1.1.2" then
            bundleId = "b5feacbdfe0d03"
        end
        local getToponInfo = {
            ["functionName"] = "topon_show_banner_ad",
            ["args"] =
            {
                ["placement_id"] = bundleId,
            }
        }
        XH.sdkManager:xhCallOCFunc("UserInterface", "callFunction", getToponInfo)
    elseif device.platform == "android" then
        local functionName = "topon_show_banner_ad"
        XH.sdkManager:callFunctionWithMap(functionName, { })
    end
end

-- 关闭广告
function ReqToponBanner:closeAds()
    if device.platform == "ios" then
        local getToponInfo = {
            ["functionName"] = "topon_close_banner_ad",
        }
        XH.sdkManager:xhCallOCFunc("UserInterface", "callFunction", getToponInfo)
    elseif device.platform == "android" then
        local functionName = "topon_close_banner_ad"
        XH.sdkManager:callFunctionWithMap(functionName, { })
    end
end

return ReqToponBanner
�