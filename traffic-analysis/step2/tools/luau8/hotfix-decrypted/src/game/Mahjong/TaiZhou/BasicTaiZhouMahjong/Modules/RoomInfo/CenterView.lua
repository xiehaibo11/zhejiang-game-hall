local RoomCenterInfoView = CF.gameClass("RoomInfoView", "game.Mahjong.BasicMahjong.Modules.RoomInfo.CenterView")

function RoomCenterInfoView:setCenterRuleString(ruleStr)
    RoomCenterInfoView.super.setCenterRuleString(self, ruleStr)
end

return RoomCenterInfoView