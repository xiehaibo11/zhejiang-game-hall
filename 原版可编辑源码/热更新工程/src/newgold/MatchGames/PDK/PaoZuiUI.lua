--region PaoZuiUI.lua
--Date 2021/7/5
--金寨玩法的跑嘴选择界面

local PaoZuiUI = class("PaoZuiUI", cc.load("mvc").ViewBase)
PaoZuiUI.RESOURCE_FILENAME = "game/jinZhai/PaozuiUI.csb"
PaoZuiUI.RESOURCE_BINDING = {
    ["Button_0"] = {
        varname="button_0",
        anim = true,
        events={
            {event="click",method="onSelectPaozui"}
        }
    },
    ["Button_1"] = {
        varname="button_1",
        anim = true,
        events={
            {event="click",method="onSelectPaozui"}
        }
    },
    ["Button_2"] = {
        varname="button_2",
        anim = true,
        events={
            {event="click",method="onSelectPaozui"}
        }
    },
    ["Button_3"] = {
        varname="button_3",
        anim = true,
        events={
            {event="click",method="onSelectPaozui"}
        }
    },
    ["clockiBg/leftTime"] = {
        varname="leftTimeUI",
    },
}

function PaoZuiUI:ctor(remainSec)
    self._remainSec = remainSec or 15
    PaoZuiUI.super.ctor(self)
    self.leftTimeUI:setStringValue(self._remainSec)
    schedule(self.leftTimeUI, function() 
        self._remainSec = self._remainSec - 1
        self.leftTimeUI:setStringValue(self._remainSec)
        if self._remainSec == 0 then
            self:removeFromParent()
        end
    end, 1)  
end

function PaoZuiUI:onSelectPaozui(sender)
    local senderName = sender:getName()
    local opValue = string.match(senderName,"%d")
    local playerTableOperationMsg = {}
    playerTableOperationMsg.operation = g_gameConstant.MAHJONG_OPERTAION_JINZHAI_JIAFAN
    playerTableOperationMsg.player_table_pos = g_gameGlobal:getMyTablePos()
    playerTableOperationMsg.opValue = tonumber(opValue)
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)

    self:removeFromParent()
end

return PaoZuiUI
--endregion
