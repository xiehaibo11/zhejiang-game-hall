local ReqHttp = class("ReqHttp", XH.Req)

function ReqHttp:ctor()
    ReqHttp.super.ctor(self)
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
^