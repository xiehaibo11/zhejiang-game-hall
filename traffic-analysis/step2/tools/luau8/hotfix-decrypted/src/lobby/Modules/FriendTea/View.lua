local FriendTeaView = class("FriendTeaView", XH.ViewBase)
local ViewAniConfig = require("app.Base.ViewAniConfig")
-- local FriendModel = require("game.model.FriendModel")
-- local FriendServiceObserver   = require("game.observer.FriendServiceObserver")

function FriendTeaView:ctor(param)
    FriendTeaView.super.ctor(self)
    -- FriendServiceObserver:exportAll(self)
    -- 兼容1280
    -- local designSize = cc.Director:getInstance():getOpenGLView():getDesignResolutionSize()
    -- if designSize.width == 1280 or designSize.height == 720 then
    -- self.KW_ROOT_LAYER:setScale(0.7)
    self.KW_ROOT_LAYER:setPosition(display.cx, display.cy)
    -- end
    self._showGuide = true
    self._isAuto = param and param.isAuto or false
    self._closeTime = 4
    self._mapItem = {}

    self._module = XH.lobby:getModule("FriendTea")
    if self._isAuto then
        self:onUpdateTeaHouseList()
    else
        self._module:reqListHallFriends()
        self._textNoFriend:setString("数据加载中...")
        self._textNoFriend:setVisible(true)
    end
    self._showTime = os.time()
    -- FriendModel:QueryTeaHouseList() todo
    self._applyCount = 0
    self._errorCount = 0
end

function FriendTeaView:getCSBPath()
    return "GoldNew/Lobby/FriendTea/CSB/FriendTea.csb"
end

