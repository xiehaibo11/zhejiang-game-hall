---@class TeaHouseRankView2 : View
local TeaHouseRankView2 = class("TeaHouseRankView2", TeaHouse.View)

local MatchContributeConfig = require("lobby.Modules.PeakRace.Config")
local KW_MAX_NAME_FONT_SIZE = 36
local KW_MIN_NAME_FONT_SIZE = 26
local KW_MAX_NAME_WIDTH = 140
local KW_SHOW_BILL_DAY = 9

TeaHouseRankView2.TAB_TYPE = {
    COST = 1, ---消耗
    PLAY_COUNT = 2, ---局数
    BIG_WINNER = 3, ---冠军
    SCORE = 4, ---优胜值
    WIN_LOSE = 5, ---胜负
    PEAK_RACE = 6, ---巅峰赛选拔
    WIN_RATE = 7, ---胜率
    TEAM = 8, ---团队
    RENQI = 9, ---队友人气榜
}

TeaHouseRankView2.DAY_TYPE = {
    DAY1 = 1, ---今日
    DAY2 = 2, ---昨日
    DAY7 = 3, ---七日
    DAY30 = 4, ---本月
    DAY60 = 5, ---上月
}

TeaHouseRankView2.RANK_TYPE = {
    CLOSE = 0,
    OPEN = 1,
    FILTER = 2,
}

TeaHouseRankView2.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseRankView2.csb",
    binding = {
        ["_KW_PANEL_ROOT"] = { tag = "_KW_PANEL_ROOT", name = "_panelRoot", class = "panel" },
        ["_KW_PANEL_LIST_INFO"] = { tag = "_KW_PANEL_LIST_INFO", name = "_panelListInfo", class = "panel" },
        ["_KW_PANEL_LIST_ITEM"] = { tag = "_KW_PANEL_LIST_ITEM", name = "_panelListItem", class = "panel" },
        ["_KW_BTN_CLOSE"] = { tag = "_KW_BTN_CLOSE", name = "_btnClose", class = "btn", events = "onCloseClicked" },
        ["_KW_BTN_COST_1"] = { tag = "_KW_BTN_COST_1", name = "_btnCost1", class = "btn", events = "onCost1Clicked" },
        ["_KW_BTN_COST_2"] = { tag = "_KW_BTN_COST_2", name = "_btnCost2", class = "btn", events = "onCost2Clicked" },
        ["_KW_BTN_PLAY_COUNT_1"] = { tag = "_KW_BTN_PLAY_COUNT_1", name = "_btnPlayCount1", class = "btn", events = "onPlayCount1Clicked" },
        ["_KW_BTN_PLAY_COUNT_2"] = { tag = "_KW_BTN_PLAY_COUNT_2", name = "_btnPlayCount2", class = "btn", events = "onPlayCount2Clicked" },
        ["_KW_BTN_BIG_WINNER_1"] = { tag = "_KW_BTN_BIG_WINNER_1", name = "_btnBigWinner1", class = "btn", events = "onBigWinner1Clicked" },
        ["_KW_BTN_BIG_WINNER_2"] = { tag = "_KW_BTN_BIG_WINNER_2", name = "_btnBigWinner2", class = "btn", events = "onBigWinner2Clicked" },
        ["_KW_BTN_SCORE_1"] = { tag = "_KW_BTN_SCORE_1", name = "_btnScore1", class = "btn", events = "onScore1Clicked" },
        ["_KW_BTN_SCORE_2"] = { tag = "_KW_BTN_SCORE_2", name = "_btnScore2", class = "btn", events = "onScore2Clicked" },
        ["_KW_BTN_WIN_LOSE_1"] = { tag = "_KW_BTN_WIN_LOSE_1", name = "_btnWinLose1", class = "btn", events = "onWinLose1Clicked" },
        ["_KW_BTN_WIN_LOSE_2"] = { tag = "_KW_BTN_WIN_LOSE_2", name = "_btnWinLose2", class = "btn", events = "onWinLose2Clicked" },
        ["_KW_BTN_WIN_RATE_1"] = { tag = "_KW_BTN_WIN_RATE_1", name = "_btnWinRate1", class = "btn", events = "onWinRate1Clicked" },
        ["_KW_BTN_WIN_RATE_2"] = { tag = "_KW_BTN_WIN_RATE_2", name = "_btnWinRate2", class = "btn", events = "onWinRate2Clicked" },
        ["_KW_BTN_RENQI_1"] = { tag = "_KW_BTN_RENQI_1", name = "_btnRenqi1", class = "btn", events = "onRenqi1Clicked" },
        ["_KW_BTN_RENQI_2"] = { tag = "_KW_BTN_RENQI_2", name = "_btnRenqi2", class = "btn", events = "onRenqi2Clicked" },
        ["_KW_BTN_TEAM_1"] = { tag = "_KW_BTN_TEAM_1", name = "_btnTeam1", class = "btn", events = "onTeam1Clicked" },
        ["_KW_BTN_TEAM_2"] = { tag = "_KW_BTN_TEAM_2", name = "_btnTeam2", class = "btn", events = "onTeam2Clicked" },
        ["_KW_BTN_PEAK_RACE_1"] = { tag = "_KW_BTN_PEAK_RACE_1", name = "_btnPeakRace1", class = "btn", events = "onPeakRace1Clicked" },
        ["_KW_BTN_PEAK_RACE_2"] = { tag = "_KW_BTN_PEAK_RACE_2", name = "_btnPeakRace2", class = "btn", events = "onPeakRace2Clicked" },

        ["_KW_BTN_TYPE_DAY1_1"] = { tag = "_KW_BTN_TYPE_DAY1_1", name = "_btnDay11", class = "btn", events = "onDay11Clicked" },
        ["_KW_BTN_TYPE_DAY1_2"] = { tag = "_KW_BTN_TYPE_DAY1_2", name = "_btnDay12", class = "btn", events = "onDay12Clicked" },
        ["_KW_BTN_TYPE_DAY2_1"] = { tag = "_KW_BTN_TYPE_DAY2_1", name = "_btnDay21", class = "btn", events = "onDay21Clicked" },
        ["_KW_BTN_TYPE_DAY2_2"] = { tag = "_KW_BTN_TYPE_DAY2_2", name = "_btnDay22", class = "btn", events = "onDay22Clicked" },
        ["_KW_BTN_TYPE_DAY7_1"] = { tag = "_KW_BTN_TYPE_DAY7_1", name = "_btnDay71", class = "btn", events = "onDay71Clicked" },
        ["_KW_BTN_TYPE_DAY7_2"] = { tag = "_KW_BTN_TYPE_DAY7_2", name = "_btnDay72", class = "btn", events = "onDay72Clicked" },
        ["_KW_BTN_TYPE_DAY30_1"] = { tag = "_KW_BTN_TYPE_DAY30_1", name = "_btnDay301", class = "btn", events = "onDay301Clicked" },
        ["_KW_BTN_TYPE_DAY30_2"] = { tag = "_KW_BTN_TYPE_DAY30_2", name = "_btnDay302", class = "btn", events = "onDay302Clicked" },
        ["_KW_BTN_TYPE_DAY60_1"] = { tag = "_KW_BTN_TYPE_DAY60_1", name = "_btnDay601", class = "btn", events = "onDay601Clicked" },
        ["_KW_BTN_TYPE_DAY60_2"] = { tag = "_KW_BTN_TYPE_DAY60_2", name = "_btnDay602", class = "btn", events = "onDay602Clicked" },
        ["_KW_BTN_TYPE_TEAM_CUR_1"] = { tag = "_KW_BTN_TYPE_TEAM_CUR_1", name = "_btnCurMonth1", class = "btn", events = "onCurMonth1Clicked" },
        ["_KW_BTN_TYPE_TEAM_CUR_2"] = { tag = "_KW_BTN_TYPE_TEAM_CUR_2", name = "_btnCurMonth2", class = "btn", events = "onCurMonth2Clicked" },
        ["_KW_BTN_TYPE_TEAM_LAST_1"] = { tag = "_KW_BTN_TYPE_TEAM_LAST_1", name = "_btnLastMonth1", class = "btn", events = "onLastMonth1Clicked" },
        ["_KW_BTN_TYPE_TEAM_LAST_2"] = { tag = "_KW_BTN_TYPE_TEAM_LAST_2", name = "_btnLastMonth2", class = "btn", events = "onLastMonth2Clicked" },


        ["_KW_PANEL_LIST_TITLE"] = { tag = "_KW_PANEL_LIST_TITLE", name = "_panelListTitle", class = "panel" },
        ["_KW_PANEL_LIST_TITLE_2"] = { tag = "_KW_PANEL_LIST_TITLE_2", name = "_panelListTitle2", class = "panel" },
        ["_KW_PANEL_LIST_TITLE_3"] = { tag = "_KW_PANEL_LIST_TITLE_3", name = "_panelListTitle3", class = "panel" },
        ["_KW_TEXT_RANK_DESC"] = { tag = "_KW_TEXT_RANK_DESC", name = "_textRankDesc", class = "text" },
        ["_KW_TEXT_RANK_DESC_2_1"] = { tag = "_KW_TEXT_RANK_DESC_2_1", name = "_textRankDesc21", class = "text" },
        ["_KW_TEXT_RANK_DESC_2_2"] = { tag = "_KW_TEXT_RANK_DESC_2_2", name = "_textRankDesc22", class = "text" },
        ["_KW_TEXT_RANK_DESC_2_3"] = { tag = "_KW_TEXT_RANK_DESC_2_3", name = "_textRankDesc23", class = "text" },
        ["_KW_TEXT_SELF_RANK"] = { tag = "_KW_TEXT_SELF_RANK", name = "_textSelfRank", class = "text" },
        ["_KW_TEXT_SELF_DESC"] = { tag = "_KW_TEXT_SELF_DESC", name = "_textSelfDesc", class = "text" },
        ["_KW_TEXT_SELF_DESC_TIP"] = { tag = "_KW_TEXT_SELF_DESC_TIP", name = "_textSelfDescTip", class = "text" },
        ["_KW_NODE_RANK_1"] = { tag = "_KW_NODE_RANK_1", name = "_nodeRank1", class = "node" },
        ["_KW_NODE_RANK_2"] = { tag = "_KW_NODE_RANK_2", name = "_nodeRank2", class = "node" },
        ["_KW_NODE_RANK_3"] = { tag = "_KW_NODE_RANK_3", name = "_nodeRank3", class = "node" },
        ["_KW_NODE_RANK_4"] = { tag = "_KW_NODE_RANK_4", name = "_nodeRank4", class = "node" },
        ["_KW_NODE_RANK_5"] = { tag = "_KW_NODE_RANK_5", name = "_nodeRank5", class = "node" },
        ["_KW_NODE_RANK_6"] = { tag = "_KW_NODE_RANK_6", name = "_nodeRank6", class = "node" },
        ["_KW_NODE_RANK_7"] = { tag = "_KW_NODE_RANK_7", name = "_nodeRank7", class = "node" },
        ["_KW_NODE_RANK_8"] = { tag = "_KW_NODE_RANK_8", name = "_nodeRank8", class = "node" },
        ["_KW_PANEL_COST"] = { tag = "_KW_PANEL_COST", name = "_panelCost", class = "panel" },
        ["_KW_PANEL_PLAY_COUNT"] = { tag = "_KW_PANEL_PLAY_COUNT", name = "_panelPlayCount", class = "panel" },
        ["_KW_PANEL_BIG_WINNER"] = { tag = "_KW_PANEL_BIG_WINNER", name = "_panelBigWinner", class = "panel" },
        ["_KW_PANEL_SCORE"] = { tag = "_KW_PANEL_SCORE", name = "_panelScore", class = "panel" },
        ["_KW_PANEL_WIN_LOSE"] = { tag = "_KW_PANEL_WIN_LOSE", name = "_panelWinLose", class = "panel" },
        ["_KW_PANEL_WIN_RATE"] = { tag = "_KW_PANEL_WIN_RATE", name = "_panelWinRate", class = "panel" },
        ["_KW_PANEL_RENQI"] = { tag = "_KW_PANEL_RENQI", name = "_panelRenqi", class = "panel" },
        ["_KW_PANEL_TEAM"] = { tag = "_KW_PANEL_TEAM", name = "_panelTeam", class = "panel" },
        ["_KW_PANEL_PEAK_RACE"] = { tag = "_KW_PANEL_PEAK_RACE", name = "_panelPeakRace", class = "panel" },

        ["_KW_PANEL_GAME_LIST"] = { tag = "_KW_PANEL_GAME_LIST", name = "_panelGameList", class = "panel" },
        ["_KW_PANEL_GAME_LIST_MASK"] = { tag = "_KW_PANEL_GAME_LIST_MASK", name = "_panelGameListMask", class = "panel" },
        ["_KW_IMG_GAME_LIST_BG"] = { tag = "_KW_IMG_GAME_LIST_BG", name = "_imgGameListBg", class = "img" },
        ["_KW_BTN_HIDE_GAME_LIST"] = { tag = "_KW_BTN_HIDE_GAME_LIST", name = "_btnHideGameList", class = "btn", events = "onHideGameListClicked" },
        ["_KW_BTN_SHOW_GAME_LIST"] = { tag = "_KW_BTN_SHOW_GAME_LIST", name = "_btnShowGameList", class = "btn", events = "onShowGameListClicked" },
        ["_KW_BTN_GAME"] = { tag = "_KW_BTN_GAME", name = "_btnGame", class = "btn" },
        ["_KW_SV_GAME_LIST"] = { tag = "_KW_SV_GAME_LIST", name = "_svGameList", class = "scrollview" },
        ["_KW_TEXT_GAME_SELECT"] = { tag = "_KW_TEXT_GAME_SELECT", name = "_textGameSelect", class = "text" },
        ["_KW_BTN_RANK_SETTING"] = { tag = "_KW_BTN_RANK_SETTING", name = "_btnRankSetting", class = "btn", events = "onRankSettingClicked" },
        
        ["_KW_SV_TAB"] = { tag = "_KW_SV_TAB", name = "_KW_SV_TAB", class = "scrollview" },
        ["_KW_PANEL_TAB"] = { tag = "_KW_PANEL_TAB", name = "_KW_PANEL_TAB", class = "panel" },

        ["_KW_PANEL_TYPE_FIXED_PEAK_RACE"] = { tag = "_KW_PANEL_TYPE_FIXED_PEAK_RACE", name = "_panelFixedTypePeak", class = "panel" },
        ["_KW_PANEL_TYPE_FIXED_TEAM"] = { tag = "_KW_PANEL_TYPE_FIXED_TEAM", name = "_panelFixedTypeTeam", class = "panel" },
        ["_KW_PANEL_TYPE_FIXED"] = { tag = "_KW_PANEL_TYPE_FIXED", name = "_panelFixedType", class = "panel" },
        ["_KW_PANEL_TYPE_OPTIONAL"] = { tag = "_KW_PANEL_TYPE_OPTIONAL", name = "_panelOptionalType", class = "panel" },
        ["_KW_PANEL_START_DATE"] = { tag = "_KW_PANEL_START_DATE", name = "_panelStartDate", class = "panel" },
        ["_KW_PANEL_END_DATE"] = { tag = "_KW_PANEL_END_DATE", name = "_panelEndDate", class = "panel" },
        ["_KW_BTN_BILL_SEARCH"] = { tag = "_KW_BTN_BILL_SEARCH", name = "_btnSearch", class = "btn", events = "onSearchClicked" },
        ["_KW_CHECK_CHANGE_STARTDATE"] = { tag = "_KW_CHECK_CHANGE_STARTDATE", name = "_changeStartDate", class = "btn" },
        ["_KW_CHECK_CHANGE_ENDDATE"] = { tag = "_KW_CHECK_CHANGE_ENDDATE", name = "_changeEndDate", class = "btn" },
        ["_KW_IMG_START_DATE_FILTER_BG"] = { tag = "_KW_IMG_START_DATE_FILTER_BG", name = "_startFilterBg", class = "img" },
        ["_KW_IMG_END_DATE_FILTER_BG"] = { tag = "_KW_IMG_END_DATE_FILTER_BG", name = "_endFilterBg", class = "img" },
        ["_KW_TEXT_START_SEARCH_DATE"] = { tag = "_KW_TEXT_START_SEARCH_DATE", name = "_textStartSearchDay", class = "text" },
        ["_KW_TEXT_END_SEARCH_DATE"] = { tag = "_KW_TEXT_END_SEARCH_DATE", name = "_textEndSearchDay", class = "text" },

        ["_KW_TEXT_RANK_TIP"] = { tag = "_KW_TEXT_RANK_TIP", name = "_KW_TEXT_RANK_TIP", class = "text" },
        ["_KW_PANEL_PEAK_TIP"] = { tag = "_KW_PANEL_PEAK_TIP", name = "_KW_PANEL_PEAK_TIP", class = "panel" },
        ["_KW_PANEL_RENQI_TIP"] = { tag = "_KW_PANEL_RENQI_TIP", name = "_KW_PANEL_RENQI_TIP", class = "panel" },
        ["_KW_PANEL_PEAK_TIP_CLICK"] = { tag = "_KW_PANEL_PEAK_TIP_CLICK", name = "_KW_PANEL_PEAK_TIP_CLICK", class = "btn", events = "onPeakTipClicked" },
        ["_KW_BTN_TEAM_MY"] = { tag = "_KW_BTN_TEAM_MY", name = "_KW_BTN_TEAM_MY", class = "btn", events = "onTeamMyClicked" },
        ["_KW_BTN_TEAM_RULE"] = { tag = "_KW_BTN_TEAM_RULE", name = "_KW_BTN_TEAM_RULE", class = "btn", events = "onTeamRuleClicked" },

        ["_KW_PANEL_PEAK_RACE_A"] = { tag = "_KW_PANEL_PEAK_RACE_A", name = "_KW_PANEL_PEAK_RACE_A", class = "panel" },
        ["_KW_TEXT_PEAK_RACE_A"] = { tag = "_KW_TEXT_PEAK_RACE_A", name = "_KW_TEXT_PEAK_RACE_A", class = "text" },
        ["_KW_CHECK_PEAK_RACE_A"] = { tag = "_KW_CHECK_PEAK_RACE_A", name = "_KW_CHECK_PEAK_RACE_A", class = "btn" },
        ["_KW_PANEL_PEAK_RACE_A_BG"] = { tag = "_KW_PANEL_PEAK_RACE_A_BG", name = "_KW_PANEL_PEAK_RACE_A_BG", class = "panel" },

        ["_KW_PANEL_PEAK_RACE_B"] = { tag = "_KW_PANEL_PEAK_RACE_B", name = "_KW_PANEL_PEAK_RACE_B", class = "panel" },
        ["_KW_TEXT_PEAK_RACE_B"] = { tag = "_KW_TEXT_PEAK_RACE_B", name = "_KW_TEXT_PEAK_RACE_B", class = "text" },
        ["_KW_CHECK_PEAK_RACE_B"] = { tag = "_KW_CHECK_PEAK_RACE_B", name = "_KW_CHECK_PEAK_RACE_B", class = "btn" },
        ["_KW_PANEL_PEAK_RACE_B_BG"] = { tag = "_KW_PANEL_PEAK_RACE_B_BG", name = "_KW_PANEL_PEAK_RACE_B_BG", class = "panel" },
        ["_KW_BTN_GAME_PEAK_RACE"] = { tag = "_KW_BTN_GAME_PEAK_RACE", name = "_KW_BTN_GAME_PEAK_RACE", class = "btn" },
        ["_KW_SV_GAME_LIST_PEAK_RACE"] = { tag = "_KW_SV_GAME_LIST_PEAK_RACE", name = "_KW_SV_GAME_LIST_PEAK_RACE", class = "scrollview" },

        ["_KW_PANEL_PEAK_RACE_C"] = { tag = "_KW_PANEL_PEAK_RACE_C", name = "_KW_PANEL_PEAK_RACE_C", class = "panel" },
        ["_KW_TEXT_PEAK_RACE_C"] = { tag = "_KW_TEXT_PEAK_RACE_C", name = "_KW_TEXT_PEAK_RACE_C", class = "text" },
        ["_KW_CHECK_PEAK_RACE_C"] = { tag = "_KW_CHECK_PEAK_RACE_C", name = "_KW_CHECK_PEAK_RACE_C", class = "btn" },
        ["_KW_PANEL_PEAK_RACE_C_BG"] = { tag = "_KW_PANEL_PEAK_RACE_C_BG", name = "_KW_PANEL_PEAK_RACE_C_BG", class = "panel" },
        ["_KW_BTN_PEAKRACE_SET"] = { tag = "_KW_BTN_PEAKRACE_SET", name = "_KW_BTN_PEAKRACE_SET", class = "btn", events = "onPeakRaceSetClicked" },
        ["_KW_TEXT_RANK_TIME"] = { tag = "_KW_TEXT_RANK_TIME", name = "_KW_TEXT_RANK_TIME", class = "text" },
        ["_KW_TEXT_RANK_TIP_WINRATE"] = { tag = "_KW_TEXT_RANK_TIP_WINRATE", name = "_KW_TEXT_RANK_TIP_WINRATE", class = "text" },
    }
}

