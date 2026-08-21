local GoldHttpManager = class("GoldHttpManager")

function GoldHttpManager:RequestGet(httpid,url,callType,func,headmap,bWithToken)
    return XH.httpManager:RequestGet(httpid,url,callType,func,headmap,bWithToken)
end

function GoldHttpManager:RequestPost(httpid,url,params,callType,func,headmap,bWithToken)
    return XH.httpManager:RequestPost(httpid,url,callType,func,headmap,bWithToken)
end

return GoldHttpManager