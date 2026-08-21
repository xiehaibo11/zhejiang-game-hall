local DownloadImage = class("DownloadImage", XH.Req)

local DEFAULT_DOWNLOAD_IMAGE_DIR = device.writablePath .. "tmpImageCachDir/"

function DownloadImage:ctor()
    DownloadImage.super.ctor(self)
    self._url = ""
    self._localUrl = ""
    self._downloadCount = 0
    self._maxDownloadCount = 3
    self._dir = DEFAULT_DOWNLOAD_IMAGE_DIR
end

function DownloadImage:setUrl(url, force, retryCount)
    if url and url ~= "" then
        if url ~= self._url then
            if retryCount and retryCount > 0 then
                self._maxDownloadCount = retryCount
            end

            self._url = url
            local name = XH.StringTool.getImageNameByUrl(self._url)
            self._localUrl = self._dir .. name
            if force then
                self:ReqDownloadImage(self._url)
            else
                if self:getFileSize(self._localUrl) > 0 then
                    self:success(self._url)
                    return
                else
                    self:ReqDownloadImage(self._url)
                end
            end
        end
    end
end

function DownloadImage:ReqDownloadImage(url)
    local xhr = cc.XMLHttpRequest:new()
    xhr.responseType = cc.XMLHTTPREQUEST_RESPONSE_BLOB
    xhr:open("GET", url)

    self._downloadCount = self._downloadCount + 1 --下载次数加一
    local function onDownload()
        if  xhr.readyState == 4 and xhr.status == 200 then
            --过滤连续设置url的情况下,后发的可能先收到回包
            if url == self._url then
                --self:onDownloaded(true, xhr.response)
                local isDirExist = cc.FileUtils:getInstance():isDirectoryExist(self._dir)
                if not isDirExist then
                    cc.FileUtils:getInstance():createDirectory(self._dir)
                end

                io.writefile(self._localUrl, xhr.response, "w+b")
                self:success(self._url)
            else
                if self._downloadCount < self._maxDownloadCount then
                    self:ReqDownloadImage(self._url)
                else
                    self:fail()
                end
            end
        else
            if self._downloadCount < self._maxDownloadCount then
                self:ReqDownloadImage(self._url)
            else
                self:fail()
            end
        end
    end

    xhr:registerScriptHandler(onDownload)
    xhr:send()
end

--获取文件大小
function DownloadImage:getFileSize(fileName)
    local fileSize = -1
    local gameListJson = cc.FileUtils:getInstance():getStringFromFile(fileName)
    if  gameListJson then 
        fileSize = string.len(gameListJson)
    end
    return fileSize
end

return DownloadImage�
