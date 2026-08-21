local ReqOperateProps = class("ReqOperateProps", XH.ReqProtocol)

--[[
operate_props:  操作码
]]
function ReqOperateProps:start(appid, operate_props, propsid, timeoutTime)
    if ReqOperateProps.super.start(self, timeoutTime) == false then
        return
    end

    appid = appid or 0
    operate_props = operate_props or 0
    propsid = propsid or 0

    local srsGroupID = XH.areaData:getSrsGroupID()
    local reqOperate = XH.BagSysProtocol.ReqOperateProps:new()
    
    local askid = math.floor(socket.gettime())
    self._askid = askid

    reqOperate.askid = askid
    reqOperate.operate_props = operate_props
    reqOperate.propsid = propsid
    self._operate_props = operate_props

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onReceiveOperateProps, reqOperate.processid, srsGroupID)
    XH.netEngine:sendProtocol(reqOperate, reqOperate.processid, appid, srsGroupID)
end

function ReqOperateProps:onReceiveOperateProps(XYID, buff, len, processid)
    if XYID ~= XH.BagSysProtocol.RespOperateProps.XY_ID then
        return
    end
    if processid ~= XH.BagSysProtocol.processid then
        return
    end

    local resOperate = XH.BagSysProtocol.RespOperateProps:new()
    resOperate:bistream(buff, len)

    if self._askid ~= resOperate.askid then
        return
    end

    local errorcode = resOperate.ec
    if errorcode == XH.BagSysProtocol.ERRORCODE.SUCCESS then
        self:success(resOperate)
    else
        self:fail({errorcode = errorcode})
    end
end

return ReqOperateProps