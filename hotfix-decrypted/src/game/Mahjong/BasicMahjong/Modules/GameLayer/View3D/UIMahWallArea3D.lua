local UIMah3D = CF.gameRequire("Modules.GameLayer.View3D.UIMah3D")
local UIMahConfig3D = CF.gameRequire("Modules.GameLayer.Config.UIMahConfig3D") 
local MahLogic = CF.gameRequire("Modules.GameLayer.MahLogic")

local UIMahWallArea3D = CF.gameClass("UIMahWallArea3D", CF.ViewBase)

local WallActionStep = {
    Step1 = 1,
    Step2 = 2,
    Step3 = 3,
}

function UIMahWallArea3D:ctor()
    self._config = {}
    self:initData()
    self:setCameraMask(UIMahConfig3D.DeskCameraMask)
end

function UIMahWallArea3D:reset()
    self:clearAllMahs()
    self:initData()
end

function UIMahWallArea3D:initData()
    self._allMahs = {}
    self._mahCountConfig = {}       -- 每个方位的牌墩数
    self._startLocalSeat = nil      -- 开始抓牌的视图位置
    self._startIndex = nil          -- 开始抓牌的墩数序号
    self._openMahsPos = {}          -- 翻开牌的位置
    self._openMahValues = {}        -- 翻开牌的牌值
    self._delMahsTempData = nil     -- 临时保存的需要删除的麻将数据
    self._bRunningAction = false    -- 是否正在执行动作
    self._bKeepBelowOpenMah = false -- 是否保持翻开牌下方的那张牌不删除
    self._delMahsCount = {
        asc = 0,
        desc = 0
    }   -- 已经删除的牌数
    self._bInit = false
end

-- 是否保持翻开牌下方的那张牌不删除
function UIMahWallArea3D:setIsKeepBelowOpenMah(bKeepBelowOpenMah)
    if bKeepBelowOpenMah == nil then
        return
    end
    self._bKeepBelowOpenMah = bKeepBelowOpenMah
end

-- 初始化牌墙
function UIMahWallArea3D:initWall(mahCountConfig, bShowAction)
    if not mahCountConfig then
        return
    end
    
    if self._bRunningAction or self._bInit then
        return
    end
    self._bInit = true

    self:clearAllMahs()

    for localSeat, mahCount in ipairs(mahCountConfig) do
        self:_createWallByLocalSeat(localSeat, mahCount)
    end

    if bShowAction then
        self:_showWallByAction()
    end

    self._mahCountConfig = mahCountConfig
end

-- 设置翻开牌的牌值
function UIMahWallArea3D:setOpenMahValues(openMahValues)
    if not openMahValues then
        return
    end
    self._openMahValues = openMahValues
    self:_updateOpenMahs()
    self:_checkDelTempData()
end

-- 添加翻开牌的牌值
function UIMahWallArea3D:addOpenMahValue(openMahValue)
    if not openMahValue then
        return
    end
    self._openMahValues = self._openMahValues or {}
    table.insert(self._openMahValues, openMahValue)
    self:_updateOpenMahs()
    self:_checkDelTempData()
end

function UIMahWallArea3D:_updateOpenMahs()
    if self._bRunningAction then
        return
    end
    if #self._openMahValues == 0 or #self._openMahsPos == 0 then
        return
    end
    for index, openMahPos in ipairs(self._openMahsPos) do
        if self._openMahValues[index] then
            self:_doOpenMah(openMahPos.mahLocalSeat, openMahPos.mahIndex, self._openMahValues[index], openMahPos.bAbove)
        end
    end
end

function UIMahWallArea3D:_doOpenMah(mahLocalSeat, mahIndex, mahValue, bAbove)
    if not mahLocalSeat 
    or not mahIndex
    or not mahValue
    or not self._allMahs[mahLocalSeat]
    or not self._allMahs[mahLocalSeat][mahIndex] then
        return
    end

    local aboveFlag = self:_getAboveFlag(bAbove)
    local openMah = self._allMahs[mahLocalSeat][mahIndex][aboveFlag]
    if not openMah then
        return
    end

    local layoutConf = UIMahConfig3D.WallAreaLayout[mahLocalSeat]
    if not layoutConf then
        return
    end

    openMah:stopAllActions()
    openMah:setMahTypeAndValue(layoutConf.OpenMahType, mahValue)
