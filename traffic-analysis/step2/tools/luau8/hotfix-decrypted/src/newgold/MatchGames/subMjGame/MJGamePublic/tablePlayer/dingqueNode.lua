--[[
 * @Author: huang Rulin
 * @Date: 2018-02-28 03:55:53
 ]]


------------------------------{}----------------------------
local dingqueNode = class("dingqueNode", function() return cc.CSLoader:createNode("Match/gameModel/dingque/dingque.csb") end)


local function sizeAdd(size1, size2)
    return cc.size(size1.width+size2.width, size1.height+size2.height)
end

local function pAbs(pos)
    return cc.p(math.abs(pos.x), math.abs(pos.y))
end

local function sizeFromP(p)
    return cc.size(p.x, p.y)
end

function dingqueNode:ctor(min, max)
    self:setAnchorPoint(cc.p(0.5, 0))
    self:setPosition(display.cx, 0)

    local dingWanBtn = g_gameGlobal:findChildWithName(self, "queBtn_wan")
    dingWanBtn:setTag(0x00)
    dingWanBtn:onClick(handler(self, self.clickFunc))

    local dingTiaoBtn = g_gameGlobal:findChildWithName(self, "queBtn_tiao")
    dingTiaoBtn:setTag(0x10)
    dingTiaoBtn:onClick(handler(self, self.clickFunc))    

    local dingTongBtn = g_gameGlobal:findChildWithName(self, "queBtn_tong")    
    dingTongBtn:setTag(0x20)
    dingTongBtn:onClick(handler(self, self.clickFunc))

end

function dingqueNode:onEnter()
end

function dingqueNode:onExit()
end


function dingqueNode:clickFunc( target )
    local playerTableOperationMsg = {}
    playerTableOperationMsg.operation = g_gameConstant.GAME_OPERATION_CHOOSE_ABSENT_CARD_COLOR
    playerTableOperationMsg.opValue = target:getTag()
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)
    self:removeSelf()
end


return dingqueNodeP