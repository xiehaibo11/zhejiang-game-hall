local PeakRaceRankView = class("PeakRaceRankView", NG.ViewBase)
local PeakRaceConfig = require("newgold.GoldLobby.Modules.PeakRace.Define")
local KW_IMG_DEFULT_HEAD = "_0002_mrtx_w.png"

local RANK_INDEX_IMG = {
    "dfs_zjb_Img_gj.png",
    "dfs_zjb_Img_yj.png",
    "dfs_zjb_Img_jj.png",
}

function PeakRaceRankView:getCSBPath()
    return "cocosStudio/GoldNew/PeakRace/CSB/PeakRaceRankLayer.csb"
end

function PeakRaceRankView:getBindingInfo()
    return {
        -- 
        ["_KW_LIST_RANK_ITEM"] = { varName = "_KW_LIST_RANK_ITEM" },
        ["_KW_RIGHT_RANK_ITEM"] = { varName = "_KW_RIGHT_RANK_ITEM" },
        ["_KW_PANEL_TABLEL_RANK"] = { varName = "_KW_PANEL_TABLEL_RANK" },
        ["_KW_PANEL_CENTER_RANK"] = { varName = "_KW_PANEL_CENTER_RANK" },
        ["_KW_PAGETOOL"] = { varName = "_KW_PAGETOOL" },
        ["_KW_UI_BTN_CLOSE"] = { varName = "_KW_UI_BTN_CLOSE", type = NG.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "closeView" },
        ["_KW_TAB_PAGE"] = { varName = "_KW_TAB_PAGE" },
        ["_KW_LIST_RANK"] = { varName = "_KW_LIST_RANK" },
        ["_KW_BTN_LEFT"] = { varName = "_KW_BTN_LEFT", type = NG.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "clickLeft" },
        ["_KW_BTN_RIGHT"] = { varName = "_KW_BTN_RIGHT", type = NG.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "clickRight" },
        ["_KW_LIST_RANK_RIGHT"] = { varName = "_KW_LIST_RANK_RIGHT" },
        ["_KW_PANEL_SELF_ITEM"] = { varName = "_KW_PANEL_SELF_ITEM" },
        ["_KW_TEXT_RANK"] = { varName = "_KW_TEXT_RANK" },
        ["_KW_TEXT_TIP"] = { varName = "_KW_TEXT_TIP" },
        ["_KW_BTN_TABLE_CHOSE_2"] = { varName = "_KW_BTN_TABLE_CHOSE_2" },
        ["_KW_BTN_TABLE_CHOSE_1"] = { varName = "_KW_BTN_TABLE_CHOSE_1" },
        ["_KW_BTN_TABLE_2"] = { varName = "_KW_BTN_TABLE_2", type = NG.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "table2" },
        ["_KW_BTN_TABLE_1"] = { varName = "_KW_BTN_TABLE_1", type = NG.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "table1" },
        ["_KW_TEXT_TABLE_1"] = { varName = "_KW_TEXT_TABLE_1" },
        ["_KW_TEXT_TABLE_2"] = { varName = "_KW_TEXT_TABLE_2" },
        ["_KW_TEXT_TABLE_1_2"] = { varName = "_KW_TEXT_TABLE_1_2" },
        ["_KW_TEXT_TABLE_2_2"] = { varName = "_KW_TEXT_TABLE_2_2" },
    }
end

function PeakRaceRankView:getProxyEvents()
    return {
        --
        { module = NG.goldLobby:getModule("PeakRace"), eventKeyName = "flushPeakRank", callBack = "flushPeakRank" },
    }
end

function PeakRaceRankView:ctor(param)
    PeakRaceRankView.super.ctor(self, param)
    self.sTableGroup = PeakRaceConfig.SeasonType.PEAK_SEASON_NOW_SEASON_TYPE --赛季：赛季tab
    self.tabGroup = PeakRaceConfig.RankType.PEAK_RANK_TEAM_SCORE_TYPE --榜单类型：积分榜tab
    self.randData = {}
    self._time = 0
    self._reqCount = 20
    self._selfRank = {}
    self._lastClick = nil
    self._minIndex = 1
    self._maxIndex = 1
    self._currPage = 1
    self._rankList = { "团队积分榜", "个人积分榜", "个人胜率榜", "个人冠军榜", "个人活跃榜" }
    self:initLeftUI()
    self:initUI()
    self:flushTipText()
