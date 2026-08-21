local GameModule = CF.gameClass("GameModule", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.GameLayer.Module")

function GameModule:initDatas()
    GameModule.super.initDatas(self)
    self:getGameData():setMaxHandMahData(CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN)
end


return GameModule9