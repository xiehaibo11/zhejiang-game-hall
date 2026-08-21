--[[
 * @Author: huang Rulin
 * @Date: 2018-02-28 03:55:53
 ]]


------------------------------{}----------------------------
local ShanggaCardListNode = class("ShanggaCardListNode", function() return cc.CSLoader:createNode("Match/gameModel/ga/ga.csb") end)


local function sizeAdd(size1, size2)
    return cc.size(size1.width+size2.width, size1.height+size2.height)
end

local function pAbs(pos)
    return cc.p(math.abs(pos.x), math.abs(pos.y))
end

local function sizeFromP(p)
    return cc.size(p.x, p.y)
end

function ShanggaCardListNode:ctor(min, max)
    self:setAnchorPoint(cc.p(0.5, 0))
    self:setPosition(display.cx, 0)

    for i=0,5 do
        local btn = g_gameGlobal:findChildWithName(self, "gaBtn_"..i)
        if btn then
            btn:setTag(i)
            btn:setUnifySizeEnabled(true)
            if i>=min and i<=max then
                btn:onClick(handler(self, self.clickFunc))
            else
                btn:setEnabled(false)
                btn:setBright(false)
                for _, cn in ipairs(btn:getChildren()) do
                    if cn.getVirtualRenderer and cn:getVirtualRenderer() and cn:getVirtualRenderer().setState then 
                        cn:getVirtualRenderer():setState(1)
                    else
                        cn:setColor(display.COLOR_GRAY)
                    end
                end
            end
            
            if G_TEEST_AUTO_CHU then
                if i == min then
                    performWithDelay(self, function() self:clickFunc(btn) end, 0.2)
                end
            end
        end
    end

    --广播有玩家做了上噶操作
    local netObj,eventObj = unpack(require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msg_obj"))
    self:addChild(netObj.new(g_msgDefinitions.MSG_SHANG_GA, function (event, msg)
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.tablePos)
        if posState == 1 then
            self:removeSelf()
        end
    end))
end

function ShanggaCardListNode:onEnter()
end

function ShanggaCardListNode:onExit()
end


function ShanggaCardListNode:clickFunc( target )
    g_longConnect:sendMsg(g_msgDefinitions.MSG_SHANG_GA, {
        gaScore = target:getTag()
    })
    self:removeSelf()
end


return ShanggaCardListNode