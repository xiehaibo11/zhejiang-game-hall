local GoldPlayAwardView = class("GoldPlayAwardView", NG.ViewBase)
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")
local GoldNewDefine = require("src.newgold.GoldLobby.Modules.Gold.Define")

-- 超值畅玩
function GoldPlayAwardView:getCSBPath()
    return "cocosStudio/GoldNew/Lobby/CSB/PlayAwardLayer/PlayAwardLayer.csb"
end

function GoldPlayAwardView:getBindingInfo()
    return {
        -- 
        ["_KW_ANI_BG"] = { varName = "_KW_ANI_BG" },
        ["_KW_CLOSE"] = { varName = "_KW_CLOSE", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickClose" },
        ["_PANEL_RULE"] = { varName = "_PANEL_RULE" },
        ["_KW_RULE_CLOSE"] = { varName = "_KW_RULE_CLOSE", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickRuleClose" },
        ["_KW_BTN_RULE"] = { varName = "_KW_BTN_RULE", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickRule" },
        ["_KW_BTN_BUY_FREE"] = { varName = "_KW_BTN_BUY_FREE", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickBuyFree" },
        ["_KW_LABEL_TOP"] = { varName = "_KW_LABEL_TOP" },
        ["_KW_RICHTEXT"] = { varName = "_KW_RICHTEXT" },
        ["_KW_LEFT_CNT"] = { varName = "_KW_LEFT_CNT" },
        ["_KW_LEFT_TIME"] = { varName = "_KW_LEFT_TIME" },
        ["_KW_PANEL_AWARD_"] = { varName = "_KW_PANEL_AWARD_", beginIndex = 1, endIndex = 3 },
        ["_KW_TEXT_HORSE_"] = { varName = "_KW_TEXT_HORSE_", beginIndex = 1, endIndex = 2 }
    }
end

function GoldPlayAwardView:getProxyEvents()
    return {
        --
        { module = NG.goldLobby:getModule("GoldPlayAward"), eventKeyName = "EVENT_CHCW_INFO_SUCCESS", callBack = "flushInfo" },
        { module = NG.sdkManager, eventKeyName = "EVENT_IAP_CALLBACK", callBack = "respBuyDiamond" }
    }
end

function GoldPlayAwardView:ctor(param)
    GoldPlayAwardView.super.ctor(self, param)
    self._startIndex = 1
    self._forEverIndex = 1
    self:initUI()
    NG.goldLobby:getModule("GoldPlayAward"):reqActInfo()
    NG.throwDataManager:throwData(NG.GoldThrowDataDefine.NEW_GOLD_THROW_10, nil, { area_id = GoldAreaConfig.AreaID })
end

function GoldPlayAwardView:respBuyDiamond(event)
    local code = event.data.code
    if code == 200 then
        NG.goldLobby:getModule("GoldPlayAward"):reqActInfo()
    end
end

function GoldPlayAwardView:flushInfo()
    self._info = NG.goldLobby:getModule("GoldPlayAward"):getActInfo()
    if self._info == nil or self._info.info == nil or self._info.data == nil then
        NG.TipTool.showToast("活动已结束")
        self:closeView()
        return
    end
    self:updateBaseInfo()
end

function GoldPlayAwardView:closeView()
    NG.throwDataManager:throwData(NG.GoldThrowDataDefine.NEW_GOLD_THROW_11, nil, { area_id = GoldAreaConfig.AreaID })
    self:removeHorseSchedule()
    self:removeSchedule()
    self:close()
end

function GoldPlayAwardView:updateBaseInfo()
    self._KW_BTN_BUY_FREE:setVisible(NG.goldLobby:getModule("GoldPlayAward"):isCanGetFree())
    local info = NG.goldLobby:getModule("GoldPlayAward"):getBuyLog()
    local buyIndex = -1 -- 购买序号
    if info ~= nil then
        buyIndex = info.id
    end
    self._KW_LABEL_TOP:setVisible(NG.goldLobby:getModule("GoldPlayAward"):getLeftCnt() > 0)
    self._KW_LEFT_CNT:setString(NG.goldLobby:getModule("GoldPlayAward"):getLeftCnt())
    self._time = NG.goldLobby:getModule("GoldPlayAward"):getLeftTime()
    if self._time > 0 then
        self:setSchedule()
    end
    local goods = json.decode(self._info.info.ext).goods
    for i = 1, #goods do
        local itemInfo = goods[i]
        local node = self["_KW_PANEL_AWARD_" .. i]
        node:getChildByName("_KW_CNT"):setString(itemInfo.save .. "次")
        node:getChildByName("_KW_ITEM_GOLD"):getChildByName("_KW_GOLD_CNT"):setString("x" .. itemInfo.gold)
        node:getChildByName("_KW_ITEM_AWARD"):getChildByName("_KW_AWARD_COUNT"):setString(NG.StringTool.getScoreStr(itemInfo.extra))
        local btnBuy = node:getChildByName("_KW_BTN_BUY")
        btnBuy:setVisible(true)
        if i == 1 and self._KW_BTN_BUY_FREE:isVisible() then
            btnBuy:setVisible(false)
        end
        btnBuy:addTouchEventListener(handler(self, self.onClickBuy))
        btnBuy:getChildByName("_KW_TIPS"):getChildByName("_KW_TEXT_TIPS"):setString(string.format("%.1f", itemInfo.price * 10 / itemInfo.origin) .. "折")
        btnBuy:getChildByName("_KW_TEXT_PRICE"):setString("原价" .. itemInfo.origin .. "元")
        btnBuy:getChildByName("_KW_TEXT_COST"):setString(itemInfo.price .. "元抢购")
        local isBuyed = i == buyIndex
        if NG.goldLobby:getModule("GoldPlayAward"):isFreeLevel() then
            isBuyed = false
        end
        btnBuy:getChildByName("_KW_LINE"):setVisible(not isBuyed)
        btnBuy:getChildByName("_KW_TIPS"):setVisible(not isBuyed)
        btnBuy:getChildByName("_KW_TEXT_PRICE"):setVisible(not isBuyed)
        btnBuy:getChildByName("_KW_TEXT_COST"):setVisible(not isBuyed)
        btnBuy:getChildByName("_KW_BUYED"):setVisible(isBuyed)
        btnBuy:setEnabled(not isBuyed)
    end
end

function GoldPlayAwardView:removeHorseSchedule()
    if self._listener then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._listener)
    end
    self._listener = nil
end

function GoldPlayAwardView:setHorseSchedule()
    self:removeHorseSchedule()
    self:dealHorse()
    self._listener = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        self:dealHorse()
    end, 5, false)
end

-- 跑马灯
function GoldPlayAwardView:dealHorse()
    if #self._info.scroll_list == 0 then
        return
    end
    if #self._info.scroll_list == 1 then
        self:setHorseData(1, 1)
        return
    end
    if self._startIndex > #self._info.scroll_list then
        self._startIndex = 1
    end
    self._startIndex = self._startIndex + 1
    if self._startIndex > #self._info.scroll_list then
        self._startIndex = 1
    end
    if self._forEverIndex == 1 then
        self:setHorseData(1, 1)
        self:setHorseData(2, 2)
    else
        self:setHorseData(self._startIndex, 2 - self._startIndex % 2)
    end
    local nowIdx = 2 - self._forEverIndex % 2
    local liveTime = 2
    local moveAni = cc.MoveTo:create(liveTime, cc.p(self["_KW_TEXT_HORSE_" .. nowIdx]:getPositionX(), 45))
    self["_KW_TEXT_HORSE_" .. nowIdx]:runAction(moveAni)
    self["_KW_TEXT_HORSE_" .. (3 - nowIdx)]:setPosition(cc.p(self["_KW_TEXT_HORSE_" .. nowIdx]:getPositionX(), -15))
    local moveAni2 = cc.MoveTo:create(liveTime, cc.p(self["_KW_TEXT_HORSE_" .. nowIdx]:getPositionX(), 15))
    self["_KW_TEXT_HORSE_" .. (3 - nowIdx)]:runAction(moveAni2)
    self._forEverIndex = self._forEverIndex + 1
end

function GoldPlayAwardView:setHorseData(idx, i)
    local giftIdx = { "新手版", "超值版", "尊享版" }
    self["_KW_TEXT_HORSE_" .. i]:setString(self._info.scroll_list[idx].time .. " 玩家" .. self._info.scroll_list[idx].userid .. "购买了" .. giftIdx[self._info.scroll_list[idx].type] .. "礼包")
end

function GoldPlayAwardView:removeSchedule()
    if self._slistener then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._slistener)
    end
    self._slistener = nil
end

function GoldPlayAwardView:setSchedule()
    self:removeSchedule()
    self:dealCountDown()
    self._slistener = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        if self.dealCountDown then
            self:dealCountDown()
        end
    end, 1, false)
