local MsgManager = CF.gameClass("MsgManager", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Manager.MsgManager")

function MsgManager:sendCancel(actionID)
    MsgManager.super.sendCancel(self, actionID)
    CF.game:getModule("GameLayer"):getGameData():setMsgPowerData()
end

return MsgManager