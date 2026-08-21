local UIMahLayer3D = CF.gameClass("UIMahLayer3D", "game.Mahjong.BasicMahjong.Modules.GameLayer.View3D.UIMahLayer3D")

function UIMahLayer3D:_checkIsShowActionWithWallMahsCount(wallMahsCnt)
    wallMahsCnt = wallMahsCnt or 0
    return wallMahsCnt == self:_getWallMahsCount() - 1
end

function UIMahLayer3D:_getWallArea()
    local wallArea = UIMahLayer3D.super._getWallArea(self)
    wallArea:setIsKeepBelowOpenMah(false)
    return wallArea
end

function UIMahLayer3D:_getWallStartData(allThrowChips)
    local chips = allThrowChips.nChips[1]
    local chips2 = allThrowChips.nChips[2]
    if not chips or #chips == 0 then
        return
    end

    local bankerSeat =self:getGameData():getBankerSeat()
    if bankerSeat == CF.roomData:getMaxPlayer() then
        return
    end

    local chipTotalValue1 = 0
    for _, chipValue in pairs(chips) do
        chipTotalValue1 = chipTotalValue1 + chipValue
    end

    local chipTotalValue2 = 0
    for _, chipValue in pairs(chips2) do
        chipTotalValue2 = chipTotalValue2 + chipValue
    end

    print(chipTotalValue1.." _chipTotalValue_ "..chipTotalValue2)

    local chipTotalValue = chipTotalValue1 + chipTotalValue2

    local bankerLocalSeat = CF.roomData:seatToLocal(bankerSeat)
    local startTakeData = {}
    startTakeData.startLocalSeat = (bankerLocalSeat + chipTotalValue1 - 1) % 4
    startTakeData.startLocalSeat = startTakeData.startLocalSeat == 0 and 4 or startTakeData.startLocalSeat
    startTakeData.startIndex = chipTotalValue + 1

    local openMahPos = {}
    if chipTotalValue > self:_getWallMahsCountConfig()[1] then --翻牌翻到下一个玩家牌墙上
        openMahPos.mahIndex = openMahPos.mahIndex - self:_getWallMahsCountConfig()[1]
        openMahPos.mahLocalSeat = (bankerLocalSeat + chipTotalValue1 ) % 4
    else
        openMahPos.mahLocalSeat = (bankerLocalSeat + chipTotalValue1 -1) % 4
        openMahPos.mahIndex = chipTotalValue
    end
    openMahPos.mahLocalSeat = openMahPos.mahLocalSeat == 0 and 4 or openMahPos.mahLocalSeat

    return startTakeData, {openMahPos}
end

function UIMahLayer3D:setOpenMahs(openMahs)
    openMahs = openMahs or {}
    local openMahsNode = self._mahsJoker
    if not openMahsNode then
        return
    end
    self:clearOpenMahs()
    local UIMahJokerArea = CF.gameRequire("Modules.GameLayer.View3D.UIMahJokerArea3D")
    self._openMahs = UIMahJokerArea.new()
    self._openMahs:init(openMahsNode)
    local mingMah = self:getGameData():getMingMah()
    self._openMahs:setJokerMahs(openMahs,mingMah)
    self._openMahs:setConfig(self:_getNowConfig2D())
end

function UIMahLayer3D:setWallMahsCountConfigByWallEvent(event)
    if not event.msg then
        return
    end

    local msg = event.msg or {}

    local allWallMahCount = msg.nWallCnt + msg.nDesc  - msg.nFirstDesc + msg.nFirstAsc - msg.nAsc
    local wallOneSide = 17
    if allWallMahCount > 136 then
        wallOneSide = 18
    end
    self._getWallMahsCountConfig = function()
        return {wallOneSide,wallOneSide,wallOneSide,wallOneSide}
    end
end

return UIMahLayer3D[