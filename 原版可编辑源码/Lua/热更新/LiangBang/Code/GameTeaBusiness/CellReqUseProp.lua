local Cell = import("GameCommon.Code.GameTea.Cell")
local CellReqUseProp = class("CellReqUseProp", Cell)
local CURRENT_MODULE_NAME = ...
local GameMXY = import("..GameProtocol.GameMXY", CURRENT_MODULE_NAME)
CellReqUseProp.PROP_CHARGE_COUNT = 1

function CellReqUseProp:ctor()
    CellReqUseProp.super.ctor(self)
end

function CellReqUseProp:start(propId, propNum, timeoutTime)
    if CellReqUseProp.super.start(self, timeoutTime) == false then
        return
    end

    local reqUsepProp = GameMXY.ReqUseProps:new()
    reqUsepProp.count = propNum
    reqUsepProp.propsid = propId
    reqUsepProp.type = 2
    Game.Interface.addProtocolScriptFuncByObj(self, self.onReciveRespUseProps, XH.bf.ProcessIDList and XH.bf.ProcessIDList.Game or 1)
    Game.Interface.sendMessage(reqUsepProp, nil, XH.bf.ProcessIDList and XH.bf.ProcessIDList.Game or 1)
end

function CellReqUseProp:success(data)
    CellReqUseProp.super.success(self, data)
    Game.Interface.removeProtocolScriptFuncByObj(self, self.onReciveRespUseProps)
end

function CellReqUseProp:fail(data)
    CellReqUseProp.super.fail(self, data)
    Game.Interface.removeProtocolScriptFuncByObj(self, self.onReciveRespUseProps)
end

function CellReqUseProp:timeout(data)
    CellReqUseProp.super.timeout(self, data)
    Game.Interface.removeProtocolScriptFuncByObj(self, self.onReciveRespUseProps)
end

function CellReqUseProp:onReciveRespUseProps(XYID, buff, len)
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

return CellReqUseProp