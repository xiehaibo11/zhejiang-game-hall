local WinLostItemMahsArea = CF.gameClass("WinLostItemMahsArea", "game.Mahjong.BasicMahjong.Modules.WinLost.ItemMahsArea")

function WinLostItemMahsArea:findFirstMahNodeByID(huMahValue, mahData, huType)
	if huType == "" or huType == "dui" then
        if self._danFangMah and self._danFangMah:getMahValue() == huMahValue then
            return self._danFangMah
        end
        self._handMahs = self._handMahs or {}
        for i = #self._handMahs, 1, -1 do
            if self._handMahs[i]:getMahValue() == huMahValue then
                return self._handMahs[i]
            end
        end
    end

    for i = #self._combs, 1, -1 do
        local validIdx = {true,true,true,true}
        if mahData.combData[i].nFlag == CF.GameDefine.COMB_FLAG.CCHOW then
            if huType == "can" then
                validIdx = {false,true,false,false}
            elseif huType== "bian" then
                validIdx = {true,false,true,false}
            end
        end
        if self._combs[i] then 
            local combMahs = self._combs[i]:getMahNodes()
            for j = 1, #combMahs do
                if combMahs[j]:getMahValue() == huMahValue and validIdx[j] then
                    return combMahs[j]
                end
            end
        end
    end
end

return WinLostItemMahsArea