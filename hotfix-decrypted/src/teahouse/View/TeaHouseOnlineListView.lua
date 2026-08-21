---@class TeaHouseOnlineListView : View
local TeaHouseOnlineListView = class("TeaHouseOnlineListView", TeaHouse.View)

TeaHouseOnlineListView.OnlineListType = {
    Member = 1,
    Lately = 2,
    Recall = 3
}

TeaHouseOnlineListView.NoticeType = {
    NoMember = 1,
    Loading = 2
}

TeaHouseOnlineListView.KW_REAL_WIDTH = 580
TeaHouseOnlineListView.KW_LIST_BG_WHITE_WIDTH = 115

local KW_ONLINE_STATE = 1

TeaHouseOnlineListView.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseOnlineListView.csb",
    binding = {
        ["_KW_PANEL_MASK"] = { tag = "_KW_PANEL_MASK", name = "_panelMask", class = "panel", events = "onEventMask" },
        ["_KW_IMG_BG"] = { tag = "_KW_IMG_BG", name = "_imgBg", class = "img" },
        ["_PANEL_MEMBER_LIST"] = { tag = "_PANEL_MEMBER_LIST", name = "_panelList", class = "panel" },
        ["_KW_PANEL_LIST_ITEM"] = { tag = "_KW_PANEL_LIST_ITEM", name = "_panelListItem", class = "panel" },
        ["_KW_BTN_LATELY"] = { tag = "_KW_BTN_LATELY", name = "_btnLately", class = "img", events = "onBtnEventLately" },
        ["_KW_BTN_MEMBER"] = { tag = "_KW_BTN_MEMBER", name = "_btnMember", class = "img", events = "onBtnEventMember" },
        ["_KW_BTN_RECALL"] = { tag = "_KW_BTN_RECALL", name = "_btnRecall", class = "img", events = "onBtnEventRecall" },
        ["_KW_IMG_HAVE_AWARD"] = { tag = "_KW_IMG_HAVE_AWARD", name = "_iconHaveAward", class = "img" },
        ["_TEXT_NOTICE"] = { tag = "_TEXT_NOTICE", name = "_textNotice", class = "text" },
        ["_KW_BTN_INVITE_ALL"] = { tag = "_KW_BTN_INVITE_ALL", name = "_btnInviteAll", class = "btn", events = "onBtnEventInviteAll" },
        ["_KW_BTN_ONLINE"] = { tag = "_KW_BTN_ONLINE", name = "_btnOnline", class = "img" },
        ["_KW_OPEN_TOUCH_AREA"] = { tag = "_KW_OPEN_TOUCH_AREA", name = "_openTouchArea", class = "panel", events = "onBtnEventOnline" },
        ["_KW_TEXT_ONLINE_NUM"] = { tag = "_KW_TEXT_ONLINE_NUM", name = "_textOnline", class = "text" },
        ["_KW_PANEL_RECALL"] = { tag = "_KW_PANEL_RECALL", name = "_panelRecall", class = "panel" },
        ["_KW_IMG_HAVE_AWARD2"] = { tag = "_KW_IMG_HAVE_AWARD2", name = "_KW_IMG_HAVE_AWARD2", class = "img" },
        ["_KW_PANEL_RECALL_NEW_QIPAO"] = { tag = "_KW_PANEL_RECALL_NEW_QIPAO", name = "_KW_PANEL_RECALL_NEW_QIPAO", class = "panel", events = "onBtnEventHideQiPao" },
    }
}

function TeaHouseOnlineListView:showSelf(zorder)
    local zorder = zorder or XH.ZORDER.WINDOW
    local runningScene = display.getRunningScene()
    if runningScene then
        runningScene:addChild(self, zorder)
    end
    return self
end

