local GameView = CF.gameClass("GameView", "game.Mahjong.BasicMahjong.Modules.GameLayer.View")
local saveKeyFirstLogin = "shaoxing3dfirstlogin"

function GameView:ctor()
    GameView.super.ctor(self)
    self:reset3Dstate()
end

function GameView:initUI()
	GameView.super.initUI(self)
	self:initTabelInfoView()
end

function GameView:removeTabelInfoView()
    if self._TableInfoView then
        self._TableInfoView:close()
        self._TableInfoView = nil
    end
end

function GameView:initTabelInfoView()
    self:removeTabelInfoView()
    self._TableInfoView = CF.gameRequire("Modules.GameLayer.TableInfoLayer").new()
    self:addChild(self._TableInfoView, 3)
end

function GameView:reset3Dstate()
    local state = cc.UserDefault:getInstance():getBoolForKey(saveKeyFirstLogin, false)
    if state == false then
        cc.UserDefault:getInstance():setBoolForKey(saveKeyFirstLogin, true)
        CF.settingData:setMahlayerDimension(true)
        CF.settingData:setMahOutCardStyle(2)
    end
end

return GameView