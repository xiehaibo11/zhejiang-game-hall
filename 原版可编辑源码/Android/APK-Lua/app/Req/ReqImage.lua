
local ReqImage = class("ReqImage", XH.ReqHttp)

local HTTP_DEFINE_ID = 123456

--����ͼƬ������
ReqImage.RespImageType = {
    BINARY = 2, --������
    BASE_64 = 0 --base64
}

function ReqImage:ctor()
    ReqImage.super.ctor(self)
    self._imgPath = ""
    self._respImageType = nil
    self._tag = nil
end

function ReqImage:start(url, savePath, tag, respType, timeoutTime)
    if url == "/0" or url == "%/0" or savePath == nil then     --û������΢��ͷ������⴦������Ȼ�ͻ�һֱ�����ء�
        return 
    end

    if ReqImage.super.start(self, timeoutTime) == false then
        return
    end

    self._tag = tag
    self._imgPath = savePath or ""
    self._respImageType = respType or ReqImage.RespImageType.BINARY
    XH.httpManager:RequestGet(HTTP_DEFINE_ID, url, self._respImageType, handler(self, self.onHttpResult))
end


--��ȡ����·�������������Ŀ¼�򴴽�Ŀ¼
function ReqImage:getFullPath(savePath)
    local dirs = string.split(savePath, "/")
    local fullPath = device.writablePath
    
    local checkDir = function(dirName)
        if dirName == nil or dirName == "" then
            return fullPath
        end
        
        local fileDir = fullPath .. dirName .. "/"
        local isDirExist = cc.FileUtils:getInstance():isDirectoryExist(fileDir)
        if not isDirExist then
            cc.FileUtils:getInstance():createDirectory(fileDir)
        end
        return fileDir
    end

    for i = 1, #dirs - 1 do
        fullPath = checkDir(dirs[i])
    end
    
    return fullPath .. dirs[#dirs]
end

function ReqImage:onHttpResult(httpID, code, resp)
    if self._respImageType == ReqImage.RespImageType.BASE_64 then
        self:onDealBase64Resp(code, resp)
    else
        self:onDealBinaryResp(code, resp)
    end
end

--����base64��ʽͼƬ
function ReqImage:onDealBase64Resp(code, resp)
    if code == 200 then
        local respObj
        local ok, msg = pcall(function()
            respObj = cjson.decode(resp)
        end)
    
        if not ok then
            print("url.toJson failed: " .. msg)
            self:fail()
            return
        end
        
        local filePathName = self:getFullPath(self._imgPath)
        
        local tms = socket:gettime()
        local imageData = XH.SysTool:base64_decode(respObj.data)

        print("CYF---" ..socket:gettime() - tms)

        io.writefile(filePathName, imageData, "w+b")
        self:success(filePathName)
    else
        self:setMessage("download image failed...")
        self:fail()
    end
end

--����������ͼƬ��ʽ
function ReqImage:onDealBinaryResp(code, resp)
    if code == 200 then
        local filePathName = self:getFullPath(self._imgPath)
        io.writefile(filePathName, resp, "w+b")
        self:success(filePathName)
    else
        self:setMessage("download image failed...")
        self:fail()
    end
end

return ReqImage

