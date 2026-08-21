--GameCard = GameCard or {}
local CURRENT_MOUDLE_NAME = ...
local GameData = import(".CardRuleConstants",CURRENT_MOUDLE_NAME)

local GameCard = class("GameCard")

function GameCard:ctor(num)
    self.id = num;
end

function GameCard:setID( Id )
    self.id = Id 
end

function GameCard:getID()

    return self.id 
end

function GameCard:GetText()
    local nNum = self:GetNum()

    if nNum == GameData.cardNums.CV_A then
        return "A"
    end

    if nNum == GameData.cardNums.CV_SJ then
        return "F"
    end

    if nNum == GameData.cardNums.CV_BJ then
        return "Z"
    end

    if nNum == GameData.cardNums.CV_J then
        return "J"
    end

    if nNum == GameData.cardNums.CV_Q then
        return "Q"
    end

    if nNum == GameData.cardNums.CV_K then
        return "K"
    end

    local text = string.format("%d",nNum)
    return text
end

function GameCard:GetNum()

    local nFu = (self.id - 1) % 55 + 1
    local nColor = ((nFu - 1) / 13) + 1
    nColor = math.floor(nColor)

    if nColor == GameData.cardColours.CC_Joker then
        if ((nFu % 14)%2) == 1 then
            return GameData.cardNums.CV_SJ
        else
            return GameData.cardNums.CV_BJ
        end
    end
    return (self.id - 1) % 13 + 1
end

function GameCard:GetColor()

    local nFu = (self.id - 1) % 55 + 1
    local nColor = ((nFu - 1) / 13) + 1
    nColor = math.floor(nColor)
    return nColor
end

function GameCard:GetPower()

    if self:getID() == GameData.cards.CV_BACK then
        return GameData.cardPower.CP_NONE1
    end

    if self:GetNum() == GameData.cardNums.CV_A then
        return GameData.cardPower.CP_A
    end

    if self:GetNum() == GameData.cardNums.CV_2 then
        return GameData.cardPower.CP_2
    end

    if self:GetNum() == GameData.cardNums.CV_SJ then
        return GameData.cardPower.CP_SJ
    end
    if self:GetNum() == GameData.cardNums.CV_BJ then
        return GameData.cardPower.CP_BJ
    end  

    return self:GetNum()
end

return GameCard6