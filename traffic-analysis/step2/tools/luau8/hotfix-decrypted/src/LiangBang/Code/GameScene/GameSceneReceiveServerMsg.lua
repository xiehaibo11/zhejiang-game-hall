local CURRENT_MODULE_NAME = ...
local GameScene = class("GameScene")
local GameMXY = import("GameCommon.Code.GameProtocol.GameMXY")
local ToolMXY = import("GameCommon.Code.GameProtocol.ToolMXY")

function GameScene:onReciveTableInfo(XYID, buff, len)
    if XYID == GameMXY.TableInfo.XY_ID then 
        local tableInfo = GameMXY.TableInfo:new()
        tableInfo:bistream(buff, len)
        Game.TableData.updateTableData(tableInfo)
    elseif XYID == ToolMXY.RespLeaveRoom.XY_ID then
        if self.teaHousePswd and self._clientData._playCount == 0 then
            local respLeaveRoom = ToolMXY.RespLeaveRoom:new()
            respLeaveRoom:bistream(buff, len)
            if respLeaveRoom.type == ToolMXY.RespLeaveRoom.LEAVEROOMTYPE.KICK then
                XH.TipTool.showTip({
                    type = XH.TIP_LAYER_TYPE.OK,            
                }, "你已被圈主强制站起！")
                self:leaveGame()
            end
        end
    end
end

return GameScene