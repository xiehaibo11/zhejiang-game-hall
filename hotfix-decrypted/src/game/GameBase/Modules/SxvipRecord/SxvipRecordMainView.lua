local SxvipRecordMainView = CF.gameClass("SxvipRecordMainView", CF.ViewBase)

local MAIN_CONST_DEFINE = {
    RECOED = 1, -- 战绩
    FRIEND = 2, -- 牌友
}

local FRIEND_CONST_DEFINE = {
    PART = 1, -- 当前对局
    PARTALL = 2, -- 全部牌友
 }

local MAIN_CONST_DEFINE_COLOR = {
    -- #921E03
    SELECT = cc.c3b(0x92, 0x1E, 0x03),
    -- #B4E3FF
    NORMAL = cc.c3b(0xB4, 0xE3, 0xFF),
}

local RENCENT_CONST_COLOR = { 
    -- #D84D2B
    WIN = cc.c3b(0xD8, 0x4D, 0x2B),
    -- #6295E3
    DEFEAT = cc.c3b(0x62, 0x95, 0xE3),
}

local FRIEND_CONST_COLOR = { 
    -- #904723
    SELECT = cc.c3b(0x90, 0x47, 0x23),
    -- #5384B1
    NORMAL = cc.c3b(0x53, 0x84, 0xB1),
}

local DEFALUT_HEAD_URL = "http://thirdwx.qlogo.cn/mmopen/vi_32/RZWHFDljz1SW2Azl6kZyxic4ziaibicnUPo8dB3YiaGbhpyx3Tq34Vemk6KqexyJQJtAphjc9TELicPuRryc0UQ4DPmw/132"

function SxvipRecordMainView:ctor()
    SxvipRecordMainView.super.ctor(self)

    self:resetSerevrData()
    self:initData()
    self:initView()
    self:updateView()
    self:updateBlurView()
    self:flushData()
end

function SxvipRecordMainView:initView()
    CF.UITool.adaptForLiuHai({self._panelCenter})

    self._mainListView:setScrollBarEnabled(false)
    self._listViewRecord:setScrollBarEnabled(false)
    self._listViewFriend:setScrollBarEnabled(false)

    self._listViewRecord:setTouchEnabled(false)
    self._mainListView:addScrollViewEventListener(function(sender, eventType)
        if eventType == ccui.ScrollviewEventType.scrollToBottom then
            self._listViewRecord:setTouchEnabled(true)
            self._mainListView:jumpToBottom()
        elseif eventType == ccui.ScrollviewEventType.scrolling then
            self._listViewRecord:setTouchEnabled(false)
            self._listViewRecord:jumpToTop()
        end
    end)
    self._listViewRecord:addScrollViewEventListener(function(sender, eventType)
        if eventType == ccui.ScrollviewEventType.scrollToTop then
            self._listViewRecord:setTouchEnabled(false)
        elseif eventType == ccui.ScrollviewEventType.scrollToBottom then
            -- 获取下一页面数据
            if self._curPage < self._maxPage and not self.m_refreshing then
                self.m_refreshing = true
                self._curPage = self._curPage + 1
                local data = {
                    game_id = self._selectGameId,
                    room_mode  = self._selectRoomModeInfo.roomMode,
                    club_id = self._selectRoomModeInfo.clubId,
                    page = self._curPage,
                    page_size = self._pageSize
                }
                CF.game:getModule("SxvipRecord"):reqHistoryRecord(data)
            elseif not self.m_refreshing and not self._hasShownBottomTip then
                -- 使用时间戳控制提示频率
                local now = os.time()
                if not self._lastTipTime or (now - self._lastTipTime) > 2 then -- 2秒内只提示一次
                    self:showToast("已经到底啦~")
                    self._lastTipTime = now
                end
            end
        elseif eventType == ccui.ScrollviewEventType.scrolling then
             -- 当用户开始滚动时重置标志位
            if self._hasShownBottomTip then
                self._hasShownBottomTip = false
            end
        end
    end)

    -- 添加呼吸特效
    self:createBreathEffect(CF.UITool.seekNodeByName(self._btnOpen3,"_KW_TIPS_BG"))
    self:createBreathEffect(CF.UITool.seekNodeByName(self._btnOpen2,"_KW_TIPS_BG"))
end

-- 创建一个呼吸特效
-- @param node 要添加特效的节点
-- @param duration 单次呼吸周期时间（秒）
-- @param minScale 最小缩放值
-- @param maxScale 最大缩放值
function SxvipRecordMainView:createBreathEffect(node, duration, minScale, maxScale)
    if not node then return end
    -- 参数默认值
    duration = duration or 1.5
    minScale = minScale or 0.95
    maxScale = maxScale or 1.05

    -- 保存原始缩放值
    local originalScale = node:getScale()
    
    -- 创建缩放动作序列
    local scaleDown = cc.ScaleTo:create(duration/2, originalScale * minScale)
    local scaleUp = cc.ScaleTo:create(duration/2, originalScale * maxScale)
    
    -- 使用EaseSineInOut让变化更平滑
    scaleDown = cc.EaseSineInOut:create(scaleDown)
    scaleUp = cc.EaseSineInOut:create(scaleUp)
    
    -- 无限循环
    local sequence = cc.Sequence:create(scaleDown, scaleUp)
    local repeatForever = cc.RepeatForever:create(sequence)
    
    -- 运行动作
    node:runAction(repeatForever)
    return node
