-- 根据包体不同 实现、参数不同
local GeneralParam = {}

-- 获取appid
function GeneralParam.getAppId()
    return "b93c750f71404483822ec46adcf72232"
end

-- 获取上抛地址
function GeneralParam.getServerUrl()
    return "https://te.xingyeddz.com"
end

-- 获取system
function GeneralParam.getOs()
    return XH and tostring(XH.SysTool:GetOsVersion()) or ""
end

-- 获取platform
function GeneralParam.getPlatform()
    if device.platform == "ios" then
        return "iOS"
    elseif device.platform == "android" then
        return "Android"
    elseif device.platform == "windows" then
        return "Windows"
    else
        return ""
    end
end

-- 获取当前网络状态
function GeneralParam.getNetWork()
    return un.Device.getNetEnvName()
end

-- 网络请求
function GeneralParam.getRequest(options)
    local xhr = cc.XMLHttpRequest:new()
    xhr.responseType = cc.XMLHTTPREQUEST_RESPONSE_JSON
    xhr:open(options.method, options.url)
    if options.header ~= nil then
        for i, var in pairs(options.header) do
            xhr:setRequestHeader(i, var)
        end
    end
    local function onHttpReqCallBack()
        local res = {}
        if xhr.response then
            local cjsonData
            local ok, res_tab = pcall(cjson.decode, xhr.response)
            if not ok then
                cjsonData = xhr.response
            else
                cjsonData = res_tab
            end
            if cjsonData and cjsonData.code and cjsonData.code == 0 then
                res['statusCode'] = 200
                res['data'] = cjsonData
                options:success(res)
            else
                res.errMsg = 'network error'
                options:fail(res)
            end
        else
            res.errMsg = 'timeout'
            options:fail(res)
        end
    end
    xhr:registerScriptHandler(onHttpReqCallBack)
    xhr:send(options.data)
    return xhr
end

return GeneralParam