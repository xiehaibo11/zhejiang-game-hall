local GoldReqHttp = class("GoldReqHttp", NG.Req)

function GoldReqHttp:ctor()
    GoldReqHttp.super.ctor(self)
end

function GoldReqHttp:success(data)
    GoldReqHttp.super.success(self, data)
end

function GoldReqHttp:fail(data)
    GoldReqHttp.super.fail(self, data)
end

function GoldReqHttp:timeout(data)
    GoldReqHttp.super.timeout(self, data)
end

return GoldReqHttp
