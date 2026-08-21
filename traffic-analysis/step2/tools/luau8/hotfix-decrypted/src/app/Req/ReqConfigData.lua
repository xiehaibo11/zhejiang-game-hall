local ReqConfigData = class("ReqConfigData", XH.ReqProtocol)

function ReqConfigData:start(filename,timeoutTime)
    if ReqConfigData.super.start(self, timeoutTime) == false then
        return
    end
    local time,_ = string.gsub(tostring(socket.gettime()), "%.", "")
    time  = string.sub(time,#time-4,#time)
    self._askId = tonumber(time)
    --self._askId = os.time()
    local reqConfig = XH.BoxDataProtocol.ReqGetConfigDataEx:new()
    reqConfig.askid = self._askId
    reqConfig.areaid = XH.areaData:getAreaID()
    reqConfig.channelid = 0
    reqConfig.gameid = 0
    reqConfig.filename = filename
    local SRSGroupID = XH.areaData:getSrsGroupID()
    XH.netEngine:addProtocolScriptFuncByObj(self, self.onRespConfigData, XH.BoxDataProtocol.ReqGetConfigDataEx.processid, SRSGroupID)
    XH.netEngine:sendProtocol(reqConfig, XH.BoxDataProtocol.ReqGetConfigDataEx.processid,0,SRSGroupID)
end

function ReqConfigData:onRespConfigData(XYID, buff, len, processid)
    if processid ~= XH.BoxDataProtocol.RespGetConfigDataEx.processid then
        return
    end
    if XYID ~=  XH.BoxDataProtocol.RespGetConfigDataEx.XY_ID then
        return
    end
    
    local respConfig =  XH.BoxDataProtocol.RespGetConfigDataEx:new()
    respConfig:bistream(buff, len)
    if self._askId ~= respConfig.askid then
        return
    end
    if respConfig then
        self:success(respConfig.data)
    else
        self:fail()
    end
end


return ReqConfigData