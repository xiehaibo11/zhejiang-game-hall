local LobbyBattlePassBuyLevelView = class("LobbyBattlePassBuyLevelView", XH.ViewBase)

-- UI名字定义
function LobbyBattlePassBuyLevelView:getCSBPath()
    return "hall/CSB/BattlePass/Lobby/BuyLevelView.csb"
end

--- 获得节点的绑定信息
function LobbyBattlePassBuyLevelView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "close"},
        ["_KW_SLIDER"] = {varName = "_slider", onTouchEnded = "onTouchEventSlider"},
        ["_KW_BTN_REDUCE"] = {varName = "_btnReduce", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventReduce"},
        ["_KW_BTN_ADD"] = {varName = "_btnAdd", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventAdd"},
        ["_KW_BTN_BUY"] = {varName = "_btnBuy", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventBuy"},
        ["_KW_LEVEL_UP_DESC_BG"] = {varName = "_levelUpDescBg"},
        ["_KW_LEVEL_UP_DESC_TXT1"] = {varName = "_levelUpDescTxt1"},
        ["_KW_LEVEL_UP_DESC_TXT2"] = {varName = "_levelUpDescTxt2"},
        ["_KW_REWARD_LIST"] = {varName = "_rewardList"},
    }
end

function LobbyBattlePassBuyLevelView:getProxyEvents()
    return {
        {module = XH.lobby:getModule("Shop"), eventKeyName = "EVNET_DIAMOND_BUY_RESULT", callBack = "onPayResut"}, -- 钻石支付结果
        {module = XH.lobby:getModule("Shop"), eventKeyName = "EVNET_SHOPMANAGER_SHOW_SHOP", callBack = "onDiamondBack"}, -- 获取钻石
    }
end

function LobbyBattlePassBuyLevelView:ctor(param)
    LobbyBattlePassBuyLevelView.super.ctor(self)
    self._rewardList:setScrollBarEnabled(false)
    self._tabIndex = 1
    self._curLevel = XH.lobby:getModule("BattlePass.Lobby"):getCurLevel()    --当前等级
    self._maxLevel = XH.lobby:getModule("BattlePass.Lobby"):getMaxLevel()    --最大等级
    self._addLevel = 1                                                       --增加等级 默认购买1级
    self._targetLevel = 0                                                    --目标等级
    self:initUI()

    local lobbytype = XH.lobby:getModule("Lobby"):getLobbyType()
    local page = lobbytype == XH.LOBBY_TYPE.XIUXIAN and "金币大厅" or "大厅"
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zjq25042707, {page = page})
end

function LobbyBattlePassBuyLevelView:initUI()
    self:updateSliderBuyAddLevel()
    self:updateUI()
end

function LobbyBattlePassBuyLevelView:updateSliderBuyAddLevel()
    local addLevelMax = self._maxLevel - self._curLevel
    self._slider:setPercent(math.ceil(self._addLevel / addLevelMax * 100) )
    self._targetLevel = self._curLevel + self._addLevel
end

function LobbyBattlePassBuyLevelView:updateSliderBuyPercent()
    local percent = self._slider:getPercent()
    self._addLevel = math.ceil(percent / 100 * (self._maxLevel - self._curLevel))
    if self._addLevel < 1 then
        self._addLevel = 1
        self:updateSliderBuyAddLevel()
    end
    self._targetLevel = self._curLevel + self._addLevel
end

function LobbyBattlePassBuyLevelView:onTouchEventReduce(send, event)
    if self._addLevel <= 1 then
        return
    end
    self._addLevel = self._addLevel - 1
    self:updateSliderBuyAddLevel()
    self:updateUI()
end

function LobbyBattlePassBuyLevelView:onTouchEventAdd(send, event)
    if self._addLevel + self._curLevel + 1 > self._maxLevel  then
        return
    end
    self._addLevel = self._addLevel + 1
    self:updateSliderBuyAddLevel()
    self:updateUI()
end

-- 更新加减按钮状态
function LobbyBattlePassBuyLevelView:updateBtnStatus()
    self._btnReduce:setTouchEnabled(self._addLevel > 1)
    self._btnAdd:setTouchEnabled(self._addLevel + self._curLevel < self._maxLevel)
    self._btnReduce:setColor(self._addLevel > 1 and cc.c3b(255, 255, 255) or cc.c3b(160, 160, 160))
    self._btnAdd:setColor(self._addLevel + self._curLevel < self._maxLevel and cc.c3b(255, 255, 255) or cc.c3b(160, 160, 160))
end

-- 更新对应UI
function LobbyBattlePassBuyLevelView:updateUI()
    self:updateBtnStatus()
    self:updateTitleDesc()
    self:updateContentDesc()
    self:updateContentReward()
    self:updatePrice()
end

function LobbyBattlePassBuyLevelView:updateTitleDesc()
    if self._richTitleTxt then
        self._richTitleTxt:removeFromParent()
        self._richTitleTxt = nil
    end
    -- 移除之后再添加
    local richText = string.format("<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='36' color='#782800'>" .. "升至" .. "<font color='#F54500' size='36'>%s</font>" .. "级可领取以下奖励</font>", self._targetLevel)
    if not self._richTitleTxt then
        self._richTitleTxt = ccui.RichText:createWithXML(richText, {})
        self._richTitleTxt:setAnchorPoint(0.5, 0.5)
        self._richTitleTxt:setPosition(cc.p(self._levelUpDescTxt1:getPositionX(), self._levelUpDescTxt1:getPositionY()))
        self._richTitleTxt:setHorizontalAlignment(cc.TEXT_ALIGNMENT_CENTER)
        self._levelUpDescBg:addChild(self._richTitleTxt)
    end
end

function LobbyBattlePassBuyLevelView:updateContentDesc()
    if self._richContentTxt then
        self._richContentTxt:removeFromParent()
        self._richContentTxt = nil
    end
    local richText = string.format("<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='40' color='#782800'>" .. "购买" .. "<font color='#F54500' size='40'>%s</font>" .. "级，升至" .. "<font color='#F54500' size='40'>%s</font>" .."级</font>", self._addLevel, self._targetLevel)
    if not self._richContentTxt then
        self._richContentTxt = ccui.RichText:createWithXML(richText, {})
        self._richContentTxt:setAnchorPoint(0.5, 0.5)
        self._richContentTxt:setPosition(cc.p(self._levelUpDescTxt2:getPositionX(), self._levelUpDescTxt2:getPositionY()))
        self._richContentTxt:setHorizontalAlignment(cc.TEXT_ALIGNMENT_CENTER)
        self:addChild(self._richContentTxt)
    end
end

function LobbyBattlePassBuyLevelView:updateContentReward()
    local allAward = XH.lobby:getModule("BattlePass.Lobby"):getAwardFromLvToLv(self._tabIndex, self._curLevel + 1, self._targetLevel)
    -- 所有奖励列表
    local awardList = {}
    for i = 1, #allAward, 1 do
        awardList = XH.lobby:getModule("BattlePass"):mergeAwardList(awardList, allAward[i])
    end
    self:sortTable(awardList)
    self._rewardList:removeAllItems()
    for i, _ in ipairs(awardList) do
        local item = require("lobby.Modules.BattlePass.AwardItemView").new()
        item:init(awardList[i], {})
        self._rewardList:pushBackCustomItem(item)
    end
end

function LobbyBattlePassBuyLevelView:sortTable(t)
    table.sort(
        t,
        function(a, b)
            if a.awardLv == b.awardLv then
                return tonumber(a.propValue) > tonumber(b.propValue)
            else
                return a.awardLv > b.awardLv
            end
        end
    )
end

function LobbyBattlePassBuyLevelView:updatePrice()
    XH.UITool.setText(self._btnBuy, "_KW_DESC", math.ceil(self:getRealPrice()))
end

function LobbyBattlePassBuyLevelView:getRealPrice()
    local price = XH.lobby:getModule("BattlePass.Lobby"):getLevelUpGradePrice(self._tabIndex)
    local realPrice = price * self._addLevel
    return realPrice
end

function LobbyBattlePassBuyLevelView:onTouchEventBuy(send, event)
    -- 检测道具是否足够
    local myDiamond = XH.playerData:getDiamnd()
    local needDiamond = XH.lobby:getModule("BattlePass.Lobby"):getLevelUpGradePrice(self._tabIndex, self._addLevel) * self._addLevel
    if needDiamond > myDiamond then
        -- 请求钻石信息
        local ShopConfig = require("lobby.Modules.Shop.Config")
        local _, subId = XH.lobby:getModule("Shop"):getTagsWithName(ShopConfig.SpecialTag.DIAMOND)
        if not XH.lobby:getModule("Shop"):getShopItemsWithId(subId) then 
            XH.lobby:getModule("Shop"):reqProductList(ShopConfig.ProductType.DIAMOND)
            return
        end
    end
    XH.lobby:getModule("BattlePass.Lobby"):buyLevel(self._tabIndex, self._addLevel)
end

function LobbyBattlePassBuyLevelView:onDiamondBack(event)
    XH.lobby:getModule("BattlePass.Lobby"):buyLevel(self._tabIndex, self._addLevel)
end

function LobbyBattlePassBuyLevelView:onTouchEventClose(send, event)
    self:close()
end

function LobbyBattlePassBuyLevelView:onTouchEventSlider(send, event)
    self:updateSliderBuyPercent()
    self:updateUI()
end

function LobbyBattlePassBuyLevelView:onPayResut(event)
    if not event.msg or not event.msg.resultTag then
        return
    end
    local bSuccess = event.msg.resultTag == XH.lobby:getModule("Shop").BUY_DIAMOND_RESULT.SUCCESS
    if bSuccess then
        XH.SysTool.performDelayOnce(
            function()
                XH.TipTool.showLoading(2)
            end,
            0.5
        )
        XH.SysTool.performDelayOnce(
            function()
                XH.TipTool.hideLoading()
                XH.lobby:getModule("BattlePass.Lobby"):reqBuyLevel(self._tabIndex, self._addLevel)
            end,
            2
        )
    end
end

return LobbyBattlePassBuyLevelView
f$