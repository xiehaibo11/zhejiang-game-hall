local UIMahLayer3D = CF.gameClass("UIMahLayer3D", "game.Mahjong.ShengZhou.ShengZhouMahjong.Modules.GameLayer.View3D.UIMahLayer3D")

function UIMahLayer3D:_getWallMahsCountConfig()
    return {18,18,18,18}
end

function UIMahLayer3D:_checkIsShowActionWithWallMahsCount(wallMahsCnt)
    wallMahsCnt = wallMahsCnt or 0
    return wallMahsCnt == self:_getWallMahsCount() - 1
end

function UIMahLayer3D:_getWallArea()
    local wallArea = UIMahLayer3D.super._getWallArea(self)
    wallArea:setIsKeepBelowOpenMah(true)
    return wallArea
end

function UIMahLayer3D:_getWallStartData(chips)
    if not chips or #chips == 0 then
        return
    end

    local bankerSeat = self:getGameData():getBankerSeat()
    if bankerSeat == CF.roomData:getMaxPlayer() then
        return
    end

    local chipTotalValue = 0
    local minChipValue
    local maxChipValue
    for _, chipValue in pairs(chips) do
        chipTotalValue = chipTotalValue + chipValue
        if not minChipValue or chipValue < minChipValue then
            minChipValue = chipValue
        end
        if not maxChipValue or chipValue > maxChipValue then
            maxChipValue = chipValue
        end
    end
    local bankerLocalSeat = CF.roomData:seatToLocal(bankerSeat)
    local startTakeData = {}
    startTakeData.startLocalSeat = (bankerLocalSeat + chipTotalValue - 1) % 4
    startTakeData.startLocalSeat = startTakeData.startLocalSeat == 0 and 4 or startTakeData.startLocalSeat
    startTakeData.startIndex = minChipValue + 1

    local openMahPos = {}
    openMahPos.mahLocalSeat = (bankerLocalSeat + chipTotalValue) % 4
    openMahPos.mahLocalSeat = openMahPos.mahLocalSeat == 0 and 4 or openMahPos.mahLocalSeat
    openMahPos.mahIndex = minChipValue

    return startTakeData, {openMahPos}
end

return UIMahLayer3D