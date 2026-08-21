local ReqUseProps = class("ReqUseProps", XH.ReqProtocol)

--[[
propsid: 道具ID
propscnt: 道具数量
]]
function ReqUseProps:start(appid, propsid, propscnt, timeoutTime)
    if ReqUseProps.super.start(self, timeoutTime) == false then
        return
    end
    
    appid = appid or 0
    propsid = propsid or 0
    propscnt = propscnt or 0

    local srsGroupID = XH.areaData:getSrsGroupID()
    local reqUseProps = XH.BagSysProtocol.ReqUseProps:new()
    
    local askid = math.floor(socket.gettime())
    self._askid = askid

    reqUseProps.askid = askid
    reqUseProps.propsid = propsid
    reqUseProps.propscnt = propscnt

    self._propsid = propsid

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onReceiveUseProps, reqUseProps.processid, srsGroupID)
    XH.netEngine:sendProtocol(reqUseProps, reqUseProps.processid, appid, srsGroupID)
end

function ReqUseProps:onReceiveUseProps(XYID, buff, len, processid)
    if XYID ~= XH.BagSysProtocol.RespUseProps.XY_ID then
        return
    end
    if processid ~= XH.BagSysProtocol.processid then
        return
    end
    local resUseProps = XH.BagSysProtocol.RespUseProps:new()
    resUseProps:bistream(buff, len)

    if self._askid ~= resUseProps.askid then
        return
    end

    local errorcode = resUseProps.ec
    if errorcode == XH.BagSysProtocol.ERRORCODE.SUCCESS then
        resUseProps.propsid = self._propsid
        self:success(resUseProps)
    else
        self:fail({errorcode = errorcode})
    end
end

return ReqUseProps