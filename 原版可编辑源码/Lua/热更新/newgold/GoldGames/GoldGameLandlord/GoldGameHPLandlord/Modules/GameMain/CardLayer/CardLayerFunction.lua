local CardLayerFunction = NG.GAME.gameClass("CardLayerFunction")

----------------------------------------
--算角度
----------------------------------------
function CardLayerFunction.getAngleWithTwoPostion(startPos,endPos)
    local disX = endPos.x - startPos.x
    local disY = endPos.y - startPos.y
    if disX == 0 then
        return 0
    end
    local angleTan = math.atan(disY / disX)
    return math.deg(angleTan)
end

----------------------------------------
--算距离
----------------------------------------
function CardLayerFunction.getDistanceWithTwoPostion(startPos,endPos)
    local disY = endPos.y - startPos.y
    local disX = endPos.x - startPos.x
    local disMul = disX * disX + disY * disY
    return math.sqrt(disMul)
end

function CardLayerFunction.getBigNumberBetweenTwo(number1, number2)
    if number1 > number2 then
        return number1
    end
    return number2
end

function CardLayerFunction.getSmallNumberBetweenTwo(number1, number2)
    if number1 < number2 then
        return number1
    end
    return number2
end

function CardLayerFunction.removeOneCardIDFromCardIDs(cardIDs, oneCardID)
    for i, v in ipairs(cardIDs) do
        if v == oneCardID then
            table.remove(cardIDs, i)
            return true
        end
    end
    return false
end

-- 是否全是可出的炸弹
function CardLayerFunction.isAllBoom(cardIDs)
    local continueCards = NG.goldGame:getModule("GameMain"):getTipLogic().gameLogic:getNormalBoomGroup(cardIDs)
    if #cardIDs > 0 and #continueCards * 4 == #cardIDs then
        if (#cardIDs == 4 and #continueCards[1] == 4) or NG.goldGame:getModule("GameMain"):getTipLogic().gameLogic:isContinue(continueCards) then
            return true
        end
    end
    return false
end

return CardLayerFunction