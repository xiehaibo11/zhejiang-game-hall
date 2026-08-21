local PlayerView = CF.gameClass("PlayerView", "game.DoubleKou.BaseDoubleKou.Modules.Player.View")

function PlayerView:onGameGongXianChanged(event)
    local gameType = CF.game:getModule("GameLayer"):getGameData():getGameType()
    if gameType ~= CF.GameDefine.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_HANGZMAQUAN then
        PlayerView.super.onGameGongXianChanged(self, event)
    end
end

return PlayerView