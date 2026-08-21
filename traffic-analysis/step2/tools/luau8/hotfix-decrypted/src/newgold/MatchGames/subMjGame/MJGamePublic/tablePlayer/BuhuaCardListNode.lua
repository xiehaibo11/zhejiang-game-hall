--[[
 * @Author: huang Rulin
 * @Date: 2018-02-28 03:55:53
 ]]


------------------------------{}----------------------------
local BuhuaCardListNode = class("BuhuaCardListNode", cc.Node)


local function sizeAdd(size1, size2)
    return cc.size(size1.width+size2.width, size1.height+size2.height)
end

local function pAbs(pos)
    return cc.p(math.abs(pos.x), math.abs(pos.y))
end

local function sizeFromP(p)
    return cc.size(p.x, p.y)
end

function BuhuaCardListNode:ctor(posState)
    if posState < 1 or posState > 4 then posState = 1 end    

    self.cardNodeList = {}
    self.posState = posState
    self.cardNodeConfig = g_gameConstant.CARD_NODE_CONFIG[g_UserDataTable.mjCardType][self.posState]
    self.cardParent = cc.Node:create()
    self:addChild(self.cardParent)
end

function BuhuaCardListNode:onEnter()
end

function BuhuaCardListNode:onExit()
end


function BuhuaCardListNode:clearCardList()
    self.cardParent:removeAllChildren()
    --self:setVisible(false)
    self.curMaxLine = 0
    self.cardNodeList = {}
end

function BuhuaCardListNode:showCardList(cardList)
   self:clearCardList()

    table.sort(cardList)
    local line = 0;
    for i, v in pairs(cardList) do
        local imageView = g_gameGlobal:getLaydownCard(v, self.posState)
        if imageView then
            imageView:setScale(self.cardNodeConfig.chuFixScale)
            self.cardParent:add(imageView)

            local x = (i-1) * imageView:getBoundingBox().width
            local y = (i-1) * imageView:getBoundingBox().height

            if self.posState == 1 then
                imageView:setLocalZOrder(-1*i)
                imageView:move(x, 0)
            elseif self.posState == 2 then
                imageView:setLocalZOrder(-1*i)
                imageView:move(0, y)
            elseif self.posState == 3 then
                imageView:move(-1*x, 0)
            elseif self.posState == 4 then
                imageView:move(0, -1*y)
            end
        end
    end
end


return BuhuaCardListNode%