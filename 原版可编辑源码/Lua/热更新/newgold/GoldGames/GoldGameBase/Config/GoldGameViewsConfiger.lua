local GoldGameViewsConfig = NG.GAME.gameRequire("Config.GoldGameViewsConfig")
local GoldGameViewsConfiger = class("GoldGameViewsConfiger")

function GoldGameViewsConfiger:init()
    for name, conf in pairs(ViewsConfig) do
        NG.viewManager:addViewConfig(name, conf)
    end
end

return GoldGameViewsConfiger