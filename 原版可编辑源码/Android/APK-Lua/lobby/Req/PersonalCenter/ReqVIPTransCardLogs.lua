local ReqVIPTransCardLogs = class("ReqVIPTransCardLogs", XH.ReqProtobuf)

function ReqVIPTransCardLogs:ctor()
    ReqVIPTransCardLogs.super.ctor(self)
    self._protobuf = require("app.Protobuf.TeaHouseProtobuf")
    self._reqProtobuf = self._protobuf.VIPTransCardLogsRequest
end

function ReqVIPTransCardLogs:start(timeoutTime, page, page_size)
    if ReqVIPTransCardLogs.super.start(self, timeoutTime) == false then
        return
    end
    self._logList = {}
    self._reqProtobuf.data.oper_type = 0
    self._reqProtobuf.data.cur_page = page
    self._reqProtobuf.data.page_size = page_size
    self:sendProtobufMsg()
end

function ReqVIPTransCardLogs:onMsgReceive(msgData)
    if msgData and msgData.nXYData and msgData.nXYData.resp and msgData.nXYData.resp.err_code == 0 then
        if msgData.nXYData.total_page == msgData.nXYData.cur_page or msgData.nXYData.total_page == 0 then
            for _, log in ipairs(msgData.nXYData.logs) do
                table.insert(self._logList,log)
            end
            msgData.nXYData.logs = self._logList
            self:success(msgData)
        else
            for _, log in ipairs(msgData.nXYData.logs) do
                table.insert(self._logList,log)
            end
            self._reqProtobuf.data.cur_page = self._reqProtobuf.data.cur_page + 1
            self:sendProtobufMsg()
        end
    else
        self:fail(msgData)
    end
end

return ReqVIPTransCardLogs