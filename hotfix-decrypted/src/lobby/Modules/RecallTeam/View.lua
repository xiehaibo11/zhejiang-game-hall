-- 领队主界面
local RecallTeamView = class("RecallTeamView", XH.ViewBase)
local RecallNewConfig = require("lobby.Modules.RecallNew.Config")

function RecallTeamView:getCSBPath()
    return "cocosStudio/hall/CSB/RecallNew/RecallNewTeamView.csb"
end

function RecallTeamView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = { varName = "_KW_BTN_CLOSE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickClose" },
        ["_KW_PANEL_TABLE_INFO"] = { varName = "_panelListInfo" },
        ["_KW_PANEL_ITEM"] = { varName = "_panelListItem" },
        ["_KW_ROOT_LAYER"] = { varName = "_KW_ROOT_LAYER" },
        ["_KW_ANI"] = { varName = "_KW_ANI" },
        ["_KW_TEXT_TITLE"] = { varName = "_KW_TEXT_TITLE" },
    }
end

function RecallTeamView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("RecallTeam"), eventKeyName = "EVENT_FLUSH_ACT_INFO", callBack = "flushActInfo" },
        { module = XH.lobby:getModule("RecallTeam"), eventKeyName = "EVENT_FLUSH_ACT_INFO_SINGLE", callBack = "flushActInfoSingle" },
    }
end

function RecallTeamView:onClickClose()
    self:close()
end

function RecallTeamView:ctor()
    RecallTeamView.super.ctor(self)
    self._curPage = 1
    self._maxPage = 1
    self:initUI()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080609, { club_id = XH.areaData:getAreaID() .. "_" .. TeaHouse.manager.teahouseData:getTeaNumber() })
end

function RecallTeamView:initUI()
    self:initTableView()
    self:reqListInfo()
end

function RecallTeamView:showAni()
    self._KW_ROOT_LAYER:setVisible(true)
    self._KW_ANI:removeAllChildren()
    local config = {
        path = "",
        ske = "animation/Lobby/Base/zzb_hghd_lyhg/zzb_hghd_lyhg.atlas",
        tex = "animation/Lobby/Base/zzb_hghd_lyhg/zzb_hghd_lyhg.json",
        armatureName = "cx",
        scale = 1,
        loop = false,
        lastArmatureName = "loop",
    }
    local dargonBones = display.playDargonBonesSpine(config)
    dargonBones:registerSpineEventHandler(function(event)
        if self and not tolua.isnull(self) then
            if event.type == 'complete' then
                dargonBones:setAnimation(0, "" .. config.lastArmatureName, true)
            end
        end
    end, sp.EventType.ANIMATION_COMPLETE)
    dargonBones:update(0)
    dargonBones:setAnchorPoint(cc.p(0.5, 0.5))
    dargonBones:setPosition(cc.p(0, 0))
    self._KW_TEXT_TITLE:setOpacity(0)
    self._KW_BTN_CLOSE:setOpacity(0)
    self._KW_ANI:addChild(dargonBones)
    self._KW_ROOT_LAYER:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = "animation/Lobby/Base/zzb_hghd_lyhg/zzb_hghd_lyhg_1.json", animationName = "cx", boneName = "zt", slotName = "zt" })
    self._KW_TEXT_TITLE:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = "animation/Lobby/Base/zzb_hghd_lyhg/zzb_hghd_lyhg_1.json", animationName = "cx", boneName = "x", slotName = "x" })
    self._KW_BTN_CLOSE:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = "animation/Lobby/Base/zzb_hghd_lyhg/zzb_hghd_lyhg_1.json", animationName = "cx", boneName = "x", slotName = "x" })
    if self.showAni1 then
        for i = 1, #self.showAni1:getChildren() do
            self.showAni1:getChildren()[i]:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = "animation/Lobby/Base/zzb_hghd_lyhg/zzb_hghd_lyhg_1.json", animationName = "cx", boneName = "1", slotName = "1" })
        end
    end
    if self.showAni2 then
        for i = 1, #self.showAni2:getChildren() do
            self.showAni2:getChildren()[i]:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = "animation/Lobby/Base/zzb_hghd_lyhg/zzb_hghd_lyhg_1.json", animationName = "cx", boneName = "2", slotName = "2" })
        end
    end
    if self.showAni3 then
        for i = 1, #self.showAni3:getChildren() do
            self.showAni3:getChildren()[i]:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = "animation/Lobby/Base/zzb_hghd_lyhg/zzb_hghd_lyhg_1.json", animationName = "cx", boneName = "3", slotName = "3" })
        end
    end
    if self.showAni4 then
        for i = 1, #self.showAni4:getChildren() do
            self.showAni4:getChildren()[i]:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = "animation/Lobby/Base/zzb_hghd_lyhg/zzb_hghd_lyhg_1.json", animationName = "cx", boneName = "4", slotName = "4" })
        end
    end
