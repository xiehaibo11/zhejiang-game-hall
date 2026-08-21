local GameSubConfiger = require("app.Config.Parse.GameSubConfiger")
local SxvipConfig = require("lobby.Modules.Sxvip.Config")

local SxvipGoldStatisticsItem = class("SxvipGoldStatisticsItem", XH.ViewBase)

local STR_ALL_GAMES = "全部玩法"

function SxvipGoldStatisticsItem:getCSBPath()
    return "cocosStudio/hall/CSB/Sxvip/SxvipGoldStatisticsItem.csb"
end

function SxvipGoldStatisticsItem:getBindingInfo()
    return {
        ["_KW_VIP_ROOT"] = {varName = "_root"},
        ["_KW_LEFT_TIP"] = {varName = "_txtLeftTip"},
        ["_KW_IMG_BG"] = {varName = "_imgBack"},
        ["_KW_TEXT_TIME"] = {varName = "_txtTime"},

        ["_KW_BTN_GAMELIST_ITEM"] = { varName = "_btnGameListItem", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnEventSelectGame" },
        ["_KW_BTN_SHOW_GAMELIST"] = { varName = "_btnShowGameList", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnEventShowGameList" },
        ["_KW_BTN_HIDE_GAMELIST"] = { varName = "_btnHideGameList", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnEventHideGameList" },
        ["_KW_IMG_GAMELIST"] = { varName = "_imgGameList" },
        ["_KW_TEXT_SELECT_GAME"] = { varName = "_textSelectGame" },
        ["_KW_LISTVIEW_GAMELIST"] = { varName = "_listviewGameList" },
        ["_KW_BLUR"] = { varName = "_panelBlur" },
        ["_KW_NORMAL"] = { varName = "_panelNormal" },
        ["_KW_BUTTON_OPEN_VIP"] = { varName = "_btnOpenVip", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnEventOpenVip" },
        ["_KW_NODE_FINGER"] = { varName = "_nodeFinger"},

        ["_KW_TXT_ROUND_1"] = { varName = "_txtRound1"},
        ["_KW_TXT_ROUND_2"] = { varName = "_txtRound2"},
        ["_KW_TXT_ROUND_3"] = { varName = "_txtRound3"},
        ["_KW_TXT_ROUND_4"] = { varName = "_txtRound4"},

        ["_KW_TXT_WIN_RATE_1"] = { varName = "_txtWinRate1"},
        ["_KW_TXT_WIN_RATE_2"] = { varName = "_txtWinRate2"},
        ["_KW_TXT_WIN_RATE_3"] = { varName = "_txtWinRate3"},
        ["_KW_TXT_WIN_RATE_4"] = { varName = "_txtWinRate4"},

        ["_KW_TXT_SCORE_1"] = { varName = "_txtScore1"},
        ["_KW_TXT_SCORE_2"] = { varName = "_txtScore2"},
        ["_KW_TXT_SCORE_3"] = { varName = "_txtScore3"},
        ["_KW_TXT_SCORE_4"] = { varName = "_txtScore4"},

        ["_KW_IMAGE_ROUND_1"] = { varName = "_imageRound1"},
        ["_KW_IMAGE_ROUND_2"] = { varName = "_imageRound2"},
        ["_KW_IMAGE_ROUND_3"] = { varName = "_imageRound3"},
        ["_KW_IMAGE_ROUND_4"] = { varName = "_imageRound4"},

        ["_KW_IMAGE_WIN_RATE_1"] = { varName = "_imageWinRate1"},
        ["_KW_IMAGE_WIN_RATE_2"] = { varName = "_imageWinRate2"},
        ["_KW_IMAGE_WIN_RATE_3"] = { varName = "_imageWinRate3"},
        ["_KW_IMAGE_WIN_RATE_4"] = { varName = "_imageWinRate4"},

        ["_KW_IMAGE_SCORE_1"] = { varName = "_imageScore1"},
        ["_KW_IMAGE_SCORE_2"] = { varName = "_imageScore2"},
        ["_KW_IMAGE_SCORE_3"] = { varName = "_imageScore3"},
        ["_KW_IMAGE_SCORE_4"] = { varName = "_imageScore4"},
    }
end

function SxvipGoldStatisticsItem:getProxyEvents()
    return {
        {module = XH.lobby:getModule("Sxvip"), eventKeyName = "SXVIP_EVENT_GOLD_STATISTICS", callBack = "onUpdateGoldStatistics"}
    }
end

function SxvipGoldStatisticsItem:ctor()
    SxvipGoldStatisticsItem.super.ctor(self)
    self:initView()
end

function SxvipGoldStatisticsItem:updateStatisticsData()
    if XH.lobby:getModule("Sxvip"):isExpire() then
        self._panelBlur:setVisible(true)
        self._panelNormal:setVisible(false)

        local aniPath = "animation/Lobby/Base/shoudianji/"
        local params = {path = aniPath, tex = "ShouDianJi.json", ske = "ShouDianJi.atlas", armatureName = "ShouDianJi", scale = 1}
        local spineNode = display.playDargonBonesSpine(params)
        if spineNode then
            self._nodeFinger:addChild(spineNode)
        end
        for i = 1, 4 do
            local randomIndex1 = ((XH.playerData:getNumberID() + i ) % 2) + 1
            local randomIndex2 = randomIndex1 + 2
            self["_imageRound"..i]:loadTexture(string.format("gold_statistics_img_blur_%d.png", randomIndex1), ccui.TextureResType.plistType)
            self["_imageWinRate"..i]:loadTexture(string.format("gold_statistics_img_blur_%d.png", randomIndex1), ccui.TextureResType.plistType)
            self["_imageScore"..i]:loadTexture(string.format("gold_statistics_img_blur_%d.png", randomIndex2), ccui.TextureResType.plistType)
        end
    else
        self._panelBlur:setVisible(false)
        self._panelNormal:setVisible(true)
        XH.lobby:getModule("Sxvip"):reqGoldStatistics(0)
    end
end


function SxvipGoldStatisticsItem:initView()
    self._gameNameList = {}

    local size = self._root:getContentSize()
    self:setContentSize(size)

    self:initGameListSelect()
    local data = self:getMonthAndDay(XH.lobby:getModule("Shop"):getServerTime())
    self._txtTime:setString(string.format("统计时间%d月%d日—%d月%d日", data.previousMonth, data.previousDay,  data.month, data.day))

    self:updateStatisticsData()

    XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy24090629)
end

function SxvipGoldStatisticsItem:getMonthAndDay(timestamp)
    -- 使用 os.date("*t", timestamp) 将时间戳转换为日期时间表
    local current = os.date("*t", timestamp)
    local previous = os.date("*t", timestamp - (7 * 24 * 60 * 60))
    
    -- 返回月份和日期
    return {month = current.month, day = current.day, previousMonth = previous.month, previousDay = previous.day}
end

function SxvipGoldStatisticsItem:onBtnEventSelectGame(send, eventType)
    self:closeGameListSelect()
    self:setSelectGame(send:getTag())
end

function SxvipGoldStatisticsItem:initGameListSelect()
    self:closeGameListSelect()
    self._listviewGameList:removeAllChildren()
    self:addGameListBtn(STR_ALL_GAMES, 0)
    self:setSelectGame(0)
end

function SxvipGoldStatisticsItem:addGameListBtn(textStr, gameId)
    local newItem = self._btnGameListItem:clone()
    newItem:setTitleText(textStr or "")
    newItem:setTag(gameId or 0)
    self._listviewGameList:addChild(newItem)
end

function SxvipGoldStatisticsItem:setSelectGame(gameID)
    self._selectGameID = gameID

    local gameName = STR_ALL_GAMES
    if self._selectGameID >0 then
        gameName = self._gameNameList[gameID] or ""
    end

    if self._textSelectGame then
        self._textSelectGame:setString(gameName)
    end

    XH.lobby:getModule("Sxvip"):reqGoldStatistics(gameID)
end

function SxvipGoldStatisticsItem:onBtnEventShowGameList(send, eventType)
    self:showGameListSelect()
end

function SxvipGoldStatisticsItem:onBtnEventHideGameList(send, eventType)
    self:closeGameListSelect()
end

function SxvipGoldStatisticsItem:closeGameListSelect()
    self._imgGameList:setVisible(false)
    self._btnShowGameList:setVisible(true)
    self._btnHideGameList:setVisible(false)
end

function SxvipGoldStatisticsItem:showGameListSelect()
    self._imgGameList:setVisible(true)
    self._btnShowGameList:setVisible(false)
    self._btnHideGameList:setVisible(true)
end

function SxvipGoldStatisticsItem:onUpdateGoldStatistics(data)
    local gameIdList = data.data.gameId

    local len = 1
    self._listviewGameList:removeAllChildren()
    self:addGameListBtn(STR_ALL_GAMES, 0)
    if gameIdList and self._gameNameList then
        for _, gameid in pairs(gameIdList) do
            local gameName = GameSubConfiger:getGameNameByGameId(gameid)
            self._gameNameList[gameid] = gameName
            self:addGameListBtn(gameName, gameid)
            len = len + 1
        end
    end

    local size = self._imgGameList:getContentSize()
    local sizeItem = self._btnGameListItem:getContentSize()
    self._imgGameList:setContentSize(size.width, sizeItem.height * len + 30)

    local sizeList  = self._listviewGameList:getContentSize()
    self._listviewGameList:setContentSize(sizeList.width, sizeItem.height * len)

    local showData = {
        [1] = {
            fightCnt = data.data.today.fightCnt,
            winRate = data.data.today.winRate,
            winScore = data.data.today.winScore,
        },
        [2] = {
            fightCnt = data.data.yesterday.fightCnt,
            winRate = data.data.yesterday.winRate,
            winScore = data.data.yesterday.winScore,
        },
        [3] = {
            fightCnt = data.data.lastThree.fightCnt,
            winRate = data.data.lastThree.winRate,
            winScore = data.data.lastThree.winScore,
        },
        [4] = {
            fightCnt = data.data.lastSeven.fightCnt,
            winRate = data.data.lastSeven.winRate,
            winScore = data.data.lastSeven.winScore,
        }
    }
    for i = 1, 4 do
        self["_txtRound"..i]:setString(showData[i].fightCnt)
        self["_txtWinRate"..i]:setString(showData[i].winRate == 0 and "--" or (tostring(showData[i].winRate).."%"))
        self["_txtScore"..i]:setString(showData[i].winScore)
    end
end

function SxvipGoldStatisticsItem:onBtnEventOpenVip()
    XH.viewManager:openView("SxvipShopView", nil, SxvipConfig.ThrowData.source.goldStatistics)
    XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy24090630)
end

function SxvipGoldStatisticsItem:refreshView()
end

return SxvipGoldStatisticsItem
.%