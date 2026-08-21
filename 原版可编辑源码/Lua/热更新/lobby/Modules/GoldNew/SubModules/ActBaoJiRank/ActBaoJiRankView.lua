local ActBaoJiRankView = class("ActBaoJiRankView", XH.Bridge.ViewBase)
local UrlConf = XH.Bridge:require("app.Config.UrlConf")
local LocalConfig = import("...Configs.LocalConfig")
local Utils = import("...Tool.Utils")
local RedPointManager = import("...Manager.RedPointManager")
local Config = import(".Config")
local ShowPropFunction = XH.Bridge:require("lobby.Modules.BagSysNew.ShowPropFunction")
local UI_PATH = LocalConfig.IMG_PATH.ACT_BJRANK
local IMG_CFG = {
    font = UI_PATH .. "fnt/bjmrt_fnt_num0%d.fnt",
    imgRank = UI_PATH .. "bjmrt_jm_ph_pm0%d.png",
    imgRankItemBg = UI_PATH .. "bjmrt_jm_ph_ph0%d.png",
    imgAwardItemBg = UI_PATH .. "bjmrt_jm_jl_ph0%d.png",
    headFramePropids = {150774, 150774, 150774, 150775, 150775, 150775, 150775, 150775, 150775, 150775}
}

function ActBaoJiRankView:ctor(param)
    self._module = XH.Bridge:getModule(LocalConfig.MP.ActBJRank)
    ActBaoJiRankView.super.ctor(self, param)
    self._giftPanles = {self._panelWeekGift1, self._panelWeekGift2, self._panelWeekGift3}
    self._giftTxtNeeds = {self._txtWeekNeed1, self._txtWeekNeed2, self._txtWeekNeed3}
end

function ActBaoJiRankView:getCSBPath()
    return XH.Bridge:getCCSResPath("Act/BaoJiRankView.csb")
end

