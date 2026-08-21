local UIMahConfig = CF.gameRequire("Modules.GameLayer.Config.UIMahConfig2D")
local UIMahOutArea = CF.gameClass("UIMahOutArea2D", "game.Mahjong.BasicMahjong.Modules.GameLayer.View2D.UIMahOutArea")

function UIMahOutArea:lightSameValueMahs(mahValue)
    for _, mah in pairs(self._allOutMahs) do
        if mahValue % CF.GameDefine.MAH_DIVIDED == mah:getMahValue() % CF.GameDefine.MAH_DIVIDED then
            mah:setColor(UIMahConfig.MahColor.SameValue)
        else
            mah:setColor(UIMahConfig.MahColor.Normal)
        end
    end
end

return UIMahOutArea