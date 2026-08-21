local CellConfigDataFile = class("CellConfigDataFile", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local HttpDefine = require("app.Define.HttpDefine")

function CellConfigDataFile:start(config_ids, env, localdata, localmd5, timeout)
    if CellConfigDataFile.super.start(self, timeout) == false then
        return
    end

    self._localmd5 = localmd5
    self._localdata = localdata
    local data = {}
    table.insert(data, "config_type=" .. 3)
    table.insert(data, "config_ids=" .. config_ids)
    table.insert(data, "env=" .. env)
    table.insert(data, "time=" .. os.time())
    local param = table.concat(data, "&")
    XH.httpManager:RequestGet(HttpDefine.HTTP_ID_CONFIGURATION_FILE, UrlConf.URL_CONFIG_DATA_FILE .. "?" .. param, 4, handler(self, self.onHttpConfigDataFileCallBack))

end

function CellConfigDataFile:onHttpConfigDataFileCallBack(eType, status, response)
    if eType == HttpDefine.HTTP_ID_CONFIGURATION_FILE then
        if status == 200 then
            if response.code == 0 then
                response.localmd5 = self._localmd5
                response.localdata = self._localdata
                self:success(response)
            end
        else
            local temp = {}
            temp.localmd5 = self._localmd5
            temp.localdata = self._localdata
            self:setMessage("MSG_SEND_TIME_OUT")
            self:fail(temp)
        end
    end
end

return CellConfigDataFile
