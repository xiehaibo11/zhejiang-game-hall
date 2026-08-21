local MahLogic = CF.gameClass("MahLogic")

function MahLogic.checkIsJokerMah(mahValue, jokerValues)
    if mahValue == nil or jokerValues == nil or #jokerValues == 0 then
        return false
    end
    for _, jokerValue in pairs(jokerValues) do
        if mahValue == jokerValue then
            return true
        end
    end
    return false
end

function MahLogic.getRealMahValue(mahValue, jokerValues, insteadValues)
    if mahValue == nil then
        return CF.GameDefine.MAH_VALUE.NONE
    end
    if jokerValues == nil or #jokerValues == 0
    or insteadValues == nil or #insteadValues == 0 then
        return mahValue
    end
    for _, insteadValue in ipairs(insteadValues) do
        if mahValue == insteadValue then
            return jokerValues[1]
        end
    end
    return mahValue
end

function MahLogic.sortMahValues(mahValues, jokerValues, insteadValues)
    if not mahValues then
        return
    end
    jokerValues = jokerValues or {}
    insteadValues = insteadValues or {}
    local sortFunc = function (mahValue1, mahValue2)
        local isJoker1 = MahLogic.checkIsJokerMah(mahValue1, jokerValues)
        local isJoker2 = MahLogic.checkIsJokerMah(mahValue2, jokerValues)
        if isJoker1 and not isJoker2 then
            return true
        end
        if not isJoker1 and isJoker2 then
            return false
        end
        local realMahValue1 = MahLogic.getRealMahValue(mahValue1, jokerValues, insteadValues)
        local realMahValue2 = MahLogic.getRealMahValue(mahValue2, jokerValues, insteadValues)
        return realMahValue1 < realMahValue2
    end
    table.sort(mahValues, sortFunc)
end

function MahLogic.checkMahValueIsFlower(mahValue)
    if mahValue >= CF.GameDefine.MAH_VALUE.HUA_MEI and mahValue <= CF.GameDefine.MAH_VALUE.HUA_JIN_YUAN_BAO then
        return true
    end
    return false
end

function MahLogic.checkLocalSeat(localSeat)
    if localSeat == nil then
        return false
    end
    -- 玩家离开麻将房后，残留触摸事件可能仍触达这里，此时 CF.GameDefine 已被卸载
    if not CF.GameDefine or not CF.GameDefine.LOCAL_SEAT then
        return false
    end
    if localSeat == CF.GameDefine.LOCAL_SEAT.LEFT
    or localSeat == CF.GameDefine.LOCAL_SEAT.RIGHT
    or localSeat == CF.GameDefine.LOCAL_SEAT.TOP
    or localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
        return true
    end
    return false
end

function MahLogic.addPlistSpriteFrames(plistPath)
    if not plistPath then
        return 
    end
    cc.SpriteFrameCache:getInstance():addSpriteFrames(plistPath)
end

-- 是否是正常的麻将牌值
function MahLogic.isNormalMahValue(mahValue)
    if mahValue == nil then
        return false
    end
    if (mahValue >= CF.GameDefine.MAH_VALUE.WAN_1 and mahValue <= CF.GameDefine.MAH_VALUE.WAN_9)
    or (mahValue >= CF.GameDefine.MAH_VALUE.TIAO_1 and mahValue <= CF.GameDefine.MAH_VALUE.TIAO_9)
    or (mahValue >= CF.GameDefine.MAH_VALUE.TONG_1 and mahValue <= CF.GameDefine.MAH_VALUE.TONG_9)
    or (mahValue >= CF.GameDefine.MAH_VALUE.FENG_DONG and mahValue <= CF.GameDefine.MAH_VALUE.FENG_BEI)
    or (mahValue >= CF.GameDefine.MAH_VALUE.JIAN_ZHONG and mahValue <= CF.GameDefine.MAH_VALUE.JIAN_BAI)
    or (mahValue >= CF.GameDefine.MAH_VALUE.HUA_MEI and mahValue <= CF.GameDefine.MAH_VALUE.HUA_JIN_YUAN_BAO) then
        return true
    end
    return false
end

-- 是否是任意牌
function MahLogic.isRenYiMahValue(mahValue)
    if mahValue == nil then
        return false
    end
    return mahValue == 255
end

-- 是否是需要显示牌面的麻将牌类型
function MahLogic.isShowFaceByMahType(mahType)
    if mahType == nil or not CF.GameDefine then
        return false
    end
    if mahType == CF.GameDefine.MAH_TYPE.STAND_FACE_FORWARD
    or mahType == CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP
    or mahType == CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN
    or mahType == CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT
    or mahType == CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT then
        return true
    end
    return false
end

-- 是否是站立牌
function MahLogic.isStandMah(mahType)
    if mahType == nil or not CF.GameDefine then
        return false
    end
    if mahType == CF.GameDefine.MAH_TYPE.STAND_FACE_FORWARD 
    or mahType == CF.GameDefine.MAH_TYPE.STAND_FACE_BACKWARD
    or mahType == CF.GameDefine.MAH_TYPE.STAND_FACE_TOLEFT
    or mahType == CF.GameDefine.MAH_TYPE.STAND_FACE_TORIGHT then
        return true
    end
    return false
end

-- 是否是左边玩家的站立牌或者右边玩家的站立牌
function MahLogic.isLeftOrRightStandMah(mahType)
    if mahType == nil or not CF.GameDefine then
        return false
    end
    if mahType == CF.GameDefine.MAH_TYPE.STAND_FACE_TOLEFT 
    or mahType == CF.GameDefine.MAH_TYPE.STAND_FACE_TORIGHT then
        return true
    end
    return false
end

