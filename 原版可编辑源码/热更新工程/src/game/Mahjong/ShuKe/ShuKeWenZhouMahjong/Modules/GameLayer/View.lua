local GameView = CF.gameClass("GameView", "game.Mahjong.BasicMahjong.Modules.GameLayer.View")

function GameView:initUI()
    GameView.super.initUI(self)

    self.quickUILayer = nil
    self:initFollowMahAni()
    self:initTableInfoUI()
end

function GameView:getProxyEvents()
    local proxyEvents = GameView.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_QUICK_UI_LAYER", callBack = "onShowQuickStartUI" }
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_CLEAR_QUICK_UI_LAYER", callBack = "onClearQuickStartUI" }
    return proxyEvents
end

function GameView:onShowQuickStartUI(event)
    if not self.quickUILayer then
        self.quickUILayer = CF.gameRequire("Modules.GameLayer.QuickStartUI")
        if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then
            return
        else
            self.quickUILayer.new(event.msg):showSelf()
        end
    end
end

function GameView:onClearQuickStartUI(event)
    self.quickUILayer = nil
end

function GameView:removeFollowMahAni()
    if self._followMahAniLayer then
        self._followMahAniLayer:close()
        self._followMahAniLayer = nil
    end
end

function GameView:initFollowMahAni()
    self:removeFollowMahAni()
    self._followMahAniLayer = CF.gameRequire("Modules.GameLayer.FollowMahUI").new()
    self:addChild(self._followMahAniLayer)
end

function GameView:removeTableInfoUI()
    if self._tableInfoLayer then
        self._tableInfoLayer:close()
        self._tableInfoLayer = nil
    end
end

function GameView:initTableInfoUI()
    if not CF.roomData:isGoldRoom() then
        self:removeTableInfoUI()
        self._tableInfoLayer = CF.gameRequire("Modules.GameLayer.TableInfoUI").new()
        self:addChild(self._tableInfoLayer,2)
    end
end


return GameView