local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Mahjong.NingBoMahjong.NBMahjongBase.Modules.RoomInfo.Module")

RoomInfoModule.EVENT_SHOW_QJ_FEN = "EVENT_SHOW_QJ_FEN"

function RoomInfoModule:ctor()
    RoomInfoModule.super.ctor(self)
    self.isSanJiaLingSuan = false
end

function RoomInfoModule:onMsgGameRule(msgData)
    RoomInfoModule.super.onMsgGameRule(self, msgData)
    local strGameRule = CF.SysTool.GB_18030_2000_TO_UTF8(msgData.strGameRule)
    if string.find(strGameRule, "全缴包三家另算") then
        self.isSanJiaLingSuan = true
        self:dispatchEvent({ name = self.EVENT_SHOW_QJ_FEN })
    end
end

function RoomInfoModule:getTypeSanJiaLingSuan()
    return self.isSanJiaLingSuan
end

return RoomInfoModule