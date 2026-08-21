local Cell = import("..GameTea.Cell")
local CellWXImageDownload = class("CellWXImageDownload", Cell)
-- true 代表下载已开启过, false 代表下载未开启过
CellWXImageDownload._urlDownloadStatus = {}
function CellWXImageDownload:ctor()
    CellWXImageDownload.super.ctor(self)
end

function CellWXImageDownload:start(url,timeoutTime)
    if url == "/0" or url == "%/0" then     --没有设置微信头像的特殊处理，不然就会一直在下载。
        return 
    end
    if CellWXImageDownload.super.start(self,timeoutTime) == false or timeoutTime <= 0 then
        return
    end
    
    url = self:httpsToHttp(url)
    
    local imageRelativePath = "tmpImageCachDir/"..XH.StringTool.getImageNameByUrl(url)
    local imageAbsolutePath = cc.FileUtils:getInstance():getWritablePath() .. imageRelativePath
    local imageTmpRelativePath = imageRelativePath .. ".tmp"
    local imageTmpAbsolutePath = imageAbsolutePath .. ".tmp"
    local isPngExist = cc.FileUtils:getInstance():isFileExist(imageAbsolutePath)
    local isPngTmpExist = cc.FileUtils:getInstance():isFileExist(imageTmpAbsolutePath)
    
    print("WXImageDebug->url :"..url)
    if isPngExist then
        self:success(imageAbsolutePath)
        print("WXImageDebug->PNG图片已经存在")
        return
    else
        print("WXImageDebug->PNG图片不存在")
        if isPngTmpExist then
            if self._urlDownloadStatus[url] ~= true then
                print("WXImageDebug->Tmp文件异常,删除文件新增下载")
                os.remove(imageTmpAbsolutePath)
            else
                print("WXImageDebug->Tmp文件已经存在,停止")
                self:fail()
                return
            end
        else
            print("WXImageDebug->Tmp文件不存在")
            if self._urlDownloadStatus[url] == nil then
                print("WXImageDebug->尚未开始下载,新增下载")
            elseif self._urlDownloadStatus[url] then
            -- 判断是否是因为时间间隔很短使得之前的下载线程还未建立起文件
                print("WXImageDebug->已经存在下载实例,停止")
                self:fail()
                return
            elseif not self._urlDownloadStatus[url] then
                print("WXImageDebug->下载失败,新增下载")
            end
        end
    end
    self._url = url
    self._urlDownloadStatus[url] = true
    -- self._mDownLoadManager = XH.bf.DownLoadManager:new()
    -- self._mDownLoadManager:setDelegate(handler(self,self.onDownloadSuccessCallBack),cc.ASSETSMANAGER_PROTOCOL_SUCCESS)
    -- self._mDownLoadManager:setDelegate(handler(self,self.onDownloadFailCallBack),cc.ASSETSMANAGER_PROTOCOL_ERROR)
    -- self._mDownLoadManager:start(url, imageTmpRelativePath)


    local downloadImage = require("app.Req.DownloadImage")
    local reqDownloadImage = downloadImage:new()
    reqDownloadImage:addReqCallBack(self, self.onDownloadSuccessCallBack)
    reqDownloadImage:setUrl(url, false)

    print("WXImageDebug->urlDownloadAt:"..imageTmpRelativePath)
end

function CellWXImageDownload:onDownloadSuccessCallBack(downLoadManager, errorCode)
    print("WXImageDebug->下载成功了")
    -- local url = self._url
    -- local newName = self:getImageNameByUrl(url) .. ".png"
    -- local oldName = newName .. ".tmp"
    -- local path = cc.FileUtils:getInstance():getWritablePath() .. "headCache/"
    -- cc.FileUtils:getInstance():renameFile(path,oldName, newName)
    self:success(downLoadManager._localUrl)
end

function CellWXImageDownload:onDownloadFailCallBack(downLoadManager, errorCode)
    print("WXImageDebug->下载失败了,尝试重新下载")
    os.remove(downLoadManager:getStoragePath())
    self._urlDownloadStatus[self._url] = false
    local callBacks = self._callBacks
    self:stop()
    self._callBacks = callBacks
    print("WXImageDebug->剩余时间:"..self._timeoutTime - self:getCurrentConsumeTime())
    self:start(self._url,self._timeoutTime - self:getCurrentConsumeTime())
end

function CellWXImageDownload:getImageNameByUrl(url)
    local imageName,_ = string.gsub(url, "http://", "h")   
    imageName,_ = string.gsub(imageName, "/", "_")
    return imageName
end

function CellWXImageDownload:httpsToHttp(url)
    local httpUrl = string.gsub(url, "https://", "http://")
    return httpUrl
end

return CellWXImageDownload