end

function SxvipRecordMainView:resetSerevrData()
    -- 玩法
    self._gameIds = {0}
     --模式
    self._gameModes = {
        {
            roomMode = 0,
            clubId = 0,
            name = "全部模式"
        },
        {
            roomMode = 10,
            clubId = 0,
            name = "好友房"
        },
        {
            roomMode = 13,
            clubId = 0,
            name = "比赛场"
        }
    }
end

function SxvipRecordMainView:initData()
    -- 战绩统计页面变量
    self._curPage            = 1
    self._maxPage            = 1
    self._pageSize           = 20
    self._curSelector        = nil --选中得筛选框
    self._selectGameId       = 0                         -- 选中游戏id
    self._selectRoomModeInfo = self._gameModes[1]        --选中模式
    -- 牌友数据页面变量
    self._curFriendType      = FRIEND_CONST_DEFINE.PART --默认选本局牌友

    self._selectMainTab      = MAIN_CONST_DEFINE.RECOED  --选中主tab
end

function SxvipRecordMainView:getCSBPath()
    return "cocosStudio/Common/CSB/SxvipRecordCenterLayer.csb"
end

function SxvipRecordMainView:getBindingInfo()
    return {
        ["_KW_ROOT_PANEL"] = {varName = "_panelRoot", onTouchEnded = "onTouchOther"},
        ["_KW_TOUCH_LAYER"] = {varName = "_touchLayer", onTouchEnded = "onCloseSelectors"},
        ["_KW_PANEL_CENTER"] = {varName = "_panelCenter"},
        ["_KW__BTN_RECORD"] = {varName = "_btnRecord", type = CF.UI_TYPE.PANEL_TOBUTTON, onTouchEnded = "onTouchRecord", style = CF.UIButton.CLICK_STYLE.NOEFFECT},
        ["_KW__BTN_FRIEND"] = {varName = "_btnFriend", type = CF.UI_TYPE.PANEL_TOBUTTON, onTouchEnded = "onTouchFriend", style = CF.UIButton.CLICK_STYLE.NOEFFECT},
        ["_KW_PANEL_RECORD"] = {varName = "_panelRecord"},
        ["_KW_PANEL_FRIEND"] = {varName = "_panelFriend"},
        -- 战绩统计页面
        -- 近期战绩
        ["_KW_PANEL_RECENT"] = {varName = "_panelRecent"},
        ["_KW_MAIN_LISTVIEW"] = {varName = "_mainListView"},
        ["_KW_LISTVIEW_RECORD"] = {varName = "_listViewRecord"},
        ["_KW_HISTORY_ITEM"] = {varName = "_historyItem"},
        -- 刷选项组件
        ["_KW_BTN_TITLE_GAME_MODE"] = {varName = "_btnTitleGameMode", type = CF.UI_TYPE.PANEL_TOBUTTON, onTouchEnded = "onDetail", style = CF.UIButton.CLICK_STYLE.NOEFFECT},
        ["_KW_BTN_TITLE_GAME_PLAY"] = {varName = "_btnTitleGamePlay", type = CF.UI_TYPE.PANEL_TOBUTTON, onTouchEnded = "onDetail", style = CF.UIButton.CLICK_STYLE.NOEFFECT},
        -- 引导组件
        ["_KW_BTN_RECORD_OPEN"] = {varName = "_btnRecordOpen", type = CF.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onRecordOpen"},
        ["_KW_BTN_FRIEND_OPEN"] = {varName = "_btnFriendOpen", type = CF.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onRecordOpen"},
        -- 下方按钮区域
        ["_KW_BTN_MORE_2"] = {varName = "_btnMore2", type = CF.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onMoreShop"},
        ["_KW_BTN_MORE_3"] = {varName = "_btnMore3", type = CF.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onMoreShop"},
        ["_KW_BTN_OPEN_2"] = {varName = "_btnOpen2", type = CF.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onOpenNow"},
        ["_KW_BTN_OPEN_3"] = {varName = "_btnOpen3", type = CF.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onOpenNow"},
        ["_KW_BTN_BUY_3"] = {varName = "_btnBuy3", type = CF.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onBuyRight"},
        ["_KW_BOTTOM_BTN_2"] = {varName = "_bottomBtn2" },
        ["_KW_BOTTOM_BTN_3"] = {varName = "_bottomBtn3" },
        ["_KW_TIPS"] = {varName = "_tips"},
        -- 牌友数据
        ["_KW_LISTVIEW_FRIEND"] = {varName = "_listViewFriend"},
        ["_KW_ITEM_FRIEND"] = {varName = "_itemFriend"},
        ["_KW_BTN_PART_ALL"] = {varName = "_btnPartAll", type = CF.UI_TYPE.PANEL_TOBUTTON, onTouchEnded = "onPartAll", style = CF.UIButton.CLICK_STYLE.NOEFFECT },
        ["_KW_BTN_PART"] = {varName = "_btnPart", type = CF.UI_TYPE.PANEL_TOBUTTON, onTouchEnded = "onPart", style = CF.UIButton.CLICK_STYLE.NOEFFECT},
        -- 提示语的位置
        ["_KW_TIPS_POS"] = {varName = "_tipsPos"},
    }
end

function SxvipRecordMainView:getProxyEvents()
    return {
        { module = CF.game:getModule("SxvipRecord"), eventKeyName = "SXVIP_RECORD_EVENT_RECORD_STATISTICS", callBack = "onRecordStatistics" },
        { module = CF.game:getModule("SxvipRecord"), eventKeyName = "SXVIP_RECORD_EVENT_RECORD_HISTORY_STATISTICS", callBack = "onHistoryRecordStatistics" },
        { module = CF.game:getModule("SxvipRecord"), eventKeyName = "SXVIP_RECORD_EVENT_GET_SINGLE_RIGHT_INFO", callBack = "onGetSingleRightInfo" },
        { module = CF.game:getModule("SxvipRecord"), eventKeyName = "SXVIP_RECORD_EVENT_UNLOCK_RIGHT_SUCC", callBack = "onUnlockRightSucc" },
        { module = CF.game:getModule("SxvipRecord"), eventKeyName = "SXVIP_RECORD_EVENT_GET_SHOP_LIST", callBack = "onGetShopList" },
        { module = CF.game:getModule("SxvipRecord"), eventKeyName = "SXVIP_RECORD_EVENT_PART_FRIENDS_UPDATE", callBack = "updateFriendInfoView" },
        { module = CF.getLobbyModule("Sxvip"), eventKeyName = "EVENT_UPDATE_VIPSHOP_LIST", callBack = "onUpdateVipShopList"},
        { module = CF.getLobbyModule("SxvipAct"), eventKeyName = "SXVIP_ACT_FINISH", callBack = "onFlushSxVipAct" },
        {module = CF.getLobbyModule("Shop"), eventKeyName = "EVNET_DIAMOND_BUY_RESULT", callBack = "onPayResut"}, -- 钻石支付结果
        {module = CF.getLobbyModule("Shop"), eventKeyName = "EVNET_SHOPMANAGER_SHOW_SHOP", callBack = "onDiamondBack"}, -- 获取钻石
    }
end

function SxvipRecordMainView:updateView()
    self:updateMainTab()
    self:updateShowCenterView()
    self:updateBottomView()

    if self._selectMainTab == MAIN_CONST_DEFINE.RECOED then
        CF.getLobbyModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy25052604)
    elseif self._selectMainTab == MAIN_CONST_DEFINE.FRIEND then
        CF.getLobbyModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy25052605)
    end
end

function SxvipRecordMainView:updateMainTab()
    self:setSelectedTab(self._btnRecord, self._selectMainTab == MAIN_CONST_DEFINE.RECOED)
    self:setSelectedTab(self._btnFriend, self._selectMainTab == MAIN_CONST_DEFINE.FRIEND)
end

function SxvipRecordMainView:setSelectedTab(tab, selected)
    CF.UITool.setVisible(tab, "_KW_SELECT", selected)
    CF.UITool.setVisible(tab, "_KW_NORMAL", not selected)
    CF.UITool.setTextColor(tab, "_KW_DESC", selected and MAIN_CONST_DEFINE_COLOR.SELECT or MAIN_CONST_DEFINE_COLOR.NORMAL)
end

function SxvipRecordMainView:updateShowCenterView()
    self._panelRecord:setVisible(self._selectMainTab == MAIN_CONST_DEFINE.RECOED)
    self._panelFriend:setVisible(self._selectMainTab == MAIN_CONST_DEFINE.FRIEND)
end

function SxvipRecordMainView:updateBottomView()
    -- 是否是会员
    local isVip = not self:getSxvipModule():isExpire()
    CF.UITool.setText(self._btnOpen2, "BitmapFontLabel_DESC", string.format("%s30天",isVip and "续费" or "开通"))
    CF.UITool.setText(self._btnOpen3, "BitmapFontLabel_DESC", string.format("%s30天",isVip and "续费" or "开通"))
    -- 是否开通了单次权限
    local isSingleRight =  not CF.game:getModule("SxvipRecord"):getSingleRightExpire()
    -- 显示2个按钮 或 3个按钮
    local showStyle2 = isVip or isSingleRight or self._selectMainTab == MAIN_CONST_DEFINE.FRIEND
    self._bottomBtn2:setVisible(showStyle2)
    self._bottomBtn3:setVisible(not showStyle2)
    self._tips:setVisible(self._selectMainTab == MAIN_CONST_DEFINE.FRIEND)
    local needDiamond = CF.game:getModule("SxvipRecord"):getSingleRightConsume()
    local needMoney = math.ceil(needDiamond / 100)
    CF.UITool.setText(self._btnBuy3, "BitmapFontLabel_DESC" , string.format("%s元用1天",needMoney))
    -- 取出30天的非订阅商品
    local useProduct = self:geUseProduct(30)
    if not useProduct then
        return
    end
    CF.UITool.setVisible(self._btnOpen2, "_KW_TIPS_BG", true)
    CF.UITool.setVisible(self._btnOpen3, "_KW_TIPS_BG", true)
    local realPrice = useProduct.real_price
    local count = useProduct.prop_count
    -- 显示活动
    local item = CF.getLobbyModule("SxvipAct"):getTargetAct(useProduct.prop_count, useProduct.real_price, false)
    if item then
        count = item.actDetail.day
        realPrice = item.actDetail.discounted_price
        -- 获取剩余时间 , 到期自动更新一下UI
        local remainTime = CF.getLobbyModule("SxvipAct"):getRemainTime(item.aid)
        self._bottomBtn2:stopAllActions()
        performWithDelay(self._bottomBtn2, function()
            self:updateBottomView()
        end, remainTime + 1)
    end
    local priceOneDay = realPrice  / count
    local priceOneDay2 = math.floor(priceOneDay * 10) / 10
    local desc = string.format("每天仅%.1f元", priceOneDay2)
    CF.UITool.setText(self._btnOpen2, "_KW_TIP", desc)
    CF.UITool.setText(self._btnOpen3, "_KW_TIP", desc)
end

function SxvipRecordMainView:geUseProduct(day)
    day = day or 30
    for i, v in ipairs(self._productData or {}) do
        if v.tags and v.tags[1] and v.tags[1].key == "Non-subscription" and tonumber(v.prop_count) == day then
            return clone(v)
        end
    end
end

function SxvipRecordMainView:getSxvipModule()
    return CF.getLobbyModule("Sxvip")
end

function SxvipRecordMainView:onTouchRecord()
    self._selectMainTab = MAIN_CONST_DEFINE.RECOED
    self:updateView()
end

function SxvipRecordMainView:onTouchFriend()
    self._selectMainTab = MAIN_CONST_DEFINE.FRIEND
    self:updateView()
end

function SxvipRecordMainView:showSelf(zorder)
    zorder = zorder or CF.ZORDER.TIPLAYER
    local runningScene = display.getRunningScene()
    if runningScene then
        self:setName("SxvipRecordMainView")
        runningScene:addChild(self, zorder)
    end
    return self
end

function SxvipRecordMainView:onTouchOther()
    self:close()
end

function SxvipRecordMainView:updateBlurView()
    local isVip = not self:getSxvipModule():isExpire()
    local isSingleRight = not CF.game:getModule("SxvipRecord"):getSingleRightExpire()
    self:updateBlur("_panelRecord", not isVip and not isSingleRight)
    self:updateBlur("_panelFriend", not isVip)
end

function SxvipRecordMainView:flushData()
    -- 战绩统计页面
    local isVip = not self:getSxvipModule():isExpire()
    local isSingleRight =  not CF.game:getModule("SxvipRecord"):getSingleRightExpire()
    if isVip or isSingleRight then
        local data = {
            game_id = self._selectGameId,
            room_mode  = self._selectRoomModeInfo.roomMode,
            club_id = self._selectRoomModeInfo.clubId,
            page = self._curPage,
            page_size = self._pageSize
        }
        CF.game:getModule("SxvipRecord"):reqSxvipRecord(data)
    else
        local data = CF.game:getModule("SxvipRecord"):getCurRoomRecordData()
        local info = {infos = { data }}
        self:updateHistoryView(info)
    end
    -- 牌友数据
    self:updateBlur("_panelFriend", not isVip)
    CF.game:getModule("SxvipRecord"):reqPartFriendList()
    CF.game:getModule("SxvipRecord"):reqPartAllFriendList()
    self:updateFriendInfoView()

    -- 无数据的情况下  请求下商城
    local productData = self:getSxvipModule():getVipShopList()
    if productData and productData.goods_list and #productData.goods_list > 0 then
        self._productData = productData.goods_list
        self:updateBottomView()
    else
        local SxvipConfig = require("lobby.Modules.Sxvip.Config")
        local prop_type = SxvipConfig:getSxvipShopId()
        self:getSxvipModule():reqExchangeProductsInfo(prop_type)
    end
end

function SxvipRecordMainView:onUpdateVipShopList(event)
    if not self or tolua.isnull(self) then return end
    local productData = self:getSxvipModule():getVipShopList()
    if productData and productData.goods_list and #productData.goods_list > 0 then
        self._productData = productData.goods_list
    end
    self:updateBottomView()
end

function SxvipRecordMainView:onFlushSxVipAct()
    if not self or tolua.isnull(self) then return end
    self:updateBottomView()
end

function SxvipRecordMainView:onGetSingleRightInfo(event)
    if not self or tolua.isnull(self) then return end
    self:updateBottomView()
end

function SxvipRecordMainView:onUnlockRightSucc(event)
    if not self or tolua.isnull(self) then return end
    self:updateBottomView()
    self:updateBlurView()
    self:flushData()
end

function SxvipRecordMainView:onHistoryRecordStatistics(event)
    if not self or tolua.isnull(self) or not event or not event.data then
        return
    end
    -- 递增数据
    local infos = event.data
    for i = 1, #infos do
        local item = self._historyItem:clone()
        self:updateHistoryItem(item, infos[i])
        self._listViewRecord:pushBackCustomItem(item)
    end
    self.m_refreshing = false
end

function SxvipRecordMainView:onRecordStatistics(event)
    if not self or tolua.isnull(self) or not event or not event.data then
        return
    end
    local info = event.data
    self:resetSerevrData()
    self:dealStatisticsInfo(info)
    self:updateRencentView(info)
    self:updateFifterView()
    self:updateHistoryView(info)
end

function SxvipRecordMainView:dealStatisticsInfo(info)
    -- 模式
    local modes = info.modes or {}
    for i = 1, #modes do
        table.insert(self._gameModes, modes[i])
    end
    -- 玩法
    local gameIds = info.gameIds or {}
    for i = 1, #gameIds do
        table.insert(self._gameIds, gameIds[i])
    end
    -- 总页数
    self._maxPage = math.ceil(info.total / self._pageSize)
end

function SxvipRecordMainView:updateHistoryView(info)
    self._listViewRecord:removeAllItems()
    local data = info.infos or {}

    for i = 1, #data do
        local item = self._historyItem:clone()
        self:updateHistoryItem(item, data[i])
        self._listViewRecord:pushBackCustomItem(item)
    end
end

function SxvipRecordMainView:updateHistoryItem(item, data)
    if not item or not data then
        return
    end
    local gamePlayDesc = self:getNameByGameId(data.gameId or 0)
    local gameTimeDesc = os.date("%m/%d %H:%M", data.startTime or 0)
    local juDesc = string.format("%d/%d", data.finishCount or 0 , data.totalCount or 0)
    local score = tonumber(data.score or 0) >= 0 and "+"..data.score or data.score
    -- #D84D28 #5E5D68
    local color = tonumber(data.score or 0) > 0 and cc.c3b(0xD8, 0x4D, 0x28) or cc.c3b(0x5E, 0x5D, 0x68)
    -- 这里进行个特殊处理，表示是当前对局
    if data.isSpecTime then
        gameTimeDesc = "当前对局"
    end
    -- 引导数据 特殊处理
    if data.isGuide then
        juDesc = "-/-"
        score = "--"
    end
    color = data.isGuide and cc.c3b(0x5E, 0x5D, 0x68) or color
    CF.UITool.setText(item, "_KW_GAME_PLAY", gamePlayDesc)
    CF.UITool.setText(item, "_KW_GAME_TIME", gameTimeDesc)
    CF.UITool.setText(item, "_KW_GAME_COUNT", juDesc)
    CF.UITool.setText(item, "_KW_GAME_SCORE", score)
    CF.UITool.setTextColor(item, "_KW_GAME_SCORE", color)
    CF.UITool.adaptTextToWidth(XH.UITool.seekNodeByName(item, "_KW_GAME_PLAY"), 175, 34, 14)
end

function SxvipRecordMainView:updateFifterView()
    local selectors = {
        {panel = "_btnTitleGameMode", data = self._gameModes, formatter = function(v) 
            return v.name
        end},
        {panel = "_btnTitleGamePlay", data = self._gameIds, formatter = function(v) 
            return self:getNameByGameId(v) 
        end},
    }
    for _, selector in ipairs(selectors) do
        self:createSelector(selector.panel, selector.data, selector.formatter)
    end
end

function SxvipRecordMainView:createSelector(panelName, data, formatter) 
    local panel = self[panelName]
    local listView = CF.UITool.seekNodeByName(panel, "_KW_LIST_VIEW")
    listView:removeAllItems()

    local itemModel = CF.UITool.seekNodeByName(panel, "_KW_ITEM")
    for _, v in ipairs(data) do
        local item = itemModel:clone()
        item.customData = v
        CF.UITool.setText(item, "_KW_DESC", formatter(v))
        CF.UITool.adaptTextToWidth(CF.UITool.seekNodeByName(item, "_KW_DESC"), 220, 36, 15)
        item:addTouchEventListener(function(_, eventType)
            if eventType == ccui.TouchEventType.ended then
                self:onSelectItem(panelName, v)
            end
        end)
        listView:pushBackCustomItem(item)
    end
end

function SxvipRecordMainView:onSelectItem(panelName, data)
    self:onCloseSelectors()
    if panelName == "_btnTitleGameMode" then
        if self._selectRoomModeInfo.name == data.name and self._selectRoomModeInfo.room_mode == data.room_mode and self._selectRoomModeInfo.club_id == data.club_id then
            return
        end
        self._selectRoomModeInfo = data
        self:updateSelectorDisplay(panelName, data.name)
    elseif panelName == "_btnTitleGamePlay" then
        if self._selectGameId == data then
            return
        end
        self._selectGameId = data
        self:updateSelectorDisplay(panelName, self:getNameByGameId(data))
    end
    self:flushData()
end

function SxvipRecordMainView:updateSelectorDisplay(panelName, text)
    local panel = self[panelName]
    local label = CF.UITool.seekNodeByName(panel, "_KW_TITLE_DESC")
    if label then
        label:setString(text)
        self:scrollText(label)
    end
end

function SxvipRecordMainView:onCloseSelectors(sender , eventType)
    self:onDetail()
end

function SxvipRecordMainView:onDetail(sender , eventType)
    if CF.getLobbyModule("Sxvip"):isExpire() and CF.game:getModule("SxvipRecord"):getSingleRightExpire() then
        local page_item_id = "全部模式"
        if sender ==  self._btnTitleGamePlay then
            page_item_id = "全部玩法"
        end
        CF.getLobbyModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy25052608, { page_item_id = page_item_id })
        self:openSxvipShop()
        return
    end
    self._curSelector = self._curSelector ~= sender and sender or nil
    self._touchLayer:setVisible(self._curSelector ~= nil)
    self:updateAllDropBox()
end

function SxvipRecordMainView:updateAllDropBox()
    CF.UITool.setVisible(self._btnTitleGameMode, "_KW_LIST_VIEW", self._curSelector == self._btnTitleGameMode)
    CF.UITool.setRotation(self._btnTitleGameMode, "_KW_IMG_MARK", self._curSelector == self._btnTitleGameMode and 180 or 0)
    CF.UITool.setVisible(self._btnTitleGamePlay, "_KW_LIST_VIEW", self._curSelector == self._btnTitleGamePlay)
    CF.UITool.setRotation(self._btnTitleGamePlay, "_KW_IMG_MARK", self._curSelector == self._btnTitleGamePlay and 180 or 0)
end

function SxvipRecordMainView:updateRencentView(info)
    local function getDesc(score)
        if tonumber(score) >= 0 then
            return "+"..score
        end
        return score
    end
    local function getColor(score)
        if tonumber(score) >= 0 then
            return RENCENT_CONST_COLOR.WIN
        end
        return RENCENT_CONST_COLOR.DEFEAT
    end
    CF.UITool.setText(self._panelRecent, "_KW_1DAY_SCORE", getDesc(info.todayScore))
    CF.UITool.setText(self._panelRecent, "_KW_2DAY_SCORE", getDesc(info.yesterdayScore))
    CF.UITool.setText(self._panelRecent, "_KW_3DAY_SCORE", getDesc(info.beforeScore))
    CF.UITool.setText(self._panelRecent, "_KW_7DAY_SCORE", getDesc(info.nearsScore))
    CF.UITool.setTextColor(self._panelRecent, "_KW_1DAY_SCORE", getColor(info.todayScore))
    CF.UITool.setTextColor(self._panelRecent, "_KW_2DAY_SCORE", getColor(info.yesterdayScore))
    CF.UITool.setTextColor(self._panelRecent, "_KW_3DAY_SCORE", getColor(info.beforeScore))
    CF.UITool.setTextColor(self._panelRecent, "_KW_7DAY_SCORE", getColor(info.nearsScore))
end

function SxvipRecordMainView:getNameByGameId(id)
    local ganeName = "未知玩法"
    if id == 0 then
        ganeName = "全部玩法"
    end
    local gameList = CF.areaData:getAreaGameNameList()
    if gameList[id] and gameList[id] ~= "" then
        ganeName = gameList[id]
    end
    return ganeName
end

function SxvipRecordMainView:updateBlur(panelName, show)
    local panel = self[panelName]
    if not panel then return end
    show = show or false
    CF.UITool.setVisible(panel, "BLUR", show)
end

function SxvipRecordMainView:onRecordOpen()
    CF.getLobbyModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy25052608, { page_item_id = "开通会员查看数据" })
    self:openSxvipShop()
end

function SxvipRecordMainView:openSxvipShop()
    CF.TipTool.showToast("开通会员，即可使用特权！")
    local SxvipConfig = require("lobby.Modules.Sxvip.Config")
    CF.viewManager:openView("SxvipShopView", nil, self._selectMainTab == MAIN_CONST_DEFINE.RECOED and SxvipConfig.ThrowData.source.gameStatistics or SxvipConfig.ThrowData.source.gameStatisticsFriend)
    self:close()
end

function SxvipRecordMainView:onMoreShop(sender,eventType)
    CF.getLobbyModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy25052607)
    self:openSxvipShop()
end

function SxvipRecordMainView:onOpenNow(sender,eventType)
    local isVip = not self:getSxvipModule():isExpire()
    CF.getLobbyModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy25052608,{page_item_id = isVip and "续费30天" or" 开通30天"})
    local reqBuyData = self:geUseProduct()
    if not reqBuyData then
        self:showToast("找不到可购买的商品")
        return
    end
    local oriInfo = nil
    if reqBuyData.tags and reqBuyData.tags[1] then
        local item = CF.getLobbyModule("SxvipAct"):getActShopInfo(reqBuyData.prop_count, reqBuyData.real_price, false)
        if item then
            reqBuyData = item
            oriInfo = reqBuyData
        end
    end
    local SxvipConfig = require("lobby.Modules.Sxvip.Config")
    XH.lobby:getModule("Sxvip.ThrowData"):setThrowDataSource(self._selectMainTab == MAIN_CONST_DEFINE.RECOED and SxvipConfig.ThrowData.source.gameStatistics or SxvipConfig.ThrowData.source.gameStatisticsFriend)
    self:getSxvipModule():reqBuy(reqBuyData, nil, true, self._selectMainTab == MAIN_CONST_DEFINE.RECOED and SxvipConfig.ThrowData.source.gameStatistics.name or SxvipConfig.ThrowData.source.gameStatisticsFriend.name, oriInfo)
end

function SxvipRecordMainView:onBuyRight()
    CF.getLobbyModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy25052609)
    local needDiamond = CF.game:getModule("SxvipRecord"):getSingleRightConsume()
    local userData = CF.selfPlayerData
    local myDiamond = userData:getDiamnd()
    if needDiamond > myDiamond then
        -- 请求钻石信息
        local ShopConfig = require("lobby.Modules.Shop.Config")
        local _, subId = CF.getLobbyModule("Shop"):getTagsWithName(ShopConfig.SpecialTag.DIAMOND)
        if not CF.getLobbyModule("Shop"):getShopItemsWithId(subId) then 
            CF.getLobbyModule("Shop"):reqProductList(ShopConfig.ProductType.DIAMOND)
            return
        end
        local needBuyDiamond = needDiamond - myDiamond
        local allproDouct = CF.getLobbyModule("Shop"):getShopItemsWithId(subId) or { }
        local productInfo = nil
        for _,v in pairs(allproDouct) do
            if tonumber(v.value) >= needBuyDiamond then
                productInfo = v
                break
            end
        end
        if not productInfo or not next(productInfo) then 
            self:showToast("未找到对应钻石商品配置")
            return 
        end
        CF.TipTool.showTip( {
            type = CF.TIP_LAYER_TYPE.OK,
            funcOK = function()
                CF.getLobbyModule("Shop"):reqBuyDiamond(productInfo, "deliver_award", nil, nil, true, nil)
            end
        } ,string.format( "钻石不足，是否充值%s元购买%s钻石？\n(充值后将自动兑换解锁战绩统计功能24小时)",tonumber(productInfo.price), productInfo.value))
    else
        -- 购买单次
        CF.TipTool.showTip({
            type = CF.TIP_LAYER_TYPE.OK,
            funcOK = function()
                CF.game:getModule("SxvipRecord"):reqLockSingleRight()
            end,
        }, "您将消耗600钻石，解锁战绩统计功能24小时")
    end