end

function PeakRaceRankView:clickLeft()
    if self._currPage <= 1 then
        NG.TipTool.showToast("已经是第一页了")
        return
    end
    self:onPageHandler(self._currPage - 1)
end

function PeakRaceRankView:clickRight()
    if self._currPage >= self._maxIndex then
        NG.TipTool.showToast("已经最后一页了")
        return
    end
    self:onPageHandler(self._currPage + 1)
end

function PeakRaceRankView:initUI()
    self._time = XH.lobby:getModule("Shop"):getServerTime()
    self:reqGetPeakRaceRank()
    self:initRankList()
end

function PeakRaceRankView:initLeftUI()
    self._KW_LIST_RANK:removeAllChildren()
    for i = 1, #self._rankList do
        local item = self._KW_LIST_RANK_ITEM:clone()
        item:setName(i - 1)
        item:addTouchEventListener(handler(self, self._onItemClick))
        item:setVisible(true)
        item:setPositionX(self._KW_LIST_RANK:getContentSize().width / 2)
        item:setPositionY(self._KW_LIST_RANK:getContentSize().height - (i - 1) * self._KW_LIST_RANK_ITEM:getContentSize().height)
        item:getChildByName("_KW_UNCHOSE"):setVisible((i - 1) ~= PeakRaceConfig.RankType_Enum[self.tabGroup])
        item:getChildByName("_KW_CHOSE"):setVisible((i - 1) == PeakRaceConfig.RankType_Enum[self.tabGroup])
        item:getChildByName("_KW_UNCHOSE"):getChildByName("KW_TEXT_NAME"):setString(self._rankList[i])
        item:getChildByName("_KW_CHOSE"):getChildByName("KW_TEXT_NAME"):setString(self._rankList[i])
        self._KW_LIST_RANK:addChild(item)
    end
end

function PeakRaceRankView:flushTipText()
    local info = NG.goldLobby:getModule("PeakRace"):getPeakRaceInfo()
    self._KW_TEXT_RANK:setString("*比赛次数≥" .. (info.win_rate_low or 50) .. "局，才计算胜率")
    self._KW_TEXT_RANK:setVisible(self.tabGroup == PeakRaceConfig.RankType.PEAK_RANK_SELF_WIN_RATE_TYPE)
end

