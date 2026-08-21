local PeakRaceRuleView = class("PeakRaceRuleView", NG.ViewBase)
local PeakRaceConfig = require("newgold.GoldLobby.Modules.PeakRace.Define")
local ConfigurationDefine = require("lobby.Modules.Configuration.Define")

function PeakRaceRuleView:getCSBPath()
    return "cocosStudio/GoldNew/PeakRace/CSB/PeakRaceRuleLayer.csb"
end

function PeakRaceRuleView:getBindingInfo()
    return {
        -- 
        ["_KW_PANEL_RULE_ITEM"] = { varName = "_KW_PANEL_RULE_ITEM" },
        ["_KW_PANEL_RULE_SMALL_ITEM"] = { varName = "_KW_PANEL_RULE_SMALL_ITEM" },
        ["_KW_BTN_LIST_ITEM"] = { varName = "_KW_BTN_LIST_ITEM" },
        ["_KW_BTN_LIST"] = { varName = "_KW_BTN_LIST" },
        ["_KW_LIST_3"] = { varName = "_KW_LIST_3" },
        ["_KW_LIST_2"] = { varName = "_KW_LIST_2" },
        ["_KW_LIST_1"] = { varName = "_KW_LIST_1" },
        ["_KW_LIST_TEAM"] = { varName = "_KW_LIST_TEAM" },
        ["_KW_LIST_SELF"] = { varName = "_KW_LIST_SELF" },
        ["_KW_UI_BTN_CLOSE"] = { varName = "_KW_UI_BTN_CLOSE", type = NG.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "clickClose" },
        ["_KW_AWARD_TEAM"] = { varName = "_KW_AWARD_TEAM", onTouchEnded = "clickAwardTeam" },
        ["_KW_AWARD_SELF"] = { varName = "_KW_AWARD_SELF", onTouchEnded = "clickAwardSelf" },
        ["_KW_PANEL_TEAM"] = { varName = "_KW_PANEL_TEAM" },
        ["_KW_PANEL_TEAM_1"] = { varName = "_KW_PANEL_TEAM_1" },
        ["_KW_PANEL_TEAM_2"] = { varName = "_KW_PANEL_TEAM_2" },
        ["_KW_PANEL_TEAM_3"] = { varName = "_KW_PANEL_TEAM_3" },
        ["_KW_PANEL_TEAM_4"] = { varName = "_KW_PANEL_TEAM_4" },
        ["_KW_PANEL_TEAM_AWARD"] = { varName = "_KW_PANEL_TEAM_AWARD" },
        ["_KW_PANEL_SELF_AWARD"] = { varName = "_KW_PANEL_SELF_AWARD" },
    }
end

function PeakRaceRuleView:getProxyEvents()
    return {
        --
        { module = NG.goldLobby:getModule("PeakRace"), eventKeyName = "flushRule", callBack = "flushRule" },
    }
end

function PeakRaceRuleView:ctor(param)
    PeakRaceRuleView.super.ctor(self, param)
    self._leftTab = { "奖励", "赛制", "规则" }
    self._personalAward = { "个人积分奖明细", "个人胜率奖明细", "个人冠军奖明细", "个人活跃奖明细" }
    self:initUI()
end

function PeakRaceRuleView:initLeftTab()
    self._KW_BTN_LIST:removeAllChildren()
    for i = 1, 3 do
        local item = self._KW_BTN_LIST_ITEM:clone()
        item:setPosition(self._KW_BTN_LIST:getContentSize().width / 2, self._KW_BTN_LIST:getContentSize().height - (i - 1) * self._KW_BTN_LIST_ITEM:getContentSize().height)
        item:setVisible(true)
        item:setName(i)
        item:getChildByName("_KW_UNCHOSE"):getChildByName("KW_TEXT_ICON"):setString(self._leftTab[i])
        item:getChildByName("_KW_CHOSE"):getChildByName("KW_TEXT_ICON"):setString(self._leftTab[i])
        item:addTouchEventListener(handler(self, self.clickTab))
        self._KW_BTN_LIST:addChild(item)
    end
end

function PeakRaceRuleView:clickAwardTeam()
    self:flushAwardIndex(1)
end

function PeakRaceRuleView:clickAwardSelf()
    self:flushAwardIndex(2)
end

function PeakRaceRuleView:flushAwardIndex(idx)
    self._KW_AWARD_TEAM:getChildByName("KW_CHOSE"):setVisible(idx == 1)
    self._KW_AWARD_SELF:getChildByName("KW_CHOSE"):setVisible(idx == 2)
    self._KW_LIST_TEAM:setVisible(idx == 1)
    self._KW_LIST_SELF:setVisible(idx == 2)
