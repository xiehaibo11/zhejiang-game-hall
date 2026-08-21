
local TablePlayerMyWatchBase = {}

function TablePlayerMyWatchBase:ctor(...)
    self.posState = 1
    self.super.ctor(self, ...)
    self.isWatchWar = true
    self.handCardRect = self.cardNodeConfig.handBRect
    
    self.newCardPai = g_gameGlobal:getNormalBackCard(self.posState)
        :setAnchorPoint(cc.p(0, 0.5))
        :move(cc.p(-1000, -1000))
        :setVisible(false)
    
    
    self.handCardPanel:addChild(self.newCardPai, -1)
end

function TablePlayerMyWatchBase:initPaiMianValue(msg)
    local cardCount = self.totalHandCardsNum or 13
    
    for i = 1, cardCount do
        local paimian = g_gameGlobal:getNormalBackCard(self.posState)
            :setAnchorPoint(cc.p(0, 0.5))
        self.handCardPanel:addChild(paimian, i)
        
        paimian:move(self.handCardStartPosX + self.handCardRect.width * (i-1), 
                        self.handCardStartPosY)

        table.insert(self.inhandCards, paimian)
    end
    
    
    self.newCardPai:setPositionX(self.handCardStartPosX + self.handCardRect.width * #self.inhandCards + self.cardNodeConfig.newCardDistance)
    self.newCardPai:setPositionY(self.handCardStartPosY)
    self.handChuCardPosCache = cc.p(self.newCardPai:getPositionX(), self.newCardPai:getPositionY())
end

function TablePlayerMyWatchBase:setIsMyFangwei(value)
    if not g_gameGlobal:getIsPlayingGameLog() and #self.inhandCards > 0 then
        self.newCardPai:setVisible(value)
    end
end


function TablePlayerMyWatchBase:refreshPlayerCards()
    
end

function TablePlayerMyWatchBase:chiPengGangNotify(msg, isMySelfMo)
end

function TablePlayerMyWatchBase:repositionAllCards()
end


function TablePlayerMyWatchBase:dingqueOperationNotify()
end


function TablePlayerMyWatchBase:overTimeAutoChu(cardValue)
end


function TablePlayerMyWatchBase:moCard(cardValue,isPlayDownAction,_callback,dianPaoPos)
    if not cardValue or cardValue == 0 then
        return
    end
    
    self.huCard = self:getNormalCard(cardValue):setAnchorPoint(cc.p(0, 0.5))
        :setTag(cardValue)
        :addTo(self.handCardPanel, 100+2)
    
    local pos = self.handChuCardPosCache--self:getNewCardPos()
    self.huCard:move(cc.p(pos.x,pos.y))
    if callback then 
        callback()
    end
    
    if dianPaoPos then
        if type(dianPaoPos) == "number" and dianPaoPos >= 0 then
            local rmPos = g_gameGlobal:getTablePlayerPosWithTablePos(dianPaoPos)
            if self.huCard and not tolua.isnull(self.huCard) then
                self:setHuPlayerFlag(self.huCard, rmPos)
            end
        end
    end
end

function TablePlayerMyWatchBase:autoChu()
end

function TablePlayerMyWatchBase:sendChuPaiOrder()
end

function TablePlayerMyWatchBase:updateCardColor(value)
end

function TablePlayerMyWatchBase:setPromptTingList(list, limitChu, showMark)
end

function TablePlayerMyWatchBase:clearHuCardList()
end

function TablePlayerMyWatchBase:showWaitXuanque(visible)
end

function TablePlayerMyWatchBase:setCurOperationState(state)
end


function TablePlayerMyWatchBase:hideOperationMenu()
end

function TablePlayerMyWatchBase:showHuCardList()
end

function TablePlayerMyWatchBase:chiPengGangOperation( msg, bPlayAnimation, pengGangFx)
    if bPlayAnimation then
        self:playChiPengGangAnimation(msg)
    end

    if msg.opValue == g_gameConstant.MAHJONG_OPERTAION_GANG_NOTIFY then
        return
    end

    local c1 = bit._and(msg.opValue, 0xff)
    local c2 = bit._and(msg.opValue*(2^-8), 0xff)
    local c3 = bit._and(msg.opValue*(2^-16), 0xff)
    local chiCard = bit._and(msg.opValue*(2^-24), 0xff)
    local opCard = 0

    if c1 == chiCard then
        opCard = bit._or(bit._or(c3*(2^8), c2*(2^16)), c1)
    elseif c3 == chiCard then
        opCard = bit._or(bit._or(c2*(2^8), c1*(2^16)), c3)
    elseif c2 == chiCard then
        opCard = bit._or(bit._or(c1*(2^16), c3*(2^8)), c2)
    else
        opCard = bit._and(msg.opValue, 0xffffff)
    end

    local isGang = false
    if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_AN_GANG) == g_gameConstant.MAHJONG_OPERTAION_AN_GANG or 
        bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_BU_GANG) == g_gameConstant.MAHJONG_OPERTAION_BU_GANG or 
        bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_MING_GANG) == g_gameConstant.MAHJONG_OPERTAION_MING_GANG then
        opCard = bit._or(opCard, c2*(2^24))
        isGang = true
    end

    local bAnGang = false
    if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_AN_GANG) == g_gameConstant.MAHJONG_OPERTAION_AN_GANG then
        bAnGang = true
    end