function TeaHouseRankView2:ctor()
    TeaHouseRankView2.super.ctor(self)

    self._infoList = {}
    self._tvInfoList = nil

    self._tabType = nil
    self._tabNodes = {}

    self._dayType = nil
    self._dayNodes = {}

    self._gameID = 0

    self._rankList = {}

    self._bFirstEnter = true

    self._startDay = 0
    self._endDay = 0

    -- 月排行榜数据有分页
    self._curPage = 1
    self._maxPage = 1
    self._peakRaceMonth = 1 -- 本月还是上月
    self._pageSize = 20

    self:initUI()
    self:adaptUI()
    self:initPeakRaceUI()

    if not TeaHouse.manager.configManager.SetupConfig.IsOpenRankDateOptional then
        local dayType = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_RANK_LIST_DAY_TYPE_RECORD, TeaHouseRankView2.DAY_TYPE.DAY1)
        self:setDayType(dayType, true)
    end
    self:reqRankInfo()
    self:flushDayTipText()
end

function TeaHouseRankView2:initUI()
    self._tabNodes[TeaHouseRankView2.TAB_TYPE.COST] = { self._btnCost1, self._btnCost2 }
    self._tabNodes[TeaHouseRankView2.TAB_TYPE.PLAY_COUNT] = { self._btnPlayCount1, self._btnPlayCount2 }
    self._tabNodes[TeaHouseRankView2.TAB_TYPE.BIG_WINNER] = { self._btnBigWinner1, self._btnBigWinner2 }
    self._tabNodes[TeaHouseRankView2.TAB_TYPE.SCORE] = { self._btnScore1, self._btnScore2 }
    self._tabNodes[TeaHouseRankView2.TAB_TYPE.WIN_LOSE] = { self._btnWinLose1, self._btnWinLose2 }
    self._tabNodes[TeaHouseRankView2.TAB_TYPE.WIN_RATE] = { self._btnWinRate1, self._btnWinRate2 }
    self._tabNodes[TeaHouseRankView2.TAB_TYPE.RENQI] = { self._btnRenqi1, self._btnRenqi2 }
    self._tabNodes[TeaHouseRankView2.TAB_TYPE.TEAM] = { self._btnTeam1, self._btnTeam2 }
    self._tabNodes[TeaHouseRankView2.TAB_TYPE.PEAK_RACE] = { self._btnPeakRace1, self._btnPeakRace2 }

    self._dayNodes[TeaHouseRankView2.DAY_TYPE.DAY1] = { self._btnDay11, self._btnDay12 }
    self._dayNodes[TeaHouseRankView2.DAY_TYPE.DAY2] = { self._btnDay21, self._btnDay22 }
    self._dayNodes[TeaHouseRankView2.DAY_TYPE.DAY7] = { self._btnDay71, self._btnDay72 }
    self._dayNodes[TeaHouseRankView2.DAY_TYPE.DAY30] = { self._btnDay301, self._btnDay302 }
    self._dayNodes[TeaHouseRankView2.DAY_TYPE.DAY60] = { self._btnDay601, self._btnDay602 }

    self:updateTab(true)
    if self._panelGameList then
        self._panelGameList:addTouchEventListener(function(send, eventType)
            self:setGameListState(true)
        end)
    end
    if self._panelGameListMask then
        self._panelGameListMask:addTouchEventListener(function(send, eventType)
            self:setGameListState(false)
        end)
    end
    self:initGameList()
    self:flushTopChose()
