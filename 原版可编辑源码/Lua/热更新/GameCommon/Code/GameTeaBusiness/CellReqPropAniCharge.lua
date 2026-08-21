local Cell = import("..GameTea.Cell")
local CellReqPropAniCharge = class("CellReqPropAniCharge", Cell)
local CURRENT_MODULE_NAME = ...
local GameMXY = import("GameCommon.Code.GameProtocol.GameMXY")
CellReqPropAniCharge.PROP_CHARGE_LIMIT_SCORE = 100

function CellReqPropAniCharge:ctor()
    CellReqPropAniCharge.super.ctor(self)
    self.toSeat = 4
    self.propIndex = 1
end

function CellReqPropAniCharge:start(toSeat, propIndex, timeoutTime, gameID)
    if CellReqPropAniCharge.super.start(self, timeoutTime) == false then
        return
    end
    self.toSeat = toSeat
    self.propIndex = propIndex
    Game.Interface.addProtocolScriptFuncByObj(self, self.onReciveRespCharge, XH.bf.ProcessIDList and XH.bf.ProcessIDList.Game or 1)

    local reqCharge = GameMXY.ReqCharge:new()
    reqCharge.nScore = CellReqPropAniCharge.PROP_CHARGE_LIMIT_SCORE
    reqCharge.ucType = 2
    reqCharge.gameID = gameID or 0
    Game.Interface.sendMessage(reqCharge, nil, XH.bf.ProcessIDList and XH.bf.ProcessIDList.Game or 1)
end

function CellReqPropAniCharge:success(data)
    CellReqPropAniCharge.super.success(self, data)
    Game.Interface.removeProtocolScriptFuncByObj(self, self.onReciveRespCharge)
end

function CellReqPropAniCharge:fail(data)
    CellReqPropAniCharge.super.fail(self, data)
    Game.Interface.removeProtocolScriptFuncByObj(self, self.onReciveRespCharge)
end

function CellReqPropAniCharge:timeout(data)
    CellReqPropAniCharge.super.timeout(self, data)
    Game.Interface.removeProtocolScriptFuncByObj(self, self.onReciveRespCharge)
end

function CellReqPropAniCharge:onReciveRespCharge(XYID, buff, len)
    if XYID ~= GameMXY.RespCharge.XY_ID then
        return
    end
    local respCharge = GameMXY.RespCharge:new()
    respCharge:bistream(buff, len)

    if respCharge.ucFlag == respCharge.FLAG.SUCCESS then
        self:success(respCharge)
    elseif respCharge.ucFlag == respCharge.FLAG.NOT_SCORE then
        XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK,
        }, "金币不足！")
        self:fail()
    else
        XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK,
        }, "请求超时，请重试！")
        self:fail()
    end
end

return CellReqPropAniCharge