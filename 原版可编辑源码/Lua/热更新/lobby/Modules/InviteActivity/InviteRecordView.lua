local InviteRecordView = class("InviteRecordView", XH.ViewBase)
local Utils = require("lobby.Modules.GoldNew.Tool.Utils")

function InviteRecordView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/Invite/InviteRecordLayer.csb"
end

function InviteRecordView:getBindingInfo()
    return {
        ["_body"] = {varName = "_body"},
        ["_panelEmpty"] = {varName = "_panelEmpty"},
        ["_txtMessage"] = {varName = "_txtMessage"},
        ["_list"] = {varName = "_list"},
        ["_item1"] = {varName = "_item1"},
        ["_btnClose"] = {varName = "_btnClose", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "clickClose"}
    }
end

function InviteRecordView:getProxyEvents()
    return {{module = self._module, eventName = "EVENT_INVITE_RECORD", callBack = "refreshRecordData"}}
end

function InviteRecordView:ctor(param)
    self._module = XH.lobby:getModule("InviteActivity")
    InviteRecordView.super.ctor(self, param)
    self._hisData = {}
    self:refreshTableView()
    self:firstReq()
end
function InviteRecordView:firstReq()
    self._module:resetInviteRecord()
    self._module:reqInviteRecord({page = 0})
end
function InviteRecordView:NextReq()
    self._module:reqInviteRecord({page = self._module.curRecordPage + 1})
end
function InviteRecordView:clickClose(send, eventType)
    self:close()
end
function InviteRecordView:refreshRecordData(event)
    local data = event.data
    if self._maxId == nil then
        -- 防止新标志被刷掉，只记录第一次的值就行
        self._maxId = data.maxid
    end
    self._hisData = data.list
    self._panelEmpty:setVisible(#data.list == 0)

    if data and data.addNum > 0 then
        self:onGetNewData(data.list, data.addNum, data.isGetAll)
    end
end

function InviteRecordView:updateInfo(item, info, idx)
    Utils:setImgUrl(XH.UITool.seekNodeByName(item, "imgIcon"), info.img, true)
    XH.UITool.setText(item, "txtID", "" .. info.ivt_numid)
    XH.UITool.setText(item, "txtTime", info.created_at)
    -- XH.UITool.setText(item, "txtTime", os.date("%Y-%m-%d %H:%M:%S", info.created_at))
    XH.UITool.setText(item, "txtName", XH.StringTool.getTrimName(info.nickname, 12))
    local isComplete = info.complete_num == info.obj_num;
    local str = isComplete and string.format("%d/%d已完成", info.complete_num, info.obj_num) or
                    string.format("%d/%d未完成", info.complete_num, info.obj_num);
    XH.UITool.setText(item, "txtProgress", str)
    XH.UITool.setTextColor(item, "txtProgress", isComplete and cc.c3b(39, 153, 55) or cc.c3b(77, 80, 91))
    XH.UITool.setVisible(item, "imgNew", info.id > self._maxId)
end

function InviteRecordView:refreshTableView(isCleanup)
    if self._tableView ~= nil and isCleanup then
        self._tableView:removeFromParent()
        self._tableView = nil
    end
    if self._tableView == nil then
        self._tableView = cc.TableView:create(self._list:getContentSize())
        self._tableView:setDirection(cc.SCROLLVIEW_DIRECTION_VERTICAL)
        self._tableView:setVerticalFillOrder(cc.TABLEVIEW_FILL_TOPDOWN)
        self._tableView:setIgnoreAnchorPointForPosition(false)
        self._tableView:setAnchorPoint(cc.p(0, 0))
        self._tableView:setPosition(cc.p(0, 0))
        self._list:addChild(self._tableView)
        self._tableView:registerScriptHandler(handler(self, self.onTableCellTouched), cc.TABLECELL_TOUCHED)
        self._tableView:registerScriptHandler(handler(self, self.onCellSizeForTable), cc.TABLECELL_SIZE_FOR_INDEX)
        self._tableView:registerScriptHandler(handler(self, self.onTableCellAtIndex), cc.TABLECELL_SIZE_AT_INDEX)
        self._tableView:registerScriptHandler(handler(self, self.onNumberOfCellsInTableView), cc.NUMBER_OF_CELLS_IN_TABLEVIEW)
    end
    if self._tableView ~= nil then
        self._tableView:reloadData()
    end
end

function InviteRecordView:onTableCellTouched(tableView, cell)
end

function InviteRecordView:onCellSizeForTable(tableView, index)
    local size = self._item1:getContentSize()
    return size.width, size.height
end

function InviteRecordView:onTableCellAtIndex(tableView, index)
    local cell = tableView:dequeueCell()
    if not cell then
        cell = cc.TableViewCell:new()
        local item = self._item1:clone()
        if item ~= nil then
            item:setVisible(true)
            item:setAnchorPoint(cc.p(0, 0))
            item:setPosition(0, 0)
            item:setName("InfoItem")
            local itemSize = item:getContentSize()
            local listSize = self._list:getContentSize()
            item:setContentSize(cc.size(listSize.width, itemSize.height))
            cell:addChild(item)
            ccui.Helper:doLayout(item)
        end
    end
    local item = cell:getChildByName("InfoItem")
    if item ~= nil then
        self:updateInfo(item, self._hisData[index + 1], index + 1)
    end
    if index + 1 == #self._hisData and not self._isGetAll then
        self:NextReq()
    end
    return cell
end

function InviteRecordView:onNumberOfCellsInTableView(tableView)
    return #self._hisData
end

function InviteRecordView:onGetNewData(data, addNum, isGetAll)
    self._isGetAll = isGetAll
    local currentOffset = self._tableView:getContentOffset()
    self._tableView:reloadData()
    self._tableView:setContentOffset(cc.p(currentOffset.x, currentOffset.y - self._item1:getContentSize().height * addNum), false)
end

return InviteRecordView