function ActBaoJiRankView:getBindingInfo()
    local info = {
        ["_btnClose"] = {varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose"},
        ["_btnGotoGame"] = {varName = "_btnGotoGame", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickGotoGame"},
        ["_btnTab1"] = {varName = "_btnTab1", type = XH.UI_TYPE.IMAGE, onTouchEnded = "onClickTabRank"},
        ["_btnTab2"] = {varName = "_btnTab2", type = XH.UI_TYPE.IMAGE, onTouchEnded = "onClickTabAward"},
        ["_btnRule"] = {varName = "_btnRule", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickRule"},
        ["_txtRankRuleTitle"] = {varName = "_txtRankRuleTitle", beginIndex = 1, endIndex = 2},
        ["_txtRankRule"] = {varName = "_txtRankRule", beginIndex = 1, endIndex = 2},
        ["_txtAwardRuleTitle"] = {varName = "_txtAwardRuleTitle", beginIndex = 1, endIndex = 3},
        ["_txtAwardRule"] = {varName = "_txtAwardRule", beginIndex = 1, endIndex = 3}
    }
    local names = {
        "_panelRight", "_panelInfo", "_panelRank", "_listRank", "_itemRank", "_itemRankSelf", "_panelWeekGift1", "_panelWeekGift2", "_panelWeekGift3",
        "_txtWeekNeed1", "_txtWeekNeed2", "_txtWeekNeed3", "_txtPlay3", "_panelHeadImg", "_txtEmpty", "_panelRankList", "_txtQuickStartInfo",
        "_txtTopLeftTime", "_weekProgress", "_listAward", "_itemAward", "_body", "_txtWeekScore", "_posAniTop"
    }
    for i, v in ipairs(names) do
        info[v] = {varName = v}
    end
    return info
end

function ActBaoJiRankView:getProxyEvents()
    return {
        {module = self._module, eventKeyName = "EVENT_RANK_INFO", callBack = "onEventRankInfo"},
        {module = self._module, eventKeyName = "EVENT_SELF_RANK_INFO", callBack = "onEventSelfRankInfo"},
        {module = self._module, eventKeyName = "EVENT_BASE_ACT_INFO", callBack = "onBaseInfo"},
        {module = self._module, eventKeyName = "EVENT_USER_ACT_INFO", callBack = "updateUI"},
        {module = XH.Bridge:getModule("GoldNew"), eventKeyName = "EVENT_TIME", callBack = "onTime"}
    }
end

function ActBaoJiRankView:onEnter()
    self._isInAni = true
    self:delayShow(self._body, 0, 18 / 30)
    self:delayShow(self._btnGotoGame, 12 / 30, 18 / 30)
    self:runAction(cc.Sequence:create(cc.DelayTime:create(1), cc.CallFunc:create(function()
        self._isInAni = false
        self._module:reqBaseActInfo()
        self._module:reqUserActInfo()
        self._module:reqGetMyWeekRanking()
        self:onBaseInfo()
    end)))
    self:initUI()
end

function ActBaoJiRankView:getModule()
    return self._module
end

function ActBaoJiRankView:onBaseInfo()
    self:updateUI()
    local info = self:getActInfo()
    if info.seasonIdx > 0 and info.seasonStatus == Config.CritSeasonStatus.Settling then
        XH.TipTool.showToast("赛季清算中，数据可能有延时，请稍后刷新再试...")
        return
    end
end

function ActBaoJiRankView:initUI()
    Utils:addSpine(self._posAniTop, "#res/animation/Common/", "zzb_ty_tcbk", "animation2", 1, false, 0.1)
    self._rankInfo = {}
    self:refreshTableView()
    self:onClickTabRank(self._btnTab1)
    for i, v in ipairs(self._giftPanles) do
        XH.UIButton.create(v, XH.UIButton.CLICK_STYLE.NOSCALE, function()
            self:onClickGetGift(i)
        end)
    end
    self._listAward:setScrollBarEnabled(false)
    if XH.Bridge:isInGame() then
        self._btnGotoGame:setVisible(false)
    end
    self:updateUI()
end

function ActBaoJiRankView:updateUI()
    local info = self:getActInfo()
    self:stopAllActions()
    if info.seasonIdx < 0 or info.seasonStatus == Config.CritSeasonStatus.Default then
        self._body:setVisible(false)
        self:runAction(cc.Sequence:create(cc.DelayTime:create(3), cc.CallFunc:create(function()
            if not self._body:isVisible() then
                self:close()
            end
        end)))
        return
    end
    self._body:setVisible(true)
    for i = 1, 2 do
        local temp = info.detail.rank_texts[i] or {t_title = "", t_content = ""}
        self["_txtRankRuleTitle" .. i]:setString(temp.t_title)
        self["_txtRankRule" .. i]:setString(temp.t_content)
    end
    for i = 1, 3 do
        local temp = info.detail.award_texts[i] or {t_title = "", t_content = ""}
        self["_txtAwardRuleTitle" .. i]:setString(temp.t_title)
        self["_txtAwardRule" .. i]:setString(temp.t_content)
    end

    self._weekProgress:setPercent(100 * info.weekTotalBJ / info.weekGiftNeed[3])
    for i, v in ipairs(self._giftPanles) do
        if v.aniNode then
            v.aniNode:setVisible(false)
        end
        if info.weekGiftState[i] == Config.CritAwardStatus.Active then
            v.aniNode = v.aniNode or Utils:addSpine(v, "#res/animation/Common/", "zzb_ty_caisegx", "animation", 1, true)
            v.aniNode:setPosition(v:getContentSize().width / 2, v:getContentSize().height / 2)
            v.aniNode:setVisible(true)
        end
        -- XH.UITool.setVisible(v, "_imgStateOn", info.weekGiftState[i] == Config.CritAwardStatus.Active)
        XH.UITool.setVisible(v, "_imgStateGot", info.weekGiftState[i] == Config.CritAwardStatus.Awarded)
        XH.UITool.setText(v, "_txtWeekNeed", info.weekGiftNeed[i])
        XH.UITool.setTextColor(v, "_txtWeekNeed",
                               info.weekGiftState[i] == Config.CritAwardStatus.Active and cc.c3b(0x3d, 4, 255) or cc.c3b(0x70, 0, 0x84))
        -- self._giftTxtNeeds[i]:setString(info.weekGiftNeed[i])
        self._txtWeekScore:setString(info.weekTotalBJ)
        Utils:setImgUrl(v:getChildByName("_panelIcon"), info.weekGiftInfo[i][1].imgUrl, true)
    end

    self._listAward:removeAllChildren()
    local seasonTitleInfo = {
        {rank = 1, propid = Config.PROP_SEASON_TITLE_ID}, {rank = 4, propid = Config.PROP_SEASON_TITLE_ID},
        {rank = 11, propid = Config.PROP_SEASON_TITLE_ID}, {rank = 101, propid = Config.PROP_SEASON_TITLE_ID}
    }
    for i, v in ipairs(info.rankAwardInfos) do
        local item = self._itemAward:clone()
        local panelGiftWeek = item:getChildByName("panelGiftWeek")
        local panelGiftSeason = item:getChildByName("panelGiftSeason")
        local uiIdx = i < 3 and i or 3
        XH.UITool.loadTexture(item, "imgBg", string.format(IMG_CFG.imgAwardItemBg, uiIdx), ccui.TextureResType.plistType)
        XH.UITool.setFntFile(item, "txtRank", string.format(IMG_CFG.font, 5 - uiIdx))

        XH.UITool.setText(item, "txtRank", v.rankRange)
        if v.weekPropInfos[1] then
            if not ShowPropFunction.createHeadFrameAni(panelGiftWeek, v.weekPropInfos[1].propId, 0.6) then
                Utils:setImgUrl(panelGiftWeek, v.weekPropInfos[1].imgUrl, true)
            end
        end
        if v.totalPropInfos[1] then
            local titleNode = self._module:createTitleNode()
            item:getChildByName("panelGiftSeason"):addChild(titleNode)
            titleNode:updateUI(seasonTitleInfo[i])
        end
        self._listAward:pushBackCustomItem(item)
    end

    self:updateSelfRankInfo(info.myRanking or 0, info.myRankScore or 0)

    local isInDingWei = info.dingwei and info.dingwei.total > info.dingwei.played
    if isInDingWei then
        self._txtTopLeftTime:setString(string.format("定位中:剩余%d局", info.dingwei.total - info.dingwei.played))
    end

    local quickStartInfo = XH.Bridge:getModule("GoldNew"):getQuickStartRoomInfo()
    local roomConf = XH.Bridge:getModule("GoldNew"):getGoldRoomInfoByLeisureID(quickStartInfo.ConfID)
    if roomConf then
        self._txtQuickStartInfo:setString(roomConf.roomInfo.GameTitle .. " " ..
                                              (XH.GOLD_LEVEL_DEFAULT_NAME[roomConf.roomInfo.roomFlag[quickStartInfo.Level or 1] % 10] or ""))
    end
end

function ActBaoJiRankView:onTime()
    local info = self:getActInfo()
    self._autoRefreshRankCount = self._autoRefreshRankCount + 1
    self:checkAutoRefresh()
    local isInDingWei = info.dingwei and info.dingwei.total > info.dingwei.played
    if isInDingWei then
        return
    end
    local leftTime = info.weekEndTime - self._module:getServerTime()
    self._txtTopLeftTime:setString("剩余时间:" .. self._module:getLeftTimeStr(leftTime))
end

function ActBaoJiRankView:checkAutoRefresh()
    -- if not self._panelRank:isVisible() then
    --     return
    -- end
    -- if self._autoRefreshRankCount >= 60 then
    --     self._autoRefreshRankCount = 0
    --     self._rankInfo = {}
    --     if self._tableView ~= nil then
    --         self._tableView:reloadData()
    --         self._txtEmpty:setVisible(false)
    --     end
    --     self._module:reqRankInfo()
    -- end
end

function ActBaoJiRankView:getActInfo()
    return self._module:getActInfo()
end

function ActBaoJiRankView:isFullScreen()
    return true
end

function ActBaoJiRankView:onTouchEventClose(send, event)
    self:close()
end

function ActBaoJiRankView:onClickGotoGame(send, event)
    XH.Bridge:getModule("GoldNew"):doQuickStart()
    self:close()
end

function ActBaoJiRankView:onClickGetGift(idx)
    local info = self:getActInfo()
    local need = info.weekGiftNeed[idx]
    if info.weekTotalBJ < need then
        if XH.Bridge:isInGame() then
            XH.TipTool.showToast("暴击值不足，无法领取")
            return
        end
        XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK_CANCEL,
            funcOK = function()
                self:onClickGotoGame()
            end
        }, XH.ConstString.getStr("暴击值不足，快去游戏获取暴击值吧"))
        return
    end
    if info.weekGiftState[idx] == Config.CritAwardStatus.Awarded then
        XH.TipTool.showToast("已经领取")
        return
    end
    XH.Bridge:throwData("oh25050708", {page = "金币大厅", item_id = need .. ""})
    self._module:reqGetWeekGift(idx)
end

function ActBaoJiRankView:onClickRule(send, event)
    XH.Bridge:throwData("oh25050707", {page = "金币大厅"})
    XH.Bridge.viewManager:openView("GoldHallBJRankRuleView")
end

function ActBaoJiRankView:onClickTabAward(send, event)
    self._panelInfo:setVisible(true)
    self._panelRank:setVisible(false)
    self:updateTab(send)
    Utils:delayTouchEnable(self._btnTab1)
    Utils:delayTouchEnable(self._btnTab2)
    XH.Bridge:throwData("oh25050706", {page = "金币大厅"})
end

function ActBaoJiRankView:onClickTabRank(send, event)
    self._panelInfo:setVisible(false)
    self._panelRank:setVisible(true)
    self._rankInfo = {}
    self._autoRefreshRankCount = 0
    if self._tableView ~= nil then
        self._tableView:reloadData()
        self._txtEmpty:setVisible(false)
    end
    self._module:reqRankInfo()
    self:updateTab(send)
    Utils:delayTouchEnable(self._btnTab1)
    Utils:delayTouchEnable(self._btnTab2)
    XH.Bridge:throwData("oh25050705", {page = "金币大厅"})
end

function ActBaoJiRankView:updateTab(selectTab)
    local tabs = {self._btnTab1, self._btnTab2}
    for _, v in ipairs(tabs) do
        v:setEnabled(v ~= selectTab)
        -- v:setTitleColor(v == selectTab and cc.c3b(0xff, 0xff, 0xff) or cc.c3b(0xff, 0xff, 0xff))
    end
end

function ActBaoJiRankView:onEventSelfRankInfo(event)
    self:updateSelfRankInfo(event.info.rankNum, event.info.rankScore)
end

function ActBaoJiRankView:updateSelfRankInfo(rankNum, rankScore)
    local urlGold = XH.playerData:getGoldHeadUrl()
    local url = urlGold or XH.playerData:getWeChatURL()
    self:updateInfo(self._itemRankSelf, {userNick = XH.playerData:getNickName(), headUrl = url, rankNum = rankNum, rankScore = rankScore}, true)
end

function ActBaoJiRankView:onEventRankInfo(event)
    local data = event.info
    if data and event.addNum > 0 then
        self:onGetNewData(data, event.addNum, event.isGetAll)
    end
    self._txtEmpty:setVisible(#self._rankInfo == 0)
end

function ActBaoJiRankView:refreshTableView(isCleanup)
    if self._tableView ~= nil and isCleanup then
        self._tableView:removeFromParent()
        self._tableView = nil
    end
    if self._tableView == nil then
        self._tableView = cc.TableView:create(self._listRank:getContentSize())
        self._tableView:setDirection(cc.SCROLLVIEW_DIRECTION_VERTICAL)
        self._tableView:setVerticalFillOrder(cc.TABLEVIEW_FILL_TOPDOWN)
        self._tableView:setIgnoreAnchorPointForPosition(false)
        self._tableView:setAnchorPoint(cc.p(0, 0))
        self._tableView:setPosition(cc.p(0, 0))
        self._listRank:addChild(self._tableView)
        self._tableView:registerScriptHandler(handler(self, self.onTableCellTouchedGold), cc.TABLECELL_TOUCHED)
        self._tableView:registerScriptHandler(handler(self, self.onCellSizeForTableGold), cc.TABLECELL_SIZE_FOR_INDEX)
        self._tableView:registerScriptHandler(handler(self, self.onTableCellAtIndexGold), cc.TABLECELL_SIZE_AT_INDEX)
        self._tableView:registerScriptHandler(handler(self, self.onNumberOfCellsInTableViewGold), cc.NUMBER_OF_CELLS_IN_TABLEVIEW)

        -- self._tableView:addScrollViewEventListener(function(sender, eventType)
        --     print("scroll", eventType)
        --     if eventType == ccui.ScrollviewEventType.containerMoved + 2 then
        --         self:changeScrollAniDirection()
        --     end
        -- end)
    end
    if self._tableView ~= nil then
        self._tableView:reloadData()
    end
end

function ActBaoJiRankView:onTableCellTouchedGold(tableView, cell)
end

function ActBaoJiRankView:onCellSizeForTableGold(tableView, index)
    local size = self._itemRank:getContentSize()
    return size.width, size.height
end

function ActBaoJiRankView:updateInfo(item, info, isSelf)
    -- local gameId = info.goldGameInfo.gameId
    -- local name = self._module:getGameEntrtName(gameId, info.goldGameInfo.roomLevel + 1, info.goldGameInfo.playerCnt)
    -- -- XH.UITool.setText(item, "txtName", idx .. name)
    -- XH.UITool.setText(item, "txtRoomLevel", XH.GOLD_LEVEL_DEFAULT_NAME[info.goldGameInfo.roomLevel % 10 + 1])
    -- XH.UITool.setText(item, "txtTime", os.date("%m/%d %H:%M", tonumber(info.endTime)))
    -- local score = tonumber(info.score) or 0
    -- local scoreStr = Utils:formatGoldNum2String(score)
    -- XH.UITool.setText(item, "txtScore", score > 0 and "+" .. scoreStr or scoreStr)
    -- XH.UITool.setTextColor(item, "txtScore", score > 0 and cc.c3b(0xf9, 0x6a, 0x38) or cc.c3b(0x78, 0x81, 0x89))
    -- XH.UITool.setVisible(item, "imgWin", score > 0)
    -- XH.UITool.setVisible(item, "imgLose", score <= 0)
    -- self:initWanfa(item:getChildByName("itemPlay"), "txtName", name, gameId)
    local idx = info.rankNum
    local isInDingWei = idx == 0
    local rankTxt = isInDingWei and "未上榜" or (idx > 999 and "999+" or idx)
    local isShowRankIcon = not isInDingWei and idx <= 3
    if isShowRankIcon then
        local imgPath = string.format(IMG_CFG.imgRank, idx)
        XH.UITool.loadTexture(item, "imgRankIcon", imgPath, ccui.TextureResType.plistType)
    end
    if not isSelf then
        local imgBg = string.format(IMG_CFG.imgRankItemBg, idx < 4 and idx or 4)
        XH.UITool.loadTexture(item, "imgBg", imgBg, ccui.TextureResType.plistType)
    end
    XH.UITool.setVisible(item, "imgRankIcon", isShowRankIcon)
    XH.UITool.setVisible(item, "txtRank", not isShowRankIcon)
    XH.UITool.setText(item, "txtRank", rankTxt)
    local nickname = XH.StringTool.trim(info.userNick)
    XH.UITool.setText(item, "txtName", XH.StringTool.cutStringByLength(nickname, 10))
    XH.UITool.setText(item, "txtScore", isInDingWei and "定位中" or info.rankScore)
    XH.UITool.setVisible(item, "imgIcon", not isInDingWei)
    if info.headUrl == "" then
        info.headUrl = LocalConfig.DefaultHeadUrl
    end

    -- Utils:setImgUrl(item:getChildByName("panelHead"), info.headUrl, true)
    Utils:setHead(item:getChildByName("panelHead"), {framePropid = IMG_CFG.headFramePropids[idx], headUrl = info.headUrl})
end

function ActBaoJiRankView:onTableCellAtIndexGold(tableView, index)
    local cell = tableView:dequeueCell()
    if not cell then
        cell = cc.TableViewCell:new()
        local item = self._itemRank:clone()
        if item ~= nil then
            item:setVisible(true)
            item:setAnchorPoint(cc.p(0, 0))
            item:setPosition(0, 0)
            item:setName("InfoItem")
            local itemSize = item:getContentSize()
            local listSize = self._listRank:getContentSize()
            item:setContentSize(cc.size(listSize.width, itemSize.height))
            cell:addChild(item)
            ccui.Helper:doLayout(item)
        end
    end
    local item = cell:getChildByName("InfoItem")
    if item ~= nil then
        self:updateInfo(item, self._rankInfo[index + 1])
    end
    if index + 3 == #self._rankInfo and not self._isGetAll then
        self._module:reqNextRankInfo()
        -- for i = 1, 4 do
        --     table.insert(self._rankInfo, {})
        -- end
        -- local currentOffset = self._tableView:getContentOffset()
        -- self._tableView:reloadData()
        -- self._tableView:setContentOffset(cc.p(currentOffset.x, currentOffset.y - 220 * 4), false)
    end
    return cell
end

function ActBaoJiRankView:onNumberOfCellsInTableViewGold(tableView)
    return #self._rankInfo
end

function ActBaoJiRankView:onGetNewData(data, addNum, isGetAll)
    self._rankInfo = data
    self._isGetAll = isGetAll
    local currentOffset = self._tableView:getContentOffset()
    self._tableView:reloadData()
    self._tableView:setContentOffset(cc.p(currentOffset.x, currentOffset.y - self._itemRank:getContentSize().height * addNum), false)
    self._txtEmpty:setVisible(#self._rankInfo == 0)
end

function ActBaoJiRankView:delayShow(node, delay, time)
    node:setScale(0)
    node:setOpacity(255)
    node:runAction(cc.Sequence:create(cc.DelayTime:create(delay),
                                      cc.Spawn:create(cc.EaseBackOut:create(cc.ScaleTo:create(time or 0.2, 1)), cc.FadeIn:create(time or 0.2))))
end
return ActBaoJiRankView
