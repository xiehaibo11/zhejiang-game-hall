local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Mahjong.BasicMahjong.Modules.RoomInfo.Module")

RoomInfoModule.EVENT_UPDATE_DI_SHU = "EVENT_UPDATE_DI_SHU"
RoomInfoModule.EVENT_SHOW_KUNG_SCORE_ANI = "EVENT_SHOW_KUNG_SCORE_ANI"
RoomInfoModule.EVENT_SET_SCORE = "EVENT_SET_SCORE"

function RoomInfoModule:getSubXYDealList()
    local subXYDealList = RoomInfoModule.super.getSubXYDealList(self)

    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgBaseScore), msgClass = CF.GameProtocol.msgBaseScore}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgGangFeng), msgClass = CF.GameProtocol.msgGangFeng}

    return subXYDealList
end

-- 底分信息
function RoomInfoModule:onMsgBaseScore(msgData)
    RoomInfoModule.super.onMsgBaseScore(self,msgData)
    self:dispatchEvent( { name = self.EVENT_UPDATE_DI_SHU, msg = {value = msgData.nBaseDi }})
end

-- 杠分信息
function RoomInfoModule:onMsgGangFeng(msgData)
    if msgData.bRelink == false then
        self:dispatchEvent( { name = self.EVENT_SHOW_KUNG_SCORE_ANI, msg = {score = msgData.nCurScore}})
    end
    self:dispatchEvent( { name = self.EVENT_SET_SCORE , msg = {score = msgData.nTotalScore}})
end

return RoomInfoModule