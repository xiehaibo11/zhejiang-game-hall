local SxvipStatisticsItem = class("SxvipStatisticsItem" , XH.ViewBase)
local SxvipConfig = require("lobby.Modules.Sxvip.Config")

local Week_Static = {
    [1] = "本周" ,
    [2] = "前1周" ,
    [3] = "前2周" ,
    [4] = "前3周" ,
}

function SxvipStatisticsItem:getCSBPath()
    return "cocosStudio/hall/CSB/Sxvip/SxvipStatisticsItem.csb"
end

function SxvipStatisticsItem:getBindingInfo()
    return {
        ["_KW_VIP_ROOT"] = {varName = "_root"},
        ["_KWA_LEFT_PANEL"] = {varName = "_leftPanel"},
        ["_KWA_TXT_MAIN_TIME"] = {varName = "_txtMainTime"},
        ["_KWA_TXT_WIN_RATE"] = {varName = "_txtMainWinRate"},
        ["_KWA_TXT_JU"] = {varName = "_txtJu"},
        ["_KWA_TXT_WIN_JU"] = {varName = "_txtWinJu"},
        ["_KWA_TXT_WIN_SCORE"] = {varName = "_txtWinScore"},
        ["_KWA_TXT_FRIEND_XIANG"] = {varName = "_txtFriendXiang"},
        ["_KWA_TXT_FRIEND_QIANG"] = {varName = "_txtFriendQiang"},
        ["_KWA_PANEL_DAY_RATE"] = {varName = "_panelDayRate"},
        ["_KWA_PANEL_WEEK_RATE"] = {varName = "_panelWeekRate"},
        ["_KWA_TXT_DAY_7"] = {varName = "_txtDay7"},
        ["_KWA_TXT_DAY_6"] = {varName = "_txtDay6"},
        ["_KWA_TXT_DAY_5"] = {varName = "_txtDay5"},
        ["_KWA_TXT_DAY_4"] = {varName = "_txtDay4"},
        ["_KWA_TXT_DAY_3"] = {varName = "_txtDay3"},
        ["_KWA_TXT_DAY_2"] = {varName = "_txtDay2"},
        ["_KWA_TXT_DAY_1"] = {varName = "_txtDay1"},
        ["_KWA_ITEM_DAY_RATE"] = {varName = "_itemDayRate"},
        ["_KWA_ITEM_WEEK_RATE"] = {varName = "_itemWeekRate"},
        ["_KWA_TXT_WEEK_4"] = {varName = "_txtWeek4"},
        ["_KWA_TXT_WEEK_3"] = {varName = "_txtWeek3"},
        ["_KWA_TXT_WEEK_2"] = {varName = "_txtWeek2"},
        ["_KWA_TXT_WEEK_1"] = {varName = "_txtWeek1"},
        ["_KW_TOUCH_LAYER"] =  {varName = "_touchLayer" , type = XH.UI_TYPE.LAYER ,  onTouchEnded = "onCloseSelectors"},
        ["_KWA_BTN_1_DAY"] = {varName = "_btn1Day", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onQuickSelectTime" },
        ["_KWA_BTN_3_DAY"] = {varName = "_btn3Day", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onQuickSelectTime" },
        ["_KWA_BTN_7_DAY"] = {varName = "_btn7Day", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onQuickSelectTime" },
        ["_KWA_DESC_1_DAY"] = {varName = "_desc1Day" },
        ["_KWA_DESC_3_DAY"] = {varName = "_desc3Day" },
        ["_KWA_DESC_7_DAY"] = {varName = "_desc7Day" },
        ["_KW_IMAGE_GAUSSIAN"] = {varName = "_imageGaussian" },
        ["_KW_OPEN"] = {varName = "_btnOpen",type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchOpen"},
        -- 刷选项组件
        ["_KWA_PANEL_GAME_MODEL"] = {varName = "_panelGameModel" },
        ["_KWA_PANEL_GAME_PLAY"] = {varName = "_panelGamePlay" },
        ["_KWA_PANEL_PLAYERS"] = {varName = "_panelPlayers" },
        ["_KWA_PANEL_START_TIME"] = {varName = "_panelStartTime" },
        ["_KWA_PANEL_END_TIME"] = {varName = "_panelEndTime" },
    }
end

function SxvipStatisticsItem:getProxyEvents()
    return {
       { module = XH.lobby:getModule("Sxvip"), eventKeyName = "SXVIP_EVENT_STATISTICS_UPDATE_ALL", callBack = "onStatisticsUpdateAll" },
       { module = XH.lobby:getModule("Sxvip"), eventKeyName = "SXVIP_EVENT_STATISTICS_UPDATE_SUB", callBack = "onStatisticsUpdateSub" },
       { module = XH.lobby:getModule("Sxvip"), eventKeyName = "SXVIP_EVENT_STATISTICS_UPDATE_INFO", callBack = "onStatisticsUpdateInfo" },
    }
end

function SxvipStatisticsItem:ctor()
    SxvipStatisticsItem.super.ctor(self)

    self._statisticsData = {}

    self:resetServerData()

    self:initLogicData()

    self:initView()
end

function SxvipStatisticsItem:resetServerData()
    -- 玩法
    self._gameIds = {
        0
    }
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
    -- 人数
    self._players = { 
        0 
    }
end

function SxvipStatisticsItem:initLogicData()
    self._selectGameId                   = 0 -- 选中游戏id
    self._selectRoomModeInfo             = self._gameModes[1] --选中模式
    self._curSelector                    = nil --当前选择的是那个下拉框
    -- self._statisticDay = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_SXVIP_STATISTIC_DATE, 0) --记录是否有记录
    self._statisticDay                   = 0
    self._startTimeIdx, self._endTimeIdx = self:getTimeIdxByStatisiticDay()
    self._timeDatas                      = self:getRecent7Days()
    self._selectRen                      = 0
end

-- 获取日期
function SxvipStatisticsItem:getRecent7Days()
    -- 获取当前时间戳（秒）
    local currentTime = XH.lobby:getModule("Shop"):getServerTime()
    local days = {}
    -- 生成从今天往前推6天的日期（共7天）
    for i = 0, 6 do
        local time = currentTime - (i * 86400) -- 86400秒=1天
        local date = os.date("*t", time)
        days[#days + 1] = {
            year = date.year,
            month = date.month,
            day = date.day,
            timestamp = time,
            weekday = date.wday,
            ymd = string.format("%04d-%02d-%02d", date.year, date.month, date.day),
            idx = #days + 1
        }
    end
    return days
end

function SxvipStatisticsItem:initView()
    local size = self._root:getContentSize()
    self:setContentSize(size)
    self._touchLayer:setVisible(false)
    -- 筛选面板屏蔽滑动事件&按钮点击事件
    local allFifterPanel = self:getAllFifterPanel()
    for i = 1, #allFifterPanel do
        local panel = allFifterPanel[i]
        local listView = XH.UITool.seekNodeByName(panel, "_KWA_LISTVIEW")
        if listView then
            listView:setScrollBarEnabled(false)
        end
        XH.UITool.addTouchEventListener(panel, "_KWA_BTN", function(send, eventType) 
            if eventType ~= ccui.TouchEventType.ended then
                return
            end
            if XH.lobby:getModule("Sxvip"):isExpire() then
                local clickContent = "时间组件"
                if panel == self._panelGameModel then
                    clickContent = "全部模式"
                elseif panel ==  self._panelGamePlay then
                    clickContent = "全部玩法"
                elseif panel ==  self._panelPlayers then
                    clickContent = "全部人数"
                end
                self:showShopView(clickContent)
                return
            end
            self:onDetail(panel)
        end)
    end
end

function SxvipStatisticsItem:getAllFifterPanel()
    return {
        self._panelGameModel, self._panelGamePlay, self._panelPlayers, self._panelStartTime, self._panelEndTime
    }
end

function SxvipStatisticsItem:updateSelectTime()
    local descList = {self._desc1Day, self._desc3Day, self._desc7Day}
    local btnList = {self._btn1Day, self._btn3Day, self._btn7Day}
    local dayList = {1, 3, 7}
    for i = 1, 3 do
        local desc = descList[i]
        local btn = btnList[i]
        local day = dayList[i]
        local isSelect = self._statisticDay == day
        desc:setTextColor(isSelect and cc.c3b(0xA2, 0x39, 0x00) or cc.c3b(0xB4, 0x62, 0x34))
        btn:setOpacity(isSelect and 255 or 0)
    end
end

function SxvipStatisticsItem:updateAllView()
    self:updateView()
end

function SxvipStatisticsItem:getNameByGameId(id)
    if id == 0 then
        return "全部玩法"
    end
    local gameNameList = XH.areaData:getAreaGameNameList()
    local gameName = gameNameList[id]
    return gameName or "未知玩法"
end

function SxvipStatisticsItem:updateView()
    self:updateGameInfo()
    self:updateDayInfo()
    self:updateWeekInfo()
end

function SxvipStatisticsItem:updateAllSeletorBtn()
    self:updateSelectorDisplay("_panelGamePlay", self:getNameByGameId(self._selectGameId))
    self:updateSelectorDisplay("_panelGameModel", self._selectRoomModeInfo.name)
    self:updateSelectorDisplay("_panelPlayers", self._selectRen == 0 and "全部人数" or self._selectRen.."人")
    self:updateTimeDisplay()
end

function SxvipStatisticsItem:updateGameInfo()
    if XH.lobby:getModule("Sxvip"):isExpire() then
        -- 胜率
        -- self._txtMainWinRate:setString("*%")
        -- 最香牌友
        self._txtFriendXiang:setString("**")
        -- 最强牌友
        self._txtFriendQiang:setString("**")
        -- 高斯模糊开起来
        self._imageGaussian:setVisible(true)
    else
        self._imageGaussian:setVisible(false)
        -- 胜率
        -- self._txtMainWinRate:setString(self._statisticsData.winRate)
        -- 最香牌友
        local lostUser = self._statisticsData.lostUser
        if lostUser and string.len(lostUser) > 12 then
            local validBytes = XH.StringTool.getMinimumValidBytesUTF8(lostUser, 12)
            lostUser = string.sub(lostUser,1,validBytes) .. "..."
        end
        self._txtFriendXiang:setString(lostUser)
        -- 最强牌友
        local winUser = self._statisticsData.winUser
        if winUser and string.len(winUser) > 12 then
            local validBytes = XH.StringTool.getMinimumValidBytesUTF8(winUser, 12)
            winUser = string.sub(winUser,1,validBytes) .. "..."
        end
        self._txtFriendQiang:setString(winUser)
    end
end

function SxvipStatisticsItem:updateDayInfo()
    local dayInfo = self._statisticsData.dayReport
    if not dayInfo then return end
    self._panelDayRate:removeAllChildren()
    local size = self._panelDayRate:getContentSize()
    -- 创建item
    for i = 1, 7 do
        local dateTxt = self["_txtDay" .. i]
        local data = dayInfo[i]
        if dateTxt and data then
            dateTxt:setString(data.date)
            local dayItem = self._itemDayRate:clone()
            local rateTxt = XH.UITool.seekNodeByName(dayItem , "_KWA_TEXT_DAY_RATE")
            local rateKuang = XH.UITool.seekNodeByName(dayItem , "_KWA_IMG_BUBBLE")
            if rateTxt and rateKuang then
                rateTxt:setString(data.winRate)
                local kuangSize = rateKuang:getContentSize()
                rateKuang:setContentSize(rateTxt:getContentSize().width + 10 , kuangSize.height)
            end
            self._panelDayRate:addChild(dayItem)
            dayItem:setName("dayItem" .. i)
            dayItem:setPosition(dateTxt:getPositionX() , data.totalCount == 0 and 0 or size.height * data.winCount / data.totalCount)
            local lastItem = self._panelDayRate:getChildByName("dayItem" .. (i - 1))
            if lastItem then
                 -- 创建 DrawNode
                local drawNode = cc.DrawNode:create()
                self._panelDayRate:addChild(drawNode , -1)
                -- 获取容器的位置
                local container1Pos = cc.p(lastItem:getPositionX(), lastItem:getPositionY())
                local container2Pos = cc.p(dayItem:getPositionX(), dayItem:getPositionY())
                -- 设置直线颜色为红色
                local lineColor = cc.c4f(231/255, 56/255, 61/255, 1)
                -- 画直线连接两个容器，并设置颜色
                drawNode:drawSegment(container1Pos, container2Pos, 2, lineColor)
            end
        end
    end
end

function SxvipStatisticsItem:updateWeekInfo()
    local weekInfo = self._statisticsData.weekReport
    if not weekInfo then return end
    self._panelWeekRate:removeAllChildren()
    local size = self._panelWeekRate:getContentSize()
    for i = 1, 4 do
        local dateTxt = self["_txtWeek" .. i]
        local data = weekInfo[i]
        if dateTxt and data then
            dateTxt:setString(Week_Static[data.weekIndex])
            local weekItem = self._itemWeekRate:clone()
            local rateTxt = XH.UITool.seekNodeByName(weekItem , "_KWA_TEXT_WEEK_RATE")
            local rateKuang = XH.UITool.seekNodeByName(weekItem , "_KWA_IMG_BUBBLE")
            if rateTxt and rateKuang then
                rateTxt:setString(data.winRate)
                local kuangSize = rateKuang:getContentSize()
                rateKuang:setContentSize(rateTxt:getContentSize().width + 10 , kuangSize.height)
            end
            self._panelWeekRate:addChild(weekItem)
            weekItem:setName("weekItem" .. i)
            weekItem:setPosition(dateTxt:getPositionX() , data.totalCount == 0 and 0 or size.height * data.winCount / data.totalCount)
            -- 划线
            local lastItem = self._panelWeekRate:getChildByName("weekItem" .. (i - 1))
            if lastItem then
                 -- 创建 DrawNode
                 local drawNode = cc.DrawNode:create()
                 self._panelWeekRate:addChild(drawNode , -1)
                 -- 获取容器的位置
                 local container1Pos = cc.p(lastItem:getPositionX(), lastItem:getPositionY())
                 local container2Pos = cc.p(weekItem:getPositionX(), weekItem:getPositionY())
                 -- 设置直线颜色为蓝色
                 local lineColor = cc.c4f(72/255, 111/255, 188/255, 1)
                 -- 画直线连接两个容器，并设置颜色
                 drawNode:drawSegment(container1Pos, container2Pos, 2, lineColor)
            end
        end
    end
end

-- do nothing
function SxvipStatisticsItem:refreshView()
    -- 更新所有下拉框状态
    self:updateAllDropBox()
    -- 更新下所有listview
    self:updateAllListView()
    -- 更新下所有刷选项按钮
    self:updateAllSeletorBtn()
    -- 更新时间组件
    self:updateTime()
    -- 更新选中时间
    self:updateSelectTime()
    -- 刷新下层数据
    self:refreshBottomData()
    -- 刷新中间数据
    self:refreshMidData()
    -- 曝光数据
    XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.zyt2024032804)
end

function SxvipStatisticsItem:onStatisticsUpdateInfo(event)
    if not self or tolua.isnull(self) then
        return
    end
    local info = XH.lobby:getModule("Sxvip"):getStatisticsDataNewByKey(self:getCurReqKey())
    self:resetServerData()
    self:dealLogicData(info)
    self:updateAllListView()
    self:updateAllSeletorBtn()
    self:updateMidInfo(info)
end

function SxvipStatisticsItem:dealLogicData(info)
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
    -- 人数
    local players = info.rens or {}
    for i = 1, #players do
        table.insert(self._players, players[i])
    end
end

function SxvipStatisticsItem:refreshBottomData()
    local data = XH.lobby:getModule("Sxvip"):getStatisticsDataByGameid(self._selectGameId)
    if not data then
        XH.lobby:getModule("Sxvip"):reqGameplayStatisticsSub(self._selectGameId)
    else
        self._statisticsData = data
        self:updateView()
    end
end

function SxvipStatisticsItem:refreshMidData()
    local startTime = self:getStartTime()
    local endTime = self:getEndTime()
    if startTime > endTime then
        XH.TipTool.showToast("开始时间不能大于结束时间，请重新选择")
        return
    end
    if XH.lobby:getModule("Sxvip"):getStatisticsDataNewByKey(self:getCurReqKey()) then
        self:onStatisticsUpdateInfo()
        return
    end
    local data = {
        room_mode = self:getRoomMode(),
        club_id = self:getClubId(),
        game_id = self._selectGameId,
        ren =  self:getRen(),
        start_time = self:getStartTime(),
        end_time = self:getEndTime(),
        vip = not XH.lobby:getModule("Sxvip"):isExpire(),
        key = self:getCurReqKey()
    }
    XH.lobby:getModule("Sxvip"):reqSxvipGameStatistics(data)
end

function SxvipStatisticsItem:getCurReqKey()
    local value = string.format("room_mode_%s_club_id_%s_game_id_%s_ren_%s_start_time_%s_end_time_%s_vip_%s", self:getRoomMode(),self:getClubId(),self._selectGameId,self:getRen(),self:getStartTimeYmd(),self:getEndTimeYmd(),not XH.lobby:getModule("Sxvip"):isExpire())
    return XH.SysTool:md5_encode(value)
end

function SxvipStatisticsItem:getRoomMode()
    if self._selectRoomModeInfo then
        return self._selectRoomModeInfo.roomMode
    end
    return 0
end

function SxvipStatisticsItem:getClubId()
    if self._selectRoomModeInfo then
        return self._selectRoomModeInfo.clubId
    end
    return 0
end

function SxvipStatisticsItem:getRen()
    return self._selectRen or 0
end

function SxvipStatisticsItem:getStartTimeYmd()
    if self._startTimeIdx and self._timeDatas[self._startTimeIdx] then
        return self._timeDatas[self._startTimeIdx].ymd
    end
    return 0
end

function SxvipStatisticsItem:getEndTimeYmd()
    if self._endTimeIdx and self._timeDatas[self._endTimeIdx] then
        return self._timeDatas[self._endTimeIdx].ymd
    end
    return 0
end

function SxvipStatisticsItem:getStartTime()
    if self._startTimeIdx and self._timeDatas[self._startTimeIdx] then
        return self._timeDatas[self._startTimeIdx].timestamp
    end
    return 0
end

function SxvipStatisticsItem:getEndTime()
    if self._endTimeIdx and self._timeDatas[self._endTimeIdx] then
        return self._timeDatas[self._endTimeIdx].timestamp
    end
    return 0
end

function SxvipStatisticsItem:updateAllListView()
    local selectors = {
        {panel = "_panelGamePlay", data = self._gameIds, formatter = function(v) 
            return self:getNameByGameId(v) 
        end},
        {panel = "_panelGameModel", data = self._gameModes, formatter = function(v) 
            return v.name 
        end},
        {panel = "_panelPlayers", data = self._players, formatter = function(v) 
            return v == 0 and "全部人数" or v.."人" 
        end},
        {panel = "_panelStartTime", data = self._timeDatas, formatter = function(v) 
            return v.ymd 
        end},
        {panel = "_panelEndTime", data = self._timeDatas, formatter = function(v) 
            return v.ymd 
        end}
    }
    for _, selector in ipairs(selectors) do
        self:createSelector(selector.panel, selector.data, selector.formatter)
    end
end

--[[ 核心逻辑方法 ]]--
function SxvipStatisticsItem:createSelector(panelName, data, formatter)
    local panel = self[panelName]
    local listView = XH.UITool.seekNodeByName(panel, "_KWA_LISTVIEW")
    listView:removeAllItems()
    
    local itemModel = XH.UITool.seekNodeByName(panel, "_KWA_ITEM")
    for _, v in ipairs(data) do
        local item = itemModel:clone()
        item.customData = v
        XH.UITool.setText(item, "_KWA_ITEM_DESC", formatter(v))
        XH.UITool.adaptTextToWidth(XH.UITool.seekNodeByName(item, "_KWA_ITEM_DESC"), 220, 36, 15)
        item:addTouchEventListener(function(_, eventType)
            if eventType == ccui.TouchEventType.ended then
                self:onSelectItem(panelName, v)
            end
        end)
        listView:pushBackCustomItem(item)
    end
end

function SxvipStatisticsItem:onSelectItem(panelName, data)
    self:onCloseSelectors()
    if panelName == "_panelGamePlay" then
        if self._selectGameId == data then
            return
        end
        self._selectGameId = data
        self:updateSelectorDisplay(panelName, self:getNameByGameId(data))
        self:refreshBottomData()
    elseif panelName == "_panelGameModel" then
        if self._selectRoomModeInfo.name == data.name and self._selectRoomModeInfo.room_mode == data.room_mode and self._selectRoomModeInfo.club_id == data.club_id then
            return
        end
        self._selectRoomModeInfo = data
        self:updateSelectorDisplay(panelName, data.name)
    elseif panelName == "_panelPlayers" then
        if self._selectRen == data then
            return
        end
        self._selectRen = data
        self:updateSelectorDisplay(panelName, data == 0 and "全部人数" or data.."人")
    elseif panelName == "_panelStartTime" then
        if self._startTimeIdx == data.idx then
            return
        end
        self._startTimeIdx = data.idx
        self:updateTimeDisplay()
    elseif panelName == "_panelEndTime" then
        if self._endTimeIdx == data.idx then
            return
        end
        self._endTimeIdx = data.idx
        self:updateTimeDisplay()
    end
    
    
    self:refreshMidData()
end

function SxvipStatisticsItem:updateTimeDisplay()
    XH.UITool.setText(self._panelStartTime, "_KWA_TXT_BTN_DESC", self._timeDatas[self._startTimeIdx].ymd)
    XH.UITool.setText(self._panelEndTime, "_KWA_TXT_BTN_DESC", self._timeDatas[self._endTimeIdx].ymd)
end

function SxvipStatisticsItem:updateSelectorDisplay(panelName, text)
    local panel = self[panelName]
    local label = XH.UITool.seekNodeByName(panel, "_KWA_TXT_BTN_DESC")
    if label then
        label:setString(text)
        self:scrollText(label)
    end
end

function SxvipStatisticsItem:updateTime(startTimeIdx, endTimeIdx)
    self._startTimeIdx = startTimeIdx or self._startTimeIdx
    self._endTimeIdx = endTimeIdx or self._endTimeIdx
    -- 根据记录更新下拉框时间
    XH.UITool.setText(self._panelStartTime, "_KWA_TXT_BTN_DESC", self._timeDatas[self._startTimeIdx].ymd)
    XH.UITool.setText(self._panelEndTime, "_KWA_TXT_BTN_DESC", self._timeDatas[self._endTimeIdx].ymd)
    self:scrollText(XH.UITool.seekNodeByName(self._panelStartTime, "_KWA_TXT_BTN_DESC"))
    self:scrollText(XH.UITool.seekNodeByName(self._panelEndTime, "_KWA_TXT_BTN_DESC"))
end

function SxvipStatisticsItem:getTimeIdxByStatisiticDay()
    if self._statisticDay == 1 then
        return 2,2
    elseif self._statisticDay == 3 then
        return 3,1
    elseif self._statisticDay == 7 then
        return 7,1
    else
        return 1,1
    end
end

function SxvipStatisticsItem:onStatisticsUpdateAll(event)
    if not self or tolua.isnull(self) then return end
    local data = XH.lobby:getModule("Sxvip"):getStatisticsDataByGameid(self._selectGameId)
    if data then
        -- self._gameIds = data.gameIds or {}
        -- if not table.indexof(self._gameIds,0) then
        --     table.insert(self._gameIds, 1, 0) --全部
        -- end
        self._statisticsData = data
        self:updateAllView()
    end
end

function SxvipStatisticsItem:onStatisticsUpdateSub(event)
    local data = XH.lobby:getModule("Sxvip"):getStatisticsDataByGameid(self._selectGameId)
    if data then
        self._statisticsData = data
        self:updateView()
    end
end

function SxvipStatisticsItem:onDetail(sender , eventType)
    self._curSelector = self._curSelector ~= sender and sender or nil
    self._touchLayer:setVisible(self._curSelector ~= nil)
    self:updateAllDropBox()
end

function SxvipStatisticsItem:onCloseSelectors(sender , eventType)
    self:onDetail()
end

function SxvipStatisticsItem:updateAllDropBox()
    -- 下拉框
    local panelList = self:getAllFifterPanel()
    for _, panel in ipairs(panelList) do
        XH.UITool.setVisible(panel, "_KWA_LISTVIEW", self._curSelector == panel)
        XH.UITool.setVisible(panel, "_KWA_LISTVIEW_BG", self._curSelector == panel)
        XH.UITool.setRotation(panel, "_KWA_IMG_MARK", self._curSelector == panel and 180 or 0)
    end
end

function SxvipStatisticsItem:onQuickSelectTime(sender , eventType)
    if not sender then
        return
    end
    if XH.lobby:getModule("Sxvip"):isExpire() then
        self:showShopView("时间组件")
        return
    end
    if sender == self._btn1Day then
        if self._statisticDay == 1 then
            return
        end
        self._statisticDay = 1
    elseif sender == self._btn3Day then
        if self._statisticDay == 3 then
            return
        end
        self._statisticDay = 3
    elseif sender == self._btn7Day then
        if self._statisticDay == 7 then
            return
        end
        self._statisticDay = 7
    end
    self:updateTime(self:getTimeIdxByStatisiticDay())
    self:refreshMidData()
    self:updateSelectTime()
end


function SxvipStatisticsItem:updateMidInfo(info)
    local winRate = string.format("%.0f%%", info.totalCount == 0 and 0 or (info.winCount / info.totalCount * 100))
    self._txtMainWinRate:setString(winRate)
    self._txtJu:setString(info.totalCount)
    self._txtWinJu:setString(info.championCount)
    self._txtWinScore:setString(info.totalScore)
end

function SxvipStatisticsItem:updateListView(panel,data,updateItemFunc)
    if not panel or not data then
        return
    end
    local listViewModel = XH.UITool.seekNodeByName(panel, "_KWA_LISTVIEW")
    listViewModel:removeAllItems()
    local itemModel = XH.UITool.seekNodeByName(panel, "_KWA_ITEM")
    for i = 1, #data do
        local item = itemModel:clone()
        item.customData = data[i]
        listViewModel:pushBackCustomItem(item)
        if updateItemFunc then
            updateItemFunc(item)
        end
    end
end

function SxvipStatisticsItem:onTouchOpen()
    self:showShopView("开通会员查看数据")
end

function SxvipStatisticsItem:showShopView(clickContent)
    XH.TipTool.showToast("开通会员，即可使用特权！")
    XH.viewManager:openView("SxvipShopView", nil, SxvipConfig.ThrowData.source.statistics)
    XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy25052601, {block_item_id = clickContent})
end

-- 滚动文本
function SxvipStatisticsItem:scrollText(label)
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

return SxvipStatisticsItem [k  