end

function TeaHouseRankView2:initTabSV()
    if not self._KW_SV_TAB or not self._KW_PANEL_TAB then
        return
    end
    self._KW_SV_TAB:setScrollBarEnabled(false)
    local panelTabHeight = self._KW_PANEL_TAB:getContentSize().height
    local svTabHeight = self._KW_SV_TAB:getContentSize().height
    if panelTabHeight > svTabHeight then
        self._KW_SV_TAB:setInnerContainerSize(cc.size(self._KW_SV_TAB:getContentSize().width, panelTabHeight))
    --     self._KW_PANEL_TAB:setPositionY(0)
    else
        self._KW_PANEL_TAB:setPositionY(svTabHeight - panelTabHeight)
    end
    self._KW_SV_TAB:scrollToTop(0, false)
end

-- 刷新顶部栏
function TeaHouseRankView2:flushTopChose()
    -- 团队贡献
    -- 巅峰赛选拔
    self._panelFixedType:setVisible(false)
    self._panelOptionalType:setVisible(false)
    self._panelFixedTypePeak:setVisible(false)
    self._panelFixedTypeTeam:setVisible(false)
    if self._tabType == TeaHouseRankView2.TAB_TYPE.TEAM then
        self._panelFixedTypeTeam:setVisible(true)
        return
    elseif self._tabType == TeaHouseRankView2.TAB_TYPE.PEAK_RACE then
        self._panelFixedTypePeak:setVisible(true)
        return
    end
    if TeaHouse.manager.configManager.SetupConfig.IsOpenRankDateOptional then
        self._panelFixedType:setVisible(false)
        self._panelOptionalType:setVisible(true)
    else
        self._panelFixedType:setVisible(true)
        self._panelOptionalType:setVisible(false)
    end
end

function TeaHouseRankView2:isShowRenqiRank()
    return TeaHouse.manager.teahouseRank:isShowRenqiRank()
end

function TeaHouseRankView2:flushUIShow()
    local teahouseData = TeaHouse.manager.teahouseData
    local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
    if self._btnRankSetting then
        self._btnRankSetting:setVisible(SwitchConfig.RankSetting ~= 0 and teahouseData:checkSelfPower("ModifyRankSetting"))
        if teahouseData:isAdmin() then
            self._btnRankSetting:setVisible(SwitchConfig.RankSetting ~= 0 and teahouseData:checkSelfPower("ModifyRankSetting") and teahouseData:checkSelfAdminRight(teahouseData.ADMIN_RIGHT.CHECKRANK))
        end
        if self._tabType == TeaHouseRankView2.TAB_TYPE.TEAM or self._tabType == TeaHouseRankView2.TAB_TYPE.PEAK_RACE then
            self._btnRankSetting:setVisible(false)
        end
    end
    self._textSelfDescTip:setVisible(self._tabType ~= TeaHouseRankView2.TAB_TYPE.PEAK_RACE and self._tabType ~= TeaHouseRankView2.TAB_TYPE.RENQI)
    self._panelGameList:setVisible(self._tabType ~= TeaHouseRankView2.TAB_TYPE.PEAK_RACE and self._tabType ~= TeaHouseRankView2.TAB_TYPE.TEAM and self._tabType ~= TeaHouseRankView2.TAB_TYPE.RENQI)
    self._KW_TEXT_RANK_TIP:setVisible(self._tabType ~= TeaHouseRankView2.TAB_TYPE.PEAK_RACE and self._tabType ~= TeaHouseRankView2.TAB_TYPE.TEAM)
    self._KW_PANEL_PEAK_TIP:setVisible(self._tabType == TeaHouseRankView2.TAB_TYPE.PEAK_RACE)
    self._KW_PANEL_RENQI_TIP:setVisible(self._tabType == TeaHouseRankView2.TAB_TYPE.RENQI)
end

function TeaHouseRankView2:updateTab(isForbidReq)
    local teahouseData = TeaHouse.manager.teahouseData
    local rankIndex = 1
    local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
    -- 巅峰赛选拔
    local nodeRank = self["_nodeRank" .. rankIndex]
    rankIndex = rankIndex + 1
    if self._panelPeakRace and nodeRank then
        self._panelPeakRace:setVisible(true)
        self._panelPeakRace:setPosition(cc.p(nodeRank:getPosition()))
    end
    self._rankList[TeaHouseRankView2.TAB_TYPE.PEAK_RACE] = TeaHouseRankView2.RANK_TYPE.FILTER
    if SwitchConfig and SwitchConfig.WinLostRate ~= 0 and teahouseData:checkRankBit(teahouseData.RANK_BIT.WIN_RATE) then
        local nodeRank = self["_nodeRank" .. rankIndex]
        rankIndex = rankIndex + 1
        if self._panelWinRate and nodeRank then
            self._panelWinRate:setVisible(true)
            self._panelWinRate:setPosition(cc.p(nodeRank:getPosition()))
        end
        self._rankList[TeaHouseRankView2.TAB_TYPE.WIN_RATE] = SwitchConfig.WinLostRate
    else
        if self._panelWinRate then
            self._panelWinRate:setVisible(false)
        end
        self._rankList[TeaHouseRankView2.TAB_TYPE.WIN_RATE] = TeaHouseRankView2.RANK_TYPE.CLOSE
    end
    if SwitchConfig and SwitchConfig.ScoreRank ~= 0 and teahouseData:checkRankBit(teahouseData.RANK_BIT.DAY_SCORE) then
        local nodeRank = self["_nodeRank" .. rankIndex]
        rankIndex = rankIndex + 1
        if self._panelScore and nodeRank then
            self._panelScore:setVisible(true)
            self._panelScore:setPosition(cc.p(nodeRank:getPosition()))
        end
        self._rankList[TeaHouseRankView2.TAB_TYPE.SCORE] = SwitchConfig.ScoreRank
    else
        if self._panelScore then
            self._panelScore:setVisible(false)
        end
        self._rankList[TeaHouseRankView2.TAB_TYPE.SCORE] = TeaHouseRankView2.RANK_TYPE.CLOSE
    end
    if SwitchConfig and SwitchConfig.WinLoseRank ~= 0 and teahouseData:checkRankBit(teahouseData.RANK_BIT.DAY_SCORE) then--and teahouseData:checkSelfPower("ModifyBill") then
        local nodeRank = self["_nodeRank" .. rankIndex]
        rankIndex = rankIndex + 1
        if self._panelWinLose and nodeRank then
            self._panelWinLose:setVisible(true)
            self._panelWinLose:setPosition(cc.p(nodeRank:getPosition()))
        end
        self._rankList[TeaHouseRankView2.TAB_TYPE.WIN_LOSE] = SwitchConfig.WinLoseRank
    else
        if self._panelWinLose then
            self._panelWinLose:setVisible(false)
        end
        self._rankList[TeaHouseRankView2.TAB_TYPE.WIN_LOSE] = TeaHouseRankView2.RANK_TYPE.CLOSE
    end
    if SwitchConfig and SwitchConfig.BigWinnerRank ~= 0 and teahouseData:checkRankBit(teahouseData.RANK_BIT.DAY_BIG_WINNER) then
        local nodeRank = self["_nodeRank" .. rankIndex]
        rankIndex = rankIndex + 1
        if self._panelBigWinner and nodeRank then
            self._panelBigWinner:setVisible(true)
            self._panelBigWinner:setPosition(cc.p(nodeRank:getPosition()))
        end
        self._rankList[TeaHouseRankView2.TAB_TYPE.BIG_WINNER] = SwitchConfig.BigWinnerRank
    else
        if self._panelBigWinner then
            self._panelBigWinner:setVisible(false)
        end
        self._rankList[TeaHouseRankView2.TAB_TYPE.BIG_WINNER] = TeaHouseRankView2.RANK_TYPE.CLOSE
    end
    if SwitchConfig and SwitchConfig.PlayCountRank ~= 0 and teahouseData:checkRankBit(teahouseData.RANK_BIT.DAY_PLAY_COUNT) then
        local nodeRank = self["_nodeRank" .. rankIndex]
        rankIndex = rankIndex + 1
        if self._panelPlayCount and nodeRank then
            self._panelPlayCount:setVisible(true)
            self._panelPlayCount:setPosition(cc.p(nodeRank:getPosition()))
        end
        self._rankList[TeaHouseRankView2.TAB_TYPE.PLAY_COUNT] = SwitchConfig.PlayCountRank
    else
        if self._panelPlayCount then
            self._panelPlayCount:setVisible(false)
        end
        self._rankList[TeaHouseRankView2.TAB_TYPE.PLAY_COUNT] = TeaHouseRankView2.RANK_TYPE.CLOSE
    end
    if SwitchConfig and SwitchConfig.CostRank ~= 0 and teahouseData:checkRankBit(teahouseData.RANK_BIT.DAY_COST) then
        local nodeRank = self["_nodeRank" .. rankIndex]
        rankIndex = rankIndex + 1
        if self._panelCost and nodeRank then
            self._panelCost:setVisible(true)
            self._panelCost:setPosition(cc.p(nodeRank:getPosition()))
        end
        self._rankList[TeaHouseRankView2.TAB_TYPE.COST] = SwitchConfig.CostRank
    else
        if self._panelCost then
            self._panelCost:setVisible(false)
        end
        self._rankList[TeaHouseRankView2.TAB_TYPE.COST] = TeaHouseRankView2.RANK_TYPE.CLOSE
    end
    -- 队友人气榜（位于团队贡献榜上方）
    local isShowRenqi = self:isShowRenqiRank()
    if isShowRenqi then
        local nodeRank = self["_nodeRank" .. rankIndex]
        rankIndex = rankIndex + 1
        if self._panelRenqi and nodeRank then
            self._panelRenqi:setVisible(true)
            self._panelRenqi:setPosition(cc.p(nodeRank:getPosition()))
        end
        self._rankList[TeaHouseRankView2.TAB_TYPE.RENQI] = TeaHouseRankView2.RANK_TYPE.FILTER
    else
        if self._panelRenqi then
            self._panelRenqi:setVisible(false)
        end
        self._rankList[TeaHouseRankView2.TAB_TYPE.RENQI] = TeaHouseRankView2.RANK_TYPE.CLOSE
    end

    -- 团队贡献榜
    local nodeRank = self["_nodeRank" .. rankIndex]
    rankIndex = rankIndex + 1
    if self._panelTeam and nodeRank then
        self._panelTeam:setVisible(true)
        self._panelTeam:setPosition(cc.p(nodeRank:getPosition()))
    end
    self._rankList[TeaHouseRankView2.TAB_TYPE.TEAM] = TeaHouseRankView2.RANK_TYPE.FILTER
    local tabType = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_RANK_LIST_TAB_TYPE_RECORD, TeaHouseRankView2.TAB_TYPE.COST)
    if tabType == TeaHouseRankView2.TAB_TYPE.TEAM then
        self._peakRaceMonth = 1
        self:flushMonthState(true)
    end
    self:setTabType(tabType, isForbidReq)
    self:initTabSV()
end

function TeaHouseRankView2:adaptUI()
    if not TeaHouse.UITool.isLiuHaiScreen() then
        return
    end
    if not self._panelRoot then
        return
    end
    local notchWidth = TeaHouse.UITool.getNotchWidth()
    local rootSize = self._panelRoot:getContentSize()
    self._panelRoot:setContentSize(cc.size(rootSize.width - notchWidth * 2, rootSize.height))
    ccui.Helper:doLayout(self._panelRoot)
    -- doLayout 会重算子节点布局，刘海机型需在这里重新校正一次
    self:initTabSV()
end

function TeaHouseRankView2:onEnter()
    self:initEvents()
    if self._bFirstEnter then
        TeaHouse.manager.teahouseRank:reqCurTime()
    end
    self._bFirstEnter = false
