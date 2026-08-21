local SysTool = class("SysTool")

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

function SysTool.performDelayOnce(func, delayTime)
    return XH.SysTool.performDelayOnce(func, delayTime)
end

function SysTool.captureScreenshot(callback, fileName)
    XH.SysTool.captureScreenshot(callback, fileName)
end

function SysTool.CompareToBundleVersion(targetVer)
    return XH.SysTool:CompareToBundleVersion(targetVer)
end

function SysTool:base64_decode(data)
    return XH.SysTool:base64_decode(data)
end

return SysTool
