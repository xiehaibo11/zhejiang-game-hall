local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Modules.WinLost.WinLostData")

--和服务约定
local KW_FANID_TO_FANNAME = {
    [31] = "混一色",
    [32] = "清一色",
    [52] = "海底捞月",
    [90] = "抢杠胡",
    [116] = "自摸",
    [1004] = "天胡",
    [1005] = "地胡",
    [1010] = "门风花",
    [1011] = "门风刻",
    [1012] = "字牌刻",
    [1015] = "单吊",
    [1016] = "嵌档",
    [1017] = "靠柄",
    [1018] = "排胡",
    [1019] = "杠上开花",
    [1024] = "4花齐放",
    [1025] = "碰碰胡",
    [1028] = "清番",
    [1031] = "对子",
    [1032] = "刻子",
    [1033] = "杠牌",
    [1034] = "花牌",
    [1035] = "四财神腊子胡",
    [1036] = "八花聚齐",
}

function WinLostData:onMsgTaiName(msgData)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local huSeat, hfcnt = gameData:getScoreInfoData()
    for seat = 0, CF.roomData:getChairs() - 1 do
        local fanNames = ""
        if seat == huSeat then
            local strTai, strHu, strSpecialHu = self:getScoreInfo(hfcnt)
            if strSpecialHu == "" then
                fanNames = fanNames .. "番数: ".. strTai .. "\t"
                fanNames = fanNames .. "胡数: 底胡20 ".. strHu .. " "
                fanNames = fanNames .. self:getTotalHuCountInfo(msgData.nToTalCountHu[seat])
            else
                fanNames = fanNames .. "番数: 0\t"
                fanNames = fanNames .. "胡数: 底胡20 ".. strHu .. " "
                fanNames = fanNames .. self:getTotalHuCountInfo(msgData.nToTalCountHu[seat])
            end
        end
        self._fanNames[seat] = fanNames
    end
end

function WinLostData:getScoreInfo(hfcnt)
    local strTai = ""
    local strHu = ""
    local strSpecialHu = ""
    local nKeZi = 0
    local nGang = 0
    for _, fvale in pairs(hfcnt) do
        if fvale.isFan == true then
            if KW_FANID_TO_FANNAME[fvale.hfid] ~= nil then
                strTai = strTai .. KW_FANID_TO_FANNAME[fvale.hfid] .. fvale.hfCount .." "
            end
            if fvale.hfid == 1004 or fvale.hfid == 1005 then
                strSpecialHu = KW_FANID_TO_FANNAME[fvale.hfid] or ""
            end
        else
            --刻子和杠牌需要处理一下
            if fvale.hfid == 1032 or fvale.hfid == 1033 then
                if fvale.hfid == 1032 then
                    nKeZi = nKeZi + fvale.hfCount
                end
                if fvale.hfid == 1033 then
                    nGang = nGang + fvale.hfCount
                end
            else
                if fvale.hfid == 1035 or fvale.hfid == 1036 then
                    strSpecialHu = KW_FANID_TO_FANNAME[fvale.hfid] or ""
                end
                if KW_FANID_TO_FANNAME[fvale.hfid] then
                    strHu = strHu .. KW_FANID_TO_FANNAME[fvale.hfid] .. fvale.hfCount .." "
                end
            end
        end
    end
    if nKeZi ~= 0 then
            strHu = strHu .. "刻子" .. nKeZi .. " "
    end
    if nGang ~= 0 then
        strHu = strHu .. "杠牌".. nGang .. " "
    end
    if strSpecialHu == "" and strTai == "" then
        strTai = "0"
    end
    return strTai, strHu, strSpecialHu
end

function WinLostData:getTotalHuCountInfo(totalHuCount)
    local strInfo = "(总计".. totalHuCount .."胡)"
    local maxHuCount = CF.roomData:getMaxHuCount()
    if maxHuCount > 0 and totalHuCount >= maxHuCount then
        strInfo = strInfo .. "(封顶)"
    end
    return strInfo
end

return WinLostData