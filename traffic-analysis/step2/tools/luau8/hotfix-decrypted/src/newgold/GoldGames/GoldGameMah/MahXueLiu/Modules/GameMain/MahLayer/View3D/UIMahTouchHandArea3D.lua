local MahLogic = NG.GAME.gameRequire("Modules.GameMain.MahLayer.MahLogic")
local UIMahConfig3D = NG.GAME.gameRequire("Modules.GameMain.MahLayer.Config.UIMahConfig3D")

local UIMahTouchHandArea3D = NG.GAME.gameClass("UIMahTouchHandArea3D", "newgold.GoldGames.GoldGameMah.MahXueLiu.Modules.GameMain.MahLayer.View3D.UIMahHandArea3D")

function UIMahTouchHandArea3D:ctor(localSeat)
    UIMahTouchHandArea3D.super.ctor(self, localSeat)
end

function UIMahTouchHandArea3D:initTouchEvent(camera, rootNode)
    self._camera = camera

    local listener = cc.EventListenerTouchOneByOne:create()
    listener:setSwallowTouches(true)
    listener:registerScriptHandler(handler(self, self.onTouchMoved), cc.Handler.EVENT_TOUCH_MOVED)
    listener:registerScriptHandler(handler(self, self.onTouchBegin), cc.Handler.EVENT_TOUCH_BEGAN)
    listener:registerScriptHandler(handler(self, self.onTouchEnded), cc.Handler.EVENT_TOUCH_ENDED)
    listener:registerScriptHandler(handler(self, self.onTouchCancelled), cc.Handler.EVENT_TOUCH_CANCELLED)
    local eventDispatcher = rootNode:getEventDispatcher()
    eventDispatcher:addEventListenerWithSceneGraphPriority(listener, rootNode)
end

function UIMahTouchHandArea3D:setIsSingleClick(isSingleClick)
    self._config.isSingleClick = isSingleClick
    self:_unSelectAllMahs()
end

function UIMahTouchHandArea3D:_isSingleClick(touchMah)
    if not self._config.isSingleClick then
        return false
    end
    if touchMah and touchMah:isTing() then
        return false
    end
    return true
end

function UIMahTouchHandArea3D:_getTouchMahByLocation(location)
    if not self._camera then
        return nil
    end
    local ray = self:_createRoy(location)
    local allStandMahs = self:_getAllStandMahs()
    for i, mah in pairs(allStandMahs) do
        if mah:hitTest(ray) then
            return mah, i
        end
    end
    return nil
end

-- 根据屏幕触摸点创建一条射线
function UIMahTouchHandArea3D:_createRoy(location)
    if not location then
        return nil
    end
    local nearP = cc.vec3(location.x, location.y, 0)
    nearP = self._camera:unproject(nearP)

    local degree = math.rad(UIMahConfig3D.SelfHandCameraLayout.Rotation.x)
    local direction = cc.vec3(0, math.sin(degree), -math.cos(degree))
    return cc.Ray:new(nearP, direction)
end

function UIMahTouchHandArea3D:_dispatchPlayMahEvent(playMah)
    local mahIndex = self:_getMahIndexInHandMahs(playMah)
    if self._playMahCallBack then
        self._playMahCallBack(mahIndex, playMah:getMahValue(), playMah:isBaiBian(), playMah:getBaiBianCnt())
    end
end

function UIMahTouchHandArea3D:_checkDragAngle(beginLocation, endLocation)
    local angle = MahLogic.getMoveAngleByPosition(beginLocation, endLocation)
    return angle > 40
end

function UIMahTouchHandArea3D:_showDragingMah(mah)
    if not mah then
        return
    end

    if not self._dragingMah then
        self._dragingMah = self:_createMah(mah:getMahValue(), true)
        self:addChild(self._dragingMah)
    else
        self._dragingMah:setMahValue(mah:getMahValue())
        self:updateMahJokerIcon(self._dragingMah)
    end
    local mahPos = mah:getPosition3D()
    self._dragingMah:setPosition3D(cc.vec3(mahPos.x, mahPos.y - mah:getDistanceY(), mahPos.z))
    self._dragingMah:setVisible(true)
end

function UIMahTouchHandArea3D:_hideDragingMah()
    if not self._dragingMah then
        return
    end
    self._dragingMah:setVisible(false)
end

------------------------------------------------------------
-- 触摸事件
------------------------------------------------------------

function UIMahTouchHandArea3D:changeMahSelect(mah)
    if mah:isSelected() then
        mah:setSelected(false)
        for i = 1, #self._freeSelectMahs do
            if mah == self._freeSelectMahs[i] then
                table.remove(self._freeSelectMahs, i)
                break
            end
        end
    else
        mah:setSelected(true)
        table.insert(self._freeSelectMahs, mah)
    end
    local huanMahIDs = {}
    for i = 1, #self._freeSelectMahs do
        if not tolua.isnull(self._freeSelectMahs[i]) then
            huanMahIDs[i] = self._freeSelectMahs[i]:getMahValue()
        end
    end

    NG.goldGame:getModule("GameMain"):getData():setHuanPaiMahIDs(huanMahIDs)
end

