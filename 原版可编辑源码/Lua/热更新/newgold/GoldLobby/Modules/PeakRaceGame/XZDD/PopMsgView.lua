local popTypeTable = {
    noFrameJustText = 1, --没有弹出框，只有提示性文字
    textFrame = 2, --有弹出框，弹出框上只有文字，和关闭按钮
    confrimBtnText = 3, --弹出框上多一个确认按钮
    canfirmAndCancelBtnText = 4, --弹出框上有确认和取消按钮
    showToast = 5, --显示toast
    userInfoCanfirmAndCancelBtnText = 6, --带用户信息的弹出窗 有确认和取消
    confrimCheck = 7, --有勾选不再提示的弹框
    canMoreFrame = 8, --可以显示多个，不是类型，前面基础类型值加上这个
    canfirmAndCancelBtnText2 = 0, -- 取消带倒计时的弹窗
}
local confirmBtnImgType = {
    sureType = 1,
    enterType = 2,
    agreeType = 3,
}

local applyOutList = {}    --存储申请退出亲友圈弹窗（playerId为key）

local PopMsgView = class("PopMsgView", cc.load("mvc").ViewBase)
local moreFrameIndex = 0
function PopMsgView:ctor(popType, confirmBtnImgType, ...)
    self.canMore = false
    self.popType = popType
    if popType > 7 then
        self.popType = popType - popTypeTable.canMoreFrame
        self.canMore = true
    end
    self.confirmBtnImgType = confirmBtnImgType
    self.playerIndex = nil

    self.super.ctor(self)
end

function PopMsgView:onCreate()
    local root = nil

    if self.popType == popTypeTable.noFrameJustText then
        -- 文字提示
        self.tipLabel = ccui.Text:create("", "", 35)
        self.tipLabel:addTo(self)
        self.tipLabel:setColor(cc.c3b(255, 0, 0))
        self.tipLabel:move(display.center)
    elseif self.popType == popTypeTable.confrimBtnText then
        -- 带确认的文字提示
        self:createResoueceNode("ShowConfirmBoxView.csb")
        root = self.resourceNode_:getChildByName("Panel_1")
    elseif self.popType == popTypeTable.canfirmAndCancelBtnText then
        -- 带确认取消的文字提示
        self:createResoueceNode("ShowConfirmCancelBoxView.csb")
        root = self.resourceNode_:getChildByName("Panel_1")
    elseif self.popType == popTypeTable.canfirmAndCancelBtnText2 then
        -- 带确认取消的文字提示
        self:createResoueceNode("ShowConfirmCancelBoxView_0.csb")
        root = self.resourceNode_:getChildByName("Panel_1")
        self.tmLabel = g_gameGlobal:findChildWithName(root, "Text_1")
    elseif self.popType == popTypeTable.showToast then
        -- 显示toast
        cc.SpriteFrameCache:getInstance():addSpriteFrames("common/common0.plist")
        local spriteFrame = display.newSpriteFrame("common/tipBox.png")
        self.tipBg = display.newSprite(spriteFrame, display.cx, display.top,
        { capInsets = cc.rect(25, 25, 5, 5) })
        self.tipBg:setAnchorPoint(cc.p(0.5, 0))
        self:add(self.tipBg)

        self.tipLabel = ccui.Text:create("", "", 36)
        self.tipBg:add(self.tipLabel)
    elseif self.popType == popTypeTable.userInfoCanfirmAndCancelBtnText then
        -- 带确认取消的文字提示
        self:createResoueceNode("ShowUserInfoConfirmCancelBoxView.csb")
        root = self.resourceNode_:getChildByName("Panel_1")
    elseif self.popType == popTypeTable.confrimCheck then
        self:createResoueceNode("ShowConfirmCheckBoxView.csb")
        root = self.resourceNode_:getChildByName("Panel_1")
        self.checkBox = ccui.Helper:seekWidgetByName(root, "check")
        self.check = 0
    end

    --  提示性文字 
    if self.tipLabel == nil and root then
        self.tipLabel = ccui.Helper:seekWidgetByName(root, "tipLabel")
        self.tipLabel:setFontName("")
    end

    if self.confirmBtnImgType and root then
        cc.SpriteFrameCache:getInstance():addSpriteFrames("common/common0.plist")
        local confirmBtnTitleImg = ccui.Helper:seekWidgetByName(root, "confirmBtnTitleImg")
        if confirmBtnTitleImg then
            if self.confirmBtnImgType == confirmBtnImgType.sureType then
                confirmBtnTitleImg:loadTexture("Match/common/btn_title_sure.png", ccui.TextureResType.plistType)
            elseif self.confirmBtnImgType == confirmBtnImgType.enterType then
                confirmBtnTitleImg:loadTexture("Match/common/btn_title_enter.png", ccui.TextureResType.plistType)
            end
        end
    end

    --  关闭按钮
    local closeBtn = ccui.Helper:seekWidgetByName(root, "closeBtn")
    if closeBtn then
        closeBtn:onClick(handler(self, self.close))
    end
    self.closeBtn = closeBtn

    --  确定按钮  
    self.confirmBtn = ccui.Helper:seekWidgetByName(root, "confirmBtn")

    --  取消按钮  
    self.cancelBtn = ccui.Helper:seekWidgetByName(root, "cancelBtn")

    self.cancelBtn = ccui.Helper:seekWidgetByName(root, "cancelBtn")

    self.touxiangImage = g_gameGlobal:findChildWithName(root, "touxiangImage")

    self.playerName = ccui.Helper:seekWidgetByName(root, "playerName")

    self.playerId = ccui.Helper:seekWidgetByName(root, "playerId")
