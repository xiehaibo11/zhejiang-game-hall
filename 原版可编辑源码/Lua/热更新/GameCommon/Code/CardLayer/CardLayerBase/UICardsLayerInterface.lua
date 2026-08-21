----create by lcy 2017.12.1
local CURRENT_MOUDLE_NAME  =  ...
local UICardsLayer = class("UICardsLayer")
local UICardsArea = import(".UICardsArea",CURRENT_MOUDLE_NAME)

local KW_UI_GAMEAREA_HAND_CARD = "KW_UI_GAMEAREA_HAND_CARD"
local KW_UI_GAMEAREA_OUT_CARD = "KW_UI_GAMEAREA_OUT_CARD"

--获取缩放宽高比
function UICardsLayer:getDistanceXScale()
    local glView = cc.Director:getInstance():getOpenGLView()
    local screenSize = cc.Director:getInstance():getWinSize()
    local designSize = cc.size(960, 640)
    local kuangaobi = ( screenSize.width / screenSize.height) / (designSize.width / designSize.height)
    return  kuangaobi
end

--获取计算的撑牌的X间距
function UICardsLayer:getDistanceX(localSeat,cardsCount)
    local maxDistanceX = self:getDistanceXScale() * self.HandCards[localSeat].maxCardsDistanceX
    local minDistanceX = self:getDistanceXScale() * self.HandCards[localSeat].minCardsDistanceX
    local maxCardsCount = self.HandCards[localSeat].maxCardsCount
    if cardsCount <= 0 then
        return maxDistanceX
    end
    local cardsCountOneLine = cardsCount
    if cardsCount > maxCardsCount and maxCardsCount > 0 then
        cardsCountOneLine = maxCardsCount
    end
    local allDistanceX = minDistanceX * maxCardsCount
    local nowDistanceX = math.floor(allDistanceX / cardsCountOneLine)
    if nowDistanceX > maxDistanceX then
        return maxDistanceX
    elseif nowDistanceX < minDistanceX then
        return minDistanceX
    else
        return nowDistanceX
    end
end

--首次发牌
function UICardsLayer:setFirstHandCards(localseat,cards,aniType)
    --为了兼容以前老版本，所以保留改接口
    self:setHandCards(localseat,cards,aniType)
end

--普通手牌
function UICardsLayer:setNorMalHandCards(localseat,cards,aniType)
    --为了兼容以前老版本，所以保留改接口
    self:setHandCards(localseat,cards,aniType)
end

