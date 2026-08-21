local ReqJoinGoldRoom = class("ReqJoinGoldRoom", XH.ReqProtocol)

function ReqJoinGoldRoom:ctor()
    ReqJoinGoldRoom.super.ctor(self)
end

function ReqJoinGoldRoom:start(gameId,areaTypeID,chaircnt,goldMode,srsGroupId,roomFlag,timeoutTime)
    local srsGroupID = srsGroupId
    if ReqJoinGoldRoom.super.start(self, timeoutTime, srsGroupID) == false then
        return
    end
    local reqJoin = XH.RoomProtocol.ReqJoinTableWithGold:new()
    reqJoin.baseplaytypescore = -1
    reqJoin.areatypeid = areaTypeID or 0
    reqJoin.minsr = -1
    reqJoin.maxsr = -1
    reqJoin.gameid = gameId
    reqJoin.chaircnt = chaircnt or -1
    
    reqJoin.roomnameflag = roomFlag or -1
    --判断玩家人数  目前瑞安麻将金币场使用
    -- if goldRoomInfo.roomInfo.SpecialPlayer and goldRoomInfo.roomLevelInfos[roomFlag] then
    --     reqJoin.roomnameflag = -1
    --     reqJoin.chaircnt = goldRoomInfo.roomLevelInfos[roomFlag].chaircnt
    -- end
    
    reqJoin.identify = XH.SysTool:GetDevid()
    reqJoin.osver = XH.SysTool:GetOsVersion()
    reqJoin.channelid = XH.SysTool:getChannelID()
	local url = XH.playerData:getWeChatURL()
    reqJoin.headurl = url or ""
    reqJoin.clienttype = XH.RoomProtocol.CLIENTTYPE.MOBILE
    reqJoin.hardwareflag = XH.RoomProtocol.HARDWAREFLAG.HF_NONE
    -- nRoomModeType 1是金币场200模式,0是金币场4模式
    reqJoin.nRoomModeType = goldMode or 0
    -- 指定lobby appid
    local srslobby = 0
    self:sendMsg(reqJoin, XH.RoomProtocol.RespJoinTableWithGold, srsGroupID, srslobby)
end

function ReqJoinGoldRoom:onMsgReceive(msgData)
    local errorcode = msgData.errorcode
    print("onReceiveJoinGoldTable errorcode:"..errorcode)
    if errorcode == XH.RoomProtocol.ERRORCODE.SUCCESS then
        self:success(msgData)
    elseif errorcode == XH.RoomProtocol.ERRORCODE.SHOW_MESSAGE then
        self:fail(msgData.msgbox.m_szText)
    elseif errorcode == XH.RoomProtocol.ERRORCODE.ERROR_INAPPID then
        self:fail(msgData)
    elseif errorcode == XH.RoomProtocol.ERRORCODE.NOT_FOUND_GAME_ID then
        self:fail(msgData)
    elseif errorcode == XH.RoomProtocol.ERRORCODE.ERROR_NOT_ENOUGH_SR then
        self:fail(msgData)
    elseif errorcode == XH.RoomProtocol.ERRORCODE.ERROR_TOO_MUCH_SR then
        self:fail(msgData)
    elseif errorcode == XH.RoomProtocol.ERRORCODE.ERROR_IN_MATCH_LIST then
        self:fail(msgData)        
    else
        local msg = self:getErrInfoMsg(errorcode)
        print("error "..msg)
        if msg == "" then
            msg = "加入金币场失败" .. errorcode
        end
        self:fail(msg)
    end
end

function ReqJoinGoldRoom:getErrInfoMsg(flag)
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

return ReqJoinGoldRoom