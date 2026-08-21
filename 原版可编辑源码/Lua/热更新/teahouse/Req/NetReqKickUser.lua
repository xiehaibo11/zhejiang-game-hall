---@class NetReqKickUser : NetReq
local NetReqKickUser = class("NetReqKickUser", TeaHouse.NetReq)

function NetReqKickUser:ctor()
    NetReqKickUser.super.ctor(self)

    self._nAskid = 0
    self._areaID = 0
    self._numID = 0
end

function NetReqKickUser:start(areaID, numID, tableID, teaNumber, timeoutTime,exceptnumid)
    if not NetReqKickUser.super.start(self, timeoutTime) then
        return
    end

    local reqJoinTeaTable = TeaHouse.TeaHouseProtocol.ReqKickUser:new()
    self._nAskid = os.time()
    self._areaID = areaID
    self._numID = numID
    self._exceptnumid = exceptnumid or {}
    reqJoinTeaTable.askid = self._nAskid
    reqJoinTeaTable.tableid = tableID
    reqJoinTeaTable.areaid = areaID
    reqJoinTeaTable.numid = numID
    reqJoinTeaTable.teaid = teaNumber or 0
    reqJoinTeaTable.ucType = 2
    reqJoinTeaTable.exceptnumid = self._exceptnumid
    reqJoinTeaTable.exceptsize = #self._exceptnumid
    self:sendPacket(reqJoinTeaTable, TeaHouse.TeaHouseProtocol.RespKickUser, self.onRespKickUser)
end

function NetReqKickUser:onRespKickUser(msgData)
    if msgData.askid == self._nAskid then
        if msgData.flag == TeaHouse.TeaHouseProtocol.RespKickUser.FLAG.SUCCESS then
            self:success({
                areaID = self._areaID,
                numID = self._numID,
                numIDs = self._exceptnumid,
            })
        else ---添加副领队相关的出错信息处理，兼容老版本
            if msgData.flag == TeaHouse.TeaHouseProtocol.RespKickUser.FLAG.NOTRIGHT then
                self:setMessage("YOUARE_NOT_ADMINISTRATOR")
            elseif msgData.flag == TeaHouse.TeaHouseProtocol.RespKickUser.FLAG.NOTTABLE then
                self:setMessage("桌子不存在，无法请出玩家。")
            elseif msgData.flag == TeaHouse.TeaHouseProtocol.RespKickUser.FLAG.NOTUSER then
                self:setMessage("玩家不存在，无法请出玩家。")
            elseif msgData.flag == TeaHouse.TeaHouseProtocol.RespKickUser.FLAG.GAMEING then
                self:setMessage("玩家正在游戏中，无法请出玩家。")
            elseif msgData.flag == TeaHouse.TeaHouseProtocol.RespKickUser.FLAG.MANAGER_K_MANAGER then
                self:setMessage("ADMINISTRATOR_CANNOTKICK_ADMINISTRATOR")
            elseif msgData.flag == TeaHouse.TeaHouseProtocol.RespKickUser.FLAG.NOT_FENGXIN_RIGHT then
                self:setMessage("ADMINISTRATOR_HASBEEN_CLOSE")
            else
                self:setMessage("其他错误，无法请出玩家。")
            end
            self:fail(msgData.flag)
        end
    end
end

return NetReqKickUser