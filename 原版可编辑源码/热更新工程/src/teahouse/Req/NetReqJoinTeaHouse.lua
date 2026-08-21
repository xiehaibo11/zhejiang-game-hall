---@class NetReqJoinTeaHouse : NetReq

local NetReqJoinTeaHouse = class("NetReqJoinTeaHouse", TeaHouse.NetReq)
--玩家领队共用
function NetReqJoinTeaHouse:ctor()
    NetReqJoinTeaHouse.super.ctor(self)

    self._nAskid = 0
    self._teaHouseID = 0
    self._teaHousePwd = 0
    self._tableID = 0
    self._teaHouseLevel = 0
end

function NetReqJoinTeaHouse:start(teaHouseID, teaHousePwd, tableID, timeoutTime,teaHouseLevel,inTeaFunc, playModeId)
    if not NetReqJoinTeaHouse.super.start(self, timeoutTime) then
        return
    end

    local reqJoinTeaHouse = TeaHouse.TeaHouseProtocol.ReqJoinTeaHouse:new()
    self._nAskid = os.time()
    self._teaHousePwd = teaHousePwd
    reqJoinTeaHouse.askid = self._nAskid
    reqJoinTeaHouse.password = teaHousePwd
    reqJoinTeaHouse.url = TeaHouse.BridgeData.getWeChatURL()
    reqJoinTeaHouse.nickname = TeaHouse.BridgeData.getNickName()
    reqJoinTeaHouse.sex = TeaHouse.BridgeData.getSex()
    reqJoinTeaHouse.channelid = TeaHouse.SysTool.getChannelID()
    reqJoinTeaHouse.osver = TeaHouse.SysTool.GetOsVersion()
    reqJoinTeaHouse.reconnect = 0
    reqJoinTeaHouse.szIdentify = TeaHouse.SysTool.GetDevid()
    reqJoinTeaHouse.gameLobbyId = TeaHouse.BridgeData.getLobbyID()
    reqJoinTeaHouse.teaNumber = teaHouseID
    self._teaHouseID = teaHouseID
    self._tableID = tableID
    self._teaHouseLevel = teaHouseLevel or 0
    self._inTeaFunc = inTeaFunc
    self._playModeId = playModeId
    self:sendPacket(reqJoinTeaHouse, TeaHouse.TeaHouseProtocol.RespJoinTeaHouse, self.onRespJoinTeaHouse)
end

function NetReqJoinTeaHouse:onRespJoinTeaHouse(msgData)
    if msgData.appid > 0 then
        TeaHouse.manager.teahouseData:setAppID(msgData.appid)
    end
    if msgData.flag == TeaHouse.TeaHouseProtocol.RespJoinTeaHouse.FLAG.SUCCESS and
    self._nAskid == msgData.askid then
        self:success({
            msgData = msgData,
            teaHouseID = self._teaHouseID,
            teaHousePwd = self._teaHousePwd,
            tableID = self._tableID,
            teaHouseLevel = self._teaHouseLevel,
            inTeaFunc = self._inTeaFunc,
            playModeId = self._playModeId
        })
    else
        local FLAG = TeaHouse.TeaHouseProtocol.RespJoinTeaHouse.FLAG
        local flag = msgData.flag
        if flag == FLAG.UNKNOWN_USERID then
            self:setMessage("ILLEGAL_JOIN_TEAHOUSEFAIL")
        elseif flag == FLAG.INVALID_PASSWORD then            
            self:setMessage("TEAHOUSE_NOT_EXIST")            
        elseif flag == FLAG.CLOSED then
            self:setMessage("TEAHOUSE_HASBEEN_CLOSE")
            --TODO
        elseif flag == FLAG.DBERR then
            self:setMessage("DB_ERROR_JOINTEAHOUSEFAIL")
        elseif flag == FLAG.PAUSED then
            self:setMessage("TEAHOUSE_HASBEEN_SUSPEND")
        elseif flag == FLAG.UNKNOWN_TEA then
            self:setMessage("TEAHOUSE_NOT_THISAREA")
        elseif flag == FLAG.UNBINDWECHAT then
            self:setMessage("UNBINDWECHAT")
        end  
        self:fail(msgData)
    end
end

return NetReqJoinTeaHouse