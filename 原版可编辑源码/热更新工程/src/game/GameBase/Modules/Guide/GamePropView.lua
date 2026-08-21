-- 财神引导UI
local GamePropView = CF.gameClass("GamePropView", CF.ViewBase)

-- local FinalPos = cc.p(0, 150)

function GamePropView:getCSBPath()
    return "cocosStudio/Common/CSB/CaiShenIcon.csb"
end

function GamePropView:getBindingInfo()
    return {
        ["_KW_PROP_ANI_PANEL"] = {varName = "_propAni"},
        ["_KW_DARGON_ANI_PANEL"] = {varName = "_dargonAni"},
        ["_KW_PROP_ITEM"] = {varName = "_propBtn", type = XH.UI_TYPE.BUTTON, onTouch = "onTouchProp"},
        ["_KW_PROP_POS_2"] = {varName = "_propPos2"},
        ["_KW_PROP_POS_3"] = {varName = "_propPos3"},
        ["_KW_IMG_ICON"] = {varName = "_imagIcon"},
    }
end

function GamePropView:getAdaptationConfig()
    return {
        {node = self._propPos2, bRight = false, bHalf = false},
    }
end

function GamePropView:getProxyEvents()
    return {
        { module = CF.roomData, eventKeyName = "EVENT_GAME_UPDATE_SEER", callBack = "onUpdateBtnVisible" },
    }
end

function GamePropView:ctor(param)
    param = param or {}
    GamePropView.super.ctor(self, param)
    self:initUI()
    self:initAniUI()
    local conventionData = {}
    local extraData = {}
    if CF.roomData:isNewGoldRoom() or CF.roomData:isGoldRoom() then
        extraData.room_type = 3
    elseif CF.teaHouseManager:isInTeaHouse() then
        extraData.room_type = 1
    else
        extraData.room_type = 2
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.CAIYUN_PROP_CAISHEN_ICON_SHOW,conventionData,extraData)
end

function GamePropView:getProxyEvents()
    return {
        {module = CF.goldManager, eventKeyName = "EVENT_MATCH_STATUS_CHANGE", callBack = "onMatchStatusEvent"},
        {module = CF.game:getModule("Guide"), eventKeyName = "EVENT_UPDATE_PROP_GUIDE", callBack = "updateProp"},
        {module = XH.lobby:getModule("Lobby"), eventKeyName = "EVENT_WIN_SIZE_CHANGE", callBack = "onWinSizeChange"},
        {module = CF.roomData, eventKeyName = "EVENT_GAMESTART_CHANGED", callBack = "onGameStartChanged" }
    }
end

function GamePropView:initUI()
    local module = CF.game:getModule("IconAnimationManager")
    if module:GetPlayAnimationIndex() == module.PlayType.QingCaiShen  or CF.roomData:isGoldRoom() then
        if not self._armatureNode then
            self._armatureNode = CF.SpineManager:playAni(self._dargonAni, "res/animation/GameCommon/prop_ani/csyd-ani/", "zzb_qcs_icon", "loop", true)
        end
        self._imagIcon:setVisible(false)
    else
        self._imagIcon:setVisible(true)
    end

    if CF.roomData:isGoldRoom() then
        local pos = cc.p(self._propPos2:getPosition())
        if CF.roomData:getIsGameStart() then
            pos = self:getLocalPos()
        end
        if CF.roomData:isNewUI() then
            pos = cc.p(self._propPos3:getPosition())
        end
        self._propBtn:setPosition(pos)
    end
    self:onUpdateBtnVisible()
end

function GamePropView:onWinSizeChange()
    if not CF.roomData:isGoldRoom() then
        return
    end
    local pos = cc.p(self._propPos2:getPosition())
    if CF.roomData:getIsGameStart() then
        pos = self:getLocalPos()
    end
    self._propBtn:setPosition(pos)
end

function GamePropView:onUpdateBtnVisible()
    self._propBtn:setVisible(not CF.roomData:getIsSeer())
end

function GamePropView:initAniUI()
    --
end

function GamePropView:onTouchProp(send, eventType)
    if not CF.roomData:getIsGameStart() then
        if eventType == ccui.TouchEventType.began then
            self:onTouchPropBegan(send)
        elseif eventType == ccui.TouchEventType.ended then
            self:showCaiYunPropView()
        end
        return
    end
    if eventType == ccui.TouchEventType.began then
        self:onTouchPropBegan(send)
    elseif eventType == ccui.TouchEventType.moved then
        self:onTouchPropMoved(send)
    elseif eventType == ccui.TouchEventType.ended then
        self:onTouchPropEnded(send, fun, icon)
    elseif eventType == ccui.TouchEventType.canceled then
        self:onTouchPropEnded(send)
    end
end

function GamePropView:onTouchPropBegan(send)
    self._BtnPropStartPosX = self._propBtn:getPositionX()
    self._BtnPropStartPosY = self._propBtn:getPositionY()
    self._BtnPropOffPosX = nil
    self._BtnPropOffPosY = nil
