local XiaGuangView = class("XiaGuangView", XH.ViewBase)
local Config = import(".Config")
local ShopConfig = require("lobby.Modules.Shop.Config")
local ActionUtils = require("lobby.Modules.GoldNew.Tool.ActionUtils")
local ITEM_CNT = 9
local ITEM_PROPID = {0, 150781, 150782, 150783, 150784, 150787, 150788, 150785, 150786}

function XiaGuangView:getCSBPath()
    return "cocosStudio/hall/CSB/XiaGuang/XiaGuangMainView.csb"
end

function XiaGuangView:getBindingInfo()
    return {
        ["_btnBack"] = {varName = "_btnBack", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose"},
        ["_btnBuyLeft"] = {varName = "_btnBuyLeft", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickBuyLeft"},
        ["_btnBuyRight"] = {varName = "_btnBuyRight", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickBuyLeft"},
        ["_btnWear"] = {varName = "_btnWear", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickBuyWear"},
        ["_panelRightItem1"] = {varName = "_panelRightItem1", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClicklookVideo"},
        ["_btnLookVideo"] = {varName = "_btnLookVideo", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClicklookVideo"},
        ["_panelDiamond"] = {varName = "_panelDiamond", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickBuyDiamond"},
        ["_btnAddDiamond"] = {varName = "_btnAddDiamond"},
        ["_panelVideoParent"] = {varName = "_panelVideoParent"},
        ["_panelVideo"] = {varName = "_panelVideo", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickCloseVideo"},
        ["_btnTip"] = {varName = "_btnTip", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickTip"},
        ["_listLeft"] = {varName = "_listLeft"},
        ["_panelLeft"] = {varName = "_panelLeft"},
        ["_panelRight"] = {varName = "_panelRight"},
        ["_txtDiamond"] = {varName = "_txtDiamond"},
        ["_imgLeftTimeBg"] = {varName = "_imgLeftTimeBg"},
        ["_txtLeftTime"] = {varName = "_txtLeftTime"},
        ["_posLeftTime"] = {varName = "_posLeftTime"},
        ["_panelLT"] = {varName = "_panelLT"},
        ["_nodeAni"] = {varName = "_nodeAni"},
        ["_nodeBottomAni"] = {varName = "_nodeBottomAni"},
        ["_nodeVideoAni"] = {varName = "_nodeVideoAni"}
    }
end

function XiaGuangView:ctor(param)
    self._module = XH.lobby:getModule("XiaGuang")
    self._param = param or {}
    XiaGuangView.super.ctor(self)
    self:setCascadeOpacityEnabled(true)
    self:initUI()
    if self._module:getExchangeGoods() == nil then
        self._module:reqExchangeGoodListV2(true)
    end

    local _, subId = XH.lobby:getModule("Shop"):getTagsWithName(ShopConfig.SpecialTag.DIAMOND)
    if not XH.lobby:getModule("Shop"):getShopItemsWithId(subId) then
        XH.lobby:getModule("Shop"):reqDiamondProductsInfo(subId)
    end

    self._nodeAni:runAction(cc.RepeatForever:create(cc.Sequence:create(cc.DelayTime:create(1), cc.CallFunc:create(function()
        self:updateLeftTime(self._selectIdx)
    end))))

    self._listenerForeground = cc.EventListenerCustom:create("APP_ENTER_FOREGROUND_EVENT", function()
        self:onEnterForeground()
    end)
    cc.Director:getInstance():getEventDispatcher():addEventListenerWithFixedPriority(self._listenerForeground, 1)

    self:throwData("zjq25061202")

    self:startHide()
    self:startShow()
    if self._param and self._param.gameId then
        self._btnAddDiamond:setVisible(false)
        self._panelDiamond:setTouchEnabled(false)
    end
end

function XiaGuangView:getProxyEvents()
    return {
        {module = XH.playerData, eventKeyName = "EVENT_PLAYER_DROP_CHANGED", callBack = "updateProp"},
        {module = self._module, eventKeyName = "EVENT_EXCHANGE_GOODS_INFO", callBack = "onExGoodsInfo"},
        {module = XH.lobby:getModule("BagSysNew"), eventKeyName = "EVENT_SELF_BACK_PACK_DATA", callBack = "onSelfBagDataUpdate"}
        -- {module = XH.lobby:getModule("BagSysNew"), eventKeyName = "EVENT_OPERATE_PROPS", callBack = "onOperateProps"}
    }
end

function XiaGuangView:onEnter()
    XiaGuangView.super.onEnter(self)
    if self._module:checkAndShowVideo() then
        self:showVideo()
    end
end

function XiaGuangView:onExit()
    if self._listenerForeground then
        cc.Director:getInstance():getEventDispatcher():removeEventListener(self._listenerForeground)
    end
end

function XiaGuangView:initUI()
    self._leftItems = {}
    self._rightItems = {}
    for i = 1, ITEM_CNT do
        self._leftItems[i] = XH.UITool.seekNodeByName(self._csbRoot, "_panelLeftItem" .. i)
        self._rightItems[i] = XH.UITool.seekNodeByName(self._csbRoot, "_panelRightItem" .. i)
        XH.UIButton.create(self._leftItems[i], XH.UIButton.CLICK_STYLE.NOSCALE, function()
            self:changeSelectTab(i)
        end)
    end
    -- 刘海屏适配
    self:adaptForLiuHai()
    self:changeSelectTab(1)
    self:updateProp()
    self._listLeft:setScrollBarEnabled(false)
    self._panelVideo:setVisible(false)
    self._panelVideoParent:setVisible(false)
    if ccexp.VideoPlayer == nil or (device.platform == "ios" and not XH.SysTool:CompareToBundleVersion("1.3.43")) then
        self._panelRightItem1:setTouchEnabled(false)
        self._btnLookVideo:setVisible(false)
    end
end

function XiaGuangView:createRichText(pos, str)
    pos:removeAllChildren()
    local richText = ccui.RichText:createWithXML(str, {})
    richText:setAnchorPoint(cc.p(0.5, 0.5))
    richText:setPosition(cc.p(0, 0))
    pos:addChild(richText)
    self._timeRichText = richText
end

function XiaGuangView:changeSelectTab(idx)
    self:updateLeftItemSelect(idx)
    self:updateRightInfo(idx)
    self:updateLeftTime(idx)
    -- self:updateWearBtn(idx)
    self._selectIdx = idx
end

function XiaGuangView:adaptForLiuHai()
    if not self.hasInit then
        self.hasInit = true
        local notchWidth = XH.UITool.getLiuHaiWidth()
        if notchWidth > 0 then
            XH.UITool.adaptForLiuHai({self._panelLT, self._panelLeft, self._panelRight})
        end
    end
end

function XiaGuangView:onSelfBagDataUpdate()
    self:updateLeftTime(self._selectIdx)
end

function XiaGuangView:onExGoodsInfo()
    self:updateLeftTime(self._selectIdx)
end

function XiaGuangView:updateProp()
    local diamondCnt = XH.playerData:getDiamnd()
    self._txtDiamond:setText(diamondCnt)
end

function XiaGuangView:updateLeftTime(selectIndex)
    local expireTime = 0
    local time = 0
    local state = false
    local propId = ITEM_PROPID[selectIndex]
    if propId == 0 then
        time = self._module:getPropLeftTimeSmallest()
        state = self._module:getAllPropWearState()
    else
        time = self._module:getPropLeftTime(propId)
        state = self._module:getWearState(propId)
    end
    local day = math.floor(time / 86400)
    if time > 0 then
        if day > 0 then
            local str =
                "<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='42' color='#FFFFFF'>倒计时<font color='#57ff41'>%d</font>天</font>"
            -- self._txtLeftTime:setString(string.format(str, day))

            self:createRichText(self._posLeftTime, string.format(str, day))
            self._imgLeftTimeBg:setContentSize(230, 63)
        else
            local hour = math.floor(time / 3600)
            local minute = math.floor(time / 60) % 60
            local second = time % 60
            -- self._txtLeftTime:setString(string.format("倒计时%02d小时%02d分钟%02d秒", hour, minute, second))
            local str =
                "<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='42' color='#FFFFFF'>倒计时<font color='#57ff41'>%02d小时%02d分钟%02d秒</font></font>"
            self:createRichText(self._posLeftTime, string.format(str, hour, minute, second))
            self._imgLeftTimeBg:setContentSize(460, 63)
        end
    else
        expireTime = self._module:getExpireTime(propId)
        day = math.floor(expireTime / 86400)
        local str =
            "<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='42' color='#FFFFFF'>已过期<font color='#57ff41'>%d</font>天</font>"
        if day == 0 then
            str = "<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='42' color='#FFFFFF'>已过期<font color='#57ff41'></font></font>"
        end
        self._imgLeftTimeBg:setContentSize(230, 63)
        self:createRichText(self._posLeftTime, string.format(str, day))
    end
    self._posLeftTime:setVisible(time > 0 or expireTime > 0)
    self._imgLeftTimeBg:setVisible(time > 0 or expireTime > 0)

    if time > 0 then
        local str = {{"一键全使用", "一键全卸下"}, {"使用", "卸下"}}
        XH.UITool.setText(self._btnWear, "txt", str[selectIndex == 1 and 1 or 2][state and 2 or 1])
    end

    local goodInfo = self._module:getExchangeGoods(time > 0) or {}
    self:updateBuyBtn(self._btnBuyLeft, goodInfo[1], time > 0 or expireTime > 0)
    self:updateBuyBtn(self._btnBuyRight, goodInfo[2], time > 0 or expireTime > 0)
    self._btnWear:setVisible(time > 0 and goodInfo[1] ~= nil)
    self._btnBuyRight:setVisible(time <= 0 and goodInfo[1] ~= nil)
end

function XiaGuangView:updateLeftItemSelect(selectIndex)
    for i, v in ipairs(self._leftItems) do
        XH.UITool.setVisible(v, "imgSelect", selectIndex == i)
        v:setTouchEnabled(selectIndex ~= i)
    end
end

function XiaGuangView:updateRightInfo(selectIndex)
    for i, v in ipairs(self._rightItems) do
        if v then
            v:setVisible(i == selectIndex)
            if i == selectIndex and not v.isInit then
                v.isInit = true
                local cfg = Config.aniCfg[i]
                if cfg then
                    if cfg.frame then
                        if cfg.bottom then
                            self:createFrameAni(XH.UITool.seekNodeByName(v, "nodeAniDi"), cfg.bottom)
                        end
                        self:createFrameAni(XH.UITool.seekNodeByName(v, "nodeAni"), cfg)
                    elseif cfg.spine then
                        local node = XH.SpineManager:playAni(XH.UITool.seekNodeByName(v, "nodeAni"), cfg.aniPath, cfg.filename, cfg.animation, true)
                        if node and cfg.scale then
                            node:setScale(cfg.scale)
                        end
                    end
                end
            end
        end
    end
end

function XiaGuangView:updateBuyBtn(btn, goodInfo, isRenew)
    btn.goodInfo = goodInfo
    if goodInfo == nil then
        btn:setVisible(false)
        return
    end
    btn:setVisible(true)
    XH.UITool.setText(btn, "txtCost", goodInfo.condition)
    local buyTip = isRenew and "再续" or "体验"
    XH.UITool.setText(btn, "txtDes", buyTip .. goodInfo.value .. "天")
end

function XiaGuangView:createFrameAni(parent, cfg, sprite)
    return XH.UITool.createFrameAni(parent, cfg, sprite)
end

function XiaGuangView:throwData(key, info)
    local data = clone(info) or {}
    data.page = self._param.scene or "大厅"
    data.room_mode = self._param.roomMode or 0
    data.game_id = self._param.gameId or 0
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine[key], data)
end

function XiaGuangView:onClickCloseVideo()
    if self._videoPlayer then
        self._videoPlayer:removeFromParent()
        self._videoPlayer = nil
    end
    self._panelVideo:setVisible(false)
    self._panelVideoParent:setVisible(false)
end

function XiaGuangView:onEnterForeground()
    self:onClickCloseVideo()
end

function XiaGuangView:showVideo()
    local success = false
    success, self._videoPlayer = XH.VideoManager:playVideo(self._panelVideoParent, Config.VideoPath, cc.size(1928, 888), function(eventType)
        if eventType == ccexp.VideoPlayerEvent.COMPLETED or eventType == ccexp.VideoPlayerEvent.PAUSED then
            self:runAction(cc.Sequence:create(cc.DelayTime:create(0.01), cc.CallFunc:create(function()
                self:onClickCloseVideo()
            end)))
        end
    end)
    if self._videoPlayer then
        self._videoPlayer:setUserInputEnabled(true)
        self._panelVideo:setVisible(true)
        self._panelVideoParent:setVisible(true)
    end
end
--------------事件处理------------

-- 关闭按钮
function XiaGuangView:onTouchEventClose(send, event)
    self:close()
end

function XiaGuangView:onClicklookVideo(send, event)
    self:showVideo()
end

function XiaGuangView:onClickBuyLeft(send, event)
    self:throwData("zjq25061203", {page_item_id = send.goodInfo.propValue .. "天"})

    if self._module:checkDiamondEnough(send.goodInfo, self:getZOrder()) then
        self._module:reqExchangeGoodsV2(send.goodInfo, 1, function(bSuccess)
            if bSuccess then
                self:throwData("zjq25061204", {page_item_id = send.goodInfo.propValue .. "天"})
            end
        end, true)
    end
end

-- function XiaGuangView:onClickBuyRight(send, event)
--     self:throwData("zjq25061203", {page_item_id = "7天"})
--     self._module:reqExchangeGoodsV2(goodInfo, 1, function(bSuccess)
--         if bSuccess then
--             self:throwData("zjq25061204", {page_item_id = "7天"})
--         end
--     end, true)
-- end

function XiaGuangView:onClickBuyDiamond(send, event)
    XH.playerData:flushPlayerDrop()
    XH.Bridge.viewManager:openView("GoldHallShopView", nil, {openType = "Lobby", productType = ShopConfig.SpecialTag.DIAMOND})
end

function XiaGuangView:onClickTip(send, event)
    XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK},
                       "以下游戏暂不支持霞光胜境套装，敬请期待\n台州两帮、暗斗双扣、连炸斗地主、巅峰赛")
end

function XiaGuangView:onClickBuyWear(send, event)
    local propId = ITEM_PROPID[self._selectIdx]
    local time = 0
    local state = false
    if propId == 0 then
        time = self._module:getPropLeftTimeSmallest()
        state = self._module:getAllPropWearState()
    else
        time = self._module:getPropLeftTime(propId)
        state = self._module:getWearState(propId)
    end
    if time <= 0 then
        self:changeSelectTab(self._selectIdx)
        XH.TipTool.showToast("道具时效已结束", 3)
        return
    end
    if state then
        self._module:takeOff(propId)
    else
        self._module:wear(propId)
    end
end

-----------转场动效-----------
function XiaGuangView:startShow()
    self._listLeft:setClippingEnabled(false)
    ActionUtils:runTopFadeIn(self, true, 0, 15 / 30)
    local idx = {1, 3, 2, 5, 4, 7, 6, 9, 8}
    for i, v in ipairs(self._leftItems) do
        v:setOpacity(0)
        ActionUtils:runEntryMoveOut(v, (idx[i] or i) + 1, true, nil, 1 / 2, true, -600)
    end
    ActionUtils:runEntryMoveOut(self._rightItems[1], 1, true, nil, 1 / 2, true, 600)
    for _, v in ipairs({self._btnBuyLeft, self._btnBuyRight, self._btnWear}) do
        v:setOpacity(0)
        v:setScale(0.8)
        v:runAction(cc.Sequence:create(cc.DelayTime:create(0.5),
                                       cc.Spawn:create(cc.FadeIn:create(0.8), cc.EaseBackOut:create(cc.ScaleTo:create(0.3, 1)))))
    end

    for _, v in ipairs({self._posLeftTime, self._imgLeftTimeBg}) do
        v:setOpacity(0)
        v:runAction(cc.Sequence:create(cc.DelayTime:create(0.5), cc.FadeIn:create(0.8)))
    end
    self:runAction(cc.Sequence:create(cc.DelayTime:create(0.5), cc.CallFunc:create(function()
        self._listLeft:setClippingEnabled(true)
    end)))
    XH.SpineManager:playAni(self._nodeAni, "animation/Common/xiaguangshengjing/", "zzb_dttc_xg", "cx", false, function()
        self._nodeAni:runAction(cc.Sequence:create(cc.DelayTime:create(0.01), cc.CallFunc:create(function()
            self._nodeAni:removeAllChildren()
        end)))
    end)
    XH.SpineManager:playAni(self._nodeBottomAni, "animation/Common/xiaguangshengjing/", "zzb_dttc_xg", "loop", true)
    XH.SpineManager:playAni(self._nodeVideoAni, "animation/Common/xiaguangshengjing/", "zzb_dttc_xg", "guang", true)
end

function XiaGuangView:startHide()
end
-----------------------

return XiaGuangView
�?