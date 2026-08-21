-- 回归豪礼
local RecallNewGiftView = class("RecallNewGiftView", XH.ViewBase)
local RecallNewConfig = require("lobby.Modules.RecallNew.Config")

function RecallNewGiftView:getCSBPath()
    return "cocosStudio/hall/CSB/RecallNew/RecallNewGift.csb"
end

function RecallNewGiftView:getBindingInfo()
    return {
        ["_KW_BTN_MAIL"] = { varName = "_KW_BTN_MAIL", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickMail" },
        ["_KW_BTN_GET"] = { varName = "_KW_BTN_GET", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickGetAward" },
        ["_KW_IMG_GIFT"] = { varName = "_KW_IMG_GIFT" },
        ["_KW_PRIVILEGE_ITEM"] = { varName = "_KW_PRIVILEGE_ITEM" },
        ["_KW_TEXT_GET"] = { varName = "_KW_TEXT_GET" },
        ["_KW_FINGER"] = { varName = "_KW_FINGER" },
        ["_KW_TIP"] = { varName = "_KW_TIP" },
        ["_KW_ANI_BTN"] = { varName = "_KW_ANI_BTN" },
        ["_KW_ANI_ROOT"] = { varName = "_KW_ANI_ROOT" },
        ["_KW_TQ_SCZK"] = { varName = "_KW_TQ_SCZK", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchItem" },
        ["_KW_TQ_DBCS"] = { varName = "_KW_TQ_DBCS", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchItem" },
        ["_KW_TQ_TQLB"] = { varName = "_KW_TQ_TQLB", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchItem" },
        ["_KW_TQ_DJCY"] = { varName = "_KW_TQ_DJCY" },
    }
end

function RecallNewGiftView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("RecallNew"), eventKeyName = "EVENT_FLUSH_ACT_GIFT", callBack = "flushActInfo" },
    }
end

function RecallNewGiftView:onClickMail()
    XH.viewManager:openView("RecallNewEmailView", nil, true)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080607, { item_id = "", block_label = "回归信", block_item_id = 0, page_item_id = "回归豪礼", page = XH.lobby:getModule("RecallNew"):getCurScene() }, { count = XH.lobby:getModule("RecallNew"):getBackDay(), count1 = 0, count2 = 0 })
end

function RecallNewGiftView:onClickGetAward()
    local info = XH.lobby:getModule("RecallNew"):getGiftInfo()
    if info.isRewardGift == false then
        XH.lobby:getModule("RecallNew"):rewardReBackGiftRequest()
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080607, { item_id = "", block_label = "领奖", block_item_id = 0, page_item_id = "回归豪礼", page = XH.lobby:getModule("RecallNew"):getCurScene() }, { count = XH.lobby:getModule("RecallNew"):getBackDay(), count1 = 0, count2 = 0 })
end

function RecallNewGiftView:flushActInfo()
    self:flushUI()
end

function RecallNewGiftView:setButtonState(node, enable)
    if not node then
        return
    end
    node:setEnabled(enable)
    node:setTouchEnabled(enable)
    node:setBright(enable)
end

function RecallNewGiftView:flushUI()
    local info = XH.lobby:getModule("RecallNew"):getGiftInfo()
    if info.isReback ~= nil then
        self._KW_TEXT_GET:setString(info.isRewardGift and "已领取" or "领取礼包")
        self._KW_ANI_BTN:setVisible(not info.isRewardGift)
        self:setButtonState(self._KW_BTN_GET, not info.isRewardGift)
        if not self._isReport then
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080606, { page_item_id = "回归豪礼", page = XH.lobby:getModule("RecallNew"):getCurScene() }, { count = XH.lobby:getModule("RecallNew"):getBackDay(), count1 = 0, count2 = 0 })
            self._isReport = true
        end
        if self._isResetAni then
            local privilgeList = RecallNewConfig.PlayerPrivilege[info.playerTag] or RecallNewConfig.PlayerPrivilege[RecallNewConfig.ReBackPlayTag.ReTag_Default]
            if privilgeList then
                for i = 1, #privilgeList do
                    for k, v in pairs(RecallNewConfig.PrivilegeListRes) do
                        if k == privilgeList[i] then
                            if self[v] then
                                self[v]:setVisible(true)
                                self[v]:setScale(0)
                                if XH.lobby:getModule("RecallNew"):isHideFeeTab() and k == RecallNewConfig.PrivilegeList.FEE then
                                    self[v]:setVisible(false)
                                end
                            end
                            break
                        end
                    end
                end
            end
            self:showAni()
            self._isResetAni = false
        end
    end
end

