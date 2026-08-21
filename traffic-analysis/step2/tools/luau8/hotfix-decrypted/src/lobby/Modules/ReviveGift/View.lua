local ReviveGiftView = class("ReviveGiftView", XH.ViewBase)

local clickClose = false

function ReviveGiftView:getCSBPath()
    return "hall/CSB/ReviveGift/ReviveGiftLayer.csb"
end

function ReviveGiftView:getBindingInfo()
    return {
        ["_KW_POS_CX_ANI"] = {varName = "_posCxAni"},
        ["_KW_POS_GX_ANI"] = {varName = "_posGxAni"},
        ["_KW_GIFT_PANEL"] = {varName = "_panelGift"},
        ["_KW_CLOCK_ANI"] = {varName = "_clockAni"},
        ["_KW_CLOCK_TEXT"] = {varName = "_clockText"},
        ["_KW_ITEM_"] = {varName = "_item", beginIndex = 1, endIndex = 2},
        ["_KW_AWARD_"] = {varName = "_itemAward", beginIndex = 1, endIndex = 2},
        ["_KW_ORI_"] = {varName = "_itemOri", beginIndex = 1, endIndex = 2},
        ["_KW_DIAMOND_UI_"] = {varName = "_diamondUI", beginIndex = 1, endIndex = 2},
        ["_KW_DIAMOND_CNT_"] = {varName = "_textDiamond", beginIndex = 1, endIndex = 2},
        ["_KW_PRICE_"] = {varName = "_price", beginIndex = 1, endIndex = 2},
        ["_KW_BTN_"] = {varName = "_btn", beginIndex = 1, endIndex = 2, type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnRecharge"},
        ["_KW_POS_BTN_ANI_"] = {varName = "_posBtnAni", beginIndex = 1, endIndex = 2},
        ["_KW_CLOSE_BTN"] = {varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnclose"}
    }
end

function ReviveGiftView:getProxyEvents()
    return {
        {module = XH.lobby:getModule("ReviveGift"), eventKeyName = "EVENT_REVIVE_UPDATE_TIME", callBack = "onUpdateTime"},
        {module = XH.sdkManager, eventKeyName = "EVENT_IAP_CALLBACK", callBack = "respBuyProp"}
    }
end

function ReviveGiftView:ctor(param)
    ReviveGiftView.super.ctor(self)
    self._param = param or {}
    self._roomLevel = self._param.roomLevel or -1
    self._gameid = self._param.gameid or -1

    self:initUI()
    if self._param.playSound and type(self._param.playSound) == "function" then
        self._param.playSound()
    end
end

function ReviveGiftView:initUI()
    XH.SpineManager:playAniWithComplete(self._posCxAni, "hall/CSB/ReviveGift/Spine/", "zzb_ap_fhlb", "cx", false, "loop")
    XH.SpineManager:playAniWithComplete(self._posGxAni, "hall/CSB/ReviveGift/Spine/", "zzb_ap_fhlb", "gx", false)
    for i = 1, 2 do
        local item = self["_item" .. i]
        item:addLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = "hall/CSB/ReviveGift/Spine/zzb_ap_fhlb_sz.json", animationName = "cx", boneName = tostring(i), slotName = tostring(i)})
        local btn = self["_posBtnAni" .. i]
        btn:addLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = "hall/CSB/ReviveGift/Spine/zzb_ap_fhlb_sz.json", animationName = "cx", boneName = "btn" .. i, slotName = "btn" .. i})
    end
    self._panelGift:addLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = "hall/CSB/ReviveGift/Spine/zzb_ap_fhlb_sz.json", animationName = "cx", boneName = "fhlb", slotName = "fhlb"})
    self._clockAni:setOpacity(0)
    self._clockAni:addLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = "hall/CSB/ReviveGift/Spine/zzb_ap_fhlb_sz.json", animationName = "cx", boneName = "djs", slotName = "djs"})
    local clock = self._param.clock or 0
    self:initClock(clock)
    local gifts = XH.lobby:getModule("ReviveGift"):getGifts()
    for i = 1, 2 do
        if gifts[i] then
            self["_btn" .. i]:setTag(i)
            self["_itemAward" .. i]:setString(XH.StringTool.numberToString(tonumber(gifts[i].curGold)))
            self["_itemOri" .. i]:setString(XH.StringTool.numberToString(tonumber(gifts[i].oriGold)))

            self["_textDiamond" .. i]:setVisible(gifts[i].diamond > 0)
            self["_diamondUI" .. i]:setVisible(gifts[i].diamond > 0)
            self["_price" .. i]:setVisible(not (gifts[i].diamond > 0))

            if gifts[i].diamond > 0 then
                self["_textDiamond" .. i]:setString(gifts[i].diamond)
            else
                self["_price" .. i]:setString(gifts[i].price .. "元")
            end
        end
    end

    local tmpInfo = ""
    for k, v in pairs(gifts) do
        tmpInfo = tmpInfo .. string.format("复活礼包_￥%s_%s_%s", v.price, XH.StringTool.numberToString(tonumber(v.curGold) or 0, 1) .. "金币", v.id)
        if k ~= #gifts then
            tmpInfo = tmpInfo .. ";"
        end
    end
    local conventionData = {
        page_label = "复活礼包",
        game_id = string.format("%d_%d", XH.areaData:getAreaID(), self._gameid),
        block_label = "游戏区"
    }
    local extraData = {
        source = self._roomLevel,
        info = tmpInfo
    }
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.jblb2024052903, conventionData, extraData)
end

function ReviveGiftView:onBtnRecharge(sender, type)
    if self._param.rechargeCallback then
        self._param.rechargeCallback()
    end
    -- 调起支付
    local tag = sender:getTag()
    local gifts = XH.lobby:getModule("ReviveGift"):pay(tag)
    self:throwClickData(tag)
    if clickClose then
        self:close()
    end
end

function ReviveGiftView:onCloseWithoutCallback()
    self:close()
end

function ReviveGiftView:initClock(deadClock)
    self._clockText:setString(deadClock - os.time() .. "s")
    self._clockText:stopAllActions()
    self._clockText:runAction(
        cc.RepeatForever:create(
            cc.Sequence:create(
                cc.DelayTime:create(1),
                cc.CallFunc:create(
                    function()
                        local clock = deadClock - os.time()
                        self._clockText:setString(clock .. "s")
                        if clock <= 0 then
                            self._clockText:stopAllActions()
                            self:onBtnclose()
                        end
                    end
                )
            )
        )
    )
end

function ReviveGiftView:onUpdateTime(event)
    self:initClock(event.msg)
end

function ReviveGiftView:onBtnclose()
    if self._param.closeCallback then
        self._param.closeCallback()
    end
    self:close()
end

function ReviveGiftView:throwClickData(tag)
    local conventionData = {
        page_label = "复活礼包",
        game_id = string.format("%d_%d", XH.areaData:getAreaID(), self._gameid),
        block_label = "游戏区",
        page_item_id = "充值"
    }
    local gifts = XH.lobby:getModule("ReviveGift"):getGifts()
    local tmpInfo = ""
    if gifts[tag] then
        tmpInfo = string.format("复活礼包_￥%s_%s_%s", gifts[tag].price / 100, XH.StringTool.numberToString(tonumber(gifts[tag].curGold) or 0, 1) .. "金币", gifts[tag].id)
    end
    local extraData = {
        source = self._roomLevel,
        info = tmpInfo -- info信息
    }
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.jblb2024052904, conventionData, extraData)
end

function ReviveGiftView:respBuyProp(event)
    local code = event.data.code
    XH.TipTool.hideLoading()

    if code == 200 then
        -- 充值有延迟，重新刷新
        XH.SysTool.performDelayOnce(
            function()
                XH.playerData:flushPlayerDrop()
            end,
            2
        )
        XH.lobby:getModule("ReviveGift"):paySuccess()
    end
end

return ReviveGiftView
