local CardLogic = require("game.DoubleKou.BaseDoubleKou.Logic.CardLogic")
local CardEnum = CF.gameRequire("Define.CardEnum")

local QUZHOULIANZHALIST = {
    [503] = 504,
    [504] = 505,
    [505] = 506,
    [603] = 604,
    [604] = 605,
    [703] = 704,
    [803] = 804,
}

------------------------------------------
--判断是否可以出牌
------------------------------------------
function CardLogic.checkCanOutCard(lastOutCardIDs, lastOutCardType, selectCardIDs)
    local selectCardTypeArr = CardLogic.getCardType(selectCardIDs)
    
    for _, obj in ipairs(selectCardTypeArr) do
        local selectCardType = obj.type
        if selectCardType == CardEnum.CARDS_TYPE.CT_0_JUNKO_0_CONTINUOUS then
            return false
        end
        if CardLogic.getGameType() == CF.GameDefine.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_HUOPING_QUZHOU then
            for key, value in pairs(QUZHOULIANZHALIST) do
                if key == selectCardType then
                    -- selectCardType = value
                    obj.type = value
                    break
                end
            end
        end
    end

    --自由出牌，则只要有牌型就能出牌
    if not lastOutCardIDs or #lastOutCardIDs < 1 then
        return true, selectCardTypeArr
    end
    --四王是否是最大的7线炸弹，在GameManager中添加isSiWangIsBig7Xian方法并返回true
    local isSiWangIsBig7Xian = false
    if CF.game:getModule("GameLayer"):getGameData().isSiWangIsBig7Xian then
        local tempBool = CF.game:getModule("GameLayer"):getGameData():isSiWangIsBig7Xian()
        if type(tempBool) == "boolean" and tempBool == true then
            isSiWangIsBig7Xian = true
        end
    end

    --之前玩家出的不是炸弹
    if lastOutCardType < CardEnum.CARDS_TYPE.CT_4_JUNKO_1_CONTINUOUS then
        for _, obj in ipairs(selectCardTypeArr) do
            local selectCardType = obj.type
            if selectCardType >= CardEnum.CARDS_TYPE.CT_4_JUNKO_1_CONTINUOUS then
                return true, {obj}
            end

            if lastOutCardType == selectCardType then
                local lastOutCardPower
                local selectCardPower
                if lastOutCardType%100 == 1 then
                    lastOutCardPower = CardLogic.getMinPowerInCardIDs(lastOutCardIDs)
                    selectCardPower = CardLogic.getMinPowerInCardIDs(selectCardIDs)
                else
                    lastOutCardPower = CardLogic.getMinNormalPowerFromCardIDs(lastOutCardIDs, lastOutCardType%100)
                    selectCardPower = CardLogic.getMinNormalPowerFromCardIDs(selectCardIDs, selectCardType%100)
                end
                if selectCardPower > lastOutCardPower then
                    return true, {obj}
                end
            end
        end
    else
        --之前玩家出的是炸弹
        local lastOutLineCount = CardLogic.GetBombLineNumberByType(lastOutCardType)
        for _, obj in ipairs(selectCardTypeArr) do
            local selectCardType = obj.type
            local selectLineCount = CardLogic.GetBombLineNumberByType(selectCardType)
            if selectLineCount > lastOutLineCount then
                return true, {obj}
            elseif selectLineCount == lastOutLineCount then
                if lastOutCardType%100 == 1 and selectCardType == lastOutCardType then
                    --出的是普通炸
                    local lastOutCardPower = CardLogic.getMinNormalPowerFromCardIDs(lastOutCardIDs, 1)
                    local selectCardPower = CardLogic.getMinNormalPowerFromCardIDs(selectCardIDs, 1)
                    if selectCardPower > lastOutCardPower then
                        return true, {obj}
                    end
                --三王是最小的6线炸弹
                elseif lastOutCardType == CardEnum.CARDS_TYPE.CT_3_KING then
                    --出的是王炸
                    return true, {obj}
                --上家出的四王 判断是否是最大的7线（开化是最小的7线）
                elseif lastOutCardType == CardEnum.CARDS_TYPE.CT_4_KING and not isSiWangIsBig7Xian  then
                    return true, {obj}
                --如果准备出牌的是4王，判断是否是最大的7线
                elseif selectCardType == CardEnum.CARDS_TYPE.CT_4_KING and isSiWangIsBig7Xian then
                    return true, {obj}
                --五王，六王都是最大的该线炸弹
                elseif selectCardType == CardEnum.CARDS_TYPE.CT_5_KING or selectCardType == CardEnum.CARDS_TYPE.CT_6_KING then
                    return true, {obj}
                elseif selectCardType == lastOutCardType then
                    --出的是连炸
                    if CardLogic.isBiggerPowerSameLine(selectCardType,selectCardIDs,lastOutCardIDs) then
                        return true, {obj}
                    end
                elseif lastOutCardType%100 >= 2 and lastOutCardType%100 < 6 and selectCardType%100 >= 2 and selectCardType%100 < 6 and 
                    lastOutCardType%100 > selectCardType%100 then
                    return true, {obj}   
                elseif lastOutCardType%100 >= 2 and lastOutCardType%100 < 6 and selectCardType%100 == 1 then
                    --衢州开化， 线数相同的连环炸小于存炸弹 --add by xuwen01
                    return true, {obj}
                end
            end
        end
    end
    return false
end

return CardLogic