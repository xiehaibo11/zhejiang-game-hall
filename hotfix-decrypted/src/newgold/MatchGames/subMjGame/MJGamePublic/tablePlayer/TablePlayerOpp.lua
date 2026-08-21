local tablePlayerBase = import(".TablePlayerBase")
local TablePlayerOpp = class("TablePlayerOpp", tablePlayerBase)
local ExternalFunc = import("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.ExternalFunc")

function TablePlayerOpp:ctor(...)
    self.posState = 3
    local cardNodeConfig = g_gameConstant.CARD_NODE_CONFIG[g_UserDataTable.mjCardType][self.posState]
    self.cardNodeConfig = cardNodeConfig

    TablePlayerOpp.super.ctor(self, self.posState, ...)

    self.newCardPai = g_gameGlobal:getNormalBackCard(self.posState)
    :setVisible(false)
    self.handCardPanel:addChild(self.newCardPai, -1)

    self.handCardSize = self.newCardPai:getBoundingBox()
    if g_gameGlobal:getIsPlayingGameLog() then
        --imageView:setScale(0.7)
        self.handCardSize = self:getNormalCard(0x01):setScale(0.6):getBoundingBox()
    end

    local maxPlayerNum = g_gameGlobal:getMaxPlayerNum()
    self.chuCardLineNum = self.cardNodeConfig.chuCardLineNum[maxPlayerNum] or self.cardNodeConfig.chuCardLineNum[4]
    
    self.handCardStartPosX = display.cx + (self.handCardSize.width * self.totalHandCardsNum +cardNodeConfig.layHandDistance)*0.5 + cardNodeConfig.handPosFix.x
    self.handCardStartPosY = g_gameGlobal:getDisplayHeight() - self.handCardSize.height*0.5 + cardNodeConfig.handPosFix.y
    -- self.handCardStartPosY = g_gameGlobal:getDisplayHeight() - self.handCardSize.height + cardNodeConfig.handPosFix.y

    self.laydownCardStartPosX = self.handCardStartPosX + cardNodeConfig.laydownPosFix.x
    self.laydownCardStartPosY = self.handCardStartPosY + cardNodeConfig.laydownPosFix.y
    
    local chuBoundSize = self:getOppLaydownCard(0x01):setScale(cardNodeConfig.chuFixScale):getBoundingBox()
    self.chuCardStartPosX = display.cx + (chuBoundSize.width*(self.chuCardLineNum-1))*0.5 + cardNodeConfig.chuStartPosFix.x     
    self.chuCardStartPosY = display.cy + cardNodeConfig.chuStartPosFix.y

    self.chuCardStartPosX = cardNodeConfig.chuCardOffsetCount[maxPlayerNum]*chuBoundSize.width + self.chuCardStartPosX

    self.tingIcon:setAnchorPoint(cc.p(0.5, 0.5))
        :move(display.cx, self.handCardStartPosY)
        :setScale(1)

    if g_gameGlobal:getIsPlayingGameLog() then
        self.handCardStartPosX = self.handCardStartPosX - 50
        self.laydownCardStartPosX = self.handCardStartPosX
        self.laydownCardStartPosY = self.laydownCardStartPosY
        self.tingIcon:setPositionY(self.handCardStartPosY - 60)
    end
end

-- 若是7张手牌的话，那就要挪动下距离，使手牌居中
function TablePlayerOpp:isSevenHandCards( ... )

    if g_gameGlobal:isSevenCardGame() then 

    end 
end

function TablePlayerOpp:init(sex)
    TablePlayerOpp.super.init(self, sex)
end

