local FourToTwoConfig = {}

FourToTwoConfig.AreaConfig = {
    [900038] = { TeaHouseOpen = false, LobbyOpen = true, GameOpen = true,},  --"丽水"
    [900037] = { TeaHouseOpen = false, LobbyOpen = true, GameOpen = true,},  --"温州(茶)"
    [900017] = { TeaHouseOpen = false, LobbyOpen = true, GameOpen = true,},  --"温州(熟)"
    [900025] = { TeaHouseOpen = false, LobbyOpen = false, GameOpen = false,},  --"杭州(宝宝)"
    [900021] = { TeaHouseOpen = false, LobbyOpen = true, GameOpen = true,},  --"杭州"
    [900020] = { TeaHouseOpen = false, LobbyOpen = false, GameOpen = false,},  --"金华"
    [900036] = { TeaHouseOpen = false, LobbyOpen = true, GameOpen = true,},  --"瑞安"
    [900031] = { TeaHouseOpen = false, LobbyOpen = false, GameOpen = false,},  --"乐清"
    [900003] = { TeaHouseOpen = false, LobbyOpen = false, GameOpen = false,},  --"衢州"
    [900008] = { TeaHouseOpen = false, LobbyOpen = false, GameOpen = false,},  --"湖州"
    [900023] = { TeaHouseOpen = false, LobbyOpen = true, GameOpen = true,},  --"台州"
    [900043] = { TeaHouseOpen = false, LobbyOpen = false, GameOpen = false,},  --"舟山"
    [900039] = { TeaHouseOpen = false, LobbyOpen = false, GameOpen = false,},  --"青田"
    [900007] = { TeaHouseOpen = false, LobbyOpen = false, GameOpen = false,},  --"嵊州(越)" 
    [900006] = { TeaHouseOpen = false, LobbyOpen = false, GameOpen = false,},  --"宁波"
    [40165 ] = { TeaHouseOpen = false, LobbyOpen = false, GameOpen = false,},  --"嘉兴"
    [900029] = { TeaHouseOpen = false, LobbyOpen = false, GameOpen = false,},  --"余姚"
    [900046] = { TeaHouseOpen = false, LobbyOpen = false, GameOpen = false,},  --"绍兴麻将" 
}

FourToTwoConfig.ExceptGame = {
    30287,302872
}

FourToTwoConfig.GuideText = {
    "2人麻将，组局更快，90%玩家都在玩",
    "玩2人房间，去福利任务领奖哦~",
    "据说2人玩法可以防作弊，亲测有效！",
    "2人房间对局，奖励多多快来试试~",
    "身边小伙伴都在2人房间，你也试试呗~",
    "玩2人麻将，再也不怕三缺一",
}

function FourToTwoConfig.getGuideText()
    math.randomseed(tostring(os.time()):reverse():sub(1, 7)) 
    local textNum1 = math.random(#FourToTwoConfig.GuideText)
    local textNum2 = math.random(#FourToTwoConfig.GuideText)
    while textNum1 == textNum2 do
        textNum2 = math.random(#FourToTwoConfig.GuideText)
    end
    return FourToTwoConfig.GuideText[textNum1],FourToTwoConfig.GuideText[textNum2]
end

function FourToTwoConfig.getIsExceptGame(gameID)
    if not gameID then
        return false
    end
    for _, v in pairs(FourToTwoConfig.ExceptGame) do
        if v == gameID then
            return true
        end
    end
    return false
end

return FourToTwoConfig