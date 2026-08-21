local UIMahHandArea = CF.gameClass("UIMahHandArea2D", "game.Mahjong.BasicMahjong.Modules.GameLayer.View2D.UIMahHandArea")
local UIMahConfig = CF.gameRequire("Modules.GameLayer.Config.UIMahConfig2D")

function UIMahHandArea:_sortHandMahs()

end

function UIMahHandArea:_getHandMahScale()
    local layoutConf = self:_getLayoutConfig()
    local handMahScale = layoutConf.HandMahScale or 1
    return handMahScale
end

function UIMahHandArea:_updateCombsPosition(bShowAction)
    if self._maxHandMahCount == CF.GameDefine.MAX_HAND_COUNT_TYPE.TEN then
        self:_updateCombsPosition2(bShowAction)
        return
    end
    UIMahHandArea.super._updateCombsPosition(self, bShowAction)
end

function UIMahHandArea:_updateCombsPosition2(bShowAction)
    local layoutConf = self:_getLayoutConfig()
    local startPos = self:_getCombStartPos()
    local addDirection = self:_getCombAddDirection()
    local combAnchorPoint = self:_getCombAnchorPoint()
    local combScale = self:_getCombScale()
    local lastComb
    for index, comb in ipairs(self._combs) do
        comb:setAnchorPoint(combAnchorPoint)
        comb:setScale(combScale)
        if addDirection > 0 then
            comb:setLocalZOrder(UIMahConfig.MaxCombsCount - index)
        end
        local combPosition = cc.p(startPos.x, startPos.y)
        if lastComb then
            local lastCombSize = lastComb:getBoundingBox()
            local lastCombPosX, lastCombPosY = lastComb:getPosition()
            if layoutConf.IsHorizontalAdd then
                combPosition.x = lastCombPosX + (lastCombSize.width + layoutConf.CombDistance2) * addDirection
                combPosition.y = startPos.y
                if index > UIMahConfig.DoubleCombCount then
                    local nexeLineIndex = index - UIMahConfig.DoubleCombCount
                    combPosition.x = self._combs[nexeLineIndex]:getPositionX()
                    local addDirection = self._localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM and -1 or 1
                    local handMahDistance = self._handMahs[1]:getLeftRightEdgeHeight() + layoutConf.HandMoveDisY
                    combPosition.y = startPos.y + handMahDistance * addDirection
                end
            else
                combPosition.x = startPos.x
                combPosition.y = lastCombPosY + (lastCombSize.height + layoutConf.CombDistance2) * addDirection
                if index > UIMahConfig.DoubleCombCount then
                    local nexeLineIndex = index - UIMahConfig.DoubleCombCount
                    combPosition.y = self._combs[nexeLineIndex]:getPositionY()
                    local addDirection = self._localSeat == CF.GameDefine.LOCAL_SEAT.LEFT and -1 or 1
                    local handMahDistance = self._handMahs[1]:getTopEdgeWidth() + layoutConf.HandMoveDisX
                    combPosition.x = startPos.x + handMahDistance * addDirection
                end
            end
        end

        if bShowAction and #self._combs == index then
            comb:setPosition(combPosition.x - layoutConf.CombMoveDisX, combPosition.y - layoutConf.CombMoveDisY)
            local delayTime = 0.2
            local moveTime = 0.2
            self:performWithDelay(function ()
                comb:runAction(cc.EaseQuarticActionOut:create(
                    cc.MoveTo:create(moveTime, combPosition)))
            end, delayTime)

            local totalDelayTime = delayTime + moveTime + 0.02
            self:performWithDelay(function ()
                comb:stopAllActions()
                comb:setPosition(combPosition)
            end, totalDelayTime)
        else
            comb:stopAllActions()
            comb:setPosition(combPosition)
        end
        lastComb = comb
    end
end

function UIMahHandArea:_getHandMahsStartPos()
    if self._maxHandMahCount == CF.GameDefine.MAX_HAND_COUNT_TYPE.TEN then
        return self:_getHandMahsStartPos2()
    end
    return UIMahHandArea.super._getHandMahsStartPos(self)
