local HttpManager50 = class("HttpManager50")
local cjson = require("cjson")
require("app.Manager.WebToken")

local callBackType = {
    [0] = cc.XMLHTTPREQUEST_RESPONSE_STRING, -- 返回字符串类型
    [1] = cc.XMLHTTPREQUEST_RESPONSE_ARRAY_BUFFER, -- 返回字节数组类型
    [2] = cc.XMLHTTPREQUEST_RESPONSE_BLOB, -- 返回二进制大对象类型
    [3] = cc.XMLHTTPREQUEST_RESPONSE_DOCUMENT, -- 返回文档对象类型
    [4] = cc.XMLHTTPREQUEST_RESPONSE_JSON -- 返回JSON数据类型
}

function HttpManager50:ctor()
    self._httpReqList = {}
end

function HttpManager50:getInstance()
    if not HttpManager50._instance then
        HttpManager50._instance = HttpManager50.new()
    end
    return HttpManager50._instance
end

function HttpManager50:RequestGet(httpid, url, callType, func, headmap)
    url = XH.StringTool.replaceSiblyUrl(url) or url
    self:RequestHttpUrl(httpid, "GET", url, "", callType, func, headmap)
end

function HttpManager50:RequestPost(httpid, url, params, callType, func, headmap)
    url = XH.StringTool.replaceSiblyUrl(url) or url
    self:RequestHttpUrl(httpid, "POST", url, params, callType, func, headmap)
end

function HttpManager50:RequestHttpUrl(httpid, typ, url, params, callType, func, headmap)
 
    if callType == nil then
        callType = 0
    end

    local webToken = XH.WebToken:getWebToken()
    if webToken == '' then
        self:AddReqToList(httpid, typ, url, params, callType, func, headmap)
        return
    end
    if typ == "GET" then
        url = url .. "&jwt_token=" .. webToken
    end

    local xhr = cc.XMLHttpRequest:new()
    xhr.responseType = callBackType[callType]
    xhr:open(typ, url)

    headmap = headmap or {}
    headmap.Authorization = "Bearer " .. webToken
    for i, var in pairs(headmap) do
        xhr:setRequestHeader(i, var)
    end

    local function onHttpReqCallBack()
        if callType == XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON then
            if xhr.response then
                local cjsonData
                local ok, res_tab = pcall(cjson.decode, xhr.response)
                if not ok then
                    cjsonData = xhr.response
                else
                    cjsonData = res_tab
                end
                if func then
                    func(httpid, xhr.status, cjsonData, xhr)
                end
            else
                if func then
                    func(httpid, xhr.status, xhr.response, xhr)
                end
            end
        else
            if xhr.response then
                if func then
                    func(httpid, xhr.status, xhr.response, xhr)
                end
            else
                if func then
                    func(httpid, xhr.status, xhr.response, xhr)
                end
            end
        end

    end
    xhr:registerScriptHandler(onHttpReqCallBack)
    xhr:send(params) -- 发送请求
end

function HttpManager50:AddReqToList(httpid, typ, url, params, callType, func, headmap)
    local reqTable = {}
    reqTable.httpid = httpid
    reqTable.typ = typ
    reqTable.url = url
    reqTable.params = params
    reqTable.callType = callType
    reqTable.func = func
    reqTable.headmap = headmap
    table.insert(self._httpReqList, reqTable)
end

function HttpManager50:initTokenComplete()
    if #self._httpReqList ~= 0 then
        local reqList = clone(self._httpReqList)
        for _, value in ipairs(reqList) do
            self:RequestHttpUrl(value.httpid, value.typ, value.url, value.params, value.callType, value.func, value.headmap)
        end
    end
    self._httpReqList = {}
end

return HttpManager50
