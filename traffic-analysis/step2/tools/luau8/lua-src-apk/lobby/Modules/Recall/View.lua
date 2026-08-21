local RecallView = class("RecallView", XH.ViewBase)

function RecallView:getCSBPath()
    return "cocosStudio/hall/CSB/Recall/RecallView.csb"
end

function RecallView:getBindingInfo()
    return {
        ["_KW_PANEL_ITEMLIST"] = { varName = "_listPanel" },
        ["_KW_TEXT_NODATA"] = { varName = "_textNoData" },
        ["_KW_IMG_NOTICE_BG"] = { varName = "_imgNoticeBg" },
    }
end

function RecallView:ctor()
    RecallView.super.ctor(self)
    self._tvInfoList = nil
    self._userList = {}
    self:initView()
end

function RecallView:onExit()
    RecallView.super.onExit(self)
    XH.lobby:getModule("Recall"):initLeftTimeDelay()
end

function RecallView:initView()
    self._textNoData:setVisible(true)
    self._imgNoticeBg:setVisible(false)
    self:refreshTableView()
end

function RecallView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("Recall"), eventKeyName = "EVENT_PLAYERLIST_CHANGE", callBack = "onPlayerListChange" },
    }
end

function RecallView:onPlayerListChange(event)
    if self._tvInfoList ~= nil then
        local point = self._tvInfoList:getContentOffset()  -- 当前偏移量
        local size1 = self._tvInfoList:getContentSize()
        self._tvInfoList:reloadData()
        local size2 = self._tvInfoList:getContentSize()
        if size2.height > size1.height then
            point.y = (size1.height + point.y) - size2.height   -- 重新计算偏移量与之前展示位置保持一致
            self._tvInfoList:setContentOffset(point, false)
        end
    end
    local infoList = XH.lobby:getModule("Recall"):getPlayerList()
    if #infoList > 0 then
        self._textNoData:setVisible(false)
        self._imgNoticeBg:setVisible(true)
    end
end

function RecallView:reloadListData(teaNumber, isOwnerOrAdmin)
    XH.lobby:getModule("Recall"):reloadRecallPlayerList(teaNumber, isOwnerOrAdmin)
    XH.lobby:getModule("Recall"):startLeftTimeDelay()
end

function RecallView:refreshTableView(isCleanup)
    if self._tvInfoList == nil then
        self._tvInfoList = cc.TableView:create(self._listPanel:getContentSize())
        self._tvInfoList:setDirection(cc.SCROLLVIEW_DIRECTION_VERTICAL)
        self._tvInfoList:setVerticalFillOrder(cc.TABLEVIEW_FILL_TOPDOWN)
        self._tvInfoList:setIgnoreAnchorPointForPosition(false)
        self._tvInfoList:setAnchorPoint(cc.p(0, 0))
        self._tvInfoList:setPosition(cc.p(0, 0))
        self._listPanel:addChild(self._tvInfoList)
        self._tvInfoList:registerScriptHandler(handler(self, self.onCellSizeForTable), cc.TABLECELL_SIZE_FOR_INDEX)
        self._tvInfoList:registerScriptHandler(handler(self, self.onTableCellAtIndex), cc.TABLECELL_SIZE_AT_INDEX)
        self._tvInfoList:registerScriptHandler(handler(self, self.onNumberOfCellsInTableView), cc.NUMBER_OF_CELLS_IN_TABLEVIEW)
    end
    if self._tvInfoList ~= nil then
        self._tvInfoList:reloadData()
    end
end

function RecallView:onCellSizeForTable(tableView, index)
    return 560, 160
end

function RecallView:onTableCellAtIndex(tableView, index)
    local cell = tableView:dequeueCell()
    if not cell then
        cell = cc.TableViewCell:new()
        local infoItem = require("lobby.Modules.Recall.RecallListItem"):new()
        if infoItem ~= nil then
            infoItem:setAnchorPoint(cc.p(0, 0))
            infoItem:setPosition(0, 0)
            infoItem:setName("InfoItem")
            cell:addChild(infoItem)
            infoItem:setContentSize(infoItem:getSize())
            ccui.Helper:doLayout(infoItem)
        end
    end
    local infoList = XH.lobby:getModule("Recall"):getPlayerList()
    local infoItem = cell:getChildByName("InfoItem")
    if infoItem ~= nil then
        infoItem:updateInfo(infoList[index + 1], index + 1)
    end
    if index == #infoList - 2 then
        XH.lobby:getModule("Recall"):reqNextRecallPlayerList()
    end
    if infoItem ~= nil and not self._userList[infoList[index + 1].user_id] then
        local conventionData = {}
        conventionData.page = "P1104"
        conventionData.item_id = infoList[index + 1].user_id
        if XH.SceneManager:getInstance():getTopSceneTag() == XH.SCENE_TAG.LOBBY then
            conventionData.page = "P1063"
        end
        if index <= 5 then 
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.RECALL_LIST_ITEM,conventionData, {area_id = XH.areaData:getAreaID()})
        else 
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.RECALL_LIST_ITEM_SCROLLING,conventionData, {area_id = XH.areaData:getAreaID()})
        end
        self._userList[infoList[index + 1].user_id] = true
    end
    return cell
end

function RecallView:onNumberOfCellsInTableView(tableView)
    local infoList = XH.lobby:getModule("Recall"):getPlayerList()
    return #infoList
end

return RecallViewC