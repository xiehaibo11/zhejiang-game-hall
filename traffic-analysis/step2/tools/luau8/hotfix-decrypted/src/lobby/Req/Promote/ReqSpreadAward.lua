local ReqSpreadAward = class("ReqSpreadAward", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local PromoteConfig = require("lobby.Modules.Promote.Config")

function ReqSpreadAward:start(teaNumber, date, award_type, timeoutTime)
    if ReqSpreadAward.super.start(self, timeoutTime) == false then
        return
    end
    if PromoteConfig[XH.areaData:getLobbyID()] == nil then
        return
    end

    self._reqCount = #date
    self._curCount = 0
    self._allCount = #date
    self._dataList = {}
    self._dataList.dataList = {}
    for i = 1, self._reqCount do
        self:startReq(teaNumber, date[i], award_type, timeoutTime)
    end
end

function ReqSpreadAward:startReq(teaNumber, date, award_type, timeoutTime)
    local timestamp = os.time()
    local numid = XH.playerData:getNumberID()
    local uid = un.StringUtils.GB_18030_2000_TO_UTF8(XH.playerData:getUserID())
    local uuid = XH.areaData:getAreaID() .. numid .. timestamp .. math.random(9999)

    local data = {}
    table.insert(data, "aid=" .. (PromoteConfig[XH.areaData:getLobbyID()].AID or 0))
    table.insert(data, "teaid=" .. teaNumber or 0)
    table.insert(data, "numid=" .. numid)
    table.insert(data, "uid=" .. uid)
    table.insert(data, "uuid=" .. uuid)
    table.insert(data, "timestamp=" .. timestamp)
    table.insert(data, "award_type=" .. award_type)
    table.insert(data, "date=" .. date)
    table.insert(data, "reqUrl=" .. UrlConf.URL_SECOND_DOMAIN.REQ_TEAHOUSE_SPREAD_AWARD)
    local param = table.concat(data, "&")
    XH.httpManager:RequestGet("", UrlConf.URL_ACT .. "?" .. param, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), nil, true)
end

function ReqSpreadAward:onHttpCallBack(eType, status, response)
    if status == 200 then
        if response.code == 0 then
            -- self:success(response.data)
            if response.data ~= nil and response.data.award ~= nil then
                for i = 1, #response.data.award do
                    self._dataList.dataList[#self._dataList.dataList + 1] = response.data.award[i]
                end
            end
        else
            if response and response.message ~= nil then
                XH.TipTool.showToast(response.message, 3)
            end
            -- self:fail()
        end
    else
        -- self:fail()
    end
    self._curCount = self._curCount + 1
    if self._allCount <= self._curCount then
        self:success(self._dataList)
    end
end

return ReqSpreadAward

