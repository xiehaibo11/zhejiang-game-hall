local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Mahjong.JiaXing.BaseMahjong.Modules.RoomInfo.Module")

function RoomInfoModule:getSubXYDealList()
    local subXYDealList = RoomInfoModule.super.getSubXYDealList(self)
    if CF.roomData:is2PGame() then
        subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgGameRule),msgClass = CF.GameProtocol.msgGameRule_2P}
    end
    return subXYDealList
end

function RoomInfoModule:getLimitXYIDs()
    local xyIDs = RoomInfoModule.super.getLimitXYIDs(self)
    if CF.roomData:is2PGame() then
        -- 指定导入嘉兴基类协议文件
        local GameProtocolSToC_Base = require("game.Mahjong.JiaXing.BaseMahjong.Protocols.GameProtocol")
        table.insert(xyIDs, GameProtocolSToC_Base.msgNewRoomRule.XY_ID)
        for i = #xyIDs, 1, -1 do
            if xyIDs[i] == 1037 then
                table.remove(xyIDs, i)
            end
        end
    else
        table.insert(xyIDs, 1037)
    end
    return xyIDs
end

--二人规则
function RoomInfoModule:onMsgGameRule(msgData)
    local strGameRule = msgData.rule
    local ruleTable = {}
    ruleTable.baseScore = self:getLuaStrValue(strGameRule,"base")
    ruleTable.winLostLmt = self:getLuaStrValue(strGameRule,"winLostLmt")
    ruleTable.openSanTan = self:getLuaStrValue(strGameRule,"openSanTan") == "1"
    ruleTable.huangFan = self:getLuaStrValue(strGameRule,"openHuangFan") == "1"
    ruleTable.canChow  = self:getLuaStrValue(strGameRule,"canChow") == "1"
    ruleTable.nFangKa = self:getLuaStrValue(strGameRule,"nFangKa") == "1"
    ruleTable.WuJiangYZM = self:getLuaStrValue(strGameRule,"wuJiangYZM") == "1"
    ruleTable.WJQiangGang = self:getLuaStrValue(strGameRule,"canQingGang") == "1"
    ruleTable.WJBuyScore = self:getLuaStrValue(strGameRule,"buyScore") == "1"
    CF.roomData:setWuJiangYZM(ruleTable.WuJiangYZM)
    local  strRule = "" 
    if ruleTable.baseScore and #ruleTable.baseScore > 0 then
        strRule = strRule .. string.format("底分:%d/", tonumber(ruleTable.baseScore))
    end
    if ruleTable.WuJiangYZM then
        strRule = strRule .. "吴江/"
    end
    if ruleTable.WJQiangGang then
        strRule = strRule .. "抢杠/"
    end
    if ruleTable.WJBuyScore  then
        strRule = strRule .. "买籽/"
        CF.roomData:setIsWuJiangBuyScore(true)
    else
        CF.roomData:setIsWuJiangBuyScore(false)
    end
    if ruleTable.openSanTan then
		CF.roomData:setIsSupportSanTan(true)
        strRule = strRule .. "包三摊/"
	else
		CF.roomData:setIsSupportSanTan(false)
    end
    if ruleTable.huangFan then
        strRule = strRule .. "黄番/"
    end
    if not ruleTable.WuJiangYZM then
        if ruleTable.canChow then
            strRule = strRule .. "可吃牌/"
        else
            strRule = strRule .. "禁吃牌/"
        end
    end
    local maxWinLost = ""
    if tonumber(ruleTable.winLostLmt) == 0 then
        if ruleTable.WuJiangYZM then
            maxWinLost = maxWinLost .. "无番数限制"
        else
            maxWinLost = maxWinLost .. "无片数限制"
        end
    else
        if ruleTable.WuJiangYZM then
            maxWinLost =  maxWinLost .. tonumber(ruleTable.winLostLmt) .. "番"
        else
            maxWinLost =  maxWinLost .. tonumber(ruleTable.winLostLmt) .. "片"
        end   
    end
    strRule = strRule .. maxWinLost
    if ruleTable.nFangKa then
        strRule = strRule .. "/费用均摊"
    else
        strRule = strRule .. "/房主付"
    end
    if CF.teaHouseManager:isInTeaHouse() then
        strRule = string.gsub(strRule, "/房主付", "")
    end

    CF.roomData:setIsOpenHuangFan(ruleTable.huangFan)
    CF.roomData:setGameRule(strRule)
    return strGameRule
end

return RoomInfoModule