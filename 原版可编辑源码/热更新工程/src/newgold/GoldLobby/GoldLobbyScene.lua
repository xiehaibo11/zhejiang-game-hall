local GoldLobbyScene = class("GoldLobbyScene", NG.SceneBase)

function GoldLobbyScene:ctor(param)
    GoldLobbyScene.super.ctor(self)
    --预加载图集
    cc.FileUtils:getInstance():purgeCachedEntries()
    self:init(param)
end

function GoldLobbyScene:init(param)
    param = param or {}
    if NG.goldLobby:getModule("GoldCommon"):isPeakRace() then
        self.content = require("newgold.GoldLobby.Modules.PeakRace.View").new(param):addTo(self)
    else
        self.content = require("newgold.GoldLobby.Modules.Gold.View").new(param):addTo(self)
    end
end

function GoldLobbyScene:onEnter()
    self.super.onEnter(self)
    NG.audioManager:play("BG_START")
    XH.SceneManager:getInstance():updatePopNode()
    cc.Director:getInstance():setAnimationInterval(1 / 30)
    if self.content then
        self.content:setVisible(true)
    end
end

function GoldLobbyScene:onExit()
    self.super.onExit(self)
end

function GoldLobbyScene:cleanup()
    self.content:cleanup()
end

return GoldLobbyScene