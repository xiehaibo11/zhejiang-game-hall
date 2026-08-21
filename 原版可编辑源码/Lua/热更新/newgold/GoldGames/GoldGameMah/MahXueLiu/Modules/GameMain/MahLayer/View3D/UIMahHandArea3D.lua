local UIMahConfig3D = NG.GAME.gameRequire("Modules.GameMain.MahLayer.Config.UIMahConfig3D")
local UIMah3D = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View3D.UIMah3D")
local UIMahComb3D = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View3D.UIMahComb3D")

local UIMahHandArea3D = NG.GAME.gameClass("UIMahHandArea3D", "newgold.GoldGames.GoldGameMah.MahXueLiu.Modules.GameMain.MahLayer.ViewBase.UIMahHandAreaBase")

function UIMahHandArea3D:ctor(localSeat)
    self._config = {}
    UIMahHandArea3D.super.ctor(self, localSeat)

    self:setCameraMask(UIMahConfig3D.DeskCameraMask, false)
end

function UIMahHandArea3D:_initView()
    
end

-- 获取麻将牌类型
function UIMahHandArea3D:_getHandMahType(bStand)
    if self._localSeat == NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM then
        return bStand and NG.GAME.GameDefine.MAH_TYPE.STAND_FACE_FORWARD or NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP
    elseif self._localSeat == NG.GAME.GameDefine.LOCAL_SEAT.RIGHT then
        return bStand and NG.GAME.GameDefine.MAH_TYPE.STAND_FACE_TORIGHT or NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT
    elseif self._localSeat == NG.GAME.GameDefine.LOCAL_SEAT.TOP then
        return bStand and NG.GAME.GameDefine.MAH_TYPE.STAND_FACE_BACKWARD or NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN
    elseif self._localSeat == NG.GAME.GameDefine.LOCAL_SEAT.LEFT then
        return bStand and NG.GAME.GameDefine.MAH_TYPE.STAND_FACE_TOLEFT or NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT
    end
end

function UIMahHandArea3D:_createMah(mahValue, bStand)
    local mahType = self:_getHandMahType(bStand or false)
    local mah = UIMah3D.new(mahType, mahValue)
    mah:setCameraMask(self:_getHandMahCameraMask())
    mah:setScale(self:_getLayoutConfig().HandMahsScale[self._maxHandMahCount])
    mah:setLightMask(cc.LightFlag.LIGHT0)
    mah:setMahColor(self._config.mahColorFalg)
    if mahValue ~= nil then
        self:updateMahJokerIcon(mah)
    end
    return mah
end

function UIMahHandArea3D:_getLayoutConfig()
    return clone(UIMahConfig3D.HandAreaLayout[self._localSeat]) or {}
end

function UIMahHandArea3D:_getCombCameraMask()
    return UIMahConfig3D.DeskCameraMask
end

function UIMahHandArea3D:_getHandMahCameraMask()
    if self._localSeat == NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM then
        return UIMahConfig3D.SelfHandCameraMask
    end
    return UIMahConfig3D.DeskCameraMask
end

function UIMahHandArea3D:_getHandMahsStartPos()
    local layoutConf = self:_getLayoutConfig()
    local startPos = layoutConf.HandMahsStartPos[self._maxHandMahCount]
    if self:_isCombsAtLeft() then
        local combsTotalWidth = #self._combs * UIMahComb3D.SingleLayerMahCount * UIMahConfig3D.MahModelSize.Width
        if self._localSeat ~= NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM then
            combsTotalWidth = self:_getCombsTotalWidth()
        end
        local addDirection = layoutConf.IsForwardAdd and 1 or -1 
        if layoutConf.IsAddX then
            startPos.x = startPos.x + combsTotalWidth * addDirection
        else
            startPos.y = startPos.y + combsTotalWidth * addDirection
        end
    end
    return startPos
end

