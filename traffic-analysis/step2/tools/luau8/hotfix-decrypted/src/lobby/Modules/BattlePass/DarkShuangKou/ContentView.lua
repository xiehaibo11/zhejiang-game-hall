local DarkShuangKouBattlePassContentView = class("DarkShuangKouBattlePassContentView", XH.ViewBase)

local uiInfo = {
    {bg = "battlepass_zzzl_ysbj_by.png", bg1 = "battlepass_zzzl_jdt_by_03.png", bg2 = "battlepass_zzzl_jdt_by_01.png", numcolor = cc.c3b(0xa6, 0xec, 0xcf)},
    {bg = "battlepass_zzzl_ysbj_hj.png", bg1 = "battlepass_zzzl_jdt_hj_02.png", bg2 = "battlepass_zzzl_jdt_hj_01.png", numcolor = cc.c3b(0xff, 0xf8, 0xa6)},
    {bg = "battlepass_zzzl_ysbj_zz.png", bg1 = "battlepass_zzzl_jdt_zz_02.png", bg2 = "battlepass_zzzl_jdt_zz_01.png", numcolor = cc.c3b(0xff, 0xf8, 0xa6)}
}

-- UI名字定义
function DarkShuangKouBattlePassContentView:getCSBPath()
    return "hall/CSB/BattlePass/DarkShuangKou/Content.csb"
end

--- 获得节点的绑定信息
function DarkShuangKouBattlePassContentView:getBindingInfo()
    return {
        ["_KW_PANEL_PAGE_"] = {varName = "_panelPage", beginIndex = 1, endIndex = 3},
        ["_KW_STATIC_PANEL"] = {varName = "_staticPanel"},
        ["_KW_MAIN_PANEL"] = {varName = "_mainPanel"},
        ["_KW_MAIN_BG"] = {varName = "_mainBG"},
        ["_KW_ITEM_LEVEL"] = {varName = "_itemLevel"},
        ["_KW_ANI_LIZI"] = {varName = "_aniLiZi"},
        ["_KW_AWARD_GROUP_"] = {varName = "_awardGroup", beginIndex = 1, endIndex = 3},
        ["_KW_ITEM_INDEX"] = {varName = "_itemIndex"}
    }
end

function DarkShuangKouBattlePassContentView:ctor(param)
    param = param or {}
    DarkShuangKouBattlePassContentView.super.ctor(self, param)
    self:setCascadeOpacityEnabled(true)
    self._tabIndex = param.tabIndex

    self._lastIndex = 0
    self._data = {}
    self._maxAwardCnt = {}
    self._awardPoolGoods = {}

    self._itemLevel:setVisible(false)
    for i = 1, 3 do
        self["_awardGroup" .. i]:setScrollBarEnabled(false)
    end

    XH.SpineManager:playAni(self._aniLiZi, "res/animation/Common/", "zzb_ty_piaolizi", "animation", true)
    self._mainBG:loadTexture(uiInfo[self._tabIndex].bg, ccui.TextureResType.plistType)
    self._tableView =
        self._mainPanel:tryAddLuaComponent(
        cc.ext.CompTableView,
        {
            direction = cc.SCROLLVIEW_DIRECTION_HORIZONTAL,
            itemNode = self._itemLevel,
            itemUpdateEvent = handler(self, self.itemUpdateEvent),
            lastItemEvent = handler(self, self.lastItemEvent),
            scrollViewDidScrollEvent = handler(self, self.scrollViewDidScrollEvent),
            bounceable = false
        }
    )

    self:setData()

    local name = {
        [1] = "白银",
        [2] = "黄金",
        [3] = "至尊"
    }
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zjq25042712, {page_item_id = name[self._tabIndex]})
end

function DarkShuangKouBattlePassContentView:getProxyEvents()
    return {
        {module = XH.lobby:getModule("BattlePass.DarkShuangKou"), eventKeyName = "KW_EVENT_UPDATE_UI", callBack = "updateUI"}
    }
end

function DarkShuangKouBattlePassContentView:updateUI(event)
    self:setData()
end

function DarkShuangKouBattlePassContentView:setData()
    self._battlePassInfo = XH.lobby:getModule("BattlePass.DarkShuangKou"):getBattlePassInfo(self._tabIndex)
    self._data, self._maxAwardCnt = XH.lobby:getModule("BattlePass.DarkShuangKou"):getAwardData(self._tabIndex)
    self._awardPoolGoods = XH.lobby:getModule("BattlePass"):getAwardPoolGoods()
    self._tableView:setData(self._data)
    local jumpTo = math.max(self._battlePassInfo.level, 1)
    self._tableView:jumpToIndex(jumpTo)
end

function DarkShuangKouBattlePassContentView:awardItemClickCallback(extInfo, node)
    if extInfo then
        if extInfo.lock == false and extInfo.haveGet == false then -- 未领取
            XH.lobby:getModule("BattlePass.DarkShuangKou"):getAward(self._tabIndex)
        else
            if extInfo.prize and extInfo.prize.prizeName then
                local pos = node:getWorldPosition()
                local posX = pos.x + node:getContentSize().width / 2
                local posY = pos.y + node:getContentSize().height
                XH.viewManager:openView("BattlePassAwardDescView", nil, {desc = extInfo.prize.prizeName, wPos = cc.p(posX, posY)})
            end
        end
    end
