local ReqWillJoinTable = class("ReqWillJoinTable", XH.ReqProtocol)

function ReqWillJoinTable:start(appid, gameid, gameAppid, tableid, timeoutTime)
    if ReqWillJoinTable.super.start(self, timeoutTime) == false then
        return
    end
    appid = appid or 0
    local srsGroupID = XH.areaData:getSrsGroupID()
    local req = XH.IMProtocol.ReqWillJoinTable:new()
    
    req.askid = 0
    req.gameid = gameid
    req.game_appid = gameAppid
    req.tableid = tableid

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onReceiveWillJoinTable, req.processid, srsGroupID)
    XH.netEngine:sendProtocol(req, req.processid, appid, srsGroupID)
end

function ReqWillJoinTable:onReceiveWillJoinTable(XYID, buff, len, processid)
    if XYID ~= XH.IMProtocol.RespWillJoinTable.XY_ID then
        return
    end
    if processid ~= XH.IMProtocol.processid then
        return
    end
    local resp = XH.IMProtocol.RespWillJoinTable:new()
    resp:bistream(buff, len)

    local errorcode = resp.ec
    if errorcode == XH.IMProtocol.ERRORCODE.SUCCESS or errorcode == XH.IMProtocol.ERRORCODE.EC_ROOM_OWNER then
        self:success(resp)
    else
        local msg = self:getErrInfoMsg(errorcode)
        print("error "..msg)
        self:fail({errorcode = errorcode, msg = msg})
    end
end

function ReqWillJoinTable:getErrInfoMsg(flag)
    if flag then
         for _,v in pairs(XH.IMProtocol.ERRORCODE) do
            if flag == v then
                if flag == 10111 then
                    XH.lobby:getModule("Im"):reqMixTableListInfo()
                end
                print(v)
                return XH.IMProtocol.ERRORSTR[flag] or ("跟随失败" .. flag)
            end
         end
    end
    return "跟随失败"
end

return ReqWillJoinTable