function TeaHouseOnlineListView:ctor(param)
    TeaHouseOnlineListView.super.ctor(self)
    if param and param.inviteOfflineFunc then
        self._inviteOfflineFunc = param.inviteOfflineFunc
    end
    self._recallView = nil
    self:initData()
    self:initView()
    self:initEvents()
end

function TeaHouseOnlineListView:initData()
    self._selectListType = TeaHouseOnlineListView.OnlineListType.Member
    self._infoList = {}
    self._bMoveIn = false
end

function TeaHouseOnlineListView:onEnter()
    TeaHouseOnlineListView.super.onEnter(self)
    self:initListenerEventReGetAwardData()
    self._listenerEventReGetAwardData = cc.EventListenerCustom:create("RecallModule.ReGetAwardData", handler(self, self.onReGetAwardData))
    cc.Director:getInstance():getEventDispatcher():addEventListenerWithFixedPriority(self._listenerEventReGetAwardData, 1)
end

function TeaHouseOnlineListView:onExit()
    TeaHouseOnlineListView.super.onExit(self)
    self:initListenerEventReGetAwardData()
end

function TeaHouseOnlineListView:initListenerEventReGetAwardData()
    if self._listenerEventReGetAwardData then
        cc.Director:getInstance():getEventDispatcher():removeEventListener(self._listenerEventReGetAwardData)
    end
    self._listenerEventReGetAwardData = nil
end

function TeaHouseOnlineListView:onReGetAwardData()
    self:reqHasRecallAward()
end

function TeaHouseOnlineListView:cleanup()
    TeaHouseOnlineListView.super.cleanup(self)
    if self._listenerEventReGetAwardData then
        cc.Director:getInstance():getEventDispatcher():removeEventListener(self._listenerEventReGetAwardData)
    end
end

function TeaHouseOnlineListView:initView()
    self:hideNoticeText()
    self:updateListTypeBtns()
    self:clearList()
    self:adaptForLiuHai()
    self:updateOnlineNum()
    self:updateAllVisible()
    self:setIconHaveAwardVisible(false)

    -- 游戏区内自动打开成员列表
    if XH.gameManager and not XH.gameManager:isPlayBack() and not XH.lobby:getModule("Im"):getIMData():getIsSeer() then
        TeaHouse.SysTool.performWithDelay(0.3, function()
            --游戏中和房间人数满则不弹出成员列表
            if XH.gameManager and not XH.gameManager:isGameStart() and XH.gameManager:isNumberFull() then
                self:onBtnEventOnline(self._openTouchArea, ccui.TouchEventType.ended)
            end
        end)
    end
end

function TeaHouseOnlineListView:initRecallPanel()
    if not self._recallView then
        self._recallView = require("lobby.Modules.Recall.View"):new()
        self._panelRecall:addChild(self._recallView)
    end
end

function TeaHouseOnlineListView:updateAllVisible()
    local isRecall = self._selectListType ~= TeaHouseOnlineListView.OnlineListType.Lately and self._selectListType ~= TeaHouseOnlineListView.OnlineListType.Member
    if isRecall then
        self:hideNoticeText()
        self:initRecallPanel()
        if self._recallView then
            local teahouseData = TeaHouse.manager.teahouseData
            self._recallView:reloadListData(teahouseData:getTeaNumber(), teahouseData:isOwner() or teahouseData:isAdmin())
        end
    end
    self._panelList:setVisible(not isRecall)
    self._btnInviteAll:setVisible(not isRecall)
    self._panelRecall:setVisible(isRecall)
end

function TeaHouseOnlineListView:setIconHaveAwardVisible(visible)
    local iconList = { self._KW_IMG_HAVE_AWARD2, self._iconHaveAward }
    for i = 1, #iconList do
        iconList[i]:setVisible(visible or false)
        if visible then
            XH.SysTool.createShakeAni(iconList[i])
        else
            iconList[i]:stopAllActions()
        end
    end
    self:throwDataClickEnd(true)
end

