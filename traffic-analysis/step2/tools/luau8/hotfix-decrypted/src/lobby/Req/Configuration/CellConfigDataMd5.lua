local CellConfigDataMd5 = class("CellConfigDataMd5", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local HttpDefine = require("app.Define.HttpDefine")

function CellConfigDataMd5:start(data_id, env, timeout)
    if CellConfigDataMd5.super.start(self, timeout) == false then
        return
    end

    local data = {}
    self._dataId = data_id
    table.insert(data, "config_type=" .. 3)
    table.insert(data, "data_id=" .. data_id)
    table.insert(data, "env=" .. env)
    table.insert(data, "time=" .. os.time())
    local param = table.concat(data, "&")
    XH.httpManager:RequestGet(HttpDefine.HTTP_ID_CONFIGURATION_MD5, UrlConf.URL_CONFIG_DATA_MD5 .. "?" .. param, 4, handler(self, self.onHttpConfigDataFileCallBack))

end

function CellConfigDataMd5:onHttpConfigDataFileCallBack(eType, status, response)
    if eType == HttpDefine.HTTP_ID_CONFIGURATION_MD5 then
        if status == 200 then
            if response.code == 0 then
                response.localdata = self._dataId;
                self:success(response)
            end
        else
            self:setMessage("MSG_SEND_TIME_OUT")
            self:fail(self._dataId)
        end
    end
end

return CellConfigDataMd5
