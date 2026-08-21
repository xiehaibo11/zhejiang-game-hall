local ReqSxvipConfig = class("ReqSxvipConfig", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqSxvipConfig:ctor()
    ReqSxvipConfig.super.ctor(self)
    self._askId = 0
end

function ReqSxvipConfig:start(retryCnt, timeout)
    if ReqSxvipConfig.super.start(self, timeout) == false then
        return
    end
    self._retryCnt = (retryCnt or 1) - 1

    local urlInfo = {}
    urlInfo.is_fellow = true

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    local reqUrl = UrlConf.URL_SXVIP_CONFIG
    if XH.isEmbeddedApp() then
        local pluginParam = XH.PluginModule.getStartParams()
        if pluginParam.debug == 0 and (pluginParam.tenantID == 1 or pluginParam.tenantID == 3) then
            reqUrl = "https://bj-sibyl.mengyoutech.com/hacaba/VIPConfig"
        end
    end
    XH.httpManager50:RequestPost(XH.HttpDefine.URL_SXVIP_CONFIG, reqUrl, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqSxvipConfig:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.URL_SXVIP_CONFIG then
        return
    end
    -- self:fail({code = -1, retryCnt = self._retryCnt})
    if status == 200 then
        if response.resp.errCode == 0 then
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:fail({code = -1, retryCnt = self._retryCnt})
        XH.NewThrowDataManager:reportCommonMonitor({
            Monitoring_source = "APP",
            Monitoring_type = "会员请求异常",
            Monitoring_content = {
                info_des = 'VIPConfig',
                code = status,
            }
        })
    end
end

return ReqSxvipConfig
