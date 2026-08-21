local UIMah3D = CF.gameRequire("Modules.GameLayer.View3D.UIMah3D")
local MahLogic = CF.gameRequire("Modules.GameLayer.MahLogic")

local UIMahComb3D = CF.gameClass("UIMahComb3D", "game.Mahjong.BasicMahjong.Modules.GameLayer.ViewBase.UIMahCombBase")

function UIMahComb3D:ctor(showLocalSeat, combData, realLocalSeat)
    self._config = {}
    UIMahComb3D.super.ctor(self, showLocalSeat, combData, realLocalSeat)
end

function UIMahComb3D:_getUIConfig()
    if not self._UIConfig then
        self._UIConfig = CF.gameRequire("Modules.GameLayer.Config.UIMahConfig3D")
    end
    return self._UIConfig
end

function UIMahComb3D:_getArrowMahIndex()
    if not MahLogic.checkLocalSeat(self._combData.fromLocalSeat) then
        return 0
    end
    return (self:getRealLocalSeat() - self._combData.fromLocalSeat + 4) % 4
end

function UIMahComb3D:_getMahType(bShowBack, bUsedByArrow)
    if bShowBack then
        return self:_getCombLayoutConf().FaceDown
    elseif bUsedByArrow and MahLogic.checkLocalSeat(self._combData.fromLocalSeat) then
        return self:_getCombLayoutConf().FaceUp[self._combData.fromLocalSeat].MahType
    else
        return self:_getCombLayoutConf().FaceUp[self:getRealLocalSeat()].MahType
    end
end

function UIMahComb3D:_createMah(mahValue, bUsedByArrow)
    local bShowBack = not MahLogic.isNormalMahValue(mahValue)
    local mahType = self:_getMahType(bShowBack, bUsedByArrow)
    local mah = UIMah3D.new(mahType, mahValue)
    mah:setCameraMask(self:getCameraMask())
    self:updateMahJokerIcon(mah)
    mah:setLightMask(cc.LightFlag.LIGHT3)
    mah:setMahColor(self._config.mahColorFalg)
    return mah
end

function UIMahComb3D:_getCombLayoutConf()
    local localSeat = self:getShowLocalSeat()
    return self:_getUIConfig().CombMahLayout[localSeat]
end

function UIMahComb3D:_resetMahs()
    self:_clearAllMahs()

    local showMahValues = self:getShowMahValues()
    for index, mahValue in ipairs(showMahValues) do
        if index > self:_getUIConfig().MaxCombMahsCount then
            break
        end
        local isUsedByArrow = self:_getArrowMahIndex() == index
        local mah = self:_createMah(mahValue, isUsedByArrow)
        self:addChild(mah)
        table.insert(self._allMahs, mah)
    end
    self:_addIconDirection(self._allMahs)
    self:_updateMahsPosition()
end

function UIMahComb3D:_getAddDirection()
    local layoutConf = self:_getCombLayoutConf()
    return layoutConf.IsForwardAdd and 1 or -1
end

function UIMahComb3D:_isAddX()
    local layoutConf = self:_getCombLayoutConf()
    return layoutConf.IsAddX
end

function UIMahComb3D:_updateMahsPosition()
    local addDirection = self:_getAddDirection()
    local startPosX = 0
    local startPosY = 0
    for index, mah in ipairs(self._allMahs) do
        local mahPos = cc.vec3(0,0,0)
        if index > self.SingleLayerMahCount then
            local alignMahIndex = self:_getAlignMahIndex(index)
            local alignMah = self._allMahs[alignMahIndex]
            local alignMahPos = alignMah:getPosition3D()
            mahPos.x = alignMahPos.x
            mahPos.y = alignMahPos.y
            mahPos.z = alignMahPos.z + alignMah:getDistanceZ()/2 + mah:getDistanceZ()/2
        else
            if self:_isAddX() then
                mahPos.x = startPosX + addDirection * mah:getDistanceX() / 2
                mahPos.y = -addDirection * (self:_getUIConfig().MahModelSize.Height - mah:getDistanceY()) / 2
                startPosX = startPosX + addDirection * mah:getDistanceX()
            else
                mahPos.x = addDirection * (self:_getUIConfig().MahModelSize.Height - mah:getDistanceX()) / 2
                mahPos.y = startPosY + addDirection * mah:getDistanceY() / 2
                startPosY = startPosY + addDirection * mah:getDistanceY()
            end
            mahPos.z = mah:getDistanceZ()/2
        end
        mah:setPosition3D(mahPos)
    end
