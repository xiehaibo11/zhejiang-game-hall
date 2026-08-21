local MoveExtend = class("MoveExtend")

function MoveExtend.extend(object, param)
    function object:updatPos()
        local caiyunPos = self:__getLocalPos()
        param.layout:setPosition(caiyunPos)
    end

    function object:__getLocalPos()
        local posStr = cc.UserDefault:getInstance():getStringForKey(param.key, "0,0")
        local pos = string.split(posStr, ",")
        if tonumber(pos[1]) == 0 or tonumber(pos[2]) == 0 then
            local defaultPos = cc.p(param.layout:getPosition())
            local str = string.format("%d,%d", defaultPos.x, defaultPos.y)
            cc.UserDefault:getInstance():setStringForKey(param.key, str)
            return defaultPos
        end
        return cc.p(tonumber(pos[1]), tonumber(pos[2]))
    end

    function object:__setLocalPos()
        local pos = cc.p(param.layout:getPosition())
        local str = string.format("%d,%d", pos.x, pos.y)
        cc.UserDefault:getInstance():setStringForKey(param.key, str)
    end

    function object:onTouch(send, eventType)
        if eventType == ccui.TouchEventType.began then
            self:__onTouchPropBegan(send)
        elseif eventType == ccui.TouchEventType.moved then
            self:__onTouchPropMoved(send)
        elseif eventType == ccui.TouchEventType.ended then
            self:__onTouchPropEnded(send, fun, icon)
        elseif eventType == ccui.TouchEventType.canceled then
            self:__onTouchPropEnded(send)
        end
    end

    function object:__onTouchPropBegan(send)
        self._BtnPropStartPosX = param.layout:getPositionX()
        self._BtnPropStartPosY = param.layout:getPositionY()
        self._BtnPropOffPosX = nil
        self._BtnPropOffPosY = nil
    end

    function object:__onTouchPropMoved(send)
        local movePos = send:getTouchMovePosition()
        local tempPos = self:convertToNodeSpace(movePos)
        if self._BtnPropOffPosX == nil then
            self._BtnPropOffPosX = self._BtnPropStartPosX - tempPos.x
            self._BtnPropOffPosY = self._BtnPropStartPosY - tempPos.y
        end
        param.layout:setPosition(tempPos.x + self._BtnPropOffPosX, tempPos.y + self._BtnPropOffPosY)
        -- self:updateTheTipsShow()
        -- if self._guideView and not tolua.isnull(self._guideView) then
        --     self._guideView:updateDirection(tempPos.x + self._BtnPropOffPosX, tempPos.y + self._BtnPropOffPosY)
        -- end
        if self.onMoved then
            self:onMoved(send, tempPos.x + self._BtnPropOffPosX, tempPos.y + self._BtnPropOffPosY)
        end
    end

    -- function object:onMoved(send, endX, endY)
    -- end
    -- function object:onMoveEnded(send, fun, icon)
    -- end
    -- function object:onClick(send, fun, icon)
    -- end
    function object:__onTouchPropEnded(send, fun, icon)
        if not self or tolua.isnull(self) then
            return
        end
        local BtnEndPosX = param.layout:getPositionX()
        local BtnEndPosY = param.layout:getPositionY()

        local viewSize = param.root:getContentSize()
        local btnSize = param.layout:getContentSize()
        if BtnEndPosX < btnSize.width / 2 then
            param.layout:setPositionX(btnSize.width / 2)
        elseif BtnEndPosX > viewSize.width - btnSize.width / 2 then
            param.layout:setPositionX(viewSize.width - btnSize.width / 2)
        end
        if BtnEndPosY < btnSize.height / 2 then
            param.layout:setPositionY(btnSize.height / 2)
        elseif BtnEndPosY > viewSize.height - btnSize.height / 2 then
            param.layout:setPositionY(viewSize.height - btnSize.height / 2)
        end

        self:__setLocalPos()
        -- self:updateTheTipsShow()
        -- if self._guideView and not tolua.isnull(self._guideView) then
        --     local posX, posY = param.layout:getPosition()
        --     self._guideView:updateDirection(posX, posY)
        -- end
        if self.onMoveEnded then
            self.onMoveEnded(send)
        end
        if math.abs(BtnEndPosX - self._BtnPropStartPosX) <= 10 and math.abs(BtnEndPosY - self._BtnPropStartPosY) <= 10 then
            if self.onClick then
                self:onClick()
            end
        end
    end
end

return MoveExtend