end

function PeakRaceRuleView:clickTab(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:flushLeftState(tonumber(send:getName()))
end

function PeakRaceRuleView:flushLeftState(id)
    for i = 1, #self._KW_BTN_LIST:getChildren() do
        local item = self._KW_BTN_LIST:getChildren()[i]
        item:getChildByName("_KW_CHOSE"):setVisible(id == i)
    end
    for i = 1, 3 do
        if self["_KW_LIST_" .. i] then
            self["_KW_LIST_" .. i]:setVisible(i == id)
        end
    end
end

function PeakRaceRuleView:initUI()
    self:initLeftTab()
    self:flushLeftState(1)
    self:clickAwardTeam()
    local info = NG.goldLobby:getModule("PeakRace"):getRuleDetail()
    if info then
        self:flushUI()
    else
        XH.lobby:getModule("Configuration"):reqConfigDataMd5(ConfigurationDefine.Config.NOCACHE)
    end
end

function PeakRaceRuleView:flushRule()
    self:flushUI()
end

function PeakRaceRuleView:flushUI()
    self:flushRuleUI()
end

function PeakRaceRuleView:flushRuleUI()
    local ruleDetail = self:getRuleDetail()
    if ruleDetail == nil then
        return
    end
    local peakRaceInfo = NG.goldLobby:getModule("PeakRace"):getPeakRaceInfo()
    local ruleOwner = ruleDetail[2]
    local ruleUser = ruleDetail[3]
    local ruleEX1   -- 新增榜单
    local ruleEX2   -- 新增榜单
    local ruleEX3   -- 新增榜单
    if peakRaceInfo and peakRaceInfo.peak_award_info then
        local jsonData = cjson.decode(peakRaceInfo.peak_award_info)
        ruleOwner = jsonData[1]
        ruleUser = jsonData[2]
        ruleEX1 = jsonData[3]
        ruleEX2 = jsonData[4]
        ruleEX3 = jsonData[5]
    end
    for idx, v in pairs(ruleDetail) do
        if idx == 1 then
            for i = 1, 4 do
                local item = self["_KW_PANEL_TEAM_" .. i]
                if item then
                    for k1, v1 in pairs(v) do
                        if k1 == item:getChildByName("KW_TEXT_L"):getString() then
                            item:getChildByName("KW_TEXT_R"):setString(v1)
                            break
                        end
                    end
                end
            end
        elseif idx == 2 then
            self:flushSingleRule(ruleOwner, self._KW_PANEL_TEAM_AWARD)
            local maxHeight = 400 + self._KW_PANEL_TEAM_AWARD:getChildByName("KW_IMG"):getContentSize().height
            local diffHeight = 0
            if maxHeight < self._KW_LIST_TEAM:getContentSize().height then
                maxHeight = self._KW_LIST_TEAM:getContentSize().height
            else
                diffHeight = maxHeight - self._KW_LIST_TEAM:getContentSize().height
            end
            for t = 1, #self._KW_LIST_TEAM:getChildren() do
                local itemT = self._KW_LIST_TEAM:getChildren()[t]
                itemT:setPositionY(itemT:getPositionY() + diffHeight)
            end
            self._KW_LIST_TEAM:setInnerContainerSize(cc.size(self._KW_LIST_TEAM:getContentSize().width, maxHeight))
        elseif idx == 3 then
            self._KW_PANEL_SELF_AWARD:removeAllChildren()
            local maxHeight = 84
            maxHeight = self:addSelfList(ruleUser, self._personalAward[1], maxHeight)
            maxHeight = self:addSelfList(ruleEX1, self._personalAward[2], maxHeight)
            maxHeight = self:addSelfList(ruleEX2, self._personalAward[3], maxHeight)
            maxHeight = self:addSelfList(ruleEX3, self._personalAward[4], maxHeight)
            local diffHeight = 0
            if maxHeight < self._KW_LIST_SELF:getContentSize().height then
                maxHeight = self._KW_LIST_SELF:getContentSize().height
            else
                diffHeight = maxHeight - self._KW_LIST_SELF:getContentSize().height
            end
            for t = 1, #self._KW_LIST_SELF:getChildren() do
                local itemT = self._KW_LIST_SELF:getChildren()[t]
                itemT:setPositionY(itemT:getPositionY() + diffHeight)
            end
            self._KW_LIST_SELF:setInnerContainerSize(cc.size(self._KW_LIST_SELF:getContentSize().width, maxHeight))
        elseif idx == 4 or idx == 5 then
            for k1, v1 in pairs(v) do
                local item = self._KW_LIST_2
                if idx == 5 then
                    item = self._KW_LIST_3
                end
                item:getChildByName("KW_TITLE"):setString(k1)
                local strText = cc.Label:createWithSystemFont("ssssssss", "Arial", 40)
                strText:setWidth(item:getChildByName("KW_TEXT"):getContentSize().width)
                strText:setMaxLineWidth(item:getChildByName("KW_TEXT"):getContentSize().width)
                strText:setColor(cc.c3b(163, 111, 72))
                strText:setAnchorPoint(0.5, 1)
                strText:setPosition(item:getChildByName("KW_TEXT"):getContentSize().width / 2, 0)
                strText:setString(v1)
                item:getChildByName("KW_TEXT"):removeAllChildren()
                item:getChildByName("KW_TEXT"):addChild(strText)
                local maxHeight = item:getChildByName("KW_TITLE"):getContentSize().height + strText:getContentSize().height
                if maxHeight < item:getContentSize().height then
                    maxHeight = item:getContentSize().height
                end
                item:getChildByName("KW_TITLE"):setPositionY(maxHeight)
                item:getChildByName("KW_TEXT"):setPositionY(maxHeight - item:getChildByName("KW_TITLE"):getContentSize().height)
                item:setInnerContainerSize(cc.size(item:getContentSize().width, maxHeight))
                break
            end
        end
    end
end

function PeakRaceRuleView:addSelfList(rule, name, maxHeight)
    if rule then
        local len = 0
        for k, v in pairs(rule) do
            len = len + 1
        end
        if len <= 1 then
            return maxHeight
        end
        local itemR = self._KW_PANEL_RULE_ITEM:clone()
        self:flushSingleRule(rule, itemR, name)
        itemR:setVisible(true)
        itemR:setPositionX(self._KW_PANEL_SELF_AWARD:getContentSize().width / 2)
        local posY = self._KW_PANEL_SELF_AWARD:getContentSize().height
        for i = 1, #self._KW_PANEL_SELF_AWARD:getChildren() do
            local itemZ = self._KW_PANEL_SELF_AWARD:getChildren()[i]
            local bg = itemZ:getChildByName("KW_IMG")
            if bg then
                posY = posY - bg:getContentSize().height - 50
            else
                posY = posY - itemZ:getContentSize().height - 50
            end
        end
        itemR:setPositionY(posY)
        self._KW_PANEL_SELF_AWARD:addChild(itemR)
        maxHeight = maxHeight + itemR:getChildByName("KW_IMG"):getContentSize().height + 50
    end
    return maxHeight
end

-- 因为lua是无序的，这边要重新排序
function PeakRaceRuleView:sortJsonArray(info)
    local data = {}
    for k, v in pairs(info) do
        local idx = -1
        if k ~= "名次" then
            local temp = string.split(k, "-")
            temp = temp[1]
            if temp then
                temp = string.gsub(temp, "第", "")
                temp = string.gsub(temp, "名", "")
                temp = tonumber(temp)
            end
            if temp then
                idx = temp
            end
        else
            idx = 0
        end
        if idx ~= -1 then
            local tmpData = {
                key = k,
                value = v,
                idx = idx,
            }
            data[#data + 1] = tmpData
        end
    end
    table.sort(
    data,
    function(a, b)
        return a.idx < b.idx
    end
    )
    return data
end

-- list 通过外部克隆传入
function PeakRaceRuleView:flushSingleRule(info, list, title)
    local diffHeight = 68
    local info = self:sortJsonArray(info)
    local len = #info
    local idx = 0
    for k, v in pairs(info) do
        idx = idx + 1
        local item = self._KW_PANEL_RULE_SMALL_ITEM:clone()
        item:setPositionX(list:getContentSize().width / 2)
        item:setPositionY(list:getContentSize().height - diffHeight - (idx - 1) * self._KW_PANEL_RULE_SMALL_ITEM:getContentSize().height)
        item:setVisible(true)
        item:getChildByName("KW_TEXT_L"):setString(v.key)
        item:getChildByName("KW_TEXT_R"):setString(v.value)
        list:addChild(item)
    end
    list:getChildByName("KW_IMG"):setContentSize(list:getContentSize().width, self._KW_PANEL_RULE_SMALL_ITEM:getContentSize().height * len + diffHeight)
    if title then
        list:getChildByName("KW_TEXT"):setString(title)
    end
end

function PeakRaceRuleView:getRuleDetail()
    local info = NG.goldLobby:getModule("PeakRace"):getRuleDetail()
    return info
end

function PeakRaceRuleView:clickClose()
    self:close()
end

return PeakRaceRuleView�0  