function TablePlayerOpp:initPaiMianValue(msg)
    for i = 1, self.totalHandCardsNum do
        local paimian = g_gameGlobal:getNormalBackCard(self.posState)
        self.handCardPanel:addChild(paimian, i)

        paimian:move(self.handCardStartPosX - paimian:getBoundingBox().width*(i-1), 
                        self.handCardStartPosY)

        table.insert(self.inhandCards, paimian)
    end

    self.newCardPai:setPositionX(self.handCardStartPosX-self.newCardPai:getBoundingBox().width*#self.inhandCards-self.cardNodeConfig.newCardDistance)
    self.newCardPai:setPositionY(self.handCardStartPosY)
    self.handChuCardPosCache = cc.p(self.newCardPai:getPositionX(), self.newCardPai:getPositionY())
end

function TablePlayerOpp:showXZHuCard(cardValue)


end 

function TablePlayerOpp:addChuCardNodeInDesk(cardNode)
    table.insert(self.chuCards, cardNode)
    self.cardPanel:addChild(cardNode)

    local maxPlayerNum = g_gameGlobal:getMaxPlayerNum()
    local chuCardLineNum = self.chuCardLineNum
    local chuNum = #self.chuCards-1
    local x = self.chuCardStartPosX -  math.mod(chuNum, chuCardLineNum) * cardNode:getBoundingBox().width

    local y = self.chuCardStartPosY - math.floor(chuNum/chuCardLineNum) * cardNode:getBoundingBox().height
    cardNode:move(x, y)
    cardNode:setLocalZOrder(-100 + chuNum )
end

function TablePlayerOpp:addChuCard(cardValue, bNeedMarker,needSfx, odelay)
    odelay = odelay or 0
    TablePlayerOpp.super.addChuCard(self,cardValue,bNeedMarker,needSfx, odelay)
    

    local imageView = self:getOppLaydownCard(cardValue)
    --imageView:setScale(0.8)
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
        self:showChuCardMarker(imageView, dealy)
    end
end

function TablePlayerOpp:chiPengGangOperation( msg, bPlayAnimation, pengGangFx)
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

    local bChi = false
    if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_CHI) == g_gameConstant.MAHJONG_OPERTAION_CHI then
        bChi = true
    end
    
    local downCardPos = nil
    
    if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_BU_GANG) == g_gameConstant.MAHJONG_OPERTAION_BU_GANG then
        local matchIdx = self:findPeng(c2)
        if matchIdx == 0 then
            return
        end

        local posx = self.laydownCards[matchIdx]:getPositionX()
        local posy = self.laydownCards[matchIdx]:getPositionY() + 11.5

        local imageView = self:getOppLaydownCard(c2)
        :setTag(c2)
        :move(posx, posy)
        --:setScale(0.8)
        :addTo(self.laydownCardPanel, 5)
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
                local imageView = self:getOppLaydownCard(cv)
                --:setScale(0.8)
                :setTag(card)

                if g_gameGlobal:getIsPlayingGameLog() then
                    --imageView:setScale(0.7)
                end

                layDownWidth = imageView:getBoundingBox().width
                local startx = self.laydownCardStartPosX
                if i == 3 then
                    imageView:move(startx - layDownWidth,
                        self.laydownCardStartPosY + 11.5)
                else
                    local posx = startx - i * layDownWidth
                    imageView:move(posx, self.laydownCardStartPosY )
                    
                    if i == 1 then
                        downCardPos = self.laydownCardPanel:convertToWorldSpace(cc.p(imageView:getPosition()))
                    end
                end

                self.laydownCardPanel:add(imageView,i+1)
                self:addHandCardSelectMask(imageView)
                table.insert(self.laydownCards, imageView)
--                self:setChuPlayerColor(imageView, msg.chuOffset, msg.operation, i, chiCard)
                self:setChuPlayerFlag(imageView, msg.chuOffset, msg.operation, i, chiCard)
            end
        end
        self.laydownCardStartPosX = self.laydownCardStartPosX - ( layDownWidth*3 + self.cardNodeConfig.layHandDistance )
        self.handCardStartPosX = self.laydownCardStartPosX -- - self.cardNodeConfig.layHandDistance
        self.chiPengGangBlock = self.chiPengGangBlock + 1

        -- 对应位置隐藏手牌
        self:repositionGameCards()
    end
    
    if bPlayAnimation or pengGangFx then
        -- 碰杠打牌特效
        self:playPengGangFx(downCardPos, msg.unused3)
    end
end

function TablePlayerOpp:setIsMyFangwei(value)
    if not g_gameGlobal:getIsPlayingGameLog() then
        self.newCardPai:setVisible(value)
    end
end

-- 对局中刷新手牌显示
function TablePlayerOpp:repositionGameCards()
    if g_gameGlobal:getIsPlayingGameLog() then
        return
    end
    
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
                v:setPositionX(startx - (i-chiPengNum - 1)*handCardWidth)
            end
        end
        local handCardWidth = self.newCardPai:getBoundingBox().width
        self.newCardPai:setPositionX(startx - ( (#self.inhandCards-chiPengNum)*handCardWidth + self.cardNodeConfig.newCardDistance) )
        self.handChuCardPosCache = cc.p(self.newCardPai:getPositionX(), self.newCardPai:getPositionY())
    end
end


return TablePlayerOpp  .  