end

function PopMsgView:onCleanup()
    local children = display.getRunningScene():getChildren()
    for i = #children, 1, -1 do
        local v = children[i]
        if v:getName() and #v:getName() > 0 and v:getName() == self:getName() and v ~= self then
            if v.showMaskForm then
                v:showMaskForm(true)
                break
            end
        end
    end
end


function PopMsgView:close(sender)
    if self.playerIndex then
        applyOutList[self.playerIndex] = nil
    end
    self:closeWithScaleAnimation()
end

function PopMsgView:setInfo(info)
    if self.tipLabel then
        self.tipLabel:setString(info)
    end
end

function PopMsgView:setPlayerInfo(headUrl, name, id)
    self.playerIndex = id
    if self.touxiangImage and headUrl then
        g_gameGlobal:requestHttpImage(frameKind, headUrl, self.touxiangImage, nil, nil, nil, true)
        self.touxiangImage = nil
    end

    if self.playerName then
        local playerName = name and tostring(name) or ""
        self.playerName:setString(g_gameGlobal:cutStringLength(playerName, 7))
    end

    if self.playerId then
        self.playerId:setString(id and tostring(id) or "")
    end
end

--    检查当前场景中是否已经存在该页面
function PopMsgView:checkLayerIsExist(popType)
    if popType > 7 then
        return nil
    end
    local key = "null"
    for i, v in pairs(popTypeTable) do
        if v == popType then
            key = i
        end
    end

    if tolua.isnull(display.getRunningScene()) then
        return nil
    end
    local popMsgViewObj = display.getRunningScene():getChildByName(key)
    return popMsgViewObj
end

function PopMsgView:showMaskForm(value)
    if value == nil then value = false end
    local Panel_mask = self.resourceNode_:getChildByName("Panel_mask")
    if Panel_mask then
        Panel_mask:setVisible(value)
    end
end

