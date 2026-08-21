local GameData = CF.gameClass("GameData", "game.DoubleKou.BaseDoubleKou.Modules.GameLayer.GameData")

function GameData:ctor()
    GameData.super.ctor(self)
end

--三王是最小的6线
function GameData:isSanWangIsMin6Xian()
    if self._gameType ~= CF.GameDefine.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_HANGZMAQUAN then
        return true
    end
    return false
end

--四王是最大的7线
function GameData:isSiWangIsBig7Xian()
    if self._gameType ~= CF.GameDefine.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_HANGZMAQUAN then
        return true
    end
    return false
end

--四王是最大的8线
function GameData:isSiWangIsBig8Xian()
    if self._gameType == CF.GameDefine.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_HANGZMAQUAN then
        return true 
    end
    return false
end

--连炸是否可以带2
function GameData:isLianZhaCanTakeWith2()
    return false
end

function GameData:getLianZhaBuDai()
    return false
end

return GameData