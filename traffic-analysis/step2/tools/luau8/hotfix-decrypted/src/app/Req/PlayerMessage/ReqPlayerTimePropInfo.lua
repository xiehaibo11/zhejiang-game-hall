local ReqPlayerTimePropInfo = class("ReqPlayerTimePropInfo", XH.ReqProtocol)

function ReqPlayerTimePropInfo:ctor()
    ReqPlayerTimePropInfo.super.ctor(self) 
end


function ReqPlayerTimePropInfo:start(propid, srsgroupid, timeout) 
    if ReqPlayerTimePropInfo.super.start(self, timeout, srsgroupid) == false then
        return
    end
    local reqPlayerPropsData = XH.ToolProtocol.ReqPlayerPropsTimeInfo:new()
    reqPlayerPropsData.askid = 1
    reqPlayerPropsData.propid = propid
    reqPlayerPropsData.diffdays = 7
    self:sendMsg(reqPlayerPropsData, XH.ToolProtocol.RespPlayerPropsTimeInfo, srsgroupid, 0)
end

function ReqPlayerTimePropInfo:onMsgReceive(msgData)
    dump(msgData, "RespPlayerPropsTimeInfo")
    if msgData.flag == XH.ToolProtocol.RespPlayerPropsTimeInfo.FLAG.SUCCESS then
        self:success(msgData)
    else
        self:fail()
    end
end

return ReqPlayerTimePropInfo