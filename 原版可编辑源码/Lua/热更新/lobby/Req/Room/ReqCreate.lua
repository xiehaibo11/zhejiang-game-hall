local ReqCreate = class("ReqCreate", XH.ReqProtocol)

function ReqCreate:start(gameID, roomRule, gameRule, roomMode, srsGroupID, vipPropId, timeoutTime)
    if ReqCreate.super.start(self, timeoutTime, srsGroupID) == false then
        return
    end
    local SRSGroupID = srsGroupID or XH.areaData:getSrsGroupID()

    local roomRuleStr = "roomrule={GamePlayerCount=\""..roomRule.GamePlayerCount.."\",group=\""..roomRule.group.."\",cancreate=\"1\",roommode=\""..roomRule.roommode.."\""
    if roomRule.ConditionRoomType ~= nil then
        roomRuleStr = roomRuleStr .. ",ConditionRoomType=\""..roomRule.ConditionRoomType.."\""
    end
    if roomRule.IsJuMa ~= nil then
        roomRuleStr = roomRuleStr .. ",IsJuMa=\""..roomRule.IsJuMa.."\""
    end

    if roomRule.roomtype ~= nil then
        roomRuleStr = roomRuleStr .. ",roomtype=\""..roomRule.roomtype.."\""
    end

    roomRuleStr = roomRuleStr .. "}"

    local repCreate = XH.RoomProtocol.ReqCreateTable:new()

    repCreate.gameid = gameID or 0
    repCreate.areatypeid = XH.areaData:getAreaTypeID() or 0
    repCreate.tabletype = roomMode or 0

    repCreate.roomrule = roomRuleStr or ""
    repCreate.gamerule = gameRule or ""
    repCreate.identify = XH.SysTool:GetDevid()
    repCreate.osver = XH.SysTool:GetOsVersion()
    repCreate.channelid = XH.SysTool:getChannelID()--30001
	local url = XH.playerData:getWeChatURL()
    repCreate.headurl = url or ""
    repCreate.clienttype = XH.RoomProtocol.CLIENTTYPE.MOBILE
    --repCreate.ver = 1
    repCreate.hardwareflag = XH.RoomProtocol.HARDWAREFLAG.HF_NONE
    repCreate.lastroomid = 0
    repCreate.vipPropId = vipPropId or 0

    self:sendMsg(repCreate, XH.RoomProtocol.RespCreateTable, SRSGroupID, 0)
end

function ReqCreate:onMsgReceive(msgData)
    local errorcode = msgData.errorcode
    if errorcode == XH.RoomProtocol.ERRORCODE.SUCCESS then
        self:success(msgData)
        if device.platform == "windows" then
            XH.SysTool.copyString(string.format("%06d", msgData.roomid))
        end
    elseif errorcode == XH.RoomProtocol.ERRORCODE.SHOW_MESSAGE then
        self:fail({errorcode = errorcode, msg = msgData.msgbox.m_szText})
        XH.NewThrowDataManager:reportCommonMonitor({
            Monitoring_source = "APP",
            Monitoring_type = "客户端监控包厢创建/加入失败",
            Monitoring_content = {
                info_des = msgData.msgbox.m_szText or "",
                code = errorcode or -1,
                info = "包厢创建"
            }
        })
    elseif errorcode == XH.RoomProtocol.ERRORCODE.ERROR_BAN then
        local msg = "您已被封禁对局，无法进入房间，如有疑问请联系客服。"
        self:fail({errorcode = errorcode, msg = msg})
    else
        local msg = self:getErrInfoMsg(errorcode)
        print("error "..msg)
        self:fail({errorcode = errorcode, msg = msg})
        XH.NewThrowDataManager:reportCommonMonitor({
            Monitoring_source = "APP",
            Monitoring_type = "客户端监控包厢创建/加入失败",
            Monitoring_content = {
                info_des = msg or "",
                code = errorcode or -1,
                info = "包厢创建" 
            }
        })
    end
end

function ReqCreate:getErrInfoMsg(flag)
    if flag then
         for i,v in pairs(XH.RoomProtocol.ERRORCODE) do
            if flag == v then
                print(v)
                return XH.ConstString.getStr(i)
            end
         end
    end
    return ""
end

return ReqCreate