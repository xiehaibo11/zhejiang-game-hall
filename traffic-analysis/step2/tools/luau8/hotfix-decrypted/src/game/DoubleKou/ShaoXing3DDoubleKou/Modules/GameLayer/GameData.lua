local GameData = CF.gameClass("GameData", "game.DoubleKou.BaseDoubleKou.Modules.GameLayer.GameData")

function GameData:ctor()
    GameData.super.ctor(self)
end

function GameData:isSiWangIsBig8Xian()
    if self:getGameType() == CF.GameDefine.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_NORMAL then
        return true
    end
    return false
end

return GameDatan