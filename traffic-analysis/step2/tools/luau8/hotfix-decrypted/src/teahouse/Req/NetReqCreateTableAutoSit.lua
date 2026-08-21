---@class NetReqCreateTableAutoSit : NetReq
local NetReqCreateTableAutoSit = class("NetReqCreateTableAutoSit", TeaHouse.NetReq)

--领队/用户，玩家共用
function NetReqCreateTableAutoSit:ctor()
    NetReqCreateTableAutoSit.super.ctor(self)

    self._tableCnt = 0
    self._respPacketCnt = 0
    self._respTableCache = {}
end

function NetReqCreateTableAutoSit:start(info, timeoutTime)
    if not NetReqCreateTableAutoSit.super.start(self, timeoutTime) then
        return
    end

    self._tableCnt = info.tableCnt
    --比赛场这边用的默认的srsgroupid，因为不考虑互通跨srs，考虑的话可以在通过类似于树列表的方式读取出来对应的srsgroupid，
    --然后在resp中设置对应的srsgroupid，对于已经在桌子上的玩家，这里可以设置一个全局变量GT._backBoxRoomSrsGroupId，供playerJoinRoom时使用
    --避免出现在比赛场中游戏，退到比赛场大厅时，在点击此比赛场的任意桌子或者创建时，没有任何请求导致不知道srsgroupid重连回去不对的情况
    --因为在其他比赛场创建会先返回大厅，再模拟进入比赛场，大厅的请求位置信息会记录相应的srsgroupid。
    --加入桌子和固定玩法模式同理
    local reqCreateTableAutoSit = TeaHouse.TeaHouseProtocol.ReqCreateTableAutoSit:new()
    reqCreateTableAutoSit.nGameId = info.gameid
    reqCreateTableAutoSit.nBase = info.base
    reqCreateTableAutoSit.nCount = info.cont
    reqCreateTableAutoSit.nType = info.type
    reqCreateTableAutoSit.sSize = info.size
    reqCreateTableAutoSit.acName = info.name
    reqCreateTableAutoSit.acRuleData = info.data
    reqCreateTableAutoSit.ucCreateType = info.ucCreateType
    reqCreateTableAutoSit.bNotAutoSit = info.bNotAutoSit
    reqCreateTableAutoSit.nPropID = TeaHouse.BridgeData.getRoomCardID()
    reqCreateTableAutoSit.acIdentify = TeaHouse.SysTool.GetDevid()
    reqCreateTableAutoSit.nOsVer = TeaHouse.SysTool.GetOsVersion()
    reqCreateTableAutoSit.nChannelId = TeaHouse.SysTool.getChannelID()
    reqCreateTableAutoSit.acHeadUrl = TeaHouse.BridgeData.getWeChatURL()
    reqCreateTableAutoSit.nClientType = TeaHouse.TeaHouseProtocol.ReqCreateTableAutoSit.CLIENTTYPE.MOBILE
    reqCreateTableAutoSit.nRoomVer = TeaHouse.BridgeData.getLobbyVersion()
    reqCreateTableAutoSit.nHardWareFlag = TeaHouse.TeaHouseProtocol.ReqCreateTableAutoSit.HARDWAREFLAG.HF_NONE
    reqCreateTableAutoSit.nModelIndex = info.nModelIndex
    if info.nPayType ~= nil then
        reqCreateTableAutoSit.nPayType = info.nPayType
    end
    self:sendPacket(reqCreateTableAutoSit, TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit, self.onRespCreateTableAutoSit)
end

function NetReqCreateTableAutoSit:onRespCreateTableAutoSit(msgData)
    self._respPacketCnt = self._respPacketCnt + 1
    if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.SUCCESS then
        self._respTableCache[#self._respTableCache + 1] = msgData
    else
        if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.NOT_RIGHT then
            self:setMessage("CREATE_FAIL_NORIGHT")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.MAXTABLE then
            self:setMessage("CREATE_FAIL_LIMITCOUNT")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.NOT_APPID then
            self:setMessage("TEAHOUSE_NO_APPID")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.NOT_SETUP then
            self:setMessage("CREATE_FAIL_NOPANCOUNT")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.OTHER then
            self:setMessage("CREATETABLE_OTHER_ERROR")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.NOT_PROP or
        msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.NOT_PROP_BY_GP then
            self:setMessage("TEAHOUSE_NOTENOUGH_PROP")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.NOT_TABLE then
            self:setMessage("TEAHOUSE_DONNOTHAVE_TABLE")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.NOT_ENOUGHPROP then
            self:setMessage("DONOT_HAVE_ENOUGHPROP")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.MAX_CREAT_TABLE then
            self:setMessage("YOU_HAVECREATE_LIMIT")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.BAN then
            self:setMessage("PLAYER_BAN_PLAY_GAME")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.TEAHOUSE_CLOESD then
            self:setMessage("TEAHOUSE_HASBEEN_CLOSURE")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.TEAHOUSE_WITHOUT_PLAYMODE then
            self:setMessage("TEAHOUSE_DONNOT_USEMODE")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.TEAHOUSE_MAX_DAILY_COST then
            self:setMessage("UPTOOWNER_MAX_COST")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.NOT_EMPTY_TABLE then
            self:setMessage("TEAHOUSE_DONNOTHAVE_EMPTYTABLE")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.NOENOUGH_PROP then
            self:setMessage("NOT_ENOUGH_ORDINARYPROP")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.ERR_DATA then
            self:setMessage("DATA_ISNOT_CORRECT")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.NO_TYPEID then
            self:setMessage("DONOTHAVE_CORRECT_PROPID")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.ERR_INTABLE then
            self:setMessage("TRPJOIN_PLAYER_HASIN_TABLE")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.ERR_USEPROP then
            self:setMessage("USE_PROP_FAIL")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.ERR_TABLEID then
            self:setMessage("ERROR_ROOM_NUMBER")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.ERR_EMPTY_SEAT then
            self:setMessage("CANNOT_GET_VACANCY")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.ERR_NOT_CREATE_TABLE then
            self:setMessage("HAVENOT_CREATE_TABLE")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.ERR_ALREADY_GAME then
            self:setMessage("THEGAME_HAS_BEGIN")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.ERR_ALREADY_CREATE then
            self:setMessage("IS_CREATING_TABLE")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.ERR_ALREADY_JOIN then
            self:setMessage("IS_JOINING_TABLE")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.ERR_TABLE_FULL then
            self:setMessage("TABLE_IS_FULL")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.TEAHOUSE_FORBIDDEN then
            self:setMessage("YOU_AREIN_BLACKLIST")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.TEAHOUSE_HAVE_THE_SAME_DESK then
            self:setMessage("CREATE_FAIL_HAVESAMEDESK")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.ERR_GPS_OPEN then
            self:setMessage("ERROR_NOT_OPEN_GPS")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.FAILED then
            self:setMessage("CREATE_FAIL_OTHERERROR")
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespCreateTableAutoSit.FLAG.ERR_CONTINUE then
            self:setMessage("CREATE_FAIL_IN_CONTINUE")
        else
            self:setMessage("创建失败，错误码："..msgData.ucFlag)
        end
        self:fail(msgData)

        XH.NewThrowDataManager:reportCommonMonitor({
            Monitoring_source = "APP",
            Monitoring_type = "客户端监控比赛场创建房间失败",
            Monitoring_content = {
                info_des =  self:getMessage() or "",
                code = msgData.ucFlag or -1,
                info = "创建失败"
            }
        })
        return
    end
    if self._respPacketCnt == self._tableCnt then
        self:success(self._respTableCache)
    end
end

return NetReqCreateTableAutoSitO"