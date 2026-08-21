local GoldDailySignInView = class("GoldDailySignInView", NG.ViewBase)
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")

-- 每日签到
function GoldDailySignInView:getCSBPath()
    return "cocosStudio/GoldNew/Lobby/CSB/DailySignIn/DailySignInLayer.csb"
end

function GoldDailySignInView:getBindingInfo()
    return {
        -- 
        ["_KW_CLOSE"] = {varName = "_KW_CLOSE", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickClose"},
        ["_KW_ANI_LEFT"] = {varName = "_KW_ANI_LEFT"},
        ["_KW_SCROLLVIEW"] = {varName = "_KW_SCROLLVIEW"},
        ["_KW_RULE"] = {varName = "_KW_RULE", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickRule"},
        ["_KW_BTN_LEFT"] = {varName = "_KW_BTN_LEFT", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickLeft"},
        ["_KW_BTN_RIGHT"] = {varName = "_KW_BTN_RIGHT", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickRight"},
        ["_KW_BTN_SIGN"] = {varName = "_KW_BTN_SIGN", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickSign"},
        ["_KW_BTN_SIGNED"] = {varName = "_KW_BTN_SIGNED"},
        ["_KW_PANEL_SMALL_ITEM"] = {varName = "_KW_PANEL_SMALL_ITEM"},
        ["_KW_PANEL_BIG_ITEM"] = {varName = "_KW_PANEL_BIG_ITEM"},
        ["_PANEL_RULE"] = {varName = "_PANEL_RULE"},
        ["_KW_DAY_FIX"] = {varName = "_KW_DAY_FIX"},
        ["_KW_DAY_SIGNED"] = {varName = "_KW_DAY_SIGNED"},
        ["_KW_RULE_CLOSE"] = {varName = "_KW_RULE_CLOSE", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickCloseRule"},
        ["_KW_PANEL_ITEM_"] = {varName = "_KW_PANEL_ITEM_", beginIndex = 1, endIndex = 4},
        ["_KW_PROGRESS"] = {varName = "_KW_PROGRESS"}
    }
end

function GoldDailySignInView:getProxyEvents()
    return {
        --
        {module = NG.goldLobby:getModule("GoldDailySignIn"), eventKeyName = "EVENT_SIGN_INFO_SUCCESS", callBack = "flushInfo"}
    }
end

function GoldDailySignInView:ctor(param)
    GoldDailySignInView.super.ctor(self, param)
    self:initUI()
    NG.goldLobby:getModule("GoldDailySignIn"):reqActInfo()
    self._curDay = -1
    NG.throwDataManager:throwData(NG.GoldThrowDataDefine.NEW_GOLD_THROW_14, nil, {area_id = GoldAreaConfig.AreaID})
end

function GoldDailySignInView:flushInfo()
    self._info = NG.goldLobby:getModule("GoldDailySignIn"):getActInfo()
    if self._info == nil then
        NG.TipTool.showToast("活动已结束")
        self:closeView()
        return
    end
    self:updateInfos()
end

function GoldDailySignInView:setTagVisible(node, name)
    local tagIdx = -1
    local logoData = {"唯一", "大额", "大奖"}
    for i, v in pairs(logoData) do
        if name == v then
            tagIdx = i
            break
        end
    end
    node:getChildByName("_KW_TAG_1"):setVisible(tagIdx == 1)
    node:getChildByName("_KW_TAG_2"):setVisible(tagIdx == 2)
    node:getChildByName("_KW_TAG_3"):setVisible(tagIdx == 3)
end

function GoldDailySignInView:updateInfos()
    -- self._KW_DAY_SIGNED:setString(self._info.signDays .. "天")
    -- self._KW_DAY_FIX:setString(self._info.canReSignDays .. "天")
    self._KW_SCROLLVIEW:removeAllChildren()
    local monthCnt = #self._info.content
    for i = 1, monthCnt do
        local itemInfo = self._info.content[i]
        local temp
        if i % 7 == 0 then
            temp = self._KW_PANEL_BIG_ITEM:clone()
            -- 同时处理下方显示
            -- if self["_KW_PANEL_ITEM_" .. (i / 7)] ~= nil then
            --     self["_KW_PANEL_ITEM_" .. (i / 7)]:getChildByName("_KW_GOLD_CNT"):setString(itemInfo.award.name)
            -- end
        else
            temp = self._KW_PANEL_SMALL_ITEM:clone()
        end
        self._KW_SCROLLVIEW:addChild(temp)
        local nX = math.floor(i / 7)
        local nY = i % 7
        local width = self._KW_PANEL_SMALL_ITEM:getContentSize().width * 4
        local height = self._KW_SCROLLVIEW:getContentSize().height * 0.5
        if i % 7 ~= 0 then
            local nCurDay = i % 7
            if nCurDay < 4 then
                height = self._KW_SCROLLVIEW:getContentSize().height * 0.5 + self._KW_PANEL_SMALL_ITEM:getContentSize().height * 0.5
            else
                height = self._KW_SCROLLVIEW:getContentSize().height * 0.5 - self._KW_PANEL_SMALL_ITEM:getContentSize().height * 0.5
                nCurDay = nCurDay - 3
            end
            width = self._KW_PANEL_SMALL_ITEM:getContentSize().width * (nCurDay - 0.5) + nCurDay * 28
        else
            nX = nX - 1
        end
        -- self:setTagVisible(temp, itemInfo.flag)
        temp:setPosition(nX * self._KW_SCROLLVIEW:getContentSize().width + width, height)
        temp:getChildByName("_KW_DAY"):setString(i .. "天")
        temp:getChildByName("_KW_CNT"):setString(itemInfo.rewards[1].count .. itemInfo.rewards[1].name)
        temp:getChildByName("_KW_DAY_GET"):setVisible(itemInfo.draw == 1)
        if self._info.progressLog[#self._info.progressLog] == 0 then
            temp:getChildByName("_KW_DAY_CUR"):setVisible(self._info.progress == (i - 1) and itemInfo.draw == 0)
        end
        local size = temp:getChildByName("_KW_AWARD_IMG"):getContentSize()
        local headImage = NG.RemoteImage.new():setPosition(size.width / 2, size.height / 2):ignoreContentAdaptWithSize(false):setContentSize(size.width, size.height):addTo(temp:getChildByName("_KW_AWARD_IMG"))
        headImage:setUrl(itemInfo.rewards[1].icon or "")
        temp:setVisible(true)
    end

    self._curDay = self._info.progress + 1
    local status = self._info.progressLog[#self._info.progressLog] -- 是否已经签到
    self._KW_BTN_SIGNED:setVisible(not (status == 0))
    self._KW_BTN_SIGN:setVisible(status == 0)
    self._KW_SCROLLVIEW:setScrollBarOpacity(0)
    -- local lineY = math.floor(monthCnt / 7)
    -- if math.floor(monthCnt / 7) ~= (monthCnt / 7) then
    --     lineY = lineY + 1
    -- end
    -- self._KW_SCROLLVIEW:setInnerContainerSize(cc.size(self._KW_SCROLLVIEW:getContentSize().width * lineY, self._KW_SCROLLVIEW:getContentSize().height))
    -- self._KW_PROGRESS:setPercent(100 * self._info.signDays / self._info.monthDays)
end

function GoldDailySignInView:onClickCloseRule()
    self._PANEL_RULE:setVisible(false)
end

function GoldDailySignInView:onClickSign()
    NG.throwDataManager:throwData(NG.GoldThrowDataDefine.NEW_GOLD_THROW_12, {item_id = "第" .. self._curDay .. "天"}, {area_id = GoldAreaConfig.AreaID})
    NG.goldLobby:getModule("GoldDailySignIn"):reqParticipate(self._info.activityId)
end

function GoldDailySignInView:onClickLeft()
    local per = self._KW_SCROLLVIEW:getScrolledPercentHorizontal()
    if per == 0 then
        return
    end
    local nCnt = self._KW_SCROLLVIEW:getInnerContainerSize().width / self._KW_SCROLLVIEW:getContentSize().width - 1
    local singlePer = 100 / nCnt
    per = math.floor(per / singlePer) * singlePer
    local nPer = math.max(0, per - singlePer)
    self._KW_SCROLLVIEW:scrollToPercentHorizontal(nPer, 0.1, false)
end

function GoldDailySignInView:onClickRight()
    local per = self._KW_SCROLLVIEW:getScrolledPercentHorizontal()
    if per == 100 then
        return
    end
    local nCnt = self._KW_SCROLLVIEW:getInnerContainerSize().width / self._KW_SCROLLVIEW:getContentSize().width - 1
    local singlePer = 100 / nCnt
    per = math.floor(per / singlePer) * singlePer
    local nPer = math.min(per + 100 / nCnt, 100)
    self._KW_SCROLLVIEW:scrollToPercentHorizontal(nPer, 0.1, false)
end

-- 规则
function GoldDailySignInView:onClickRule()
    self._PANEL_RULE:setVisible(true)
end

function GoldDailySignInView:onClickClose()
    NG.throwDataManager:throwData(NG.GoldThrowDataDefine.NEW_GOLD_THROW_13, nil, {area_id = GoldAreaConfig.AreaID})
    self:close()
end

function GoldDailySignInView:onScrollEnd(send, eventType)
    -- if eventType ~= 12 then -- SCROLLING_ENDED
    --     return
    -- end
end

function GoldDailySignInView:initUI()
    self._KW_SCROLLVIEW:addEventListener(handler(self, self.onScrollEnd))
    -- 左侧小人
    local params = {path = "cocosStudio/GoldNew/Lobby/Json/dailySignIn/role/", tex = "Qd_1.json", ske = "Qd_1.atlas", armatureName = "animation"}
    local spineNode = display.playDargonBonesSpine(params)
    if spineNode then
        self._KW_ANI_LEFT:addChild(spineNode)
        spineNode:setScale(2.5)
    end
end

return GoldDailySignInView

