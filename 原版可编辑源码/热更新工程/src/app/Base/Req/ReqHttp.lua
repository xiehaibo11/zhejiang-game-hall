local ReqHttp = class("ReqHttp", XH.Req)

function ReqHttp:ctor()
    ReqHttp.super.ctor(self)
    self._askID = XH.askIDManager:getAskID() -- 子类会用到这个askID
end

function ReqHttp:start(timeoutTime)
    ReqHttp.super.start(self, timeoutTime)
end

function ReqHttp:success(data)
    ReqHttp.super.success(self, data)
end

function ReqHttp:fail(data)
    ReqHttp.super.fail(self, data)
end

function ReqHttp:timeout(data)
    ReqHttp.super.timeout(self, data)
end

return ReqHttp
