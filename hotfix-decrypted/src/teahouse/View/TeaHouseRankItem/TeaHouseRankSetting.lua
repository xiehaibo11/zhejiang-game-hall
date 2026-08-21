---@class TeaHouseRankSetting : View
local TeaHouseRankSetting = class("TeaHouseRankSetting", TeaHouse.View)

local KW_ITEM_OFFSET = 100
local KW_ITEMS_SETINDEXS = 2
local KW_ITEM_HEIGHT_LENGTH = 120

TeaHouseRankSetting.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseRankItem/TeaHouseRankSetting.csb",
    binding = {
        ["_KW_PANEL_MASK"] = { tag = "_KW_PANEL_MASK", name = "_panelMask", class = "panel", events = "onMaskClicked" },
        ["_KW_BTN_CLOSE"] = { tag = "_KW_BTN_CLOSE", name = "_btnClose", class = "btn", events = "onCloseClicked" },
        ["_KW_BTN_OK"] = { tag = "_KW_BTN_OK", name = "_btnOK", class = "btn", events = "onOKClicked" },
        ["_KW_BTN_SHOW"] = { tag = "_KW_BTN_SHOW", name = "_btnShow", class = "btn", events = "onShowClicked" },
        ["_KW_BTN_HIDE"] = { tag = "_KW_BTN_HIDE", name = "_btnHide", class = "btn", events = "onHideClicked" },
        ["_KW_PANEL_ITEM_BG"] = { tag = "_KW_PANEL_ITEM_BG", name = "_panelItemBg", class = "panel" },
        ["_KW_PANEL_ITEM"] = { tag = "_KW_PANEL_ITEM", name = "_panelItem", class = "panel" },
    }
}

function TeaHouseRankSetting:ctor()
    TeaHouseRankSetting.super.ctor(self)

    self._rankBtns = {}

    self:initUI()
end

function TeaHouseRankSetting:initUI()
    self:initRankList()
    self:setRankState(false)

    self:updateSetting()
end

function TeaHouseRankSetting:onEnter()
    self:initEvents()
end

function TeaHouseRankSetting:initEvents()
    local teahouseRank = TeaHouse.manager.teahouseRank
    self:createListener(teahouseRank)
    :addEventListener(teahouseRank.EVENT_RANK_VISIBLE_UPDATE, handler(self, self.onRankVisibleUpdate))
end

function TeaHouseRankSetting:updateSetting()
    local teahouseData = TeaHouse.manager.teahouseData
    local rankBit = teahouseData:getRankBit()
    self:setRankState(TeaHouse.StringTool.bitAnd(rankBit, teahouseData.RANK_BIT.FORBID) == 0)
    self:updateRankList(rankBit)
end

function TeaHouseRankSetting:onRankVisibleUpdate(event)
    self:updateSetting()
end

function TeaHouseRankSetting:onMaskClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:close()
end

function TeaHouseRankSetting:onCloseClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:close()
end

function TeaHouseRankSetting:onOKClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local info = 0
    for tag, rankBtn in pairs(self._rankBtns) do
        if rankBtn:isSelected() then
            info = TeaHouse.StringTool.bitOr(info, tag)
        end
    end
    local teahouseData = TeaHouse.manager.teahouseData
    if self._btnHide then
        if self._btnHide:isVisible() then
            info = TeaHouse.StringTool.bitOr(info, teahouseData.RANK_BIT.FORBID)
        end
    end
    TeaHouse.manager.teahouseRank:reqSetRanklistVisible(info)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_62)
end

function TeaHouseRankSetting:onShowClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:setRankState(false)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_57)
end

function TeaHouseRankSetting:onHideClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:setRankState(true)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_57)
end

function TeaHouseRankSetting:setRankState(isShow)
    if self._btnShow then
        self._btnShow:setVisible(isShow)
    end
    if self._btnHide then
        self._btnHide:setVisible(not isShow)
    end
    for tag, rankBtn in pairs(self._rankBtns) do
        rankBtn:setEnabledEx(isShow)
        if not isShow then
            rankBtn:setSelected(false)
        end
    end
end