function TeaHouseOnlineListView:reqHasRecallAward()
    local req = require("lobby.Req.Recall.ReqHasRecallRewards").new()
    req:addReqCallBack(
        self,
        function(tager, req, nType, vData)
            if nType == XH.Req.TYPE.SUCCESS then
                if vData and vData.nXYData and vData.nXYData.recall_count then
                    if tager and not tolua.isnull(tager) and tager.setIconHaveAwardVisible then
                        tager:setIconHaveAwardVisible(tonumber(vData.nXYData.recall_count) > 0)
                    end
                else
                    if tager and not tolua.isnull(tager) and tager.setIconHaveAwardVisible then
                        tager:setIconHaveAwardVisible(false)
                    end
                end
            end
        end
    )
    req:start(10, TeaHouse.manager.teahouseData:getTeaNumber())
end

function TeaHouseOnlineListView:initEvents()
    local teaHouseOnline = TeaHouse.manager.teaHouseOnline
    self:createListener(teaHouseOnline)
    :addEventListener(teaHouseOnline.EVENT_MEMBER_LIST_CHANGED, handler(self, self.onUpdateMemberList))
    :addEventListener(teaHouseOnline.EVENT_LATELY_LIST_CHANGED, handler(self, self.onUpdateLatelyList))
    :addEventListener(teaHouseOnline.EVENT_HIDE_ONLINE_LIST, handler(self, self.onHideEntrance))
    :addEventListener(teaHouseOnline.EVENT_SHOW_ONLINE_LIST, handler(self, self.onShowEntrance))

    local teahouseMain = TeaHouse.manager.teahouseMain
    self:createListener(teahouseMain)
    :addEventListener(teahouseMain.EVENT_TEA_HOUSE_INFO_UPDATE, handler(self, self.updateOnlineNum))
    :addEventListener(teahouseMain.EVENT_FLUSH_RECALL_TEAM_ACT_QIIPAO, handler(self, self.showRecallNewQiPao))
end

