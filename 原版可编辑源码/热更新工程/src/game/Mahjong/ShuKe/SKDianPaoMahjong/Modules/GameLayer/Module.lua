local GameModule = CF.gameClass("GameModule", "game.Mahjong.ShuKe.ShuKeMahjongBase.Modules.GameLayer.Module")

function GameModule:initDatas()
    GameModule.super.initDatas(self)
    self:getGameData():setMaxHandMahData(CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN)

    CF.soundManager.playSoundMahAction = CF.soundManager.playSoundMahActionWidthSuffix
end


return GameModule