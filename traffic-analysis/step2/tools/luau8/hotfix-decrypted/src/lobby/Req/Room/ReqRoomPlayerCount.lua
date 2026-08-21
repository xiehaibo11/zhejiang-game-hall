local ReqRoomPlayerCount = class("ReqRoomPlayerCount", XH.ReqProtocol)
local KW_ASK_ID_ROOMPLAYERCOUNT = 0
function ReqRoomPlayerCount:start(reqData)
    if ReqRoomPlayerCount.super.start(self, XH.KW_CONFIG_LOGIC_TIME_OUT) == false then
        return
    end
    if not reqData or #reqData == 0 then
        return
    end
    local gameid = reqData[1].gameID
    local playtype = reqData[1].playtype
    local level = reqData[1].level
    local appid = reqData[1].appid
    table.remove(reqData, 1)
    self.tableData = clone(reqData)
    KW_ASK_ID_ROOMPLAYERCOUNT = KW_ASK_ID_ROOMPLAYERCOUNT + 1
    self._askId = KW_ASK_ID_ROOMPLAYERCOUNT
    local reqConfig = XH.BoxDataProtocol.ReqRoomPlayerCount:new()
    reqConfig.askid = self._askId
    reqConfig.gameid = gameid or 0
    reqConfig.playtype = playtype or 0
    reqConfig.level = level or 0
    reqConfig.appid = appid or 0
    local SRSGroupID = XH.areaData:getSrsGroupID()
    XH.netEngine:addProtocolScriptFuncByObj(self, self.RespRoomPlayerCount, XH.BoxDataProtocol.ReqRoomPlayerCount.processid, SRSGroupID)
    XH.netEngine:sendProtocol(reqConfig, XH.BoxDataProtocol.ReqRoomPlayerCount.processid,0,SRSGroupID)
end

function ReqRoomPlayerCount:RespRoomPlayerCount(XYID, buff, len, processid)
    if processid ~= XH.BoxDataProtocol.RespRoomPlayerCount.processid then
        return
    end
    if XYID ~=  XH.BoxDataProtocol.RespRoomPlayerCount.XY_ID then
        return
    end
    
    local respConfig =  XH.BoxDataProtocol.RespRoomPlayerCount:new()
    respConfig:bistream(buff, len)
    if respConfig then
        respConfig.detail = clone(self.tableData)
        self:success(respConfig)
    else
        self:fail()
    end
end


return ReqRoomPlayerCount