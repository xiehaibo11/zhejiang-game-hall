local WinLostItemMahsArea = CF.gameClass("WinLostItemMahsArea", "game.Mahjong.BasicMahjong.Modules.WinLost.ItemMahsArea")

function WinLostItemMahsArea:findFirstMahWithRuleNodeByID(huMahValue, mahData)
    if self._danFangMah and self._danFangMah:getMahValue() == huMahValue then
        return self._danFangMah
    end
    self._handMahs = self._handMahs or {}
    for i = 1, #self._handMahs do
        if self._handMahs[i]:getMahValue() == huMahValue then
            return self._handMahs[i]
        end
    end
    local findNodes = {}
    for i = 1, #self._combs do
        if mahData.combData[i].nFlag >= CF.GameDefine.COMB_FLAG.CHOW and mahData.combData[i].nFlag <= CF.GameDefine.COMB_FLAG.SINGLE then
            if self._combs[i] then
                local combMahs = self._combs[i]:getMahNodes()
                for j = 1, #combMahs do
                    if combMahs[j]:getMahValue() == huMahValue and mahData.combData[i].nFlag == CF.GameDefine.COMB_FLAG.CCHOW and j ~= 2 then
                        return combMahs[j]
                    elseif combMahs[j]:getMahValue() == huMahValue then
                        findNodes[#findNodes + 1] = combMahs[j]
                    end
                end
            end
        end
    end
    if findNodes[1] then
        return findNodes[1]
    end
end

return WinLostItemMahsArea[