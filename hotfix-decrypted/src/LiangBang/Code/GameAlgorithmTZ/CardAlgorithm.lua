local CURRENT_MODULE_NAME = ...
local CardAlgorithmBase = import("..GameAlgorithm.CardAlgorithm",CURRENT_MODULE_NAME)
local CardAlgorithm = CardAlgorithmBase or {}

local GameCard = import("..GameAlgorithm.GameCard",CURRENT_MODULE_NAME)
local MyCardsType = import(".MyCardsType",CURRENT_MODULE_NAME)
local MyCard = import("..GameAlgorithm.MyCard",CURRENT_MODULE_NAME)

--数字关键字
local KW_NUM_ZHONGWEN_NUM = {"一","二","三","四","五","六","七","八","九","十","十一","十二"}

function CardAlgorithm:filteCard(cards,preOut,jokerData,lianZhaBudai,gameType)
    local joker = CardAlgorithm:gameCards2MyCards(jokerData)

    local retCards = {}
    local retCardEndum = {}
    retCards,retCardEndum = MyCardsType.GetCardsTypeComb(cards,joker,retCards,lianZhaBudai)

    if #retCards == 0 or retCardEndum == nil then
        return
    end

    if #retCardEndum > 0 then
        for k , enum in pairs(retCardEndum) do
            if math.floor(enum) < enum then
                return
            end
        end    
    end

    local cloneRetCards = clone(retCards)
    local cloneRetCardEndum = clone(retCardEndum)
    if preOut == nil then

    else
        local outRecord = preOut     
        outRecord[1] = CardAlgorithm:gameCards2MyCards(preOut.Cards)
        outRecord[2] = preOut.tType  
        cloneRetCards,cloneRetCardEndum = CardAlgorithm.FilterCardType(cloneRetCards,outRecord,retCards,joker,lianZhaBudai)
    end
    if #cloneRetCards == 0 then
        return cloneRetCards,cloneRetCardEndum
    else
        local tmpRetCards = {}
        local tmpRetCardEndum = {}
        for i = #retCardEndum , 1,-1 do
            for j = 1 , #cloneRetCardEndum do
                if retCardEndum[i] == cloneRetCardEndum[j] then
                    tmpRetCards[#tmpRetCards + 1] = retCards[i]
                    tmpRetCardEndum[#tmpRetCardEndum + 1] = retCardEndum[i]
                end
            end
        end

        return tmpRetCards,tmpRetCardEndum
    end
end

function CardAlgorithm:getGameGroupByCardType(cardType,cardEnmu)
    local cardGroup = {}
    cardGroup.Cards = {}


    for  i = 1,#cardType._cards do 
        for  j = 1,#cardType._cards[i] do 
            local gameCard = GameCard:new() 
            gameCard:setID(cardType._cards[i][j].ID)          
            table.insert(cardGroup.Cards,gameCard)
        end
    end

    cardGroup.tPower = CardAlgorithm:getCardTypePower(cardType)
    cardGroup.tType = cardEnmu 
    return cardGroup
end

function CardAlgorithm:getCardTypePower(CardType)
    if CardType == nil then
        return
    end

    local card = CardType._cards[1][#CardType._cards[1]]
    if card.replacePower ~= 0 then
        return card.replacePower
    end
    local power = CardAlgorithm:getPowerbyValue(CardAlgorithm:getValueByID(card.ID))
    return power
end

function CardAlgorithm:gameCards2MyCards(gameCards)
    local cards = {}
    for i = 1,#gameCards do
        local tMyCard = MyCard.new(gameCards[i]:getID())
        table.insert(cards,tMyCard)
    end
    return cards
end

function CardAlgorithm:getCardTypesByIDsandType(IDs,Type,jokerData,lianZhabuDai)
    if #IDs == 0 then
        return
    end
    if Type == 0 then
        return
    end
    local joker = {}
    for i = 1,#jokerData do
        local nMyCard = MyCard.new(jokerData[i]:getID())
        table.insert(joker,nMyCard)
    end

    local cards = {}
    for i = 1,#IDs do
        local nMyCard = MyCard.new(IDs[i])
        table.insert(cards,nMyCard)
    end

    local retCards = {}
    local ret = {}

    retCards,ret = MyCardsType.GetCardsTypeComb(cards,joker,retCards,{lianZhabuDai})

    if #retCards == 0 then
        return
    end

    if #ret ~= #retCards then
        return
    end

    for i = 1,#ret do
        if ret[i] == Type then
            return retCards[i],ret[i]
        end
    end
    return
end

function CardAlgorithm.FilterCardType(inCardTypes,octRecord,outCardTypes,joker,canWithExcess)
    local nBiJiaoCardType =  CardAlgorithm.GetCardsTypeByCardsAndType(octRecord[1],octRecord.tType,joker,canWithExcess)
    for i = #outCardTypes,1,-1 do
        table.remove(outCardTypes,i)
    end
    if #nBiJiaoCardType._cards ~= 0 then
        CardAlgorithm.CompareTwoCardTypes(inCardTypes,nBiJiaoCardType,outCardTypes,canWithExcess)
    end
    local nType = {}
    for i = 1,#inCardTypes do
        local ret = inCardTypes[i]:GetCardsTypeEnum();
        table.insert(nType,ret)
    end

    return inCardTypes , nType
end

function CardAlgorithm.GetCardsTypeByCardsAndType(cards, type,joker,canWithExcess)
    local retCardstype = {}
    MyCardsType.GetCardsTypeComb(cards,joker,retCardstype,canWithExcess)
    for i = 1,#retCardstype do
        if retCardstype[i]:GetCardsTypeEnum() == type then
            return retCardstype[i]
        end
    end
    return MyCardsType.new()
end

function CardAlgorithm:canOut(preOutSeat,powerSeat,checkCardsID,dragCardsID,outCardsRecord,jokerData,lianZhaBudai,gameType)
    local isPowerSeat = preOutSeat == Game.FrameworkFunction.getMaxPlayer() or powerSeat == Game.FrameworkFunction.getSelfSeat()
    if isPowerSeat == false or powerSeat ~= Game.FrameworkFunction.getSelfSeat() then
        return false
    end

    checkCardsID = checkCardsID or {}
    dragCardsID = dragCardsID or {}
    local cardsID = checkCardsID
    if #checkCardsID < 1 then
        cardsID = dragCardsID
    end

    if #cardsID < 1 then
        return false
    end

    local preOutCards = nil
    local isFirstSeat = preOutSeat == Game.FrameworkFunction.getMaxPlayer() or preOutSeat == Game.FrameworkFunction.getSelfSeat()
    if isFirstSeat then
    else
        local lastOut = outCardsRecord[preOutSeat]
        preOutCards = lastOut[#lastOut]
    end     

    local myCards = {}
    local retCards = nil
    local retCardEndum = nil
    
    myCards = CardAlgorithm:SZ2MyCards(cardsID,#cardsID)
    retCards,retCardEndum = CardAlgorithm:filteCard(myCards,preOutCards,jokerData,{lianZhaBudai})
    
    if retCards == nil then
        return false
    end

    if #retCards == 0 then
        return false
    end 

    return true
end

function CardAlgorithm:canOutAndCheckedCard(preOutSeat,powerSeat,checkCardsID,dragCardsID,outCardsRecord,jokerData,lianZhaBudai,gameType)
    local isPowerSeat = preOutSeat == Game.FrameworkFunction.getMaxPlayer() or powerSeat == Game.FrameworkFunction.getSelfSeat()
    if isPowerSeat == false or powerSeat ~= Game.FrameworkFunction.getSelfSeat() then
        return false
    end

    checkCardsID = checkCardsID or {}
    dragCardsID = dragCardsID or {}
    local cardsID = checkCardsID
    if #checkCardsID < 1 then
        cardsID = dragCardsID
    end

    if #cardsID < 1 then
        return false
    end

    local preOutCards = nil
    local isFirstSeat = preOutSeat == Game.FrameworkFunction.getMaxPlayer() or preOutSeat == Game.FrameworkFunction.getSelfSeat()
    if isFirstSeat then
    else
        local lastOut = outCardsRecord[preOutSeat]
        preOutCards = lastOut[#lastOut]
    end     

    local myCards = {}
    local retCards = nil
    local retCardEndum = nil
    
    myCards = CardAlgorithm:SZ2MyCards(cardsID,#cardsID)
    retCards,retCardEndum = CardAlgorithm:filteCard(myCards,preOutCards,jokerData,{lianZhaBudai})
    
    if retCards == nil then
        return false
    end

    if #retCards == 0 then
        return false
    end 

    return retCardEndum
end

function CardAlgorithm:getCardTypesByMyCardsandType(mCards,Type,jokerData,lianZhabuDai)
    mCards = mCards or {}
    if #mCards == 0 then
        return
    end
    if Type == 0 then
        return
    end

    local outCardsType = {}  
    MyCardsType.GetCardsTypeComb(mCards,jokerData,outCardsType,{lianZhabuDai})

    for i = 1,#outCardsType do
        if outCardsType[i]:GetCardsTypeEnum() == Type then
            return outCardsType[i]
        end
    end
    return   
end

function CardAlgorithm.GetXianByType( cardType )
    local xian = 0
    if cardType <= MyCardsType.CardsType.CT_4_JUNKO_0_CONTINUOUS then
        xian = 0
        return xian
    end
       
    if cardType > MyCardsType.CardsType.CT_0_KING then
        return 4      
    end
    
    if math.floor(cardType % 100) == 1 then
        xian = math.floor(cardType / 100)
    else
        xian = 4
    end
    return xian
end

return CardAlgorithm�!  