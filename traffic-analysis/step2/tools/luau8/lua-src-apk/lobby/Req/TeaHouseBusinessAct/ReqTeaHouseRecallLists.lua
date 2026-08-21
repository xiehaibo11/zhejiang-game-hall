local ReqTeaHouseRecallLists = class("ReqTeaHouseRecallLists", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqTeaHouseRecallLists:ctor()
    ReqTeaHouseRecallLists.super.ctor(self)
end

function ReqTeaHouseRecallLists:start(aid, teaid, timeout)
    if ReqTeaHouseRecallLists.super.start(self, timeout) == false then
        return
    end

    aid = aid or 0
    teaid = teaid or 0
    local from = "pc"
    local timestamp = os.time()
    local numid = XH.playerData:getNumberID()
    local uid = un.StringUtils.GB_18030_2000_TO_UTF8(XH.playerData:getUserID())
    local uuid = XH.areaData:getAreaID() .. numid .. timestamp .. math.random(9999)

    local data = {}
    table.insert(data, "from=" .. from)
    table.insert(data, "timestamp=" .. timestamp)
    table.insert(data, "numid=" .. numid)
    table.insert(data, "uid=" .. uid)
    table.insert(data, "uuid=" .. uuid)
    table.insert(data, "aid=" .. aid)
    table.insert(data, "teaid=" .. teaid)
    table.insert(data, "reqUrl=" .. UrlConf.URL_SECOND_DOMAIN.REQ_TEAHOUSE_RECALL_LISTS)
    local param = table.concat(data, "&")
    XH.httpManager:RequestGet("", UrlConf.URL_ACT .. "?"  .. param, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpReqTeaHouseRecallListsCallBack),nil,true)
end

function ReqTeaHouseRecallLists:onHttpReqTeaHouseRecallListsCallBack(eType, status, response)
    if status == 200 then
       print(response)
       if response.status == 0 then
            self:success(response.data)
       else
            self:success()
       end
   else
       self:fail()
   end
end

return ReqTeaHouseRecallLists �