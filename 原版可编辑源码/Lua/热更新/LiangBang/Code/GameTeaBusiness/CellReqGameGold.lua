local CURRENT_MOUDLE_NAME = ...
local CellProtocol = import("GameCommon.Code.GameTea.CellProtocol")
local CellReqGameGold = class("CellPlayerSR", CellProtocol)

function CellReqGameGold:ctor()
    CellReqGameGold.super.ctor(self)
end

function CellReqGameGold:start(numid) 
    local srData = XH.bf.GameXY.ReqSR:new()--获取财富
    srData.mode = 0
    srData.areaid = 1
    srData.numid = numid
    Game.Interface.sendMessage(srData,nil,1)
end

return CellReqGameGold