end

function UIMahHandArea:_getHandMahsStartPos2()
    local layoutConf = self:_getLayoutConfig()
    local defualtPos = clone(layoutConf.HandMahsStartPos[self._maxHandMahCount]) or cc.p(0, 0)
    local startPos = clone(defualtPos)
    if self:_isCombsAtLeft() then
        if layoutConf.IsHorizontalAdd then
            if layoutConf.CombTotalLength then
                startPos.x = #self._combs * layoutConf.CombTotalLength * layoutConf.AddDirection
            elseif #self._combs > 0 then
                --这里只算x坐标
                local lastCombPosX = self._combs[#self._combs]:getPositionX()
                local lastCombWidth = self._combs[#self._combs]:getBoundingBox().width
                if #self._combs == UIMahConfig.DoubleCombCount then
                    startPos.x = defualtPos.x
                else
                    startPos.x = lastCombPosX + (lastCombWidth + layoutConf.CombDistance2) * layoutConf.AddDirection
                end
            end
        else
            if layoutConf.CombTotalLength then
                startPos.y = #self._combs * layoutConf.CombTotalLength * layoutConf.AddDirection
            elseif #self._combs > 0 then
                --这里只计算y坐标
                local lastCombPosY = self._combs[#self._combs]:getPositionY()
                local lastCombHeight = self._combs[#self._combs]:getBoundingBox().height
                if #self._combs == UIMahConfig.DoubleCombCount then
                    startPos.y = defualtPos.y
                else
                    startPos.y = lastCombPosY + (lastCombHeight + layoutConf.CombDistance2) * layoutConf.AddDirection
                end
            end
        end
    end
    return startPos
end

function UIMahHandArea:_updateHandMahsPosition(bShowAction, bHuMah)
    if self._maxHandMahCount == CF.GameDefine.MAX_HAND_COUNT_TYPE.TEN then
        self:_updateHandMahsPosition2(bShowAction, bHuMah)
        return
    end
    local startPos = self:_getHandMahsStartPos()
    local layoutConf = self:_getLayoutConfig()
    local mahZorder = UIMahConfig.MaxHandMahsCount
    local doActionTime = 0
    for index, mah in ipairs(self._handMahs) do
        mah:setAnchorPoint(layoutConf.AnchorPoint)
        mah:setScale(self:_getHandMahScale())
        mah:setLocalZOrder(mahZorder)
        mahZorder = mahZorder - layoutConf.AddDirection
        local mahPos = cc.p(0,0)
        if layoutConf.IsHorizontalAdd then
            mahPos.x = startPos.x + (index - 1) * mah:getTopEdgeWidth() * layoutConf.AddDirection
        else
            mahPos.y = startPos.y + (index - 1) * mah:getTopEdgeWidth() * layoutConf.AddDirection
        end
        mah:setInitPosition(mahPos.x ,mahPos.y)
        if bShowAction and CF.settingData:getInsertStyle() == 1 then
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
        else
            mah:stopAllActions()
            mah:setRotation(0)
            mah:setPosition(mahPos)
        end
    end
    -- 触发与动画时长相等的延迟动画
    self._tempDanFangMah = nil
    if doActionTime > 0 then
        self:performWithDelay(function ()
            self:_onFinishAllMahsAction()
        end, doActionTime + 0.02)
    end

    if self._danFangMah then
        self._danFangMah:setScale(self:_getHandMahScale())
        self._danFangMah:setAnchorPoint(layoutConf.AnchorPoint)
        self._danFangMah:setLocalZOrder(mahZorder)
        local mahPos = cc.p(0,0)
        if layoutConf.IsHorizontalAdd then
            mahPos.x = startPos.x + (#self._handMahs * self._danFangMah:getTopEdgeWidth() + layoutConf.DanFangDistance) * layoutConf.AddDirection
        else
            mahPos.y = startPos.y + (#self._handMahs * self._danFangMah:getTopEdgeWidth() + layoutConf.DanFangDistance) * layoutConf.AddDirection
        end
        self._danFangMah:setInitPosition(mahPos.x ,mahPos.y)
        self._danFangMah:setPosition(mahPos.x ,mahPos.y)
    end
end

function UIMahHandArea:_updateHandMahsPosition2(bShowAction, bHuMah)
    local startPos = self:_getHandMahsStartPos2()
    local layoutConf = self:_getLayoutConfig()
    local mahZorder = UIMahConfig.MaxHandMahsCount
    local doActionTime = 0
    local handMahDistance = 0
    local firstLineCombCount = math.min(UIMahConfig.DoubleCombCount, #self._combs)
    for index, mah in ipairs(self._handMahs) do
        mah:setAnchorPoint(layoutConf.AnchorPoint)
        mah:setScale(self:_getHandMahScale())
        mah:setLocalZOrder(mahZorder)
        local mahPos = cc.p(0,0)
        local handMahsStartPos = clone(layoutConf.HandMahsStartPos[self._maxHandMahCount]) or cc.p(0, 0)
        if layoutConf.IsHorizontalAdd then
            mahZorder = mahZorder + layoutConf.AddDirection
            local addDirection = self._localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM and -1 or 1
            handMahDistance = mah:getLeftRightEdgeHeight() + (bHuMah and 30 or layoutConf.HandMoveDisY)
            if #self._combs >= UIMahConfig.DoubleCombCount then
                mahPos.x = startPos.x + (index - 1) * mah:getTopEdgeWidth() * layoutConf.AddDirection
                mahPos.y = startPos.y + handMahDistance * addDirection
            else
                mahPos.x = startPos.x + (index - 1) * mah:getTopEdgeWidth() * layoutConf.AddDirection
                mahPos.y = startPos.y
                if index > self._maxHandMahCount - firstLineCombCount * 2 then
                    local mahIndex = index - (self._maxHandMahCount - firstLineCombCount * 2)
                    mahPos.x = handMahsStartPos.x + (mahIndex - 1) * mah:getTopEdgeWidth() * layoutConf.AddDirection
                    mahPos.y = handMahsStartPos.y + handMahDistance * addDirection
                end
            end
        else
            mahZorder = mahZorder - layoutConf.AddDirection
            local addDirection = self._localSeat == CF.GameDefine.LOCAL_SEAT.LEFT and -1 or 1
            handMahDistance = mah:getTopEdgeWidth() + layoutConf.HandMoveDisX
            if #self._combs >= UIMahConfig.DoubleCombCount then
                mahPos.x = startPos.x + handMahDistance * addDirection
                mahPos.y = startPos.y + (index - 1) * mah:getTopEdgeWidth() * layoutConf.AddDirection
            else
                mahPos.x = startPos.x
                mahPos.y = startPos.y + (index - 1) * mah:getTopEdgeWidth() * layoutConf.AddDirection
                if index > self._maxHandMahCount - firstLineCombCount * 2 then
                    local mahIndex = index - (self._maxHandMahCount - firstLineCombCount * 2)
                    mahPos.x = handMahsStartPos.x + handMahDistance * addDirection
                    mahPos.y = handMahsStartPos.y + (mahIndex - 1) * mah:getTopEdgeWidth() * layoutConf.AddDirection
                end
            end
        end
        mah:setInitPosition(mahPos.x ,mahPos.y)
        if bShowAction and CF.settingData:getInsertStyle() == 1 then
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
        else
            mah:stopAllActions()
            mah:setRotation(0)
            mah:setPosition(mahPos)
        end
    end
    -- 触发与动画时长相等的延迟动画
    self._tempDanFangMah = nil
    if doActionTime > 0 then
        self:performWithDelay(function ()
            self:_onFinishAllMahsAction()
        end, doActionTime + 0.02)
    end

    if self._danFangMah then
        self._danFangMah:setScale(self:_getHandMahScale())
        self._danFangMah:setAnchorPoint(layoutConf.AnchorPoint)
        self._danFangMah:setLocalZOrder(mahZorder)
        local mahPos = cc.p(0,0)
        if layoutConf.IsHorizontalAdd then
            mahPos.x = self._handMahs[#self._handMahs]:getPositionX() + (self._danFangMah:getTopEdgeWidth() + layoutConf.DanFangDistance) * layoutConf.AddDirection
            mahPos.y = self._handMahs[#self._handMahs]:getPositionY()
        else
            mahPos.x = self._handMahs[#self._handMahs]:getPositionX()
            mahPos.y = self._handMahs[#self._handMahs]:getPositionY() + (self._danFangMah:getTopEdgeWidth() + layoutConf.DanFangDistance) * layoutConf.AddDirection
        end
        self._danFangMah:setInitPosition(mahPos.x ,mahPos.y)
        self._danFangMah:setPosition(mahPos.x ,mahPos.y)
    end
end

function UIMahHandArea:showHuAniSkin()
    local isUse = XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.MAH_HU)
    if isUse and self._localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
        -- 播放胡牌动画
        local UIMahConfigBase = CF.gameRequire("Modules.GameLayer.Config.UIMahConfigBase")
        if UIMahConfigBase.HuPaiAniUpConfig[XH.XGSJ_PROP_ID.MAH_HU] then
            local sprite = XH.UITool.createFrameAni(self._danFangMah, UIMahConfigBase.HuPaiAniUpConfig[XH.XGSJ_PROP_ID.MAH_HU])
            sprite:setPosition(self._danFangMah:getContentSize().width / 2, self._danFangMah:getContentSize().height + 260)
        end
        if UIMahConfigBase.HuPaiAniDownConfig[XH.XGSJ_PROP_ID.MAH_HU] then
            local sprite = XH.UITool.createFrameAni(self._danFangMah, UIMahConfigBase.HuPaiAniDownConfig[XH.XGSJ_PROP_ID.MAH_HU])
            sprite:setPosition(self._danFangMah:getContentSize().width / 2, self._danFangMah:getContentSize().height - 80)
            sprite:setLocalZOrder(-1)
        end
    else
        CF.UITool.playJsonAnimation(
        self._danFangMah,
        "lightning_ani_1",
        "res/animation/Mahjong/Base/lightning_ani_1/lightning_ani_1.ExportJson",
        1,
        cc.p(self._danFangMah:getContentSize().width / 2, self._danFangMah:getContentSize().height / 2 + 80)
        )
    end
end

function UIMahHandArea:setHuMahs(huHandMahValues, huMahValue, bHuMahShowAni)
    local handMahsData = {}
    for _, handMahValue in ipairs(huHandMahValues) do
        table.insert(handMahsData, { mahValue = handMahValue, bStand = false })
    end
    self:_showHandMahs(handMahsData)
    self:_showDanFang(huMahValue, false)
    self:_updateHandMahsPosition(false, true)
    if bHuMahShowAni and self._danFangMah then
        self:showHuAniSkin()
    end
end

function UIMahHandArea:setSongZhang(songZhangMahs)
    self:clearSongZhang()
    local songZhangMahsTmp = clone(songZhangMahs)
    local bFindDF = false
    for i = 1, #songZhangMahsTmp  do
        if self._danFangMah then
            if songZhangMahsTmp[i] == self._danFangMah:getMahValue() then
                bFindDF = true
                self._danFangMah:showSongZhangIcon(true)
                table.remove(songZhangMahsTmp, i)
                break
            end
        end
    end
    for i = 1, #songZhangMahsTmp  do
        for j = #self._handMahs, 1, -1 do
            if songZhangMahsTmp[i] == self._handMahs[j]:getMahValue() then
                self._handMahs[j]:showSongZhangIcon(true)
                break
            end
        end
    end
end

function UIMahHandArea:clearSongZhang()
    if self._danFangMah then
        self._danFangMah:showSongZhangIcon(false)
    end
    for _, mah in ipairs(self._handMahs) do
        mah:showSongZhangIcon(false)
    end
end

return UIMahHandArea