end

function TeaHouseRankView2:initEvents()
    local teahouseRank = TeaHouse.manager.teahouseRank
    self:createListener(teahouseRank)
    :addEventListener(teahouseRank.EVENT_COST_RANK_UPDATE, handler(self, self.onCostRankUpdate))
    :addEventListener(teahouseRank.EVENT_PLAY_COUNT_RANK_UPDATE, handler(self, self.onPlayCountRankUpdate))
    :addEventListener(teahouseRank.EVENT_BIG_WINNER_RANK_UPDATE, handler(self, self.onBigWinnerRankUpdate))
    :addEventListener(teahouseRank.EVENT_SCORE_RANK_UPDATE, handler(self, self.onScoreRankUpdate))
    :addEventListener(teahouseRank.EVENT_WIN_LOSE_RANK_UPDATE, handler(self, self.onWinLoseRankUpdate))
    :addEventListener(teahouseRank.EVENT_SELF_COST_RANK_UPDATE, handler(self, self.onSelfCostRankUpdate))
    :addEventListener(teahouseRank.EVENT_SELF_PLAY_COUNT_RANK_UPDATE, handler(self, self.onSelfPlayCountRankUpdate))
    :addEventListener(teahouseRank.EVENT_SELF_BIG_WINNER_RANK_UPDATE, handler(self, self.onSelfBigWinnerRankUpdate))
    :addEventListener(teahouseRank.EVENT_SELF_SCORE_RANK_UPDATE, handler(self, self.onSelfScoreRankUpdate))
    :addEventListener(teahouseRank.EVENT_RANK_VISIBLE_UPDATE, handler(self, self.onRankVisibleUpdate))
    :addEventListener(teahouseRank.EVENT_RANK_CUR_DATE_UPDATE, handler(self, self.onCurDateUpdate))

    local teahouseMain = TeaHouse.manager.teahouseMain
    self:createListener(teahouseMain)
    :addEventListener(teahouseMain.EVENT_RANK_VISIBLE_UPDATE, handler(self, self.onRankVisibleUpdate))
    :addEventListener(teahouseMain.EVENT_ON_UPDATE_CHOSE_RANK, handler(self, self.onChoseRankUpdate))
    :addEventListener(teahouseMain.EVENT_ON_UPDATE_CONTRIBUTE_RANK, handler(self, self.onChoseContributeRankUpdate))
    :addEventListener(teahouseMain.EVENT_ON_UPDATE_RECORD_RANK, handler(self, self.onRecordRankUpdate))

    local teahouseMember = TeaHouse.manager.teahouseMember
    self:createListener(teahouseMember)
    :addEventListener(teahouseMember.EVENT_POWER_UPDATE, handler(self, self.onRankVisibleUpdate))
    :addEventListener(teahouseMember.EVENT_ADMIN_RIGHT_UPDATE, handler(self, self.onRankVisibleUpdate))

    local finishBillClose = XH.lobby:getModule("FinishBillClose")
    self:createListener(finishBillClose)
    :addEventListener(finishBillClose.EVENT_RANK_LIKE_SUCCESS, handler(self, self.onRankLikeSuccess))
end

function TeaHouseRankView2:onRankLikeSuccess()
    self:reqRankInfo()
end

function TeaHouseRankView2:refreshTableView(isCleanup)
    if not self._panelListInfo then
        return
    end
    if self._tvInfoList ~= nil and isCleanup then
        self._tvInfoList:removeFromParent()
        self._tvInfoList = nil
    end
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

-- 只有月榜/团队贡献榜 有滚动
function TeaHouseRankView2:scrollViewDidScroll(view)
    if self._isReqNextPage then
        return
    end
    local isReqNext = false
    local offset = view:getContentOffset()
    local containerSize = view:getContainer():getContentSize()
    local viewSize = view:getViewSize()
    if self._tabType == TeaHouseRankView2.TAB_TYPE.PEAK_RACE or self._tabType == TeaHouseRankView2.TAB_TYPE.TEAM then
        isReqNext = true
    else
        if not TeaHouse.manager.configManager.SetupConfig.IsOpenRankDateOptional then
            if self._dayType == TeaHouseRankView2.DAY_TYPE.DAY30 or self._dayType == TeaHouseRankView2.DAY_TYPE.DAY60 then
                isReqNext = true
            end
        else
            if self._startDay == -1 or self._endDay == -2 then
                isReqNext = true
            end
        end
    end
    -- 20里的长度不处理请求
    local offSet = 20
    if isReqNext and self._curPage < self._maxPage and offset.y > offSet then
        self._isReqNextPage = true
        self._curPage = self._curPage + 1
        self:reqRankInfo()
    elseif isReqNext and offset.y < (viewSize.height - containerSize.height - offSet) and self._curPage > 1 then
        self._isReqNextPage = true
        self._curPage = self._curPage - 1
        self:reqRankInfo()
    end
end

function TeaHouseRankView2:onTableCellTouched(tableView, cell)

end

function TeaHouseRankView2:onCellSizeForTable(tableView, index)
    if self._panelListItem == nil then
        return 0, 0
    end
    local size = self._panelListItem:getContentSize()
    return size.width, size.height
end

function TeaHouseRankView2:onTableCellAtIndex(tableView, index)
    local cell = tableView:dequeueCell()
    if not cell then
        cell = cc.TableViewCell:new()
        local infoItem
        if self._tabType == TeaHouseRankView2.TAB_TYPE.WIN_LOSE and self._dayType ~= TeaHouseRankView2.DAY_TYPE.DAY30 and self._dayType ~= TeaHouseRankView2.DAY_TYPE.DAY60 and not TeaHouse.manager.configManager.SetupConfig.IsOpenRankDateOptional then
            infoItem = TeaHouse.manager.viewManager:createView("TeaHouseRankItem.TeaHouseRankListItem2")
        elseif self._tabType == TeaHouseRankView2.TAB_TYPE.WIN_LOSE and self._startDay >= 0 and self._endDay >= 0 and TeaHouse.manager.configManager.SetupConfig.IsOpenRankDateOptional then
            infoItem = TeaHouse.manager.viewManager:createView("TeaHouseRankItem.TeaHouseRankListItem2")
        elseif self._tabType == TeaHouseRankView2.TAB_TYPE.RENQI or (self._peakRaceType == TeaHouseRankView2.TAB_TYPE.RENQI and self._tabType == TeaHouseRankView2.TAB_TYPE.PEAK_RACE) then
            infoItem = TeaHouse.manager.viewManager:createView("TeaHouseRankItem.TeaHouseRankListItem3")
        else
            infoItem = TeaHouse.manager.viewManager:createView("TeaHouseRankItem.TeaHouseRankListItem")
        end
        if infoItem ~= nil then
            infoItem:setAnchorPoint(cc.p(0, 0))
            infoItem:setPosition(0, 0)
            infoItem:setName("InfoItem")
            if self._panelListItem then
                infoItem:setContentSize(self._panelListItem:getContentSize())
                ccui.Helper:doLayout(infoItem)
            end
            cell:addChild(infoItem)
        end
    end
    local infoItem = cell:getChildByName("InfoItem")
    if infoItem ~= nil then
        local rankType = self._rankList[self._tabType]
        local listItem3Renqi = self._tabType == TeaHouseRankView2.TAB_TYPE.RENQI
            or (self._peakRaceType == TeaHouseRankView2.TAB_TYPE.RENQI and self._tabType == TeaHouseRankView2.TAB_TYPE.PEAK_RACE)
        if self._tabType == TeaHouseRankView2.TAB_TYPE.WIN_LOSE and self._dayType ~= TeaHouseRankView2.DAY_TYPE.DAY30 and self._dayType ~= TeaHouseRankView2.DAY_TYPE.DAY60 and not TeaHouse.manager.configManager.SetupConfig.IsOpenRankDateOptional then
            infoItem:updateInfo(self._tabType, self._infoList[index + 1], index + 1)
        elseif self._tabType == TeaHouseRankView2.TAB_TYPE.WIN_LOSE and self._startDay >= 0 and self._endDay >= 0 and TeaHouse.manager.configManager.SetupConfig.IsOpenRankDateOptional then
            infoItem:updateInfo(self._tabType, self._infoList[index + 1], index + 1)
        else
            if self._infoList[index + 1].bChangeScore == nil then
                self._infoList[index + 1].nScore = self:changeCostCard(self._tabType, self._infoList[index + 1].nScore)
                self._infoList[index + 1].bChangeScore = true
            end
            if rankType == TeaHouseRankView2.RANK_TYPE.FILTER then
                if listItem3Renqi then
                    infoItem:updateInfoEx(self._tabType, self._infoList[index + 1], self._likeUserIds, self:isRenqiRankLikeButtonVisible())
                else
                    infoItem:updateInfoEx(self._tabType, self._infoList[index + 1], self._likeUserIds)
                end
            else
                if listItem3Renqi then
                    infoItem:updateInfo(self._tabType, self._infoList[index + 1], nil, self:isRenqiRankLikeButtonVisible())
                else
                    infoItem:updateInfo(self._tabType, self._infoList[index + 1])
                end
            end
        end
    end
    return cell
end

function TeaHouseRankView2:onNumberOfCellsInTableView(tableView)
    return #self._infoList
end

function TeaHouseRankView2:onCloseClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:close()
end

function TeaHouseRankView2:onCost1Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setTabType(TeaHouseRankView2.TAB_TYPE.COST)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_63)
end

function TeaHouseRankView2:onCost2Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_63)
end

function TeaHouseRankView2:onPlayCount1Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setTabType(TeaHouseRankView2.TAB_TYPE.PLAY_COUNT)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_64)
end

function TeaHouseRankView2:onPlayCount2Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_64)
end

function TeaHouseRankView2:onBigWinner1Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setTabType(TeaHouseRankView2.TAB_TYPE.BIG_WINNER)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_65)
end

function TeaHouseRankView2:onBigWinner2Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_65)
end

function TeaHouseRankView2:onScore1Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setTabType(TeaHouseRankView2.TAB_TYPE.SCORE)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_66)
end

function TeaHouseRankView2:onScore2Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_66)
end

function TeaHouseRankView2:onWinLose1Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setTabType(TeaHouseRankView2.TAB_TYPE.WIN_LOSE)
end

function TeaHouseRankView2:onWinLose2Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
end

function TeaHouseRankView2:onWinRate1Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setTabType(TeaHouseRankView2.TAB_TYPE.WIN_RATE)
end

function TeaHouseRankView2:onWinRate2Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
end

function TeaHouseRankView2:onTeam1Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self._peakRaceMonth = 1
    self:flushMonthState(true)
    self:setTabType(TeaHouseRankView2.TAB_TYPE.TEAM)
end

function TeaHouseRankView2:onTeam2Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
end

function TeaHouseRankView2:onRenqi1Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self._peakRaceMonth = 1
    self:flushMonthState(true)
    self:setTabType(TeaHouseRankView2.TAB_TYPE.RENQI)
end

function TeaHouseRankView2:onRenqi2Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
end

function TeaHouseRankView2:onPeakRace1Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self._peakRaceMonth = 1
    self._startDay = -1
    self._endDay = -1
    self._textStartSearchDay:setString(self:getCurMonth() .. "月排行榜")
    self._textEndSearchDay:setString(self:getCurMonth() .. "月排行榜")
    self:setDayType(TeaHouseRankView2.DAY_TYPE.DAY30, true)
    self:setTabType(TeaHouseRankView2.TAB_TYPE.PEAK_RACE)
end

function TeaHouseRankView2:onPeakRace2Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
end

function TeaHouseRankView2:onDay11Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setDayType(TeaHouseRankView2.DAY_TYPE.DAY1)
end

function TeaHouseRankView2:onDay12Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
end

function TeaHouseRankView2:onDay21Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setDayType(TeaHouseRankView2.DAY_TYPE.DAY2)
end

function TeaHouseRankView2:onDay22Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
end

function TeaHouseRankView2:onDay71Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setDayType(TeaHouseRankView2.DAY_TYPE.DAY7)
end

function TeaHouseRankView2:onDay72Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
end

function TeaHouseRankView2:onDay301Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setDayType(TeaHouseRankView2.DAY_TYPE.DAY30)
end

