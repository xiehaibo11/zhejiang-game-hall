local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Mahjong.JiaXing.BaseMahjong.Modules.RoomInfo.Module")

RoomInfoModule.EVENT_SHOW_QUAN_FENG_CNT = "EVENT_SHOW_QUAN_FENG_CNT"

function RoomInfoModule:onMsgCurPanShu(msgData)
    RoomInfoModule.super.onMsgCurPanShu(self, msgData)
    self:showQuanFengInfo(msgData)
end

function RoomInfoModule:showQuanFengInfo(msgData)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local curQuanShu = gameData:getCurQuanShu()
    local taiTouHuQuanShu = CF.roomData:getTaiTouHuQuanShu()
    self:dispatchEvent( { name = self.EVENT_SHOW_QUAN_FENG_CNT , msg = {curQuanShu = curQuanShu, taiTouHuQuanShu = taiTouHuQuanShu}})
    gameData:setIsShowQuanFeng(true)
    CF.game:getModule("GameLayer"):setQuanFeng()
end

return RoomInfoModule1