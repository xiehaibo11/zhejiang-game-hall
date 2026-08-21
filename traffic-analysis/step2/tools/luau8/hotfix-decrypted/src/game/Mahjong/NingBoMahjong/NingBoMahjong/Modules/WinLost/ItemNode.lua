local WinLostItemNode = CF.gameClass("WinLostItemNode","game.Mahjong.BasicMahjong.Modules.WinLost.ItemNode")

function WinLostItemNode:updataFlowerMah(flowerMahs)
    flowerMahs = flowerMahs or  {}
    local tempMahID = clone(flowerMahs)
    for key, value in pairs(tempMahID) do
        if value == 99 then
            tempMahID[key] = 100
        elseif value == 100 then
            tempMahID[key] = 99
        end
    end
    WinLostItemNode.super.updataFlowerMah(self,flowerMahs)
end

return WinLostItemNode