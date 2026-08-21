local AddMultipleLayer = CF.gameClass("AddMultipleLayer", CF.ViewBase)

function AddMultipleLayer:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/AddMultipleLayer.csb"
end

function AddMultipleLayer:getBindingInfo()
    return {
        --游戏操作不加倍、加倍、超级加倍
        ["_KW_PANEL_ADD_MULTIPLE_BTNS"] = {varName = "_addMutipleBtns"},
        ["_KW_BTN_NOT_ADD_MULTIPLE"] = {varName = "_notAddMultipleBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onNotAddMultipleBtnClicked"},
        ["_KW_BTN_ADD_MULTIPLE"] = {varName = "_addMultipleBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onAddMultipleBtnClicked"},
        ["_KW_BTN_SUPER_ADD_MULTIPLE"] = {varName = "_superAddMultipleBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onSuperAddMultipleBtnClicked"},
        ["_KW_IMG_ADD_MULTIPLE_"] = {varName = "_uiAddMultiple", beginIndex = 1, endIndex = 4},
        ["_KW_IMG_SUPER_ADD_MULTIPLE_CARD"] = {varName = "_uiSuperAddMultipleCard"},
        ["_KW_TEXT_ADD_MULTIPLE_CARD_USE_COUNT"] = {varName = "_addMultipleCardUseCountText"},
        ["_KW_IMG_ADD_MULTIPLE_DIAMOND"] = {varName = "_uiAddMultipleDiamond"},
        ["_KW_TEXT_DIAMOND_USE_COUNT"] = {varName = "_addMultipleDiamondUseCountText"},
    }
end 

function AddMultipleLayer:getProxyEvents()
    local events = {
        {module = CF.game:getModule("AddMultiple"), eventKeyName = "EVENT_GAME_ADD_MULTIPLE", callBack = "onAddMultiple"},
        {module = CF.game:getModule("AddMultiple"), eventKeyName = "EVENT_CLEAR_ADD_MULTIPLE", callBack = "onClearAddMultiple"},
        {module = CF.game:getModule("AddMultiple"), eventKeyName = "EVENT_RETURN_PROP", callBack = "onReturnProp"},
        {module = CF.game:getModule("AddMultiple"), eventKeyName = "EVENT_HIDE_SUPER_ADDMULTI", callBack = "onUpdateAddPos"},
    }
    return events
end 

function AddMultipleLayer:clearTable()
    self:clearAddMultipleUI()
end

function AddMultipleLayer:clearAddMultipleUI(isAni)
    for i = 1, CF.roomData:getMaxPlayer() do
        local ui = self["_uiAddMultiple" .. i]
        if ui and ui:isVisible() then 
            if isAni then 
                -- 创建一个延时动作，延时166毫秒
                local delayAction = cc.DelayTime:create(0.166)  -- 166ms延迟

                -- 创建淡出动作，假设动作持续时间为1秒
                local fadeOutAction = cc.FadeOut:create(0.6)

                -- 创建一个回调动作，动画完成后隐藏UI元素
                local hideAction = cc.CallFunc:create(function()
                    ui:setVisible(false)
                end)

                -- 串联延迟、淡出和隐藏动作为一个序列
                local sequenceAction = cc.Sequence:create(delayAction, fadeOutAction, hideAction)

                -- 在UI元素上执行序列动作
                ui:runAction(sequenceAction)
            else 
                ui:setVisible(false)
            end
        end 
    end
end

function AddMultipleLayer:showPanelAddMultipleBtns(bShow)
    if self._addMutipleBtns then 
        self._addMutipleBtns:setVisible(bShow)
    end 
end

function AddMultipleLayer:onNotAddMultipleBtnClicked(send, eventType)
    self:showPanelAddMultipleBtns(false)    
    CF.msgManager:sendAddMultiple(CF.GameProtocol.msgAddMulti.ADDMULTITYPE.PASS)
    local areaIDAndGameID = CF.areaData:getAreaID() .. "_" .. CF.roomData:getGameID() 
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.fsjb24090501, {page_item_id = '不加倍',game_id = areaIDAndGameID ,room_level = CF.roomData:getRoomLevel()})
end

function AddMultipleLayer:onAddMultipleBtnClicked(send, eventType)
    self:showPanelAddMultipleBtns(false)
    CF.msgManager:sendAddMultiple(CF.GameProtocol.msgAddMulti.ADDMULTITYPE.DEFAULT)
    local areaIDAndGameID = CF.areaData:getAreaID() .. "_" .. CF.roomData:getGameID() 
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.fsjb24090501, {page_item_id = '加倍',game_id = areaIDAndGameID ,room_level = CF.roomData:getRoomLevel()})
end



function AddMultipleLayer:onSuperAddMultipleBtnClicked(send, eventType)
    local areaIDAndGameID = CF.areaData:getAreaID() .. "_" .. CF.roomData:getGameID() 
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.fsjb24090501, {page_item_id = '超级加倍',game_id = areaIDAndGameID ,room_level = CF.roomData:getRoomLevel()})
    if not CF.game:getModule("AddMultiple"):canUseAddMultipleProp() then 
        CF.TipTool.showToast("钻石不足，无法使用！") 
        return 
    end
    self:showPanelAddMultipleBtns(false)
    CF.game:getModule("AddMultiple"):deductAddMultipleProp()
