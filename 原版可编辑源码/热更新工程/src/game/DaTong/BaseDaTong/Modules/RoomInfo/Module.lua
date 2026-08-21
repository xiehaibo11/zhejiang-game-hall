local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.BaseCardGame.Modules.RoomInfo.Module")

function RoomInfoModule:ctor()
    RoomInfoModule.super.ctor(self)
end

function RoomInfoModule:onMsgGameRule(msgData)    
    local strGameRule = msgData.strGameRule
    self:analyseGameRule(strGameRule)
    return strGameRule
end

function RoomInfoModule:analyseGameRule(strGameRule)
    if not strGameRule then
        return
    end

    local ruleTable = CF.StringTool.getLuaValueList(strGameRule)

    local isLianZha     = ruleTable["lianZha"]
    local cPlayType     = ruleTable["playType"]
    local cpayType      = ruleTable["PayType"]
    local autoReady     = ruleTable["autoReady"]
    local forceGPS      = ruleTable["forceGPS"]
    local baseScore     = ruleTable["baseScore"]
    --ffz
    local isFFZ         = ruleTable["isFFZ"]
    local surrenderType = ruleTable["surrenderType"]
    local stableBomb    = ruleTable["stableBomb"]
    local addJokerScore = ruleTable["addJokerScore"]
    local isSameColorType = ruleTable["isSameColorType"]
    local autoContinue      = ruleTable["autoContinue"]

    local tmpGameRule = ""
    local tmpIsFFZ = false

    if isFFZ == "1" then
        tmpGameRule = tmpGameRule .. "翻翻炸,"
        tmpIsFFZ = true
    end

    if cPlayType == "0" and (not tmpIsFFZ) then
        tmpGameRule = tmpGameRule .. "经典玩法,"
    elseif cPlayType == "1" and (not tmpIsFFZ) then
        tmpGameRule = tmpGameRule .. "本土玩法,"
    end
    if not tmpIsFFZ and surrenderType == "3" then
        tmpGameRule = tmpGameRule .. "没炸必投,"
    end
    if isLianZha == "0" then
        tmpGameRule = tmpGameRule .. "不带连炸,"
    elseif isLianZha == "1" then
        tmpGameRule = tmpGameRule .. "带连炸,"
    end

    if not CF.teaHouseManager:isInTeaHouse() then
        if cpayType == "0" then
            tmpGameRule = tmpGameRule .. "房主支付,"
        elseif cpayType == "1" then
            tmpGameRule = tmpGameRule .. "平摊支付,"
        end
    end

    if tmpIsFFZ then
        if isSameColorType == "1" then
            tmpGameRule = tmpGameRule .. "同色加分,"
        end

        if surrenderType == "0" then
            tmpGameRule = tmpGameRule .. "没炸必投,"
        elseif surrenderType == "1" then
            tmpGameRule = tmpGameRule .. "没王必投,"
        elseif surrenderType == "2" then
            tmpGameRule = tmpGameRule .. "头家必投,"
        end

        if stableBomb == "1" then
            tmpGameRule = tmpGameRule .. "定型炸+1,"    
        end

        if addJokerScore == "1" then
            tmpGameRule = tmpGameRule .. "双王算分,"    
        end
    end

    if baseScore and baseScore ~= '' then
        local tmpStr = "底分" .. tostring(baseScore)
        tmpGameRule = tmpGameRule .. tmpStr .. ','
        CF.roomData:setBaseScore(baseScore) 
    end

    if forceGPS == "1" then
        tmpGameRule = tmpGameRule .. "强制定位,"
    end

    CF.roomData:setIsFFZ(tmpIsFFZ)
    CF.roomData:setGameRule(tmpGameRule)
    CF.roomData:setIsLianZha(tonumber(isLianZha) == 1)
    if tonumber(autoReady) and tonumber(autoReady) == 1 then
        CF.game:getModule("CenterBtns"):onStartGameEvent()
    end
end

return RoomInfoModule