function TeaHouseRankView2:onDay302Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
end

function TeaHouseRankView2:onDay601Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setDayType(TeaHouseRankView2.DAY_TYPE.DAY60)
end

function TeaHouseRankView2:onDay602Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
end

-- 团队贡献榜本月
function TeaHouseRankView2:onCurMonth1Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self._peakRaceMonth = 1
    self._curPage = 1
    self:flushMonthState(true)
    self:reqRankInfo()
end

function TeaHouseRankView2:onCurMonth2Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
end

-- 团队贡献榜上月
function TeaHouseRankView2:onLastMonth1Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self._peakRaceMonth = 2
    self._curPage = 1
    self:flushMonthState(false)
    self:reqRankInfo()
end

function TeaHouseRankView2:onLastMonth2Clicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
end

function TeaHouseRankView2:setTabType(tabType, isForbidReq)
    local rankCount = #self._rankList
    if rankCount < 1 then
        return
    end
    for i = 1, rankCount do
        if self._rankList[tabType] ~= TeaHouseRankView2.RANK_TYPE.CLOSE then
            break
        else
            tabType = tabType + 1
            if tabType > rankCount then
                tabType = tabType % rankCount
            end
        end
    end
    if self._rankList[tabType] == TeaHouseRankView2.RANK_TYPE.CLOSE then
        return
    end
    if self._tabType == tabType then
        return
    end

    for i = 1, #self._tabNodes do
        if i == self._tabType then
            self._tabNodes[i][1]:setVisible(true)
            self._tabNodes[i][2]:setVisible(false)
            break
        end
    end
    self._tabType = tabType
    self._curPage = 1
    self._KW_TEXT_RANK_TIP_WINRATE:setVisible(self._tabType == TeaHouseRankView2.TAB_TYPE.WIN_RATE)
    if self._tabType == TeaHouseRankView2.TAB_TYPE.PEAK_RACE then
        XH.lobby:getModule("PeakRace"):reqGetChooseRank(MatchContributeConfig.ChooseRankOpt.CHOOSE_RANK_OPT_GET, TeaHouse.manager.teahouseData:getTeaNumber())
    end
    self._KW_TEXT_RANK_TIME:setVisible(self._tabType ~= TeaHouseRankView2.TAB_TYPE.TEAM and self._tabType ~= TeaHouseRankView2.TAB_TYPE.PEAK_RACE)
    self:flushTopChose()
    self:flushUIShow()
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_RANK_LIST_TAB_TYPE_RECORD, self._tabType)
    for i = 1, #self._tabNodes do
        if i == self._tabType then
            self._tabNodes[i][1]:setVisible(false)
            self._tabNodes[i][2]:setVisible(true)
            break
        end
    end

    -- if self._panelGameList then
    --     self._panelGameList:setVisible(self._rankList[tabType] == TeaHouseRankView2.RANK_TYPE.FILTER)
    -- end

    self:setGameListState(false)
    self:flushRightText()
    if not isForbidReq then
        self:reqRankInfo()
    end
end

function TeaHouseRankView2:flushRightText(tabType)
    local titleIndex = 1
    local curTabType = self._tabType
    if tabType ~= nil then
        curTabType = tabType
    end
    if curTabType == TeaHouseRankView2.TAB_TYPE.TEAM then
        if self._textRankDesc then
            self._textRankDesc:setString("团队贡献")
        end
        if self._textSelfDescTip then
            self._textSelfDescTip:setString("我的贡献:")
            ccui.Helper:doLayout(self._textSelfDescTip)
        end
    elseif curTabType == TeaHouseRankView2.TAB_TYPE.RENQI then
        titleIndex = 3
        if self._textRankDesc then
            self._textRankDesc:setString("人气值")
        end
        if self._textSelfDescTip then
            self._textSelfDescTip:setString("我的人气值:")
            ccui.Helper:doLayout(self._textSelfDescTip)
        end
    elseif curTabType == TeaHouseRankView2.TAB_TYPE.WIN_RATE then
        if self._textRankDesc then
            self._textRankDesc:setString("胜 率")
        end
        if self._textSelfDescTip then
            self._textSelfDescTip:setString("我的胜率:")
            ccui.Helper:doLayout(self._textSelfDescTip)
        end
    elseif curTabType == TeaHouseRankView2.TAB_TYPE.COST then
        if self._textRankDesc then
            self._textRankDesc:setString("消 耗")
        end
        if self._textSelfDescTip then
            self._textSelfDescTip:setString("我的消耗:")
            ccui.Helper:doLayout(self._textSelfDescTip)
        end
    elseif curTabType == TeaHouseRankView2.TAB_TYPE.PLAY_COUNT then
        if self._textRankDesc then
            self._textRankDesc:setString("局 数")
        end
        if self._textSelfDescTip then
            self._textSelfDescTip:setString("我的局数:")
            ccui.Helper:doLayout(self._textSelfDescTip)
        end
    elseif curTabType == TeaHouseRankView2.TAB_TYPE.BIG_WINNER then
        if self._textRankDesc then
            self._textRankDesc:setString("冠军数")
        end
        if self._textSelfDescTip then
            self._textSelfDescTip:setString("我的冠军数:")
            ccui.Helper:doLayout(self._textSelfDescTip)
        end
    elseif curTabType == TeaHouseRankView2.TAB_TYPE.SCORE then
        if self._textRankDesc then
            self._textRankDesc:setString("优胜值")
        end
        if self._textSelfDescTip then
            self._textSelfDescTip:setString("我的优胜值:")
            ccui.Helper:doLayout(self._textSelfDescTip)
        end
    elseif curTabType == TeaHouseRankView2.TAB_TYPE.WIN_LOSE then
        titleIndex = 2
        local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
        if not TeaHouse.manager.configManager.SetupConfig.IsOpenRankDateOptional then
            if self._dayType ~= TeaHouseRankView2.DAY_TYPE.DAY30 and self._dayType ~= TeaHouseRankView2.DAY_TYPE.DAY60 then
                if SwitchConfig and SwitchConfig.ScoreRankWithAll == 1 then
                    self:setWinLoseTypeName({ "优胜值", "局 数", "冠军" })
                else
                    self:setWinLoseTypeName({ "优胜值", "总胜分", "总负分" })
                end
            else
                self:setWinLoseTypeName({ "             优胜值", "", "最后游戏时间" })
            end
        else
            if self._startDay >= 0 or self._endDay >= 0 then
                if SwitchConfig and SwitchConfig.ScoreRankWithAll == 1 then
                    self:setWinLoseTypeName({ "优胜值", "局 数", "冠军" })
                else
                    self:setWinLoseTypeName({ "优胜值", "总胜分", "总负分" })
                end
            else
                self:setWinLoseTypeName({ "             优胜值", "", "最后游戏时间" })
            end
        end
        if self._textSelfDescTip then
            self._textSelfDescTip:setString("我的优胜值:")
            ccui.Helper:doLayout(self._textSelfDescTip)
        end
    end
    if self._panelListTitle then
        self._panelListTitle:setVisible(titleIndex == 1)
    end
    if self._panelListTitle2 then
        self._panelListTitle2:setVisible(titleIndex == 2)
    end
    if self._panelListTitle3 then
        self._panelListTitle3:setVisible(titleIndex == 3)
    end
end

function TeaHouseRankView2:setDayType(dayType, isForbidReq)
    if self._dayType == dayType then
        return
    end

    for i = 1, #self._dayNodes do
        if i == self._dayType then
            self._dayNodes[i][1]:setVisible(true)
            self._dayNodes[i][2]:setVisible(false)
            break
        end
    end
    self._dayType = dayType
    self._curPage = 1
    self:flushRightText()
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_RANK_LIST_DAY_TYPE_RECORD, self._dayType)
    for i = 1, #self._dayNodes do
        if i == self._dayType then
            self._dayNodes[i][1]:setVisible(false)
            self._dayNodes[i][2]:setVisible(true)
            break
        end
    end
    self._KW_TEXT_RANK_TIP:setString("榜单每1小时更新一次")
    if not TeaHouse.manager.configManager.SetupConfig.IsOpenRankDateOptional then
        if self._dayType == TeaHouseRankView2.DAY_TYPE.DAY30 then
            self._KW_TEXT_RANK_TIP:setString("榜单每1天更新一次")
        elseif self._dayType == TeaHouseRankView2.DAY_TYPE.DAY60 then
            self._KW_TEXT_RANK_TIP:setString("榜单每1天更新一次")
        end
    else
        if self._startDay == -1 then
            self._KW_TEXT_RANK_TIP:setString("榜单每1天更新一次")
        elseif self._startDay == -2 then
            self._KW_TEXT_RANK_TIP:setString("榜单每1天更新一次")
        end
    end
    if not isForbidReq then
        self:reqRankInfo()
    end
end

--- 人气榜点赞仅在与「今日」榜单数据一致时展示（非今日/区间/月榜隐藏）
function TeaHouseRankView2:isRenqiRankLikeButtonVisible()
    if TeaHouse.manager.configManager.SetupConfig.IsOpenRankDateOptional then
        return self._startDay == 0 and self._endDay == 0
    end
    return self._dayType == TeaHouseRankView2.DAY_TYPE.DAY1
end

function TeaHouseRankView2:reqRankInfo(inRankType, inGameID, inTime)
    if self._tabType == nil then
        return
    end

    local reqRankType = self._tabType
    -- 巅峰赛选拔界面的请求 todo
    if inRankType ~= nil then
        reqRankType = inRankType
        self._reqRankType = inRankType
    end
    local reqGameID = self._gameID
    if inGameID ~= nil then
        reqGameID = inGameID
    end
    -- 队员人气榜不做游戏筛选，固定按全部游戏请求
    if reqRankType == TeaHouseRankView2.TAB_TYPE.RENQI then
        reqGameID = 0
    end
    local startDay = 0
    local endDay = 0
    if reqRankType == TeaHouseRankView2.TAB_TYPE.WIN_LOSE then
        self:flushRightText()
    end
    if not TeaHouse.manager.configManager.SetupConfig.IsOpenRankDateOptional then
        if self._dayType == TeaHouseRankView2.DAY_TYPE.DAY2 then
            startDay = 1
            endDay = 1
        elseif self._dayType == TeaHouseRankView2.DAY_TYPE.DAY7 then
            startDay = 0
            endDay = 6
        elseif self._dayType == TeaHouseRankView2.DAY_TYPE.DAY30 and reqRankType ~= TeaHouseRankView2.TAB_TYPE.TEAM then
            self:reqMonthRank(reqRankType, reqGameID, true)
            return
        elseif self._dayType == TeaHouseRankView2.DAY_TYPE.DAY60 and reqRankType ~= TeaHouseRankView2.TAB_TYPE.TEAM then
            self:reqMonthRank(reqRankType, reqGameID, false)
            return
        end
    else
        startDay = self._startDay
        endDay = self._endDay
        if startDay == -1 and reqRankType ~= TeaHouseRankView2.TAB_TYPE.TEAM then
            self:reqMonthRank(reqRankType, reqGameID, true)
            return
        elseif startDay == -2 and reqRankType ~= TeaHouseRankView2.TAB_TYPE.TEAM then
            self:reqMonthRank(reqRankType, reqGameID, false)
            return
        end
    end
    local rankType = self._rankList[reqRankType]
    local teahouseRank = TeaHouse.manager.teahouseRank
    if reqRankType == TeaHouseRankView2.TAB_TYPE.COST then
        if rankType == TeaHouseRankView2.RANK_TYPE.FILTER then
            teahouseRank:reqCostRankEx(startDay, endDay, reqGameID)
        else
            teahouseRank:reqCostRank(startDay, endDay)
            teahouseRank:reqSelfCostRank(startDay, endDay)
        end
    elseif reqRankType == TeaHouseRankView2.TAB_TYPE.PLAY_COUNT then
        if rankType == TeaHouseRankView2.RANK_TYPE.FILTER then
            teahouseRank:reqPlayCountRankEx(startDay, endDay, reqGameID)
        else
            teahouseRank:reqPlayCountRank(startDay, endDay)
            teahouseRank:reqSelfPlayCountRank(startDay, endDay)
        end
    elseif reqRankType == TeaHouseRankView2.TAB_TYPE.BIG_WINNER then
        if rankType == TeaHouseRankView2.RANK_TYPE.FILTER then
            teahouseRank:reqBigWinnerRankEx(startDay, endDay, reqGameID)
        else
            teahouseRank:reqBigWinnerRank(startDay, endDay)
            teahouseRank:reqSelfBigWinnerRank(startDay, endDay)
        end
    elseif reqRankType == TeaHouseRankView2.TAB_TYPE.SCORE then
        if rankType == TeaHouseRankView2.RANK_TYPE.FILTER then
            teahouseRank:reqScoreRankEx(startDay, endDay, reqGameID)
        else
            teahouseRank:reqScoreRank(startDay, endDay)
            teahouseRank:reqSelfScoreRank(startDay, endDay)
        end
    elseif reqRankType == TeaHouseRankView2.TAB_TYPE.WIN_LOSE then
        if rankType == TeaHouseRankView2.RANK_TYPE.FILTER then
            teahouseRank:reqWinLoseRank(startDay, endDay, reqGameID)
        else
            teahouseRank:reqWinLoseRank(startDay, endDay)
        end
    elseif reqRankType == TeaHouseRankView2.TAB_TYPE.TEAM then
        self:reqMonthRank(reqRankType, nil, self._peakRaceMonth == 1)
    elseif reqRankType == TeaHouseRankView2.TAB_TYPE.WIN_RATE or reqRankType == TeaHouseRankView2.TAB_TYPE.RENQI then
        local startTime = os.time { year = os.date("%Y"), month = os.date("%m"), day = os.date("%d"), hour = 0, min = 0, sec = 0 }
        local endTime = os.time { year = os.date("%Y"), month = os.date("%m"), day = os.date("%d"), hour = 23, min = 59, sec = 59 }
        XH.lobby:getModule("PeakRace"):getRecordRankList(startTime - endDay * 86400, endTime - startDay * 86400, MatchContributeConfig.TRANSFER_50_RANK[reqRankType], self._curPage, self._pageSize, reqGameID, TeaHouse.manager.teahouseData:getTeaNumber())
    end