--    local bChi = false
--    if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_CHI) == g_gameConstant.MAHJONG_OPERTAION_CHI then
--        bChi = true
--    end
    
    local laydownScale = self.cardNodeConfig.laydownFixScale or 1
    local isScaleFixed = false
    
    local downCardPos = nil
    
    if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_BU_GANG) == g_gameConstant.MAHJONG_OPERTAION_BU_GANG then
        local matchIdx = self:findPeng(c2)
        if matchIdx == 0 then
            return
        end


        local posx = self.laydownCards[matchIdx]:getPositionX()
        local posy = self.laydownCards[matchIdx]:getPositionY() + 15

        local imageView = self:getMyLaydownCard(c2)
            :setTag(c2)
            :move(posx, posy)
            :setAnchorPoint(cc.p(0, 0.5))
            :setScale(laydownScale)
            :addTo(self.laydownCardPanel,100+5)
        self:addHandCardSelectMask(imageView)

        if g_gameGlobal:getIsPlayingGameLog() then
            --imageView:setScale(0.7)
        end

        table.insert(self.laydownCards, imageView)
--        self:setChuPlayerColor(imageView, msg.chuOffset, msg.operation, 3)
        self:setChuPlayerFlag(imageView, msg.chuOffset, msg.operation, 3)
        
        downCardPos = self.laydownCardPanel:convertToWorldSpace(cc.p(imageView:getPosition()))
        
    else
        local layDownWidth = 0
        local opCards = {}
        for i=0, 3 do
            local card = bit._and(opCard*(2^(-i*8)), 0xff)
            if card ~= 0 then
                opCards[#opCards+1] = card
            end
        end
        if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_CHI) == g_gameConstant.MAHJONG_OPERTAION_CHI then
            table.sort(opCards)
        end
        for idx,card in ipairs(opCards) do
            local i = idx-1
            if card ~= 0 then
                local cv = card

                -- 暗杠不显示
                if (bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_AN_GANG) == g_gameConstant.MAHJONG_OPERTAION_AN_GANG) then
                    if msg.ruleValue == g_gameConstant.GAME_PLAY_RULE_AN_GANG_FAN_ZHANG and i == 3 then
                        --暗杠只翻开显示一张的情况下 翻开第三张
                    else
                        cv = 0x39
                    end
                end
                local imageView = self:getMyLaydownCard(cv)
                    :setAnchorPoint(cc.p(0, 0.5))
                    :setTag(card)
                    
                if not isScaleFixed then
                    local origS = imageView:getScale()
                    laydownScale = origS * laydownScale
                    isScaleFixed = true
                end
                imageView:setScale(laydownScale)
                
                layDownWidth = imageView:getBoundingBox().width
                local startx = self.laydownCardStartPosX
                local zOrder = 3 - i
                if i == 3 then
                    imageView:move(startx + layDownWidth,
                        self.laydownCardStartPosY + 15)
                        zOrder = 3
                else
                    local posx = startx + i * layDownWidth
                    imageView:move(posx, self.laydownCardStartPosY)
                    
                    if i == 1 then
                        downCardPos = self.laydownCardPanel:convertToWorldSpace(cc.p(imageView:getPosition()))
                    end
                end

                self.laydownCardPanel:add(imageView,zOrder)
                self:addHandCardSelectMask(imageView)
                table.insert(self.laydownCards, imageView)
--                self:setChuPlayerColor(imageView, msg.chuOffset, msg.operation, i, chiCard)
                self:setChuPlayerFlag(imageView, msg.chuOffset, msg.operation, i, chiCard)
            end
        end
        
        local mylayhandDist = (self.cardNodeConfig.handBRect.width * 2) - layDownWidth * 3
        
        -- print(self.cardNodeConfig.layHandDistance)
        self.laydownCardStartPosX = self.laydownCardStartPosX + layDownWidth*3 + mylayhandDist--self.cardNodeConfig.layHandDistance
        self.handCardStartPosX = self.laydownCardStartPosX-- + mylayhandDist--self.cardNodeConfig.layHandDistance
        self.chiPengGangBlock = self.chiPengGangBlock + 1

        -- 对应位置隐藏手牌
        if not g_gameGlobal:getIsPlayingGameLog() then
            local chiPengNum = self.chiPengGangBlock * 3
            if chiPengNum < #self.inhandCards then
                for i = 1, chiPengNum do
                    self.inhandCards[i]:setVisible(false)
                end
                -- 重新排列手牌位置1
                local startx = self.handCardStartPosX
                for i, v in pairs(self.inhandCards) do
                    if i <= chiPengNum then
                        v:setVisible(false)
                    else
                        local handCardWidth = v:getBoundingBox().width
                        local offX = (i-chiPengNum - 1)*handCardWidth
                        v:setPositionX(startx + offX)
                    end
                end
                local handCardWidth = self.newCardPai:getBoundingBox().width
                self.newCardPai:setPositionX(startx + ( (#self.inhandCards-chiPengNum)*handCardWidth + self.cardNodeConfig.newCardDistance) )
                self.handChuCardPosCache = cc.p(self.newCardPai:getPositionX(), self.newCardPai:getPositionY())
            end
        end
    end
    -- self:repositionAllCards()
    
    if bPlayAnimation or pengGangFx then
        -- 碰杠打牌特效
        self:playPengGangFx(downCardPos, msg.unused3)
    end
end

return TablePlayerMyWatchBase�)