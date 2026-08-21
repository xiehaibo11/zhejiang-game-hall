local GoldGameScene = NG.GAME.gameClass("GoldGameScene", "newgold.GoldGames.GoldGameBase.GoldGameScene")

function GoldGameScene:getLayersConfig()
    local conf = GoldGameScene.super.getLayersConfig(self)
    conf["TableInfoView"] = {path = "Modules.TableInfo.View", zOrder = 1}
    conf["CardLayer"] = {path = "Modules.GameMain.CardLayer.CardLayer", zOrder = 4}
    conf["PlayersView"] = {path = "Modules.Players.View", zOrder = 5}
    conf["GameBtnsLayer"] = {path = "Modules.GameMain.GameBtnsLayer", zOrder = 5}
    conf["CardRecorderView"] = {path = "Modules.CardRecorder.View", zOrder = 5}
    conf["MatchView"] = {path = "Modules.Match.View", zOrder = 5}
    conf["GameNoticeLayer"] = {path = "Modules.GameMain.GameNoticeLayer", zOrder = 6}
    conf["TableAniView"] = {path = "Modules.TableInfo.TableAniView", zOrder = 6}
    conf["ResultView"] = {path = "Modules.Result.View", zOrder = 99}
    conf["ZuoPaiView"] = {path = "Modules.ZuoPai.View", zOrder = 98}
    return conf
end

function GoldGameScene:initUI()
    self:addLayer("TableInfoView")
    GoldGameScene.super.initUI(self)
    self:addLayer("CardLayer")
    self:addLayer("PlayersView")
    self:addLayer("GameBtnsLayer")
    self:addLayer("CardRecorderView")
    self:addLayer("MatchView")
    self:addLayer("GameNoticeLayer")
    self:addLayer("TableAniView")
    -- self:addLayer("ResultView")
    -- self:addLayer("ZuoPaiView")

  

    -- local tipLogic = NG.goldGame:getModule("GameMain"):getTipLogic()
    -- local selfHandCards = { 54,28,15,2,10,33,20,7,31,43,30,17,4,42,29,16,3}
    -- local preOutCard = { 49,36,23,46}
    -- self._tipData = tipLogic:getTipCard(selfHandCards, preOutCard)
    -- dump(self._tipData,"tipData")
end

return GoldGameScene