-- 点击左侧按钮变更idx todo
function PeakRaceRankView:_onItemClick(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    for i = 1, #self._rankList do
        local item = self._KW_LIST_RANK:getChildren()[i]
        item:getChildByName("_KW_UNCHOSE"):setVisible(item:getName() ~= send:getName())
        item:getChildByName("_KW_CHOSE"):setVisible(item:getName() == send:getName())
        if item:getName() == send:getName() then
            for k, v in pairs(PeakRaceConfig.RankType_Enum) do
                if v .. "" == send:getName() then
                    self.tabGroup = k
                    break
                end
            end
        end
    end
    self:flushTipText()
    self:reqGetPeakRaceRank()
end

function PeakRaceRankView:sTableGroupIndex(index)
    self._KW_BTN_TABLE_CHOSE_2:setVisible(index == 1)
    self._KW_BTN_TABLE_CHOSE_1:setVisible(index == 0)
end

function PeakRaceRankView:initRankList()
    self:sTableGroupIndex(1)

    local info = {}
    if self.randData and self.randData[self.tabGroup] and self.randData[self.tabGroup][self.sTableGroup] then
        info = self.randData[self.tabGroup][self.sTableGroup]
    end
    local rankInfos = info
    for i = 1, #info do
        if info[i].rank ~= 0 then
            rankInfos[#rankInfos + 1] = info[i]
        end
    end
    self:flushRankRightList(rankInfos)
    self:initSelfItem()

    self._KW_TEXT_TIP:setString("榜单数据每隔10分钟刷新一次,各分榜展示前100名")

    local data = NG.goldLobby:getModule("PeakRace"):getPeakRaceInfo()
    if data == nil then
        return
    end
    local curSeason = data.cur_season or 0
    local lastSeason = curSeason - 1
    if data.status == PeakRaceConfig.MatchStatus.UnMatch then
        curSeason = curSeason - 1
        lastSeason = lastSeason - 1
    end
    if lastSeason <= 0 then
        self:sTableGroupIndex(0)
        self._KW_BTN_TABLE_2:setVisible(false)
        self._KW_TEXT_TABLE_1:setString("S" .. curSeason .. "赛季")
        self._KW_TEXT_TABLE_1_2:setString("S" .. curSeason .. "赛季")
    else
        self._KW_BTN_TABLE_2:setVisible(true)
        self._KW_TEXT_TABLE_1:setString("S" .. lastSeason .. "赛季")
        self._KW_TEXT_TABLE_1_2:setString("S" .. lastSeason .. "赛季")
        self._KW_TEXT_TABLE_2:setString("S" .. curSeason .. "赛季")
        self._KW_TEXT_TABLE_2_2:setString("S" .. curSeason .. "赛季")
    end
end

function PeakRaceRankView:rankItemRenderer(idx, item)
    local info = {}
    if self.randData and self.randData[self.tabGroup] and self.randData[self.tabGroup][self.sTableGroup] then
        info = self.randData[self.tabGroup][self.sTableGroup]
    end
    local num = 0
    if info and info[idx] then
        num = info[idx].rank
    else
        info[idx] = {}
    end
    local rankHead = item:getChildByName('KW_IMG_HEAD')
    local rankText = item:getChildByName('KW_TEXT_RANK_NUM')
    local rankComp = item:getChildByName('KW_IMG_RANK_ICON')
    local nameComp = item:getChildByName('KW_TEXT_NICKNAME')
    local numidComp = item:getChildByName('KW_TEXT_NUMID')
    local teamNameComp = item:getChildByName('KW_TEXT_TEAMNAME')
    local scoreComp = item:getChildByName('KW_TEXT_SCORE')
    local head = ""
    local name = ""
    local score = 0
    local numid = ""
    local teamName = ""
    item:getChildByName('KW_TEXT_SCORE_NAME'):setString(self:getScoreNameWithType())
    if self.tabGroup == PeakRaceConfig.RankType.PEAK_RANK_TEAM_SCORE_TYPE then
        head = info[idx].team_head
        name = XH.StringTool.cutStringByLength(info[idx].user_name or "", 12)
        score = self:getLongNumber(info[idx].team_score or 0)
        numid = self:hideStr(info[idx].club_pass or "")
        teamName = info[idx].team_name or ""
        item:getChildByName('KW_TEXT_RANK_NAME'):setString('领队:')
        item:getChildByName('KW_TEXT_RANK_TYPE'):setString('口令:')
    else
        head = info[idx].user_head
        name = XH.StringTool.cutStringByLength(info[idx].user_name or "", 12)
        if self.tabGroup == PeakRaceConfig.RankType.PEAK_RANK_SELF_WIN_RATE_TYPE then
            score = string.format("%.1f", info[idx].win_rate or 0) .. "%"
        elseif self.tabGroup == PeakRaceConfig.RankType.PEAK_RANK_SELF_CHAMPION_TYPE then
            score = info[idx].champion or 0
        elseif self.tabGroup == PeakRaceConfig.RankType.PEAK_RANK_SELF_ACTIVE_TYPE then
            score = info[idx].user_total_rounds or 0
        else
            score = self:getLongNumber(info[idx].user_score or 0)
        end
        numid = self:hideStr(info[idx].user_id or "")
        teamName = info[idx].team_name or ""
        item:getChildByName('KW_TEXT_RANK_NAME'):setString('昵称:')
        item:getChildByName('KW_TEXT_RANK_TYPE'):setString('序号:')
    end
    local size = item:getChildByName("KW_IMG_HEAD"):getContentSize()
    local headImage = NG.RemoteImage.new():setPosition(size.width / 2, size.height / 2):ignoreContentAdaptWithSize(false):setContentSize(size.width, size.height):addTo(item:getChildByName("KW_IMG_HEAD"))
    headImage:setDefaultTexture(KW_IMG_DEFULT_HEAD, 1)
    headImage:setUrl(head or "")
    rankComp:setVisible(num > 0 and num < 4)
    rankText:setString("")
    if rankComp:isVisible() then
        rankComp:loadTexture(RANK_INDEX_IMG[num], ccui.TextureResType.plistType)
    else
        rankText:setString(num)
    end

    nameComp:setString(name or "")
    numidComp:setString(numid or 0)
    teamNameComp:setString("比赛场:" .. XH.StringTool.cutStringByLength(teamName or "", 8))
    scoreComp:setString(score or 0)
end

function PeakRaceRankView:getScoreNameWithType()
    local text = '比赛积分：'
    if self.tabGroup == PeakRaceConfig.RankType.PEAK_RANK_SELF_WIN_RATE_TYPE then
        text = '比赛胜率：'
    elseif self.tabGroup == PeakRaceConfig.RankType.PEAK_RANK_SELF_CHAMPION_TYPE then
        text = '比赛冠军：'
    elseif self.tabGroup == PeakRaceConfig.RankType.PEAK_RANK_SELF_ACTIVE_TYPE then
        text = '比赛场次：'
    end
    return text
end

function PeakRaceRankView:initSelfItem()
    local item = self._KW_PANEL_SELF_ITEM

    local rankHead = item:getChildByName('KW_IMG_HEAD')
    local rankText = item:getChildByName('KW_TEXT_RANK_NUM')
    local rankComp = item:getChildByName('KW_IMG_RANK_ICON')
    local nameComp = item:getChildByName('KW_TEXT_NICKNAME')
    local numidComp = item:getChildByName('KW_TEXT_NUMID')
    local teamNameComp = item:getChildByName('KW_TEXT_TEAMNAME')
    local scoreComp = item:getChildByName('KW_TEXT_SCORE')

    local rankInfos
    local head = ''
    local rank = 0
    local name = ''
    local numid = ''
    local score = '0'
    local teamName = ''
    local unRankText = '未上榜，请加油!'
    local dataInfo = self._selfRank[self.tabGroup]
    item:getChildByName('KW_TEXT_SCORE_NAME'):setString(self:getScoreNameWithType())
    if self.tabGroup == PeakRaceConfig.RankType.PEAK_RANK_TEAM_SCORE_TYPE then
        item:getChildByName('KW_TEXT_RANK_NAME'):setString("领队:")
        item:getChildByName('KW_TEXT_RANK_TYPE'):setString("口令:")
    else
        item:getChildByName('KW_TEXT_RANK_NAME'):setString("昵称:")
        item:getChildByName('KW_TEXT_RANK_TYPE'):setString("序号:")
    end
    if dataInfo then
        if self.tabGroup == PeakRaceConfig.RankType.PEAK_RANK_TEAM_SCORE_TYPE then
            -- 团队积分榜
            rankInfos = dataInfo
            head = rankInfos.team_head
            rank = rankInfos.rank or 0
            name = rankInfos.user_name or ''
            numid = rankInfos.club_pass or ''
            score = self:getLongNumber(rankInfos.team_score)
            teamName = rankInfos.team_name
            local info = NG.goldLobby:getModule("PeakRace"):getPeakRaceInfo()
            local matchRankCnt = info.low or 0
            if rankInfos.team_total_rounds < matchRankCnt then
                if info.status == PeakRaceConfig.MatchStatus.UnBaoMing then
                    unRankText = '未上榜，请加油!'
                else
                    unRankText = '比赛数未达标'
                end
            end
        else
            -- 个人积分榜
            rankInfos = dataInfo
            head = rankInfos.user_head
            rank = rankInfos.rank or 0
            name = rankInfos.user_name or ''
            numid = rankInfos.user_id or ''
            if self.tabGroup == PeakRaceConfig.RankType.PEAK_RANK_SELF_WIN_RATE_TYPE then
                score = string.format("%.1f", rankInfos.win_rate or 0) .. "%"
            elseif self.tabGroup == PeakRaceConfig.RankType.PEAK_RANK_SELF_CHAMPION_TYPE then
                score = rankInfos.champion
            elseif self.tabGroup == PeakRaceConfig.RankType.PEAK_RANK_SELF_ACTIVE_TYPE then
                score = rankInfos.user_total_rounds
            else
                score = self:getLongNumber(rankInfos.user_score)
            end
            teamName = rankInfos.team_name
            local info = NG.goldLobby:getModule("PeakRace"):getPeakRaceInfo()
            local matchRankCnt = info.low or 0
            if rankInfos.user_total_rounds < matchRankCnt then
                if info.status == PeakRaceConfig.MatchStatus.UnBaoMing then
                    unRankText = '未上榜，请加油!'
                else
                    unRankText = '比赛数未达标'
                end
            end
        end
    end
    local size = item:getChildByName("KW_IMG_HEAD"):getContentSize()
    local headImage = NG.RemoteImage.new():setPosition(size.width / 2, size.height / 2):ignoreContentAdaptWithSize(false):setContentSize(size.width, size.height):addTo(item:getChildByName("KW_IMG_HEAD"))
    headImage:setDefaultTexture(KW_IMG_DEFULT_HEAD, 1)
    headImage:setUrl(head or "")

    if rank == 0 then
        item:getChildByName('KW_TEXT_RANK_TIP'):setVisible(true)
        item:getChildByName('KW_TEXT_RANK_TIP'):setString(unRankText)
        item:getChildByName('KW_TEXT_SCORE_NAME'):setVisible(false)
        item:getChildByName('KW_TEXT_SCORE'):setVisible(false)
        item:getChildByName('KW_TEXT_RANK_NUM'):setVisible(false)
        item:getChildByName('KW_TEXT_UN_RANK'):setVisible(true)
        rankComp:setVisible(false)
    else
        item:getChildByName('KW_TEXT_RANK_TIP'):setVisible(false)
        item:getChildByName('KW_TEXT_SCORE_NAME'):setVisible(true)
        item:getChildByName('KW_TEXT_SCORE'):setVisible(true)
        item:getChildByName('KW_TEXT_RANK_NUM'):setVisible(true)
        item:getChildByName('KW_TEXT_UN_RANK'):setVisible(false)

        local num = rank
        rankComp:setVisible(num > 0 and num < 4)
        rankText:setString("")
        if rankComp:isVisible() then
            rankComp:loadTexture(RANK_INDEX_IMG[num], ccui.TextureResType.plistType)
        else
            rankText:setString(num)
        end
    end

    nameComp:setString(XH.StringTool.cutStringByLength(name or "", 12))
    numidComp:setString(numid or 0)
    teamNameComp:setString("比赛场:" .. XH.StringTool.cutStringByLength(teamName or "", 8))
    scoreComp:setString(score or 0)
end

function PeakRaceRankView:flushRankRightList(rankInfos)
    local maxHeight = #rankInfos * self._KW_RIGHT_RANK_ITEM:getContentSize().height
    if maxHeight < self._KW_LIST_RANK_RIGHT:getContentSize().height then
        maxHeight = self._KW_LIST_RANK_RIGHT:getContentSize().height
    end
    self._KW_LIST_RANK_RIGHT:removeAllChildren()
    for i = 1, #rankInfos do
        local item = self._KW_RIGHT_RANK_ITEM:clone()
        self:rankItemRenderer(i, item)
        item:setPositionX(self._KW_LIST_RANK_RIGHT:getContentSize().width / 2)
        item:setPositionY(maxHeight - (i - 1) * self._KW_RIGHT_RANK_ITEM:getContentSize().height)
        item:setVisible(true)
        self._KW_LIST_RANK_RIGHT:addChild(item)
    end
    self._KW_LIST_RANK_RIGHT:setInnerContainerSize(cc.size(self._KW_LIST_RANK_RIGHT:getContentSize().width, maxHeight))
end

function PeakRaceRankView:updateRankList(tabGroup, sTableGroup, data)
    local rankInfos = {}
    for i = 1, #data do
        if data[i].rank ~= 0 then
            rankInfos[#rankInfos + 1] = data[i]
        end
    end
    self:flushRankRightList(rankInfos)
    self:initSelfItem()
end

function PeakRaceRankView:onPageHandler(page)
    self:reqGetPeakRaceRank(page)
end

function PeakRaceRankView:reqGetPeakRaceRank(page)
    page = page or 1
    -- 冠军榜
    local info = NG.goldLobby:getModule("PeakRace"):getPeakRaceInfo()
    if self.tabGroup == 3 and info then
        local season = info.cur_season
        if self.sTableGroup == PeakRaceConfig.SeasonType.PEAK_SEASON_LAST_SEASON_TYPE then
            season = season - 1
        end
        if season <= 3 then
            if not (self._lastClick and self._lastClick.tabGroup == self.tabGroup and self._lastClick.sTableGroup == self.sTableGroup) then
                NG.TipTool.showToast("暂无冠军榜排名，请关注下一赛季")
            end
            self:flushPeakRank(PeakRaceConfig.RankType.PEAK_RANK_SELF_CHAMPION_TYPE, {}, 1, 0)
            self._lastClick = { tabGroup = self.tabGroup, sTableGroup = self.sTableGroup }
            return
        end
    end
    self._lastClick = { tabGroup = self.tabGroup, sTableGroup = self.sTableGroup }
    NG.goldLobby:getModule("PeakRace"):reqPeakRank(self.tabGroup, self.sTableGroup, page, self._reqCount)
end

function PeakRaceRankView:table1()
    if self:getLastSeason() <= 0 then
        self.sTableGroup = PeakRaceConfig.SeasonType.PEAK_SEASON_NOW_SEASON_TYPE --1
    else
        self.sTableGroup = PeakRaceConfig.SeasonType.PEAK_SEASON_LAST_SEASON_TYPE --0
    end
    self:reqGetPeakRaceRank()
    self:sTableGroupIndex(0)
end

function PeakRaceRankView:table2()
    self.sTableGroup = PeakRaceConfig.SeasonType.PEAK_SEASON_NOW_SEASON_TYPE -- 1
    self:reqGetPeakRaceRank()
    self:sTableGroupIndex(1)
end

function PeakRaceRankView:flushPeakRank(msg)
    local type = msg.msg.rankType
    local data = msg.msg.peakRank
    local curIndex = msg.msg.index
    local total = msg.msg.total_count
    self._currPage = curIndex
    self._maxIndex = math.ceil(total / self._reqCount)
    if self._currPage == 0 then
        self._currPage = 1
    end
    if self._maxIndex == 0 then
        self._maxIndex = 1
    end
    self._KW_TAB_PAGE:setString(self._currPage .. "/" .. self._maxIndex)
    if self.randData[type] == nil then
        self.randData[type] = {}
    end
    self._selfRank[type] = nil
    local realRank = {}
    for i = 1, #data do
        local datum = data[i]
        if datum.self_info == 1 then
            self._selfRank[type] = datum
        else
            realRank[#realRank + 1] = datum
        end
    end
    self.randData[type][self.sTableGroup] = realRank
    self:updateRankList(type, self.sTableGroup, realRank)
end

function PeakRaceRankView:getLastSeason()
    local data = NG.goldLobby:getModule("PeakRace"):getPeakRaceInfo()
    if data == nil then
        return 0
    end
    local curSeason = data.cur_season or 0
    local lastSeason = curSeason - 1
    if data.status == PeakRaceConfig.MatchStatus.UnMatch then
        curSeason = curSeason - 1
        lastSeason = lastSeason - 1
    end
    return lastSeason
end

function PeakRaceRankView:closeView()
    local duration = XH.lobby:getModule("Shop"):getServerTime()
    local block_item_id = 0
    local data = NG.goldLobby:getModule("PeakRace"):getPeakRaceInfo()
    if data then
        block_item_id = data.cur_season
    end
    local type = self.tabGroup -- todo 榜单类型
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.sai2024020215, { duration = duration, block_item_id = block_item_id }, { type = type })
    self:close()
end

function PeakRaceRankView:getLongNumber(num)
    return num
end

function PeakRaceRankView:hideStr(str)
    str = str or ""
    str = str .. ""
    local midLen = #str / 2
    local data = ""
    if midLen <= 1.5 then
        data = '***'
    else
        data = string.sub(str, 1, math.floor(midLen - 3 / 2)) .. "***" .. string.sub(str, math.floor(midLen + 3 / 2), #str)
    end
    return data
end

return PeakRaceRankView   �T  