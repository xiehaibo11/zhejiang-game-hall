local GoldGameScene = NG.GAME.gameClass("GoldGameScene", "newgold.GoldGames.GoldGameBase.GoldGameScene")
local IsGoldBoxTest = require("app.Config.GlobalConfig").IsGoldBoxTest
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")
function GoldGameScene:getLayersConfig()
    local conf = {} --GoldGameScene.super.getLayersConfig(self)
    conf["TableInfoView"] = {path = "Modules.TableInfo.View", zOrder = 1}
    conf["Mahlayer"] = {path = "Modules.GameMain.MahLayer.View", zOrder = 101}
    conf["CardLayer"] = {path = "Modules.GameMain.CardLayer.CardLayer", zOrder = 4}
    conf["PlayersView"] = {path = "Modules.Players.View", zOrder = 5}
    conf["GameBtnsLayer"] = {path = "Modules.GameMain.GameBtnsLayer", zOrder = 5}
    conf["CardRecorderView"] = {path = "Modules.CardRecorder.View", zOrder = 5}
    conf["MatchView"] = {path = "Modules.Match.View", zOrder = 5}
    conf["TableAniView"] = {path = "Modules.TableInfo.TableAniView", zOrder = 6}
    conf["ResultView"] = {path = "Modules.Result.View", zOrder = 99}
    conf["BasicSysInfoLayer"] = {path = "Modules.Basic.BasicSysInfoLayer", zOrder = 2}
    conf["BasicBtnsLayer"] = {path = "Modules.Basic.BasicBtnsLayer", zOrder = 20}
    return conf
end

function GoldGameScene:initUI()
    GoldGameScene.super.initUI(self)
    self:addLayer("PlayersView")
    self:addLayer("GameBtnsLayer")
    if not IsGoldBoxTest then
        self:addLayer("MatchView")
        self:addLayer("TableAniView")
    end
    self:addLayer("Mahlayer")
    -- XH.SysTool.performDelayOnce(function()
    --     NG.UITool.printNodeInfo(NG.sceneManager:getTopScene())
    -- end, 2)
    -- self:addLayer("ResultView")
end

-- if __sprint == nil then
--     __sprint = print
--     print = function(...)
--         __sprint("**"..(GoldPlayerData.NumId or 0), ...)
--     end
-- end

return GoldGameScene