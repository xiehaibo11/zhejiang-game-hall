local GoldSdkManager = XH.sdkManager

function GoldSdkManager:isVoiceLimitVersion()
    return not self:isSupportFunction("fastvo_start_record")
end

function GoldSdkManager:stardRecordWithNumid(numid)
    if device.platform == "windows" then
        return print("windows not suport")
    end

    if numid then
        local mapData = {}
        mapData["0"] = tostring(numid)
        self:callFunctionWithMap("fastvo_start_record", mapData)
    end
end

function GoldSdkManager:stopRecording()
    if device.platform == "windows" then
        return print("windows not suport")
    end
    self:callFunction("fastvo_stop_record")
end

function GoldSdkManager:cancelRecording()
    if device.platform == "windows" then
        return print("windows not suport")
    end
    self:callFunction("fastvo_cancel_record")
end

function GoldSdkManager:playRecordVoice(url)
    if device.platform == "windows" then
        return print("windows not suport")
    end

    if url then
        local mapData = {}
        mapData["0"] = url
        if device.platform == "android" then
            local defaultKey = "VOICE_PERCENT" .. CF.areaData:getAreaID() .. CF.selfPlayerData:getNumberID()
            local fastvoiceNum = tostring(cc.UserDefault:getInstance():getIntegerForKey(defaultKey, 50) / 100)
            mapData = { ["0"] = url, ["1"] = fastvoiceNum }
        end
        self:callFunctionWithMap("fastvo_start_play", mapData)
    end
end

return GoldSdkManager