end

function UIMahWallArea3D:_getActionPosition3D(stepIndex, localSeat, mah)
    local layoutConf = UIMahConfig3D.WallAreaLayout[localSeat]
    if not layoutConf then
        return
    end
    local initPos = mah:getInitPosition3D()
    local WallActionDistance = UIMahConfig3D.WallLiftingPlatformDis.h
    local addX = layoutConf.CenterPos.x > 0 and WallActionDistance or -WallActionDistance
    local addY = layoutConf.CenterPos.y > 0 and WallActionDistance or -WallActionDistance
    local addZ = stepIndex ~= WallActionStep.Step3 and -WallActionDistance or 0
    addX = stepIndex == WallActionStep.Step1 and addX or 0
    addY = stepIndex == WallActionStep.Step1 and addY or 0
    if layoutConf.IsAddX then
        return cc.vec3(initPos.x, initPos.y + addY, initPos.z + addZ)
    else
        return cc.vec3(initPos.x + addX, initPos.y, initPos.z + addZ)
    end
end

function UIMahWallArea3D:_showWallByAction()
    local doActionTime = 0
    for localSeat, localSeatMahs in pairs(self._allMahs) do
        for _, mahs in pairs(localSeatMahs) do
            for _, mah in pairs(mahs) do
                mah:stopAllActions()
                local pos1 = self:_getActionPosition3D(WallActionStep.Step1, localSeat, mah)
                mah:setPosition3D(pos1)
                local act1 = cc.DelayTime:create(0.5) 
                local pos2 = self:_getActionPosition3D(WallActionStep.Step2, localSeat, mah)
                local act2 = cc.MoveTo:create(0.5, pos2)
                local pos3 = self:_getActionPosition3D(WallActionStep.Step3, localSeat, mah)
                local act3 = cc.MoveTo:create(0.5, pos3)
                mah:runAction(cc.Sequence:create(act1, act2, act3))
                doActionTime = 1.5
            end
        end
    end

    if doActionTime > 0 then
        self._bRunningAction = true
        CF.SysTool.performWithDelayGlobal(function ()
            self._bRunningAction = false
            self:_updateMahsWithInitPosition()
            self:_updateOpenMahs()
            self:_checkDelTempData()
        end, doActionTime + 0.02)
    end
end

function UIMahWallArea3D:_updateMahsWithInitPosition()
    for _, localSeatMahs in pairs(self._allMahs) do
        for _, mahs in pairs(localSeatMahs) do
            for _, mah in pairs(mahs) do
                local initPos = mah:getInitPosition3D()
                mah:stopAllActions()
                mah:setPosition3D(initPos)
            end
        end
    end
end

function UIMahWallArea3D:_createWallByLocalSeat(localSeat, mahCount)
    for index = 1, mahCount do
        for i = 1, 2 do
            self:_addMahToLocalSeat(localSeat, mahCount, index, i == 2)
        end
    end
end

function UIMahWallArea3D:_getAboveFlag(bAbove)
    if bAbove == nil then
        bAbove = true
    end
    return bAbove and 2 or 1
end

function UIMahWallArea3D:_addMahToLocalSeat(localSeat, mahCount, index, bAbove)
    if not self._allMahs[localSeat] then
        self._allMahs[localSeat] = {}
    end
    local mah = self:_createMah(localSeat, mahCount, index, bAbove)
    if mah then
        self:addChild(mah)
        if not self._allMahs[localSeat][index] then
            self._allMahs[localSeat][index] = {}
        end
        local aboveFlag = self:_getAboveFlag(bAbove)
        self._allMahs[localSeat][index][aboveFlag] = mah
    end
end

function UIMahWallArea3D:_clearMahsByLocalSeat(localSeat)
    if not self._allMahs[localSeat] then
        return
    end
    for _, mahs in pairs(self._allMahs[localSeat]) do
        for _, mah in pairs(mahs) do
            mah:stopAllActions()
            mah:removeFromParent()
        end
    end
    self._allMahs[localSeat] = nil
