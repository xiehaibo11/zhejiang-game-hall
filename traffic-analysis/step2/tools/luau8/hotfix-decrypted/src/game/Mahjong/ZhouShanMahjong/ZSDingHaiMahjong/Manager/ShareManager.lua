local ShareManager = CF.gameClass("ShareManager", "game.Mahjong.BasicMahjong.Manager.ShareManager")

function ShareManager:createTotoalResultCopyInfo(info)
    info = info or {}
    local gameid = CF.roomData:getGameID()
    local shareCfg = self:getCfgDataByGameId(gameid)
    local gameName = shareCfg.GameName or "浙江游戏大厅"
    local boxRoomId = string.format("%06d", CF.roomData:getRoomID()) or "123456"
    local totalPlayCount = info.playCount or "4"
    local createTime = info.timeStr or os.date("%Y-%m-%d  %H:%M:%S", os.time())
    local players = info.players or {}
    local KW_DEFAULT_STRING = "------"
    local playerInfo = ""
    for index = 0, #players do
        local nickName = CF.StringTool.cutStringByLength(players[index]._szNickname2) or KW_DEFAULT_STRING
        local numberID = players[index]._nNumberID or KW_DEFAULT_STRING
        local score = info.totalScore[index]
        score = score > 0 and "+" .. score or score
        playerInfo = playerInfo .. "\n" .. score .. " " .. nickName .. "(" .. numberID .. ")"
    end
    local strText = "游戏: " .. gameName .. "\n房号:" .. boxRoomId .. 
                    "\n局数:共" .. totalPlayCount .. "局\n时间:" .. createTime .. 
                    "\n--------------------------".. playerInfo .."\n--------------------------\n"
    local gameRule = CF.roomData:getGameRule()
    if string.find(gameRule, "不洗牌") then
        strText = strText .. "已勾选不洗牌\n" .. "手牌更顺  打牌畅快\n" .. "规则不变  对局抽奖"
    else
        strText = strText .. "不洗牌玩法上线\n" .. "规则不变 手牌更顺\n" .. "对局抽奖试试吧~"
    end
    return strText
end

return ShareManager