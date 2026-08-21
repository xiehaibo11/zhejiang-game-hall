local UIMahConfig3D = NG.GAME.gameRequire("Modules.GameMain.MahLayer.Config.UIMahConfig3D")

local UIMahPlayerOutArea3D = NG.GAME.gameClass("UIMahPlayerOutArea3D", "newgold.GoldGames.GoldGameMah.MahXueLiu.Modules.GameMain.MahLayer.View3D.UIMahOutArea3D")

function UIMahPlayerOutArea3D:ctor(localSeat)
    UIMahPlayerOutArea3D.super.ctor(self)

    self._localSeat = localSeat
    self._bShowAsPlayer2 = false
end

function UIMahPlayerOutArea3D:_getLayoutConfig()
    return clone(UIMahConfig3D.OutMahsLayout.FourDirection[self._localSeat])
end

function UIMahPlayerOutArea3D:_addOutMah(outMah)
    if not outMah then
        return
    end
    
    self:addChild(outMah)
end

function UIMahPlayerOutArea3D:_getThisLineStartPos(layerIndex, lineIndex, mah)
    local layoutConfig = self:_getLayoutConfig()
    local MahsCount = self:_getMahsCountTable()
    local countData = MahsCount[lineIndex]
    if not mah or not countData then
        return cc.vec3(0,0,0)
    end

    local startPos = cc.vec3(0, 0, mah:getDistanceZ() * (layerIndex - 1/2))
    if layoutConfig.IsAddX then
        startPos.x = countData.StartIndex * mah:getDistanceX() * layoutConfig.AddDirectionX
        startPos.y = (lineIndex - 1) * mah:getDistanceY() * layoutConfig.AddDirectionY
    else
        startPos.y = countData.StartIndex * mah:getDistanceY() * layoutConfig.AddDirectionY
        startPos.x = (lineIndex - 1) * mah:getDistanceX() * layoutConfig.AddDirectionX
    end
    return startPos
end

function UIMahPlayerOutArea3D:_getMahsCountTable()
    local layoutConfig = self:_getLayoutConfig()
    local MahsCount = layoutConfig.MahsCount
    if self._bShowAsPlayer2 and layoutConfig.MahsCount2 then
        MahsCount = layoutConfig.MahsCount2
    end
    return MahsCount
end

function UIMahPlayerOutArea3D:_updateMahsPosition(mahs, layerIndex)
    local showMahs = clone(mahs)
    local layoutConfig = self:_getLayoutConfig()
    local MahsCount = self:_getMahsCountTable()
    for lineIndex, countData in ipairs(MahsCount) do
        if #showMahs <= 0 then
            return
        end
        local totalMahWidth = 0
        local startPos = self:_getThisLineStartPos(layerIndex, lineIndex, showMahs[1])
        for _ = 1, countData.Count do
            if #showMahs <= 0 then
                return
            end
            local mah = showMahs[1]
            local mahPos = cc.vec3(startPos.x, startPos.y, startPos.z)
            if layoutConfig.IsAddX then
                mahPos.x = startPos.x + layoutConfig.AddDirectionX * (totalMahWidth + mah:getDistanceX()/2)
                totalMahWidth = totalMahWidth + mah:getDistanceX()
            else
                mahPos.y = startPos.y + layoutConfig.AddDirectionY * (totalMahWidth + mah:getDistanceY()/2)
                totalMahWidth = totalMahWidth + mah:getDistanceY()
            end
            mah:setInitPosition3D(mahPos.x, mahPos.y, mahPos.z)
            mah:setPosition3D(mahPos)
            table.remove(showMahs, 1)
        end
    end

    if #showMahs > 0 then
        self:_updateMahsPosition(showMahs, layerIndex + 1)
    end
end

function UIMahPlayerOutArea3D:showAsPlayer2(bShowAsPlayer2)
    self._bShowAsPlayer2 = bShowAsPlayer2 == nil and true or bShowAsPlayer2

    self:_updateMahsPosition(clone(self._allOutMahs), 1)
end

return UIMahPlayerOutArea3D