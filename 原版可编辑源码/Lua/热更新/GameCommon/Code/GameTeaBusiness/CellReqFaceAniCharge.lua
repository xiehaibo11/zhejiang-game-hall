local Cell = import("..GameTea.Cell")
local CellReqFaceAniCharge = class("CellReqFaceAniCharge", Cell)
local CURRENT_MODULE_NAME = ...
local GameMXY = import("..GameProtocol.GameMXY", CURRENT_MODULE_NAME)

function CellReqFaceAniCharge:ctor()
    CellReqFaceAniCharge.super.ctor(self)
    self.toSeat = 4
    self.faceAniIndex = 1
end

function CellReqFaceAniCharge:start(toSeat, faceAniIndex, timeoutTime)
    if CellReqFaceAniCharge.super.start(self, timeoutTime) == false then
        return
    end
    self.toSeat = toSeat
    self.faceAniIndex = faceAniIndex
    Game.Interface.addProtocolScriptFuncByObj(self, self.onReciveRespCharge, XH.bf.ProcessIDList and XH.bf.ProcessIDList.Game or 1)

    local reqCharge = GameMXY.ReqCharge:new()
    reqCharge.nScore = 100
    reqCharge.ucType = 2
    Game.Interface.sendMessage(reqCharge, nil, XH.bf.ProcessIDList and XH.bf.ProcessIDList.Game or 1)
end

function CellReqFaceAniCharge:success(data)
    CellReqFaceAniCharge.super.success(self, data)
    Game.Interface.removeProtocolScriptFuncByObj(self, self.onReciveRespCharge)
end

function CellReqFaceAniCharge:fail(data)
    CellReqFaceAniCharge.super.fail(self, data)
    Game.Interface.removeProtocolScriptFuncByObj(self, self.onReciveRespCharge)
end

function CellReqFaceAniCharge:timeout(data)
    CellReqFaceAniCharge.super.timeout(self, data)
    Game.Interface.removeProtocolScriptFuncByObj(self, self.onReciveRespCharge)
end

function CellReqFaceAniCharge:onReciveRespCharge(XYID, buff, len)
    if XYID ~= GameMXY.RespCharge.XY_ID then
        return
    end
    local respCharge = GameMXY.RespCharge:new()
    respCharge:bistream(buff, len)

    if respCharge.ucFlag == respCharge.FLAG.SUCCESS then
        self:success()
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

return CellReqFaceAniCharge