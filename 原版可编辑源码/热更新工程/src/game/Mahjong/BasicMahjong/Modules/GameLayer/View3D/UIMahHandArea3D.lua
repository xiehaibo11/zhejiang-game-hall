local UIMahConfig3D = CF.gameRequire("Modules.GameLayer.Config.UIMahConfig3D")
local UIMah3D = CF.gameRequire("Modules.GameLayer.View3D.UIMah3D")
local UIMahComb3D = CF.gameRequire("Modules.GameLayer.View3D.UIMahComb3D")

local UIMahHandArea3D = CF.gameClass("UIMahHandArea3D", "game.Mahjong.BasicMahjong.Modules.GameLayer.ViewBase.UIMahHandAreaBase")

function UIMahHandArea3D:ctor(localSeat)
    self._config = {}
    UIMahHandArea3D.super.ctor(self, localSeat)

    self:setCameraMask(UIMahConfig3D.DeskCameraMask, false)
end

function UIMahHandArea3D:_initView()
    
end

-- 获取麻将牌类型
function UIMahHandArea3D:_getHandMahType(bStand, mahValue)
    if self._localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
        if bStand and mahValue == CF.GameDefine.MAH_VALUE.BACK and CF.roomData:getIsSeer() then
            return CF.GameDefine.MAH_TYPE.STAND_FACE_BACKWARD
        end
        return bStand and CF.GameDefine.MAH_TYPE.STAND_FACE_FORWARD or CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP
    elseif self._localSeat == CF.GameDefine.LOCAL_SEAT.RIGHT then
        return bStand and CF.GameDefine.MAH_TYPE.STAND_FACE_TORIGHT or CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT
    elseif self._localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
        return bStand and CF.GameDefine.MAH_TYPE.STAND_FACE_BACKWARD or CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN
    elseif self._localSeat == CF.GameDefine.LOCAL_SEAT.LEFT then
        return bStand and CF.GameDefine.MAH_TYPE.STAND_FACE_TOLEFT or CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT
    end
end

function UIMahHandArea3D:_createMah(mahValue, bStand)
    local mahType = self:_getHandMahType(bStand or false, mahValue)
    local mah = UIMah3D.new(mahType, mahValue)
    if mahValue ~= nil then
        self:updateMahJokerIcon(mah)
    end
    mah:setCameraMask(self:_getHandMahCameraMask())
    mah:setScale(self:_getLayoutConfig().HandMahsScale[self._maxHandMahCount])
    mah:setLightMask(cc.LightFlag.LIGHT0)
    mah:setMahColor(self._config.mahColorFalg)
    return mah
end

function UIMahHandArea3D:_getLayoutConfig()
    return clone(UIMahConfig3D.HandAreaLayout[self._localSeat]) or {}
end

function UIMahHandArea3D:_getCombCameraMask()
    return UIMahConfig3D.DeskCameraMask
end

function UIMahHandArea3D:_getHandMahCameraMask()
    if self._localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
        if CF.roomData:getIsSeer() and not CF.roomData:isDelayWatch() then
            return UIMahConfig3D.DeskCameraMask
        end
        return UIMahConfig3D.SelfHandCameraMask
    end
    return UIMahConfig3D.DeskCameraMask
end

function UIMahHandArea3D:_getHandMahsStartPos()
    local layoutConf = self:_getLayoutConfig()
    local startPos = layoutConf.HandMahsStartPos and layoutConf.HandMahsStartPos[self._maxHandMahCount]
    if not startPos then
        return cc.vec3(0, 0, 0)
    end
    if self:_isCombsAtLeft() then
        -- 玩家离开麻将房后，残留定时回调仍会走到这里，此时 CF.GameDefine 可能已被卸载
        local bottomSeat = CF.GameDefine and CF.GameDefine.LOCAL_SEAT and CF.GameDefine.LOCAL_SEAT.BOTTOM
        local combsTotalWidth = #self._combs * UIMahComb3D.SingleLayerMahCount * UIMahConfig3D.MahModelSize.Width
        if bottomSeat and self._localSeat ~= bottomSeat then
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
            if not self._tempDanFangMah or self._tempDanFangMah ~= mah then
                -- 非单放牌，直接移动
                tempAniTime = self:_doMahMoveTo(mah)
            elseif mahIndex == #self._handMahs then
                -- 是单放牌，但是单放为最后一张，也直接移动
                tempAniTime = self:_doMahMoveTo(mah)
            else
                -- 贝塞尔曲线飞单放牌
                tempAniTime = self:_flyMahBezierTo(mah, mahIndex)
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

