local SysTool = class("SysTool")

function SysTool.getCurSysTimeStr(char)
    char = char or ":"
    local strFormat = "%H" .. char .. "%M"
    return os.date(strFormat, socket.gettime())
end

function SysTool.performWithDelayGlobal(listener, time)
    local runScene = display.getRunningScene()
    return runScene:runAction(
        cc.Sequence:create(
            cc.DelayTime:create(time),
            cc.CallFunc:create(
                function()
                    listener()
                end
            )
        )
    )
end

function SysTool.GetDevid()
    return XH.SysTool:GetDevid()
end

function SysTool.GetTKDevid()
    return XH.SysTool:getTKDevid()
end

function SysTool.GetLocalDevid()
    return XH.SysTool:GetLocalDevid()
end

function SysTool.GetOsVersion()
    return XH.SysTool:GetOsVersion()
end

function SysTool.GetUniqueIdentifier()
    return XH.SysTool:GetUniqueIdentifier()
end

function SysTool.GetMacAddress()
    return XH.SysTool:MacAddress()
end

function SysTool.GetCurBattery()
    return XH.SysTool:GetCurBattery()
end

function SysTool.getChannelID()
    return XH.SysTool:getChannelID()
end

function SysTool.copyString(string)
    XH.SysTool.copyString(string)
end

function SysTool.url_encode(url)
    return XH.SysTool.url_encode(url)
end

function SysTool.url_decode(url)
    return XH.SysTool.url_decode(url)
end

function SysTool.md5_encode(str)
    return XH.SysTool:md5_encode(str)
end

function SysTool.getAppName()
    return XH.SysTool:getAppName()
end

function SysTool.GetBundleVersion()
    return XH.SysTool:GetBundleVersion()
end

function SysTool.GB_18030_2000_TO_UTF8(string)
    return un.StringUtils.GB_18030_2000_TO_UTF8(string)
end

function SysTool.downloadNewVersionApp()
    return XH.SysTool.downloadNewVersionApp()
end

function SysTool.CheckMd5(buf, len)
    return XH.B.CryptoFunc:CheckMd5(buf, len)
end

function SysTool.rad(d)
    return d * math.pi / 180.0
end

function SysTool.calLantitudeLongitudeDist(lon1, lat1, lon2, lat2)
    local EARTH_RADIUS = 6378137
    local radLat1 = SysTool.rad(lat1)
    local radLat2 = SysTool.rad(lat2)

    SysTool.rad(lon1)
    SysTool.rad(lon1)
    local radLon1 = SysTool.rad(lon1)
    local radLon2 = SysTool.rad(lon2)

    if radLat1 < 0 then
        radLat1 = math.pi / 2 + math.abs(radLat1) --// south
    end
    if radLat1 > 0 then
        radLat1 = math.pi / 2 - math.abs(radLat1) --// north
    end
    if radLon1 < 0 then
        radLon1 = math.pi * 2 - math.abs(radLon1) --// west
    end
    if radLat2 < 0 then
        radLat2 = math.pi / 2 + math.abs(radLat2) --// south
    end
    if radLat2 > 0 then
        radLat2 = math.pi / 2 - math.abs(radLat2) --// north
    end
    if radLon2 < 0 then
        radLon2 = math.pi * 2 - math.abs(radLon2) --// west
    end

    local x1 = EARTH_RADIUS * math.cos(radLon1) * math.sin(radLat1)
    local y1 = EARTH_RADIUS * math.sin(radLon1) * math.sin(radLat1)
    local z1 = EARTH_RADIUS * math.cos(radLat1)

    local x2 = EARTH_RADIUS * math.cos(radLon2) * math.sin(radLat2)
    local y2 = EARTH_RADIUS * math.sin(radLon2) * math.sin(radLat2)
    local z2 = EARTH_RADIUS * math.cos(radLat2)

    local d = math.sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) + (z1 - z2) * (z1 - z2))
    -- 余弦定理求夹角
    local theta = math.acos((EARTH_RADIUS * EARTH_RADIUS + EARTH_RADIUS * EARTH_RADIUS - d * d) / (2 * EARTH_RADIUS * EARTH_RADIUS))
    local dist = theta * EARTH_RADIUS
    return dist
end

function SysTool.performDelayOnce(func, delayTime)
    return XH.SysTool.performDelayOnce(func, delayTime)
end

function SysTool.captureScreenshot(callback, fileName)
    XH.SysTool.captureScreenshot(callback, fileName)
end

function SysTool.support3DMahLayer()
    if device.platform == "ios" then
        return SysTool:GetBundleVersion() >= "1.0.40"
    elseif device.platform == "android" then
        return SysTool:GetBundleVersion() >= "1.0.1"
    end
    return true
end

return SysTool
"