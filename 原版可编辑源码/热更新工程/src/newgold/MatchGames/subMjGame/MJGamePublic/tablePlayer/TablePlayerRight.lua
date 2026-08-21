local tablePlayerBase = import(".TablePlayerBase")
local TablePlayerRight = class("TablePlayerRight", tablePlayerBase)
local ExternalFunc = import("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.ExternalFunc")

function TablePlayerRight:ctor(...)
    self.posState = 2
    local cardNodeConfig = g_gameConstant.CARD_NODE_CONFIG[g_UserDataTable.mjCardType][self.posState]
    self.cardNodeConfig = cardNodeConfig

    TablePlayerRight.super.ctor(self, self.posState, ...)
    
    self.handScaleFix = cardNodeConfig.handScaleFix or cc.p(1, 1)
    
    local scaleY = self.handScaleFix and self.handScaleFix.y or 1
    self.newCardPai = g_gameGlobal:getNormalBackCard(self.posState)
        :setVisible(false):setAnchorPoint(cc.p(0.5, 0))
        :setScaleY(scaleY)
    self.handCardPanel:addChild(self.newCardPai, -1)
    
    local maxPlayerNum = g_gameGlobal:getMaxPlayerNum()
    self.chuCardLineNum = self.cardNodeConfig.chuCardLineNum[maxPlayerNum] or self.cardNodeConfig.chuCardLineNum[4]

    self.handCardSize = self.newCardPai:getBoundingBox()
    if g_gameGlobal:getIsPlayingGameLog() then
        self.handCardSize = self:getRightLaydownCard(0x01):getBoundingBox()
    end
       

    self.handCardStartPosX = g_gameGlobal:getDisplayWidth() + cardNodeConfig.handPosFix.x
    self.handCardStartPosY = display.cy - (self.handCardSize.height*13+cardNodeConfig.layHandDistance)*0.5 + cardNodeConfig.handPosFix.y

    self.handCardPanel:setAnchorPoint(cc.p(self.handCardStartPosX/g_gameGlobal:getDisplayWidth(), 0.5))
    self.laydownCardPanel:setAnchorPoint(cc.p(self.handCardStartPosX/g_gameGlobal:getDisplayWidth(), 0.5))

    if g_gameGlobal:getIsPlayingGameLog() then
        self.handCardStartPosY = self.handCardStartPosY + 15
    end

    self.laydownCardStartPosX = self.handCardStartPosX + cardNodeConfig.laydownPosFix.x
    self.laydownCardStartPosY = self.handCardStartPosY + cardNodeConfig.laydownPosFix.y
    
    local chuBoundSize = self:getRightLaydownCard(0x01):setScale(cardNodeConfig.chuFixScale):getBoundingBox()
    self.chuCardStartPosX = display.cx + cardNodeConfig.chuStartPosFix.x
    self.chuCardStartPosY = display.cy - ((chuBoundSize.height*(self.chuCardLineNum-1))*0.5) + cardNodeConfig.chuStartPosFix.y 
    
    self.chuCardStartPosY = cardNodeConfig.chuCardOffsetCount[maxPlayerNum]*chuBoundSize.height + self.chuCardStartPosY

    self.tingIcon:setAnchorPoint(cc.p(0.5, 0.5))
        :move(self.handCardStartPosX, display.cy)
        :setScale(1)

    if g_gameGlobal:getIsPlayingGameLog() then
        self.laydownCardStartPosX = self.handCardStartPosX
        
        if cardNodeConfig.handPosFixLog then
            self.handCardStartPosY = self.handCardStartPosY + cardNodeConfig.handPosFixLog.y
            self.laydownCardStartPosY = self.laydownCardStartPosY + cardNodeConfig.handPosFixLog.y
        end
    end
    

    g_gameGlobal:adapteIponeXNode(self.handCardPanel,false) 
    g_gameGlobal:adapteIponeXNode(self.laydownCardPanel,false)
    
    self:initPosConfigData(cardNodeConfig)
end

function TablePlayerRight:onHandCardNumUpdate()
    self:initPosConfigData(self.cardNodeConfig)
--    self:repositionGameCards()
end

function TablePlayerRight:initPosConfigData(cardNodeConfig)
    
    local handShowRect = cc.rect(g_gameGlobal:getDisplayWidth() - 140, 150, 50, g_gameGlobal:getDisplayHeight() - 150 - 50)
    
--    addTxtAtPos(handShowRect, "A")
--    addTxtAtPos(cc.p(handShowRect.x + handShowRect.width, handShowRect.y + handShowRect.height), "A")
    
    local handShowRectCfg = handShowRect
    
    local handShowRectCY = handShowRectCfg.y + handShowRectCfg.height * 0.5
    
--    addTxtAtPos(cc.p(handShowRect.x, handShowRectCY), "CY")
    
    local handCard = g_gameGlobal:getNormalBackCard(self.posState)
    local scaleY = self.handScaleFix and self.handScaleFix.y or 1
    handCard:setScaleY(scaleY)
    local handCardSize = handCard:getBoundingBox()
    local handCardScaleY = handCard:getScaleY()
    local handCardScaleX = handCard:getScaleX()
    local handBRect = cardNodeConfig.handBRect
    local handCardFaceHeight = handBRect.height * handCardScaleY
    self.handcardFaceSize = cc.size(handBRect.width * handCardScaleX, handCardFaceHeight)
    
    local allBackCardHeight = (self.totalHandCardsNum * handCardFaceHeight) + self.handCardSize.height + cardNodeConfig.newCardDistance
    
    -----
    local imageView = self:getRightLaydownCard(0x1)
    local downCardScale = cardNodeConfig.chuFixScale
    local layFixScaleY = cardNodeConfig.laydownScaleFix and cardNodeConfig.laydownScaleFix.y or 1
    self.laydownCardSize = imageView:getBoundingBox()
    self.laydownCardFaceSize = cc.size(cardNodeConfig.laydownRect.width * downCardScale, cardNodeConfig.laydownRect.height * downCardScale * layFixScaleY)
    
    local maxLayCount = math.floor(self.totalHandCardsNum / 3)
    local fullDownCardHeight = (self:getCardBolockSize().height + cardNodeConfig.layHandDistance) * maxLayCount + cardNodeConfig.newCardDistance + handCardSize.height * 2
    
    local handCardStartPos = handShowRectCY - allBackCardHeight * 0.5
    local downCardStartPos = handShowRectCY - fullDownCardHeight * 0.5
    
    self.origHandCardStartPosY = handCardStartPos
    
--    addTxtAtPos(cc.p(handShowRect.x, handCardStartPos), "B")
    
    self.laydownCardStartPosY = downCardStartPos
end


function TablePlayerRight:getCardBolockSize()
    return cc.size(self.laydownCardSize.width, self.laydownCardFaceSize.height * 2 + self.laydownCardSize.height)
end

-- 计算剩余除当前newpai外的张数
function TablePlayerRight:getHandCardCount()
    
    local leftCardCount = self.totalHandCardsNum - self.chiPengGangBlock * 3
    return leftCardCount
end


function TablePlayerRight:getHandCardStartPos(cardCount)
    
    -- 根据吃碰杠得到的位置
    local posRela2PengGangBlock = self.laydownCardStartPosY -- - self.chiPengGangBlock * (blockSize.height + self.cardNodeConfig.layHandDistance)
    
    local posRela2hand = self.origHandCardStartPosY
    
    print("posrela:", posRela2PengGangBlock, posRela2hand)
    
    return posRela2PengGangBlock > posRela2hand and posRela2PengGangBlock or posRela2hand
end

function TablePlayerRight:getNewCardPos()
    local handStartPos = self:getHandCardStartPos()
    
    local cardCount = self:getHandCardCount()
    if cardCount %3 == 2 then
        cardCount = cardCount - 1
    end
    
    local newPos = handStartPos + (cardCount * self.handcardFaceSize.height + self.handCardSize.height + self.cardNodeConfig.newCardDistance)
    
    return newPos
end


-- 若是7张手牌的话，那就要挪动下距离，使手牌居中
function TablePlayerRight:isSevenHandCards( ... )

    if g_gameGlobal:isSevenCardGame() then 

    end 
end

function TablePlayerRight:init(sex)
    TablePlayerRight.super.init(self, sex)
end

function TablePlayerRight:initPaiMianValue(msg)
    local scaleY = self.handScaleFix and self.handScaleFix.y or 1
    for i = 1, 13 do
        local paimian = g_gameGlobal:getNormalBackCard(self.posState)
            :setAnchorPoint(cc.p(0.5, 0))
            :setPositionX(self.handCardStartPosX)
            :setScaleY(scaleY)
        self.handCardPanel:addChild(paimian, 13-i)
        table.insert(self.inhandCards, paimian)
    end

    local startIndex = 13 - self.totalHandCardsNum
    for i = 1, startIndex do 
        if self.inhandCards[i] then 
            self.inhandCards[i]:setVisible(false)
        end 
    end 

    self.newCardPai:setPositionX(self.handCardStartPosX)
    self:repositionGameCards()
    self.handChuCardPosCache = cc.p(self.newCardPai:getPositionX(), self.newCardPai:getPositionY())
end

function TablePlayerRight:showXZHuCard(cardValue)

end 

function TablePlayerRight:addChuCardNodeInDesk(cardNode)
    local chuNum = #self.chuCards
    table.insert(self.chuCards, cardNode)
    self.cardPanel:addChild(cardNode, 50 - #self.chuCards)

    local maxPlayerNum = g_gameGlobal:getMaxPlayerNum()
    local chuCardLineNum = self.chuCardLineNum

    local x = self.chuCardStartPosX - math.floor(chuNum/chuCardLineNum) * cardNode:getBoundingBox().width
    local y = self.chuCardStartPosY + math.mod(chuNum, chuCardLineNum) * cardNode:getBoundingBox().height
    cardNode:move(x, y)
    cardNode:setLocalZOrder((-100*math.floor(chuNum/chuCardLineNum)) - chuNum%chuCardLineNum )
    
end

function TablePlayerRight:addChuCard(cardValue, bNeedMarker,needSfx, odelay)
    odelay = odelay or 0

    TablePlayerRight.super.addChuCard(self,cardValue,bNeedMarker,needSfx, odelay)
    
    local imageView = self:getRightLaydownCard(cardValue)
    self:addChuCardNodeInDesk(imageView)
    self:addHandCardSelectMask(imageView)
    
    if needSfx then
        performWithDelay(self,
            function()
                NG.soundManager:playMatchEffect("sound/outpai.mp3")
                NG.soundManager:playMatchEffect(self.gameAudioParser:getEffectFileForCardValue(bit._and(cardValue, 0xff), self.sex))
            end,
            odelay)
    end

    local dealy = self:fileAddChuAni(imageView, needSfx, odelay)
    if bNeedMarker then
        self:showChuCardMarker(imageView, 0)
    end
end

function TablePlayerRight:chiPengGangOperation( msg, bPlayAnimation, pengGangFx)
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
        opCard = bit._or(opCard, c2*(2^(24)))
        isGang = true
    end
    
    local downCardPos = nil
    
    if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_BU_GANG) == g_gameConstant.MAHJONG_OPERTAION_BU_GANG then
        local matchIdx = self:findPeng(c2)
        if matchIdx == 0 then
            return
        end
        
        local gangOffset = self.cardNodeConfig and self.cardNodeConfig.gangOffset and self.cardNodeConfig.gangOffset.y or 13
        local posx = self.laydownCards[matchIdx]:getPositionX()
        local posy = self.laydownCards[matchIdx]:getPositionY() + gangOffset

        local imageView = self:getRightLaydownCard(c2)
        :setAnchorPoint(cc.p(0.5, 0))
        :setTag(c2)
        :move(posx, posy)
        :addTo(self.laydownCardPanel, 5)
        local origScale = imageView:getScale()
        imageView:setScaleY(origScale * (self.cardNodeConfig.laydownScaleFix and self.cardNodeConfig.laydownScaleFix.y or 1))
        
        self:addHandCardSelectMask(imageView)

        table.insert(self.laydownCards, imageView)