function TeaHouseOnlineListView:adaptForLiuHai()
    self._notchWidth = XH.UITool.getLiuHaiWidth()
    local nodeListName = {"_imgBg", "_btnOnline"}
    local nodeList = {}
    for _,name in pairs(nodeListName) do
        nodeList[#nodeList + 1] = self[name]
    end
    XH.UITool.adaptForLiuHai(nodeList)
end

function TeaHouseOnlineListView:hideNoticeText()
    self._textNotice:setVisible(false)
end

function TeaHouseOnlineListView:showNoticeText(type)
    if type == TeaHouseOnlineListView.NoticeType.NoMember then
        self._textNotice:setString("暂无列表数据")
    else
        self._textNotice:setString("获取列表数据中...")
    end
    self._textNotice:setVisible(true)
end

function TeaHouseOnlineListView:selectListType(listType)
    self._selectListType = listType
    self:updateListTypeBtns()
    self:updateAllVisible()
    if self._selectListType == TeaHouseOnlineListView.OnlineListType.Lately or self._selectListType == TeaHouseOnlineListView.OnlineListType.Member then
        self:clearList()
        self:reqListInfo()
    end
end

function TeaHouseOnlineListView:reqListInfo()
    if self._selectListType == TeaHouseOnlineListView.OnlineListType.Member then
        TeaHouse.manager.teaHouseOnline:reqTeaMemberList()
    else
        TeaHouse.manager.teaHouseOnline:reqSelfFightInfo()
    end
end

function TeaHouseOnlineListView:clearList()
    self._infoList = {}
    self:refreshTableView()
end

function TeaHouseOnlineListView:updateListTypeBtns()
    self._btnMember:setEnabled(self._selectListType == TeaHouseOnlineListView.OnlineListType.Lately or self._selectListType == TeaHouseOnlineListView.OnlineListType.Recall)
    self._btnLately:setEnabled(self._selectListType == TeaHouseOnlineListView.OnlineListType.Member or self._selectListType == TeaHouseOnlineListView.OnlineListType.Recall)
    self._btnRecall:setEnabled(self._selectListType == TeaHouseOnlineListView.OnlineListType.Lately or self._selectListType == TeaHouseOnlineListView.OnlineListType.Member)
    if self._selectListType == TeaHouseOnlineListView.OnlineListType.Lately then
        self._btnMember:loadTexture("tea_house_online_member_list_1.png", ccui.TextureResType.plistType)
        self._btnLately:loadTexture("tea_house_online_last_list_2.png", ccui.TextureResType.plistType)
        self._btnRecall:loadTexture("tea_house_online_recall_1.png", ccui.TextureResType.plistType)
    elseif self._selectListType == TeaHouseOnlineListView.OnlineListType.Member then
        self._btnMember:loadTexture("tea_house_online_member_list_2.png", ccui.TextureResType.plistType)
        self._btnLately:loadTexture("tea_house_online_last_list_1.png", ccui.TextureResType.plistType)
        self._btnRecall:loadTexture("tea_house_online_recall_1.png", ccui.TextureResType.plistType)
    elseif self._selectListType == TeaHouseOnlineListView.OnlineListType.Recall then
        self._btnMember:loadTexture("tea_house_online_member_list_1.png", ccui.TextureResType.plistType)
        self._btnLately:loadTexture("tea_house_online_last_list_1.png", ccui.TextureResType.plistType)
        self._btnRecall:loadTexture("tea_house_online_recall_2.png", ccui.TextureResType.plistType)
    end
    self._btnMember:ignoreContentAdaptWithSize(true)
    self._btnLately:ignoreContentAdaptWithSize(true)
    self._btnRecall:ignoreContentAdaptWithSize(true)
    
    self:updateRecallVisible()
end

function TeaHouseOnlineListView:isOpenRecall()
    -- local lobbyID = XH.areaData:getLobbyID()
    -- if lobbyID == XH.LOBBY_ID.HANGMAQUAN then
    --     return true
    -- end
    -- return false
    return true
end

function TeaHouseOnlineListView:updateRecallVisible()
    if self._btnRecall then
        self._btnRecall:setVisible(self:isOpenRecall())
    end
end

function TeaHouseOnlineListView:onBtnEventMember(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:selectListType(TeaHouseOnlineListView.OnlineListType.Member)

    local sceneName = XH.gameManager and "比赛场房间" or "比赛场"
    local data = {
        block_label = sceneName
    }
    -- 抛送列表曝光数据
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.hyxt24052707, data)
end

function TeaHouseOnlineListView:onBtnEventRecall(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:selectListType(TeaHouseOnlineListView.OnlineListType.Recall)
    local conventionData = {}
    conventionData.page = "P1104"
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.RECALL_TITLEBTN_CLICK,conventionData, {area_id = XH.areaData:getAreaID()})
end

function TeaHouseOnlineListView:onBtnEventLately(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:selectListType(TeaHouseOnlineListView.OnlineListType.Lately)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_52)
    
    local sceneName = XH.gameManager and "比赛场房间" or "比赛场"
    local data = {
        block_label = sceneName
    }
    -- 抛送最近列表曝光数据
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.hyxt24052701, data)
end