-- 播放动画
function RecallNewGiftView:showAni()
    self._KW_BTN_MAIL:setOpacity(0)
    self._KW_TIP:setOpacity(0)
    self._KW_BTN_GET:setScale(0)
    self._KW_BTN_MAIL:setVisible(true)
    self._KW_TIP:setVisible(true)
    self._KW_BTN_GET:setVisible(true)
    local path = "res/animation/Common/qgb_ty_xsdj/"
    local filename = "qgb_ty_xsdj"
    local aniName = "animation"
    XH.SpineManager:playAni(self._KW_FINGER, path, filename, aniName, true)
    local config = {
        path = "",
        ske = "animation/Lobby/Base/zzb_hghd_hghl/zzb_hghd_hghl.atlas",
        tex = "animation/Lobby/Base/zzb_hghd_hghl/zzb_hghd_hghl.json",
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
    self._KW_TQ_SCZK:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = "animation/Lobby/Base/zzb_hghd_hghl/zzb_hghd_hghl_1.json", animationName = "cx", boneName = "tq1", slotName = "tq1" })
    self._KW_TQ_TQLB:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = "animation/Lobby/Base/zzb_hghd_hghl/zzb_hghd_hghl_1.json", animationName = "cx", boneName = "tq2", slotName = "tq2" })
    self._KW_TQ_DBCS:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = "animation/Lobby/Base/zzb_hghd_hghl/zzb_hghd_hghl_1.json", animationName = "cx", boneName = "tq3", slotName = "tq3" })
    self._KW_TQ_DJCY:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = "animation/Lobby/Base/zzb_hghd_hghl/zzb_hghd_hghl_1.json", animationName = "cx", boneName = "tq4", slotName = "tq4" })
    self._KW_BTN_GET:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = "animation/Lobby/Base/zzb_hghd_hghl/zzb_hghd_hghl_1.json", animationName = "cx", boneName = "btn", slotName = "btn" })
    self._KW_TIP:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = "animation/Lobby/Base/zzb_hghd_hghl/zzb_hghd_hghl_1.json", animationName = "cx", boneName = "xinxi", slotName = "xinxi" })
    self._KW_BTN_MAIL:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = "animation/Lobby/Base/zzb_hghd_hghl/zzb_hghd_hghl_1.json", animationName = "cx", boneName = "huiguixin", slotName = "huiguixin" })
    XH.SpineManager:playAni(self._KW_ANI_BTN, "res/animation/Common/", "zzb_ty_ansg", "animation", true)
end

function RecallNewGiftView:onTouchItem(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local type
    for k, v in pairs(RecallNewConfig.PrivilegeListRes) do
        if string.find(send:getName(), v) then
            type = k
            break
        end
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080607, { item_id = type, block_label = "特权", block_item_id = 0, page_item_id = "回归豪礼", page = XH.lobby:getModule("RecallNew"):getCurScene() }, { count = XH.lobby:getModule("RecallNew"):getBackDay(), count1 = 0, count2 = 0 })
    if type == RecallNewConfig.PrivilegeList.FEE then
        XH.lobby:getModule("RecallNew"):flushTab(RecallNewConfig.Tab.FEE)
        return
    end
    local isGo = XH.lobby:getModule("RecallNew"):goPrivilegeTarget(type)
    if isGo then
        XH.viewManager:closeView("RecallNewView")
    end
end

function RecallNewGiftView:clearState(node)
    node:setVisible(false)
    node:removeLuaAllComponents()
end

function RecallNewGiftView:resetAni()
    self._isResetAni = true
    for k, v in pairs(RecallNewConfig.PrivilegeListRes) do
        self:clearState(self[v])
    end
    self:clearState(self._KW_BTN_MAIL)
    self:clearState(self._KW_TIP)
    self:clearState(self._KW_BTN_GET)
    self._KW_ANI_BTN:removeAllChildren()
    self._KW_FINGER:removeAllChildren()
    self._KW_ANI_ROOT:removeAllChildren()
end

function RecallNewGiftView:initUI()
    if XH.lobby:getModule("RecallNew"):isHideFeeTab() then
        self._KW_TQ_DBCS:setVisible(false)
        self._KW_FINGER:setVisible(false)
    end
    self:resetAni()
    XH.lobby:getModule("RecallNew"):getReBackBaseInfoRequest()
end

function RecallNewGiftView:refreshData()
    self._isReport = false
    self:initUI()
end

function RecallNewGiftView:ctor()
    RecallNewGiftView.super.ctor(self)
    self:initUI()
end

function RecallNewGiftView:onDestroy()
    RecallNewGiftView.super.onDestroy(self)
end

function RecallNewGiftView:isFullScreen()
    return false
end

return RecallNewGiftView`%  