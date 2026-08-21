local ReqAwardRecordInfo = class("ReqAwardRecordInfo",XH.ReqHttp)
local HttpDefine = require("app.Define.HttpDefine")
local UrlConf = require("app.Config.UrlConf")

function ReqAwardRecordInfo:start(data, timeout)
    if ReqAwardRecordInfo.super.start(self,timeout) == false then
        return
    end
    self._page = data
    local srsGroupID = XH.areaData:getSrsGroupID()
    local ReqSessionID = require("app.Req.ReqSessionID")
    local reqSessionID = ReqSessionID:new()
    reqSessionID:addReqCallBack(self, self.onTempSessionBack)
    reqSessionID:start(0,XH.playerData:getBrandID(),
        XH.playerData:getNumberID(),un.StringUtils.UTF8_TO_GB_18030_2000(XH.playerData:getUserID()),XH.playerData:getSessionID(false),srsGroupID,timeout)
end

function ReqAwardRecordInfo:onTempSessionBack(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        local areaID = XH.areaData:getAreaID() 
        local windID = XH.areaData:getAreaWindID()
        local numid = XH.playerData:getNumberID()
        local uid = XH.playerData:getUserID()
        
        local tHttpInfo = UrlConf.HTTP_ID_AWARD_CENTER_RECORD 
                          .. string.format("areaid=%d&sid=%d&numid=%s&ssid=%s&uid=%s&page=%d",areaID,windID,numid,string.urlencode(data),uid,self._page)
        
        XH.httpManager:RequestGet(HttpDefine.HTTP_ID_AWARD_CENTER_RECORD,tHttpInfo,XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON,handler(self,self.onHttpAwardRecordInfoCallBack),self._page)
    end
end

function ReqAwardRecordInfo:onHttpAwardRecordInfoCallBack(eType, status, response)
    if eType ~= HttpDefine.HTTP_ID_AWARD_CENTER_RECORD then
        return
    end
    if status == 200 then
        print(response)
        if response.code == 0 then
            self:success(response.data)
        else
            self:setMessage(response.message)
            self:fail()
        end
    else
        self:setMessage(XH.ConstString.getStr("GET_EXCHANGE_HISTORY_ERROR"))
        self:fail()
    end
end

return ReqAwardRecordInfo