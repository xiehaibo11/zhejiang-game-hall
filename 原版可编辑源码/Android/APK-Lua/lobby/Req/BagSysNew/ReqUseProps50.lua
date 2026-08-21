local ReqUseProps50 = class("ReqUseProps50", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqUseProps50:ctor()
    ReqUseProps50.super.ctor(self)
    -- 保存本地的数据，用于成功后的播放动画使用
    self.saveLocalStr = ''
end

function ReqUseProps50:start(propId, seatId, propIndex, isVip, timeout)
    if ReqUseProps50.super.start(self, timeout) == false then
        return
    end

    local urlInfo = {}
    local strCosts = "[{'owner_id':%d, 'props':[{'prop_id':%d, 'count':%d, 'burse_type':%d}]}]"
    local strParams = "taskname=vip;inst=%d;vipTag=1;"
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

    self.saveLocalStr = "toSeat=" .. seatId .. ";propIndex=" .. propIndex

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.URL_VIP_PROP_USE_FREE, UrlConf.URL_VIP_PROP_USE_FREE, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqUseProps50:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.URL_VIP_PROP_USE_FREE then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
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

return ReqUseProps50