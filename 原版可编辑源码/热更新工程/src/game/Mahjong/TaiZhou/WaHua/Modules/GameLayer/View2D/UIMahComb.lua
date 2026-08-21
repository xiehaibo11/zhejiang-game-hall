local UIMahComb = CF.gameClass("UIMahComb2D", "game.Mahjong.BasicMahjong.Modules.GameLayer.View2D.UIMahComb")
local UIMahConfig = CF.gameRequire("Modules.GameLayer.Config.UIMahConfig2D")
local SingleLayerMahCount = 2

function UIMahComb:_isArrowByIconLieType()
    return true
end

function UIMahComb:_updateHorizontalLayoutAndSize()
    local totalWidth = 0
    local totalHeight = 0
    for index, mah in ipairs(self._allMahs) do
        local mahSize = mah:getContentSize()
        if index > SingleLayerMahCount then
            local alignMahIndex = self:_getAlignMahIndex(index)
            local alignMah = self._allMahs[alignMahIndex]
            mah:setPosition(alignMah:getPositionX(), alignMah:getPositionY() + mah:getThick() + mahSize.height / 2)
            mah:setLocalZOrder(alignMah:getLocalZOrder() + SingleLayerMahCount)
        else
            if totalHeight == 0 then
                mah:setPosition(mahSize.width / 2, mahSize.height / 2)
                totalHeight = mahSize.height
            else
                mah:setPosition(mahSize.width / 2, totalHeight - mahSize.height / 2 + mah:getTopEdgeWidth())
                totalHeight = totalHeight + mah:getTopEdgeWidth()
            end
            if mahSize.width > totalWidth then
                totalWidth = mahSize.width
            end
            mah:setLocalZOrder(SingleLayerMahCount - index)
        end
    end
    self:setContentSize(cc.size(totalWidth, totalHeight))
end

function UIMahComb:_updateVerticalLayoutAndSize()
    local totalWidth = 0
    local totalHeight = 0
    for index, mah in ipairs(self._allMahs) do
        local mahSize = mah:getContentSize()
        if index > SingleLayerMahCount then
            local alignMahIndex = self:_getAlignMahIndex(index)
            local alignMah = self._allMahs[alignMahIndex]
            mah:setPosition(alignMah:getPositionX() + mahSize.width / 2, alignMah:getPositionY() + mah:getThick())
        else
            mah:setPosition( totalWidth + mahSize.width / 2, mahSize.height / 2)
            totalWidth = totalWidth + mahSize.width
            if mahSize.height > totalHeight then
                totalHeight = mahSize.height
            end
        end
        mah:setLocalZOrder(index)
    end
    self:setContentSize(cc.size(totalWidth, totalHeight))
end

function UIMahComb:lightSameValueMahs(mahValue)
    for _, mah in pairs(self._allMahs) do
        if mahValue % CF.GameDefine.MAH_DIVIDED == mah:getMahValue() % CF.GameDefine.MAH_DIVIDED then
            mah:setColor(UIMahConfig.MahColor.SameValue)
        else
            mah:setColor(UIMahConfig.MahColor.Normal)
        end
    end
end

return UIMahComb