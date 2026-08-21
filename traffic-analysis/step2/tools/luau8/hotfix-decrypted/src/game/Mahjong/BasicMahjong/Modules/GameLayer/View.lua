local GameView = CF.gameClass("MahjongGameView", CF.ViewBase)

function GameView:ctor()
    GameView.super.ctor(self)
    self._mahLayer = nil
    self._clockView = nil
    self:initUI()
end

function GameView:getProxyEvents()
    return {
        {module = CF.settingData, eventKeyName = "EVENT_CHECK_MAHLAYER_DIMENSION", callBack = "onEventFlushMahlayerDimension"},
        -- {module = CF.roomData, eventKeyName = "EVENT_UPDATE_SEER_MAHLAYER", callBack = "onEventFlushMahlayerDimension"},
    }
end

function GameView:initUI()
    self:resetMahLayer(false)
    self:initAnimationView()
    self:initSpecfMahLayer()
end

function GameView:_isShowMahLayer2D()
    return not CF.settingData:getIsMahlayer3D()
end

function GameView:removeMahLayer()
    self:removeClockView()
    if self._mahLayer then
        self._mahLayer:close()
        self._mahLayer = nil
    end
end

function GameView:createMahLayer2D()
    local areaIDAndGameID = CF.areaData:getAreaID() .. "_" .. CF.roomData:getGameID() 
    local roomMode = CF.roomData:getRoomMode2()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.dh25021401, {page_item_id = "2d",game_id = areaIDAndGameID,room_mode = roomMode})
    return CF.gameRequire("Modules.GameLayer.View2D.UIMahLayer").new()
end

function GameView:createMahLayer3D()
    local areaIDAndGameID = CF.areaData:getAreaID() .. "_" .. CF.roomData:getGameID() 
    local roomMode = CF.roomData:getRoomMode2()
    local strPageItemID = "3d新版"
    if CF.settingData:get3DVisualAngle() == 2 then
        strPageItemID = "3d经典"
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.dh25021401, {page_item_id = strPageItemID,game_id = areaIDAndGameID,room_mode = roomMode})

    local loaded = package.loaded
    local removeFiles = {
        "GameLayer.View3D",
        "GameLayer.ViewBase",
        "GameLayer.Config"
    }
    for i = 1, #removeFiles do
        local removeFile = removeFiles[i]
        for k,v in pairs(loaded) do
            if string.find(k, removeFile) then
                -- 卸载该模块
                package.loaded[k] = nil
            end
        end 
    end
    return CF.gameRequire("Modules.GameLayer.View3D.UIMahLayer3D").new()
end

function GameView:initUIMahLayer(b3D)
    if self._mahLayer then
        return
    end
    if b3D then
        self._mahLayer = self:createMahLayer3D()
    else
        self._mahLayer = self:createMahLayer2D()
    end
    self:addChild(self._mahLayer, 2)
    self:setContentSize(self._mahLayer:getContentSize())
end

-- 重置MahLayer，切换2D和3D时也调用此接口，bChange2D3D传true
function GameView:resetMahLayer(bChange2D3D)
    self:removeMahLayer()

    if self:_isShowMahLayer2D() then
        CF.game:getModule("GameLayer"):dispatchEvent( { name = CF.game:getModule("GameLayer").EVENT_MAHLAYER_2D_BG_STATE, msg = true })
        self:initUIMahLayer()
        self:resetClockView()
    else
        CF.game:getModule("GameLayer"):dispatchEvent( { name = CF.game:getModule("GameLayer").EVENT_MAHLAYER_2D_BG_STATE, msg = false })
        self:initUIMahLayer(true)
    end

    if bChange2D3D then
        CF.game:doRelink()
    end
end

function GameView:removeClockView()
    if self._clockView then
        self._clockView:close()
        self._clockView = nil
    end
end

function GameView:resetClockView()
    self:removeClockView()
    self._clockView = CF.gameRequire("Modules.GameLayer.TableClockView").new()
    self:addChild(self._clockView, 1)
end

function GameView:removeAnimationView()
    if self._animationView then
        self._animationView:close()
        self._animationView = nil
    end
end

function GameView:initAnimationView()
    self:removeAnimationView()
    self._animationView = CF.gameRequire("Modules.GameLayer.AnimationLayer").new()
    self:addChild(self._animationView, 2)

    local outEffect = CF.settingData:getOutEffects()
    if outEffect then
        CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.GAME_SET_CHOWPUNG, {style = outEffect, gameName = CF.gameSub:getGameNameByGameId()})
    end
end

function GameView:removeSpecfMahLayer()
    if self._uiSpecfMahLayer then
        self._uiSpecfMahLayer:close()
        self._uiSpecfMahLayer = nil
    end
end

function GameView:initSpecfMahLayer()
    if self._uiSpecfMahLayer == nil then
        self._uiSpecfMahLayer = CF.gameRequire("Modules.GameLayer.View2D.UISpecfMahLayer"):new()
        --self._uiSpecfMahLayer:init(self._specfMahPanel)
        self:addChild(self._uiSpecfMahLayer, 3)
        return self._uiSpecfMahLayer
    end
    return self._uiSpecfMahLayer
end

function GameView:onEventFlushMahlayerDimension(event)
    self:resetMahLayer(true)
end

return GameView