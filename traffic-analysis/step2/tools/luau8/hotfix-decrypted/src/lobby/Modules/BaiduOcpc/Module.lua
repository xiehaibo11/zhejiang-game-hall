local BaiduOcpcModule = class("BaiduOcpcModule", XH.ModuleBase)

function BaiduOcpcModule:getProxyEvents()
    return {
        { module = XH.sdkManager, eventKeyName = "EVENT_BAIDU_OCPC_CALLBACK", callBack = "onBaiduOcpcCallback" },
    }
end

function BaiduOcpcModule:ctor()
    BaiduOcpcModule.super.ctor(self)
end

function BaiduOcpcModule:reprotUserData(stype,tableData)
    if device.platform ~= "android" then
        return
    end
    if XH.sdkManager:isSupportFunctionAndroid("baiduocpc_logaction") then
        local mapData = {
            ["0"] = stype,
        }
        if type(tableData) == "table" then 
            mapData["1"] = json.encode(tableData)
        end
        XH.sdkManager:callFunctionWithMap("baiduocpc_logaction",mapData)
    end
end

function BaiduOcpcModule:setClipboardDataEnable(canUse)
    if XH.sdkManager:isSupportFunctionAndroid("baidi_ocpc_enable_clip") then
        local mapData = {
            ["0"] = canUse,
        }
        XH.sdkManager:callFunctionWithMap("baidi_ocpc_enable_clip",mapData)
    end
end

function BaiduOcpcModule:onBaiduOcpcCallback(event)
    if not event or not event.data then
        return
    end
    print("BaiduOcpcModule code = " .. event.data.code)
end

return BaiduOcpcModule