end

function TeaHouseRankView2:onCostRankUpdate(event)
    if self._tabType ~= TeaHouseRankView2.TAB_TYPE.COST then
        return
    end

    self._infoList = event.msg.info
    self:updateSelfRank()
    self:refreshTableView(true)
end

function TeaHouseRankView2:onPlayCountRankUpdate(event)
    if self._tabType ~= TeaHouseRankView2.TAB_TYPE.PLAY_COUNT then
        return
    end

    self._infoList = event.msg.info
    self:updateSelfRank()
    self:refreshTableView(true)
end

function TeaHouseRankView2:onBigWinnerRankUpdate(event)
    if self._tabType ~= TeaHouseRankView2.TAB_TYPE.BIG_WINNER then
        return
    end

    self._infoList = event.msg.info
    self:updateSelfRank()
    self:refreshTableView(true)
end

function TeaHouseRankView2:onScoreRankUpdate(event)
    if self._tabType ~= TeaHouseRankView2.TAB_TYPE.SCORE then
        return
    end

    self._infoList = event.msg.info
    self:updateSelfRank()
    self:refreshTableView(true)
end

function TeaHouseRankView2:onWinLoseRankUpdate(event)
    if self._tabType ~= TeaHouseRankView2.TAB_TYPE.WIN_LOSE then
        return
    end

    self._infoList = event.msg.info
    table.sort(self._infoList, function(info1, info2)
        return info1.totalScore > info2.totalScore
    end)
    self:updateSelfRank()
    self:refreshTableView(true)
end

function TeaHouseRankView2:onSelfCostRankUpdate(event)
    if self._tabType ~= TeaHouseRankView2.TAB_TYPE.COST then
        return
    end
    if self._textSelfDesc then
        self._textSelfDesc:setString(tostring(self:changeCostCard(self._tabType, event.msg.info.nScore)))
    end
end

function TeaHouseRankView2:onSelfPlayCountRankUpdate(event)
    if self._tabType ~= TeaHouseRankView2.TAB_TYPE.PLAY_COUNT then
        return
    end
    if self._textSelfDesc then
        self._textSelfDesc:setString(tostring(event.msg.info.nScore))
    end
end

function TeaHouseRankView2:onSelfBigWinnerRankUpdate(event)
    if self._tabType ~= TeaHouseRankView2.TAB_TYPE.BIG_WINNER then
        return
    end
    if self._textSelfDesc then
        self._textSelfDesc:setString(tostring(event.msg.info.nScore))
    end
end

function TeaHouseRankView2:onSelfScoreRankUpdate(event)
    if self._tabType ~= TeaHouseRankView2.TAB_TYPE.SCORE then
        return
    end
    if self._textSelfDesc then
        self._textSelfDesc:setString(tostring(event.msg.info.nScore))
    end
end

function TeaHouseRankView2:onRankVisibleUpdate(event)
    self:updateTab()
end

function TeaHouseRankView2:updateSelfRank()
    if not self._textSelfRank then
        return
    end

    if self._tabType == TeaHouseRankView2.TAB_TYPE.WIN_LOSE then
        for index, info in ipairs(self._infoList) do
            if info.numid == TeaHouse.BridgeData.getNumberID() then
                self._textSelfRank:setString(tostring(index))
                self._textSelfDesc:setString(tostring(info.totalScore))
                return
            end
        end
        self._textSelfRank:setString("未上榜")
        self._textSelfDesc:setString("0")
    else
        local rankType = self._rankList[self._tabType]
        if rankType == TeaHouseRankView2.RANK_TYPE.FILTER then
            for _, info in ipairs(self._infoList) do
                if info.stUser.nNumId == TeaHouse.BridgeData.getNumberID() then
                    self._textSelfRank:setString(tostring(info.nRank))
                    self._textSelfDesc:setString(tostring(self:changeCostCard(self._tabType, info.nScore)))
                    return
                end
            end
            self._textSelfRank:setString("未上榜")
            self._textSelfDesc:setString("0")
        else
            for _, info in pairs(self._infoList) do
                if info.stUserInfo and info.stUserInfo.numid == TeaHouse.BridgeData.getNumberID() then
                    self._textSelfRank:setString(tostring(info.nRank))
                    return
                end
            end
            self._textSelfRank:setString("未上榜")
        end
    end
end

function TeaHouseRankView2:setGameListState(isShow)
    if self._imgGameListBg then
        self._imgGameListBg:setVisible(isShow)
    end
    if self._btnHideGameList then
        self._btnHideGameList:setVisible(isShow)
    end
    if self._btnShowGameList then
        self._btnShowGameList:setVisible(not isShow)
    end
    if self._panelGameListMask then
        if isShow and self._panelRoot and self._panelGameList then
            local rootPosition = self._panelRoot:convertToWorldSpace(cc.p(0, 0))
            rootPosition = self._panelGameList:convertToNodeSpace(rootPosition)
            self._panelGameListMask:setPosition(rootPosition)
            self._panelGameListMask:setContentSize(self._panelRoot:getContentSize())
        end
        self._panelGameListMask:setVisible(isShow)
    end
end

function TeaHouseRankView2:initGameList()
    if not self._svGameList or not self._btnGame then
        return
    end
    local gameList = TeaHouse.BridgeData.getTeaHouseRoomGameList()
    local gameNameList = TeaHouse.BridgeData.getGameNameList()
    if gameList and gameNameList then
        self._gameListSize = self._svGameList:getContentSize()
        self._gameItemSize = self._btnGame:getContentSize()
        local listHeight = self._gameItemSize.height * (#gameList + 1) + 30
        if listHeight < self._gameListSize.height then
            listHeight = self._gameListSize.height
            self._svGameList:setInnerContainerSize(self._gameListSize)
        elseif listHeight > self._gameListSize.height then
            self._svGameList:setInnerContainerSize(cc.size(self._gameListSize.width, listHeight))
        end
        self._gameItemOffset = cc.p(self._gameItemSize.width / 2, listHeight - self._gameItemSize.height / 2)
        self:addGameItem(0, "所有游戏")
        self:setGame(0, "所有游戏")
        for _, gameID in ipairs(gameList) do
            self:addGameItem(gameID, gameNameList[gameID])
        end
    end
end

function TeaHouseRankView2:addGameItem(gameID, gameName)
    if not gameID or not gameName then
        return
    end
    if not self._svGameList or not self._btnGame then
        return
    end
    local btnGame = self._btnGame:clone()
    btnGame:setVisible(true)
    btnGame:setPosition(self._gameItemOffset)
    self._gameItemOffset.y = self._gameItemOffset.y - self._gameItemSize.height
    btnGame:addTouchEventListener(function(send, eventType)
        TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
        if eventType ~= ccui.TouchEventType.ended then
            return
        end
        self:setGame(gameID, gameName)
        self:setGameListState(false)
    end)
    local textGame = btnGame:getChildByName("_KW_TEXT_GAME")
    if textGame then
        textGame:setString(gameName)
    end
    self._svGameList:addChild(btnGame)
end

function TeaHouseRankView2:setGame(gameID, gameName)
    if self._textGameSelect then
        self._textGameSelect:setString(gameName)
        self._textGameSelect:setFontSize(KW_MAX_NAME_FONT_SIZE)
        TeaHouse.UITool.adaptTextToWidth(self._textGameSelect, KW_MAX_NAME_WIDTH, KW_MAX_NAME_FONT_SIZE, KW_MIN_NAME_FONT_SIZE)
    end
    if self._gameID ~= gameID then
        self._gameID = gameID
        self._curPage = 1
        self:reqRankInfo()
    end
end

function TeaHouseRankView2:onHideGameListClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setGameListState(false)
end

function TeaHouseRankView2:onShowGameListClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:setGameListState(true)
end

function TeaHouseRankView2:onPeakTipClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    XH.viewManager:openView("MatchRankTipView")
end

function TeaHouseRankView2:onRankSettingClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.manager.viewManager:openView("TeaHouseRankItem.TeaHouseRankSetting")
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_56)
end

function TeaHouseRankView2:onCurDateUpdate(event)
    local date = event.msg.nTime
    self:initDate(date)
    self._textStartSearchDay:setString(os.date("%Y-%m-%d", date))
    self._textEndSearchDay:setString(os.date("%Y-%m-%d", date))
end

function TeaHouseRankView2:initDate(date)
    local nCurTime = date
    -- 除去本月上月
    for i = 1, KW_SHOW_BILL_DAY do
        local startBtnFilter = ccui.Helper:seekWidgetByName(self._panelStartDate, "_KW_DATE_INFO_" .. i)
        if startBtnFilter then
            startBtnFilter:addTouchEventListener(function(send, eventType)
                self:onTouchEventChangeDate(send, eventType, i)
            end)
            if i == 8 then
                startBtnFilter:setTitleText(self:getCurMonth() .. "月排行榜")
            elseif i == 9 then
                startBtnFilter:setTitleText(self:getLastMonth() .. "月排行榜")
            else
                startBtnFilter:setTitleText(os.date("%Y-%m-%d", nCurTime - 86400 * (KW_SHOW_BILL_DAY - i - 2)))
            end
            startBtnFilter:setTag(KW_SHOW_BILL_DAY - i - 2)
        end

        local endBtnFilter = ccui.Helper:seekWidgetByName(self._panelEndDate, "_KW_DATE_INFO_" .. i)
        if endBtnFilter then
            endBtnFilter:addTouchEventListener(function(send, eventType)
                self:onTouchEventChangeDate(send, eventType, i)
            end)
            if i == 8 then
                endBtnFilter:setTitleText(self:getCurMonth() .. "月排行榜")
            elseif i == 9 then
                endBtnFilter:setTitleText(self:getLastMonth() .. "月排行榜")
            else
                endBtnFilter:setTitleText(os.date("%Y-%m-%d", nCurTime - 86400 * (KW_SHOW_BILL_DAY - i - 2)))
            end
            endBtnFilter:setTag(KW_SHOW_BILL_DAY - i - 2)
        end
    end
    self._changeStartDate:addEventListener(handler(self, self.onTouchEventChangeBWCOSTDate))
    self._changeEndDate:addEventListener(handler(self, self.onTouchEventChangeBWCOSTDate))
