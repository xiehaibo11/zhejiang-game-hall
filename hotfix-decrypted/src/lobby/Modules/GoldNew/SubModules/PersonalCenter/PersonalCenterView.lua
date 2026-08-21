local PersonalCenterView = class("GoldPersonalCenter", XH.Bridge.ViewBase)
local UrlConf = XH.Bridge:require("app.Config.UrlConf")
local RedPointManager = import("...Manager.RedPointManager")
local LocalConfig = import("...Configs.LocalConfig")
local Utils = import("...Tool.Utils")
local Config = import(".Config")
local SxVipConfig = require('lobby.Modules.Sxvip.Config')

local PlayBgColor = {cc.c3b(255, 0x76, 0x24), cc.c3b(0x2b, 0x96, 0x51), cc.c3b(0x85, 0x55, 0xdc)}

function PersonalCenterView:getCSBPath()
    return XH.Bridge:getCCSResPath("PersonalCenter/PersonalCenter.csb")
end

function PersonalCenterView:getBindingInfo()
    local info = {
        ["_btnClose"] = {varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose"},
        ["_btnCopy"] = {varName = "_btnCopy", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickCopy"},
        ["_btnVip"] = {varName = "_btnVip", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickVip"},
        ["_btnMan"] = {varName = "_btnMan", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickMan"},
        ["_btnWoman"] = {varName = "_btnWoman", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickWoman"},
        ["_btnTab1"] = {varName = "_btnTab1", type = XH.UI_TYPE.IMAGE, onTouchEnded = "onClickTabInfo"},
        ["_btnTab2"] = {varName = "_btnTab2", type = XH.UI_TYPE.IMAGE, onTouchEnded = "onClickTabRecord"},
        ["_btnBuyVip"] = {varName = "_btnBuyVip", type = XH.UI_TYPE.IMAGE, onTouchEnded = "onClickVip"},
        ["_btnGameType1"] = {varName = "_btnGameType1", type = XH.UI_TYPE.IMAGE, onTouchEnded = "onClickTabGameType"},
        ["_btnGameType2"] = {varName = "_btnGameType2", type = XH.UI_TYPE.IMAGE, onTouchEnded = "onClickTabGameType"},
        ["_btnGameType3"] = {varName = "_btnGameType3", type = XH.UI_TYPE.IMAGE, onTouchEnded = "onClickTabGameType"},
        ["_btnGameType4"] = {varName = "_btnGameType4", type = XH.UI_TYPE.IMAGE, onTouchEnded = "onClickTabGameType"},
        ["_btnEditAvatar"] = {varName = "_btnEditAvatar", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickEditAvatar"},
        ["_panelHead"] = {varName = "_panelHead", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickEditAvatar"}
    }
    local names = {
        "_panelLT", "_panelRight", "_panelInfo", "_panelRecord", "_listRecord", "_itemRecord", "_txtID", "_txtName", "_txtTotalJu", "_txtWinRate",
        "_itemPlay", "_listPlay", "_txtPlay3", "_panelHeadImg", "_panelOpenVip", "_txtEmpty", "_panelRecordList", "_listMenu"
    }
    for i, v in ipairs(names) do
        info[v] = {varName = v}
    end
    return info
end

function PersonalCenterView:getProxyEvents()
    return {
        {module = self._module, eventKeyName = "EVENT_PLAYER_INFO", callBack = "onEventPlayerInfo"},
        {module = self._module, eventKeyName = "EVENT_RECORD_INFO", callBack = "onEventRecordInfo"},
        {module = XH.Bridge:getModule("Sxvip"), eventKeyName = "SXVIP_EVENT_REMAINDER", callBack = "onRemainder"},
        {module = XH.Bridge:getModule("BagSysNew"), eventKeyName = "EVENT_BAGMANAGER_CHANGE_HEAD_FRRAME", callBack = "onEventChangeHeadFrame"}
    }
end

function PersonalCenterView:ctor(param)
    param = param or {}
    self._module = XH.Bridge:getModule(LocalConfig.MP.PC)
    PersonalCenterView.super.ctor(self, param)
    self._recordInfo = {}
    self._recordTabs = {self._btnGameType1, self._btnGameType2, self._btnGameType3, self._btnGameType4}
    self._gameTypeIdx = 1
    self._panelInfo:setVisible(true)
    self._panelRecord:setVisible(false)
    self._itemPlay:setVisible(false)
    self._itemRecord:setVisible(false)
    self._listMenu:setScrollBarEnabled(false)
    self._listPlay:setScrollBarEnabled(false)
    self:updateTab(self._btnTab1)
    self:initRecordTab()
    self:updateRecordTab(self._btnGameType1)
    self:adaptForLiuHai()
    -- self:updateUserBaseInfo()
    self:updatePlayerInfo(self._module:getPlayerInfo())
    self:initHeadFrame()
    self:refreshTableViewGold()
    local isVoiceMan = XH.Bridge:getModule(LocalConfig.MP.SET):isVoiceMan()
    self:refreshSex(isVoiceMan)
    self._module:reqGoldPlayerInfo()
end

function PersonalCenterView:adaptForLiuHai()
    if not self.hasInit then
        self.hasInit = true
        local notchWidth = XH.UITool.getLiuHaiWidth()
        if notchWidth > 0 then
            XH.UITool.adaptForLiuHai({self._panelLT})
        end
    end
end

function PersonalCenterView:updatePlayerInfo(data)
    if data then
        -- self:refreshSex(data.gold_sex == 1)
        self._txtTotalJu:setString(data.total_play_cnt)
        local rate = data.total_play_cnt > 0 and math.ceil(100 * data.total_win_cnt / data.total_play_cnt) or 0
        self._txtWinRate:setString(rate .. "%")
        self._listPlay:removeAllChildren()
        for i, v in ipairs(data.changWanInfo) do
            if i <= 3 then
                local item = self._itemPlay:clone()
                item:setVisible(true)
                self:initWanfa(item, "_txtPlay", v.gameName, v.gameId, true)
                self._listPlay:pushBackCustomItem(item)
            end
        end
    end
    self:updateUserBaseInfo()
end

function PersonalCenterView:updateUserBaseInfo()
    local nickname = string.gsub(XH.playerData:getNickName(), "\n", "")
    local sex = XH.playerData:getSex()
    local id = XH.playerData:getNumberID()
    self._txtName:setText(nickname)
    self._txtID:setText("UID:" .. id)

    local head = XH.playerData:getHead()
    if head == 0 then -- default head
        local headImageKey
        if sex == 0 then -- girl
            headImageKey = "_0002_mrtx_w.png"
        else -- boy
            headImageKey = "_0002_mrtx_m.png"
        end
        XH.UITool.setPlistTextureOnNode(self._panelHeadImg, headImageKey)
    end

    local urlGold = self._module:getGoldHeadUrl()
    local url = urlGold or XH.playerData:getWeChatURL()
    if url and url ~= "" then
        Utils:setImgUrl(self._panelHeadImg, url, true)
    end
    local isExpire = XH.Bridge:getModule("Sxvip"):isExpire()
    if isExpire then
        XH.UITool.gray(self._btnVip)
    else
        XH.UITool.resetGray(self._btnVip)
    end
end

function PersonalCenterView:initHeadFrame()
    local headUrlData, propid = XH.Bridge:getModule("BagSysNew"):getBagData():getSelfHeadFrameUrl()
    if headUrlData then
        local headFrameData = {url = headUrlData, propid = propid}
        self:onEventChangeHeadFrame({data = headFrameData})
    end
end

function PersonalCenterView:onEventChangeHeadFrame(event)
    if not event or not event.data then
        Utils:setHead(self._panelHead)
        return
    end
    if event.data then
        Utils:setHead(self._panelHead, {framePropid = event.data.propid, frameUrl = event.data.url})
    end
end

function PersonalCenterView:onEventRecordInfo(event)
    local data = event.info
    if data and event.gameType == self._gameTypeIdx and event.addNum > 0 then
        self:onGetNewData(data, event.addNum, event.isGetAll)
    end
    self._txtEmpty:setVisible(#self._recordInfo == 0)
end

function PersonalCenterView:onEventPlayerInfo(event)
    self:updatePlayerInfo(event.info)
end

function PersonalCenterView:initWanfa(item, txtName, gameName, gameId, bUpdateBgSize)
    item:setCascadeColorEnabled(false)
    local txt = item:getChildByName(txtName)
    txt:setString(gameName)
    if bUpdateBgSize then
        local txtSize = txt:getContentSize()
        local bgWidth = txtSize.width + 40
        local bgSize = item:getContentSize()
        item:setContentSize(cc.size(bgWidth, bgSize.height))
        txt:setPositionX(bgWidth / 2)
    end
    local gameType = XH.Bridge:getModule("GoldNew"):getGameType(gameId)
    local colorIdx = self._module:isMahjong(gameId, gameType) and 2 or (self._module:isDarkDoubleKou(gameId, gameType) and 3 or 1)
    item:setColor(PlayBgColor[colorIdx])
end

function PersonalCenterView:isFullScreen()
    return true
end

-- 关闭按钮
function PersonalCenterView:onTouchEventClose(send, event)
    self:close()
end

function PersonalCenterView:onClickCopy(send, event)
    XH.SysTool.copyString(XH.playerData:getNumberID() .. "")
    XH.TipTool.showToast("复制成功!")
end
function PersonalCenterView:onClickVip(send, event)
    XH.Bridge.viewManager:openView("SxvipPrivilegeView", nil, SxVipConfig.ThrowData.source.newGoldHallPC)
end
function PersonalCenterView:onClickEditAvatar(send, event)
    XH.Bridge.viewManager:openView("GoldHallPCEditAvatarView")
end

function PersonalCenterView:onClickMan(send, event)
    -- self._module:reqGoldPlayerInfoSet({type = Config.SetType.SET_GOLD_SEX, sex = 1})
    XH.Bridge:getModule("Set"):setVoiceType(true)
    self:refreshSex(true)
    Utils:delayTouchEnable(self._btnWoman)
    Utils:delayTouchEnable(self._btnMan)
end

function PersonalCenterView:onClickWoman(send, event)
    -- self._module:reqGoldPlayerInfoSet({type = Config.SetType.SET_GOLD_SEX, sex = 0})
    XH.Bridge:getModule("Set"):setVoiceType(false)
    self:refreshSex(false)
    Utils:delayTouchEnable(self._btnWoman)
    Utils:delayTouchEnable(self._btnMan)
end

function PersonalCenterView:refreshSex(isVoiceMan)
    XH.UITool.setVisible(self._btnMan, "imgSelected", isVoiceMan)
    XH.UITool.setVisible(self._btnWoman, "imgSelected", not isVoiceMan)
end

function PersonalCenterView:onClickTabInfo(send, event)
    self._panelInfo:setVisible(true)
    self._panelRecord:setVisible(false)
    self:updateTab(send)
    Utils:delayTouchEnable(self._btnTab1)
    Utils:delayTouchEnable(self._btnTab2)
end

function PersonalCenterView:onClickTabRecord(send, event)
    self._panelInfo:setVisible(false)
    self._panelRecord:setVisible(true)
    local isExpire = XH.Bridge:getModule("Sxvip"):isExpire()
    self._panelOpenVip:setVisible(isExpire)
    self._panelRecordList:setVisible(not isExpire)
    -- if #self._recordInfo == 0 and not self._isGetAll then
    self._recordInfo = {}
    if self._tableView ~= nil then
        self._tableView:reloadData()
        self._txtEmpty:setVisible(false)
    end
    self._module:reqRecord(self._gameTypeIdx)
    -- end
    self:updateTab(send)
end

function PersonalCenterView:onRemainder(event)
    local isExpire = XH.Bridge:getModule("Sxvip"):isExpire()
    self._panelOpenVip:setVisible(isExpire)
    if isExpire then
        XH.UITool.gray(self._btnVip)
    else
        XH.UITool.resetGray(self._btnVip)
    end
    self._panelRecordList:setVisible(not isExpire)
end

function PersonalCenterView:updateTab(selectTab)
    local tabs = {self._btnTab1, self._btnTab2}
    for _, v in ipairs(tabs) do
        v:setEnabled(v ~= selectTab)
        -- v:setTitleColor(v == selectTab and cc.c3b(0xff, 0xff, 0xff) or cc.c3b(0xff, 0xff, 0xff))
    end
end

function PersonalCenterView:initRecordTab()
    local tabs = self._module:getRecordTag()
    for i, v in ipairs(self._recordTabs) do
        v:setVisible(false)
    end
    for i, v in ipairs(tabs) do
        if self._recordTabs[i] then
            local info = string.split(v, "_")
            XH.UITool.setText(self._recordTabs[i], "txtTitle", info[1] or "")
            self._recordTabs[i]:setVisible(true)
        end
    end
end

function PersonalCenterView:updateRecordTab(selectTab)
    local tabs = self._recordTabs
    for _, v in ipairs(tabs) do
        local bSelect = v == selectTab
        v:setTouchEnabled(not bSelect)
        XH.UITool.setVisible(v, "imgNormal", not bSelect)
        XH.UITool.setVisible(v, "imgSelected", bSelect)
    end
end

function PersonalCenterView:onClickTabGameType(send, event)
    local idx = table.indexof(self._recordTabs, send)
    self._gameTypeIdx = idx
    self._recordInfo = {}
    if self._tableView ~= nil then
        self._tableView:reloadData()
        self._txtEmpty:setVisible(#self._recordInfo == 0)
    end
    self._module:reqRecord(self._gameTypeIdx)
    self:updateRecordTab(send)
    for _, v in ipairs(self._recordTabs) do
        Utils:delayTouchEnable(v)
    end
end

function PersonalCenterView:refreshTableViewGold(isCleanup)
    if self._tableView ~= nil and isCleanup then
        self._tableView:removeFromParent()
        self._tableView = nil
    end
    if self._tableView == nil then
        self._tableView = cc.TableView:create(self._listRecord:getContentSize())
        self._tableView:setDirection(cc.SCROLLVIEW_DIRECTION_VERTICAL)
        self._tableView:setVerticalFillOrder(cc.TABLEVIEW_FILL_TOPDOWN)
        self._tableView:setIgnoreAnchorPointForPosition(false)
        self._tableView:setAnchorPoint(cc.p(0, 0))
        self._tableView:setPosition(cc.p(0, 0))
        self._listRecord:addChild(self._tableView)
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

function PersonalCenterView:onTableCellTouchedGold(tableView, cell)
end

function PersonalCenterView:onCellSizeForTableGold(tableView, index)
    local size = self._itemRecord:getContentSize()
    return size.width, size.height
end

function PersonalCenterView:updateInfo(item, info, idx)
    local gameId = info.goldGameInfo.gameId
    local name = self._module:getGameEntrtName(gameId, info.goldGameInfo.roomLevel + 1, info.goldGameInfo.playerCnt)
    -- XH.UITool.setText(item, "txtName", idx .. name)
    XH.UITool.setText(item, "txtRoomLevel", XH.GOLD_LEVEL_DEFAULT_NAME[info.goldGameInfo.roomLevel % 10 + 1])
    XH.UITool.setText(item, "txtTime", os.date("%m/%d %H:%M", tonumber(info.endTime)))
    local score = tonumber(info.score) or 0
    local scoreStr = Utils:formatGoldNum2String(score)
    XH.UITool.setText(item, "txtScore", score > 0 and "+" .. scoreStr or scoreStr)
    XH.UITool.setTextColor(item, "txtScore", score > 0 and cc.c3b(0xf9, 0x6a, 0x38) or cc.c3b(0x78, 0x81, 0x89))
    XH.UITool.setVisible(item, "imgWin", score > 0)
    XH.UITool.setVisible(item, "imgLose", score <= 0)
    self:initWanfa(item:getChildByName("itemPlay"), "txtName", name, gameId)
end

function PersonalCenterView:onTableCellAtIndexGold(tableView, index)
    local cell = tableView:dequeueCell()
    if not cell then
        cell = cc.TableViewCell:new()
        local item = self._itemRecord:clone()
        if item ~= nil then
            item:setVisible(true)
            item:setAnchorPoint(cc.p(0, 0))
            item:setPosition(0, 0)
            item:setName("InfoItem")
            local itemSize = item:getContentSize()
            local listSize = self._listRecord:getContentSize()
            item:setContentSize(cc.size(listSize.width, itemSize.height))
            cell:addChild(item)
            ccui.Helper:doLayout(item)
        end
    end
    local item = cell:getChildByName("InfoItem")
    if item ~= nil then
        self:updateInfo(item, self._recordInfo[index + 1], index + 1)
    end
    if index + 1 == #self._recordInfo and not self._isGetAll then
        self._module:reqNextRecord(self._gameTypeIdx)
        -- for i = 1, 4 do
        --     table.insert(self._recordInfo, {})
        -- end
        -- local currentOffset = self._tableView:getContentOffset()
        -- self._tableView:reloadData()
        -- self._tableView:setContentOffset(cc.p(currentOffset.x, currentOffset.y - 220 * 4), false)
    end
    return cell
end

function PersonalCenterView:onNumberOfCellsInTableViewGold(tableView)
    return #self._recordInfo
end

function PersonalCenterView:onGetNewData(data, addNum, isGetAll)
    self._recordInfo = data
    self._isGetAll = isGetAll
    local currentOffset = self._tableView:getContentOffset()
    self._tableView:reloadData()
    self._tableView:setContentOffset(cc.p(currentOffset.x, currentOffset.y - self._itemRecord:getContentSize().height * addNum), false)
    self._txtEmpty:setVisible(#self._recordInfo == 0)
end

function PersonalCenterView:onCleanup()
    PersonalCenterView.super.onCleanup(self)
end
return PersonalCenterView
  >B  