--        self:setChuPlayerColor(imageView, msg.chuOffset, msg.operation, 3)
        self:setChuPlayerFlag(imageView, msg.chuOffset, msg.operation, 3)
        
        downCardPos = self.laydownCardPanel:convertToWorldSpace(cc.p(imageView:getPosition()))
        
    else
        local laydownHeight = 0
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
                local imageView = self:getRightLaydownCard(cv)
                :setAnchorPoint(cc.p(0.5, 0))
                :setTag(card)
                local origScale = imageView:getScale()
                imageView:setScaleY(origScale * (self.cardNodeConfig.laydownScaleFix and self.cardNodeConfig.laydownScaleFix.y or 1))

                laydownHeight = imageView:getBoundingBox().height
                local zOrder = 3 - i
                local starty = self.laydownCardStartPosY
                if i == 3 then
                    local gangOffset = self.cardNodeConfig and self.cardNodeConfig.gangOffset and self.cardNodeConfig.gangOffset.y or 13
                    imageView:move(self.laydownCardStartPosX ,
                        starty + laydownHeight + gangOffset)
                    zOrder = 3
                else
                    local posy = starty + i * laydownHeight
                    imageView:move(self.laydownCardStartPosX, posy )
                    
                    if i == 1 then
                        downCardPos = self.laydownCardPanel:convertToWorldSpace(cc.p(imageView:getPosition()))
                    end
                end

                self.laydownCardPanel:add(imageView, zOrder)
                self:addHandCardSelectMask(imageView)
                table.insert(self.laydownCards, imageView)
--                self:setChuPlayerColor(imageView, msg.chuOffset, msg.operation, i, chiCard)
                self:setChuPlayerFlag(imageView, msg.chuOffset, msg.operation, i, chiCard)
            end
        end
        self.laydownCardStartPosY = self.laydownCardStartPosY + self:getCardBolockSize().height + self.cardNodeConfig.layHandDistance
        self.handCardStartPosY = self.laydownCardStartPosY-- + self.cardNodeConfig.layHandDistance
        self.chiPengGangBlock = self.chiPengGangBlock + 1
        
        -- 对应位置隐藏手牌
        self:repositionGameCards()
    end
    
    if bPlayAnimation or pengGangFx then
        -- 碰杠打牌特效
        self:playPengGangFx(downCardPos, msg.unused3)
    end
end

function TablePlayerRight:setIsMyFangwei(value)
    if not g_gameGlobal:getIsPlayingGameLog() then
        self.newCardPai:setVisible(value)
    end
end


-- 对局中刷新手牌显示
function TablePlayerRight:repositionGameCards()
    if g_gameGlobal:getIsPlayingGameLog() then
        return
    end
    
    local chiPengNum = self.chiPengGangBlock * 3
    if chiPengNum < #self.inhandCards then

        local startIndex = 13 - self.totalHandCardsNum
        for i = 1, startIndex do 
            if self.inhandCards[i] then 
                self.inhandCards[i]:setVisible(false)
            end 
        end 

        for i = 1, chiPengNum do
            self.inhandCards[i]:setVisible(false)
        end
        local visibleCount = 0
--        local starty = self.handCardStartPosY
        local starty = self:getHandCardStartPos()
        for i, v in pairs(self.inhandCards) do
            if i <= chiPengNum + startIndex then
                v:setVisible(false)
            else
                if not starty then
                    starty = self:getHandCardStartPos()
                    print("starty------:", starty)
                end
--                v:setPositionY(starty + (i-chiPengNum - 1)*self.handCardSize.height)
                v:setPositionY(starty + visibleCount*self.handCardSize.height)
                visibleCount = visibleCount + 1
            end
        end
        self.newCardPai:setPositionY(starty + visibleCount * self.handCardSize.height + self.cardNodeConfig.newCardDistance)
        self.handChuCardPosCache = cc.p(self.newCardPai:getPositionX(), self.newCardPai:getPositionY())
    end
end


return TablePlayerRight