local GameCardLayer = CF.gameClass("GameCardLayer", "game.DoubleKou.BaseDoubleKou.Modules.GameLayer.GameCardLayer")

function GameCardLayer:showNoBiggerSprite()
    GameCardLayer.super.showNoBiggerSprite(self)
    local gameRule = CF.roomData:getGameRule()
    if string.find(gameRule,"自动出牌") or string.find(gameRule,"自动过牌") then
        CF.SysTool.performWithDelayGlobal(function()
            CF.game:getModule("GameLayer"):dispatchEvent({ name = CF.game:getModule("GameLayer").EVENT_AUTO_PASS})
        end,0.5)
    end
end

return GameCardLayer@