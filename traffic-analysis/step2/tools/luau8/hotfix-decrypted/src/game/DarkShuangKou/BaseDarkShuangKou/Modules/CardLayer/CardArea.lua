local Card = CF.gameRequire("Modules.CardLayer.Card")
local CardLayerDefine = CF.gameRequire("Modules.CardLayer.CardLayerDefine")
local CardLayerConfig = CF.gameRequire("Modules.CardLayer.CardLayerConfig")
local CardEnum = CF.gameRequire("Define.CardEnum")

local CardArea =
    CF.gameClass(
    "CardArea",
    function()
        return ccui.Widget:create()
    end
)

function CardArea:ctor()
    self:initData()
end

function CardArea:initData()
    self._lineCardCount = 27 --每行牌数
    self._defaultCardDistanceX = 40 --牌间距初始默认值
    self._maxCardDistanceX = 40 --最大牌间距
    self._cardDistanceX = 40 --实际的水平牌间距
    self._cardDistanceY = 40 --实际的垂直牌间距
    self._layoutType = CardLayerConfig.CardLayoutType.Horizontal --布局方式（水平或垂直）
    self._cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Center --水平增长方式
    self._cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center --垂直增长方式
    self._startPosX = 0
    self._startPosY = 0
    self._bAutoPositionX = true --是否自适应X坐标

    self._cards = {}
    self._bPlayingSendCardAni = false --是否正在播放发牌动画
end

--设置布局方向
--水平或者垂直
function CardArea:setLayoutType(layoutType)
    self._layoutType = layoutType
end

--设置单行最大牌数
function CardArea:setLineCardCount(lineCardCount)
    self._lineCardCount = lineCardCount
end

--设置牌的起始坐标
function CardArea:setStartPosition(posX, posY)
    self._startPosX = posX
    self._startPosY = posY
end

--自适应坐标的开关（默认开启）
function CardArea:setAutoPositionBool(bAutoPosition)
    self._bAutoPositionX = bAutoPosition
end

--设置牌间距
function CardArea:setCardDistance(cardDistanceX, cardDistanceY)
    self._defaultCardDistanceX = cardDistanceX
    self._cardDistanceX = cardDistanceX
    self._cardDistanceY = cardDistanceY
    self._maxCardDistanceX = cardDistanceX
end

--设置最大间距
function CardArea:setMaxCarDistance(cardDistanceX)
    self._maxCardDistanceX = cardDistanceX
end

--设置增长方向
function CardArea:setCarAddDistance(cardAddDirectionX, cardAddDirectionY)
    self._cardAddDirectionX = cardAddDirectionX
    self._cardAddDirectionY = cardAddDirectionY
end

--创建一张牌
function CardArea:createCard(cardId, cardIndex, sizeType, isShowFire, isRight)
    local card = Card:new()
    card:setCardID(cardId, sizeType, isShowFire, isRight)
    card:setName(string.format(CardLayerDefine.KW_CARD_NAME, cardIndex))
    card:setTag(cardIndex)
    return card
end

