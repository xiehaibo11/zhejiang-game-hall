local HttpManager = class("HttpManager")
local cjson = require("cjson")

local callBackType = {
    [0] = cc.XMLHTTPREQUEST_RESPONSE_STRING,            -- 返回字符串类型
    [1] = cc.XMLHTTPREQUEST_RESPONSE_ARRAY_BUFFER ,     -- 返回字节数组类型
    [2] = cc.XMLHTTPREQUEST_RESPONSE_BLOB,              -- 返回二进制大对象类型
    [3] = cc.XMLHTTPREQUEST_RESPONSE_DOCUMENT,          -- 返回文档对象类型
    [4] = cc.XMLHTTPREQUEST_RESPONSE_JSON,              -- 返回JSON数据类型
}

function HttpManager:ctor()
    self._bInReqToken = false
    self._httpReqList = { }
    self._nowReqList = { }
end

function HttpManager:getInstance()
    if not HttpManager._instance then
        HttpManager._instance = HttpManager.new()
    end
    return HttpManager._instance
end

function HttpManager:RequestGet(httpid,url,callType,func,headmap,bWithToken)
    self:RequestHttpUrl(httpid,"GET",url,"",callType,func,headmap,bWithToken)
end

function HttpManager:RequestPost(httpid,url,params,callType,func,headmap,bWithToken)
    self:RequestHttpUrl(httpid,"POST",url,params,callType,func,headmap,bWithToken)
end

function HttpManager:RequestHttpUrl(httpid,typ,url,params,callType,func,headmap,bWithToken)
    if callType == nil then
        callType = 0
    end

    if bWithToken then
        local localToken = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_LOCAL_TOKEN, "")
        local localExpire = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_LOCAL_TOKEN_TIME, 0)
        --TODO PushReqToList
        self:PushReqToList(httpid,typ,url,params,callType,func,headmap,bWithToken)
        if localToken == "" or localExpire == 0 or os.time() > localExpire then
            --TODO ReGetToken
            self:RequestToken()
            return
        end
        if typ == "GET" then
            url = self:addTokenParams(url, localToken, typ, httpid)
        elseif typ == "POST" then
            params = self:addTokenParams(params, localToken, typ, httpid)
        end
    end

	local xhr =  cc.XMLHttpRequest:new()
    xhr.responseType = callBackType[callType]
    xhr:open(typ,url)

	if headmap and type(headmap) == "table" then
		for i, var in pairs(headmap) do
			xhr:setRequestHeader(i, var)
		end
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
                    if cjsonData and cjsonData.code and cjsonData.code == 1009999 then
                        self._bInReqToken = false
                        self:RequestToken()
                    else
                        func(httpid,xhr.status,cjsonData,xhr)
                    end
                end
            end
        else
            if xhr.response then
                if func then
                    func(httpid,xhr.status,xhr.response,xhr) 
                end
            end
        end
        
    end
     xhr:registerScriptHandler(onHttpReqCallBack)
     xhr:send(params) -- 发送请求
end

function HttpManager:RequestToken()
    if self._bInReqToken then
        return
    end
    self._bInReqToken = true
    local ReqToken = require("app.Req.ReqToken")
    local reqToken = ReqToken:new()
    reqToken:addReqCallBack(self, self.onReqTokenCallBack)
    reqToken:start(10)
end

function HttpManager:onReqTokenCallBack(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        --TODO Record Data To Local
        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_LOCAL_TOKEN, data.token)
        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_LOCAL_TOKEN_TIME, data.expire + os.time())
        self._bInReqToken = false
        if next(self._httpReqList) then
            self._nowReqList = clone(self._httpReqList)
            self._httpReqList = { }
            for i = #self._nowReqList, 1, -1 do
                local tmp = self._nowReqList[i]
                self:RequestHttpUrl(tmp.httpid, tmp.typ, tmp.url, tmp.params, tmp.callType, tmp.func, tmp.headmap, tmp.bWithToken)
                table.remove(self._nowReqList, i)
            end
        end
    else
        self._bInReqToken = false
    end
end

function HttpManager:PushReqToList(httpid,typ,url,params,callType,func,headmap,bWithToken)
    local reqTable = { }
    reqTable.httpid = httpid
    reqTable.typ = typ
    reqTable.url = url
    reqTable.params = params
    reqTable.callType = callType
    reqTable.func = func
    reqTable.headmap = headmap
    reqTable.bWithToken = bWithToken
    table.insert(self._httpReqList, 1, reqTable)
    self._httpReqList = table.unique(self._httpReqList, true)
end

function HttpManager:addTokenParams(data, localToken, typ, httpid)
    local cjsonData
    local ok, res_tab = pcall(cjson.decode, data)
    if typ == "POST" and ok then
        cjsonData = res_tab
        cjsonData.reqMethod = "post"
        cjsonData.reqToken = localToken
        data = cjson.encode(cjsonData)
    else
        data = data .. "&reqToken=" .. localToken
        if typ == "GET" then
            data = data .. "&reqMethod=get"
        else
            data = data .. "&reqMethod=post"
        end
    end
    return data
end

return HttpManager