end

function TeaHouseRankView2:getCurMonth()
    return os.date("%m", os.time())
end

function TeaHouseRankView2:getLastMonth()
    local cur = os.date("%m", os.time())
    return cur - 1 == 0 and 12 or cur - 1
end

function TeaHouseRankView2:onTouchEventChangeBWCOSTDate(send, eventType)
    local bShow = eventType == ccui.CheckBoxEventType.selected

    -- 根据复选框选中状态判定是开始日期还是结束日期
    if send == self._changeStartDate then
        self._startFilterBg:setVisible(bShow)
        self._endFilterBg:setVisible(false)
        self._changeStartDate:setSelected(bShow)
        self._changeEndDate:setSelected(false)
    elseif send == self._changeEndDate then
        self._endFilterBg:setVisible(bShow)
        self._startFilterBg:setVisible(false)
        self._changeStartDate:setSelected(false)
        self._changeEndDate:setSelected(bShow)
    end
end

function TeaHouseRankView2:onTouchEventChangeDate(send, eventType, index)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local curBillDate = send:getTitleText()
    if send:getParent() == self._startFilterBg then
        self:onTouchEventChangeBWCOSTDate(self._changeStartDate, ccui.CheckBoxEventType.unselected)
        self._textStartSearchDay:setString(curBillDate)
        self._endDay = send:getTag()
    else
        self:onTouchEventChangeBWCOSTDate(self._changeEndDate, ccui.CheckBoxEventType.unselected)
        self._textEndSearchDay:setString(curBillDate)
        self._startDay = send:getTag()
    end
    -- 当选择的是本月/上月的时候，两边同步变更
    if send:getTag() < 0 then
        self._textStartSearchDay:setString(curBillDate)
        self._endDay = send:getTag()
        self._textEndSearchDay:setString(curBillDate)
        self._startDay = send:getTag()
    end
    self:flushDayTipText()
end

function TeaHouseRankView2:flushDayTipText()
    if TeaHouse.manager.configManager.SetupConfig.IsOpenRankDateOptional then
        self._KW_TEXT_RANK_TIP:setString("榜单每1小时更新一次")
        if self._startDay < 0 and self._endDay < 0 then
            self._KW_TEXT_RANK_TIP:setString("榜单每1天更新一次")
        end
    end
end

function TeaHouseRankView2:onSearchClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if (self._endDay < 0 or self._startDay < 0) and self._endDay ~= self._startDay then
        TeaHouse.TipTool.showToast("日期错误")
        return
    end
    if self._startDay > self._endDay then
        TeaHouse.TipTool.showToast("日期错误")
        return
    end
    self._curPage = 1
    self:reqRankInfo()
end

function TeaHouseRankView2:onTeamMyClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    XH.viewManager:openView("MatchContributeView", nil, TeaHouse.manager.teahouseData:getTeaNumber())
end

function TeaHouseRankView2:onTeamRuleClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    XH.viewManager:openView("MatchContributeRuleView")
end

-- 设置胜负分排行榜显示内容
function TeaHouseRankView2:setWinLoseTypeName(tValueType)
    if self._textRankDesc21 and tValueType[1] then
        self._textRankDesc21:setString(tValueType[1])
    end
    if self._textRankDesc22 and tValueType[2] then
        self._textRankDesc22:setString(tValueType[2])
    end
    if self._textRankDesc23 and tValueType[3] then
        self._textRankDesc23:setString(tValueType[3])
    end
end

--人人比赛场地区有小卡的,房间配置都是小卡,显示需要转成大卡
function TeaHouseRankView2:changeCostCard(tabType, num)
    if self._tabType == TeaHouseRankView2.TAB_TYPE.PEAK_RACE then
        tabType = self._reqRankType
    end
    if TeaHouse.LOBBY_ID.SHAOXING3D == TeaHouse.BridgeData.getLobbyID() then
        return num
    end
    if tabType == TeaHouseRankView2.TAB_TYPE.COST and TeaHouse.BridgeData.isRemodelArea() and num
    and not (TeaHouse.LOBBY_ID.WENZHOU == TeaHouse.BridgeData.getLobbyID()) then--温茶配了小卡但是没用，得加特判
        num = tonumber(num) / (TeaHouse.BridgeData.getSmallRoomCardRatio() or 1)
    end
    return num
end

