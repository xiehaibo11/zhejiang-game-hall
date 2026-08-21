local ReqSxvipPrivilege = class("ReqSxvipPrivilege", XH.ReqHttp)
local SxvipConfig = require("lobby.Modules.Sxvip.Config")

function ReqSxvipPrivilege:ctor()
    ReqSxvipPrivilege.super.ctor(self)
    self._askId = 0
end

function ReqSxvipPrivilege:start(timeout)
    if ReqSxvipPrivilege.super.start(self, timeout) == false then
        return
    end
    local areaId = XH.areaData:getAreaID()
    local url = SxvipConfig:getPrivilegeUrl()
    if url then
        url = string.format(url , areaId) .. "?t=" .. os.time()
        XH.httpManager:RequestGet(XH.HttpDefine.URL_SXVIP_PRIVILEGE, url , 4, handler(self, self.onHttpConfigDataFileCallBack))
    end
end

function ReqSxvipPrivilege:onHttpConfigDataFileCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.URL_SXVIP_PRIVILEGE then
        return
    end
    if status == 200 then
        self:success(response)
    else
        self:setMessage("")
        self:fail()
    end
end

return ReqSxvipPrivilege
