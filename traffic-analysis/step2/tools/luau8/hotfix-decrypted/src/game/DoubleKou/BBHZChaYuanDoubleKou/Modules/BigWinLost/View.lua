local BigWinLostUI = CF.gameClass("BigWinLostUI", "game.DoubleKou.BaseDoubleKou.Modules.BigWinLost.View")

local KW_PANEL_HEAD_POS = "KW_PANEL_HEAD_POS"
local KW_IMG_HOST = "KW_IMG_HOST"
local KW_TEXT_NICK_NAME = "KW_TEXT_NICK_NAME"
local KW_TEXT_NUM_ID = "KW_TEXT_NUM_ID"
local KW_DEFAULT_STRING = "------"


--大结束显示每局分数
function BigWinLostUI:setPlayersInfo(param)
    if param == nil then
        return
    end

    local players = param.players or {}

    local gameType = CF.game:getModule("GameLayer"):getGameData():getGameType()
    for seat, player in pairs(players) do
        local playerUi = self:getPlayerItem(seat+1)

        CF.UITool.setText(playerUi, KW_TEXT_NICK_NAME, player:getNickName() or KW_DEFAULT_STRING)
        CF.UITool.setText(playerUi, KW_TEXT_NUM_ID, ("序号: " .. player:getNumberID() or KW_DEFAULT_STRING))
        CF.UITool.setVisible(playerUi, KW_IMG_HOST, seat == param.hostSeat)
        self:updateImg(CF.UITool.seekNodeByName(playerUi, KW_PANEL_HEAD_POS), player:getAvatarUrl())

        local scores = {}
        if gameType ~= CF.GameDefine.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_HANGZMAQUAN then
            table.insert(scores, param.maxXian[seat] or 0)
        end
        table.insert(scores, param.maxWin[seat] or 0)
        table.insert(scores, param.totalDoubleKou[seat] or 0)

        local scoreDes = {}
        if gameType ~= CF.GameDefine.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_HANGZMAQUAN then
            table.insert(scoreDes, "最大线数")
        end
        table.insert(scoreDes, "最高优胜值")
        table.insert(scoreDes, "双扣次数")
        self:setPlayerDesc(playerUi, scores, scoreDes)

        self:setPlayerTotalScore(seat+1, param.totalScore[seat])
        self:updateHeadFrame(CF.UITool.seekNodeByName(playerUi, KW_PANEL_HEAD_POS), player:getNumberID())
    end
    if param.maxTotalScoreSeat then
        self:setBigWinner(param.maxTotalScoreSeat + 1, players)
    end
    if param.bigWinnerSeat then
        self:setBigWinner(param.bigWinnerSeat + 1, players)
    end
    if param.bigWinnerSeatList then
        for _, bigWinnerSeat in ipairs(param.bigWinnerSeatList) do
            self:setBigWinner(bigWinnerSeat + 1, players)
        end
    end
end

return BigWinLostUI	