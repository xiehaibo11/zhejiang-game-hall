local ConfigerManager = class("ConfigerManager")

function ConfigerManager:getIsWXBanUrl()
    return XH.configerManager:getIsWXBanUrl()
end

function ConfigerManager:getIsIosTishen()
    return XH.configerManager:getIsIosTishen()
end

function ConfigerManager:getIsOnlyWXShare()
    return XH.configerManager:getIsOnlyWXShare()
end

return ConfigerManagerr