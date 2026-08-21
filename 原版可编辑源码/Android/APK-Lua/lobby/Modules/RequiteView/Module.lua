local RequiteModule = class("RequiteModule", XH.ModuleBase)

RequiteModule.EVENT_REQUITE_SUCCESS = "EVENT_REQUITE_SUCCESS"

function RequiteModule:ctor()
    RequiteModule.super.ctor(self)
end

function RequiteModule:getReqConfig()
    return {
        ReqRequiteData = { reqPath = "app.Req.Task.ReqTaskProtocol", callBack = self.onRespTaskProtocolCallBack },
    }
end

function RequiteModule:reqTaskProtocol(taskId, paramStr)
    if not taskId then
        return
    end
    self:startReq("ReqRequiteData", taskId, 0, 0, XH.areaData:getSrsGroupID(), XH.KW_CONFIG_LOGIC_TIME_OUT, paramStr)
end

function RequiteModule:onRespTaskProtocolCallBack(req, type, data)
    local returnData = {}
    returnData.nType = type
    returnData.nData = data
    self:dispatchEvent({name = RequiteModule.EVENT_REQUITE_SUCCESS, data = returnData})
end

return RequiteModule