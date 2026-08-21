-- ReqUseProps50，是经过Http接口请求使用道具
local ReqUseProps50 = class("ReqUseProps50", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqUseProps50:ctor()
    ReqUseProps50.super.ctor(self)
    -- 保存本地的数据，用于成功后的播放动画使用
    self.saveLocalStr = ''
end

function ReqUseProps50:start(propId, seatId, propIndex, isVip, timeout, extInfo)
    if ReqUseProps50.super.start(self, timeout) == false then
        return
    end

    local urlInfo = {}
    -- local strCosts = "[{'owner_id':%d, 'props':[{'prop_id':%d, 'count':%d, 'burse_type':%d}]}]"
    local strParams = "taskname=vip;inst=%d;vipTag=1;"
    if extInfo and string.find(extInfo, "reback='1';") then
        strParams = string.gsub(strParams, "vipTag=1;", "")
    end
    if extInfo then
        strParams = strParams .. extInfo
    end
    local costs = {}
    costs[1] = {}
    costs[1].owner_id = XH.playerData:getNumberID()
    costs[1].props = {}
    costs[1].props[1] = {}
    costs[1].props[1].prop_id = propId
    costs[1].props[1].count = isVip and 0 or 1
    costs[1].props[1].burse_type = 1
    urlInfo["tenant_id"] = XH.areaData:getTenantid()
    urlInfo["area_id"] = XH.areaData:getAreaID()
    urlInfo["params"] = string.format(strParams, propId)
    urlInfo["costs"] = costs

    self.postParams = urlInfo["params"]
    self.saveLocalStr = "toSeat=" .. seatId .. ";propIndex=" .. propIndex
    if extInfo then
        self.saveLocalStr = self.saveLocalStr .. ";" .. extInfo
    end
    local reqUrl = UrlConf.URL_VIP_PROP_USE_FREE
    
    -- 回流玩家免费走另一个接口
    if extInfo and string.find(extInfo, "reback='1';") then
        local realUrlInfo = {}
        realUrlInfo["act_id"] = XH.lobby:getModule("RecallNew"):getActId()
        realUrlInfo["req"] = urlInfo
        realUrlInfo["ask_id"] = self._askId or 0
        urlInfo = realUrlInfo
        reqUrl = UrlConf.URL_TRANSFER_PROP_FREE
    end

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    if XH.isEmbeddedApp() then
        local pluginParam = XH.PluginModule.getStartParams()
        if pluginParam.debug == 0 and (pluginParam.tenantID == 1 or pluginParam.tenantID == 3) then
            reqUrl = "https://bj-sibyl.mengyoutech.com/rhea/transferProps"
        end
    end
    XH.httpManager50:RequestPost(XH.HttpDefine.URL_VIP_PROP_USE_FREE, reqUrl, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqUseProps50:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.URL_VIP_PROP_USE_FREE then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            if self.postParams and string.find(self.postParams, "reback='1';") and XH.lobby:getModule("RecallNew") then
                local num = tonumber(string.match(self.postParams, "propCnt=(%d+);"))
                local backTable = XH.StringTool.getTableByString(self.postParams, ";", "=")
                local isMass = backTable["isMassSend"]
                if isMass then
                    local realSendPlayers = string.split(isMass, ",")
                    num = #realSendPlayers * num
                end
                XH.lobby:getModule("RecallNew"):nReFreeProp(num or 1)
            end
            response.param = self.saveLocalStr
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:setMessage(XH.ConstString.getStr("PHONE_REBIND_ERROR"))
        self:fail()
    end
end

return ReqUseProps50