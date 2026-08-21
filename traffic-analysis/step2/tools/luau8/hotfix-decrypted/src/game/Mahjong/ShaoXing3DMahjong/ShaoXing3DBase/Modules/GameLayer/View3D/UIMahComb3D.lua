local UIMahComb3D = CF.gameClass("UIMahComb3D", "game.Mahjong.BasicMahjong.Modules.GameLayer.View3D.UIMahComb3D")
local MahLogic = CF.gameRequire("Modules.GameLayer.MahLogic")

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
    return self:_sortChowMahValues(showMahValues)
end

function UIMahComb3D:_sortChowMahValues(showMahValues)
    if self:getCombFlag() ~= CF.GameDefine.COMB_FLAG.CHOW then
        return showMahValues
    end
    if CF.roomData:getCurPlayerCount() ~= 2 then
        return showMahValues
    end
    local finalMahValues = showMahValues
    for i = 1, #finalMahValues do
        if self._combData.inMahValue == finalMahValues[i] then
            finalMahValues[i] = finalMahValues[2]
            finalMahValues[2] = self._combData.inMahValue
        end
    end
    return finalMahValues
end

function UIMahComb3D:_isArrowByIconLieType()
    return true
end

return UIMahComb3Dl