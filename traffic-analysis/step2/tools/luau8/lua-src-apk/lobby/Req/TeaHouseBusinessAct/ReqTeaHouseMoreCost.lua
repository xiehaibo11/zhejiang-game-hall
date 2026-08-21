local ReqTeaHouseMoreCost = class("ReqTeaHouseMoreCost", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqTeaHouseMoreCost:ctor()
    ReqTeaHouseMoreCost.super.ctor(self)
end

function ReqTeaHouseMoreCost:start(teaid,starttime,endtime,timeout)
    if ReqTeaHouseMoreCost.super.start(self, timeout) == false then
        return
    end
    teaid = teaid or 0
    local timestamp = os.time()
    local numid = XH.playerData:getNumberID()
    local uid = un.StringUtils.GB_18030_2000_TO_UTF8(XH.playerData:getUserID())
    local uuid = XH.areaData:getAreaID() .. numid .. timestamp .. math.random(9999)

    local data = {}
    table.insert(data, "timestamp=" .. timestamp)
    table.insert(data, "numid=" .. numid)
    table.insert(data, "uid=" .. uid)
    table.insert(data, "uuid=" .. uuid)
    table.insert(data, "rid=" .. XH.areaData:getApiHubRid())
    table.insert(data, "teaid=" .. teaid)
    table.insert(data, "logdate_start=" .. starttime)
    table.insert(data, "logdate_end=" .. endtime)
    table.insert(data, "reqUrl=" .. UrlConf.URL_SECOND_DOMAIN.REQ_BUSINESS_MORE_COST)
    
    local param = table.concat(data, "&")
    XH.httpManager:RequestGet("", UrlConf.URL_ACT .. "?" .. param, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpReqTeaHouseMoreCostCallBack),nil,true)
end

function ReqTeaHouseMoreCost:onHttpReqTeaHouseMoreCostCallBack(eType, status, response)
    if status == 200 then
       if response.code == 0 then
            self:success(response.data)
       else
            self:success()
       end
   else
       self:fail()
   end
end

return ReqTeaHouseMoreCost �