end

function GamePropView:onTouchPropMoved(send)
    if not self or tolua.isnull(self) then
        return
    end
    local movePos = send:getTouchMovePosition()
    local tempPos = self:convertToNodeSpace(movePos)
    if self._BtnPropOffPosX == nil then
        self._BtnPropOffPosX = self._BtnPropStartPosX - tempPos.x
        self._BtnPropOffPosY = self._BtnPropStartPosY - tempPos.y
    end
    self._propBtn:setPosition(tempPos.x + self._BtnPropOffPosX, tempPos.y + self._BtnPropOffPosY)
end

function GamePropView:onTouchPropEnded(send, fun, icon)
    if not self or tolua.isnull(self) then
        return
    end
    -- 移动超出范围后，重新设置位置
    local BtnEndPosX = self._propBtn:getPositionX()
    local BtnEndPosY = self._propBtn:getPositionY()
    local parent = self:getParent()
    local screenSize = cc.Director:getInstance():getWinSize()
    local btnSize = self._propBtn:getContentSize()
    local parentPos = cc.p(parent:getPosition())
    if BtnEndPosX <= btnSize.width/2 - parentPos.x then
        self._propBtn:setPositionX(btnSize.width/2 - parentPos.x)
    elseif BtnEndPosX > screenSize.width - btnSize.width/2 - parentPos.x then
        self._propBtn:setPositionX(screenSize.width - btnSize.width/2 - parentPos.x)
    end

    if BtnEndPosY < btnSize.height/2 - parentPos.y then
        self._propBtn:setPositionY(btnSize.height/2 - parentPos.y)
    elseif BtnEndPosY > screenSize.height - btnSize.height/2 - parentPos.y then
        self._propBtn:setPositionY(screenSize.height - btnSize.height/2 - parentPos.y)
    end
    if BtnEndPosY > screenSize.height - btnSize.height - parentPos.y - 50 and BtnEndPosX > screenSize.width - btnSize.width/2 - parentPos.x - 100 then
        self._propBtn:setPositionX(screenSize.width - btnSize.width/2 - parentPos.x - 100)
    end

    -- 设置本地数据
    self:setLocalPos()

    if math.abs(BtnEndPosX - self._BtnPropStartPosX) <= 10 and math.abs(BtnEndPosY - self._BtnPropStartPosY) <= 10 then
        self:showCaiYunPropView()
    else
        if CF.roomData:isNewGoldRoom() or CF.roomData:isGoldRoom() then
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zyt2024030501)
        else
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zyt2024030503)
        end
    end
end

function GamePropView:showCaiYunPropView()
    XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080834)
    CF.gameRequire("Modules.CaiYunProp.View").new():showSelf()

    -- if CF.roomData:isNewGoldRoom() or CF.roomData:isGoldRoom() then
    --     XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zyt2024030502)
    -- else
    --     XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zyt2024030504)
    -- end

    -- local conventionData = {}
    -- local extraData = {}
    -- if CF.roomData:isNewGoldRoom() or CF.roomData:isGoldRoom() then
    --     extraData.room_type = 3
    -- elseif CF.teaHouseManager:isInTeaHouse() then
    --     extraData.room_type = 1
    -- else
    --     extraData.room_type = 2
    -- end
    -- XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.CAIYUN_PROP_CAISHEN_ICON_CLICK,conventionData,extraData)
end

function GamePropView:updateProp(event)
    self._propAni:setVisible(false)
    self._propBtn:stopAllActions()
    self._propBtn:setPosition(self:getLocalPos())
end

--匹配事件
function GamePropView:onMatchStatusEvent(event)
    local show = event.msg.show or false
    if show then
        self._propBtn:setVisible(false)
    end
end

function GamePropView:setLocalPos()
    if CF.roomData:isNewUI() then
        return 
    end
    local pos = cc.p(self._propBtn:getPosition())
    local str = string.format("%d,%d", pos.x, pos.y)
    cc.UserDefault:getInstance():setStringForKey("BTN_BAICAISHEN_POS_NEW", str)
end

function GamePropView:getLocalPos()
    if not CF.roomData:isGoldRoom() then
        return cc.p(self._propBtn:getPosition())
    end

    if CF.roomData:isNewUI() then
        return cc.p(self._propPos3:getPosition())
    end
    
    local storePos = cc.UserDefault:getInstance():getStringForKey("BTN_BAICAISHEN_POS_NEW", "")
    if storePos == "" then
        return cc.p(self._propPos2:getPosition())
    end
    local pos = string.split(storePos, ",")
    return cc.p(tonumber(pos[1]) or 0, tonumber(pos[2]) or 150)
end

function GamePropView:onGameStartChanged(event)
    if CF.roomData:isGoldRoom() then
        self._propBtn:setVisible(true)
        return
    end
    self._propBtn:setVisible(false)
end

function GamePropView:updatePositionX(posX)
    self._propBtn:setPositionX(posX)
end

return GamePropView