--根据类型创建对象
function PopMsgView:open(popType, muti, ...)
    local key = "null"
    for i, v in pairs(popTypeTable) do
        if v == popType then
            key = i
        end
    end
    local popMsgViewObj = nil
    if display.getRunningScene() then
        if popType < popTypeTable.canMoreFrame then
            --    检查当前场景中是否已经存在该页面，如果是，就获取，没有就创建
            popMsgViewObj = display.getRunningScene():getChildByName(key)
            if not popMsgViewObj or muti then

                local children = display.getRunningScene():getChildren()
                for i, v in ipairs(children) do
                    local tt = v:getName()
                    if v:getName() == key then
                        if v.showMaskForm then
                            v:showMaskForm(false)
                        end
                    end
                end

                local pType = popType or popTypeTable.noFrameJustText
                popMsgViewObj = self:create(pType, ...)
                if popMsgViewObj then
                    if pType ~= popTypeTable.noFrameJustText and pType ~= popTypeTable.showToast then
                        popMsgViewObj:openWithScaleAnimation()
                    end
                    popMsgViewObj:setName(key)
                    display.getRunningScene():add(popMsgViewObj, popType == popTypeTable.showToast and 21000 or 900)
                end
            end
        else
            local pType = popType or popTypeTable.noFrameJustText
            popMsgViewObj = self:create(pType, ...)
            if popMsgViewObj then
                if pType ~= popTypeTable.noFrameJustText and pType ~= popTypeTable.showToast then
                    popMsgViewObj:openWithScaleAnimation()
                end
                key = key .. "_" .. moreFrameIndex
                moreFrameIndex = moreFrameIndex + 1
                popMsgViewObj:setName(key)
                display.getRunningScene():add(popMsgViewObj, popType == popTypeTable.showToast and 21000 or 900)
            end
        end
    end
    return popMsgViewObj
end

--没有弹出框，只有提示性文字 
function cc.exports.ShowText(info)
    local type = popTypeTable.noFrameJustText
    local popMsgObj = PopMsgView:checkLayerIsExist(type)
    if not popMsgObj then
        popMsgObj = PopMsgView:open(type)
        if popMsgObj then
            popMsgObj:setInfo(info)
            transition.fadeOut(popMsgObj, { time = 2, removeSelf = true })
        end
    end
end

--有确认按钮,closeBtnVisible表示是否显示关闭按钮 
function cc.exports.ShowConfirmBox(info, confirmFunc, closeBtnVisible, bCloseBox, muti, isMore, doReplace)

    local type = popTypeTable.confrimBtnText
    if isMore then
        type = type + popTypeTable.canMoreFrame
    end
    local popMsgObj = PopMsgView:checkLayerIsExist(type)
    if not popMsgObj or muti or doReplace then
        if not doReplace or not popMsgObj then
            popMsgObj = PopMsgView:open(type, muti)
        end
        if popMsgObj then
            popMsgObj:setInfo(info)
            if confirmFunc then
                if bCloseBox then
                    local function funcBack()
                        confirmFunc()
                        popMsgObj:close()
                    end
                    popMsgObj.confirmBtn:onClick(funcBack)
                else
                    popMsgObj.confirmBtn:onClick(confirmFunc)
                end
            else
                popMsgObj.confirmBtn:onClick(handler(popMsgObj, popMsgObj.close))
            end

            if closeBtnVisible then
                if popMsgObj.closeBtn then
                    popMsgObj.closeBtn:setVisible(false)
                end
            end
        end
    end

    return popMsgObj

end

--有确认和取消按钮
-- bCloseBox表示是否关闭该弹窗，默认不关闭
function cc.exports.ShowConfirmCancelBox(info, confirmFunc, cancelFunc, bCloseBox, confirmTextureType, closeBtnVisible, ismore)
    local type = popTypeTable.canfirmAndCancelBtnText
    if ismore then
        type = type + popTypeTable.canMoreFrame
    end
    local popMsgObj = PopMsgView:checkLayerIsExist(type)
    if not popMsgObj then
        popMsgObj = PopMsgView:open(type, false, confirmTextureType)
        if popMsgObj then
            popMsgObj:setInfo(info)
            if confirmFunc then
                if bCloseBox then
                    local function funcBack()
                        confirmFunc()
                        popMsgObj:close()
                    end
                    popMsgObj.confirmBtn:onClick(funcBack)
                else
                    popMsgObj.confirmBtn:onClick(confirmFunc)
                end
            else
                popMsgObj.confirmBtn:onClick(handler(popMsgObj, popMsgObj.close))
            end

            if cancelFunc then
                if bCloseBox then
                    local function funcBack()
                        cancelFunc()
                        popMsgObj:close()
                    end
                    popMsgObj.cancelBtn:onClick(funcBack)
                else
                    popMsgObj.cancelBtn:onClick(cancelFunc)
                end
            else
                popMsgObj.cancelBtn:onClick(handler(popMsgObj, popMsgObj.close))
            end

            if closeBtnVisible then
                if popMsgObj.closeBtn then
                    popMsgObj.closeBtn:setVisible(false)
                end
            end
        end
    end

    return popMsgObj