-- 初始化巅峰赛选择
function TeaHouseRankView2:initPeakRaceUI()
    -- 巅峰赛榜单
    self._showPeakRaceList = {
        ["比赛胜率榜"] = TeaHouseRankView2.TAB_TYPE.WIN_RATE,
        ["比赛积分榜"] = TeaHouseRankView2.TAB_TYPE.SCORE, -- WIN_LOSE 也是积分
        ["比赛冠军榜"] = TeaHouseRankView2.TAB_TYPE.BIG_WINNER,
        ["比赛活跃榜"] = TeaHouseRankView2.TAB_TYPE.PLAY_COUNT,
    }
    local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
    if SwitchConfig then
        if SwitchConfig.CostRank ~= 0 then
            self._showPeakRaceList["比赛消耗榜"] = TeaHouseRankView2.TAB_TYPE.COST
        end
    end
    local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
    if SwitchConfig and SwitchConfig.WinLoseRank ~= 0 then
        self._showPeakRaceList["比赛积分榜"] = TeaHouseRankView2.TAB_TYPE.WIN_LOSE
    end
    local peakItems = {}
    local totalItemCnt = 0
    local function addPeakRaceItem(idx, name, type)
        local startBtnFilter = ccui.Helper:seekWidgetByName(self._KW_PANEL_PEAK_RACE_A, "_KW_DATE_INFO_" .. idx)
        if startBtnFilter then
            startBtnFilter:addTouchEventListener(function(send, eventType)
                self:onTouchEventChangePeakRace(send, eventType, idx)
            end)
            startBtnFilter:setTitleText(name)
            startBtnFilter:setTag(type)
            startBtnFilter:setVisible(true)
            peakItems[idx] = startBtnFilter
        end
    end
    for k, v in pairs(self._showPeakRaceList) do
        totalItemCnt = totalItemCnt + 1
        addPeakRaceItem(totalItemCnt, k, v)
    end
    --确保人气榜在最下面
    if self:isShowRenqiRank() then
        self._showPeakRaceList["队友人气榜"] = TeaHouseRankView2.TAB_TYPE.RENQI
        totalItemCnt = totalItemCnt + 1
        addPeakRaceItem(totalItemCnt, "队友人气榜", TeaHouseRankView2.TAB_TYPE.RENQI)
    end
    self._KW_PANEL_PEAK_RACE_A_BG:setContentSize(340, 30 + totalItemCnt * 80)
    if peakItems[#peakItems] then
        XH.UITool.setVisible(peakItems[#peakItems], "KW_IMG_LINE", false)
    end
    if #peakItems < 6 then
        for i,v in ipairs(peakItems) do
            v:setPositionY(totalItemCnt * 80 - 30 - (i - 1) * 80)
        end
    end
    for j = 1, 2 do
        local startBtnFilter = ccui.Helper:seekWidgetByName(self._KW_PANEL_PEAK_RACE_C, "_KW_DATE_INFO_" .. j)
        if startBtnFilter then
            startBtnFilter:addTouchEventListener(function(send, eventType)
                self:onTouchEventChangePeakRace(send, eventType, j)
            end)
            if j == 1 then
                startBtnFilter:setTitleText(self:getCurMonth() .. "月排行榜")
            else
                startBtnFilter:setTitleText(self:getLastMonth() .. "月排行榜")
            end
            startBtnFilter:setTag(j)
        end
    end
    self:initPeakRaceGameList()
    self:flushPeakLabelText()
    self._KW_CHECK_PEAK_RACE_A:addEventListener(handler(self, self.onTouchEventChangePeakRaceState))
    self._KW_CHECK_PEAK_RACE_B:addEventListener(handler(self, self.onTouchEventChangePeakRaceState))
    self._KW_CHECK_PEAK_RACE_C:addEventListener(handler(self, self.onTouchEventChangePeakRaceState))
end

function TeaHouseRankView2:onTouchEventChangePeakRaceState(send, eventType)
    local bShow = eventType == ccui.CheckBoxEventType.selected
    -- 根据复选框选中状态判定是开始日期还是结束日期
    self._KW_CHECK_PEAK_RACE_A:setSelected(false)
    self._KW_CHECK_PEAK_RACE_B:setSelected(false)
    self._KW_CHECK_PEAK_RACE_C:setSelected(false)
    self._KW_PANEL_PEAK_RACE_A_BG:setVisible(false)
    self._KW_PANEL_PEAK_RACE_B_BG:setVisible(false)
    self._KW_PANEL_PEAK_RACE_C_BG:setVisible(false)
    if send == self._KW_CHECK_PEAK_RACE_A then
        self._KW_PANEL_PEAK_RACE_A_BG:setVisible(bShow)
        self._KW_CHECK_PEAK_RACE_A:setSelected(bShow)
    elseif send == self._KW_CHECK_PEAK_RACE_B then
        self._KW_PANEL_PEAK_RACE_B_BG:setVisible(bShow)
        self._KW_CHECK_PEAK_RACE_B:setSelected(bShow)
    elseif send == self._KW_CHECK_PEAK_RACE_C then
        self._KW_PANEL_PEAK_RACE_C_BG:setVisible(bShow)
        self._KW_CHECK_PEAK_RACE_C:setSelected(bShow)
    end
end

function TeaHouseRankView2:initPeakRaceGameList()
    if not self._KW_SV_GAME_LIST_PEAK_RACE or not self._KW_BTN_GAME_PEAK_RACE then
        return
    end
    local gameList = TeaHouse.BridgeData.getTeaHouseRoomGameList()
    local gameNameList = TeaHouse.BridgeData.getGameNameList()
    if gameList and gameNameList then
        local gameListSize = self._KW_SV_GAME_LIST_PEAK_RACE:getContentSize()
        self._gameItemSizePC = self._KW_BTN_GAME_PEAK_RACE:getContentSize()
        local listHeight = self._gameItemSizePC.height * (#gameList + 1) + 30
        if listHeight < gameListSize.height then
            listHeight = gameListSize.height
            self._KW_SV_GAME_LIST_PEAK_RACE:setInnerContainerSize(gameListSize)
        elseif listHeight > gameListSize.height then
            self._KW_SV_GAME_LIST_PEAK_RACE:setInnerContainerSize(cc.size(gameListSize.width, listHeight))
        end
        self._gameItemOffsetPC = cc.p(self._gameItemSizePC.width / 2, listHeight - self._gameItemSizePC.height / 2)
        self:addPeakRaceGameItem(0, "所有游戏")
        for _, gameID in ipairs(gameList) do
            self:addPeakRaceGameItem(gameID, gameNameList[gameID])
        end
    end
end

function TeaHouseRankView2:addPeakRaceGameItem(gameID, gameName)
    local btnGame = self._KW_BTN_GAME_PEAK_RACE:clone()
    btnGame:setTag(gameID)
    btnGame:setVisible(true)
    btnGame:setPosition(self._gameItemOffsetPC)
    self._gameItemOffsetPC.y = self._gameItemOffsetPC.y - self._gameItemSizePC.height
    btnGame:addTouchEventListener(function(send, eventType)
        TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
        if eventType ~= ccui.TouchEventType.ended then
            return
        end
        local gameID = btnGame:getTag()
        self._peakRaceGameID = gameID
        self:flushPeakLabelText()
        -- todo
        self:reqRankInfo(self._peakRaceType, self._peakRaceGameID)
        self:onTouchEventChangePeakRaceState(self._KW_CHECK_PEAK_RACE_B, ccui.CheckBoxEventType.unselected)
    end)
    local textGame = btnGame:getChildByName("_KW_TEXT_GAME")
    if textGame then
        textGame:setString(gameName)
    end
    self._KW_SV_GAME_LIST_PEAK_RACE:addChild(btnGame)
end

function TeaHouseRankView2:onTouchEventChangePeakRace(send, eventType, index)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    if send:getParent() == self._KW_PANEL_PEAK_RACE_C_BG then
        self:onTouchEventChangePeakRaceState(self._KW_PANEL_PEAK_RACE_C, ccui.CheckBoxEventType.unselected)
        self._peakRaceMonth = index
        XH.lobby:getModule("PeakRace"):reqGetChooseRank(self._peakRaceMonth == 1 and MatchContributeConfig.ChooseRankOpt.CHOOSE_RANK_OPT_GET or MatchContributeConfig.ChooseRankOpt.CHOOSE_RANK_OPT_GET_LAST, TeaHouse.manager.teahouseData:getTeaNumber())
    elseif send:getParent() == self._KW_PANEL_PEAK_RACE_A_BG then
        self:onTouchEventChangePeakRaceState(self._KW_PANEL_PEAK_RACE_A, ccui.CheckBoxEventType.unselected)
        self._peakRaceType = send:getTag()
        -- todo
        self:reqRankInfo(self._peakRaceType, self._peakRaceGameID)
        self:flushRightText(self._peakRaceType)
    end
    self:flushPeakLabelText()
end

function TeaHouseRankView2:onPeakRaceSetClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local data = {
        rank_type = MatchContributeConfig.TRANSFER_50_RANK[self._peakRaceType],
        game_id = self._peakRaceGameID,
        ren_count = 0
    }
    XH.lobby:getModule("PeakRace"):reqChooseRank(json.encode(data), TeaHouse.manager.teahouseData:getTeaNumber())
end

function TeaHouseRankView2:getLastChoseRank()
    local data = XH.lobby:getModule("PeakRace"):getChooseRank()
    for k, v in pairs(MatchContributeConfig.TRANSFER_50_RANK) do
        if v == data.rank_type then
            if data.rank_type == MatchContributeConfig.RankType.SCORE then
                local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
                if SwitchConfig and SwitchConfig.WinLoseRank ~= 0 then
                    data.rank_type = TeaHouseRankView2.TAB_TYPE.WIN_LOSE
                else
                    data.rank_type = TeaHouseRankView2.TAB_TYPE.SCORE
                end
            else
                data.rank_type = k
            end
            break
        end
    end

    return data
end

function TeaHouseRankView2:onChoseRankUpdate()
    -- 刷新日期选择默认值
    if not TeaHouse.manager.configManager.SetupConfig.IsOpenRankDateOptional then
        if self._dayType ~= TeaHouseRankView2.DAY_TYPE.DAY30 and self._dayType ~= TeaHouseRankView2.DAY_TYPE.DAY60 then
            self:setDayType(TeaHouseRankView2.DAY_TYPE.DAY30, true)
            self._peakRaceMonth = 1
        end
    else
        if self._startDay ~= -1 and self._startDay ~= -2 then
            self._startDay = -1
            self._endDay = -1
            self._peakRaceMonth = 1
            self._textStartSearchDay:setString(self:getCurMonth() .. "月排行榜")
            self._textEndSearchDay:setString(self:getCurMonth() .. "月排行榜")
        end
    end
    local data = self:getLastChoseRank()
    self._peakRaceType = data.rank_type
    self._peakRaceGameID = data.game_id
    -- 触发请求 需要判断是本月还是上月
    self:flushPeakLabelText()
    -- todo
    self:reqRankInfo(self._peakRaceType, self._peakRaceGameID)
    self:flushRightText(self._peakRaceType)
end

function TeaHouseRankView2:flushPeakLabelText()
    local isRenqiRank = self._peakRaceType == TeaHouseRankView2.TAB_TYPE.RENQI
    if isRenqiRank then
        self._peakRaceGameID = 0
    end
    if self._KW_PANEL_PEAK_RACE_B then
        self._KW_PANEL_PEAK_RACE_B:setVisible(not isRenqiRank)
    end
    if self._KW_PANEL_PEAK_RACE_B_BG then
        self._KW_PANEL_PEAK_RACE_B_BG:setVisible(false)
    end
    if self._KW_CHECK_PEAK_RACE_B then
        self._KW_CHECK_PEAK_RACE_B:setSelected(false)
    end

    local gameNameList = TeaHouse.BridgeData.getGameNameList()
    for k, v in pairs(self._showPeakRaceList) do
        if v == self._peakRaceType then
            self._KW_TEXT_PEAK_RACE_A:setString(k)
            break
        end
    end
    if self._peakRaceGameID == 0 then
        self._KW_TEXT_PEAK_RACE_B:setString("所有游戏")
    else
        self._KW_TEXT_PEAK_RACE_B:setString(gameNameList[self._peakRaceGameID] or "")
    end
    self._KW_TEXT_PEAK_RACE_C:setString((self._peakRaceMonth == 1 and self:getCurMonth() or self:getLastMonth()) .. "月排行榜")

    if self._peakRaceMonth == 1 then
        local data = self:getLastChoseRank()
        local enable = data.rank_type == self._peakRaceType and self._peakRaceGameID == data.game_id
        self:flushCheckState(self._KW_BTN_PEAKRACE_SET, not enable)
    end
    self._KW_BTN_PEAKRACE_SET:setVisible(self._peakRaceMonth == 1)
    local teahouseData = TeaHouse.manager.teahouseData
    if not teahouseData:isOwner() and not teahouseData:isAdmin() then
        self._KW_BTN_PEAKRACE_SET:setVisible(false)
    end
    self:flushCheckState(self._KW_CHECK_PEAK_RACE_A, self._peakRaceMonth == 1)
    self:flushCheckState(self._KW_CHECK_PEAK_RACE_B, self._peakRaceMonth == 1)
end

function TeaHouseRankView2:flushCheckState(node, enable)
    local teahouseData = TeaHouse.manager.teahouseData
    if not teahouseData:isOwner() and not teahouseData:isAdmin() then
        enable = false
    end
    node:setEnabled(enable)
    node:setTouchEnabled(enable)
    node:setBright(enable)
end

function TeaHouseRankView2:getMonthStartAndEndTimestamp(year, month)
    if month == 0 then
        year = year - 1
        month = 12
    end
    local startOfMonth = os.time { year = year, month = month, day = 1, hour = 0, min = 0, sec = 0 }
    local nextMonth = month + 1
    local nextYear = year
    if nextMonth > 12 then
        nextMonth = 1
        nextYear = year + 1
    end
    local startOfNextMonth = os.time { year = nextYear, month = nextMonth, day = 1, hour = 0, min = 0, sec = 0 }
    local endOfMonth = startOfNextMonth - 1
    return startOfMonth, endOfMonth
end

-- 请求月排行榜数据
function TeaHouseRankView2:reqMonthRank(reqRankType, gameID, isCurMonth)
    local rankType = MatchContributeConfig.TRANSFER_50_RANK[reqRankType]
    if self._tabType == TeaHouseRankView2.TAB_TYPE.PEAK_RACE then
        isCurMonth = self._peakRaceMonth == 1
    end
    local start_time, end_time = self:getMonthStartAndEndTimestamp(os.date("%Y"), os.date("%m"))
    if not isCurMonth then
        start_time, end_time = self:getMonthStartAndEndTimestamp(os.date("%Y"), os.date("%m") - 1)
    end
    if reqRankType == TeaHouseRankView2.TAB_TYPE.COST or
    reqRankType == TeaHouseRankView2.TAB_TYPE.PLAY_COUNT or
    reqRankType == TeaHouseRankView2.TAB_TYPE.BIG_WINNER or
    reqRankType == TeaHouseRankView2.TAB_TYPE.SCORE or
    reqRankType == TeaHouseRankView2.TAB_TYPE.WIN_LOSE or
    reqRankType == TeaHouseRankView2.TAB_TYPE.RENQI or
    reqRankType == TeaHouseRankView2.TAB_TYPE.WIN_RATE then
        XH.lobby:getModule("PeakRace"):getRecordRankList(start_time, end_time, rankType, self._curPage, self._pageSize, gameID, TeaHouse.manager.teahouseData:getTeaNumber())
    elseif reqRankType == TeaHouseRankView2.TAB_TYPE.TEAM then
        XH.lobby:getModule("PeakRace"):getTeamRankList(self._curPage, self._pageSize, start_time, end_time, self._curPage, TeaHouse.manager.teahouseData:getTeaNumber())
    end
end

function TeaHouseRankView2:onChoseContributeRankUpdate(event)
    self:transferDataContribute(event.data.rank)
    self:refreshTableView(true)
    if self._isReqNextPage then
        self._isReqNextPage = nil
    end
    self._curPage = event.data.page
    self._maxPage = math.ceil(event.data.total / self._pageSize)
    if not self._textSelfRank then
        return
    end
    if event.data.myRank == 0 then
        event.data.myRank = "未上榜"
    end
    self._textSelfRank:setString(event.data.myRank)
    self._textSelfDesc:setString(event.data.myNum)
end

-- 月数据/胜率榜返回
function TeaHouseRankView2:onRecordRankUpdate(event)
    self._likeUserIds = event.data.likeUserIds
    self:transferDataRankRecord(event.data.crl)
    self:refreshTableView(true)
    if self._isReqNextPage then
        self._isReqNextPage = nil
    end
    self._curPage = event.data.page
    self._maxPage = math.ceil(event.data.userCnt / self._pageSize)
    if not self._textSelfRank or not event.data.selfInfo then
        return
    end
    if event.data.selfInfo.rank == 0 then
        event.data.selfInfo.rank = "未上榜"
    end
    self._textSelfRank:setString(event.data.selfInfo.rank)
    self._textSelfDesc:setString(event.data.selfInfo.count)
    local curRankType = self._tabType
    if curRankType == TeaHouseRankView2.TAB_TYPE.PEAK_RACE then
        curRankType = self._reqRankType
    end
    if curRankType == TeaHouseRankView2.TAB_TYPE.WIN_RATE then
        if event.data.selfInfo.count >= 10 then
            local winRateFormatted = string.format("%.2f%%", event.data.selfInfo.win / event.data.selfInfo.count * 100)
            self._textSelfDesc:setString(winRateFormatted)
        else
            self._textSelfDesc:setString("----")
        end
    elseif curRankType == TeaHouseRankView2.TAB_TYPE.COST then
        self._textSelfDesc:setString(self:changeCostCard(TeaHouseRankView2.TAB_TYPE.COST, event.data.selfInfo.count))
    end
end

-- 普通榜转化
function TeaHouseRankView2:transferDataRankRecord(list)
    self._infoList = {}
    for i = 1, #list do
        local acData = {
            lastfighttime = list[i].lastLoginTime
        }
        self._infoList[#self._infoList + 1] = {
            nRank = list[i].rankId,
            nScore = 0,
            stUser = {
                acNickName = list[i].userName,
                nNumId = list[i].userId,
                acExtraData = json.encode(acData),
            },
            srcData = list[i],
        }
        local curRankType = self._tabType
        if curRankType == TeaHouseRankView2.TAB_TYPE.PEAK_RACE then
            curRankType = self._reqRankType
        end
        if curRankType == TeaHouseRankView2.TAB_TYPE.WIN_RATE then
            if list[i].joinRoomCnt >= 10 then
                local winRateFormatted = string.format("%.2f%%", list[i].huCnt / list[i].joinRoomCnt * 100)
                self._infoList[#self._infoList].nScore = winRateFormatted
            else
                self._infoList[#self._infoList].nScore = "----"
            end
        else
            self._infoList[#self._infoList].nScore = list[i].score
        end
    end
end

-- 贡献榜转换为浙江包数据
function TeaHouseRankView2:transferDataContribute(list)
    self._infoList = {}
    for i = 1, #list do
        self._infoList[#self._infoList + 1] = {
            nRank = list[i].rankId,
            nScore = list[i].num,
            stUser = {
                acNickName = list[i].nick,
                nNumId = list[i].uerId,
                acExtraData = "{}",
            },
            isHideLastFight = true
        }
    end
end

function TeaHouseRankView2:flushMonthState(isCur)
    self._btnCurMonth1:setVisible(not isCur)
    self._btnCurMonth2:setVisible(isCur)
    self._btnLastMonth1:setVisible(isCur)
    self._btnLastMonth2:setVisible(not isCur)
end

return TeaHouseRankView2�f