end

function SxvipRecordMainView:onDiamondBack(event)
    self:onBuyRight()
end

function SxvipRecordMainView:onPayResut(event)
    if not event.msg or not event.msg.resultTag then
        return
    end
    local bSuccess = event.msg.resultTag == CF.getLobbyModule("Shop").BUY_DIAMOND_RESULT.SUCCESS
    if bSuccess then
        CF.SysTool.performDelayOnce(
            function()
                CF.TipTool.showLoading(2)
            end,
            0.5
        )
        CF.SysTool.performDelayOnce(
            function()
                CF.TipTool.hideLoading()
                self:onBuyRight()
            end,
            1
        )
    end
end

function SxvipRecordMainView:updateFriendInfoView()
    local data = {}
    if self._curFriendType == FRIEND_CONST_DEFINE.PART then
        data = CF.game:getModule("SxvipRecord"):getPartFriendList()
    elseif self._curFriendType == FRIEND_CONST_DEFINE.PARTALL then
        data = CF.game:getModule("SxvipRecord"):getPartAllFriendList()
    end
    self:updateFriendListView(clone(data))
end

function SxvipRecordMainView:updateFriendListView(data)
    if not data then return end
    self._listViewFriend:removeAllItems()
    self._listViewFriend:jumpToTop()
    for i, v in ipairs(data) do
        v.userWinRate = v.userWin / (v.userTotal == 0 and 1 or v.userTotal) * 100
        v.winRate = v.winCount / (v.totalCount == 0 and 1 or v.totalCount) * 100
        v.score = v.totalScore
        v.offline = v.offlineCnt
        v.dismiss = v.dismissCnt
        v.speed = v.playTotal > 0 and v.playTime / v.playTotal or 0
        v.headIcon = v.headIcon == "" and DEFALUT_HEAD_URL or v.headIcon
    end
    -- 需要排下顺序
    if self._curFriendType == FRIEND_CONST_DEFINE.PARTALL then
        local sortInfo = {mainKey = 1, subKey = 1}
        table.sort(
            data,
            function(a, b)
                local aValue = a["winRate"] or 0
                local bValue = b["winRate"] or 0
                if aValue == bValue then
                    return a.totalCount < b.totalCount
                else
                    return aValue < bValue
                end
            end
        )
    elseif self._curFriendType == FRIEND_CONST_DEFINE.PART then
         -- 排序
        table.sort(data, function(a, b)
            local playerA = CF.roomData:getPlayerDataByNumberID(a.userId)
            local playerB = CF.roomData:getPlayerDataByNumberID(b.userId)
            local localSeatA = self:changeSeatToResult(playerA:getSeat())
            local localSeatB = self:changeSeatToResult(playerB:getSeat())
            return localSeatA < localSeatB
        end)
    end

    for i = 1, #data do
        local item = self._itemFriend:clone()
        self:updateFriendItem(item, data[i])
        self._listViewFriend:pushBackCustomItem(item)
    end