-- 各个方位位置不同设置
local KW_END_HU_ANI_POS = {
    [1] = cc.p(-4, 14),
    [2] = cc.p(2.5, 13),
    [3] = cc.p(4.5, 21),
    [4] = cc.p(-2.5, 23),
}
local KW_END_HU_ANI_NEW_POS = {
    [1] = cc.p(-2.5, 10),
    [2] = cc.p(1.5, 9),
    [3] = cc.p(2.5, 13),
    [4] = cc.p(-1, 14),
}
-- 下方胡特效
local KW_END_HU_ANI_DOWN_POS = {
    [1] = cc.p(-1, 2),
    [2] = cc.p(0.25, 1),
    [3] = cc.p(0.5, 3),
    [4] = cc.p(-0.5, 2),
}
function UIMahHandArea3D:showHuAniSkin()
    local isUse = XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.MAH_HU)
    if isUse and self._localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
        -- 播放胡牌动画 
        local UIMahConfigBase = CF.gameRequire("Modules.GameLayer.Config.UIMahConfigBase")
        if UIMahConfigBase.HuPaiAniUpConfig[XH.XGSJ_PROP_ID.MAH_HU] then
            local sprite = XH.UITool.createFrameAni(self._danFangMah, UIMahConfigBase.HuPaiAniUpConfig[XH.XGSJ_PROP_ID.MAH_HU])
            sprite:setScale(0.04)
            sprite:setRotation3D(cc.vec3(90, 0, 0))
            if CF.settingData:get3DVisualAngle() == 2 then
                sprite:setPosition(KW_END_HU_ANI_POS[self._localSeat])
            else
                sprite:setPosition(KW_END_HU_ANI_NEW_POS[self._localSeat])
            end
            sprite:setCameraMask(self._danFangMah:getCameraMask())
        end
        if UIMahConfigBase.HuPaiAniDownConfig[XH.XGSJ_PROP_ID.MAH_HU] then
            local mahSprite3D = cc.Sprite3D:create()
            self._danFangMah:addChild(mahSprite3D)
            local sprite = XH.UITool.createFrameAni(mahSprite3D, UIMahConfigBase.HuPaiAniDownConfig[XH.XGSJ_PROP_ID.MAH_HU])
            sprite:setScale(0.04)
            sprite:setPosition(KW_END_HU_ANI_DOWN_POS[self._localSeat])
            sprite:setCameraMask(self._danFangMah:getCameraMask())
        end
    end
end

function UIMahHandArea3D:setHuMahs(huHandMahValues, huMahValue, bHuMahShowAni)
    UIMahHandArea3D.super.setHuMahs(self, huHandMahValues, huMahValue, bHuMahShowAni)
    if bHuMahShowAni and self._danFangMah then
        self:showHuAniSkin()
    end
    self:setCameraMask(UIMahConfig3D.DeskCameraMask)
end

function UIMahHandArea3D:resetHandCameraMask()
    for _, mah in ipairs(self._handMahs) do
        mah:setCameraMask(self:_getHandMahCameraMask())
    end    
    self:setCameraMask(self:_getHandMahCameraMask())
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
    local act1 = cc.MoveTo:create(4/30, cc.vec3( mahPos3D.x, mahPos3D.y, mahPos3D.z + mahHeight*2))
    local act2 = cc.MoveTo:create(5/30, cc.vec3( finalPos3D.x, finalPos3D.y, finalPos3D.z + mahHeight*2 ))
    local act2_2 = cc.RotateTo:create(5/30, cc.vec3( 0, 30, 0 ))
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

return UIMahHandArea3D