end

function UIMahComb3D:_getAlignMahIndex(index)
    local arrowMahIndex = self:_getArrowMahIndex()
    local localSeat = self:getShowLocalSeat()
    local alignMahIndex = self:_getUIConfig().CombAlignIndexConfig[localSeat][arrowMahIndex][index-self.SingleLayerMahCount] or 1
    return alignMahIndex
end

function UIMahComb3D:getTotalWidth()
    local totalWidth = 0
    for i = 1, self.SingleLayerMahCount do
        if not self._allMahs[i] then
            break
        end
        if self:_isAddX() then
            totalWidth = totalWidth + self._allMahs[i]:getDistanceX()
        else
            totalWidth = totalWidth + self._allMahs[i]:getDistanceY()
        end
    end
    return totalWidth * self:getScale()
end

function UIMahComb3D:showLastOutMahCursor(getCursorFunc)
    if not getCursorFunc then
        return
    end
    for _, mah in ipairs(self._allMahs) do
        if mah:getMahValue() == self._combData.inMahValue then
            local cursorImg = getCursorFunc()
            cursorImg:setCameraMask(mah:getCameraMask())
            mah:addChild(cursorImg)
            return
        end
    end
end

function UIMahComb3D:setMahColor(colorFlag)
    self._config.mahColorFalg = colorFlag

    self:_updateMahColor()
end

function UIMahComb3D:_updateMahColor()
    for _, mah in pairs(self._allMahs) do
        mah:setMahColor(self._config.mahColorFalg)
    end
end

function UIMahComb3D:_addIconDirection(lieMahs)
    local mah = nil
    if self:getCombFlag() == CF.GameDefine.COMB_FLAG.MKONG or self:getCombFlag() == CF.GameDefine.COMB_FLAG.TKONG then
        mah = lieMahs[4]
    elseif self:getCombFlag() ~= CF.GameDefine.COMB_FLAG.CKONG then
        mah = lieMahs[2]
    end
    local fromLocalSeat = self._combData.fromLocalSeat
    if mah and MahLogic.checkLocalSeat(fromLocalSeat) and self._localSeat ~= fromLocalSeat and self:_isArrowByIconLieType() then
        if cc.FileUtils:getInstance():isFileExist("res/animation/Mahjong/Base/jiantou_ani/jiantou.c3b") then
            local arrow = cc.Sprite3D:create("res/animation/Mahjong/Base/jiantou_ani/jiantou.c3b")
            arrow:setRotation3D(cc.vec3(0, 0, - fromLocalSeat * 90))
            arrow:setScale(1)
            arrow:setPosition3D(cc.vec3(0, 0, 1))
            arrow:setCameraMask(self:_getUIConfig().DeskCameraMask)
            arrow:setLightMask(cc.LightFlag.LIGHT3)
            arrow:setName("arrow")
            mah:addChild(arrow)
        end
    end
end

function UIMahComb3D:_isArrowByIconLieType()
    return false
end

function UIMahComb3D:getShowMahValues()
    local backUpMahIndexs = self._combData.showBackIndexs or {}
    local mahValues = clone(self._combData.mahValues or {})
    local inMahValue = self._combData.inMahValue or CF.GameDefine.MAH_VALUE.NONE
    local showMahValues = {}
    local bFindInMah = false
    if self:_isNeedShowArrowByMah() then
        if inMahValue ~= CF.GameDefine.MAH_VALUE.NONE then
            table.insert(showMahValues, inMahValue)
            for index, mahValue in ipairs(mahValues) do
                if mahValue == inMahValue and not bFindInMah then
                    table.remove(mahValues, index)
                    bFindInMah = true
                end
            end
        end
    end
    for index, mahValue in ipairs(mahValues) do
        if MahLogic.checkMahValueIsInTable(index ,backUpMahIndexs) then
            table.insert(showMahValues, CF.GameDefine.MAH_VALUE.BACK)
        else
            table.insert(showMahValues, mahValue)
        end
    end
    return showMahValues
end

function UIMahComb3D:_isNeedShowArrowByMah()
    if not self:_isArrowByIconLieType() then
        return false
    end
    if not MahLogic.checkLocalSeat(self._combData.fromLocalSeat) then
        return false
    end
    if self:getCombFlag() == CF.GameDefine.COMB_FLAG.CKONG then
        return false
    end
    return true
end

return UIMahComb3D