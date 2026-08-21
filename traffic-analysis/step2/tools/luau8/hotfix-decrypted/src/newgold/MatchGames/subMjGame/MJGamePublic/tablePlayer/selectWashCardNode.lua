--[[
 * @Author: huang Rulin
 * @Date: 2018-02-28 03:55:53
 ]]


------------------------------{}----------------------------
local SelectWashCardNode = class("SelectWashCardNode", function() return cc.CSLoader:createNode("Match/gameModel/selectWashCards/selectWashCards.csb") end)


function SelectWashCardNode:ctor(costValue)
    self:setAnchorPoint(cc.p(0.5, 0))
    self:setPosition(display.cx, 0)

    self.cancelBtn = g_gameGlobal:findChildWithName(self, "cancelExBtn")
    self.washBtn = g_gameGlobal:findChildWithName(self, "washBtn")

    self.cancelBtn:onClick(handler(self, self.clickFunc))
    self.washBtn:onClick(handler(self, self.clickFunc))


    self.washCostTip = g_gameGlobal:findChildWithName(self, "washCostTip")
    self.washCostTip:setString("")
    if costValue then
        self.washCostTip:setString(string.format( "(%sX%s)","房卡", tostring(costValue) ) )
    end
end


function SelectWashCardNode:clickFunc( target )
    if target == self.cancelBtn then
        local playerTableOperationMsg = {}
        playerTableOperationMsg.operation = g_gameConstant.GAME_OPERTAION_NOTIFY_PLAYER_DO_WASH_CARD
        playerTableOperationMsg.opValue = 0
        playerTableOperationMsg.player_table_pos = g_gameGlobal:getMyTablePos()
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)

        self:removeSelf()
    elseif target == self.washBtn then
        local playerTableOperationMsg = {}
        playerTableOperationMsg.operation = g_gameConstant.GAME_OPERTAION_NOTIFY_PLAYER_DO_WASH_CARD
        playerTableOperationMsg.opValue = 1
        playerTableOperationMsg.player_table_pos = g_gameGlobal:getMyTablePos()
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)
        self:removeSelf()
    end
end


return SelectWashCardNodew