function TeaHouseRankSetting:initRankList()
    if not self._panelItemBg or not self._panelItem then
        return
    end
    local teahouseData = TeaHouse.manager.teahouseData
    local rankList = {}
    local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
    if SwitchConfig then
        if XH.lobby:getModule("Lobby"):isShowPeakRace() then
            if SwitchConfig.WinLostRate ~= 0 then
                rankList[#rankList + 1] = { name = "比赛胜率榜", tag = teahouseData.RANK_BIT.WIN_RATE }
            end
            if SwitchConfig.CostRank ~= 0 then
                rankList[#rankList + 1] = { name = "比赛消耗榜", tag = teahouseData.RANK_BIT.DAY_COST }
            end
            if SwitchConfig.PlayCountRank ~= 0 then
                rankList[#rankList + 1] = { name = "比赛活跃榜", tag = teahouseData.RANK_BIT.DAY_PLAY_COUNT }
            end
            if SwitchConfig.BigWinnerRank ~= 0 then
                rankList[#rankList + 1] = { name = "比赛冠军榜", tag = teahouseData.RANK_BIT.DAY_BIG_WINNER }
            end
            if SwitchConfig.ScoreRank ~= 0 then
                rankList[#rankList + 1] = { name = "比赛积分榜", tag = teahouseData.RANK_BIT.DAY_SCORE }
            end
            if SwitchConfig.WinLoseRank ~= 0 then
                rankList[#rankList + 1] = { name = "比赛积分榜", tag = teahouseData.RANK_BIT.DAY_SCORE }
            end
        else
            if SwitchConfig.CostRank ~= 0 then
                rankList[#rankList + 1] = { name = "消耗排行榜", tag = teahouseData.RANK_BIT.DAY_COST }
            end
            if SwitchConfig.PlayCountRank ~= 0 then
                rankList[#rankList + 1] = { name = "局数排行榜", tag = teahouseData.RANK_BIT.DAY_PLAY_COUNT }
            end
            if SwitchConfig.BigWinnerRank ~= 0 then
                rankList[#rankList + 1] = { name = "冠军排行榜", tag = teahouseData.RANK_BIT.DAY_BIG_WINNER }
            end
            if SwitchConfig.ScoreRank ~= 0 then
                rankList[#rankList + 1] = { name = "优胜值排行榜", tag = teahouseData.RANK_BIT.DAY_SCORE }
            end
        end
    end
    local rankListCount = #rankList
    if rankListCount < 1 then
        return
    end
    local itemBgSize = self._panelItemBg:getContentSize()
    local itemSize = self._panelItem:getContentSize()
    local itemWidth = KW_ITEMS_SETINDEXS * itemSize.width + (KW_ITEMS_SETINDEXS - 1) * KW_ITEM_OFFSET
    local getRankIndex = 0
    for index, rank in ipairs(rankList) do
        local panelItem = self._panelItem:clone()
        getRankIndex = getRankIndex + 1
        panelItem:setVisible(true)
        local textRank = panelItem:getChildByName("_KW_TEXT_RANK")
        if textRank then
            textRank:setString(rank.name)
        end
        local btnRank = panelItem:getChildByName("_KW_BTN_RANK")
        if btnRank then
            function btnRank:setEnabledEx(isEnable)
                btnRank:setEnabled(isEnable)
                panelItem:setEnabled(isEnable)
            end
            panelItem:setName(rank.name)
            panelItem:addTouchEventListener(function(send, eventType)
                if eventType ~= ccui.TouchEventType.ended then
                    return
                end
                btnRank:setSelected(not btnRank:isSelected())
                if btnRank:isSelected() == true then 
                    local name = panelItem:getName()
                    self:throwDate(name)
                end 
            end)
            self._rankBtns[rank.tag] = btnRank
        end

        local getIndexHei = math.modf(getRankIndex / KW_ITEMS_SETINDEXS)
        local getIndexSec = getRankIndex % KW_ITEMS_SETINDEXS
        local widthAddModel = itemSize.width + KW_ITEM_OFFSET
        local heightAddModel = (getIndexHei + getIndexSec - KW_ITEMS_SETINDEXS) * KW_ITEM_HEIGHT_LENGTH
        if getIndexSec == 0 then
            panelItem:setPosition(cc.p((itemBgSize.width - itemWidth) / 2 + itemSize.width / 2 + widthAddModel, itemSize.height / 2 - heightAddModel))
        else
            panelItem:setPosition(cc.p((itemBgSize.width - itemWidth) / 2 + itemSize.width / 2, itemSize.height / 2 - heightAddModel))
        end 

        self._panelItemBg:addChild(panelItem)
    end
end

function TeaHouseRankSetting:throwDate(name)
    if name == "消耗排行榜" then 
        TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_58)
    end
    if name == "局数排行榜" then 
        TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_59)
    end
    if name == "冠军排行榜" then 
        TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_60)
    end
    if name == "优胜值排行榜" then 
        TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_61)
    end
end

function TeaHouseRankSetting:updateRankList(info)
    for tag, rankBtn in pairs(self._rankBtns) do
        rankBtn:setSelected(TeaHouse.StringTool.bitAnd(info, tag) ~= 0)
    end
end

return TeaHouseRankSetting  �$  