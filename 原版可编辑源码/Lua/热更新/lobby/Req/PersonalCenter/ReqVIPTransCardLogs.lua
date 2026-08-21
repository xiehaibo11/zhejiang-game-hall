local ReqVIPTransCardLogs = class("ReqVIPTransCardLogs", XH.ReqProtobuf)

function ReqVIPTransCardLogs:ctor()
    ReqVIPTransCardLogs.super.ctor(self)
    self._protobuf = require("app.Protobuf.TeaHouseProtobuf")
    self._reqProtobuf = self._protobuf.VIPTransCardLogsRequest
end

function ReqVIPTransCardLogs:start(timeoutTime, page, page_size, optType)
    if ReqVIPTransCardLogs.super.start(self, timeoutTime) == false then
        return
    end
    self._logList = {}
    self._reqProtobuf.data.oper_type = optType -- 操作类型,0：全部,1:赠送,2:收到
    self._reqProtobuf.data.cur_page = page
    self._reqProtobuf.data.page_size = page_size
    self:sendProtobufMsg()
end

function ReqVIPTransCardLogs:onMsgReceive(msgData)
    if msgData and msgData.nXYData and msgData.nXYData.resp and msgData.nXYData.resp.err_code == 0 then
        for _, log in ipairs(msgData.nXYData.logs) do
            table.insert(self._logList, log)
        end
        msgData.nXYData.logs = self._logList
        self:success(msgData)
    else
        self:fail(msgData)
    end
end

return ReqVIPTransCardLogs