end

--显示toastlayer
function cc.exports.ShowToastMsg(info)
    if info == "" then
        return
    end
    XH.TipTool.showToast(info)
    -- local type = popTypeTable.showToast
    -- local popMsgObj = PopMsgView:checkLayerIsExist(type)
    -- if not popMsgObj then
    --     popMsgObj = PopMsgView:open(type)
    --     if popMsgObj then
    --         popMsgObj:setInfo(info)
    --         local width = popMsgObj.tipLabel:getContentSize().width
    --         if popMsgObj.tipBg then
    --             popMsgObj.tipBg:setContentSize(width + 50, 70)
    --             popMsgObj.tipLabel:move(popMsgObj.tipBg:getContentSize().width / 2,
    --             popMsgObj.tipBg:getContentSize().height / 2)

    --             local function RemoveLayer()
    --                 popMsgObj:removeSelf()
    --             end
    --             local moveDownAction = cc.MoveBy:create(0.4, cc.p(0, -popMsgObj.tipBg:getContentSize().height))
    --             local moveUpAction = moveDownAction:reverse()
    --             local delayAction = cc.DelayTime:create(0.7)
    --             local callFuc = cc.CallFunc:create(RemoveLayer)
    --             popMsgObj.tipBg:runAction(cc.Sequence:create(moveDownAction, delayAction, moveUpAction, callFuc))

    --         end
    --     end
    -- end
end

--有确认和取消按钮
-- bCloseBox表示是否关闭该弹窗，默认不关闭
function cc.exports.ShowUserInfoConfirmCancelBox(info, playerHeadUrl, playerName, playerId, confirmFunc, cancelFunc, muti, bCloseBox, confirmTextureType, closeBtnVisible)
    local type = popTypeTable.userInfoCanfirmAndCancelBtnText
    if applyOutList[playerId] then
        return
    end
    local popMsgObj = PopMsgView:checkLayerIsExist(type)
    if not popMsgObj or muti then
        popMsgObj = PopMsgView:open(type, muti, confirmTextureType)
        if popMsgObj then
            popMsgObj:setInfo(info)
            popMsgObj:setPlayerInfo(playerHeadUrl, playerName, playerId)
            if confirmFunc then
                if bCloseBox then
                    local function funcBack()
                        confirmFunc()
                        popMsgObj:close()
                    end
                    popMsgObj.confirmBtn:onClick(funcBack)
                else
                    popMsgObj.confirmBtn:onClick(confirmFunc)
                end
            else
                popMsgObj.confirmBtn:onClick(handler(popMsgObj, popMsgObj.close))
            end

            if cancelFunc then
                if bCloseBox then
                    local function funcBack()
                        cancelFunc()
                        popMsgObj:close()
                    end
                    popMsgObj.cancelBtn:onClick(funcBack)
                else
                    popMsgObj.cancelBtn:onClick(cancelFunc)
                end
            else
                popMsgObj.cancelBtn:onClick(handler(popMsgObj, popMsgObj.close))
            end

            if closeBtnVisible then
                if popMsgObj.closeBtn then
                    popMsgObj.closeBtn:setVisible(false)
                end
            end

            applyOutList[playerId] = popMsgObj
        end
    end

    return popMsgObj

end

