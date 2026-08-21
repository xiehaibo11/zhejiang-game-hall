local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Mahjong.BasicMahjong.Modules.RoomInfo.Module")

RoomInfoModule.EVENT_SHOW_KUNG_SCORE_ANI = "EVENT_SHOW_KUNG_SCORE_ANI"
RoomInfoModule.EVENT_SET_SCORE = "EVENT_SET_SCORE"

function RoomInfoModule:getSubXYDealList()
    local subXYDealList = RoomInfoModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgGuaFeng), msgClass = CF.GameProtocol.msgGuaFeng}
    return subXYDealList
end

-- 杠分信息
function RoomInfoModule:onMsgGuaFeng(msgData)
    if msgData.bRelink == false then
        self:dispatchEvent({name = self.EVENT_SHOW_KUNG_SCORE_ANI, msg = msgData.iCurScore})
    end
    self:dispatchEvent({name = self.EVENT_SET_SCORE, msg = msgData.iTotalScore})
end

return RoomInfoModule