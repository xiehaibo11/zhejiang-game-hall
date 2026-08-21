local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.DoubleKou.BaseDoubleKou.Modules.RoomInfo.Module")

--玩法介绍
function RoomInfoModule:onMsgGameRule(msgData)
    local serverGameRule = CF.SysTool.GB_18030_2000_TO_UTF8(msgData.strGameRule)
    local gameRuleText = {
        gametype = {[1] = "百变双扣", [3] = "千变双扣", [9] = "经典双扣"},
        gamezhang = {[1] = "1张分", [3] = "3张分", [4] = "4张分", [6] = "6张分", [9] = "9张分"},
        EndTypeMut = {[0] = "倍率:1,2,3倍", [1] = "倍率:1,2,4倍", [2] = "倍率:0,1,2倍", [3] = "倍率:2,3,5倍"},
        ChaoDi = {[0] = "", [1] = "抄底"},
        HaveMingPai = {[0] = "全暗", [1] = "双明"},
        HaveNoDouble = {[0] = "", [1] = "无翻倍"},
        MoneyType = {[1] = "房主付", [2] = "AA支付"},
        NeedSwapSeat = {[0] = "不换座", [1] = "换座"},
        LmtMarker = {[0] = "可用记牌器", [1] = "禁用记牌器"},
        IsSysTrust = {[0] = "", [1] = "超时托管"},
        autoReady = {[0] = "", [1] = "自动准备"},
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
        if gameRuleTable.gametype then
            strGameRule = gameRuleText.gametype[tonumber(gameRuleTable.gametype)]
        end

        if gameRuleTable.gamezhang then
            strGameRule = strGameRule .. "/" .. gameRuleText.gamezhang[tonumber(gameRuleTable.gamezhang)]
        end

        if gameRuleTable.EndTypeMut then
            strGameRule = strGameRule .. "/" .. gameRuleText.EndTypeMut[tonumber(gameRuleTable.EndTypeMut)]
        end

        if gameRuleTable.ChaoDi then
            if gameRuleText.ChaoDi[tonumber(gameRuleTable.ChaoDi)] ~= "" then
                strGameRule = strGameRule .. "/" .. gameRuleText.ChaoDi[tonumber(gameRuleTable.ChaoDi)]
            end
        end

        if gameRuleTable.HaveMingPai then
            strGameRule = strGameRule .. "/" .. gameRuleText.HaveMingPai[tonumber(gameRuleTable.HaveMingPai)]
        end

        if gameRuleTable.HaveNoDouble and gameRuleTable.HaveNoDouble ~= "" then
            if gameRuleText.HaveNoDouble[tonumber(gameRuleTable.HaveNoDouble)] ~= "" then
                strGameRule = strGameRule .. "/" .. gameRuleText.HaveNoDouble[tonumber(gameRuleTable.HaveNoDouble)]
            end
        end

        if gameRuleTable.moneyType and gameRuleTable.moneyType ~= "" then
            if gameRuleText.MoneyType[tonumber(gameRuleTable.moneyType)] ~= "" then
                strGameRule = strGameRule .. "/" .. gameRuleText.MoneyType[tonumber(gameRuleTable.moneyType)]
            end
        end

        if gameRuleTable.NeedSwapSeat and gameRuleTable.NeedSwapSeat ~= "" then
            strGameRule = strGameRule .. "/" .. gameRuleText.NeedSwapSeat[tonumber(gameRuleTable.NeedSwapSeat)]
        end

        if gameRuleTable.LmtMarker and gameRuleTable.LmtMarker ~= "" then
            strGameRule = strGameRule .. "/" .. gameRuleText.LmtMarker[tonumber(gameRuleTable.LmtMarker)]
            CF.game:getModule("Marker"):setLmtMarker(tonumber(gameRuleTable.LmtMarker) == 1)
        end

        if gameRuleTable.IsSysTrust and gameRuleTable.IsSysTrust ~= "" then
            strGameRule = strGameRule .. "/" .. gameRuleText.IsSysTrust[tonumber(gameRuleTable.IsSysTrust)]
        end

        if gameRuleTable.autoReady and tonumber(gameRuleTable.autoReady) == 1 then
            CF.game:getModule("CenterBtns"):onStartGameEvent()
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

return RoomInfoModule
