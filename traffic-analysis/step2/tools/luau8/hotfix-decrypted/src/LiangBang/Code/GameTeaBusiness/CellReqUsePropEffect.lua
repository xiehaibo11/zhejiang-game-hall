local Cell = import("GameCommon.Code.GameTea.Cell")
local CellReqUsePropEffect = class("CellReqUsePropEffect", Cell)
local CURRENT_MODULE_NAME = ...
local GameMXY = import("..GameProtocol.GameMXY", CURRENT_MODULE_NAME)
CellReqUsePropEffect.PROP_CHARGE_COUNT = 1

function CellReqUsePropEffect:ctor()
    CellReqUsePropEffect.super.ctor(self)
end

function CellReqUsePropEffect:start(toSeat, propIndex, propId, propNum, timeoutTime)
    if CellReqUsePropEffect.super.start(self, timeoutTime) == false then
        return
    end

    self.toSeat = toSeat
    self.propIndex = propIndex

    local reqUsepProp = GameMXY.ReqUseProps:new()
    reqUsepProp.count = propNum or CellReqUsePropEffect.PROP_CHARGE_COUNT
    reqUsepProp.propsid = propId
    Game.Interface.addProtocolScriptFuncByObj(self, self.onReciveRespUseProps, XH.bf.ProcessIDList and XH.bf.ProcessIDList.Game or 1)
    Game.Interface.sendMessage(reqUsepProp, nil, XH.bf.ProcessIDList and XH.bf.ProcessIDList.Game or 1)
end

function CellReqUsePropEffect:success(data)
    CellReqUsePropEffect.super.success(self, data)
    Game.Interface.removeProtocolScriptFuncByObj(self, self.onReciveRespUseProps)
end

function CellReqUsePropEffect:fail(data)
    CellReqUsePropEffect.super.fail(self, data)
    Game.Interface.removeProtocolScriptFuncByObj(self, self.onReciveRespUseProps)
end

function CellReqUsePropEffect:timeout(data)
    CellReqUsePropEffect.super.timeout(self, data)
    Game.Interface.removeProtocolScriptFuncByObj(self, self.onReciveRespUseProps)
end

function CellReqUsePropEffect:onReciveRespUseProps(XYID, buff, len)
    if XYID ~= GameMXY.RespUseProps.XY_ID then
        return
    end
    local respUsepProp = GameMXY.RespUseProps:new()
    respUsepProp:bistream(buff, len)
    print("respUsepProp.flag = " .. tostring(respUsepProp.flag))
    if respUsepProp.flag == respUsepProp.FLAG.SUCCESS then
        self:success(respUsepProp)
    elseif respUsepProp.flag == respUsepProp.FLAG.NOENOUGHPROPS then
        XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK,
        }, "道具不足！")
        self:fail()
    elseif respUsepProp.flag == respUsepProp.FLAG.NOT_COST then
        XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK,
        }, "使用道具失败！")
        self:fail()
    else
        XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK,
        }, "请求超时，请重试！")
        self:fail()
    end
end

return CellReqUsePropEffect�	