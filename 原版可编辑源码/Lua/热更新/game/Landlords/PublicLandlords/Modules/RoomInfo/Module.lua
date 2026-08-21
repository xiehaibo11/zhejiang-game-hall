local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Landlords.BaseLandlords.Modules.RoomInfo.Module")

--玩法介绍
function RoomInfoModule:onMsgGameRule(msgData)
    local serverGameRule = CF.SysTool.GB_18030_2000_TO_UTF8(msgData.strGameRule)
    local strRule,tRule = self:parseGameRule(serverGameRule)
    -- 重新加载牌型
    CF.game:getModule("GameLayer"):getCardLogic():initAllCardType(tRule)
    CF.game:getModule("GameLayer"):getCardLogic():initCardTypePower(tRule)
    
    CF.roomData:setGameRule(strRule)
    CF.roomData:setGameRuleDetail(tRule)
    
    local lmtMarker = string.find(serverGameRule,"禁用记牌器")
    lmtMarker = lmtMarker or false
    CF.game:getModule("Marker"):setLmtMarker(lmtMarker)
end

function RoomInfoModule:parseGameRule(strGameRule)
    strGameRule = strGameRule or ""
    local gameid = CF.roomData:getGameID()
    local GameConfig = CF.gameRequire("Config.GameConfig")
    local GameRuleDefault = GameConfig.GameRuleDefault
    local GameRuleText = GameConfig.GameRuleText

    local strResult = ""
    local tResult = {}

    -- 客户端用到的参数加默认值
    tResult._allow3Cnt = GameRuleDefault[gameid]["Allow3Cnt"] or GameRuleDefault[0]["Allow3Cnt"]
    tResult._allow3With2 = GameRuleDefault[gameid]["Allow3With2"] or GameRuleDefault[0]["Allow3With2"]
    tResult._allow4With4 = GameRuleDefault[gameid]["Allow4With4"] or GameRuleDefault[0]["Allow4With4"]
    tResult._showRemainNum = GameRuleDefault[gameid]["ShowRemainCardsNum"] or GameRuleDefault[0]["ShowRemainCardsNum"]

    local tStrGameRule = string.split(strGameRule, ";")
    local tGameRule = {}
    for _,gamerule in pairs(tStrGameRule) do
        local tValue = string.split(gamerule, "=")
        if tValue[2] and not tonumber(tValue[2]) then
            tValue[2] = string.sub(tValue[2], 2, -2)
        end
        tGameRule[tValue[1]] = tValue[2]
    end
    for key,value in pairs(tGameRule) do
        local RuleText = GameRuleText[gameid][key] or GameRuleText[0][key]
        if key == "callScore" then
            strResult = strResult .. RuleText[value]
            tResult._robType = tonumber(value)
        elseif key == "BombCount" then
            tResult._bombCount = tonumber(value)
            strResult = strResult .. string.format(RuleText["1"], tResult._bombCount)
        elseif key == "addDouble" then
            strResult = strResult .. RuleText[value]
            if tonumber(value) > 0 then
                tResult._allowDouble = true
            else
                tResult._allowDouble = false
            end
        elseif key == "allowOpenDeal" then
            strResult = strResult .. RuleText[value]
            if tonumber(value) > 0 then
                tResult._allowOpen = true
            else
                tResult._allowOpen = false
            end
        elseif key == "CallMode" then
            strResult = strResult .. RuleText[value]
            tResult._callMode = tonumber(value)
        elseif key == "HaveForceCall" then
            strResult = strResult .. RuleText[value]
            if tonumber(value) > 0 then
                tResult._forceCall = true
            else
                tResult._forceCall = false
            end
        elseif key == "AllowLandlordBouble" then
            strResult = strResult .. RuleText[value]
            if tonumber(value) > 0 then
                tResult._allowLLDouble = true
            else
                tResult._allowLLDouble = false
            end
        elseif key == "Allow3Cnt" then
            strResult = strResult .. RuleText[value]
            if tonumber(value) > 0 then
                tResult._allow3Cnt = true
            else
                tResult._allow3Cnt = false
            end
        elseif key == "Allow3With2" then
            strResult = strResult .. RuleText[value]
            if tonumber(value) > 0 then
                tResult._allow3With2 = true
            else
                tResult._allow3With2 = false
            end
        elseif key == "Allow4With4" then
            strResult = strResult .. RuleText[value]
            if tonumber(value) > 0 then
                tResult._allow4With4 = true
            else
                tResult._allow4With4 = false
            end
        elseif key == "BaseMultiple" then
            tResult._baseMult = tonumber(value) > 0 and tonumber(value) or 1
            strResult = strResult .. string.format(RuleText["1"], tResult._baseMult)
        elseif key == "MaxMultiple" then
            tResult._maxMult = tonumber(value) > 0 and tonumber(value) or 0
            if tonumber(value) > 0 then
                strResult = strResult .. string.format(RuleText["1"], tResult._maxMult)
            else
                strResult = strResult .. RuleText["0"]
            end
        elseif key == "WinnerFirstCall" then
            strResult = strResult .. RuleText[value]
            if tonumber(value) > 0 then
                tResult._winnerFirst = true
            else
                tResult._winnerFirst = false
            end
        elseif key == "HostFirstCall" then
            strResult = strResult .. RuleText[value]
            if tonumber(value) > 0 then
                tResult._hostFirst = true
            else
                tResult._hostFirst = false
            end
        elseif key == "ShowRemainCardsNum" then
            strResult = strResult .. RuleText[value]
            if tonumber(value) > 0 then
                tResult._showRemainNum = true
            else
                tResult._showRemainNum = false
            end
        end
    end
    -- 去掉最后一个/
    strResult = string.sub(strResult, 1, -2)
    return strResult, tResult
end

return RoomInfoModule