end

function UIMahWallArea3D:clearAllMahs()
    for localSeat, _ in pairs(self._allMahs) do
        self:_clearMahsByLocalSeat(localSeat)
    end
end

function UIMahWallArea3D:_createMah(localSeat, mahCount, index, bAbove)
    local layoutConf = UIMahConfig3D.WallAreaLayout[localSeat]
    if not layoutConf then
        return nil
    end
    local mah=UIMah3D.new(layoutConf.MahType)
    local posX = layoutConf.CenterPos.x
    local posY = layoutConf.CenterPos.y
    local posZ = UIMahConfig3D.MahModelSize.Thick / 2
    local addDirection = layoutConf.IsForwardAdd and 1 or -1
    local mahWidth = UIMahConfig3D.MahModelSize.Width
    if layoutConf.IsAddX then
        posX = layoutConf.CenterPos.x  + (mahWidth*(index-1/2) - mahWidth*(mahCount/2)) * addDirection
    else
        posY = layoutConf.CenterPos.y  + (mahWidth*(index-1/2) - mahWidth*(mahCount/2)) * addDirection
    end
    if bAbove then
        posZ = UIMahConfig3D.MahModelSize.Thick * 3/2
    end
    mah:setCameraMask(self:getCameraMask())
    mah:setInitPosition3D(posX, posY, posZ)
    mah:setPosition3D(cc.vec3(posX, posY, posZ))
    mah:setMahColor(self._config.mahColorFalg)
    return mah
end

function UIMahWallArea3D:_getNextLocalSeat(localSeat, bDesc)
    local tempLocalSeat = (localSeat - 1 + 4) % 4
    if bDesc then
        tempLocalSeat = (localSeat + 1 + 4) % 4
    end
    return tempLocalSeat == 0 and 4 or tempLocalSeat
end

-- 设置开始抓牌的数据
function UIMahWallArea3D:setStartTakeData(startTakeData, openMahsPos)
    if not startTakeData or not startTakeData.startLocalSeat or not startTakeData.startIndex then
        return
    end
    self._startLocalSeat = startTakeData.startLocalSeat
    self._startIndex = startTakeData.startIndex
    while true do
        local tempWallCount = self._mahCountConfig[self._startLocalSeat]
        if self._startIndex <= tempWallCount then
            break
        end
        self._startIndex = self._startIndex - tempWallCount
        self._startLocalSeat = self:_getNextLocalSeat(self._startLocalSeat)
    end
    
    self._openMahsPos = openMahsPos or {}
    self:_updateOpenMahs()

    self:_checkDelTempData()
end

function UIMahWallArea3D:_checkDelTempData()
    if self._bRunningAction then
        return
    end
    if not self._delMahsTempData then
        return
    end
    if not self._startIndex or not self._startLocalSeat then
        return
    end
    -- 需要设置翻开牌，但是翻开牌的牌值还未设置成功
    if #self._openMahsPos > 0 and #self._openMahValues < #self._openMahsPos then
        return
    end
    for _, delData in ipairs(self._delMahsTempData) do
        self:_delMahs(delData.bDesc, delData.mahCount)
    end
    self._delMahsTempData = nil
end

function UIMahWallArea3D:_getLocalSeatMaxMahCount(localSeat)
    return self._mahCountConfig[localSeat] or 0
end

function UIMahWallArea3D:_delMahByLocalSeat(localSeat, startIndex, bDesc)
    local thisSeatMaxCount = self:_getLocalSeatMaxMahCount(localSeat)
    local delIndex = startIndex
    while delIndex >= 1 and delIndex <= thisSeatMaxCount do
        if self:_delMah(localSeat, delIndex) then
            return true
        end
        if bDesc then
            delIndex = delIndex - 1
        else
            delIndex = delIndex + 1
        end
    end
    return false
end