--设置显示牌数据
function CardArea:setShowCards(cardIDs, openCardIDs, invalidCards, _, sizeType, isShowFire)
    openCardIDs = openCardIDs or {}
    self:clearCards()
    if cardIDs == nil or #cardIDs == 0 then
        return
    end

    if self._lineCardCount > 0 then
        self._lineCount = math.ceil(#cardIDs / self._lineCardCount)
    end

    for index, cardId in ipairs(cardIDs) do
        local isRight = false
        if self._lineCardCount and self._lineCardCount > 0 and index % self._lineCardCount == 1 then
            isRight = true
        end
        local cardNode = self:createCard(cardId, index, sizeType, isShowFire, isRight)
        local isOpenCard = false
        if table.has(openCardIDs, cardId) then
            isOpenCard = true
        end
        cardNode:setOpenCardFlagVisible(isOpenCard) -- 是否是明牌的角标
        if invalidCards and table.has(invalidCards, cardId) then
            cardNode:setColorState(Card.COLOR_STATE.GRAY)
        -- cardNode:showMaskLayer()
        end
        self:addChild(cardNode)
        self._cards[index] = cardNode
    end

    self:updateCardsPositionAndOrder()
end

function CardArea:setSpecialColorCardIDs(cardIDs, normalBomb)
    -- for _, card in pairs(self._cards) do
    --     card:clearSpecialColor()
    --     card:clearXian()
    --     for _, cardID in pairs(cardIDs) do
    --         if card:getCardID() == cardID then
    --             card:showSpecialColor()
    --             break
    --         end
    --     end
    -- end
    if normalBomb then
        for _, realCards in pairs(normalBomb) do
            if #realCards >= 4 then
                local lastCard
                for _, card in pairs(self._cards) do
                    if card:getCardID() == realCards[#realCards] then
                        lastCard = card
                    end
                end
                if lastCard then
                    lastCard:showXian(#realCards)
                end
            end
        end
    end
end

function CardArea:getCardIDs()
    local cardIDs = {}
    for _, card in ipairs(self._cards) do
        table.insert(cardIDs, card:getCardID())
    end
    return cardIDs
end

function CardArea:getCards()
    return self._cards
end

--清除显示牌
function CardArea:clearCards()
    for _, card in pairs(self._cards) do
        card:removeFromParent()
    end
    self._cards = {}
    self._cardDistanceX = self._defaultCardDistanceX
end

function CardArea:getAddDistanceX(cardCountThisLine)
    local addDistanceX = 0
    if self._layoutType == CardLayerConfig.CardLayoutType.Horizontal then
        if self._cardAddDirectionX == CardLayerConfig.CardAddDirectionX.Right then
            addDistanceX = (cardCountThisLine - 1) * self._cardDistanceX
        elseif self._cardAddDirectionX == CardLayerConfig.CardAddDirectionX.Center then
            addDistanceX = (cardCountThisLine - 1) * self._cardDistanceX / 2
        end
    elseif self._layoutType == CardLayerConfig.CardLayoutType.Vertical then
        if self._cardAddDirectionX == CardLayerConfig.CardAddDirectionX.Center then
            addDistanceX = (self._lineCount - 1) * self._cardDistanceX / 2
        end
    end
    return addDistanceX
end

function CardArea:getAddDistanceY(cardCountThisLine)
    local addDistanceY = 0
    if self._layoutType == CardLayerConfig.CardLayoutType.Horizontal then
        if self._cardAddDirectionY == CardLayerConfig.CardAddDirectionY.Center then
            addDistanceY = self._lineCount * self._cardDistanceY / 2 - self._cardDistanceY / 2
        end
    else
        if self._cardAddDirectionX == CardLayerConfig.CardAddDirectionY.Down then
            addDistanceY = cardCountThisLine * self._cardDistanceY
        else
            addDistanceY = (cardCountThisLine - 1) * self._cardDistanceY / 2 - self._cardDistanceY / 2
        end
    end
    return addDistanceY
end

function CardArea:getSymble()
    local symbleX = 1
    local symbleY = 1
    local symbleZ
    if self._layoutType == CardLayerConfig.CardLayoutType.Horizontal then
        if self._cardAddDirectionY == CardLayerConfig.CardAddDirectionY.Up then
            symbleY = 1
            symbleZ = 1
        elseif self._cardAddDirectionY == CardLayerConfig.CardAddDirectionY.Down then
            symbleY = -1
            symbleZ = -1
        else
            symbleY = 1
            symbleZ = 1
        end
    else
        if self._cardAddDirectionX == CardLayerConfig.CardAddDirectionX.Right then
            symbleX = 1
            symbleZ = 1
        elseif self._cardAddDirectionX == CardLayerConfig.CardAddDirectionX.Left then
            symbleX = -1
            symbleZ = -1
        else
            symbleX = -1
            symbleZ = -1
        end
    end
    return symbleX, symbleY, symbleZ
end

--计算实际需要显示的间距
function CardArea:updateRealCardDistanceX()
    --验证是否开启自适应坐标
    if not self._bAutoPositionX then
        return
    end
    local nowCardCount = #self._cards
    if nowCardCount < self._lineCardCount then
        self._cardDistanceX = self._defaultCardDistanceX * self._lineCardCount / nowCardCount
        if self._cardDistanceX > self._maxCardDistanceX then
            self._cardDistanceX = self._maxCardDistanceX
        end
    end
end

--获取坐标和层级信息
function CardArea:getCardsPositionAndZorder()
    if self._layoutType == CardLayerConfig.CardLayoutType.Horizontal then
        local cardsInfo = {}
        for index, _ in ipairs(self._cards) do
            local lineIndex = math.floor((index - 1) / self._lineCardCount)
            local indexInThisLine = (index - 1) % self._lineCardCount
            local cardCountThisLine = self._lineCardCount
            if lineIndex == (self._lineCount - 1) then
                cardCountThisLine = #self._cards - lineIndex * self._lineCardCount
            end

            local addDistanceX = self:getAddDistanceX(cardCountThisLine)
            local addDistanceY = self:getAddDistanceY(cardCountThisLine)
            local _, symbleY, symbleZ = self:getSymble()

            cardsInfo[index] = {}
            cardsInfo[index].x = self._startPosX - indexInThisLine * self._cardDistanceX + addDistanceX
            cardsInfo[index].y = self._startPosY + symbleY * lineIndex * self._cardDistanceY - addDistanceY
            cardsInfo[index].z = -index - symbleZ * lineIndex * (self._lineCardCount + 1)
        end
        return cardsInfo
    else
        local cardsInfo = {}
        for index, _ in ipairs(self._cards) do
            local lineIndex = math.floor((index - 1) / self._lineCardCount)
            local indexInThisLine = (index - 1) % self._lineCardCount
            local cardCountThisLine = self._lineCardCount
            if lineIndex == (self._lineCount - 1) then
                cardCountThisLine = #self._cards - lineIndex * self._lineCardCount
            end

            local addDistanceX = self:getAddDistanceX(cardCountThisLine)
            local addDistanceY = self:getAddDistanceY(cardCountThisLine)
            local symbleX, _, symbleZ = self:getSymble()

            cardsInfo[index] = {}
            cardsInfo[index].x = self._startPosX + symbleX * lineIndex * self._cardDistanceX + addDistanceX
            cardsInfo[index].y = self._startPosY + indexInThisLine * self._cardDistanceY - addDistanceY
            cardsInfo[index].z = -index + symbleZ * lineIndex * (self._lineCardCount + 1)
        end
        return cardsInfo
    end
end

--刷新牌的坐标和层级
function CardArea:updateCardsPositionAndOrder()
    self:updateRealCardDistanceX()
    local cardsInfo = self:getCardsPositionAndZorder()
    for index, card in ipairs(self._cards) do
        local tempInfo = cardsInfo[index]
        if tempInfo ~= nil then
            card:setPositionX(tempInfo.x)
            card:setPositionY(tempInfo.y)
            card:initPositionY(tempInfo.y)
            card:setLocalZOrder(tempInfo.z)
        end
    end
end

function CardArea:deleteCards(cardIDs)
end

function CardArea:getCardCount()
    return #self._cards
end

function CardArea:getCardDistanceX()
    return self._cardDistanceX
end

-- START

-- 清除牌型动画
function CardArea:clearPlayCardTypeAction()
    local clearNodes = function(nodeArray)
        if nodeArray then
            for i = 1, #nodeArray do
                nodeArray[i]:removeFromParent()
                nodeArray[i] = nil
            end
        end
    end

    clearNodes(self._nodeUp)
    clearNodes(self._nodeDown)

    self:getCardTypeImgNode():setVisible(false)
    self:getCardTypeTextAni():setVisible(false)
    self:getBeforeAttackAniNode():setVisible(false)
end

local CardTypeAniFile = {
    [CardEnum.CardType.SINGLE.id] = {cardTypeAni = "zzb_ap_feng", colorAni = "lv"},
    [CardEnum.CardType.DOUBLE.id] = {cardTypeAni = "zzb_ap_bing", colorAni = "lan"},
    [CardEnum.CardType.TRIPLE.id] = {cardTypeAni = "zzb_ap_huo", colorAni = "hong"},
    [CardEnum.CardType.BOOM.id] = {cardTypeAni = "zzb_ap_dian", colorAni = "zi"}
}

-- 展示牌型动画
function CardArea:playCardTypeAction(cardType, bPlayAni)
    local spinePath = CF.gameResourceRootPath .. "DarkShuangKou/Spine/CardType/"

    -- 计算各个动画中心节点距离牌层中心节点的位置便宜（以动画100%宽度为比例）
    local function calcOffsetPercent(configs)
        local totalX = 0
        local count = #configs

        for i = 1, count do
            totalX = totalX + configs[i][1]
        end

        local halfX = totalX / 2 -- 0，0为中心，所以X总坐标除以2

        local offsets = {}
        for i = 1, count do
            local rightX = configs[i][1] / 2
            for j = i + 1, count do
                rightX = rightX + configs[j][1]
            end
            offsets[i] = halfX - rightX
        end

        return offsets, totalX
    end

    local function createEffectNodes(nodeArray, zOrder, offsetsConfig, cardTypeInfo)
        local aniName = zOrder > 0 and "qian" or "hou"
        local spineFile = CardTypeAniFile[cardTypeInfo.cardType.id].cardTypeAni
        if spineFile then
            local animationWidth = 300

            for i, config in ipairs(offsetsConfig) do
                local node = cc.Node:create()
                node:setZOrder(zOrder)
                node:setPosition(cc.p(0, 0))
                node:setName("CARDAREA_PLAY_TYPE_FATHER" .. aniName)
                self:addChild(node)

                local offsets, totalX = calcOffsetPercent(offsetsConfig)
                local cardWidth = 20
                local cardNode = self._cards[1]
                if cardNode then
                    cardWidth = cardNode:getContentSize().width
                end
                if self._cardAddDirectionX == CardLayerConfig.CardAddDirectionX.Center then
                    node:setPosition(cc.p(0, 0))
                elseif self._cardAddDirectionX == CardLayerConfig.CardAddDirectionX.Right then
                    node:setPosition(cc.p(animationWidth * totalX / 2 - cardWidth / 2, 0)) -- 向右延展，设置位置为 右移: 动画总宽度的一半 - 牌宽度的一半
                elseif self._cardAddDirectionX == CardLayerConfig.CardAddDirectionX.Left then
                    node:setPosition(cc.p(-(animationWidth * totalX / 2 - cardWidth / 2), 0)) -- 向左延展，设置位置为 左移: 动画总宽度的一半 - 牌宽度的一半
                end
                local nodeAni = CF.SpineManager:playAni(node, spinePath, spineFile, aniName, true)
                if nodeAni then
                    nodeAni:setPositionX(animationWidth * offsets[i])
                    nodeAni:setScaleX(config[1] * 2 * CardLayerConfig.Card1ToCard2Scale)
                    nodeAni:setScaleY(config[2] * 2 * CardLayerConfig.Card1ToCard2Scale)
                end
                table.insert(nodeArray, node)
            end
        end
    end

    self:clearPlayCardTypeAction()

    local DarkShuangKouOutFireConfig = CardLayerConfig.CardAreaEffectConfig
    local offsetsConfig = DarkShuangKouOutFireConfig[#self._cards]

    self._nodeUp = self._nodeUp or {}
    self._nodeDown = self._nodeDown or {}
    local cardTypeInfo = CardEnum.getCardTypeInfoByCardTypeID(cardType)
    createEffectNodes(self._nodeUp, 2, offsetsConfig, cardTypeInfo)
    createEffectNodes(self._nodeDown, -100, offsetsConfig, cardTypeInfo)

    self:playCardTypeTextAndAni(cardTypeInfo, bPlayAni)
end

function CardArea:getCardAreaCenterPosX(cnt)
    if cnt == nil then
        cnt = #self._cards
    end
    local posX = 0
    if self._cardAddDirectionX == CardLayerConfig.CardAddDirectionX.Center then
        posX = 0
    elseif self._cardAddDirectionX == CardLayerConfig.CardAddDirectionX.Left then
        posX = self._cardDistanceX * cnt / 2 * -1
    elseif self._cardAddDirectionX == CardLayerConfig.CardAddDirectionX.Right then
        posX = self._cardDistanceX * (cnt - 1) / 2
    end
    return posX
end

function CardArea:playCardTypeTextAndAni(cardTypeInfo, bPlayAni)
    if not CardTypeAniFile[cardTypeInfo.cardType.id] then
        return
    end
    local spinePath = CF.gameResourceRootPath .. "DarkShuangKou/Spine/CardType/"
    local aniName = CardTypeAniFile[cardTypeInfo.cardType.id].colorAni

    cc.SpriteFrameCache:getInstance():addSpriteFrames(CF.gameResourceRootPath .. "DarkShuangKou/Img/DarkShuangKouCardType.plist")
    local startPosX = self:getCardAreaCenterPosX()

    local playTypeTextImg = self:getCardTypeImgNode()
    playTypeTextImg:setVisible(true)
    playTypeTextImg:setPosition(cc.p(startPosX / 2, 115))
    playTypeTextImg:loadTexture("DarkShuangKouCardType" .. cardTypeInfo.img .. ".png", ccui.TextureResType.plistType)
    if bPlayAni then
        playTypeTextImg:removeLuaComponent(cc.ext.CompSpineAction)
        playTypeTextImg:tryAddLuaComponent(
            cc.ext.CompSpineAction,
            {
                jsonFilePath = spinePath .. "/zzb_ap_fpwz_sz.json",
                animationName = aniName,
                boneName = "zhuti",
                slotName = "zhuti",
                modifyPosFunc = function(pos)
                    for _, v in ipairs(pos) do
                        v.x = v.x + self:getCardAreaCenterPosX() / 2
                    end
                end
            }
        )
    else
        playTypeTextImg:setPosition(cc.p(startPosX, 115))
    end

    if bPlayAni then
        local playTypeTextAni = self:getCardTypeTextAni()
        playTypeTextAni:setVisible(true)
        playTypeTextAni:setPosition(cc.p(startPosX - 70, 115))
        local nodeAni
        local aniCompleteFunc = function()
            nodeAni:delayRemoveFromParent()
        end
        nodeAni = CF.SpineManager:playAni(playTypeTextAni, spinePath, "zzb_ap_fpwz", aniName, false, aniCompleteFunc)
    end
end

function CardArea:playOutCardsBeforeAttackEffect(cardType, callback)
    if not CardTypeAniFile[cardType.id] then
        if callback then
            callback()
        end
        return
    end
    local spinePath = CF.gameResourceRootPath .. "DarkShuangKou/Spine/Compare/"
    local aniName = CardTypeAniFile[cardType.id].colorAni

    local startPosX = self:getCardAreaCenterPosX()
    local node = self:getBeforeAttackAniNode()
    node:setVisible(true)
    node:setPosition(cc.p(startPosX, -35))
    node:setScaleX(1 / 5 * #self._cards)
    local nodeAni
    local aniCompleteFunc = function()
        nodeAni:delayRemoveFromParent()
        if callback then
            callback()
        end
    end
    nodeAni = CF.SpineManager:playAni(node, spinePath, "zzb_ap_gjq", aniName, false, aniCompleteFunc)
    CF.soundManager:playSoundBeforeAttack()
end

function CardArea:getCardPositionByIndex(index)
    if self._cards[index] then
        local node = self._cards[index]
        if node then
            return node:getParent():convertToWorldSpace(cc.p(node:getPositionX(), node:getPositionY()))
        end
    end
    return self:convertToWorldSpace(cc.p(0, 0))
end

-- function CardArea:setCardVisible(index, isShow)
--     self._cards[index]:setVisible(isShow)
-- end

function CardArea:getCardTypeImgNode()
    local node = self:getChildByName("CARDAREA_PLAY_TYPE_TEXT_IMG")
    if not node then
        node = ccui.ImageView:create()
        node:setZOrder(4)
        node:setName("CARDAREA_PLAY_TYPE_TEXT_IMG")
        node:setAnchorPoint(cc.p(0.5, 0.5))
        self:addChild(node)
    end
    return node
end

function CardArea:getCardTypeTextAni()
    local node = self:getChildByName("CARDAREA_PLAY_TYPE_TEXT_ANI_FATHER")
    if not node then
        node = cc.Node:create()
        node:setZOrder(3)
        node:setName("CARDAREA_PLAY_TYPE_TEXT_ANI_FATHER")
        node:setAnchorPoint(cc.p(0.5, 0.5))
        self:addChild(node)
    end
    return node
end

function CardArea:getBeforeAttackAniNode()
    local node = self:getChildByName("CARDAREA_BEFORE_ATTACK_ANI_NODE")
    if not node then
        node = cc.Node:create()
        node:setZOrder(3)
        node:setName("CARDAREA_BEFORE_ATTACK_ANI_NODE")
        node:setAnchorPoint(cc.p(0.5, 0.5))
        self:addChild(node)
    end
    return node
end

return CardArea
qO