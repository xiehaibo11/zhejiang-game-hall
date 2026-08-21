local MahsArea = NG.GAME.gameClass("MahsArea", "newgold.GoldGames.GoldGameMah.MahXueLiu.Modules.GameMain.MahLayer.View2D.UIMahHandArea")
function MahsArea:ctor(config)
    MahsArea.super.ctor(self, NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM, config)
end

function MahsArea:_isCombsAtLeft()
    return true
end

function MahsArea:_getCombScale()
    return 1
end

function MahsArea:_getHandMahsStartPos()
    local startPos = cc.p(0, 0)
    if #self._combs > 0 then
        local lastCombPosX = self._combs[#self._combs]:getPositionX()
        local lastCombWidth = self._combs[#self._combs]:getContentSize().width
        startPos.x = lastCombPosX + lastCombWidth + 20
    end
    return startPos 
end

function MahsArea:showResultMahs(handMahValues, danFangMahValue, combDatas)
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



function MahsArea:findFirstMahNodeByID(huMahValue, mahData)
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
        if mahData.combData[i].nFlag >= NG.GAME.GameDefine.COMB_FLAG.CHOW and mahData.combData[i].nFlag <= NG.GAME.GameDefine.COMB_FLAG.SINGLE then
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
return MahsArea&