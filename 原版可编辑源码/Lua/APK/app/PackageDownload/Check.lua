--- 强更检测模块
-- @classmod check

local check = class("check")
cjson = require "cjson"
local config = require("app.PackageDownload.Config")
local tipUI = require("app.PackageDownload.TipsUI")
local SysTool = require("app.Tool.SysTool")

local UPDATE_TYPE = {
    No = 0,
    Force = 1,
    Gerenal = 2
}

local UPDATE_STATUS = {
    CLOSE = 0,
    OPEN = 1
}

--- 初始化，SDK
function check:ctor()
    self._callback = nil
    self._versionInfo = {}
    self._apkPath = ""
end

function check:start(callback, fromPlayerSelf)
    self._fromPlayerSelf = fromPlayerSelf
    if next(self._versionInfo) then
        self:versionCallback()
    else
        self._callback = callback
        self:getVersion()
    end
end

--- 通过web获取更新信息
function check:getVersion()
    local func = function(status)
        if status == "success" then
            local content = cc.FileUtils:getInstance():getStringFromFile(config.jsonFilePath)
            local data = cjson.decode(content)
            --- 版本信息
            -- @table versionInfo
            -- @int updateType
            -- @string content
            -- @int fileSize
            -- @string url
            self._versionInfo = self:parseJsonInfo(data)
            cc.UserDefault:getInstance():setStringForKey("PackageUpdate", cjson.encode(self._versionInfo))
            self:versionCallback()
        else
            -- 超时的情况
            if self._callback then
                self._callback()
            end
        end
    end

    print("PackageDownload check channelID: " .. SysTool.getChannelID())
    if tonumber(SysTool.getChannelID()) == 30002 then
        self:downloadJsonFile(config.downloadPath, config.saveJsonFile, func, 2)
    else
        self:downloadJsonFile(config.downloadPathCPS, config.saveJsonFile, func, 2)
    end
end

--- 解析json信息
-- @tab data
function check:parseJsonInfo(data)
    -- cps包与主包返回格式不一样，特殊处理
    local info = nil
    if data and data["upgrade"] then 
        info = data["upgrade"][device.platform] 
        if not info and config.cps2NewChannel[tonumber(SysTool.getChannelID())] then
            info = data["upgrade"][config.cps2NewChannel[tonumber(SysTool.getChannelID())]]
        end
    end
    local versionInfo = {}
    if info then
        if not info.status or info.status == UPDATE_STATUS.OPEN then
            versionInfo.updateType = self:checkUpdateType(info)
        else
            versionInfo.updateType = UPDATE_TYPE.No
        end
        versionInfo.content = info.upgrade_cont or ""
        versionInfo.fileSize = info.last_package_size or 0
        versionInfo.url = info.last_download_url
        versionInfo.last_version = info.last_version
    end
    return versionInfo
end

--- 检查更新状态
-- @tab info
-- @return updateType
function check:checkUpdateType(info)
    local version = cc.Application:getInstance():getVersion()
    if version == info.last_version then
        return UPDATE_TYPE.No
    end
    local verTable = string.split(version, ".")

    if tonumber(SysTool.getChannelID()) ~= 30002 then
        local lastVerTable = string.split(info.last_version, ".")
        for i = 1, #verTable do
            if tonumber(verTable[i]) > tonumber(lastVerTable[i]) then
                break
            elseif tonumber(verTable[i]) < tonumber(lastVerTable[i]) then
                return UPDATE_TYPE.Force
            end
        end
        return UPDATE_TYPE.No
    end
    
    if info.force_version then
        local forceVerTable = string.split(info.force_version, ".")
        for i = 1, #verTable do
            if tonumber(verTable[i]) > tonumber(forceVerTable[i]) then
                break
            elseif tonumber(verTable[i]) < tonumber(forceVerTable[i]) then
                return UPDATE_TYPE.Force
            end
        end
    end
    if info.tip_version then
        local tipVerTable = string.split(info.tip_version, ".")
        for i = 1, #verTable do
            if tonumber(verTable[i]) > tonumber(tipVerTable[i]) then
                break
            elseif tonumber(verTable[i]) < tonumber(tipVerTable[i]) then
                return UPDATE_TYPE.Gerenal
            end
        end
    end
    return UPDATE_TYPE.No
end

--- 版本请求回调
function check:versionCallback()
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    if self._versionInfo.updateType and self._versionInfo.last_version and self._versionInfo.updateType == UPDATE_TYPE.Force then -- 需要强制更新
        self._apkPath = config.apkPath .. self._versionInfo.last_version .. "/update.apk"
        local sysTool = require("app.Tool.SysTool")
        sysTool.performDelayOnce(function()
            if cc.FileUtils:getInstance():isFileExist(self._apkPath) then
                tipUI.new("Install", self._versionInfo, nil)
            else
                tipUI.new("Update", self._versionInfo, handler(self, self.downloadAPKFile))
            end
        end, 0.3)
    else
        if self._callback then
            self._callback()
        end
        local event = cc.EventCustom:new("TOTALUPDATE_CLOSE")
        event.callback = false
        eventDispatcher:dispatchEvent(event)
    end
end

--- 普通更新
-- @tparam versionInfo versionInfo
function check:GerenalUpdate(versionInfo)
    self._versionInfo = versionInfo
    self._apkPath = config.apkPath .. self._versionInfo.last_version .. "/update.apk"
    if cc.FileUtils:getInstance():isFileExist(self._apkPath) then
        tipUI.new("Install", self._versionInfo, nil)
    else
        tipUI.new("Update", self._versionInfo, handler(self, self.downloadAPKFile))
    end
end

--- 下载APK文件
function check:downloadAPKFile()
    local function progressCallback(progress)
        local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
        local event = cc.EventCustom:new("TOTALUPDATE_PROCESS")
        event.process = progress
        eventDispatcher:dispatchEvent(event)
    end
    local function endCallback()
        un.FileSystem.renameFile(self._apkPath .. ".tmp", self._apkPath)
        tipUI.new("Install", self._versionInfo)
    end
    local tool = require("app.PackageDownload.Tool")
    tool.download(self._versionInfo.url, self._apkPath .. ".tmp", tonumber(self._versionInfo.fileSize), progressCallback, endCallback)
end

--- 下载Json文件
-- @string url json文件地址
-- @string fileName 文件保存文件名
-- @func func 回调函数名
-- @int tryCnt 尝试次数
-- @return bool 是否成功
function check:downloadJsonFile(url, fileName, func, tryCnt)
    if not url then
        return false
    end
    tryCnt = tryCnt - 1
    local xhr = cc.XMLHttpRequest:new()
    xhr.responseType = cc.XMLHTTPREQUEST_RESPONSE_BLOB
    xhr.url = url
    xhr:open("GET", url)
    local function onDownload()
        if xhr.readyState == 4 and xhr.status == 200 then
            local file = un.FileSystem.getWritePath() .. fileName
            cc.FileUtils:getInstance():writeStringToFile(xhr.response, file)
            func("success", fileName)
        else
            if tryCnt > 0 then
                self:downloadJsonFile(url, fileName, func, tryCnt - 1)
            else
                func("fail", xhr)
            end
        end
    end
    xhr:registerScriptHandler(onDownload)
    xhr:send()
    return true
end

return check
