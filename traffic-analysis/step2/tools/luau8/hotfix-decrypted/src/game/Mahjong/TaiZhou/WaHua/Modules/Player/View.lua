local PlayerView = CF.gameClass("PlayerView", "game.Mahjong.BasicMahjong.Modules.Player.View")

function PlayerView:ctor(param)
    PlayerView.super.ctor(self)
    if self._headPos1 then
        self._headPos1:setPositionY(self._headPos1:getPositionY() - 80)
    end
    if self._headPos3 then
        self._headPos3:setPositionY(self._headPos3:getPositionY() - 80)
    end
    if self._headPos4 then
        self._headPos4:setPositionX(-self._headPos4:getPositionX() - display.width)
    end
end

function PlayerView:getAdaptationConfig()
    local config = PlayerView.super.getAdaptationConfig(self)
    for i = 1, #config do
        if config[i].node == self._headPos4 then
            table.remove(config, i)
            break
        end
    end
    return config
end

return PlayerView1