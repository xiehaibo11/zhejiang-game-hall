local GameData = CF.gameClass("GameData", "game.DoubleKou.BaseDoubleKou.Modules.GameLayer.GameData")

function GameData:ctor()
    GameData.super.ctor(self)
end

--相同连炸判断线数比较大小 901>504>405
function GameData:isLianZhanCompareWithLian()
    return true
end

--一张大王加一张小王是否可以当对子出
function GameData:isOneBJAndOneSJCanDui()
    return true 
end

--四王是最大的7线
function GameData:isSiWangIsBig7Xian()
    if self._gameType == CF.GameDefine.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_HUOPING_KAIHUA then
        return false
    else
        return true 
    end
end

--连炸是否可以带2
function GameData:isLianZhaCanTakeWith2()
    if self._gameType == CF.GameDefine.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_HUOPING_QUZHOU then
        return false
    else
        return true 
    end
end

return GameData