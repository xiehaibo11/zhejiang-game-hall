---@class BridgeSDK
local BridgeSDK = class("BridgeSDK")

BridgeSDK.SDK_TYPE = {
    CLIPBOARD = 1, ---剪切板
    AMAP = 2, ---定位
}

function BridgeSDK:ctor()
    self._sdkCallbacks = {}

    local target = cc.Application:getInstance():getTargetPlatform()
    if target == cc.PLATFORM_OS_IPHONE or target == cc.PLATFORM_OS_IPAD or target == cc.PLATFORM_OS_ANDROID then
        self._sdkProxy = cc.EventProxy.new(XH.sdkManager)
        :addEventListener(XH.sdkManager.EVENT_DEFAULT_CALLBACK, handler(self, self.onDefaultCallBack))
        :addEventListener(XH.sdkManager.EVENT_AMAP_CALLBACK, handler(self, self.onGetLocationCallBack))
    end
end

function BridgeSDK:destroy()
    if self._sdkProxy then
        self._sdkProxy:removeAllEventListeners()
    end
end

function BridgeSDK:onDefaultCallBack(event)
    local code = event.data.code
    local msg = event.data.msg
    if code == XH.ThirdDefine.SYSFUNC_CALLBACK.SYSFUNC_GET_CLIPBOARDCONTENT_SUCCESS then
        local callbacks = self._sdkCallbacks[BridgeSDK.SDK_TYPE.CLIPBOARD]
        if callbacks then
            for _, callback in pairs(callbacks) do
                callback(msg)
            end
        end
    end
end

function BridgeSDK:reqClipboard()
    XH.TipTool.showClipboardTip({always = true, msg = "是否允许使用剪切板，快速加入比赛场"})
end

function BridgeSDK:addClipboardCallback(tag, callback)
    self._sdkCallbacks[BridgeSDK.SDK_TYPE.CLIPBOARD] = self._sdkCallbacks[BridgeSDK.SDK_TYPE.CLIPBOARD] or {}
    self._sdkCallbacks[BridgeSDK.SDK_TYPE.CLIPBOARD][tag] = callback
end

function BridgeSDK:removeClipboardCallback(tag)
    local callbacks = self._sdkCallbacks[BridgeSDK.SDK_TYPE.CLIPBOARD]
    if callbacks == nil then
        return
    end
    callbacks[tag] = nil
end

function BridgeSDK:onGetLocationCallBack(event)
    local callbacks = self._sdkCallbacks[BridgeSDK.SDK_TYPE.AMAP]
    if callbacks then
        for _, callback in pairs(callbacks) do
            callback(event)
        end
    end
end

function BridgeSDK:startAmapLocation()
    if device.platform == "windows" then
        local pos = { longitude = "0", latitude = "0" }
        local datamsg

        local ok, msg = pcall(function()
            datamsg = cjson.encode(pos)
        end)

        if not ok then
            print("cjson failed: " .. msg)
            return
        end
        
        self:onGetLocationCallBack({
            data = {
                code = XH.ThirdDefine.AMAP_CALLBACK_CODE.AMAP_SUCCESS,
                msg = datamsg
            }
        })
    else
        if device.platform == "android" then
            XH.sdkManager:callFunction("user_initiative")
        end
        XH.sdkManager:startLocationByAmap(XH.sdkManager.AmapAccuracy.MID)
    end
end

function BridgeSDK:startFuncBySdkType(sdkType)
    if sdkType == BridgeSDK.SDK_TYPE.AMAP then
        self:startAmapLocation()
    end
end

function BridgeSDK:addCallBack(sdkType, tag, callback)
    self._sdkCallbacks[sdkType] = self._sdkCallbacks[sdkType] or {}
    self._sdkCallbacks[sdkType][tag] = callback
end

function BridgeSDK:removeCallBack(sdkType, tag)
    local callbacks = self._sdkCallbacks[sdkType]
    if callbacks == nil then
        return
    end
    callbacks[tag] = nil
end

function BridgeSDK:jumpToSysSetup()
    if device.platform == "ios" then
        XH.sdkManager:xhCallOCFunc("XH_Extern", "GolinkQx", "{}")
    elseif device.platform == "android" then
        XH.sdkManager:callFunction("jump_permission_system")
    end
end

return BridgeSDK