function FriendTeaView:getBindingInfo()
    return {
        ["_KW_ROOT_LAYER"] = {varName = "KW_ROOT_LAYER"},
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnClose"},
        ["_KW_BTN_APPLY_ALL"] = {varName = "_btnApplyAll", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnApplyAll"},
        ["_KW_LIST_TEAHOUSE"] = {varName = "_listTeaHouse"},
        ["_KW_PANEL_TEAHOUSE_ITEM"] = {varName = "_itemTeaHouse"},
        ["_KW_PANEL_PLAYER_ITEM"] = {varName = "_itemPlayer"},
        ["_KW_IMG_TIP"] = {varName = "_imgTip"},
        ["_KW_TEXT_NO_FRIEND"] = {varName = "_textNoFriend"}
    }
end

function FriendTeaView:getProxyEvents()
    return {
        {module = XH.lobby:getModule("FriendTea"), eventKeyName = "EVENT_UPDATE_HALLFRIENDS", callBack = "onUpdateTeaHouseList"},
        {module = XH.lobby:getModule("FriendTea"), eventKeyName = "EVENT_RESP_JOIN_TEA", callBack = "teaPlayerRequestJoinIn"}
    }
end

function FriendTeaView:reqJoinTea(teaid, appid)
function FriendTeaView:getAniConfig()
    return { aniType = ViewAniConfig.AniName.NORMAL, rootNode = nil, popNode = self.KW_ROOT_LAYER, btnList = {} }
end

    require("teahouse.init")
    if TeaHouse and TeaHouse.init then
        TeaHouse.init()
        TeaHouse.manager.teahouseGeneral:applyTeaHouseWithTeaID(nil, teaid, appid)
    end
end

-- function FriendTeaView:onExit()
-- 	if self.stopAllObserve ~= nil then
-- 		self:stopAllObserve()
-- 	end
-- end
function FriendTeaView:onUpdateTeaHouseList()
    -- if not self._isThrowFriendInfo then
    --     self._isThrowFriendInfo = true
    --     self:throwFriendInfo()
    -- end
    -- XH.TipTool.hideLoading()
    if tolua.isnull(self) then
        return
    end
    self._textNoFriend:setString("暂无合适牌友")
    self._listTeaHouse:removeAllChildren()
    local clubLists = XH.lobby:getModule("FriendTea"):getClubLists()
    if not clubLists or #clubLists == 0 then
        self._btnApplyAll:setVisible(false)
        self._textNoFriend:setVisible(true)
        self._showGuide = false
        self._imgTip:setVisible(false)
        return
    end
    self._btnApplyAll:setVisible(true)
    self._textNoFriend:setVisible(false)
    for _, v in pairs(clubLists) do
        if v.clubApplyStatus ~= 0 then
            self._showGuide = false
            break
        end
    end
    for i = 1, #clubLists do
        self:updateTeaHouseItem(clubLists[i], self._showGuide and i == 1, i)
    end
    local contentSize = self._listTeaHouse:getContentSize()
    self._listTeaHouse:setInnerContainerSize(cc.size(contentSize.width, self._itemTeaHouse:getContentSize().height * #clubLists))
    self._listTeaHouse:addScrollViewEventListener(handler(self, self.scrollViewDidScroll))
    self._listTeaHouse:setBounceEnabled(true)
    self._listTeaHouse:setInertiaScrollEnabled(true)
end

function FriendTeaView:scrollViewDidScroll(sender, eventType)
    if eventType == ccui.ScrollviewEventType.scrolling or eventType == ccui.ScrollviewEventType.bounceTop or eventType ==
        ccui.ScrollviewEventType.bounceBottom then
        if not self._showGuide then
            return
        end
        local container = sender:getInnerContainer()
        local contentOffset = cc.p(container:getPosition())
        local offsetY = contentOffset.y - (sender:getContentSize().height - sender:getInnerContainer():getContentSize().height)
        self._imgTip:setPosition(cc.p(self._initTipPos.x, self._initTipPos.y + offsetY))
    end
end

function FriendTeaView:updateTeaHouseItem(itemInfo, showGuide, index)
    local item = self._itemTeaHouse:clone()
    self._mapItem[itemInfo.clubInfo.clubId] = item
    if showGuide then
        local KW_PATH = "animation/Common/qgb_ty_xsdj/"
        local aniNode = XH.UITool.seekNodeByName(item, "KW_PANEL_GUIDE_ANI")
        XH.SpineManager:playAni(aniNode, KW_PATH, "qgb_ty_xsdj", "animation", true, nil, nil, false)
        self._imgTip:setVisible(showGuide)
        self._initTipPos = cc.p(1230, 585)
        self._imgTip:setPosition(self._initTipPos)
    end
    local clubInfo = itemInfo.clubInfo
    local name = string.gsub(clubInfo.ownerNick, "\n", "")
    XH.UITool.setText(item, "KW_TEAHOUSE_NAME", "比赛场:" .. XH.StringTool.getTrimName(clubInfo.name, 8))
    XH.UITool.setText(item, "KW_TEAHOUSE_PWD", "口令:" .. clubInfo.password)
    XH.UITool.setText(item, "KW_TEAHOUSE_OWNER", "领队:" .. XH.StringTool.getTrimName(name, 8))

    -- 更新头像
    local imgHeadBg = XH.UITool.seekNodeByName(item, "KW_IMG_HEAD")
    local size = imgHeadBg:getContentSize()
    local imgHead = XH.RemoteImage.new()
    imgHead:setPosition(size.width / 2, size.height / 2)
    imgHead:ignoreContentAdaptWithSize(false)
    imgHead:setContentSize(size.width, size.height)
    imgHead:addTo(imgHeadBg)
    imgHead:setUrl(clubInfo.head)
    XH.UITool.setVisible(item, "KW_BTN_APPLY", itemInfo.clubApplyStatus == 0)
    XH.UITool.setVisible(item, "KW_BTN_WAIT", itemInfo.clubApplyStatus == 1)

    item.clubInfo = clubInfo
    item.itemInfo = itemInfo
    item.uiIndex = index

    XH.UITool.addTouchEventListener(item, "KW_BTN_APPLY", handler(item, handler(self, self.onTouchEventJoinTeaHouse)))
    XH.UITool.addTouchEventListener(item, "KW_BTN_WAIT", handler(item, handler(self, self.onTouchEventJoinTeaHouse)))

    -- 更新玩家头像
    local listPlayer = XH.UITool.seekNodeByName(item, "KW_LIST_PLAYERS")
    listPlayer:removeAllChildren()
    listPlayer:setSwallowTouches(false)
    listPlayer:setScrollBarEnabled(false)
    for i = 1, #itemInfo.friendInfo do
        self:updatePlayerList(listPlayer, itemInfo.friendInfo[i])
    end
    local contentSize = listPlayer:getContentSize()
    listPlayer:setInnerContainerSize(cc.size(self._itemPlayer:getContentSize().width * #itemInfo.friendInfo, contentSize.height))
    listPlayer:setBounceEnabled(true)
    listPlayer:setInertiaScrollEnabled(true)

    local onLineMoreNum = XH.lobby:getModule("Configuration"):getAllConfigData("GameManualFriendOnLineNum") or 10
    XH.UITool.setVisible(item, "KW_IMG_ONLINE_MORE", onLineMoreNum <= (clubInfo.onlineUserCnt or 0))

    self._listTeaHouse:addChild(item)
end

function FriendTeaView:getOfflineTime(time)
    local currentTime = XH.lobby:getModule("Shop"):getServerTime()
    local currentDate = os.date("*t", currentTime)
    currentDate.hour = 0
    currentDate.min = 0
    currentDate.sec = 0
    local currentDayZero = os.time(currentDate)

    -- 将目标时间戳转为当天的0点时间戳（纯日期计算）
    local targetDate = os.date("*t", time)
    targetDate.hour = 0
    targetDate.min = 0
    targetDate.sec = 0
    local targetDayZero = os.time(targetDate) or (currentDayZero + 1)

    -- 计算相隔天数
    local diffDays = math.floor((currentDayZero - targetDayZero) / 86400)

    if diffDays < 0 then
        return "时间异常" -- 避免未来时间
    elseif diffDays == 0 then
        return "今日在线"
    elseif diffDays == 1 then
        return "昨日在线"
    elseif diffDays > 7 then
        return "7天前在线" -- n >7 时固定显示
    else
        return string.format("%d天前在线", diffDays) -- 2~7天
    end
end

function FriendTeaView:updatePlayerList(listPlayer, playerInfo)
    local item = self._itemPlayer:clone()
    local state = ""
    if playerInfo.state == "Offline" then
        state = self:getOfflineTime(playerInfo.lastOfflineTime)
    elseif playerInfo.state == "Online" then
        state = "在线"
    elseif playerInfo.state == "Gaming" or playerInfo.state == "Waiting" then
        state = "游戏中"
    end
    XH.UITool.setText(item, "KW_TEXT_ONLINE_STATE", state)
    local name = string.gsub(playerInfo.nick, "\n", "")
    XH.UITool.setText(item, "KW_FRIEND_NICKNAME", XH.StringTool.getTrimName(name, 8))

    -- 更新头像
    local imgurl = playerInfo.head
    local imgHeadBg = XH.UITool.seekNodeByName(item, "KW_FRIEND_HEAD_IMG")
    local size = imgHeadBg:getContentSize()
    local imgHead = XH.RemoteImage.new()
    imgHead:setPosition(size.width / 2, size.height / 2)
    imgHead:ignoreContentAdaptWithSize(false)
    imgHead:setContentSize(size.width, size.height)
    imgHead:addTo(imgHeadBg)
    imgHead:setUrl(imgurl)
    listPlayer:addChild(item)
end

function FriendTeaView:onBtnApplyAll()
    local clubList = XH.lobby:getModule("FriendTea"):getClubLists()
    local isShow = false
    self._applyCount = 0
    self._errorCount = 0
    self._isJoinAll = true
    self._isTipShowed = false
    local gameManualFriendApplyNum = XH.lobby:getModule("Configuration"):getAllConfigData("GameManualFriendApplyNum") or 10
    for idx, v in pairs(clubList) do
        -- 状态为0的时候，可申请
        if v.clubApplyStatus == 0 and gameManualFriendApplyNum > self._applyCount then
            self._applyCount = self._applyCount + 1

            self:reqJoinTea(tonumber(v.clubInfo.clubId), tonumber(v.appid))
            -- 上抛埋点
            local conventionData = {block_item_id = v.clubApplyStatus == 1 and "等待同意" or "申请加入"}
            local extraData = {
                code = v.historyGameCountScore, -- 曾对局数
                count = v.friendCountScore, -- 包含牌友数
                count1 = v.historyOptApplyScore, -- 30日内比赛场通过牌友申请加入数
                players = v.onlineCountScore, -- 包含在线好友数量
                count2 = v.yesterdayCountScore, -- 前一日比赛场对局数
                score = v.orderScore, -- 申请时分数
                round_num = idx, -- 申请时排第几位
                club_id = XH.areaData:getAreaID() .. "_" .. v.clubInfo.clubId -- 比赛场id
            }
            XH.NewThrowDataManager:throwData("hgsc24112712", conventionData, extraData)
        end
    end

    if self._applyCount == 0 then
        XH.TipTool.showToast("已完成申请，等待同意")
    else
        XH.TipTool.showLoading()
        -- 上抛埋点
        local extraData = {count = self._applyCount}
        XH.NewThrowDataManager:throwData("hgsc25052201", nil, extraData)
    end
end

function FriendTeaView:onTouchEventJoinTeaHouse(item, send, eventType)
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
    if not item.itemInfo or not item.clubInfo then
        return
    end
    -- 上抛埋点
    local conventionData = {block_item_id = item.itemInfo.clubApplyStatus == 1 and "等待同意" or "申请加入"}
    local extraData = {
        code = item.itemInfo.historyGameCountScore, -- 曾对局数
        count = item.itemInfo.friendCountScore, -- 包含牌友数
        count1 = item.itemInfo.historyOptApplyScore, -- 30日内比赛场通过牌友申请加入数
        players = item.itemInfo.onlineCountScore, -- 包含在线好友数量
        count2 = item.itemInfo.yesterdayCountScore, -- 前一日比赛场对局数
        score = item.itemInfo.orderScore, -- 申请时分数
        round_num = item.uiIndex, -- 申请时排第几位
        club_id = XH.areaData:getAreaID() .. "_" .. item.clubInfo.clubId -- 比赛场id
    }
    XH.NewThrowDataManager:throwData("hgsc24112712", conventionData, extraData)

    if item.itemInfo.clubApplyStatus == 1 then
        XH.TipTool.showToast("已完成申请，等待同意")
        return
    end
    self._isJoinAll = false
    self._applyCount = 1
    self._errorCount = 0
    self._isTipShowed = false
    XH.TipTool.showLoading()
    self:reqJoinTea(tonumber(item.clubInfo.clubId), tonumber(item.itemInfo.appid))
end

function FriendTeaView:onBtnClose()
    self:throwFriendInfo()
    self:close()
    -- if self._isCloseing then
    --     XH.TipTool.showToast(string.format("看看有没有可以一起玩的牌友吧(%d秒)", self._closeTime))
    --     return
    -- end
    -- -- 判断如果没有活跃比赛场，则显示提示后再关闭
    -- local activeClub = XH.lobby:getModule("FriendTea"):getActiveClub()
    -- local saveDate = cc.UserDefault:getInstance():getStringForKey("SHOW_FRIENDTEA_TIPS", "")
    -- local delayClose = saveDate ~= os.date("%Y%m%d") and not activeClub
    -- if delayClose then
    --     self._closeTime = 4
    --     self._isCloseing = true
    --     self:startCloseSchedule()
    --     XH.TipTool.showToast("看看有没有可以一起玩的牌友吧(4秒)")
    --     cc.UserDefault:getInstance():setStringForKey("SHOW_FRIENDTEA_TIPS", os.date("%Y%m%d"))
    -- else
    --     self:close()
    -- end
end

function FriendTeaView:throwFriendInfo()
    local clubList = XH.lobby:getModule("FriendTea"):getClubLists()
    if not clubList or #clubList == 0 then
        return
    end
    local conventionData = {block_item_id = self._isAuto and "自动" or "手动", duration = os.time() - self._showTime}
    -- 牌友去重
    local allFriends = {}
    local allOnlineFriends = {}
    for _, itemClub in pairs(clubList) do
        for __, itemFriend in pairs(itemClub.friendInfo) do
            local isFindFriend = false
            for i = 1, #allFriends do
                if allFriends[i] == itemFriend.userId then
                    isFindFriend = true
                    break
                end
            end
            if not isFindFriend then
                table.insert(allFriends, itemFriend.userId)
            end
            if itemFriend.state == "Online" or itemFriend.state == "Play" then
                local isFineOnlineFriend = false
                for i = 1, #allOnlineFriends do
                    if allOnlineFriends[i] == itemFriend.userId then
                        isFineOnlineFriend = true
                        break
                    end
                end
                if not isFineOnlineFriend then
                    table.insert(allOnlineFriends, itemFriend.userId)
                end
            end
        end
    end

    local maxOnLineCount = XH.lobby:getModule("FriendTea"):getMyMaxOnLineNum()
    local extraData = {
        count = #allFriends,
        count1 = #allOnlineFriends,
        round_num = #clubList,
        source = "否",
        count2 = maxOnLineCount -- 曝光时比赛场最大在线人数
    }
    XH.NewThrowDataManager:throwData("hgsc24112705", conventionData, extraData)
end

function FriendTeaView:onCleanup()
    FriendTeaView.super.onCleanup(self)
end

function FriendTeaView:teaPlayerRequestJoinIn(event)
    if tolua.isnull(self) then
        return
    end
    local notice = event.data
    XH.TipTool.hideLoading()
    if notice.lResultCode == 0 then
        -- 申请成功
        local clubLists = XH.lobby:getModule("FriendTea"):getClubLists()
        local clubId = notice.dwTag
        local itemInfo = nil
        local clubInfo = nil
        for _, item in pairs(clubLists) do
            if item.clubInfo.clubId == clubId then
                itemInfo = item
                clubInfo = item.clubInfo
                break
            end
        end

        if itemInfo == nil then
            return
        end
        local item = self._mapItem[clubId]
        local dlgMsg = ""
        if not self._isTipShowed then
            if self._isJoinAll then
                local gameManualFriendApplyNum = XH.lobby:getModule("Configuration"):getAllConfigData("GameManualFriendApplyNum") or 10
                dlgMsg = gameManualFriendApplyNum == self._applyCount and "已向列表内前" .. self._applyCount ..
                             "个比赛场发送加入申请，请等待同意" or
                             "已向列表内全部比赛场发送加入申请，请等待同意"
                self._module:reqListHallFriends()
            else
                dlgMsg = string.format('已向【比赛场%s; 比赛场号%d; 领队:%s】发送加入申请，请等待同意', clubInfo.name,
                                       clubInfo.password, clubInfo.ownerNick)
            end
            XH.TipTool.showTip({
                type = XH.TIP_LAYER_TYPE.OK,
                funcOK = function()
                end
            }, dlgMsg)

            self._isTipShowed = true
        end

        XH.UITool.setVisible(item, "KW_BTN_APPLY", false)
        XH.UITool.setVisible(item, "KW_BTN_WAIT", true)
        XH.lobby:getModule("FriendTea"):updateApplyStatus(clubInfo.clubId)
        if self._showGuide then
            local listItems = self._listTeaHouse:getItems()
            self._showGuide = false
            self._imgTip:setVisible(false)
            for _, v in pairs(listItems) do
                XH.UITool.setVisible(v, "KW_PANEL_GUIDE_ANI", false)
            end
        end

        local friends = {}
        for i = 1, #itemInfo.friendInfo do
            table.insert(friends, itemInfo.friendInfo[i].userId)
        end
        self._module:reqBBApplyJoinClub({clubId = clubId, friends = friends})
    else
        self._errorCount = self._errorCount + 1
        if self._errorCount == self._applyCount then
            XH.TipTool.showToast("申请失败，比赛场不满足加入条件")
        end
    end
end
return FriendTeaView
�J