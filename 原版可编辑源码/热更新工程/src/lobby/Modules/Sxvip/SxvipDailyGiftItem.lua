local SxvipDailyGiftItem = class("SxvipDailyGiftItem", XH.ViewBase)

local SxvipConfig = require("lobby.Modules.Sxvip.Config")
local IMG_PATH = "hall/Image/Sxvip/dailyGift/"

function SxvipDailyGiftItem:getCSBPath()
    return "cocosStudio/hall/CSB/Sxvip/SxvipDailyGiftItem.csb"
end

function SxvipDailyGiftItem:getBindingInfo()
    return {
        ["_ANI_BACK"] = {varName = "_ANI_BACK"},
        ["_ANI_FRONT"] = {varName = "_ANI_FRONT"},
        ["_KW_VIP_ROOT"] = {varName = "_root"},
        ["_KW_LIST1"] = {varName = "_list1"},
        ["_KW_LIST2"] = {varName = "_list2"},
        ["_KW_TWO_PROP"] = {varName = "_item"},
        ["_KW_TIP"] = {varName = "_txtTip"},
        ["_KW_BTN_GET1"] = {varName = "_btnGet1", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnGet1"},
        ["_KW_BTN_GET2"] = {varName = "_btnGet2", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnGet2"},
        ["_KW_BTN_TIP"] = {varName = "_btnTip", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnTip"},
        ["_KW_BTN_OPEN"] = {varName = "_btnOpen", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnOpen"}
    }
end

function SxvipDailyGiftItem:getProxyEvents()
    return {
        {module = XH.lobby:getModule("Sxvip"), eventKeyName = "SXVIP_EVENT_STATIC_CONFIG_SUCC", callBack = "onStaticConfigSucc"},
        {module = XH.lobby:getModule("Sxvip"), eventKeyName = "SXVIP_EVENT_REWARD_STATUS", callBack = "onRewardStatus"}
    }
end

function SxvipDailyGiftItem:ctor()
    SxvipDailyGiftItem.super.ctor(self)
    self._item:setVisible(false)
    self:initView()
    self:playAni()
    self:playAniSingle()

    XH.lobby:getModule("Sxvip"):reqDailyRewardStatus()
    XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy24090611)
end

function SxvipDailyGiftItem:playAniSingle()
    local qianAni = self:createBgAni("qian")
    self._ANI_FRONT:addChild(qianAni)

    local houAni = self:createBgAni("hou")
    self._ANI_BACK:addChild(houAni)
end

function SxvipDailyGiftItem:playAni()
    local btnAni = self:createBgAni("btn")
    btnAni:setPosition(cc.p(self._btnGet1:getContentSize().width / 2, self._btnGet1:getContentSize().height / 2))
    self._btnGet1:addChild(btnAni)

    local btnAni2 = self:createBgAni("btn")
    btnAni2:setPosition(cc.p(self._btnGet2:getContentSize().width / 2, self._btnGet2:getContentSize().height / 2))
    self._btnGet2:addChild(btnAni2)
end

-- 外部动画
function SxvipDailyGiftItem:createBgAni(aniName)
    local config = {
        path = "",
        ske = "animation/Lobby/Base/zzb_hy_lblq/zzb_hy_lblq.atlas",
        tex = "animation/Lobby/Base/zzb_hy_lblq/zzb_hy_lblq.json",
        armatureName = aniName,
        scale = 1,
        loop = true,
        lastArmatureName = "loop",
    }
    local dargonBones = display.playDargonBonesSpine(config)
    dargonBones:setAnchorPoint(cc.p(0.5, 0.5))
    return dargonBones
end

-- 单个ITEM突出动画
function SxvipDailyGiftItem:createItemAni()
    local config = {
        path = "",
        ske = "animation/Lobby/Base/zzb_ty_xzk/zzb_ty_xzk.atlas",
        tex = "animation/Lobby/Base/zzb_ty_xzk/zzb_ty_xzk.json",
        armatureName = "animation",
        scale = 1,
        loop = true,
        lastArmatureName = "loop",
    }
    local dargonBones = display.playDargonBonesSpine(config)
    dargonBones:setAnchorPoint(cc.p(0.5, 0.5))
    return dargonBones
end

function SxvipDailyGiftItem:onBtnGet1()
    XH.lobby:getModule("Sxvip"):reqDailyReward(1)
    XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy24090612, {page_item_id='礼包1'})
end
function SxvipDailyGiftItem:onBtnGet2()
    XH.lobby:getModule("Sxvip"):reqDailyReward(2)
    XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy24090612, {page_item_id='礼包2'})
end
function SxvipDailyGiftItem:onBtnOpen()
    XH.viewManager:openView("SxvipShopView", nil, SxvipConfig.ThrowData.source.getProp)
    XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy24090613)
