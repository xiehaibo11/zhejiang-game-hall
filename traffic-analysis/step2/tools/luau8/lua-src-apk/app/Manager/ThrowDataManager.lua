local ThrowDataManager = class("ThrowDataManager")
local HttpDefine = require("app.Define.HttpDefine")
local UrlConf = require("app.Config.UrlConf")
local requestKey = "zhejiangyouxidating"
local requestSecret = "dc014ffdafb5cac6116082a6f546e9c4"
local requestRoute = "/v2/client"

function ThrowDataManager:getSign(key,secret,route,data)
    local sha256_data = XH.EncryptTool.sha256(data)
    local base64_sha256_data_hex = XH.SysTool:base64_encode(sha256_data);
    local rcf3339 = XH.EncryptTool.rfc3339TimeString()
    local md5 = XH.SysTool:md5_encode(rcf3339)
    local tempString = ""
    tempString = tempString .. "Shield" .. "\n"
    tempString = tempString .. key .. "\n"
    tempString = tempString .. rcf3339 .. "\n"
    tempString = tempString .. md5 .. "\n"
    tempString = tempString .. "POST" .. "\n"
    tempString = tempString .. route .. "\n"
    tempString = tempString .. "" .. "\n"
    tempString = tempString .. base64_sha256_data_hex
    local sign_sha256 = XH.EncryptTool.hmac_sha256(secret, tempString);
    local newString = ""
    newString = newString .. "Shield "
    newString = newString .. "RequestKey=" .. key
    newString = newString .. ",RequestTime=" .. rcf3339
    newString = newString .. ",Nonce=" .. md5
    newString = newString .. ",Signature=" .. sign_sha256
    local encodeURL = string.urlencode(newString)
    return encodeURL
end

function ThrowDataManager:throwData(eventTable, otherData)
if true then return end
    if device.platform == "ios" or device.platform == "android"  then -- device.platform == "windows"
        if not (eventTable and eventTable.id and eventTable.describe) then
            return
        end
        local app_profileArray = {}
        app_profileArray["app_package_name"] = XH.SysTool:getAppName()
        app_profileArray["app_version"] = XH.SysTool:GetBundleVersion()
        app_profileArray["app_version_code"] = ""
        app_profileArray["app_start_time"] = os.time()
        app_profileArray["sdk_version"] = device.platform == "ios" and "iOS_BFAnalyticsData" or "Android_BFAnalyticsData"
        app_profileArray["channel"] = tostring(XH.SysTool:getChannelID() or 0)
        app_profileArray["group_id"] = tostring(XH.areaData:getAreaID() or 0)
        app_profileArray["os_type"] = device.platform == "ios" and "2" or "1"
    
        local device_profile = {}
        device_profile["device_model"] = un.Device.getDeviceName()
        device_profile["os_sdk_version"] = un.Device.getOsName()
        device_profile["gis"] = {}
        device_profile["gis"]["lng"] = 0
        device_profile["gis"]["lat"] = 0
        device_profile["cpu_abi"] = "unknown"
        local screenSize = cc.Director:getInstance():getWinSize()
        device_profile["pixel_metric"] = string.format("%d*%d", screenSize.height, screenSize.width)
        device_profile["country"] = "CN"
        local netState = un.Device.getNetEnvName()
        device_profile["network_channel"] = netState == "wifi" and 0 or 1
        device_profile["m2g_3g"] = netState
    
        local messages = {}
        messages["msg_type"] = 2--session事件
        messages["session"] = {}
        messages["session"]["session_id"] = XH.SysTool:GetDevid() .. os.time()
        messages["session"]["activities"] = {}
        messages["session"]["activities"][1] = {}
        messages["session"]["activities"][1]["name"] = ""
        messages["session"]["app_events"] = {}
        messages["session"]["app_events"][1] = {}
        messages["session"]["app_events"][1]["event_id"] = eventTable.id
        messages["session"]["app_events"][1]["label"] = eventTable.describe
        messages["session"]["app_events"][1]["start_time"] = os.time()
        otherData["value"] = 1
        otherData["playerNickName"] = XH.playerData:getNickName() or ""
        otherData["numid"] = XH.playerData:getNumberID() or 0
        otherData["net_type"] = netState
        messages["session"]["app_events"][1]["parameters"] = otherData
        messages["init_profile"] = {}
        messages["init_profile"]["cpu_discription"] = "unknown"
        messages["init_profile"]["cpu_core_num"] = 0
        messages["init_profile"]["cpu_frequency"] = 0
        messages["init_profile"]["cpu_implementor"] = "unknown"
    
        local urlInfo = {}
        urlInfo["device_id"] = XH.SysTool:GetDevid()
        urlInfo["app_id"] = tostring(XH.areaData:getLobbyID() or 0)
        urlInfo["app_profile"] = app_profileArray
        urlInfo["device_profile"] = device_profile
        urlInfo["messages"] = {}
        urlInfo["messages"][1] = messages
    
        local headmap = {}
        headmap["Content-Type"] = "application/json"
        local jsonStr = cjson.encode(urlInfo)
        headmap["Authorization"] = self:getSign(requestKey, requestSecret, requestRoute, jsonStr)
        headmap["Content-Length"] = string.len(jsonStr)
        XH.httpManager:RequestPost(HttpDefine.HTTP_ID_THROW_DATA, UrlConf.HTTP_ID_THROW_DATA, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, nil, headmap)
        --发送数据记录操作的广播
        -- self:recordDataNotify(cjson.encode(otherData))
    end
end

function ThrowDataManager:recordDataNotify(data)
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local event = cc.EventCustom:new("Local.Debug.Data.Analysis.Log")
    event.data = data
    eventDispatcher:dispatchEvent(event)  
end

--记录按钮的点击事件
function ThrowDataManager:recordButtonClick(buttonData,dataEx)
    local otherData = buttonData.buttonData
    otherData.userid = XH.playerData:getNumberID()
    otherData.createtime = os.time()
    if dataEx then
        table.merge(otherData,dataEx)
    end
    self:throwData(buttonData.eventTable, otherData)
end

--记录用户ID的点击事件
function ThrowDataManager:throwDataClick(data,dataEx)
    local tmpData = {}
    tmpData.userid = XH.playerData:getNumberID()
    if dataEx then
        table.merge(tmpData,dataEx)
    end
    self:throwData(data, tmpData)
end

return ThrowDataManager