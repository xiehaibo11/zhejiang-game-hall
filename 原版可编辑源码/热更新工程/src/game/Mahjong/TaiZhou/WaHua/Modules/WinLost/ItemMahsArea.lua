local WinLostItemMahsArea = CF.gameClass("WinLostItemMahsArea", "game.Mahjong.TaiZhou.WaHua.Modules.GameLayer.View2D.UIMahHandArea")

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

function WinLostItemMahsArea:setDfDangTouScore(scoreNode, nDangTouScore)
    if not self._danFangMah or not scoreNode then
        return
    end
    local scoreNodeClone = scoreNode:clone()
    scoreNodeClone:setString(nDangTouScore)
    self._danFangMah:addChild(scoreNodeClone, 2)
    scoreNodeClone:setPosition(self._danFangMah:getContentSize().width / 2, 0)
end

function WinLostItemMahsArea:setCombDangTouScore(scoreNode, nCombScore)
    if not scoreNode then
        return
    end
    for i = 1, #self._combs do
        if nCombScore[i] then
            local scoreNodeClone = scoreNode:clone()
            scoreNodeClone:setString(nCombScore[i])
            self._combs[i]:addChild(scoreNodeClone, 10)
            scoreNodeClone:setPosition(self._combs[i]:getContentSize().width / 2, 0)
        end
    end
end

function WinLostItemMahsArea:showHuMah(huMahValue)
    local huColor = cc.c3b(255, 201, 170)
    if self._danFangMah and self._danFangMah:getMahValue() == huMahValue then
        self._danFangMah:setColor(huColor)
        return
    end
    for i = 1, #self._handMahs do
        if self._handMahs[i]:getMahValue() == huMahValue then
            self._handMahs[i]:setColor(huColor)
            return
        end
    end
    for i = 1, #self._combs do
        local combMahs = self._combs[i]:getMahNodes()
        for j = 1, #combMahs do
            if combMahs[j]:getMahValue() == huMahValue then
                combMahs[j]:setColor(huColor)
                return
            end
        end
    end
end

return WinLostItemMahsArea