end

--座位转换函数(将座位转换成本地座位，自己在第一个, 返回本地坐标（1，2，3，4）
function SxvipRecordMainView:changeSeatToResult(seat, selfServerSeat)
    local selfSeat = selfServerSeat or CF.roomData:getSelfSeat()
    return ( (seat - selfSeat + CF.roomData:getChairs() ) % CF.roomData:getChairs() ) + 1
end

function SxvipRecordMainView:updateFriendItem(item, data)
    if not item or not data then
        return
    end
    local nameTxt = data.nickName or ""
    local totalCountTxt = data.totalCount or 0
    local vipModule = self:getSxvipModule()
    local winRateForMe = vipModule:getFriendWinRateForMe(data)
    local winRateTotal = vipModule:getFriendWinRateTotal(data)
    local winScore = vipModule:getFriendWinScore(data)
    local offlineTxt = vipModule:getOffLineDes(data.offline or 0)
    local dismissTxt = vipModule:getDismissDes(data.dismiss or 0)
    local speedTxt = vipModule:getOutCardSpeedDesc(data.speed or 0)
    -- 特殊处理逻辑
    -- 处理分数颜色
    if data.totalScore > 0 then
        CF.UITool.setTextColor(item, "_KW_WINSCORE", cc.c3b(0xD8, 0x4D, 0x28))
    else
        CF.UITool.setTextColor(item, "_KW_WINSCORE", cc.c3b(0x5E, 0x5D, 0x68))
    end
    -- 如果是自己的战绩
    local isSelfData = tonumber(CF.selfPlayerData:getNumberID()) == tonumber(data.userId)
    if isSelfData then
       -- 与我对局
       totalCountTxt = "-"
       winRateForMe = "--"
   end
    -- 头像 data.headIcon
    local head = CF.UITool.seekNodeByName(item, "_KW_ICON")
    local size = head:getContentSize()
    local headImg = CF.RemoteImage.new():setPosition(size.width / 2, size.height / 2):ignoreContentAdaptWithSize(false):setContentSize(size.width, size.height):addTo(head)
    headImg:setUrl(data.headIcon)
    -- 名字
    if string.len(nameTxt) > 12 then
        local validBytes = CF.StringTool.getMinimumValidBytesUTF8(nameTxt, 12)
        nameTxt = string.sub(nameTxt, 1, validBytes) .. "..."
    end
    CF.UITool.setText(item, "_KW_NAME", nameTxt)
    -- 与我对局
    CF.UITool.setText(item, "_KW_JUCOUNT", totalCountTxt)
    -- 对我胜率
    CF.UITool.setText(item, "_KW_WINRATE", winRateForMe)
    -- 牌友总胜率
    CF.UITool.setText(item, "_KW_TOTAL_WINRATE", winRateTotal)
    -- 我胜对方分数
    CF.UITool.setText(item, "_KW_WINSCORE", winScore)
    -- 速度
    CF.UITool.setText(item, "_KW_SPEED", speedTxt)
    -- 离线次数
    CF.UITool.setText(item, "_KW_OFFLINE", offlineTxt)
    -- 解散次数
    CF.UITool.setText(item, "_KW_DISMISS", dismissTxt)
    
end

function SxvipRecordMainView:onPart()
    if self._curFriendType == FRIEND_CONST_DEFINE.PART then
        return
    end
    self._curFriendType = FRIEND_CONST_DEFINE.PART
    self:updateFriendInfoView()
    self:updateFriendTabStatus()
end

function SxvipRecordMainView:onPartAll()
    if self._curFriendType == FRIEND_CONST_DEFINE.PARTALL then
        return
    end
    self._curFriendType = FRIEND_CONST_DEFINE.PARTALL
    self:updateFriendInfoView()
    self:updateFriendTabStatus()
end

function SxvipRecordMainView:updateFriendTabStatus()
    self:setFriendTab(self._btnPartAll, self._curFriendType == FRIEND_CONST_DEFINE.PARTALL)
    self:setFriendTab(self._btnPart, self._curFriendType == FRIEND_CONST_DEFINE.PART)
    CF.getLobbyModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy25052606,{ page_item_id = self._curFriendType == FRIEND_CONST_DEFINE.PARTALL and "本局牌友" or "全部牌友"})
