local ReqBackpackData = class("ReqBackpackData", XH.ReqProtocol)

--[[
pcnt:玩家数量
areaid: table
numid: table
propsid:  table, 表示取特定id的道具信息，若不填，表示玩家所有的道具信息都下发
]]
function ReqBackpackData:start(appid, pcnt, areaid, numid, propsid, timeoutTime)
    if ReqBackpackData.super.start(self, timeoutTime) == false then
        return
    end

    if type(areaid) ~= "table" or type(numid) ~= "table" or type(propsid) ~= "table" then
        return
    end

    appid = appid or 0
    pcnt = pcnt or 0
    areaid = areaid or {}
    numid = numid or {}
    propsid = propsid or {}

    local propsid_cnt = #propsid

    local srsGroupID = XH.areaData:getSrsGroupID()
    local reqBackPackData = XH.BagSysProtocol.ReqBackpackData:new()

    reqBackPackData.askid = self._askID
    reqBackPackData.pcnt = pcnt
    reqBackPackData.areaid = areaid
    reqBackPackData.numid = numid
    reqBackPackData.propsid_cnt = propsid_cnt
    reqBackPackData.propsid = propsid
    self:sendMsg(reqBackPackData, XH.BagSysProtocol.RespBackpackData, srsGroupID, appid)
end

function ReqBackpackData:onMsgReceive(data)
    if self._askID ~= data.askid then
        return
    end

    self:success(data)
end

return ReqBackpackData