end

function GoldPlayAwardView:onClickRule()
    self._PANEL_RULE:setVisible(true)
end

function GoldPlayAwardView:onClickRuleClose()
    self._PANEL_RULE:setVisible(false)
end

function GoldPlayAwardView:onClickClose()
    self:closeView()
end

function GoldPlayAwardView:onClickBuy(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if NG.goldLobby:getModule("GoldPlayAward"):isBuyed() then
        NG.TipTool.showToast("每次只能购买一种畅玩礼包哦~")
        return
    end
    local name = send:getParent():getName()
    local id = string.split(name, "_KW_PANEL_AWARD_")
    local productId = GoldNewDefine.ACTLIST.RECHARGE .. "-" .. NG.goldLobby:getModule("GoldPlayAward"):getActivityId() .. "-" .. id[2]
    NG.goldLobby:getModule("GoldStore"):reqBuyPropByProductId(productId)
    local giftIdx = { "新手版", "超值版", "尊享版" }
    local sGiftName = giftIdx[tonumber(id[2])] or ""
    NG.throwDataManager:throwData(NG.GoldThrowDataDefine.NEW_GOLD_THROW_11, { label = sGiftName }, { area_id = GoldAreaConfig.AreaID })
    self:closeView()
end

function GoldPlayAwardView:onClickBuyFree()
    if NG.goldLobby:getModule("GoldPlayAward"):isBuyed() then
        if not NG.goldLobby:getModule("GoldPlayAward"):isBuyedAndTimesOut() then
            NG.TipTool.showToast("每次只能购买一种畅玩礼包哦~")
            return
        end
    end
    NG.goldLobby:getModule("GoldPlayAward"):reqGetFreeAward()
    self:closeView()
end

function GoldPlayAwardView:initUI()
    -- 动画bg
    local params = { path = "cocosStudio/GoldNew/Lobby/Json/playAward/", tex = "caiyunchaifeng.json", ske = "caiyunchaifeng.atlas", armatureName = "animation" }
    if sp then
        local spineNode = sp.SkeletonAnimation:create(params.path .. params.tex, params.path .. params.ske, 0.6)
        spineNode:setAnimation(0, "" .. params.armatureName, false)
        self._KW_ANI_BG:addChild(spineNode)
        spineNode:setScale(2.5)
        spineNode:setPosition(self._KW_ANI_BG:getContentSize().width / 2, self._KW_ANI_BG:getContentSize().height / 2-105)
    end
end

function GoldPlayAwardView:dealCountDown()
    self._time = self._time - 1
    if self._time <= 0 then
        NG.TipTool.showToast("超值畅玩活动已结束")
        NG.goldLobby:getModule("GoldPlayAward"):reqActInfo()
        self:closeView()
        return
    end
    local tTime = NG.StringTool.secToTime(self._time)
    self._KW_LEFT_TIME:setString(tTime)
end

return GoldPlayAwardView(