function TeaHouseOnlineListView:onEventMask(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:moveAnimation()
end

local KW_ONLINE_LIST_LATELY_SHOW_NUM = 10
local KW_ONLINE_LIST_STATE_WEIGHT = {
    [0] = 0,
    [1] = 2,
    [2] = 1,
    [3] = 1,
}

function TeaHouseOnlineListView:sortListData(listData)
    if self._selectListType == TeaHouseOnlineListView.OnlineListType.Lately then
        table.sort(listData, function(a, b)
            if a.nLastFightTime and b.nLastFightTime then
                return a.nLastFightTime > b.nLastFightTime
            end
        end)
    end

    local tmpListData = {}
    for _, value in pairs(listData) do
        local acExtraData = {}
        local ok = pcall(function()
            json.decode(value.stUserInfo.acExtraData)
        end)
        if ok then
            acExtraData = json.decode(value.stUserInfo.acExtraData)
        end
        value.stUserInfo.ucGameStatus = acExtraData.state or 0
        value.stUserInfo.nGameTime = acExtraData.nGameTime or 0
        if value.stUserInfo.ucGameStatus >= 2 then
            value.stUserInfo.ucGameStatus = 2
        end

        if self._selectListType == TeaHouseOnlineListView.OnlineListType.Lately then
            if #tmpListData >= KW_ONLINE_LIST_LATELY_SHOW_NUM then
                break
            end
        end
        if TeaHouse.BridgeData.getNumberID() ~= value.stUserInfo.nNumId then
            table.insert(tmpListData, value)
        end
    end

    table.sort(tmpListData, function(a, b)
        local valueA = KW_ONLINE_LIST_STATE_WEIGHT[a.stUserInfo.ucGameStatus]
        local valueB = KW_ONLINE_LIST_STATE_WEIGHT[b.stUserInfo.ucGameStatus]

        valueA = valueA or 0
        valueB = valueB or 0

        if TeaHouse.BridgeData.getNumberID() == a.stUserInfo.nNumId then
            valueA = valueA + 1
        end

        if TeaHouse.BridgeData.getNumberID() == b.stUserInfo.nNumId then
            valueB = valueB + 1
        end

        return valueA > valueB
    end)

    return tmpListData
end

function TeaHouseOnlineListView:onUpdateMemberList(event)
    self._infoList = self:sortListData(event.msg.info)
    if #self._infoList == 0 then
        self:showNoticeText(TeaHouseOnlineListView.NoticeType.NoMember)
    else
        self:hideNoticeText()
    end
    self:refreshTableView()
end

function TeaHouseOnlineListView:onUpdateLatelyList(event)
    self._infoList = self:sortListData(event.msg.info)
    if #self._infoList == 0 then
        self:showNoticeText(TeaHouseOnlineListView.NoticeType.NoMember)
    else
        self:hideNoticeText()
    end
    self:refreshTableView()
end

function TeaHouseOnlineListView:refreshTableView(isCleanup)
    if not self._panelList then
        return
    end
    if self._tvOnlineList ~= nil and isCleanup then
        self._tvOnlineList:removeFromParent()
        self._tvOnlineList = nil
    end
    if self._tvOnlineList == nil then
        self._tvOnlineList = cc.TableView:create(self._panelList:getContentSize())
        self._tvOnlineList:setDirection(cc.SCROLLVIEW_DIRECTION_VERTICAL)
        self._tvOnlineList:setVerticalFillOrder(cc.TABLEVIEW_FILL_TOPDOWN)
        self._tvOnlineList:setIgnoreAnchorPointForPosition(false)
        self._tvOnlineList:setAnchorPoint(cc.p(0, 0))
        self._tvOnlineList:setPosition(cc.p(0, 0))
        self._panelList:addChild(self._tvOnlineList)
        self._tvOnlineList:registerScriptHandler(handler(self, self.onTableCellTouched), cc.TABLECELL_TOUCHED)
        self._tvOnlineList:registerScriptHandler(handler(self, self.onCellSizeForTable), cc.TABLECELL_SIZE_FOR_INDEX)
        self._tvOnlineList:registerScriptHandler(handler(self, self.onTableCellAtIndex), cc.TABLECELL_SIZE_AT_INDEX)
        self._tvOnlineList:registerScriptHandler(handler(self, self.onNumberOfCellsInTableView), cc.NUMBER_OF_CELLS_IN_TABLEVIEW)
    end
    if self._tvOnlineList ~= nil then
        self._tvOnlineList:reloadData()
    end
end

function TeaHouseOnlineListView:onTableCellTouched(tableView, cell)

end

function TeaHouseOnlineListView:onCellSizeForTable(tableView, index)
    if self._panelListItem then
        local size = self._panelListItem:getContentSize()
        return size.width, size.height
    end
    return 0, 0
end

function TeaHouseOnlineListView:onTableCellAtIndex(tableView, index)
    local cell = tableView:dequeueCell()
    if not cell then
        cell = cc.TableViewCell:new()
        local onlineItem = TeaHouse.manager.viewManager:createView("TeaHouseOnlineListItem.TeaHouseOnlineListItem")
        if onlineItem ~= nil then
            onlineItem:setAnchorPoint(cc.p(0, 0))
            onlineItem:setPosition(0, 0)
            onlineItem:setName("OnlineItem")
            if self._panelListItem then
                onlineItem:setContentSize(self._panelListItem:getContentSize())
                ccui.Helper:doLayout(onlineItem)
            end
            cell:addChild(onlineItem)
        end
    end
    local onlineItem = cell:getChildByName("OnlineItem")
    if onlineItem ~= nil then
        onlineItem:updateInfo(self._infoList[index + 1], self._inviteOfflineFunc,self._selectListType)
    end
    return cell
end

function TeaHouseOnlineListView:onNumberOfCellsInTableView(tableView)
    return #self._infoList
end

function TeaHouseOnlineListView:onBtnEventInviteAll(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    
    local onlinePlayer = {}
    for _, v in pairs(self._infoList) do
        if v.stUserInfo.ucGameStatus and v.stUserInfo.ucGameStatus == KW_ONLINE_STATE then
            table.insert(onlinePlayer, v.stUserInfo.nNumId)
        end
    end
    if next(onlinePlayer) then
        TeaHouse.manager.teaHouseOnline:reqInvite(onlinePlayer)
    else
        TeaHouse.TipTool.showToast("暂无好友在线")
    end

    -- 抛送一键邀请按钮
    local sceneName = XH.gameManager and "比赛场房间" or "比赛场"
    local data = {
        block_label = sceneName
    }
    if self._selectListType == TeaHouseOnlineListView.OnlineListType.Member then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.hyxt24052709, data)
    elseif self._selectListType == TeaHouseOnlineListView.OnlineListType.Lately then
        if CF ~= nil and CF.roomData ~= nil then
            data = {
                block_label = sceneName,
                customize = {
                    count = #onlinePlayer,
                },
                game_id = XH.areaData:getAreaID() .. "_" .. CF.roomData:getGameID(),
                room_id = CF.roomData:getRoomID(),
                players = CF.roomData:getChairs(),
            }
        end
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.hyxt24052703, data, data.customize)
    end
