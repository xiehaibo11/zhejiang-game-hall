local GameScene = CF.gameClass("GameScene", CF.gameScriptRootPath .. ".BaseCardGame.GameScene")

function GameScene:ctor()
    GameScene.super.ctor(self)
end

function GameScene:getViewsConfig()
    return {
        RoomCenterInfoView = {path = "Modules.RoomInfo.CenterView", zOrder = 10},
        CenterBtnsView = {path = "Modules.CenterBtns.View", zOrder = 30},
        PlayerView = {path = "Modules.Player.View", zOrder = 15},
        ResHotfixView = {path = "Modules.ResHotfix.View", zOrder = 41},
        WatchGameView = {path = "Modules.WatchGame.View", zOrder = 45},
        RightBtnsView = {path = "Modules.RightBtns.View", zOrder = 31},
        PlayBackView = {path = "Modules.PlayBack.View", zOrder = 90},
        GameLayer = {path = "Modules.GameLayer.View", zOrder = 20},
        AnimationLayer = {path = "Modules.Animation.View", zOrder = 33},
        RoundLayer = {path = "Modules.RoundLayer.View", zOrder = 32},
        ActIconLayer = {path = "Modules.ActIconLayer.View", zOrder = 30},
        PropAniLayer = {path = "Modules.PropAni.View", zOrder = 72},
        TeachingView = {path = "Modules.Teaching.View", zOrder = 90},
        DarkShuangKouDebug = {path = "Modules.DarkShuangKouDebug.View", zOrder = 1000}
    }
end

function GameScene:initUI()
    self:addView("RoomCenterInfoView")
    self:addView("PlayerView")
    self:addView("PropAniLayer")
    if CF.roomData:getIsSeer() then
        self:addView("CenterBtnsView")
        if CF.gameSoundHotUpdate then
            self:addView("ResHotfixView")
        end
        self:addView("RightBtnsView")
        self:addView("WatchGameView")
        return
    end
    self:addView("CenterBtnsView")
    if CF.gameSoundHotUpdate then
        self:addView("ResHotfixView")
    end
    if CF.roomData:isPlayBack() then
        self:addView("PlayBackView")
    else
        self:addView("RightBtnsView")
    end
    self:addView("GameLayer")
    self:addView("AnimationLayer")
    self:addView("RoundLayer")
    
    if CF.roomData:isDebug() then
        self:addView("DarkShuangKouDebug")
    end
    if CF.roomData:isTeaching() then
        self:addView("TeachingView", nil, self)
    else
        self:addView("ActIconLayer")
    end
end

function GameScene:onEnter()
    GameScene.super.onEnter(self)
    self:start()
    if CF.roomData:isTeaching() then
        CF.game:getModule("Teaching"):continueNovice()
    end
end

return GameScene
