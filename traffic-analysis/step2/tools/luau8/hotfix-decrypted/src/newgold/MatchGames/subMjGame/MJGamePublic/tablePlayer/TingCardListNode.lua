--[[
 * @Author: huang Rulin
 * @Date: 2018-02-28 03:55:53
 ]]


------------------------------{}----------------------------
local TingCardListNode = class("TingCardListNode", function() return cc.CSLoader:createNode("Match/huTipCards.csb") end)

function TingCardListNode:ctor(...)
    self:setVisible(false)

    self.showedTingList = false
    self.donotShow = false
    self.canClickOutSide = false

    self.itemMargin = 10
    self.bg = g_gameGlobal:findChildWithName(self, "bg")
    self.orginSize = self.bg:getContentSize()

    self.cardsBaseNode = g_gameGlobal:findChildWithName(self, "cardsBaseNode")

    self.itemModel = g_gameGlobal:findChildWithName(self, "itemModel")
    self.cardSize = self.itemModel:getChildByName("cardBase"):getContentSize()

    self.oneItemWSpace = self.itemModel:getContentSize().width
    self.oneItemWHeight = self.itemModel:getContentSize().height

    self.itemModel:setVisible(false)

    -- g_gameGlobal:registerOutsideCloseFunc(self.bg,function()
    --     --self:stopPosSchedule()
    --     self:hide()
    --     --self:removeSelf()
    -- end,false)
    g_gameGlobal:registerOutsideCloseFunc(self.bg,function(touch)
        --self:stopPosSchedule()
        if self.canClickOutSide then
            
            local gameBase = g_gameGlobal:getGameScene():getChildByName("gameBase")
            if not tolua.isnull(gameBase) then
                local selfPlayer = gameBase.tablePlayerTable[1]
                if selfPlayer and selfPlayer ~= 0 then
                    local tp = selfPlayer:convertTouchToNodeSpace(touch)
                    -- 
                    if tp.y <= selfPlayer.handCardStartPosY + 80 then
                        return
                    end
                    
                    -- 点击听牌按钮区域时不处理
                    local gameBase = g_gameGlobal:getGameBase()
                    if gameBase then
                        local tingPaiBtnRect = gameBase:getTingpaiBtnRect()
                        if tingPaiBtnRect and cc.rectContainsPoint(tingPaiBtnRect, tp) then
                            return
                        end
                    end
                end
            end
            
            self:hide()
        end
        --self:removeSelf()
    end,false)

    self:canOutSideClose(true)
end

function TingCardListNode:canOutSideClose( iscan )
    self.canClickOutSide = iscan or false
end

function TingCardListNode:onEnter()
end

function TingCardListNode:onExit()
end

function TingCardListNode:isShowedTingList()
    return self.showedTingList
end

function TingCardListNode:setDonotShow(value)
    self.donotShow = value 
end

function TingCardListNode:getDonotShow(value)
    return self.donotShow 
end

function TingCardListNode:clearHuCardList()
    self.cardsBaseNode:removeAllChildren()
    self:setVisible(false)
end

function TingCardListNode:showHuCardList(tingList, zsList, mutList)
   -- self:showTingCardList(tingList, zsList, mutList)
end

function TingCardListNode:showTingCardList(tingList, zsList, mutList, fanList)
    self:clearHuCardList()

    if self.donotShow then
        return
    end

    self.showedTingList = true
    local colCountLimit = 2
    if g_gameGlobal:getCurrentWanFa().wanfa == g_gameConstant.GAME_PLAY_RULE_SCMJ_XZ_JOKER then
        self:setScale(0.7)
        colCountLimit = 3
    end
    local lineCountLimit = math.ceil(#tingList/colCountLimit)    
    if #tingList < 2 then
        colCountLimit = 1
    end

    if #tingList > 0 then
        for i, v in ipairs(tingList) do
            local line-- = 1 - i%colCountLimit --math.ceil(i%lineCountLimit)
            local col
            if i <= lineCountLimit then
                col = (i-1)%lineCountLimit 
                line = 0
            else
                col = (i - lineCountLimit - 1)%lineCountLimit
                if  i % lineCountLimit == 0 then
                    line = i /lineCountLimit - 1
                else
                    line = math.floor(i /lineCountLimit )
                end
            end
    
            local posx = col * self.oneItemWSpace + col * self.itemMargin
            local posy = -(line * self.oneItemWHeight + line * self.itemMargin)
            local item = self.itemModel:clone()
            item:setVisible(true)
            item:setAnchorPoint(cc.p(0,1))
            item:setPosition(posx, posy)
            self.cardsBaseNode:addChild(item)
    
            local imageView = g_gameGlobal:getLaydownCard(v, 1)
            --imageView:sameSize(self.cardSize)
            imageView:setAnchorPoint(cc.p(0, 0))
            imageView:setPosition(0,22)
            item:getChildByName("cardBase"):add(imageView)
    
            if type(zsList) == "table" and zsList[i] then
                item:getChildByName("cardCount"):setString(tostring(zsList[i]) .. "张")
            else
                item:getChildByName("cardCount"):setString("")
            end

            if type(fanList) == "table" and zsList[i] then
                item:getChildByName("cardfan"):setString(tostring(fanList[i]) .. "番")
            else
                item:getChildByName("cardfan"):setString("")
            end

            if g_gameGlobal:getCurrentWanFa().wanfa == g_gameConstant.GAME_PLAY_RULE_RCMJ_RCWF then
                -- 荣昌玩法隐藏番
                item:getChildByName("cardfan"):setString(""):setVisible(false)
                item:getChildByName("Image_bg1"):setVisible(false)
                -- 张数和背景上移
                local size = item:getBoundingBox()
                local t = item:getChildByName("cardCount")
                local i = item:getChildByName("Image_bg2")
                t:setPositionY(size.height/2)
                i:setPositionY(size.height/2)
            end
        end
    
        local lineCount = math.ceil(#tingList/lineCountLimit)
        local maxColCount = #tingList>lineCountLimit and lineCountLimit or #tingList  
        self.bg:setContentSize(cc.size(self.orginSize.width + self.oneItemWSpace*(maxColCount-1) + (maxColCount-1) * self.itemMargin, 
        self.orginSize.height+ (colCountLimit - 1) * self.oneItemWHeight + (colCountLimit - 1) * self.itemMargin + 5))
        ccui.Helper:doLayout(self.bg); 
        self:setVisible(true)
    end
end

return TingCardListNodea