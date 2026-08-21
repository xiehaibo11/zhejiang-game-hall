local ReqJoinBoxRoom = class("ReqJoinBoxRoom", XH.ReqProtocol)

function ReqJoinBoxRoom:start(boxRoomID, srsGroupID, timeoutTime, acOtherInfo, joinType, bSeer)
    if ReqJoinBoxRoom.super.start(self, timeoutTime, srsGroupID) == false then
        return
    end

    self._type = joinType
    self._roomid = boxRoomID

    local repJoin = XH.RoomProtocol.ReqJoinTable:new()

    local lobbyID = XH.areaData:getLobbyID()
    repJoin.areatypeid = XH.areaData:getAreaTypeID() or 0
    repJoin.roomid = boxRoomID or 0
    repJoin.lobbyid = lobbyID or 0
    repJoin.identify = XH.SysTool:GetDevid()
    repJoin.osver = XH.SysTool:GetOsVersion()
    repJoin.channelid = XH.SysTool:getChannelID()--30001
    local url = XH.playerData:getWeChatURL()
    repJoin.headurl = url or ""
    repJoin.clienttype = XH.RoomProtocol.CLIENTTYPE.MOBILE
    --repJoin.ver = KW_CONFIG_LOBBY_VERSION
    repJoin.hardwareflag = XH.RoomProtocol.HARDWAREFLAG.HF_NONE
    repJoin.acOtherInfo = acOtherInfo or ""
    repJoin.action = bSeer and XH.RoomProtocol.ACTION.SEEGAME or XH.RoomProtocol.ACTION.SITDOWN
    if bSeer then
        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_TEAHOUSE_WATCH_STARTTIME, os.time(), {})
    end

    self:sendMsg(repJoin, XH.RoomProtocol.RespJoinTable, srsGroupID, 0)
end

function ReqJoinBoxRoom:onMsgReceive(msgData)
    local errorcode = msgData.errorcode
    if errorcode == XH.RoomProtocol.ERRORCODE.SUCCESS then
        self:success(msgData)
        if self._type and msgData.roommode == 10 then
            self:throwDataType(self._type)
        end
    elseif errorcode == XH.RoomProtocol.ERRORCODE.ERROR_TABLE_START then
        local msg = msgData.msgbox.m_szText
        self:fail({ errorcode = errorcode, msg = msg, joinInfo = {type = self._type, roomid = self._roomid, gameid = msgData.gameid}})
    elseif errorcode == XH.RoomProtocol.ERRORCODE.SHOW_MESSAGE then
        local msg = msgData.msgbox.m_szText
        if msg == "47" then
            msg = "请确认定位开启"
        elseif msg == "48" then
            msg = "由于距离过近无法进入该桌子"
        elseif msg == "失败(10)" then
            msg = "您的房卡不足，无法加入桌子"
        elseif msg == "失败(23)" then
            msg = "你加入的桌子续桌中，请稍后加入"
        end
        self:fail({ errorcode = errorcode, msg = msg })
        XH.NewThrowDataManager:reportCommonMonitor({
            Monitoring_source = "APP",
            Monitoring_type = "客户端监控包厢创建/加入失败",
            Monitoring_content = {
                info_des =  msg or "",
                code = errorcode or -1,
                info = "包厢加入"
            }
        })
    elseif errorcode == XH.RoomProtocol.ERRORCODE.ERROR_BAN then
        local msg = "您已被封禁对局，无法进入房间，如有疑问请联系客服。"
        self:fail({ errorcode = errorcode, msg = msg })
    else
        local msg = self:getErrInfoMsg(errorcode, msgData.tealevel)
        print("error " .. msg)
        self:fail({ errorcode = errorcode, msg = msg, msgData = msgData})
        XH.NewThrowDataManager:reportCommonMonitor({
            Monitoring_source = "APP",
            Monitoring_type = "客户端监控包厢创建/加入失败",
            Monitoring_content = {
                info_des =  msg or "",
                code = errorcode or -1,
                info = "包厢加入"
            }
        })
    end
end

function ReqJoinBoxRoom:getErrInfoMsg(flag, tealevel)
    if flag then
        for i, v in pairs(XH.RoomProtocol.ERRORCODE) do
            if flag == v then
                if tealevel == 100 then
                    if flag == XH.RoomProtocol.ERRORCODE.NOT_EMPTY_TABLE then
                        XH.lobby:getModule("Im"):reqMixTableListInfo()
                        return "此房间已开局，已为您刷至最新列表"
                    elseif flag == XH.RoomProtocol.ERRORCODE.NOT_TEA_HOUSE_RIGHT then
                        return "您不是当前分组的玩家，无法加入分组的游戏"
                    end
                end
                return XH.ConstString.getStr(i)
            end
        end
    end
    return ""
end

function ReqJoinBoxRoom:throwDataType(type)
    if type == 1 then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.fj240113, nil, { source = "大厅" })
    elseif type == 2 then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.fj240113, nil, { source = "微信卡片" })
    elseif type == 3 then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.fj240113, nil, { source = "文字" })
    end
end

return ReqJoinBoxRoom