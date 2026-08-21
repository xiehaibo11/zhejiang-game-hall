local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Mahjong.BasicMahjong.Modules.RoomInfo.Module")

--玩法介绍
function RoomInfoModule:onMsgGameRule(msgData)
	RoomInfoModule.super.onMsgGameRule(self, msgData)
    local strGameRule = CF.SysTool.GB_18030_2000_TO_UTF8(msgData.strGameRule)
    if strGameRule == "" or strGameRule == nil then
        strGameRule = msgData.strGameRule
    end
    local ruleTable = CF.StringTool.getLuaValueList(strGameRule)
    CF.roomData:setPayType(tonumber(ruleTable["PayType"]))
    CF.roomData:setRoomFee(tonumber(ruleTable["RoomFee"]))
end

return RoomInfoModule