local WinLostItemMahsArea = CF.gameClass("WinLostItemMahsArea", "game.Mahjong.BasicMahjong.Modules.GameLayer.View2D.UIMahHandArea")

function WinLostItemMahsArea:ctor(config)
    WinLostItemMahsArea.super.ctor(self, CF.GameDefine.LOCAL_SEAT.BOTTOM, config)
end

function WinLostItemMahsArea:_isCombsAtLeft()
    return true
end

function WinLostItemMahsArea:_getCombScale()
    return 1
end

function WinLostItemMahsArea:_getHandMahsStartPos()
    local startPos = cc.p(0, 0)
    if #self._combs > 0 then
        local lastCombPosX = self._combs[#self._combs]:getPositionX()
        local lastCombWidth = self._combs[#self._combs]:getContentSize().width
        startPos.x = lastCombPosX + lastCombWidth + 20
    end
    return startPos
end

function WinLostItemMahsArea:showResultMahs(handMahValues, danFangMahValue, combDatas)
    self:_setCombs(combDatas)
    local handMahsData = {}
    for _, handMahValue in ipairs(handMahValues) do
        table.insert(handMahsData, {mahValue = handMahValue, bStand = false})
    end
    self:_showHandMahs(handMahsData)
    self:_showDanFang(danFangMahValue, false)
    self:_updateCombsPosition()
    self:_updateHandMahsPosition()
end

function WinLostItemMahsArea:findFirstMahNodeByID(huMahValue, mahData)
    if self._danFangMah and self._danFangMah:getMahValue() == huMahValue then
        return self._danFangMah
    end
    self._handMahs = self._handMahs or {}
    for i = 1, #self._handMahs do
        if self._handMahs[i]:getMahValue() == huMahValue then
            return self._handMahs[i]
        end
    end
    for i = 1, #self._combs do
        if mahData.combData[i].nFlag >= CF.GameDefine.COMB_FLAG.CHOW and mahData.combData[i].nFlag <= CF.GameDefine.COMB_FLAG.SINGLE then
            if self._combs[i] then 
                local combMahs = self._combs[i]:getMahNodes()
                for j = 1, #combMahs do
                    if combMahs[j]:getMahValue() == huMahValue then
                        return combMahs[j]
                    end
                end
            end
        end
    end
end
return WinLostItemMahsArea