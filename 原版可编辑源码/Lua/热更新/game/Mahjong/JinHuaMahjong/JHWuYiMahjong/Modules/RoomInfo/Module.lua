local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Mahjong.JinHuaMahjong.JHBaseMahjong.Modules.RoomInfo.Module")

function RoomInfoModule:onMsgGameRule(msgData)
    RoomInfoModule.super.onMsgGameRule(self, msgData)
    local  strGameRule = CF.SysTool.GB_18030_2000_TO_UTF8(msgData.strGameRule)
    local arrGameRule = CF.StringTool.spiltStringByFlag(strGameRule,"/")
    for i = 1 , #arrGameRule do
        if arrGameRule[i] == "底: 1分" or arrGameRule[i] == "底: 2分" or arrGameRule[i] == "底: 4分" then
            self:dispatchEvent({ name = self.EVENT_UPDATE_ROOM_INFO_EX , msg = arrGameRule[i] })
        end
    end
    return strGameRule
end

return RoomInfoModule