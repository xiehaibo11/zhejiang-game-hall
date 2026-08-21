local ReqApihub = { }
local UrlConf = require("app.Config.UrlConf")

-- apihub使用
-- 参考文档客户端封装
function ReqApihub.createApihubClient(Key, Secret, targeturl)
	local apihubURL = targeturl or UrlConf.URL_APIHUB
	local funtable = { }

	funtable.createService = function(svrname)
		local methodtable = { }

		methodtable.get = function(interface, requestMap, callBackFun)
			if type(requestMap) ~= "table" then
				return
			end
			local laterurl = ""
			for i, var in pairs(requestMap) do
				var = var .. ""
				if laterurl == "" then
					laterurl = i .. "=" .. XH.SysTool.url_encode(var)
				else
					laterurl = laterurl .. "&" .. i .. "=" .. XH.SysTool.url_encode(var)
				end
			end
			local url = apihubURL .. "?" .. laterurl
			url = url .. "&reqService=" .. svrname
			url = url .. "&reqUrl=" .. interface
			XH.httpManager:RequestGet("", url, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, callBackFun, nil, true)
		end

		methodtable.post = function(interface, requestMap, callBackFun)
			if type(requestMap) ~= "table" then
				return
			end
			requestMap.reqService = svrname
			requestMap.reqUrl = interface
			local laterurl = json.encode(requestMap)
			local url = apihubURL
			XH.httpManager:RequestPost("", url, laterurl, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, callBackFun, nil, true)
		end
		return methodtable
	end
	return funtable
end

return ReqApihub
