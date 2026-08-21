local UIMahFlowerArea = CF.gameClass("UIMahFlowerArea2D", "game.Mahjong.BasicMahjong.Modules.GameLayer.View2D.UIMahFlowerArea")

function UIMahFlowerArea:ctor(localSeat, config)
    UIMahFlowerArea.super.ctor(self, localSeat, config)
    self._maxFlowerMahCount = CF.GameDefine.MAX_FLOWER_COUNT_TYPE.MAX
end

function UIMahFlowerArea:setMaxFlowerMahCount(maxFlowerMahCount)
    self._maxFlowerMahCount = maxFlowerMahCount
    self:_updateMahsPosition()
end

function UIMahFlowerArea:_updateMahsPosition()
    if self._maxFlowerMahCount == CF.GameDefine.MAX_FLOWER_COUNT_TYPE.FOUR then
        self:_updateMahsPosition2()
        return
    end
    UIMahFlowerArea.super._updateMahsPosition(self)
end

function UIMahFlowerArea:_updateMahsPosition2()
    local layoutConf = self:_getLayoutConfig()
    for index, mah in ipairs(self._allMahs) do
        mah:setAnchorPoint(layoutConf.AnchorPoint)
        if layoutConf.AddDirection > 0 then
            mah:setLocalZOrder(99 - index)
        end
        local mahPos = cc.p(0,0)
        local lineIndex = math.ceil(index / self._maxFlowerMahCount)
        local mahIndex = index - (lineIndex - 1) * self._maxFlowerMahCount
        if layoutConf.IsHorizontalAdd then
            mahPos.x = (mahIndex - 1) * mah:getTopEdgeWidth()
            mahPos.y = (lineIndex - 1) * mah:getLeftRightEdgeHeight()
        else
            mahPos.x = (lineIndex - 1) * mah:getTopEdgeWidth()
            mahPos.y = (mahIndex - 1) * mah:getTopEdgeWidth()
        end
        mah:setPosition(mahPos)
    end
end

return UIMahFlowerArea