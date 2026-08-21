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
    NG.GAME.configData = NG.GAME.gameRequire("Modules.GameMain.Data.ConfigData").new()
    NG.GAME.GameDefine = NG.GAME.gameRequire("Modules.GameMain.MahLayer.Define.GameDefine")
end


function GoldGameManager:initSettingData()
    NG.GAME.settingData = NG.GAME.gameRequire("Modules.GameMain.Data.SettingData").new()
end

function GoldGameManager:showChat()
    NG.GAME.gameRequire("Modules.Chat.ChatLayer").new(true):showSelf(GameMainDefine.ChatList)
end

function GoldGameManager:showWinlost(isShowAct)
    NG.GAME.gameRequire("Modules.Result.View").new():showSelf(isShowAct)
end

function GoldGameManager:showHelper()
    local gameID = NG.GAME.roomTableData:getGameID()
    NG.GAME.gameRequire("Modules.Rule.RuleLayer").new(gameID):showSelf()

    -- NG.goldGame:showBankrupView()
end

function GoldGameManager:showBankrupTip()
    NG.goldGame:showBankrupView()
end

function GoldGameManager:showBeanLog()
    NG.GAME.gameRequire("Modules.GameMain.BeanLog").new():showSelf()
end
function GoldGameManager:showBankrupView()
    NG.GAME.gameRequire("Modules.Bankrup.BankrupView").new():showSelf()
end
-- 领奖
function GoldGameManager:showAwardView(data)
    NG.viewManager:openView("NewGold_AwardView", nil, nil, {
        prize_names = {"x"..data.gold},
        image_urls = {"https://palmastatic.wenzhoushuke.com//materials/images/20230522/11354115106.png"}
    })
end
return GoldGameManager
