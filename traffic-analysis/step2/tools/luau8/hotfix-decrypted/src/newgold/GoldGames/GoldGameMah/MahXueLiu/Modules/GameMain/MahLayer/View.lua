local GameView = NG.GAME.gameClass("MahjongGameView", NG.ViewBase)

function GameView:ctor()
    GameView.super.ctor(self)
    self._mahLayer = nil
    self._clockView = nil
    self._gameData = NG.goldGame:getModule("GameMain"):getData()
    self:initUI()

    NG.soundManager:playMusic()
    --     local aniPath = "NewGoldRes/Spine/MahXueLiu/xx/"
    --     local aniName = "Jiulianbaodeng" -- "Qixinglianzhu"
    --     local node = cc.Node:create()
    --     local params = { path = aniPath, tex = aniName .. ".json", ske = aniName .. ".atlas", armatureName = "animation", loop = false, scale=1 }
    --     local spineNode = display.playDargonBonesSpine(params)
    --     if spineNode then
    --         -- spineNode:setScale(1)
    --         spineNode:setPosition(display.cx, display.cy)
    --         node:addChild(spineNode)
    
    --         spineNode:registerSpineEventHandler(function(event)
    --             if event.eventData.name ~= "end" then
    --                 NG.audioManager:playEffect(aniPath .. event.eventData.name .. ".MP3")
    --             end
    --         end, sp.EventType.ANIMATION_EVENT)
    --         spineNode:registerSpineEventHandler(function(event)
    --             if event.type == 'complete' then
    --                 node:runAction(cc.Sequence:create(
    --                 cc.DelayTime:create(0.1),
    --                 cc.CallFunc:create(function()
    --                     node:removeFromParent(true)
    --                 end)
    --                 ))
    --             end
    --         end, sp.EventType.ANIMATION_COMPLETE)
    --     end
    --     NG.soundManager:playNewEffect("sound_bighu")
    --     self:addChild(node)
end

function GameView:getProxyEvents()
    return {
        { module = NG.GAME.settingData, eventKeyName = "EVENT_CHECK_MAHLAYER_DIMENSION", callBack = "onEventFlushMahlayerDimension" },
    }
end

function GameView:initUI()
    self:resetMahLayer(false)
    self:initAnimationView()
    self:initSpecfMahLayer()

    local listenerEventPlay = cc.EventListenerCustom:create("UIMahLayer.MahBaiBianClick", handler(self, self.onEvent))
    self._mahLayer:getEventDispatcher():addEventListenerWithSceneGraphPriority(listenerEventPlay, self._mahLayer)
end

function GameView:onEvent(event)
    local seat = NG.GAME.roomTableData:getSelfSeat()
    local brokenState = self._gameData:getBrokenState(seat)
    if brokenState == NG.GAME.GameDefine.BANKRUP_STATE.GIVEUP or brokenState == NG.GAME.GameDefine.BANKRUP_STATE.WAITE or brokenState == NG.GAME.GameDefine.BANKRUP_STATE.REQ_LEVE then
        NG.TipTool.showToast("当前状态无法变牌")
        return
    end
    if self._gameData:getLastBaiBianInfo() == nil then
        NG.msgManager:sendBianPai(event.data:getMahValue(), event.data._baiBianCnt)
        self._gameData:setLastBaiBianInfo({ value = event.data:getMahValue(), idx = event.data._baiBianIdx, cnt = event.data._baiBianCnt, mah = event.data })

        self:stopAllActions()
        self:runAction(cc.Sequence:create(cc.DelayTime:create(2), cc.CallFunc:create(function()
            self._gameData:setLastBaiBianInfo(nil)
        end)))
        -- self._gameData:updateBianPaiInfo({
        --     nSeat = 0,
        --     nValueBefore = 102, 
        --     nValueAfter = 0x11, 
        --     nCnt = event.data._baiBianCnt-1,
        -- })
    else
        NG.TipTool.showToast("操作过快")
    end
end


function GameView:_isShowMahLayer2D()
    return not NG.GAME.settingData:getIsMahlayer3D()
end

function GameView:removeMahLayer()
    self:removeClockView()
    if self._mahLayer then
        self._mahLayer:close()
        self._mahLayer = nil
    end
end

function GameView:createMahLayer2D()
    return NG.GAME.gameRequire("Modules.GameMain.MahLayer.View2D.UIMahLayer").new()
end

function GameView:createMahLayer3D()
    return NG.GAME.gameRequire("Modules.GameMain.MahLayer.View3D.UIMahLayer3D").new()
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
        NG.goldGame:getModule("GameMain.MahLayer"):dispatchEvent({ name = NG.goldGame:getModule("GameMain.MahLayer").EVENT_MAHLAYER_2D_BG_STATE, msg = true })
        self:initUIMahLayer()
        self:resetClockView()
    else
        NG.goldGame:getModule("GameMain.MahLayer"):dispatchEvent({ name = NG.goldGame:getModule("GameMain.MahLayer").EVENT_MAHLAYER_2D_BG_STATE, msg = false })
        self:initUIMahLayer(true)
    end

    if bChange2D3D then
        -- CF.game:doRelink() todo
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
    self._clockView = NG.GAME.gameRequire("Modules.GameMain.MahLayer.TableClockView").new()
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
    self._animationView = NG.GAME.gameRequire("Modules.GameMain.MahLayer.AnimationLayer").new()
    self:addChild(self._animationView, 2)

    -- local outEffect = NG.GAME.settingData:getOutEffects()
    -- if outEffect then
    --     CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.GAME_SET_CHOWPUNG, {style = outEffect, gameName = CF.gameSub:getGameNameByGameId()})
    -- end
end

function GameView:removeSpecfMahLayer()
    if self._uiSpecfMahLayer then
        self._uiSpecfMahLayer:close()
        self._uiSpecfMahLayer = nil
    end
end

function GameView:initSpecfMahLayer()
    if self._uiSpecfMahLayer == nil then
        self._uiSpecfMahLayer = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View2D.UISpecfMahLayer"):new()
        --self._uiSpecfMahLayer:init(self._specfMahPanel)
        self:addChild(self._uiSpecfMahLayer, 3)
        return self._uiSpecfMahLayer
    end
    return self._uiSpecfMahLayer
end

function GameView:onEventFlushMahlayerDimension(event)
    self:resetMahLayer(true)
end

return GameViewD