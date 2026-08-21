local GameData = CF.gameClass("GameData", "game.Mahjong.BasicMahjong.Modules.GameLayer.GameData")

function GameData:initMahData()
    GameData.super.initMahData(self)
    self._playerTingState = {}
    self._erRenTaskInfo = {}
end

function GameData:initEveryTimesDatas()
    GameData.super.initEveryTimesDatas(self)
    self._playerTingState = {}
    self._erRenTaskInfo = {}
end

function GameData:setPlayerTingState(seat, bTing)
    self._playerTingState[seat] = bTing
end

function GameData:getPlayerTingState(seat)
    return self._playerTingState[seat] or ""
end

function GameData:setErRenTaskInfo(taskInfo)
    self._erRenTaskInfo = clone(taskInfo)
end

function GameData:getErRenTaskInfo()
    return self._erRenTaskInfo
end

return GameData