end

function RecallTeamView:flushActInfo(event)
    self._isReqNextPage = false
    local info = XH.lobby:getModule("RecallTeam"):getInfo()
    if #info == 0 then
        XH.TipTool.showToast("已无回归牌友...")
        self:close()
        return
    end
    self._maxPage = math.ceil(XH.lobby:getModule("RecallTeam"):getMaxNum() / XH.lobby:getModule("RecallTeam"):getDefPageSize())
    self._maxPage = self._maxPage == 0 and 1 or self._maxPage
    if event then
        self._curPage = event.msg.curPage
    end
    self:initTableView()
    if not self._KW_ROOT_LAYER:isVisible() then
        self:showAni()
    end
end

function RecallTeamView:flushActInfoSingle()
    self:flushActInfo()
end

function RecallTeamView:initTableView()
    if self._tvInfoList == nil then
        self._tvInfoList = cc.TableView:create(self._panelListInfo:getContentSize())
        self._tvInfoList:setDirection(cc.SCROLLVIEW_DIRECTION_VERTICAL)
        self._tvInfoList:setVerticalFillOrder(cc.TABLEVIEW_FILL_TOPDOWN)
        self._tvInfoList:setIgnoreAnchorPointForPosition(false)
        self._tvInfoList:setAnchorPoint(cc.p(0, 0))
        self._tvInfoList:setPosition(cc.p(0, 0))
        self._panelListInfo:addChild(self._tvInfoList)
        self._tvInfoList:registerScriptHandler(handler(self, self.onTableCellTouched), cc.TABLECELL_TOUCHED)
        self._tvInfoList:registerScriptHandler(handler(self, self.onCellSizeForTable), cc.TABLECELL_SIZE_FOR_INDEX)
        self._tvInfoList:registerScriptHandler(handler(self, self.onTableCellAtIndex), cc.TABLECELL_SIZE_AT_INDEX)
        self._tvInfoList:registerScriptHandler(handler(self, self.onNumberOfCellsInTableView), cc.NUMBER_OF_CELLS_IN_TABLEVIEW)
        self._tvInfoList:setDelegate()
        self._tvInfoList:registerScriptHandler(handler(self, self.scrollViewDidScroll), cc.SCROLLVIEW_SCRIPT_SCROLL)
    end
    if self._tvInfoList ~= nil then
        self._tvInfoList:reloadData()
    end
end

function RecallTeamView:scrollViewDidScroll(view)
    if self._isReqNextPage then
        return
    end
    local offset = view:getContentOffset()
    local containerSize = view:getContainer():getContentSize()
    local viewSize = view:getViewSize()
    -- 20里的长度不处理请求
    local offSet = 20
    if self._curPage < self._maxPage and offset.y > offSet then
        self._isReqNextPage = true
        self._curPage = self._curPage + 1
        self:reqListInfo()
    elseif offset.y < (viewSize.height - containerSize.height - offSet) and self._curPage > 1 then
        self._isReqNextPage = true
        self._curPage = self._curPage - 1
        self:reqListInfo()
    end
end

function RecallTeamView:reqListInfo()
    XH.lobby:getModule("RecallTeam"):listClubReBackPlayersRequest(TeaHouse.manager.teahouseData:getTeaNumber(), self._curPage)
end

function RecallTeamView:onTableCellTouched(tableView, cell)

end

function RecallTeamView:onCellSizeForTable(tableView, index)
    local size = self._panelListItem:getContentSize()
    return self._panelListInfo:getContentSize().width, 205--size.height
end

