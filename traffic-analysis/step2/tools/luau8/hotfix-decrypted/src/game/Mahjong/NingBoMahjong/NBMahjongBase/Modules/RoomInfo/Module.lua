local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Mahjong.BasicMahjong.Modules.RoomInfo.Module")

function RoomInfoModule:ctor()
    self._dynamicTable = false --是否是动态桌

    RoomInfoModule.super.ctor(self)
end

function RoomInfoModule:onMsgGameRule(msgData)
    RoomInfoModule.super.onMsgGameRule(self, msgData)
    local func = loadstring("return {" .. msgData.strOriginalGameRule .. "}")
    local ruleTable = func()
    if type(ruleTable) == "table" and tonumber(ruleTable.DynamicTable) and tonumber(ruleTable.DynamicTable) > 0 then
        if not CF.roomData:isPlayBack() then
            self._dynamicTable = true
            CF.TipTool.showTip({
                type = CF.TIP_LAYER_TYPE.OK_NO_CLOSE,
                funcOK = function()
                    self:doReturnToLobby()
                    self:moveOutAnimation()
                end,
            }, "动态桌暂未开放，敬请期待！")
        end
    end
end

function RoomInfoModule:isDynamicTable()
    return self._dynamicTable
end

return RoomInfoModule: