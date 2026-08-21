local ActFRFirstView = class("ActFRFirstView", XH.Bridge.ViewBase)
local ViewAniConfig = require("app.Base.ViewAniConfig")
local UrlConf = XH.Bridge:require("app.Config.UrlConf")
local LocalConfig = import("...Configs.LocalConfig")
local Utils = import("...Tool.Utils")
local RedPointManager = import("...Manager.RedPointManager")
local POP_UI_PATH = LocalConfig.IMG_PATH.POP
local GIFT_PRICE = {6, 30, 68}
local RICH_TXT = {
    "<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='38' color='#964C1F'>仅需<font color='#fd2626'>6元</font>，立得价值<font color='#fd2626'>60元奖励</font></font>",
    "<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='38' color='#964C1F'>限时抢购，立得<font color='#fd2626'>350%豪华奖励</font></font>",
    "<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='38' color='#964C1F'>限时抢购，立得<font color='#fd2626'>400%豪华奖励</font></font>"
}
function ActFRFirstView:ctor(fromScene, param)
    self._isInCollection = false
    if param and param.isInCollection then
        self._isInCollection = true -- 初始化ui会用到，所以提前设置
    end
    self._module = XH.Bridge:getModule(LocalConfig.MP.ActFR)
    ActFRFirstView.super.ctor(self, param)
    self._tabs = {self._itemLeft1, self._itemLeft2, self._itemLeft3}
    self._panelDays = {self._panelDay1, self._panelDay2, self._panelDay3}
    if param and param.isInCollection then
        self:setInCollection(true, param.parentSize)
    end
    self._isAutoPop = param and param.auto
    if self._isAutoPop then
        XH.lobby:getModule("PopSystem"):initPopClickInfo("goldFirstRecharge")
    end
    XH.Bridge:throwData("jblb2024052903", {page_label = "首充礼包", page = "新金币场大厅"},
                                     {click_source = fromScene or ""})
end

function ActFRFirstView:getCSBPath()
    return XH.Bridge:getCCSResPath("Act/FirstRechargeFirstView.csb")
end

function ActFRFirstView:delayShow(node, delay, time)
    node:setScale(0)
    node:setOpacity(255)
    node:runAction(cc.Sequence:create(cc.DelayTime:create(delay),
                                      cc.Spawn:create(cc.EaseBackOut:create(cc.ScaleTo:create(time or 0.2, 1)), cc.FadeIn:create(time or 0.2))))
end

function ActFRFirstView:getAniConfig()
    if self._isInCollection then
        return nil
    end
    return {aniType = ViewAniConfig.AniName.NORMAL, popNode = self._body}
end

function ActFRFirstView:getBindingInfo()
    return {
        ["_btnClose"] = {varName = "_btnClose", onTouchEnded = "onTouchEventClose", type = XH.UI_TYPE.BUTTON},
        ["_listLeft"] = {varName = "_listLeft"},
        ["_itemLeft1"] = {varName = "_itemLeft1"},
        ["_itemLeft2"] = {varName = "_itemLeft2"},
        ["_itemLeft3"] = {varName = "_itemLeft3"},
        ["_imgLeftTime"] = {varName = "_imgLeftTime"},
        ["_txtLeftTime"] = {varName = "_txtLeftTime"},
        ["_posTitle"] = {varName = "_posTitle"},
        ["_panelDay1"] = {varName = "_panelDay1"},
        ["_panelDay2"] = {varName = "_panelDay2"},
        ["_panelDay3"] = {varName = "_panelDay3"},
        ["_txtBtnGet"] = {varName = "_txtBtnGet"},
        ["_panelPropTip"] = {varName = "_panelPropTip"},
        ["_panelGiftEx1"] = {varName = "_panelGiftEx1"},
        ["_panelGiftEx2"] = {varName = "_panelGiftEx2"},
        ["_panelXL"] = {varName = "_panelXL"},
        ["_posAniTitle"] = {varName = "_posAniTitle"},
        ["_posAniPeople"] = {varName = "_posAniPeople"},
        ["_posAniCaiDai"] = {varName = "_posAniCaiDai"},
        ["_posAniXX"] = {varName = "_posAniXX"},
        ["_posAniXX2"] = {varName = "_posAniXX2"},
        ["_peopleSV"] = {varName = "_peopleSV"},
        ["_body"] = {varName = "_body"},
        ["_layoutBg"] = {varName = "_layoutBg"},
        ["_btnFirstGet"] = {varName = "_btnFirstGet", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onFirstGetClicked"}
    }
end

function ActFRFirstView:getProxyEvents()
    return {{module = self._module, eventKeyName = "EVENT_ACT_INFO", callBack = "onActInfo"}}
end

function ActFRFirstView:onEnter()
    RedPointManager:setState("act/giftPackage/firstRecharge/show", false, false)
    self._module:updateSaveInfo("showed", true)
    self._module:reqActInfo()
    self._peopleSV:setScrollBarEnabled(false)
    if not self._isInCollection then
        self._aniFirst = true
    else
        self._aniFirst = false
    end
    self:initAni()
    self:initUI()
end

function ActFRFirstView:initAni()
    self._aniTitle = Utils:addSpine(self._posAniTitle, "ActFR", "zzb_dt_czkh", "sclb", 1, false)
    self._aniTitle:setVisible(false)
    self._aniPeople = Utils:addSpine(self._posAniPeople, "Common", "zzb_ty_rwlb", "animation", 1, true)
    self._aniCaiDai = Utils:addSpine(self._posAniCaiDai, "Common", "zzb_ty_caidai", "animation", 1, false)
    self._aniCaiDai:setVisible(false)
    Utils:addSpine(self._posAniXX, "Shop", "zzb_ty_xingguang", "animation", 1, true)
    Utils:addSpine(self._posAniXX2, "Shop", "zzb_ty_xingguang", "animation", 1, true)
end

function ActFRFirstView:getModule()
    return self._module
end

function ActFRFirstView:onActInfo()
    self:updateDayGiftState(self._tabIdx)
    self:updateUI()
end

function ActFRFirstView:checkAutoShowSecondView()
    local info = self:getActInfo()
    if info[1].status == 0 then
        return
    end
    local leftTime = info[2].expire - self._module:getServerTime()
    if leftTime <= 0 then
        return
    end
    if self._module:getSaveInfo("autoShowSecondView") ~= true then
        -- 补弹逻辑
        self:showSecondView()
        return true
    end
end

function ActFRFirstView:initUI()
    for i, v in ipairs(self._tabs) do
        XH.UIButton.create(v, XH.UIButton.CLICK_STYLE.NOSCALE, function()
            self:chooseTab(i)
        end)
        RedPointManager:addListener("act/giftPackage/firstRecharge/tab" .. i, function(state)
            if tolua.isnull(self) then
                return
            end
            XH.UITool.setVisible(v, "_imgRedPoint", state)
        end)
    end
    self:chooseTab(1)
    -- self:updateUI()
end

function ActFRFirstView:createRichText(str)
    self._posTitle:removeAllChildren()
    local richText = ccui.RichText:createWithXML(str, {})
    richText:setAnchorPoint(cc.p(0.5, 0.5))
    richText:setPosition(cc.p(0, 0))
    richText:setCascadeOpacityEnabled(true)
    self._posTitle:addChild(richText)
end

function ActFRFirstView:updateUI()
    local info = self:getActInfo()
    if info[1].status == nil then
        return
    end
    local isAutoShowSecondView = self:checkAutoShowSecondView()
    if info[1].status ~= 0 and not isAutoShowSecondView then
        -- 第一个礼包已经充值过
        self._listLeft:setVisible(true)
    else
        self._listLeft:setVisible(false)
    end
    self._panelXL:setVisible(self._tabIdx == 1)
    if XH.isEmbeddedApp() then
        self._panelXL:setVisible(false)
    end
    local leftTime = info[2].expire - self._module:getServerTime()
    local leftTimeStr = self:secondsToTime(leftTime)
    -- XH.UITool.setText(self._itemLeft2, "_txtTime", leftTimeStr)
    -- XH.UITool.setText(self._itemLeft3, "_txtTime", leftTimeStr)
    self._txtLeftTime:setString(leftTimeStr)

    self._imgLeftTime:setVisible(self._tabIdx > 1 and info[self._tabIdx].status == 0)
    local stateStr = {[0] = "", [1] = "(可领取)", [2] = "(已领取)"}
    local dayStr = {"第一天", "第二天", "第三天"}
    for i = 1, 3 do
        XH.UITool.setText(self["_panelDay" .. i], "_txtState", dayStr[i]) -- .. stateStr[info[self._tabIdx].awardStatus[i]])
    end
    self._btnFirstGet:setTouchEnabled(info[self._tabIdx].status ~= 2)
    local btnStr = GIFT_PRICE[self._tabIdx] .. "元购买"
    local isEnd = false
    if info[self._tabIdx].status ~= 0 then
        if info[self._tabIdx].status == 2 or not table.indexof(info[self._tabIdx].awardStatus, 1) then
            btnStr = "已领取"
        else
            btnStr = "领取"
        end
    elseif self._tabIdx > 1 and info[self._tabIdx].status == 0 and leftTime < 0 then
        btnStr = "活动已结束"
    end
    self._txtBtnGet:setString(btnStr)
    self:createRichText(RICH_TXT[self._tabIdx])
    if self._tabIdx == 1 then
        for i = 1, 2 do
            local propInfo = info[self._tabIdx].gift[1][3 + i]
            if propInfo then
                local propid = propInfo.prop_id
                local baseInfo = Utils:getBasePropInfo(propid)
                local propDesc = Utils:getAwardDesc(baseInfo.name or "", propid, propInfo.prop_cnt, propInfo.expire)
                local layout = self["_panelGiftEx" .. i]
                if baseInfo.imageUrl and baseInfo.imageUrl ~= "" then
                    Utils:setImgUrl(layout, baseInfo.imageUrl, true)
                end
                XH.UIButton.create(layout, XH.UIButton.CLICK_STYLE.NOSCALE, function()
                    self:showTip(layout, baseInfo.props_overview or baseInfo.propsname, self)
                end)
            end
        end
    end
end

function ActFRFirstView:secondsToTime(seconds)
    if seconds < 0 then
        return "已结束"
    end
    local days = math.floor(seconds / (24 * 3600))
    seconds = seconds % (24 * 3600)
    local hours = math.floor(seconds / 3600)
    seconds = seconds % 3600
    local minutes = math.floor(seconds / 60)
    seconds = seconds % 60
    if days > 0 then
        return string.format("%d天%02d小时", days, hours)
    elseif hours > 0 then
        return string.format("%02d小时%02d分", hours, minutes)
    else
        return string.format("%02d分%02d秒", minutes, seconds)
    end
end

function ActFRFirstView:getActInfo()
    return self._module:getActInfo()
end

function ActFRFirstView:isFullScreen()
    return true
end

function ActFRFirstView:onTouchEventClose(send, event)
    if self._isAutoPop then
        XH.lobby:getModule("PopSystem"):setClick("close", {id="goldFirstRecharge"})
    end
    self:close()
end

function ActFRFirstView:showTabs()
    self._listLeft:setVisible(true)
    self._listLeft:setOpacity(0)
    self._listLeft:runAction(cc.FadeIn:create(0.3))
end

function ActFRFirstView:initOneDayGift(item, info)
    if not info then
        return
    end
    for i = 1, #info do
        local propid = info[i].prop_id
        local layoutGift = item:getChildByName("_panelGift" .. i)
        local layout = XH.UITool.seekNodeByName(layoutGift, "_layout")
        local txt = XH.UITool.seekNodeByName(layoutGift, "_txt")
        local aniNode = XH.UITool.seekNodeByName(layoutGift, "_ani")
        Utils:addSpine(aniNode, "Common", "zzb_ty_jlsg", "animation")
        if txt then
            if info[i].prop_cnt > 0 then
                txt:setString("x" .. info[i].prop_cnt)
            elseif info[i].expire > 0 then
                local dayCnt = math.floor(info[i].expire / 86400)
                local hourCnt = math.floor(info[i].expire / 3600) % 24
                local str = ""
                if dayCnt >= 1 then
                    str = str .. dayCnt .. "天"
                end
                if hourCnt >= 1 then
                    str = str .. hourCnt .. "小时"
                end
                txt:setString(str)
            end
        end
        if layout and propid then
            local baseInfo = Utils:getBasePropInfo(propid)
            local propDesc = Utils:getAwardDesc(baseInfo.name or "", propid, info[i].prop_cnt, info[i].expire)
            if baseInfo.imageUrl and baseInfo.imageUrl ~= "" then
                Utils:setImgUrl(layout, baseInfo.imageUrl, true)
            elseif baseInfo.imageName then
                local iv = layout.iv
                if not iv then
                    iv = ccui.ImageView:create()
                    local size = layout:getContentSize()
                    iv:setContentSize(size.width, size.height)
                    iv:setPosition(size.width / 2, size.height / 2)
                    layout:addChild(iv)
                    layout.iv = iv
                end
                iv:loadTexture(baseInfo.imageName, ccui.TextureResType.plistType)
                Utils:setFillMode(iv, layout:getContentSize(), "Contain")
            end

            XH.UIButton.create(layout, XH.UIButton.CLICK_STYLE.NOSCALE, function()
                self:showTip(layout, baseInfo.props_overview or baseInfo.propsname)
            end)
        end
    end
end

function ActFRFirstView:showTip(layout, desc)
    if self._lastTip then
        self._lastTip:removeFromParent()
    end
    local tip = self._panelPropTip:clone()
    local pos = layout:convertToWorldSpace(cc.p(54, 150))
    local nodePos = self:convertToNodeSpace(pos)
    tip:setVisible(true)
    tip:setPosition(nodePos)
    self:addChild(tip)
    local txt = XH.UITool.seekNodeByName(tip, "_txtPropTip")
    local arrow = XH.UITool.seekNodeByName(tip, "_imgArrow")
    txt:setString(desc)
    tip:setContentSize(txt:getContentSize().width + 40, 100)
    txt:setPosition(tip:getContentSize().width / 2, tip:getContentSize().height / 2)
    arrow:setPositionX(tip:getContentSize().width / 2)
    self._lastTip = tip
    self._lastTip:runAction(cc.Sequence:create(cc.DelayTime:create(2), cc.CallFunc:create(function()
        self._lastTip:removeFromParent()
        self._lastTip = nil
    end)))
end

function ActFRFirstView:onFirstGetClicked(send, event)
    local dayIdx = self:onGetClick(self._tabIdx)
    Utils:delayTouchEnable(send, 0.5)
    local txt = self._txtBtnGet:getString()
    XH.Bridge:throwData("jblb2024052904", {
        page_label = self._tabIdx == 1 and "首充礼包" or "首充狂欢礼包",
        page = "新金币场大厅",
        page_item_id = txt
    }, {choice = GIFT_PRICE[self._tabIdx], scene_type = dayIdx})
    if self._isAutoPop then
        XH.lobby:getModule("PopSystem"):setClick("buy", {id="goldFirstRecharge"})
    end
end

function ActFRFirstView:onGetClick(idx)
    local info = self:getActInfo()
    if info[idx].status == 0 then
        if idx > 1 then
            local leftTime = info[2].expire - self._module:getServerTime()
            if leftTime < 0 then
                XH.TipTool.showToast("活动已经结束了，快去看看其他活动吧~")
                return 0
            end
        end
        self._module:reqBuyGift(idx)
    else
        local awardIdx = table.indexof(info[idx].awardStatus, 1)
        if awardIdx then
            self._module:reqGetAward(idx, awardIdx)
        else
            XH.TipTool.showToast("没有奖励可以领取")
        end
        return awardIdx
    end
    return 0
