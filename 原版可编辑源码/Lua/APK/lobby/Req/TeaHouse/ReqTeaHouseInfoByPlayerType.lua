---@class ReqTeaHouseInfoByPlayerType
local ReqTeaHouseInfoByPlayerType = class("ReqTeaHouseInfoByPlayerType", XH.ReqProtocol)

function ReqTeaHouseInfoByPlayerType:ctor()
    ReqTeaHouseInfoByPlayerType.super.ctor(self)
    self._teaHouseFilter = {}
    self._teaHouseList = {}
end

function ReqTeaHouseInfoByPlayerType:start(nAppid, bAgent, timeoutTime)
    if ReqTeaHouseInfoByPlayerType.super.start(self, timeoutTime) == false then
        return
    end

    local reqTeaHouseInfoByPlayerType = XH.TeaHouseProtocol.ReqTeaHouseInfoByPlayerType:new()
    reqTeaHouseInfoByPlayerType.nAskid = self._askID
    reqTeaHouseInfoByPlayerType.szName = XH.playerData:getNickName()
    reqTeaHouseInfoByPlayerType.szUrl = XH.playerData:getWeChatURL()
    reqTeaHouseInfoByPlayerType.nAgentAreaid = XH.areaData:getApiHubRid()
    reqTeaHouseInfoByPlayerType.nGameLobbyid = XH.areaData:getLobbyID()
	if bAgent then
        reqTeaHouseInfoByPlayerType.nPlayerType = reqTeaHouseInfoByPlayerType.PLAYER_TYPE.PT_TEAHOUSEOWN
    else
        reqTeaHouseInfoByPlayerType.nPlayerType = reqTeaHouseInfoByPlayerType.PLAYER_TYPE.PT_PLAYER
    end
	-- 请求是否可以退出比赛场
    reqTeaHouseInfoByPlayerType.nReqBit = reqTeaHouseInfoByPlayerType.REQ_BIT.TEAHOUSE_CAN_QUIT
    self:sendMsg(reqTeaHouseInfoByPlayerType, XH.TeaHouseProtocol.RespTeaHouseInfoByPlayerType, XH.areaData:getSrsGroupID(), XH.areaData:getTeaHouseAppID())
end

function ReqTeaHouseInfoByPlayerType:onMsgReceive(msgData)
	if self._askID ~= msgData.nAskid then
        return
    end
    if msgData.nTotal > 0 and not self._teaHouseFilter[msgData.teahouseSummery.nTeaNumber] then
        self._teaHouseFilter[msgData.teahouseSummery.nTeaNumber] = true
        table.insert(self._teaHouseList, clone(msgData.teahouseSummery))
    end
    if msgData.nTotal == msgData.nCurrent then
        self:success(self._teaHouseList)
    end
end

return ReqTeaHouseInfoByPlayerType