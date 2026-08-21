local HttpManager50 = class("HttpManager50")
local cjson = require("cjson")
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")

local callBackType = {
    [0] = cc.XMLHTTPREQUEST_RESPONSE_STRING, -- 返回字符串类型
    [1] = cc.XMLHTTPREQUEST_RESPONSE_ARRAY_BUFFER, -- 返回字节数组类型
    [2] = cc.XMLHTTPREQUEST_RESPONSE_BLOB, -- 返回二进制大对象类型
    [3] = cc.XMLHTTPREQUEST_RESPONSE_DOCUMENT, -- 返回文档对象类型
    [4] = cc.XMLHTTPREQUEST_RESPONSE_JSON -- 返回JSON数据类型
}

function HttpManager50:ctor()
    self._bInReqToken50 = false
    self._httpReqList50 = {}
    self._nowReqList = {}
end

function HttpManager50:freshTokenData()
    self._tokenData = {}
    self._tokenData[GoldPlayerData.NumId] = {}
    self._tokenData[GoldPlayerData.NumId].tokenStr = NG.userDefault:getValue(NG.userDefault.KEY_ID.KW_LOCAL_TOKEN_50, "")
    self._tokenData[GoldPlayerData.NumId].expTime = NG.userDefault:getValue(NG.userDefault.KEY_ID.KW_LOCAL_TOKEN_TIME_50, 0)
end

function HttpManager50:getTokenData()
    if self._tokenData == nil then
        return nil
    end
    return self._tokenData[GoldPlayerData.NumId]
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
    if not self:getTokenData() then
        self:freshTokenData()
    end
    if callType == nil then
        callType = 0
    end

    if self:getTokenData().tokenStr == "" or self:getTokenData().expTime == 0 or os.time() > self:getTokenData().expTime then
        self:PushReqToList(httpid, typ, url, params, callType, func, headmap)
        self:RequestToken()
        return
    end

    if typ == "GET" then
        url = url .. "&jwt_token=" .. self:getTokenData().tokenStr
    end

    local xhr = cc.XMLHttpRequest:new()
    xhr.responseType = callBackType[callType]
    xhr:open(typ, url)

    headmap = headmap or {}
    headmap.Authorization = "Bearer " .. self:getTokenData().tokenStr
    for i, var in pairs(headmap) do
        xhr:setRequestHeader(i, var)
    end

    local function onHttpReqCallBack()
        if callType == 4 then
            if xhr.response then
                local cjsonData
                local ok, res_tab = pcall(cjson.decode, xhr.response)
                if not ok then
                    cjsonData = xhr.response
                else
                    cjsonData = res_tab
                end
                if func then
                    if cjsonData and cjsonData.cr and cjsonData.cr.errCode == 401 and (cjsonData.cr.errReason == "JWT token has expired" or cjsonData.cr.errReason == "Token is invalid") then
                        self._bInReqToken50 = false
                        self:RequestToken()
                    else
                        func(httpid, xhr.status, cjsonData, xhr)
                    end
                end
            end
        else
            if xhr.response then
                if func then
                    func(httpid, xhr.status, xhr.response, xhr)
                end
            end
        end

    end
    xhr:registerScriptHandler(onHttpReqCallBack)
    xhr:send(params) -- 发送请求
end

function HttpManager50:RequestToken()
    if self._bInReqToken50 then
        return
    end
    self._bInReqToken50 = true
    local ReqToken = require("newgold.GoldCommon.Req.GoldReqToken50")
    local reqToken = ReqToken:new()
    reqToken:addReqCallBack(self, self.onReqTokenCallBack)
    reqToken:start(GoldAreaConfig.TenantID, GoldAreaConfig.AreaID, GoldPlayerData.NumId, GoldAreaConfig.GroupID, 10)
end

function HttpManager50:onReqTokenCallBack(cell, nTtype, data)
    if NG == nil then
        return
    end
    if nTtype == NG.Req.TYPE.SUCCESS then
        if data and data.nXYData and data.nXYData.token then
            local tokenStr = data.nXYData.token
            local tokenArr = string.split(tokenStr, ".")
            if #tokenArr >= 2 then
                local exDataStr = NG.SysTool:base64_decode(tokenArr[2])
                local tempExData = cjson.decode(exDataStr)
                local expTime = tempExData.exp or 0
                NG.userDefault:setValue(NG.userDefault.KEY_ID.KW_LOCAL_TOKEN_50, tokenStr)
                NG.userDefault:setValue(NG.userDefault.KEY_ID.KW_LOCAL_TOKEN_TIME_50, expTime)
                self:freshTokenData()
            end
        end

        if next(self._httpReqList50) then
            self._nowReqList = clone(self._httpReqList50)
            self._httpReqList50 = {}
            for i = #self._nowReqList, 1, -1 do
                local tmp = self._nowReqList[i]
                self:RequestHttpUrl(tmp.httpid, tmp.typ, tmp.url, tmp.params, tmp.callType, tmp.func, tmp.headmap, nil, true)
                table.remove(self._nowReqList, i)
            end
        end
    end
    self._bInReqToken50 = false
end

function HttpManager50:PushReqToList(httpid, typ, url, params, callType, func, headmap)
    local reqTable = {}
    reqTable.httpid = httpid
    reqTable.typ = typ
    reqTable.url = url
    reqTable.params = params
    reqTable.callType = callType
    reqTable.func = func
    reqTable.headmap = headmap
    table.insert(self._httpReqList50, 1, reqTable)
    self._httpReqList50 = table.unique(self._httpReqList50, true)
end

return HttpManager50
