local GameData = CF.gameClass("GameData", "game.Mahjong.BasicMahjong.Modules.GameLayer.GameData")

function GameData:ctor()
    GameData.super.ctor(self)
    self._bBaoPai = false
end

function GameData:initEveryTimesDatas()
    GameData.super.initEveryTimesDatas(self)

    --self._isShaZhu = false
end

function GameData:getIsBaoPai()
    return self._bBaoPai
end

function GameData:setIsBaoPai(isBao)
    self._bBaoPai = isBao
end

return GameData