end

function TeaHouseOnlineListView:onBtnEventOnline(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(self._btnOnline, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    cc.SpriteFrameCache:getInstance():addSpriteFrames("res/cocosStudio/TeaHouse/Image/tea_house_online_list.plist")
    if not self._bMoveIn then
        self:selectListType(self._selectListType)
    end

    self:moveAnimation()
    self:reqHasRecallAward()
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_49)

    local sceneName = XH.gameManager and "比赛场房间" or "比赛场"
    local data = {
        block_label = sceneName
    }
    if self._selectListType == TeaHouseOnlineListView.OnlineListType.Lately then
        -- 抛送最近列表曝光数据
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.hyxt24052701, data)
    elseif self._selectListType == TeaHouseOnlineListView.OnlineListType.Member then
        -- 抛送列表曝光数据
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.hyxt24052707, data)
    end
end

function TeaHouseOnlineListView:moveAnimation()
    self._bMoveIn = not self._bMoveIn
    local bMoveIn = self._bMoveIn
    self._panelMask:setTouchEnabled(bMoveIn)
    if self._imgBg then
        local actionTime = 0.2
        self._imgBg:stopAllActions()
        local targetPosX = self._imgBg:getContentSize().width + self._notchWidth
        local targetPosY = self._imgBg:getPositionY()
        local actSpawn = cc.Spawn:create(cc.FadeIn:create(actionTime),cc.MoveTo:create(actionTime, cc.p(targetPosX, targetPosY)))
        local actSequence = cc.Sequence:create(cc.CallFunc:create(function()
                                self._imgBg:setVisible(true)
                            end), actSpawn)
        if not bMoveIn then
            targetPosX = self._notchWidth
            actSpawn = cc.Spawn:create(cc.FadeOut:create(actionTime),cc.MoveTo:create(actionTime, cc.p(targetPosX, targetPosY)))
            actSequence = cc.Sequence:create(actSpawn, cc.CallFunc:create(function()
                                self._imgBg:setVisible(false)
                            end))
        end
        self._imgBg:runAction(actSequence)
    end
    self:moveEntranceBtn(bMoveIn)
    self:throwDataClickEnd()