function UIMahHandArea3D:_updateHandMahsPosition(bShowAction)
    if #self._handMahs <= 0 then
        return
    end

    local layoutConf = self:_getLayoutConfig()
    local addDirection = layoutConf.IsForwardAdd and 1 or -1
    local startPos = self:_getHandMahsStartPos()
    local totalMahWidth = 0
    local doActionTime = 0
    for _, mah in ipairs(self._handMahs) do
        local mahPos = cc.vec3(startPos.x, startPos.y, mah:getDistanceZ()/2)
        if layoutConf.IsAddX then
            mahPos.x = startPos.x + addDirection * (totalMahWidth + mah:getDistanceX()/2)
            totalMahWidth = totalMahWidth + mah:getDistanceX()
        else
            mahPos.y = startPos.y + addDirection * (totalMahWidth + mah:getDistanceY()/2)
            totalMahWidth = totalMahWidth + mah:getDistanceY()
        end
        mah:setInitPosition3D(mahPos.x, mahPos.y, mahPos.z)

        if bShowAction then
            local mahIndex = self:_getMahIndexInHandMahs(mah)
            local tempAniTime
            if mah.bBianPai and (mahPos.x~= mah:getPositionX() or mahPos.y~= mah:getPositionY() or mahPos.z~= mah:getPosition().z) then
                -- 贝塞尔曲线飞单放牌
                tempAniTime = self:_flyMahBezierTo(mah, mahIndex)
            else
                if (not self._tempDanFangMah or self._tempDanFangMah ~= mah) then
                    -- 非单放牌，直接移动
                    tempAniTime = self:_doMahMoveTo(mah)
                elseif mahIndex == #self._handMahs then
                    -- 是单放牌，但是单放为最后一张，也直接移动
                    tempAniTime = self:_doMahMoveTo(mah)
                else
                    -- 贝塞尔曲线飞单放牌
                    tempAniTime = self:_flyMahBezierTo(mah, mahIndex)
                end
            end

            if tempAniTime > doActionTime then
                doActionTime = tempAniTime
            end
            self._bRunningAction = true
        else
            mah:stopAllActions()
            mah:setRotation3D(cc.vec3( 0, 0, 0 ))
            mah:setPosition3D(mahPos)
        end
        mah.bBianPai = false
    end

    -- 触发与动画时长相等的延迟动画
    self._tempDanFangMah = nil
    if doActionTime > 0 then
        self:performWithDelay(function ()
            self:_onFinishAllMahsAction()
            self._bRunningAction = false
        end, doActionTime + 0.02)
    end

    if self._danFangMah then
        local mahPos = cc.vec3(startPos.x, startPos.y, self._danFangMah:getDistanceZ()/2)
        if layoutConf.IsAddX then
            mahPos.x = startPos.x + addDirection * (totalMahWidth + 1 + self._danFangMah:getDistanceX()/2)
        else
            mahPos.y = startPos.y + addDirection * (totalMahWidth + 1 + self._danFangMah:getDistanceY()/2)
        end
        self._danFangMah:setInitPosition3D(mahPos.x, mahPos.y, mahPos.z)
        self._danFangMah:setPosition3D(mahPos)
    end
end

function UIMahHandArea3D:_createComb(combData)
    local newComb = UIMahComb3D.new(self._localSeat, combData)
    newComb:setCameraMask(self:_getCombCameraMask())
    newComb:setScale(self:_getLayoutConfig().CombScale[self._maxHandMahCount])
    newComb:setMahColor(self._config.mahColorFalg)
    return newComb
end

function UIMahHandArea3D:_getCombStartPos()
    local layoutConf = self:_getLayoutConfig()
    local startPos = layoutConf.CombsStartPos[self._maxHandMahCount]
    return startPos
end

function UIMahHandArea3D:_getCombAddDirection()
    local layoutConf = self:_getLayoutConfig()
    local addDirection = layoutConf.IsForwardAdd and 1 or -1 
    if not self:_isCombsAtLeft() then
        addDirection = -1 * addDirection
    end
    return addDirection
end

function UIMahHandArea3D:_updateCombsPosition(bShowAction)
    local layoutConf = self:_getLayoutConfig()
    local startPos = self:_getCombStartPos()
    local addDirection = self:_getCombAddDirection()
    local totalMahWidth = 0
    for _, comb in ipairs(self._combs) do
        local mahPos = cc.vec3(startPos.x, startPos.y, 0)
        if layoutConf.IsAddX then
            mahPos.x = startPos.x + addDirection * totalMahWidth
        else
            mahPos.y = startPos.y + addDirection * totalMahWidth
        end
        totalMahWidth = totalMahWidth + comb:getTotalWidth() + layoutConf.CombDistance
        comb:setPosition3D(mahPos)
    end
