local ReqPropsConfig = class("ReqPropsConfig", XH.ReqProtocol)

function ReqPropsConfig:start(appid, md5, bzip,propstype,timeoutTime)
    if ReqPropsConfig.super.start(self, timeoutTime) == false then
        return
    end
    appid = appid or 0
    md5 = md5 or ""
    local srsGroupID = XH.areaData:getSrsGroupID()
    local reqPropsConfig = XH.BagSysProtocol.ReqPropsConfig:new()
    
    local askid = math.floor(socket.gettime())
    self._askid = askid

    reqPropsConfig.askid = askid

    reqPropsConfig.md5 = md5
    reqPropsConfig.bzip = bzip or false
    reqPropsConfig.props_type = propstype or 0
    self._pack_msg = ""

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onReceivePropsConfig, reqPropsConfig.processid, srsGroupID)
    XH.netEngine:sendProtocol(reqPropsConfig, reqPropsConfig.processid, appid, srsGroupID)
end

function ReqPropsConfig:onReceivePropsConfig(XYID, buff, len, processid)
    if XYID ~= XH.BagSysProtocol.ResPropsConfig.XY_ID then
        return
    end
    if processid ~= XH.BagSysProtocol.processid then
        return
    end
    local respPropsConfig = XH.BagSysProtocol.ResPropsConfig:new()
    respPropsConfig:bistream(buff, len)

    if self._askid ~= respPropsConfig.askid then
        return
    end

    local errorcode = respPropsConfig.ec
    
    if errorcode == XH.BagSysProtocol.ERRORCODE.SUCCESS then
        
        self._pack_msg = self._pack_msg .. tostring(respPropsConfig.pack_msg)

        if respPropsConfig.total_package - 1 == respPropsConfig.cur_package then
            self:success({ data = self._pack_msg, bzip = respPropsConfig.bzip, propstype = respPropsConfig.props_type })
        end

        if respPropsConfig.pack_msg_len == 0 then
            self:success({ data = self._pack_msg, bzip = respPropsConfig.bzip, propstype = respPropsConfig.props_type })
        end
    else
        self:fail({errorcode = errorcode})
    end
end

return ReqPropsConfig