-- 是否是厚度可变的麻将牌类型
function MahLogic.isCanChangeThick(mahType)
    if mahType == nil or not CF.GameDefine then
        return false
    end
    if mahType == CF.GameDefine.MAH_TYPE.STAND_FACE_FORWARD
    or mahType == CF.GameDefine.MAH_TYPE.STAND_FACE_BACKWARD
    or mahType == CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP
    or mahType == CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN
    or mahType == CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT
    or mahType == CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT
    or mahType == CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL
    or mahType == CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_HORIZONTAL then
        return true
    end
    return false
end

-- 是否是高度可变的麻将牌类型
function MahLogic.isCanChangeHeight(mahType)
    if mahType == nil or not CF.GameDefine then
        return false
    end
    if mahType == CF.GameDefine.MAH_TYPE.STAND_FACE_FORWARD then
        return true
    end
    return false
end

-- 坐标pos是否在node范围内
function MahLogic.isPositionInArea(node, pos)
    if not node or not pos then
        return false
    end
    local nodeBounding = node:getBoundingBox()
    local worldPos = node:getParent():convertToNodeSpace(pos)
    if cc.rectContainsPoint(nodeBounding, worldPos) then
        return true
    end
    return false
end

-- 获取移动角度
function MahLogic.getMoveAngleByPosition(startPos, endPos)
    local distanceX = math.abs(endPos.x - startPos.x)
    local distanceY = math.abs(endPos.y - startPos.y)
    local angle = 0
    if distanceY > 0 and math.sqrt(distanceX ^ 2 + distanceY ^ 2) > 40 then
        if distanceX == 0 then
            angle = 90
        else
            angle = math.deg(math.atan(math.abs(distanceY/distanceX)))  
        end
    end
    return angle
end

-- 判断两个坐标是否相同
function MahLogic.checkSamePosition(pos1, pos2)
    if pos1 and pos1.x and pos1.y and pos2 and pos2.x and pos2.y then
        return pos1.x == pos2.x and pos1.y == pos2.y
    end
    return false
end

-- 移除所有麻将子相关plist缓存
function MahLogic.removeAllMahSpriteFrames()
    local UIMahConfig = CF.gameRequire("Modules.GameLayer.Config.UIMahConfig2D")
    for _, plistPaths in pairs(UIMahConfig.MahBackPlistPath or {}) do
        for _, plistPath in pairs(plistPaths) do
            cc.SpriteFrameCache:getInstance():removeSpriteFramesFromFile(plistPath)
        end
    end
    for _, plistPaths in pairs(UIMahConfig.MahFaceGroundPlistPath or {}) do
        for _, plistPath in pairs(plistPaths) do
            cc.SpriteFrameCache:getInstance():removeSpriteFramesFromFile(plistPath)
        end
    end
    for _, plistPath in pairs(UIMahConfig.MahFacePlistPath or {}) do
        cc.SpriteFrameCache:getInstance():removeSpriteFramesFromFile(plistPath)
    end
end

function MahLogic.checkMahValueIsInTable(mahValue, mahValueTable)
    if not mahValueTable or not mahValue then
        return false, 0
    end
    for index, mv in pairs(mahValueTable) do
        if mv == mahValue then
            return true, index
        end
    end
    return false, 0
end

function MahLogic.checkMahValuesIsInTable(mahValues, mahValueTable)
    if not mahValueTable or not mahValues then
        return false
    end
    local tempMahValueTable = clone(mahValueTable)
    for _, mv in ipairs(mahValues) do
        local isMahValueInTable, mahIndex = MahLogic.checkMahValueIsInTable(mv, tempMahValueTable)
        if not isMahValueInTable then
            return false
        end
        table.remove(tempMahValueTable, mahIndex)
    end
    return true
end

function MahLogic.isTableEqual(table1, table2)
    if #table1 ~= #table2 then
        return false
    end
    local tempTable1 = clone(table1)
    local tempTable2 = clone(table2)
    table.sort(tempTable1)
    table.sort(tempTable2)
    for i, v in ipairs(tempTable1) do
        if tempTable2[i] == nil or tempTable2[i] ~= v then
            return false
        end
    end
    return true
end

function MahLogic.checkIsMahBack(mahValue)
    if mahValue == nil then
        return false
    end
    return mahValue == CF.GameDefine.MAH_VALUE.BACK
end

function MahLogic.checkAllIsMahBack(mahValues)
    if mahValues == nil then
        return false
    end
    for _, mahValue in pairs(mahValues) do
        if not MahLogic.checkIsMahBack(mahValue) then
            return false
        end
    end
    return true
end

function MahLogic.playGLActionAni(node, callback, maxScale) 
    local SpecialHuGL = CF.gameRequire("GLProgram.SpecialHuGL")
    SpecialHuGL.show(node, callback, maxScale)
end

--是否花牌
function MahLogic.isFlowerMahValue(mahValue)
    if mahValue == nil then
        return
    end
    if mahValue >= CF.GameDefine.MAH_VALUE.HUA_MEI and mahValue <= CF.GameDefine.MAH_VALUE.HUA_DONG then
        return true
    end
    return false
end

--是否牌花数字在左边
function MahLogic.isFlowerMahNumberLeft(mahValue)
    if MahLogic.isFlowerMahValue(mahValue) then
        if mahValue >= CF.GameDefine.MAH_VALUE.HUA_CHUN and mahValue <= CF.GameDefine.MAH_VALUE.HUA_DONG then
            return true
        end
    end
    return false
end

--获取花牌数字1-4
function MahLogic.getFlowerNumber(mahValue)
    if mahValue == nil then
        return
    end
    local desNum = mahValue%4
    local tmpnum = desNum == 0 and 4 or desNum
    return tmpnum
end

return MahLogic�)  