end

function TeaHouseOnlineListView:throwDataClickEnd(isMust)
    if self._iconHaveAward == nil then
        return
    end
    local icon = "入口"
    if self._bMoveIn then
        icon = "内部"
    end
    if self._lastThrow == icon then
        return
    end
    local scene = "比赛场大厅"
    if CF and CF.isInGameScene() then
        scene = "包厢牌桌"
        if CF.teaHouseManager:isInTeaHouse() then
            scene = "比赛场牌桌"
        end
    end
    if self._iconHaveAward:isVisible() then
        if icon == "入口" then
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zh25032001, {page = scene})
        else
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zh25032002, {page_item_id = "有人", page = scene})
        end
        self._lastThrow = icon
    else
        if icon == "内部" then
            self._lastThrow = icon
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zh25032002, {page_item_id = "无人", page = scene})
        end
    end
end

function TeaHouseOnlineListView:moveEntranceBtn(bMoveIn)
    if self._btnOnline and self._imgBg then
        local actionTime = 0.2
        self._btnOnline:stopAllActions()
        local targetPosX = self._imgBg:getContentSize().width + self._notchWidth - self.KW_LIST_BG_WHITE_WIDTH
        if not bMoveIn then
            targetPosX = self._notchWidth
        end
        local targetPosY = self._btnOnline:getPositionY()
        local actSpawn = cc.Spawn:create(cc.MoveTo:create(actionTime, cc.p(targetPosX, targetPosY)))
        self._btnOnline:runAction(actSpawn)
    end
end

function TeaHouseOnlineListView:updateOnlineNum(event)
    local teahouseData = TeaHouse.manager.teahouseData
    self._textOnline:setString(string.format("%d/%d", teahouseData:getOnlineCount(), teahouseData:getPlayerCount()))
end

function TeaHouseOnlineListView:onHideEntrance(event)
    self._bMoveIn = true
    self:moveAnimation()
    if self._btnOnline then
        self._btnOnline:setVisible(false)
    end
end

function TeaHouseOnlineListView:onShowEntrance(event)
    self._bMoveIn = false
    -- self:moveAnimation()
    if self._btnOnline then
        self._btnOnline:setVisible(true)
    end
end

function TeaHouseOnlineListView:onBtnEventHideQiPao(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self._KW_PANEL_RECALL_NEW_QIPAO:setVisible(false)
end

function TeaHouseOnlineListView:showRecallNewQiPao()
    if self._KW_PANEL_RECALL_NEW_QIPAO:isVisible() then
        return
    end
    self._KW_PANEL_RECALL_NEW_QIPAO:setVisible(true)
    XH.SysTool.performDelayOnce(function()
        if not self or tolua.isnull(self) then
            return
        end
        self._KW_PANEL_RECALL_NEW_QIPAO:setVisible(false)
    end, 10)
end

return TeaHouseOnlineListView   �e  