local GameCardLayer     = CF.gameClass("GameCardLayer", "game.Landlords.BaseLandlords.Modules.GameLayer.GameCardLayer")
local CardEnum          = CF.gameRequire("Define.CardEnum")

function GameCardLayer:setHandCards(localSeat, cardIDs ,bShowAni)
    if not self._tHandCardArea[localSeat] then
        self:createHandCardArea(localSeat)
    end
    if localSeat == 2 then
        local tValue = self:getBombValue(cardIDs)
        self._tHandCardArea[localSeat]:setBombValue(tValue)
    end
    local cardStyle = 0
    if CF.settingData and CF.settingData:getLandlordsBackStyle() == CF.settingData.tagInfo.BACK_TYPE.index then
        cardStyle = XH.XG_CARD_STYLE
    end
    self._tHandCardArea[localSeat]:setShowCards(cardIDs, bShowAni, nil, nil, cardStyle)
end

-- 获取是炸弹的牌值
function GameCardLayer:getBombValue(tCards)
    local tmpCards = clone(tCards)
    if not tmpCards or #tmpCards == 0  then return {} end

    local valueBox = {}
    for _,v in pairs(tmpCards) do
        local value = self:getValueByID(v)
        if value < CardEnum.CARD_VALUE.CV_SJ then
            if not valueBox[value] then
                valueBox[value] = 0
            end
            valueBox[value] = valueBox[value] + 1
        end
    end

    local tValue = {}
    for k,v in pairs(valueBox) do
        if v >= 4 then
            table.insert(tValue, k)
        end
    end
    return tValue
end

-- 根据ID获取牌值
function GameCardLayer:getValueByID(id)
    local CardID = CardEnum.CARD_ID
    local CardValue = CardEnum.CARD_VALUE
    local value = CardValue.CV_NONE
    if id == CardID.CID_SJ then
        value = CardValue.CV_SJ
    elseif id == CardID.CID_BJ then
        value = CardValue.CV_BJ
    elseif id >= CardID.CID_DIAMOND_A and id <= CardID.CID_DIAMOND_K then
        value = CardValue.CV_A + (id - CardID.CID_DIAMOND_A)
    elseif id >= CardID.CID_CLUB_A and id <= CardID.CID_CLUB_K then
        value = CardValue.CV_A + (id - CardID.CID_CLUB_A)
    elseif id >= CardID.CID_HEART_A and id <= CardID.CID_HEART_K then
        value = CardValue.CV_A + (id - CardID.CID_HEART_A)
    elseif id >= CardID.CID_SPADE_A and id <= CardID.CID_SPADE_K then
        value = CardValue.CV_A + (id - CardID.CID_SPADE_A)
    end
    return value
end

return GameCardLayer