end

function AddMultipleLayer:onClearAddMultiple()
    self:clearAddMultipleUI(true)
    self:showPanelAddMultipleBtns(false)    
end

function AddMultipleLayer:onAddMultiple(event)
    if CF.game:getModule("GameLayer"):getGameData():getGameStep() ~= CF.GameDefine.GAME_STEP.GAME_STEP_ADD_MULTIPLE then 
        return 
    end 
    local msg = event.msg
    local seat = msg.seat
    local multipleType = msg.multi

    if CF.GameProtocol.msgAddMulti.ADDMULTITYPE.NONE == multipleType then
        if seat == CF.roomData:getSelfSeat() then 
            self:showPanelAddMultipleBtns(true)  
            local addMultipleCardPropID = CF.game:getModule("AddMultiple"):getAddMultipleCardPropID()
            local addMultipleCardCount = CF.game:getModule("PropUse"):getPropCnt(addMultipleCardPropID)  

            local comsumeAddMultipleCardCount = CF.game:getModule("AddMultiple"):getComsumeAddMultipleCardCount()
            local comsumeAddMulitpleDiamondCount = CF.game:getModule("AddMultiple"):getComsumeAddMulitpleDiamondCount()
            local isShowAddMultipleCard = addMultipleCardCount > 0
            if self._uiSuperAddMultipleCard then 
                self._uiSuperAddMultipleCard:setVisible(isShowAddMultipleCard)
            end 
            if self._uiAddMultipleDiamond then 
                self._uiAddMultipleDiamond:setVisible(not isShowAddMultipleCard)
            end 
            if self._addMultipleCardUseCountText then 
                self._addMultipleCardUseCountText:setString("x" .. comsumeAddMultipleCardCount)
            end 
            if self._addMultipleDiamondUseCountText then 
                self._addMultipleDiamondUseCountText:setString(comsumeAddMulitpleDiamondCount)
            end 
        end 
        return 
    else
        if seat == CF.roomData:getSelfSeat() then 
            self:showPanelAddMultipleBtns(false)
        end 
        local player = CF.roomData:getPlayerDataBySeatId(seat)
        if player then 
            CF.soundManager:playSoundAddMultipleType(player:getSex(), multipleType)
        end 
    end 

    local localSeat = CF.roomData:seatToLocal(seat)
    local uiAddMultiple = self["_uiAddMultiple" .. localSeat]
    if uiAddMultiple == nil then 
        return 
    end 
    
    uiAddMultiple:setOpacity(255)
    uiAddMultiple:setScale(1)
    if CF.GameProtocol.msgAddMulti.ADDMULTITYPE.PASS == multipleType then
        uiAddMultiple:loadTexture("txt_bjb.png", ccui.TextureResType.plistType)
    elseif CF.GameProtocol.msgAddMulti.ADDMULTITYPE.DEFAULT == multipleType then
        uiAddMultiple:loadTexture("txt_jb.png", ccui.TextureResType.plistType)
    elseif CF.GameProtocol.msgAddMulti.ADDMULTITYPE.SUPER == multipleType then
        uiAddMultiple:loadTexture("txt_cjjb.png", ccui.TextureResType.plistType)
        uiAddMultiple:setScale(3)
        uiAddMultiple:setOpacity(0)
        -- 创建缩放动作，从3倍缩放到1倍
        local scaleAction = cc.ScaleTo:create(0.166, 1)
        -- 创建渐变透明动作，从0%透明度变到100%
        local fadeAction = cc.FadeTo:create(0.166, 255)
        local spawnAction = cc.Spawn:create(scaleAction, fadeAction)
        uiAddMultiple:runAction(spawnAction)
    end 
    uiAddMultiple:setVisible(true)
    uiAddMultiple:ignoreContentAdaptWithSize(true)
end 


function AddMultipleLayer:onReturnProp(event)
    local data = event.msg.data
    if data.returnReason == CF.GameProtocol.msgReturnProp.REASON.CHAODI then 
        if CF.game:getModule("AddMultiple"):getAddMultipleCardPropID() == data.propID then 
            CF.TipTool.showToast("本局抄底，超级加倍卡已返还！")
        elseif CF.areaData:getPropDiamndID() == data.propID then 
            CF.TipTool.showToast("本局抄底，超级加倍使用的" .. data.propCount ..  "钻石已返还！")
        end 
    elseif data.returnReason == CF.GameProtocol.msgReturnProp.REASON.TIMEOUT then
        if CF.game:getModule("AddMultiple"):getAddMultipleCardPropID() == data.propID then 
            CF.TipTool.showToast("网络波动，超级加倍未成功，超级加倍卡结束后返还！")
        elseif CF.areaData:getPropDiamndID() == data.propID then 
            CF.TipTool.showToast("网络波动，超级加倍未成功，" .. data.propCount ..  "钻石结束后返还！")
        end 
    end 
end 

function AddMultipleLayer:onUpdateAddPos(event)
    if event and event.msg and event.msg.hideSuper then
        self._notAddMultipleBtn:setPositionX(-200)
        self._addMultipleBtn:setPositionX(200)
        self._superAddMultipleBtn:setVisible(false)
    end
end

return AddMultipleLayer�$  