--设置手牌
function UICardsLayer:setHandCards(localseat,cards,aniType)
    if  self._playerCards[localseat] then
        self._playerCards[localseat]:destroyCards()
    end
    local handCard = self._adaptCardNode[localseat]:getChildByName(KW_UI_GAMEAREA_HAND_CARD)
    if handCard then
        self._playerCards[localseat] = UICardsArea:new()
        self._playerCards[localseat]:init(handCard)
        self._playerCards[localseat]:setCanTouch(self.HandCards[localseat].touchEnable)
        self._playerCards[localseat]:setCheckDistance(self.HandCards[localseat].checkDistance)
        self._playerCards[localseat]:setMaxCardsCount(self.HandCards[localseat].maxCardsCount)
        local distanceX = self:getDistanceX(localseat,#cards)
        self._playerCards[localseat]:setCardsDistance(distanceX,self.HandCards[localseat].cardsDistanceY)
        self._playerCards[localseat]:setArrangementWay(self.HandCards[localseat].arrangementWay)
        self._playerCards[localseat]:setCardsIncreaseDirection(self.HandCards[localseat].cardIncreaseDirectionX,self.HandCards[localseat].cardIncreaseDirectionY)
        self._playerCards[localseat]:setStartPos(self.HandCards[localseat].startPosX,self.HandCards[localseat].startPosY)
        self._playerCards[localseat]:setCards(cards,aniType)
        if aniType == 0 or aniType == nil then
            self._playerCards[localseat]:arrangeCards()
        end
    end
end

--删除手牌
function UICardsLayer:deleteHandCards(localSeat,allCardsID,delCardsIDs,delCardsIndexes)
    if  self._playerCards[localSeat] then
        local nowDistanceX = self:getDistanceX(localSeat,#allCardsID - #delCardsIDs)
        self._playerCards[localSeat]:setCardsDistance(nowDistanceX,self.HandCards[localSeat].cardsDistanceY)
        self._playerCards[localSeat]:deleteCards(delCardsIDs,delCardsIndexes)
    end
end

--设置出牌
function UICardsLayer:setOutCards(localseat,cards)
    if  self._playerOutCards[localseat] then
        self._playerOutCards[localseat]:destroyCards()
    end
    local outCard = self._adaptCardNode[localseat]:getChildByName(KW_UI_GAMEAREA_OUT_CARD)
    if outCard then
        self._playerOutCards[localseat] = UICardsArea:new()
        self._playerOutCards[localseat]:init(outCard)
        self._playerOutCards[localseat]:setCanTouch(self.OutCards[localseat].touchEnable)
        self._playerOutCards[localseat]:setCheckDistance(self.OutCards[localseat].checkDistance)
        self._playerOutCards[localseat]:setMaxCardsCount(self.OutCards[localseat].maxCardsCount)
        self._playerOutCards[localseat]:setCardsDistance(self.OutCards[localseat].cardsDistanceX,self.OutCards[localseat].cardsDistanceY)
        self._playerOutCards[localseat]:setArrangementWay(self.OutCards[localseat].arrangementWay)
        self._playerOutCards[localseat]:setCardsIncreaseDirection(self.OutCards[localseat].cardIncreaseDirectionX,self.OutCards[localseat].cardIncreaseDirectionY)
        self._playerOutCards[localseat]:setStartPos(self.OutCards[localseat].startPosX,self.OutCards[localseat].startPosY)
        self._playerOutCards[localseat]:setCards(cards)
        self._playerOutCards[localseat]:arrangeCards()
    end
end

--清除手牌
function UICardsLayer:clearHandCards(localSeat)
    local handCardPanel = ccui.Helper:seekWidgetByName(self._adaptCardNode[localSeat], KW_UI_GAMEAREA_HAND_CARD)
    if handCardPanel == nil then
        return
    end
    if  self._playerCards[localSeat] then
        self._playerCards[localSeat]:destroyCards()
    end
end

--清除出牌
function UICardsLayer:clearOutCards(localSeat)
    local outCardPanel = ccui.Helper:seekWidgetByName(self._adaptCardNode[localSeat], KW_UI_GAMEAREA_OUT_CARD)
    if outCardPanel == nil then
        return
    end

    if  self._playerOutCards[localSeat] then
        self._playerOutCards[localSeat]:destroyCards()
    end
end

--设置选中牌
function UICardsLayer:setCheckedCards(localSeat,ids,indexs)
    if self._playerCards[localSeat] then
        self._playerCards[localSeat]:setCheckedCards(ids,indexs)
    end
end

--获取选中牌ID
function UICardsLayer:getCheckedCardIDs(localSeat)
    if self._playerCards[localSeat] then
        return self._playerCards[localSeat]:getCheckedCardIDs()
    end
    return {}
end

--清除选中牌
function UICardsLayer:clearCheckedCards(localSeat)
    if self._playerCards[localSeat] then
        self._playerCards[localSeat]:clearCheckedCards()
    end
end

--获取所有牌ID
function UICardsLayer:getAllCardIDs(localSeat)
    if self._playerCards[localSeat] then
        return self._playerCards[localSeat]:getAllCardIDs()
    end
    return {}
end

--获取拖拽的牌的ID
function UICardsLayer:getDragOutCardIDs(localSeat)
    if self._playerCards[localSeat] then
        return self._playerCards[localSeat]:getDragOutCardIDs()
    end
    return {}
end

--获取选中牌的ID的下标
function UICardsLayer:getCheckedCardIDIndexes(localSeat)
    if self._playerCards[localSeat] then
        return self._playerCards[localSeat]:getCheckedCardIDIndexes()
    end
    return {}
end

--获取拖拽的牌的ID
function UICardsLayer:getDragOutCardIndexes(localSeat)
    if self._playerCards[localSeat] then
        return self._playerCards[localSeat]:getDragOutCardIndexes()
    end
    return {}
end

function UICardsLayer:refreshCardStyle(styleType)
    for key,value in pairs(self._playerCards) do
        value:refreshCardStyle()
    end
    for key,value in pairs(self._playerOutCards) do
        value:refreshCardStyle()
    end
end 

return UICardsLayer