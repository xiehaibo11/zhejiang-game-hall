local UIMahOutArea = CF.gameRequire("Modules.GameLayer.View2D.UIMahOutArea")
local UIMahConfig = CF.gameRequire("Modules.GameLayer.Config.UIMahConfig2D")


local UIMahPlayerOutArea = class("UIMahPlayerOutArea", UIMahOutArea)

function UIMahPlayerOutArea:ctor(localSeat, config)
    UIMahPlayerOutArea.super.ctor(self, config)

    self._localSeat = localSeat
    self._maxPlayerCount = 4
    self._singleLineMaxCount = 8
    self._maxLineCount = 3
end

function UIMahPlayerOutArea:_getMahType()
    if not UIMahConfig.OutMahsMahType.FourDirection[self._localSeat] then
        return UIMahConfig.OutMahsMahType.Together
    end
    return UIMahConfig.OutMahsMahType.FourDirection[self._localSeat]
end

function UIMahPlayerOutArea:_getSingleLayerMaxCount()
    local layoutConfig = UIMahConfig.OutMahsLayout.FourDirection[self._localSeat]
    if not layoutConfig then
        return 0
    end
    
    return self._singleLineMaxCount * self._maxLineCount
end

function UIMahPlayerOutArea:_addOutMah(outMah)
    local layoutConfig = UIMahConfig.OutMahsLayout.FourDirection[self._localSeat]
    if not layoutConfig then
        return 
    end

    local outMahsTotalCount = #self._allOutMahs
    local singleLayerMaxCount = self:_getSingleLayerMaxCount()
    local nowLayerCount = outMahsTotalCount % singleLayerMaxCount
    local nowLayerIndex = math.ceil( outMahsTotalCount / singleLayerMaxCount )
    local lastOutMah = self:getLastOutMah()
    local mahPos = cc.p(0,0)
    local zOrder = 0
    if nowLayerCount > 0 then
        if nowLayerCount % self._singleLineMaxCount == 0 then
            if layoutConfig.IsHorizontalAdd then
                mahPos.x = 0
                mahPos.y = lastOutMah:getPositionY() + layoutConfig.AddDirectionY * lastOutMah:getLeftRightEdgeHeight()
            else
                mahPos.x = lastOutMah:getPositionX() + layoutConfig.AddDirectionX * lastOutMah:getLeftRightEdgeHeight()
                mahPos.y = lastOutMah:getThick() * (nowLayerIndex - 1)
            end
        else
            if layoutConfig.IsHorizontalAdd then
                mahPos.x = lastOutMah:getPositionX() + layoutConfig.AddDirectionX * lastOutMah:getTopEdgeWidth()
                mahPos.y = lastOutMah:getPositionY()
            else
                mahPos.x = lastOutMah:getPositionX()
                mahPos.y = lastOutMah:getPositionY() + layoutConfig.AddDirectionY * lastOutMah:getTopEdgeWidth()
            end
        end
        zOrder = lastOutMah:getLocalZOrder() - layoutConfig.AddDirectionY
    elseif outMahsTotalCount >= singleLayerMaxCount then
        mahPos.x = 0
        mahPos.y = lastOutMah:getThick() * nowLayerIndex
        if layoutConfig.AddDirectionY > 0 then
            zOrder = singleLayerMaxCount * 2
        else
            zOrder = singleLayerMaxCount + 1
        end
        
    end
    outMah:setScale(layoutConfig.OutMahScale)
    outMah:setAnchorPoint(layoutConfig.AnchorPoint)
    outMah:setPosition(mahPos)
    self:addChild(outMah, zOrder)
    if self:judgeOutAreaEnough() then
        if self._callback then 
            self._callback()
        end
    end
end

function UIMahPlayerOutArea:setOutAreaEnoughCallback(func)
    self._callback = func
end

function UIMahPlayerOutArea:setSingleLineMaxCount(singleLineMaxCount)
    self._singleLineMaxCount = singleLineMaxCount
end

function UIMahPlayerOutArea:setMaxLineCount(maxLineCount)
    self._maxLineCount = maxLineCount
end

return UIMahPlayerOutArea