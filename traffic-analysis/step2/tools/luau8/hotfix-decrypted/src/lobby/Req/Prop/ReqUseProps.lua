local ReqUseProps = class("ReqUseProps", XH.ReqProtocol)

--[[
propsid: 道具ID
propscnt: 道具数量
param: 额外参数
]]
function ReqUseProps:start(propsid, count, nType, param, appid, srsGroupID, timeoutTime)
    if ReqUseProps.super.start(self, timeoutTime) == false then
        return
    end

    local GameMProtocol = require("newgold.GoldCommon.Protocols.GameMProtocol")
    local msgReqUseProps = GameMProtocol.ReqUseProps:new()

    msgReqUseProps.count = count or 0
    msgReqUseProps.propsid = propsid or 0
    msgReqUseProps.param = param or "noparam"
    msgReqUseProps.type = nType or 0

    self._propsid = propsid

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onReceiveUseProps, GameMProtocol.ReqUseProps.processid, srsGroupID)
    XH.netEngine:sendProtocol(msgReqUseProps, GameMProtocol.ReqUseProps.processid, appid, srsGroupID)
end

function ReqUseProps:onReceiveUseProps(XYID, buff, len, processid)
    local GameMProtocol = require("newgold.GoldCommon.Protocols.GameMProtocol")
    if XYID ~= GameMProtocol.RespUseProps.XY_ID or processid ~= GameMProtocol.RespUseProps.processid then
        return
    end
    local respUseProps = GameMProtocol.RespUseProps:new()
    respUseProps:bistream(buff, len)

    local errorcode = respUseProps.flag
    if errorcode == GameMProtocol.RespUseProps.FLAG.SUCCESS then
        respUseProps.propsid = self._propsid
        self:success(respUseProps)
    else
        self:fail({errorcode = errorcode})
    end
end

return ReqUseProps