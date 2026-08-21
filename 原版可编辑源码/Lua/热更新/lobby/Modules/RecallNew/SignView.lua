-- 七日签到
local RecallNewSignView = class("RecallNewSignView", XH.ViewBase)

function RecallNewSignView:getCSBPath()
    return "cocosStudio/hall/CSB/RecallNew/RecallNewSign.csb"
end

function RecallNewSignView:getBindingInfo()
    return {
        ["_KW_PANEL_DAY_1"] = { varName = "_KW_PANEL_DAY_1", onTouchEnded = "onTouchItem" },
        ["_KW_PANEL_DAY_2"] = { varName = "_KW_PANEL_DAY_2", onTouchEnded = "onTouchItem" },
        ["_KW_PANEL_DAY_3"] = { varName = "_KW_PANEL_DAY_3", onTouchEnded = "onTouchItem" },
        ["_KW_PANEL_DAY_4"] = { varName = "_KW_PANEL_DAY_4", onTouchEnded = "onTouchItem" },
        ["_KW_PANEL_DAY_5"] = { varName = "_KW_PANEL_DAY_5", onTouchEnded = "onTouchItem" },
        ["_KW_PANEL_DAY_6"] = { varName = "_KW_PANEL_DAY_6", onTouchEnded = "onTouchItem" },
        ["_KW_PANEL_DAY_7"] = { varName = "_KW_PANEL_DAY_7", onTouchEnded = "onTouchItem" },
        ["_KW_PANEL_FINGER_1"] = { varName = "_KW_PANEL_FINGER_1" },
        ["_KW_PANEL_FINGER_2"] = { varName = "_KW_PANEL_FINGER_2" },
        ["_KW_PANEL_FINGER_4"] = { varName = "_KW_PANEL_FINGER_4" },
        ["_KW_PANEL_FINGER_5"] = { varName = "_KW_PANEL_FINGER_5" },
        ["_KW_ANI_ROOT"] = { varName = "_KW_ANI_ROOT" },
        ["_KW_ANI_1"] = { varName = "_KW_ANI_1" },
        ["_KW_ANI_2"] = { varName = "_KW_ANI_2" },
        ["_KW_ANI_3"] = { varName = "_KW_ANI_3" },
        ["_KW_ANI_7_1"] = { varName = "_KW_ANI_7_1" },
        ["_KW_ANI_7_2"] = { varName = "_KW_ANI_7_2" },
        ["_KW_ALL_ANI"] = { varName = "_KW_ALL_ANI" },
    }
end

function RecallNewSignView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("RecallNew"), eventKeyName = "EVENT_FLUSH_ACT_SIGN", callBack = "flushActInfo" },
    }
end

function RecallNewSignView:clearState(node)
    node:setOpacity(0)
    node:removeLuaAllComponents()
end

function RecallNewSignView:resetAni()
    self:clearState(self._KW_ANI_1)
    self:clearState(self._KW_ANI_2)
    self:clearState(self._KW_ANI_3)
    self:clearState(self._KW_ALL_ANI)
    self:clearState(self._KW_ANI_7_1)
    self:clearState(self._KW_PANEL_DAY_7)
    self:clearState(self._KW_ANI_7_2)
end

function RecallNewSignView:showAni()
    self._KW_ANI_ROOT:removeAllChildren()
    local config = {
        path = "",
        ske = "animation/Lobby/Base/zzb_hghd_qrqd/zzb_hghd_qrqd.atlas",
        tex = "animation/Lobby/Base/zzb_hghd_qrqd/zzb_hghd_qrqd.json",
        armatureName = "cx",
        scale = 1,
        loop = false,
        lastArmatureName = "loop",
    }
    local dargonBones = display.playDargonBonesSpine(config)
    dargonBones:registerSpineEventHandler(function(event)
        if self and not tolua.isnull(self) then
            if event.type == 'complete' then
                dargonBones:setAnimation(0, "" .. config.lastArmatureName, true)
            end
        end
    end, sp.EventType.ANIMATION_COMPLETE)
    dargonBones:update(0)
    dargonBones:setAnchorPoint(cc.p(0.5, 0.5))
    local size = self._KW_ANI_ROOT:getContentSize()
    dargonBones:setPosition(cc.p(size.width / 2, size.height / 2))
    self._KW_ANI_ROOT:addChild(dargonBones)
end

function RecallNewSignView:flushActInfo()
    self:flushUI()
end