function UIMahTouchHandArea3D:onTouchBegin(touch, event)
    if self._bRunningAction or not self._camera then
        return false
    end
    local location = touch:getLocationInView()
    local touchMah = self:_getTouchMahByLocation(location)
    if not touchMah or touchMah:isMahTouchLimit() then
        if not self._freeSelect then
            self:_unSelectAllMahs()
        end
        return false
    end
    NG.soundManager:playNewEffect("sound_cardClick")
    self._isDraging = false
    self._touchBeginPos = location
    self._touchMahStartPos = touchMah:getPosition3D()
    self._movePointCount = 1

    self._touchedMah = touchMah
    if self._freeSelect then
        local allMahs = self:_getAllStandMahs()
        for _, v in ipairs(allMahs) do
            v['.touchFlag'] = 0
        end
        self:changeMahSelect(self._touchedMah)
        self._touchedMah['.touchFlag'] = 1
        return true
    end
    if self:_isSingleClick(self._touchedMah) then
        self:_setMahSelected(self._touchedMah, true)
    else
        if self._touchedMah:isSelected() then
            self:_unSelectAllMahs()
            self:_dispatchPlayMahEvent(self._touchedMah)
            return false
        else
            self:_setMahSelected(self._touchedMah, true)
        end
    end
    return true
end

function UIMahTouchHandArea3D:onTouchMoved(touch, event)
    if not self._touchedMah then
        return false
    end

    local location = touch:getLocationInView()
    if self._touchBeginPos then
        local touchBeganPos = self._touchBeginPos
        if self._freeSelect then
            local nowTouchMah = self:_getTouchMahByLocation(location)
            if nowTouchMah and nowTouchMah['.touchFlag'] == 0 then
                self:changeMahSelect(nowTouchMah)
                nowTouchMah['.touchFlag'] = 1
                NG.soundManager:playNewEffect("sound_cardClick")
            end
            return true
        end

        self._movePointCount = self._movePointCount + 1
        if not self._isDraging and self:_checkDragAngle(touchBeganPos, location) and self._movePointCount < 6 then
            self._isDraging = true
            self:_unSelectAllMahs()
            self:_setMahDraging(self._touchedMah, true)
            self:_showDragingMah(self._touchedMah)
        end
        if self._isDraging and self._dragingMah and self._dragingMah:isVisible() then
            local nearP = cc.vec3(location.x, location.y, 0)
            nearP = self._camera:unproject(nearP)

            local beginNearP = cc.vec3(touchBeganPos.x, touchBeganPos.y, 0)
            beginNearP = self._camera:unproject(beginNearP)
            local degree = math.rad(UIMahConfig3D.SelfHandCameraLayout.Rotation.x)
            self._dragingMah:setPosition3D(cc.vec3(
            self._touchMahStartPos.x + nearP.x - beginNearP.x,
            self._touchMahStartPos.y - self._dragingMah:getDistanceY(),
            self._touchMahStartPos.z + (nearP.z - beginNearP.z) * (1 / math.sin(degree))
            ))
        end
    end

    if not self._isDraging then
        local nowTouchMah = self:_getTouchMahByLocation(location)
        if nowTouchMah and not nowTouchMah:isMahTouchLimit() and not nowTouchMah:isSelected() then
            self:_setMahSelected(nowTouchMah, true)
            NG.soundManager:playNewEffect("sound_cardClick")
        end
    end
    return true
end

function UIMahTouchHandArea3D:onTouchEnded(touch, event)
    if not self._touchedMah then
        return false
    end
    if self._freeSelect then
        return false
    end
    local location = touch:getLocationInView()
    if self._isDraging and self._dragingMah and self._dragingMah:isVisible() then
        self._touchBeginPos = nil
        self._isDraging = false
        self:_setMahDraging(self._touchedMah, false)
        self:_hideDragingMah()

        local mahInitPos = self._touchedMah:getInitPosition3D()
        local nowPos = self._dragingMah:getPosition3D()
        if nowPos.z - mahInitPos.z > self._touchedMah:getDistanceZ() * 3 / 4 then
            self:_dispatchPlayMahEvent(self._touchedMah)
            return
        end
    end

    local selectedMah = self:_getSelectedMah()
    local ray = self:_createRoy(location)
    if self:_isSingleClick(self._touchedMah) then
        self:_unSelectAllMahs()
        if selectedMah and selectedMah:hitTest(ray) and selectedMah:isVisible() then
            self:_dispatchPlayMahEvent(selectedMah)
            return
        end
    else
        if not selectedMah or not selectedMah:hitTest(ray) or not selectedMah:isVisible() then
            self:_unSelectAllMahs()
        end
    end
end

function UIMahTouchHandArea3D:onTouchCancelled(touch, event)
    if not self._touchedMah then
        return false
    end

    self._touchBeginPos = nil
    self._isDraging = false
    self:_setMahDraging(self._touchedMah, false)
    self:_hideDragingMah()

    self._touchedMah = nil
end

function UIMahTouchHandArea3D:_createMah(mahValue, bStand)
    local mah = UIMahTouchHandArea3D.super._createMah(self, mahValue, bStand)
    mah:setLightMask(cc.LightFlag.LIGHT1)
    return mah
end

return UIMahTouchHandArea3D�%