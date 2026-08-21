-----------------------------------------------------
-- @name RemoteSprite
-- @author Stephen Cai
-- @date 2019-07-03
-- @brief 下载远程图片控件
-----------------------------------------------------

local RemoteSprite = class("RemoteSprite",function()
    return cc.Sprite:create()
end)

local DEFAULT_DOWNLOAD_IMAGE_DIR = device.writablePath .. "tmpImageCachDir/"

function RemoteSprite:ctor()
    self._url = ""
    self._localUrl = ""
    self._downloadCount = 0
    self._maxDownloadCount = 3
    self._dir = DEFAULT_DOWNLOAD_IMAGE_DIR
    self._callBack = nil
end

function RemoteSprite:setCallBack(callback)
    self._callBack = callback
    return self
end

function RemoteSprite:setUrl(url, force, retryCount)
    if url and url ~= "" then
        if url ~= self._url then
            if retryCount and retryCount > 0 then
                self._maxDownloadCount = retryCount
            end

            self._url = url
            local name = self:getImageNameByUrl(self._url)
            self._localUrl = self._dir .. name
            self:loadImage(force)
        end
    end
    return self
end

function RemoteSprite:loadImage(force)
    force = force or false
    if not force and self:getFileSize(self._localUrl) > 0 then
        -- local size = self:getContentSize()
        -- self:loadTexture(self._localUrl, ccui.TextureResType.localType)
        self:setTexture(self._localUrl)
        -- self:setSpriteFrame(self._localUrl)
        -- local size1 = self:getContentSize()
        if type(self._callBack) == "function" then
            self._callBack(self)
        end
        print("loadImage...")
    else
        self:RequestRemoteImage(self._url)
    end
end

function RemoteSprite:RequestRemoteImage(url)
    local xhr = cc.XMLHttpRequest:new()
    xhr.responseType = cc.XMLHTTPREQUEST_RESPONSE_BLOB
    xhr:open("GET", url)

    self._downloadCount = self._downloadCount + 1 --下载次数加一
    local function onDownload()
        if  xhr.readyState == 4 and xhr.status == 200 then
            --过滤连续设置url的情况下,后发的可能先收到回包
            if url == self._url and self.onDownloaded then
                self:onDownloaded(true, xhr.response)
            elseif self.onDownloaded then
                self:onDownloaded(false, nil)
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

function RemoteSprite:onDownloaded(isOk, response)
    if isOk then
        local isDirExist = cc.FileUtils:getInstance():isDirectoryExist(self._dir)
        if not isDirExist then
            cc.FileUtils:getInstance():createDirectory(self._dir)
        end

        io.writefile(self._localUrl, response, "w+b")
        self:loadImage()
    else
        --下载失败了,如果下载次数还有的话重新下载
        if self._downloadCount < self._maxDownloadCount then
            self:RequestRemoteImage(self._url)
        end
    end
end

function RemoteSprite:getImageNameByUrl(url)
    local imageName,_ = string.gsub(url, "[:/.]", "_")
    return imageName .. ".png"
end

--获取文件大小
function RemoteSprite:getFileSize(fileName)
    local fileSize = -1
    local gameListJson = cc.FileUtils:getInstance():getStringFromFile(fileName)
    if  gameListJson then 
        fileSize = string.len(gameListJson)
    end
    return fileSize
end

return RemoteSprite