function RecallNewSignView:flushUI()
    local info = XH.lobby:getModule("RecallNew"):getSignInfo()
    if info.currentIndex then
        self:showAni()
        if not self._isReport then
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080606, { page_item_id = "七日签到", page = XH.lobby:getModule("RecallNew"):getCurScene() }, { count = XH.lobby:getModule("RecallNew"):getBackDay(), count1 = 0, count2 = 0 })
            self._isReport = true
        end
        for i = 1, #info.signInfos do
            local item = self["_KW_PANEL_DAY_" .. i]
            if item then
                local canGet = item:getChildByName("KW_CANGET")
                local img = item:getChildByName("KW_PANEL_IMG")
                local textName = item:getChildByName("KW_TEXT_NAME")
                local isGet = item:getChildByName("KW_IS_GET")
                local isAward = item:getChildByName("KW_HADAWARD")
                local imgFinger = item:getChildByName("KW_ANI_FINGER")
                local cnt = item:getChildByName("KW_ACTIVE")
                XH.lobby:getModule("RecallNew"):setImgUrl(img, info.signInfos[i].props[1].icon)
                textName:setString(info.signInfos[i].props[1].name)
                cnt:setString(XH.lobby:getModule("RecallNew"):getPropCntByInfo(info.signInfos[i].props[1], true, "x"))
                cnt:setVisible(i ~= 7)
                isGet:setVisible(info.signInfos[i].isReward)
                isAward:setVisible(info.signInfos[i].isReward)
                local showNowIndex = info.currentIndex >= 7 and 7 or info.currentIndex
                local showGuide = not info.signInfos[i].isReward and showNowIndex == i
                canGet:setVisible(showGuide)
                if canGet:getChildrenCount() == 0 then
                    local xiaojiNode = XH.SpineManager:playAniWithComplete(canGet, "animation/Lobby/Base/zzb_ty_xiaoji/", "zzb_ty_xiaoji", "cx", false, "loop", true)
                    if xiaojiNode then
                        xiaojiNode:setScale(0.4)
                        xiaojiNode:setPosition(cc.p(25, canGet:getContentSize().height / 2 + 5))
                    end
                end
                if self["_KW_PANEL_FINGER_" .. i] then
                    imgFinger = self["_KW_PANEL_FINGER_" .. i]:getChildByName("KW_ANI_FINGER")
                end
                imgFinger:setVisible(showGuide)
                if imgFinger:getChildrenCount() == 0 then
                    local path = "res/animation/Common/qgb_ty_xsdj/"
                    local filename = "qgb_ty_xsdj"
                    local aniName = "animation"
                    XH.SpineManager:playAni(imgFinger, path, filename, aniName, true)
                end
                local saoguang = item:getChildByName("KW_ANI_SAOGUANG")
                if saoguang then
                    if saoguang:getChildrenCount() == 0 then
                        local path = "res/animation/Lobby/Base/zzb_ty_jlsgk2/"
                        local filename = "zzb_ty_jlsgk2"
                        local aniName = "animation"
                        XH.SpineManager:playAni(saoguang, path, filename, aniName, true)
                    end
                    saoguang:setVisible(not info.signInfos[i].isReward and info.currentIndex >= i)
                end
            end
        end
        self._KW_ALL_ANI:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = "animation/Lobby/Base/zzb_hghd_qrqd/zzb_hghd_qrqd_1.json", animationName = "cx", boneName = "zt", slotName = "zt" })
        self._KW_ANI_1:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = "animation/Lobby/Base/zzb_hghd_qrqd/zzb_hghd_qrqd_1.json", animationName = "cx", boneName = "zt", slotName = "zt" })
        self._KW_ANI_2:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = "animation/Lobby/Base/zzb_hghd_qrqd/zzb_hghd_qrqd_1.json", animationName = "cx", boneName = "zt", slotName = "zt" })
        self._KW_ANI_3:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = "animation/Lobby/Base/zzb_hghd_qrqd/zzb_hghd_qrqd_1.json", animationName = "cx", boneName = "zt", slotName = "zt" })
        self._KW_ANI_7_1:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = "animation/Lobby/Base/zzb_hghd_qrqd/zzb_hghd_qrqd_1.json", animationName = "cx", boneName = "7", slotName = "7" })
        self._KW_ANI_7_2:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = "animation/Lobby/Base/zzb_hghd_qrqd/zzb_hghd_qrqd_1.json", animationName = "cx", boneName = "7", slotName = "7" })
        self._KW_PANEL_DAY_7:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = "animation/Lobby/Base/zzb_hghd_qrqd/zzb_hghd_qrqd_1.json", animationName = "cx", boneName = "7", slotName = "7" })
    end
end

function RecallNewSignView:onTouchItem(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local info = XH.lobby:getModule("RecallNew"):getSignInfo()
    local strIndex = string.gsub(send:getName(), "_KW_PANEL_DAY_", "")
    local index = tonumber(strIndex)
    if info.signInfos and info.signInfos[index] then
        if index > info.currentIndex then
            XH.TipTool.showToast("奖励还没到领取时间")
        elseif not info.signInfos[index].isReward then
            XH.lobby:getModule("RecallNew"):reBackSignRequest(index)
        end
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080607, { item_id = "", block_label = "签到", block_item_id = index, page_item_id = "七日签到", page = XH.lobby:getModule("RecallNew"):getCurScene() }, { count = XH.lobby:getModule("RecallNew"):getBackDay(), count1 = 0, count2 = 0 })
end

function RecallNewSignView:refreshData()
    self._isReport = false
    self:initUI()
end

function RecallNewSignView:initUI()
    self:resetAni()
    XH.lobby:getModule("RecallNew"):getReBackSignInfoRequest()
end

function RecallNewSignView:ctor()
    RecallNewSignView.super.ctor(self)
    self:initUI()
end

function RecallNewSignView:onDestroy()
    RecallNewSignView.super.onDestroy(self)
end

function RecallNewSignView:isFullScreen()
    return false
end

return RecallNewSignView