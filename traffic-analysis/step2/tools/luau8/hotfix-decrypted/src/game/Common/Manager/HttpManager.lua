local HttpManager = class("HttpManager")

function HttpManager:RequestGet(httpid,url,callType,func,headmap,bWithToken)
    return XH.httpManager:RequestGet(httpid,url,callType,func,headmap,bWithToken)
end

return HttpManager