function RecallTeamView:onTableCellAtIndex(tableView, index)
    local cell = tableView:dequeueCell()
    if not cell then
        cell = cc.TableViewCell:new()
    end
    cell:removeAllChildren()
    local info = XH.lobby:getModule("RecallTeam"):getInfo()
    local index = index + 1
    if index == 1 then
        self.showAni1 = cell
    elseif index == 2 then
        self.showAni2 = cell
    elseif index == 3 then
        self.showAni3 = cell
    elseif index == 4 then
        self.showAni4 = cell
    end
    if info and info[2 * index - 1] then
        local his1 = info[2 * index - 1]
        local infoItem = self._panelListItem:clone()
        infoItem:setAnchorPoint(cc.p(0.5, 1))
        infoItem:setPosition(infoItem:getContentSize().width / 2 + 90, 205)
        infoItem:setName(2 * index - 1)
        infoItem:getChildByName("KW_ALL_BG"):setVisible(true)
        self:setSinglePlayerInfo(infoItem, his1)
        cell:addChild(infoItem)
    end
    if info and info[2 * index] then
        local his2 = info[2 * index]
        local infoItem = self._panelListItem:clone()
        infoItem:setAnchorPoint(cc.p(0.5, 1))
        infoItem:setPosition(infoItem:getContentSize().width / 2 + 888, 205)
        infoItem:setName(2 * index)
        infoItem:getChildByName("KW_ALL_BG"):setVisible(false)
        self:setSinglePlayerInfo(infoItem, his2)
        cell:addChild(infoItem)
    end
    if self._KW_ROOT_LAYER:isVisible() == false then
        for i = 1, #cell:getChildren() do
            cell:getChildren()[i]:setOpacity(0)
        end
    end
    return cell
end

function RecallTeamView:getLeftTime(info)
    local serverTime = XH.lobby:getModule("Shop"):getServerTime()
    local rebackTime = serverTime - tonumber(info.rebackStartTime)
    local showTime = ""
    if rebackTime < 3600 then
        showTime = string.format("%02d分%02d秒", math.floor(rebackTime / 60), rebackTime % 60)
    elseif rebackTime < 86400 then
        showTime = string.format("%02d时%02d分", math.floor(rebackTime / 3600), math.floor(rebackTime % 3600 / 60))
    else
        showTime = string.format("%02d天%02d时", math.floor(rebackTime / 86400), math.floor(rebackTime % 86400 / 3600))
    end
    return showTime
end

-- 设置个人数据
function RecallTeamView:setSinglePlayerInfo(item, info)
    local head = item:getChildByName("KW_HEAD")
    local headDef = item:getChildByName("KW_HEAD_DEF")
    head:setVisible(info.avatar ~= "")
    headDef:setVisible(info.avatar == "")
    if info.avatar ~= "" then
        XH.lobby:getModule("RecallNew"):setImgUrl(head, info.avatar)
    end
    local propsInfo = XH.lobby:getModule("RecallTeam"):getPropsInfo()
    local awardImg = item:getChildByName("KW_PANEL_AWARD"):getChildByName("KW_AWARD")
    local textAward = item:getChildByName("KW_TEXT_AWARD")
    if propsInfo[1] then
        XH.lobby:getModule("RecallNew"):setImgUrl(awardImg, propsInfo[1].icon)
        textAward:setString("x" .. propsInfo[1].count)
    end
    local targetGame = XH.lobby:getModule("RecallTeam"):getTargetGame()
    local todayGame = info.todayGame
    if todayGame > targetGame then
        todayGame = targetGame
    end
    local nameTxt = info.name
    if string.len(nameTxt) > 12 then
        local validBytes = XH.StringTool.getMinimumValidBytesUTF8(nameTxt, 12)
        nameTxt = string.sub(nameTxt, 1, validBytes) .. "..."
    end
    item:getChildByName("KW_NAME"):setString(nameTxt)
    local bg = item:getChildByName("KW_IMG_BG")
    bg:getChildByName("KW_LEFT_TIME"):setString(self:getLeftTime(info))
    bg:setContentSize(73 + bg:getChildByName("KW_LEFT_TIME"):getContentSize().width, bg:getContentSize().height)

    local curText = item:getChildByName("KW_TEXT_CUR")
    local targetText = item:getChildByName("KW_TEXT_TARGET")
    curText:setString(todayGame .. "/")
    targetText:setString(targetGame)
    targetText:setPositionX(curText:getPositionX() + curText:getContentSize().width)
    item:getChildByName("KW_BTN_GET"):addTouchEventListener(handler(self, self.onTouchItem))
    item:getChildByName("KW_BG_STATE_ON"):setVisible(info.status == RecallNewConfig.ClubReBackPlayerStatus.Re_Online)
    item:getChildByName("KW_BG_STATE_OFF"):setVisible(info.status == RecallNewConfig.ClubReBackPlayerStatus.Re_Offline)
    item:getChildByName("KW_BG_STATE_GAME"):setVisible(info.status == RecallNewConfig.ClubReBackPlayerStatus.Re_Gaming)
    item:getChildByName("KW_IS_GET"):setVisible(info.rewardStatus == RecallNewConfig.ReBackStatus.ReStatus_Rewarded)
    local btnGet = item:getChildByName("KW_BTN_GET")
    local textGet = btnGet:getChildByName("KW_TEXT_STATE")
    btnGet:setOpacity(255)
    btnGet:setTouchEnabled(true)
    if info.rewardStatus == RecallNewConfig.ReBackStatus.ReStatus_None then
        if info.status == RecallNewConfig.ClubReBackPlayerStatus.Re_Offline then
            btnGet:loadTexture("lyhg_Btn_l.png", ccui.TextureResType.plistType)
            textGet:setTextColor(cc.c3b(35, 102, 159))
            textGet:setString("喊TA上线")
        else
            btnGet:loadTexture("lyhg_Btn_c.png", ccui.TextureResType.plistType)
            textGet:setTextColor(cc.c3b(160, 34, 0))
            textGet:setString("邀请对局")
        end
    elseif info.rewardStatus == RecallNewConfig.ReBackStatus.ReStatus_Can_Reward then
        btnGet:loadTexture("lyhg_Btn_h.png", ccui.TextureResType.plistType)
        textGet:setTextColor(cc.c3b(166, 74, 0))
        textGet:setString("立即领取")
    else
        btnGet:loadTexture("lyhg_Btn_h.png", ccui.TextureResType.plistType)
        btnGet:setOpacity(255 * 0.6)
        textGet:setTextColor(cc.c3b(166, 74, 0))
        textGet:setString("明天再来")
        btnGet:setTouchEnabled(false)
    end
    item:setVisible(true)