end

function UIMahHandArea3D:_getCombsTotalWidth()
    local layoutConf = self:_getLayoutConfig()
    local totalMahWidth = 0
    for _, comb in ipairs(self._combs) do
        totalMahWidth = totalMahWidth + comb:getTotalWidth() + layoutConf.CombDistance
    end
    return totalMahWidth
end

function UIMahHandArea3D:setHuMahs(huHandMahValues, huMahValue, bHuMahShowAni)
    UIMahHandArea3D.super.setHuMahs(self, huHandMahValues, huMahValue, bHuMahShowAni)
    self:setCameraMask(UIMahConfig3D.DeskCameraMask)
end

function UIMahHandArea3D:resetHandCameraMask()
    for _, mah in ipairs(self._handMahs) do
        mah:setCameraMask(self:_getHandMahCameraMask())
    end    
end

function UIMahHandArea3D:_doMahMoveTo(mah)
    mah:stopAllActions()
    local animTime = 0.3
    local finalPos = mah:getInitPosition3D()
    local moveAction = cc.MoveTo:create(animTime,finalPos)
    mah:runAction(moveAction)
    return animTime
end

function UIMahHandArea3D:_flyMahBezierTo(mah, mahIndex)
    mah:stopAllActions()
    local distanceCounts = #self._handMahs - mahIndex
    if distanceCounts > 12 then
        distanceCounts = 12
    end
    if distanceCounts < 6 then
        distanceCounts = 6
    end
    local animTime = 0.0546 * distanceCounts
    local mahPos3D = mah:getPosition3D()
    local finalPos3D = mah:getInitPosition3D()
    local mahHeight = mah:getDistanceZ()
    local bChangeX = math.abs(mahPos3D.x - finalPos3D.x) > 0.000001
    if mah.bBianPai then
        mahHeight = mahHeight/2
        if not bChangeX then
            mahHeight = mahHeight/2
        end
    end
    local act1 = cc.MoveTo:create(4/30, cc.vec3( mahPos3D.x, mahPos3D.y, mahPos3D.z + mahHeight*2))
    local act2 = cc.MoveTo:create(5/30, cc.vec3( finalPos3D.x, finalPos3D.y, finalPos3D.z + mahHeight*2 ))
    local rotate = bChangeX and 30 or 0
    local act2_2 = cc.RotateTo:create(5/30, cc.vec3( 0, rotate, 0 ))
    local act3 = cc.MoveTo:create(6/30 , cc.vec3( finalPos3D.x, finalPos3D.y, finalPos3D.z ))
    local act3_2 = cc.RotateTo:create(6/30, cc.vec3( 0, 0, 0 ))

    mah:runAction(cc.Sequence:create(act1,cc.Spawn:create(act2,act2_2),cc.Spawn:create(act3,act3_2)))
    return animTime
end

-- 将单放合并进手牌
function UIMahHandArea3D:_mergeDanFangToHandMahs()
    if not self._danFangMah then
        return
    end

    local danFangValue = self._danFangMah:getMahValue()
    local addMah = self:_addHandMah(danFangValue, self:_checkHandIsStand(danFangValue))
    addMah:setPosition3D(self._danFangMah:getPosition3D())
    self._tempDanFangMah = addMah
    self:_delDanFang()
    self:updateAllMahsBaiBianIcon()
end

function UIMahHandArea3D:setLightMask(lightMask)
    
end

function UIMahHandArea3D:setMahColor(colorFlag)
    self._config.mahColorFalg = colorFlag

    self:_updateMahColor()
end

function UIMahHandArea3D:_updateMahColor()
    local allStandMahs = self:_getAllStandMahs()
    for _, mah in pairs(allStandMahs) do
        mah:setMahColor(self._config.mahColorFalg)
    end

    for _, comb in pairs(self._combs) do
        comb:setMahColor(self._config.mahColorFalg)
    end
end

function UIMahHandArea3D:bankrup()
    local allStandMahs = self:_getAllStandMahs()
    for _, mah in pairs(allStandMahs) do
        mah:setRotation3D(UIMahConfig3D.HandAreaLayout[self._localSeat].BankrupRotation or cc.vec3(90,0,0))
        mah:setCameraMask(self:_getCombCameraMask())
        mah:bankrup()
    end
end
return UIMahHandArea3D