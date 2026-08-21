local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.DoubleKou.BaseDoubleKou.Modules.RoomInfo.Module")

--玩法介绍
function RoomInfoModule:onMsgGameRule(msgData)
    local strGameRule = msgData.strGameRule
    -- 公共双扣有人引用了bbchayuan，导致其他地区异常，目前衢州先这么处理
    if CF.areaData:getLobbyID() == 900003 then
        strGameRule = self:analyseGameRuleStr(msgData.strGameRule)
    end
    strGameRule = string.gsub(strGameRule,"倍率1/2/3","倍率1-2-3")
    strGameRule = string.gsub(strGameRule,"倍率1/2/4","倍率1-2-4")
    strGameRule = string.gsub(strGameRule,"倍率0/1/2","倍率0-1-2")
    
    CF.roomData:setGameRule(strGameRule)
    local lmtMarker = string.find(strGameRule, "禁用记牌器")
    lmtMarker = lmtMarker or false
    CF.game:getModule("Marker"):setLmtMarker(lmtMarker)
end

return RoomInfoModule