end

function DarkShuangKouBattlePassContentView:itemUpdateEvent(item, data, index, isSingleItem)
    item:setCascadeOpacityEnabled(true)
    item:setVisible(true)
    local level = self._data[index].level
    local haveReachingLevel = self._battlePassInfo.level >= level -- 是否达到等级
    local lockPanel = item:getChildByName("_KW_ITEM_LEVEL_LOCK")
    if isSingleItem == true then
        lockPanel:setVisible(false)
    else
        if lockPanel then
            lockPanel:setVisible(not haveReachingLevel)
        end
    end
    local list = item:getChildByName("_KW_ITEM_LEVEL_LIST")
    for i = 1, 3 do
        local itemSize = cc.size(160, 167)
        local awardGroup = list:getChildByName("_KW_AWARD_GROUP_" .. i)
        awardGroup:removeAllChildren()
        self._data[index][i] = self._data[index][i] or {}
        local itemCnt = #self._data[index][i]
        for j = 1, itemCnt do
            local nowData = self._data[index][i][j]
            local nowAward = self._awardPoolGoods[nowData] or {image = "", propValue = 0, propId = 0}

            local extInfo = {}
            extInfo.lock = (not self._battlePassInfo.isBuy[i]) or (not haveReachingLevel) -- 是否已购买战令
            extInfo.haveGet = level < self._battlePassInfo.awardLv[i] -- 奖励是否已领取
            extInfo.ani = haveReachingLevel and not extInfo.haveGet and not extInfo.lock
            -- extInfo.ani = haveReachingLevel and not extInfo.haveGet and not (level < self._battlePassInfo.awardLv[1])
            extInfo.isSingleItem = isSingleItem
            extInfo.lv = i
            extInfo.clickCallback = handler(self, self.awardItemClickCallback)
            extInfo.prize = nowAward
            local item2 = require("lobby.Modules.BattlePass.AwardItemView").new()
            awardGroup:addChild(item2)
            item2:init(nowAward, extInfo)
        end

        awardGroup:setContentSize(cc.size(itemSize.width, itemSize.height * (i == 1 and math.max(self._maxAwardCnt[i], 1) or self._maxAwardCnt[i])))
    end
    local indexItem = list:getChildByName("_KW_ITEM_INDEX")
    if indexItem then
        local awardText = indexItem:getChildByName("_KW_TEXT_INDEX")
        if awardText then
            awardText:setString(level)
            if haveReachingLevel then
                awardText:setColor(cc.c3b(0xf6, 0xff, 0xd4))
                awardText:enableOutline(cc.c3b(0xff, 0x8f, 0x03), 2)
            else
                awardText:setColor(uiInfo[self._tabIndex].numcolor)
                awardText:disableEffect(cc.LabelEffect.OUTLINE)
            end
        end

        local progressBack = indexItem:getChildByName("_KW_PROGRESS_BACK")
        if progressBack then
            progressBack:loadTexture(uiInfo[self._tabIndex].bg1, ccui.TextureResType.plistType)
            if isSingleItem == true then
                progressBack:setVisible(false)
            end
        end
        local progressBack2 = indexItem:getChildByName("_KW_PROGRESS_BACK2")
        if progressBack2 then
            progressBack2:loadTexture(uiInfo[self._tabIndex].bg2, ccui.TextureResType.plistType)
        end

        local progressFront = indexItem:getChildByName("_KW_PROGRESS_FRONT")
        if progressFront then
            progressFront:setVisible(haveReachingLevel)
            local parentWidth = indexItem:getContentSize().width
            local scale = 1
            if self._battlePassInfo.level == level then
                scale = 0.5
            end
            progressFront:setContentSize(cc.size(parentWidth * scale, progressFront:getContentSize().height))
        end
        local progressFront2 = indexItem:getChildByName("_KW_PROGRESS_FRONT2")
        if progressFront2 then
            progressFront2:setVisible(haveReachingLevel)
        end
    end
end

function DarkShuangKouBattlePassContentView:lastItemEvent(index)
    local newIndex = (math.floor(index / 10) + 1) * 10
    if newIndex > self._data[#self._data].level then
        newIndex = self._data[#self._data].level
    end
    if newIndex == self._lastIndex then
        return
    end
    self._lastIndex = newIndex
    self._staticPanel:removeAllChildren()
    local item = self._itemLevel:clone()
    item:setPosition(0, 0)
    self._staticPanel:addChild(item)
    local levelIndex = 0
    for i = 1, #self._data do
        if self._data[i].level == newIndex then
            levelIndex = i
            break
        end
    end
    self:itemUpdateEvent(item, self._data, levelIndex, true)
end

function DarkShuangKouBattlePassContentView:scrollViewDidScrollEvent()
    XH.viewManager:closeView("BattlePassAwardDescView")
end

return DarkShuangKouBattlePassContentView
m#