--有确认按钮,closeBtnVisible表示是否显示关闭按钮,选择不再提示
function cc.exports.ShowConfirmCheckBox(info, confirmFunc, closeBtnVisible, isSelect)
    local type = popTypeTable.confrimCheck
    local popMsgObj = PopMsgView:checkLayerIsExist(type)
    if not popMsgObj then
        popMsgObj = PopMsgView:open(type)
        if popMsgObj then
            popMsgObj:setInfo(info)

            if isSelect and isSelect ~= 0 then
                popMsgObj.check = 1
                popMsgObj.checkBox:setSelectedState(true)
            end

            popMsgObj.checkBox:onClick(function()
                if popMsgObj.check == 1 then
                    popMsgObj.check = 0
                elseif popMsgObj.check == 0 then
                    popMsgObj.check = 1
                end
            end)

            if confirmFunc then
                popMsgObj.confirmBtn:onClick(confirmFunc)
            else
                popMsgObj.confirmBtn:onClick(handler(popMsgObj, popMsgObj.close))
            end

            if closeBtnVisible == false then
                if popMsgObj.closeBtn then
                    popMsgObj.closeBtn:setVisible(false)
                end
            end
        end
    end

    return popMsgObj

end

function cc.exports.CloseAllPopMsgView()
    applyOutList = {}
    for i, v in pairs(popTypeTable) do
        while true do
            local popMsgView = PopMsgView:checkLayerIsExist(v)
            if popMsgView then
                popMsgView:removeSelf()
            else
                break
            end
        end
    end

    if display.getRunningScene() then
        local ppop = display.getRunningScene():getChildByName("CommonPopMsgViewName")
        if ppop then ppop:removeSelf() end
    end
end

function cc.exports.showAppUpdateTip(info, cancelWaiteTm, confirmFunc, cancelFunc, bCloseBox, confirmTextureType, closeBtnVisible)
    closeBtnVisible = closeBtnVisible or false
    local type = popTypeTable.canfirmAndCancelBtnText2

    local popMsgObj = PopMsgView:checkLayerIsExist(type)
    if not popMsgObj then
        popMsgObj = PopMsgView:open(type, false, confirmTextureType)
        if popMsgObj then
            popMsgObj:setInfo(info)
            if popMsgObj.tmLabel and cancelWaiteTm > 0 then
                popMsgObj.tmLabel:stopAllActions()
                popMsgObj.cancelBtn:setEnabled(false)
                local ani = cc.Sequence:create(cc.CallFunc:create(function()
                    if cancelWaiteTm < 0 then
                        popMsgObj.tmLabel:stopAllActions()
                        popMsgObj.tmLabel:setString("")
                        popMsgObj.cancelBtn:setEnabled(true)
                    else
                        popMsgObj.tmLabel:setString(string.format("%dS", cancelWaiteTm))
                        cancelWaiteTm = cancelWaiteTm - 1
                    end
                end), cc.DelayTime:create(1))
                popMsgObj.tmLabel:runAction(cc.RepeatForever:create(ani))
            end
            if confirmFunc then
                if bCloseBox then
                    local function funcBack()
                        confirmFunc()
                        popMsgObj:close()
                    end
                    popMsgObj.confirmBtn:onClick(funcBack)
                else
                    popMsgObj.confirmBtn:onClick(confirmFunc)
                end
            else
                popMsgObj.confirmBtn:onClick(handler(popMsgObj, popMsgObj.close))
            end

            if cancelFunc then
                if bCloseBox then
                    local function funcBack()
                        cancelFunc()
                        popMsgObj:close()
                    end
                    popMsgObj.cancelBtn:onClick(funcBack)
                else
                    popMsgObj.cancelBtn:onClick(cancelFunc)
                end
            else
                popMsgObj.cancelBtn:onClick(handler(popMsgObj, popMsgObj.close))
            end


            if popMsgObj.closeBtn then
                popMsgObj.closeBtn:setVisible(closeBtnVisible)
            end
        end
    end

    return popMsgObj
end

return PopMsgView