end

function SxvipDailyGiftItem:onBtnTip()
    XH.TipTool.showToast(SxvipConfig.ToastMsg.DailyGiftTip)
end

function SxvipDailyGiftItem:initView()
    local size = self._root:getContentSize()
    self:setContentSize(size)

    self._list1:setScrollBarEnabled(false)
    self._list2:setScrollBarEnabled(false)

    self:refreshView()
end

function SxvipDailyGiftItem:refreshView()
    local isExpire = XH.lobby:getModule("Sxvip"):isExpire()
    local isHave = XH.lobby:getModule("Sxvip"):getHadAwardStatus()
    if not isHave then
        self._btnGet1:loadTexture(IMG_PATH .. "Btn_ylq.png", ccui.TextureResType.plistType)
        self._btnGet2:loadTexture(IMG_PATH .. "Btn_ylq.png", ccui.TextureResType.plistType)
    end
    self._btnGet2:setTouchEnabled(isHave and not isExpire)
    self._btnGet1:setTouchEnabled(isHave and not isExpire)

    self._btnGet1:setVisible(not isExpire)
    self._btnGet2:setVisible(not isExpire)
    self._btnOpen:setVisible(isExpire)

    local rewardsInfo = XH.lobby:getModule("Sxvip"):getPeriodsList()
    --local rewards = {rewardsInfo[1].props or {}}
    local rewards = rewardsInfo[1].props1 or {rewardsInfo[1].props or {}}
    -- local item = nil
    for listIdx = 1, 2 do --2个列表
        local list = self["_list" .. listIdx]
        list:removeAllChildren()
        if rewards[listIdx] and rewards[listIdx].props1 then
            list:getParent():setVisible(true)
            local props = rewards[listIdx].props1
            for i = 1, #props, 2 do
                local itemTwo = self._item:clone()
                itemTwo:setVisible(true)
                local items = itemTwo:getChildren()
                list:pushBackCustomItem(itemTwo)
                for k = 0, 1 do --每行2个道具
                    local data = props[i + k]
                    local item = items[k + 1]
                    if data then
                        item:setVisible(true)
                        item:getChildByName("KW_NAME"):setString(data.propsName)
                        local showCnt = data.cnt
                        if data.propsId == XH.areaData:getPropLimitedTimeRoomCardID() then
                            if XH.areaData:getPropLimitedTimeRoomCardRatio() then
                                showCnt = showCnt / XH.areaData:getPropLimitedTimeRoomCardRatio()
                            end
                        end
                        item:getChildByName("KW_NUM"):setString("x" .. showCnt)
                        local bg = item:getChildByName("KW_BG")
                        local icon = item:getChildByName("KW_ICON")
                        -- XH.UITool.reloadNodeRemoteImage(icon, data.pic)

                        local size = icon:getContentSize()
                        local remoteImage = XH.RemoteImage.new():setPosition(size.width / 2, size.height / 2):ignoreContentAdaptWithSize(false):setContentSize(size.width, size.height):addTo(icon)
                        remoteImage:setUrl(data.pic)
                        if item:getChildByName("KW_SPINE_ANI") == nil and i == 1 and k == 0 then
                            local aniNode = self:createItemAni()
                            aniNode:setLocalZOrder(-1)
                            aniNode:setPosition(cc.p(item:getContentSize().width/2,item:getContentSize().height/2))
                            item:addChild(aniNode)
                        end
                    else
                        item:setVisible(false)
                    end
                end
            end
        else
            list:getParent():setVisible(false)
            self._txtTip:setVisible(false)
            self._list1:getParent():setPositionX(720)
        end
    end
end

function SxvipDailyGiftItem:onRewardStatus()
    self:refreshView()
end

return SxvipDailyGiftItem
