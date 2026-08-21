if XH.isEmbeddedApp() then
    local ReqSxvipOperateEquip = class("ReqSxvipOperateEquip", XH.ReqHttp)
    local UrlConf = require("app.Config.UrlConf")
    -- local SxvipConfig = require("lobby.Modules.Sxvip.Config")

    function ReqSxvipOperateEquip:ctor()
        ReqSxvipOperateEquip.super.ctor(self)
        self._askId = 0
        self._state = false
    end

    function ReqSxvipOperateEquip:start(appid, operate_props, propsid, timeoutTime)
        if ReqSxvipOperateEquip.super.start(self, timeoutTime) == false then
            return
        end

        local urlInfo = {
            tenant_id = XH.areaData:getTenantid(),
            area_id = XH.areaData:getAreaID(),
            user_id = XH.playerData:getNumberID(),
            prop = {
                prop_id = propsid,
                burse_type = 6, -- todo usertime
                count = 1
            },
            take_off = operate_props == 0 and false or true,
            params = ""
        }
        self._state = urlInfo.take_off

        local headmap = {}
        headmap["Content-Type"] = "application/json"
        local jsonStr = cjson.encode(urlInfo)

        XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_URL_OPERATE_EQUIP, UrlConf.URL_OPERATE_EQUIP, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
    end

    function ReqSxvipOperateEquip:onHttpCallBack(httpID, status, response, xhr)
        if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_URL_OPERATE_EQUIP then
            return
        end
        if status == 200 then
            if response.resp.errCode == 0 then
                self:success(response)
            else
                self:setMessage(response.resp.errReason)
                self:fail()
            end
        else
            self:fail()
        end
    end

    return ReqSxvipOperateEquip
end

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
    self._reqData = reqOperate
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

return ReqOperateProps