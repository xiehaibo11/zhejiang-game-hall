local GameModule = CF.gameClass("GameModule", "game.DoubleKou.BaseDoubleKou.Modules.GameLayer.Module")

function GameModule:onMsgGameGong(msgData)
    local gameData = self:getGameData()
    if gameData._gameType ~= CF.GameDefine.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_HANGZHOU then
        GameModule.super.onMsgGameGong(self, msgData)
    end
end

return GameModule