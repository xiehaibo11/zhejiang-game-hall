local RemoteImage = class("RemoteImage", function()
    return ccui.ImageView:create()
end)

local DefaultDownloadPath = cc.FileUtils:getInstance():getWritablePath() .. "tmpImageCachDir/"
local DefaultRetryCount = 3

function RemoteImage:ctor()
    self._retryCount = DefaultRetryCount
    self._downloadPath = DefaultDownloadPath
    self._remoteUrl = nil
    self._downloadCount = 0
    self._defaultTexture = nil
    self._maxContentSize = nil
    self._callBack = nil
end

function RemoteImage:setDownloadPath(downloadPath)
    if not downloadPath then
        return
    end
    self._downloadPath = downloadPath
end

function RemoteImage:setRetryCount(retryCount)
    if not retryCount then
        return
    end
    self._retryCount = retryCount
end

function RemoteImage:setDefaultTexture(fileName, texType)
    if self._remoteUrl == nil then
        self:loadTexture(fileName, texType)
    end
    self._defaultTexture = {
        fileName = fileName, texType = texType
    }
end

-- function RemoteImage:getlocalFile()
--     if not self._remoteUrl then
--         return
--     end
--     return self._downloadPath .. string.gsub(self._remoteUrl, "[:/.]", "_") .. ".png"
-- end

function RemoteImage:getlocalFile()
    if not self._remoteUrl then
        return
    end
    local url = string.gsub(self._remoteUrl, "?", "_")
    return self._downloadPath .. string.gsub(url, "[:/.]", "_") .. ".png"
end

function RemoteImage:setUrl(url, bForce, retryCount)
    if url and url ~= "" then
        if url ~= self._remoteUrl then
            if retryCount and retryCount > 0 then
                self._retryCount = retryCount
            end
            self._remoteUrl = url
            self:loadLocalFile(bForce)
        end
    else
        self._remoteUrl = nil
        if self._defaultTexture then
            self:loadTexture(self._defaultTexture.fileName, self._defaultTexture.texType)
            self:onCallBack()
        end
    end
end

function RemoteImage:onCallBack()
    if type(self._callBack) == "function" then
        self._callBack(self)
    end
end

function RemoteImage:loadLocalFile(bForce)
    bForce = bForce or false
    if not bForce and self:getFileSize(self:getlocalFile()) > 0 then
        self:loadTexture(self:getlocalFile(), ccui.TextureResType.localType)
        if self._maxContentSize then
            local size = self:getContentSize()
            local factor = math.max( size.width / self._maxContentSize.width, size.height / self._maxContentSize.height )
            self:ignoreContentAdaptWithSize(false)
            self:setContentSize(cc.size(size.width / factor,  size.height / factor))
        end
        self:onCallBack()
    else
        self:downloadImage(self._remoteUrl)
    end
end

function RemoteImage:getFileSize(fileName)
    local fileSize = -1
    local file = cc.FileUtils:getInstance():getStringFromFile(fileName)
    if file then
        fileSize = string.len(file)
    end
    return fileSize
end

function RemoteImage:downloadImage(url)
    self._downloadCount = self._downloadCount + 1
    local xhr = cc.XMLHttpRequest:new()
    xhr.responseType = cc.XMLHTTPREQUEST_RESPONSE_BLOB
    xhr:open("GET", url)
    local function onDownload()
        if xhr.readyState == 4 and xhr.status == 200 then
            if url == self._remoteUrl and self.onDownloaded then
                self:onDownloaded(true, xhr.response)
            end
        else
            if self.onDownloaded then
                self:onDownloaded(false, nil)
            end
        end
    end
    xhr:registerScriptHandler(onDownload)
    xhr:send()
end

function RemoteImage:onDownloaded(isOk, response)
    if isOk then
        if not cc.FileUtils:getInstance():isDirectoryExist(self._downloadPath) then
            cc.FileUtils:getInstance():createDirectory(self._downloadPath)
        end
        io.writefile(self:getlocalFile(), response, "w+b")
        self:loadLocalFile()
    else
        if self._downloadCount < self._retryCount then
            self:downloadImage(self._remoteUrl)
        end
    end
end

function RemoteImage:setMaxContentSize(size)
    self:ignoreContentAdaptWithSize(true)
    self:setContentSize(0, 0)

    self._maxContentSize = size
    return self
end

function RemoteImage:setCallBack(callback)
    self._callBack = callback
    return self
end

return RemoteImage