end

function RecallTeamView:onTouchItem(send, eventType)
    if eventType == ccui.TouchEventType.began then
        send:setScale(0.9)
        send:setColor(cc.c3b(160, 160, 160))
    elseif eventType == ccui.TouchEventType.ended or eventType == ccui.TouchEventType.canceled then
        send:setScale(1)
        send:setColor(cc.c3b(255, 255, 255))
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local index = tonumber(send:getParent():getName())
    local allInfo = XH.lobby:getModule("RecallTeam"):getInfo()
    if allInfo[index] then
        local info = allInfo[index]
        local serverTime = XH.lobby:getModule("Shop"):getServerTime()
        local rebackTime = serverTime - tonumber(info.rebackStartTime)
        local showDay = math.ceil(rebackTime / 86400)
        if info.rewardStatus == RecallNewConfig.ReBackStatus.ReStatus_Can_Reward then
            XH.lobby:getModule("RecallTeam"):rewardClubReBackRequest(info.userId)
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080610, { block_label = "点击领取", club_id = XH.areaData:getAreaID() .. "_" .. TeaHouse.manager.teahouseData:getTeaNumber() }, { count = showDay })
        elseif info.rewardStatus == RecallNewConfig.ReBackStatus.ReStatus_None then
            if info.status == RecallNewConfig.ClubReBackPlayerStatus.Re_Offline then
                TeaHouse.manager.teaHouseOnline:inviteOffline(info.userId)
                XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080610, { block_label = "喊他上线", club_id = XH.areaData:getAreaID() .. "_" .. TeaHouse.manager.teahouseData:getTeaNumber() }, { count = showDay })
            elseif info.status == RecallNewConfig.ClubReBackPlayerStatus.Re_Online then
                XH.lobby:getModule("RecallTeam"):notifyClubReBackPlayerInviteRequest(info.userId)
                XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25080610, { block_label = "邀请对局", club_id = XH.areaData:getAreaID() .. "_" .. TeaHouse.manager.teahouseData:getTeaNumber() }, { count = showDay })
            else
                XH.TipTool.showToast("游戏中，等他空闲再来玩吧")
            end
        end
    end
end

function RecallTeamView:onNumberOfCellsInTableView(tableView)
    return math.ceil(#XH.lobby:getModule("RecallTeam"):getInfo() / 2)
end

function RecallTeamView:onDestroy()
    RecallTeamView.super.onDestroy(self)
end

return RecallTeamViewt>  