function UIMahWallArea3D:_delMah(localSeat, index)
    local localSeatMahs = self._allMahs[localSeat]
    if not localSeatMahs then
        return false
    end

    local mahs = localSeatMahs[index]
    if not mahs then
        return false
    end

    local tempMah
    for i = 2, 1, -1 do
        -- 只删除显示为牌背的牌
        if mahs[i] and MahLogic.checkIsMahBack(mahs[i]:getMahValue()) then
            if tempMah then
                if self._bKeepBelowOpenMah then
                    return false
                end
                -- 如果上面的一张牌未删除，则将其移至下面一层
                tempMah:setPosition3D(mahs[i]:getPosition3D())
            end
            mahs[i]:stopAllActions()
            mahs[i]:removeFromParent()
            mahs[i] = nil
            return true
        end
        tempMah = mahs[i]
    end
    return false
end

-- bDesc : 是否反向抓取
function UIMahWallArea3D:_delSingleMah(bDesc)
    if not self._startIndex or not self._startLocalSeat then
        return
    end
    local delLocalSeat = self._startLocalSeat
    local startIndex = not bDesc and self._startIndex or self._startIndex-1
    if startIndex < 1 then
        delLocalSeat = self:_getNextLocalSeat(delLocalSeat, bDesc)
        startIndex = self:_getLocalSeatMaxMahCount(delLocalSeat)
    end
    local bTurnCircle = false
    while true do
        if self:_delMahByLocalSeat(delLocalSeat, startIndex, bDesc) then
            if bDesc then
                self._delMahsCount.desc = self._delMahsCount.desc + 1
            else
                self._delMahsCount.asc = self._delMahsCount.asc + 1
            end
            return 
        end
        if bTurnCircle then
            -- 如果循环一圈还未删除成功，则删除失败
            return
        end
        delLocalSeat = self:_getNextLocalSeat(delLocalSeat, bDesc)
        bTurnCircle = delLocalSeat == self._startLocalSeat
        startIndex = not bDesc and 1 or self:_getLocalSeatMaxMahCount(delLocalSeat)
    end
end

function UIMahWallArea3D:_delMahs(bDesc, mahCount)
    local delCount = mahCount or 1
    local tempDesc = bDesc == nil and false or bDesc
    for _ = 1, delCount do
        self:_delSingleMah(tempDesc)
    end
end

-- 删除麻将牌
function UIMahWallArea3D:delMahs(bDesc, mahCount)
    if self._bRunningAction or not self._startLocalSeat or not self._startIndex then
        self._delMahsTempData = self._delMahsTempData or {}
        table.insert(self._delMahsTempData, {bDesc = bDesc, mahCount = mahCount})
        return
    end
    self:_delMahs(bDesc, mahCount)
end

-- 设置删除麻将牌数
function UIMahWallArea3D:setDelMahsCount(delData)
    self._delMahsTempData = nil
    if self._delMahsCount.desc < delData.desc then
        self:delMahs(true, delData.desc - self._delMahsCount.desc)
    end
    if self._delMahsCount.asc < delData.asc then
        self:delMahs(false, delData.asc - self._delMahsCount.asc)
    end
end

function UIMahWallArea3D:setMahColor(colorFlag)
    self._config.mahColorFalg = colorFlag

    self:_updateMahColor()
end

function UIMahWallArea3D:_updateMahColor()
    for _, localSeatMahs in pairs(self._allMahs) do
        for _, mahs in pairs(localSeatMahs) do
            for _, mah in pairs(mahs) do
                mah:setMahColor(self._config.mahColorFalg)
            end
        end
    end
end

function UIMahWallArea3D:_fillWallByLocalSeat(localSeat, mahCount)
    for index = 1, mahCount do
        for i = 1, 2 do
            if self._allMahs[localSeat][index][i] == nil then
                self:_addMahToLocalSeat(localSeat, mahCount, index, i == 2)
            end
        end
    end

    self._delMahsCount.asc = 0
    self._delMahsCount.desc = 0
end

function UIMahWallArea3D:refillWall(mahCountConfig)
    if not mahCountConfig then
        return
    end

    for localSeat, mahCount in ipairs(mahCountConfig) do
        self:_fillWallByLocalSeat(localSeat, mahCount)
    end
end


return UIMahWallArea3D;  