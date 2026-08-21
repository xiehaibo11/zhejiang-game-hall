local GoldGameManager = NG.GAME.gameClass("GoldGameManager", "newgold.GoldGames.GoldGameBase.GoldGameManager")
local GameMainDefine = NG.GAME.gameRequire("Modules.GameMain.Define.GameMainDefine")

function GoldGameManager:getPermanentModules()
    local conf = GoldGameManager.super.getPermanentModules() or {}
    table.insert(conf, "Players")
    return conf
end

function GoldGameManager:ctor()
    GoldGameManager.super.ctor(self)
    self:initGameData()
end

function GoldGameManager:initGameData()
    NG.GAME.roomTableData = NG.GAME.gameRequire("Data.RoomTableData"):getInstance()
end

function GoldGameManager:showChat()
    NG.GAME.gameRequire("Modules.Chat.ChatLayer").new():showSelf(GameMainDefine.ChatList)
end

function GoldGameManager:showWinlost(isShowAct)
    NG.GAME.gameRequire("Modules.Result.View").new():showSelf(isShowAct)
end

function GoldGameManager:showZuoPai()
    local seat = NG.GAME.roomTableData:getSelfSeat()
    if seat == 0 then
        NG.GAME.gameRequire("Modules.ZuoPai.View").new():showSelf()        
    end
end

return GoldGameManager
U