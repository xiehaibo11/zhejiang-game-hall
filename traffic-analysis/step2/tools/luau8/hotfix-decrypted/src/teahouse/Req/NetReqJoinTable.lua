---@class NetReqJoinTable : NetReq
local NetReqJoinTable = class("NetReqJoinTable", TeaHouse.NetReq)

function NetReqJoinTable:start(teaHouseID, tableID, seatID, otherInfo, bRandomSit, timeoutTime, bseer)
    if not NetReqJoinTable.super.start(self, timeoutTime) then
        return
    end

    local reqJoinTeaTable = TeaHouse.TeaHouseProtocol.ReqJoinTeaTable:new()
    reqJoinTeaTable.nTeaId = teaHouseID
    reqJoinTeaTable.nTableId = tableID
    reqJoinTeaTable.nChairId = seatID
    reqJoinTeaTable.acIdentify = TeaHouse.SysTool.GetDevid()
    reqJoinTeaTable.nOsVer = TeaHouse.SysTool.GetOsVersion()
    reqJoinTeaTable.nChannelId = TeaHouse.SysTool.getChannelID()
    reqJoinTeaTable.acHeadUrl = TeaHouse.BridgeData.getWeChatURL()
    reqJoinTeaTable.ucSitType = bRandomSit and 0 or 1
    reqJoinTeaTable.nClientType = TeaHouse.TeaHouseProtocol.ReqJoinTeaTable.CLIENTTYPE.MOBILE
    reqJoinTeaTable.nRoomVer = TeaHouse.BridgeData.getLobbyVersion()
    reqJoinTeaTable.nHardWareFlag = TeaHouse.TeaHouseProtocol.ReqJoinTeaTable.HARDWAREFLAG.HF_NONE
    reqJoinTeaTable.acOtherInfo = otherInfo or ""
    reqJoinTeaTable.bChangeTable = false
    reqJoinTeaTable.bSeer = bseer or false
    if bSeer then
        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_TEAHOUSE_WATCH_STARTTIME, os.time(), {})
    end
    self:sendPacket(reqJoinTeaTable, TeaHouse.TeaHouseProtocol.RespJoinTeaTable, self.onRespJoinTeaTable)
end

function NetReqJoinTable:onRespJoinTeaTable(msgData)
    if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.SUCCESS then
        self:success(msgData)
        return
    elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.NOT_RIGHT then
        self:setMessage("NO_RIGHT_TOJOINTABLE")
    elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.NOT_EMPTY then
        self:setMessage("TABLE_NO_EMPTY")
    elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.OTHER then
        self:setMessage("JOINTABLE_OTHER_ERROR")
    elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.NOT_ENOUGHPROP then
        self:setMessage("DONOT_HAVE_ENOUGHPROP")
    elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.TEAHOUSE_CLOESD then
        self:setMessage("OWNER_HAVE_SUSPENDTEAHOUSE")
    elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.NOT_EMPTY_TABLE then
        self:setMessage("THEREIS_NO_EMPTYTABLE")
    elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.EXP_PROP then
        self:setMessage("TMPPROP_HASBEEN_INVALID")
    elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.NOENOUGH_PROP then
        self:setMessage("NOT_ENOUGH_ORDINARYPROP")
    elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.ERR_DATA then
        self:setMessage("DATA_ISNOT_CORRECT")
    elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.NO_TYPEID then
        self:setMessage("DONOTHAVE_CORRECT_PROPID")
    elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.ERR_INTABLE then
        self:setMessage("TRPJOIN_PLAYER_HASIN_TABLE")
    elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.ERR_USEPROP then
        self:setMessage("USE_PROP_FAIL")
    elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.ERR_TABLEID then
        self:setMessage("ERROR_ROOM_NUMBER")
    elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.ERR_EMPTY_SEAT then
        self:setMessage("CANNOT_GET_VACANCY")
    elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.ERR_NOT_CREATE_TABLE then
        self:setMessage("HAVENOT_CREATE_TABLE")
    elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.ERR_ALREADY_GAME then
        self:setMessage("THEGAME_HAS_BEGIN")
    elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.ERR_ALREADY_CREATE then
        self:setMessage("IS_CREATING_TABLE")
    elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.ERR_ALREADY_JOIN then
        self:setMessage("IS_JOINING_TABLE")
    elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.ERR_TABLE_FULL then
        self:setMessage("TABLE_IS_FULL")
    elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.TEAHOUSE_FORBIDDEN then
        self:setMessage("YOU_AREIN_BLACKLIST")
    elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.NOT_PROP then
        self:setMessage("TEAHOUSE_NOTENOUGH_PROP")
    elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.ERR_GPS_OPEN then
        self:setMessage("未开启定位")
    elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.ERR_DISTANCE then
        self:setMessage("您与该房间里的某一玩家距离太近，无法加入此房间")
    elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.FORBID_PLAY_IN_SAME_TABLE then
        self:setMessage("您与该房间里的某一玩家限制同桌，无法加入此房间")
    elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.BAN then
        self:setMessage("您已被封禁对局，无法进入房间，如有疑问请联系客服。")
    elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.ERR_CONTINUE then
        self:setMessage("CREATE_FAIL_IN_CONTINUE")
    elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.TEAHOUSE_IP_LIMIT then
        self:setMessage("ERROR_IP_LIMITED")
    elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.GPS_NOT_OPEN then
        self:setMessage("ERROR_NOT_OPEN_GPS")
    elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespJoinTeaTable.FLAG.DISTANCE_TOO_CLOSE then
        self:setMessage("ERROE_DISTANCE_LIMIT")
    else
        self:setMessage("加入房间错误（" .. msgData.ucFlag .. "）")
    end
    self:fail(msgData.ucFlag)
    XH.NewThrowDataManager:reportCommonMonitor({
        Monitoring_source = "APP",
        Monitoring_type = "客户端监控比赛场加入房间失败",
        Monitoring_content = {
            info_des = self:getMessage() or "",
            code = msgData.ucFlag or -1,
            info = "加入失败"
        }
    })
end

return NetReqJoinTableb