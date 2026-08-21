--/**
--* ============================
--* @Author:   tangligen
--* @DateTime: 2020-10-29 11:24:30
--* ============================
--*/

local ReqGeTui = class("ReqGeTui", XH.Req)


function ReqGeTui:ctor()
    ReqGeTui.super.ctor(self)
end

function ReqGeTui:start()
    if ReqGeTui.super.start(self, 15) == false then
        return
    end
end

function ReqGeTui:success(data)
    ReqGeTui.super.success(self, data)
end

function ReqGeTui:fail(data)
    ReqGeTui.super.fail(self, data)
end

function ReqGeTui:timeout(data)
    ReqGeTui.super.timeout(self, data)
end

--获取个推 cid
function ReqGeTui:getClientId()
    if not XH.sdkManager:isSupportGeTui() then
        return
    end
    if device.platform == "android" then
        if XH.SysTool:GetBundleVersion() >= "1.1.9" and XH.configerManager:getIsJgSdk() then
            XH.sdkManager:callFunction("jpush_get_registrationid")
        else
            XH.sdkManager:callFunction("push_get_clientid")
        end
    elseif device.platform == "ios" then
        if XH.SysTool:GetBundleVersion() >= "1.1.9" and XH.configerManager:getIsJgSdk() then
            local getToponInfo = {
                ["functionName"] = "jpush_get_registrationid",
            }
            XH.sdkManager:xhCallOCFunc("UserInterface", "callFunction", getToponInfo)
        else
            XH.sdkManager:xhCallOCFunc("XH_Extern", "GetGetuiClient", "{}")
        end
    end
end

--绑定别名
function ReqGeTui:bindAlias(alias)
    if not XH.sdkManager:isSupportGeTui() then
        return
    end
    alias = alias or ""
    if device.platform == "android" then
        local map = {
            ["0"] = alias
        }
        XH.sdkManager:callFunctionWithMap("push_bind_alias", map)
    elseif device.platform == "ios" then
        XH.sdkManager:xhCallOCFunc("XHGeTui", "xhGeTuiBindAlias:", alias)
    end
end

--解绑别名
function ReqGeTui:unBindAlias(alias)
    if not XH.sdkManager:isSupportGeTui() then
        return
    end
    alias = alias or ""
    if device.platform == "android" then
        local map = {
            ["0"] = alias
        }
        XH.sdkManager:callFunctionWithMap("push_unbind_all_alias", map)
    end
end

--获取透传参数
function ReqGeTui:getNotifyInfo()
    if not XH.sdkManager:isSupportGeTui() then
        return
    end
    if device.platform == "android" then
        if XH.SysTool:GetBundleVersion() >= "1.1.9" and XH.configerManager:getIsJgSdk() then
            --XH.sdkManager:callFunction("jpush_set_alias","alias")
            local map = {
                ["0"] = alias
            }
            XH.sdkManager:callFunctionWithMap("jpush_set_alias", map)
        else
            XH.sdkManager:callFunction("gt_get_notify_info")
        end
    end
end

--获取推送透传参数和来源
function ReqGeTui:getNotifyInfoAndSource()
    if not XH.sdkManager:isSupportGeTui() then
        return
    end
    if device.platform == "android" then
        XH.sdkManager:callFunction("gt_get_notify_info_and_source")
    end
end


return ReqGeTui
X