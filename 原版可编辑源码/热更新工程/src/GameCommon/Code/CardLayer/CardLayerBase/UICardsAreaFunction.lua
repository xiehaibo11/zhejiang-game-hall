local UICardsArea = class("UICardsArea")

--取后缀
function UICardsArea.getNumberSuffixByString(string)
    local len = string.len(string);
    local lastNumber = -1
    for i = 1 , len do
        local tempNumber = tonumber(string.sub(string,- i ))
        if tempNumber then
            lastNumber = tempNumber
        else
            return lastNumber
        end
    end
    return lastNumber
end

--算角度
function UICardsArea.getTwoPosAngel(startPos,endPos)
    local disY = endPos.y - startPos.y
    local disX = endPos.x - startPos.x
    if disX == 0 then
        return 0
    end
    local tanAngel = math.atan(disY / disX)
    return math.deg(tanAngel)
end

--算距离
function UICardsArea.getTwoPosDistance(startPos,endPos)
    local disY = endPos.y - startPos.y
    local disX = endPos.x - startPos.x
    local distanceMul = disY * disY + disX * disX
    return math.sqrt(distanceMul)
end

return UICardsArea