end

function SxvipRecordMainView:setFriendTab(tab, selected)
    CF.UITool.setVisible(tab, "_KW_BG", selected)
    CF.UITool.setTextColor(tab, "_KW_DESC", selected and FRIEND_CONST_COLOR.SELECT or FRIEND_CONST_COLOR.NORMAL)
end

function SxvipRecordMainView:showToast(msg)
    if not msg then return end
    local worldPos = self._tipsPos:convertToWorldSpace(cc.p(0, 0))
    CF.TipTool.showToast(msg, nil, worldPos)
end

-- 滚动文本
function SxvipRecordMainView:scrollText(label)
    if not label then return end
    local panel = label:getParent()
    if not panel then return end
    local panelWidth = panel:getContentSize().width
    local textWidth = label:getContentSize().width
    label:stopAllActions()
    label:setPositionX(panel:getContentSize().width/2)
    
    -- 如果文本不超过容器宽度，返回空动作
    if textWidth <= panelWidth then
        return
    end
    -- 计算滚动参数
    local halfExtra = (textWidth - panelWidth)/2
    local scrollSpeed = 60  -- 像素/秒
    local rightTime = halfExtra / scrollSpeed  -- 右移时间
    local leftTime = (halfExtra * 2) / scrollSpeed  -- 左移时间
    -- 创建单次滚动序列
    local singleScroll = cc.Sequence:create(
        cc.DelayTime:create(0),  -- 初始居中暂停
        cc.MoveBy:create(rightTime, cc.p(halfExtra, 0)),  -- 右移
        cc.DelayTime:create(0.5),  -- 右侧暂停
        cc.MoveBy:create(leftTime, cc.p(-halfExtra * 2, 0)),  -- 左移
        cc.DelayTime:create(0.5),  -- 左侧暂停
        cc.MoveBy:create(rightTime, cc.p(halfExtra, 0))  -- 回到中间
    )
    label:runAction(cc.RepeatForever:create(singleScroll))
end

return SxvipRecordMainView  ^�  