end

function ActFRFirstView:showSecondView()
    local movePos = {
        cc.p(self._itemLeft2:getChildByName("_posMoveTo"):convertToWorldSpaceAR(cc.p(0, 0))),
        cc.p(self._itemLeft3:getChildByName("_posMoveTo"):convertToWorldSpaceAR(cc.p(0, 0)))
    }
    XH.Bridge.viewManager:openView("GoldHallFRSecondView", nil, "自动弹出", {movePos = movePos, firstView = self})
end

function ActFRFirstView:updateDayGiftState(level)
    local info = self:getActInfo()
    for j = 1, 3 do
        XH.UITool.setVisible(self._panelDays[j], "_imgSelect", info[level].awardStatus[j] == 1)
        XH.UITool.setVisible(self._panelDays[j], "_imgBgSelect", info[level].awardStatus[j] == 1)
        XH.UITool.setVisible(self._panelDays[j], "_imgYLQ", info[level].awardStatus[j] == 2)
        XH.UIButton.create(self._panelDays[j], XH.UIButton.CLICK_STYLE.NOSCALE, function()
            self:onGetClick(level)
            Utils:delayTouchEnable(self._panelDays[j], 0.5)
            XH.Bridge:throwData("jblb2024052904", {
                page_label = j == 1 and "首充礼包" or "首充狂欢礼包",
                page = "新金币场大厅",
                page_item_id = "领取"
            }, {choice = GIFT_PRICE[j], scene_type = j})
        end)
        self._panelDays[j]:setTouchEnabled(info[level].awardStatus[j] == 1)
    end
end

function ActFRFirstView:chooseTab(idx)
    self._tabIdx = idx
    local info = self:getActInfo()
    for i, v in ipairs(self._tabs) do
        local isSelected = idx == i
        v:setTouchEnabled(not isSelected)
        -- XH.UITool.loadTexture(v, "_imgBg", POP_UI_PATH .. (isSelected and "Btn_tc_xz_di1.png" or "Btn_tc_xz_di2.png"), ccui.TextureResType.plistType)
        -- XH.UITool.setTextColor(v, "_txtName", isSelected and cc.c3b(0x9d, 0x46, 0) or cc.c3b(0x99, 0x83, 0x6e))
        XH.UITool.setVisible(v, "_imgNormal", not isSelected)
        XH.UITool.setVisible(v, "_imgSelect", isSelected)
        if isSelected then
            for j = 1, 3 do
                self:initOneDayGift(self._panelDays[j], info[i].gift[j])
            end
            self:updateDayGiftState(i)
            if self._aniFirst then
                self._aniTitle:runAction(cc.Sequence:create(cc.DelayTime:create(0.2), cc.CallFunc:create(function()
                    self._aniTitle:setAnimation(0, idx == 1 and "sclb" or "sckh", false)
                    self._aniTitle:setVisible(true)
                    self._aniCaiDai:setAnimation(0, "animation", false)
                    self._aniCaiDai:setVisible(true)
                end)))
                self._aniFirst = false
            else
                self._aniTitle:setVisible(true)
                self._aniTitle:setAnimation(0, idx == 1 and "sclb" or "sckh", false)
                self._aniTitle:update(2)
                self._aniCaiDai:setAnimation(0, "animation", false)
            end
        end
    end
    self:updateUI()
end

function ActFRFirstView:setInCollection(bCollection, parentSize)
    self._isInCollection = bCollection
    self._btnClose:setVisible(not bCollection)
    self._layoutBg:setVisible(not bCollection)
    if bCollection then
        self:setScale(0.85)
        self:setAnchorPoint(cc.p(0.5, 0.5))
    end
end
return ActFRFirstView
  vG  