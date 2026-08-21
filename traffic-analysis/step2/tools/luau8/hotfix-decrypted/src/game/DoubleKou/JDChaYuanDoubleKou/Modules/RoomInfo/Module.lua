local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.DoubleKou.BaseDoubleKou.Modules.RoomInfo.Module")

--玩法介绍
function RoomInfoModule:onMsgGameRule(msgData)
    local serverGameRule = CF.SysTool.GB_18030_2000_TO_UTF8(msgData.strGameRule)
    local gameRuleText = {
        gametype = {[1] = "百变双扣", [3] = "千变双扣", [9] = "经典双扣", [10] = "无赖子", [11] = "大王", [12] = "大小王"},
        gamezhang = {[1] = "1张分", [3] = "3张分", [4] = "4张分", [6] = "6张分", [9] = "9张分"},
        EndTypeMut = {[0] = "倍率:1,2,3倍", [1] = "倍率:1,2,4倍", [2] = "倍率:0,1,2倍"},
        ChaoDi = {[0] = "", [1] = "抄底"},
        HaveMingPai = {[0] = "全暗", [1] = "双明"},
        HaveNoDouble = {[0] = "", [1] = "无翻倍"},
        MoneyType = {[1] = "", [2] = "玩家平摊"},
        NeedSwapSeat = {[0] = "不换座", [1] = "换座"},
        GongConfigType = {[1] = "无炸弹奖励", [2] = "7线3分", [3] = "7线4分"},
        LmtMarker = {[0] = "可用记牌器", [1] = "禁用记牌器"},
        HaveZanDan = {[0] = "", [1] = "炸弹未打有贡献"},
        HaveCaiXiang = {[0] = "", [1] = "拆线补分"},
    }

    local tableString = string.gsub(serverGameRule, ";", ",")
    local luaString = "return {" .. tableString .. "}"
    local rule = loadstring(luaString)
    local gameRuleTable
    if luaString then
        gameRuleTable = rule()
        local strGameRule = ""
        if gameRuleTable.HaveNoDouble then
            self.bHaveNoDouble = (tonumber(gameRuleTable.HaveNoDouble) == 1)
        end

        if gameRuleTable.gametype then
            strGameRule = gameRuleText.gametype[tonumber(gameRuleTable.gametype)]
        end

        if gameRuleTable.gamezhang then
            if gameRuleTable.gametype ~= "10" and gameRuleTable.gametype ~= "11" and gameRuleTable.gametype ~= "12" then
                strGameRule = strGameRule .. "/" .. gameRuleText.gamezhang[tonumber(gameRuleTable.gamezhang)]
            end
        end

        if gameRuleTable.EndTypeMut then
            if gameRuleTable.gametype == "10" or gameRuleTable.gametype == "11" or gameRuleTable.gametype == "12" then
                local EndTypeMutText = {[0] = "基本分:1,2,3", [1] = "基本分:1,2,4", [2] = "基本分:0,1,2"}
                strGameRule = strGameRule .. "/" .. EndTypeMutText[tonumber(gameRuleTable.EndTypeMut)]
            else
                strGameRule = strGameRule .. "/" .. gameRuleText.EndTypeMut[tonumber(gameRuleTable.EndTypeMut)]
            end
        end

        if gameRuleTable.ChaoDi then
            if gameRuleText.ChaoDi[tonumber(gameRuleTable.ChaoDi)] ~= "" then
                strGameRule = strGameRule .. "/" .. gameRuleText.ChaoDi[tonumber(gameRuleTable.ChaoDi)]
            end
        end

        if gameRuleTable.HaveMingPai then
            if gameRuleTable.gametype ~= "10" and gameRuleTable.gametype ~= "11" and gameRuleTable.gametype ~= "12" then
                strGameRule = strGameRule .. "/" .. gameRuleText.HaveMingPai[tonumber(gameRuleTable.HaveMingPai)]
            end
        end

        if gameRuleTable.HaveNoDouble and gameRuleTable.HaveNoDouble ~= "" then
            if gameRuleText.HaveNoDouble[tonumber(gameRuleTable.HaveNoDouble)] ~= "" then
                if gameRuleTable.gametype ~= "10" and gameRuleTable.gametype ~= "11" and gameRuleTable.gametype ~= "12" then
                    strGameRule = strGameRule .. "/" .. gameRuleText.HaveNoDouble[tonumber(gameRuleTable.HaveNoDouble)]
                end
            end
        end

        if gameRuleTable.moneyType and gameRuleTable.moneyType ~= "" then
            if gameRuleText.MoneyType[tonumber(gameRuleTable.moneyType)] ~= "" then
                strGameRule = strGameRule .. "/" .. gameRuleText.MoneyType[tonumber(gameRuleTable.moneyType)]
            end
        end

        if gameRuleTable.NeedSwapSeat and gameRuleTable.NeedSwapSeat ~= "" then
            if gameRuleTable.gametype ~= "10" and gameRuleTable.gametype ~= "11" and gameRuleTable.gametype ~= "12" then
                strGameRule = strGameRule .. "/" .. gameRuleText.NeedSwapSeat[tonumber(gameRuleTable.NeedSwapSeat)]
            end
        end

        if gameRuleTable.GongConfigType and gameRuleTable.GongConfigType ~= "" then
            strGameRule = strGameRule .. "/" .. gameRuleText.GongConfigType[tonumber(gameRuleTable.GongConfigType)]
        end

        if gameRuleTable.LmtMarker and gameRuleTable.LmtMarker ~= "" then
            strGameRule = strGameRule .. "/" .. gameRuleText.LmtMarker[tonumber(gameRuleTable.LmtMarker)]
            CF.game:getModule("Marker"):setLmtMarker(tonumber(gameRuleTable.LmtMarker) == 1)
        end

        if gameRuleTable.HaveZanDan and gameRuleTable.HaveZanDan ~= "" then
            if gameRuleText.HaveZanDan[tonumber(gameRuleTable.HaveZanDan)] ~= "" then
                strGameRule = strGameRule .. "/" .. gameRuleText.HaveZanDan[tonumber(gameRuleTable.HaveZanDan)]
            end
        end

        if gameRuleTable.HaveCaiXiang and gameRuleTable.HaveCaiXiang ~= "" then
            if gameRuleText.HaveCaiXiang[tonumber(gameRuleTable.HaveCaiXiang)] ~= "" then
                strGameRule = strGameRule .. "/" .. gameRuleText.HaveCaiXiang[tonumber(gameRuleTable.HaveCaiXiang)]
            end
        end

        CF.roomData:setGameRule(strGameRule)
    else
        CF.roomData:setGameRule(serverGameRule)
    end
end

function RoomInfoModule:getInfoNodeConfig()
    if CF.roomData:isGoldRoom() then
        return {
            {Name = "baseScore", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "底    分", DefaultValueStr = "-", DefaultVisible = true},
            {Name = "winLost", NodeType = self.INFO_NODE_TYPE.TWO, KeyStr1 = "输", DefaultValueStr1 = "x1", KeyStr2 = "赢", DefaultValueStr2 = "x1", DefaultVisible = true}
        }
    end
    return {
        {Name = "roomID", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "房间号", DefaultValueStr = "------", DefaultVisible = true},
        {Name = "playCount", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "局    数", DefaultValueStr = "-/-", DefaultVisible = true},
        {Name = "baseScore", NodeType = self.INFO_NODE_TYPE.ONE, KeyStr = "底    分", DefaultValueStr = "-", DefaultVisible = true}
    }
end

return RoomInfoModule
5