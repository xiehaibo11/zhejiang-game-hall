local ShuffleView = CF.gameClass("ShuffleView", "game.GameBase.Modules.PropUse.ShuffleView")

function ShuffleView:getBindingInfo()
    local baseBind = ShuffleView.super.getBindingInfo(self)
    local newBind = {
        ["_KW_ANI_PARTICLE"] = {varName="_aniParticle"}
    }
    table.merge(baseBind, newBind)
    return baseBind
end

function ShuffleView:initGameTypeUI()
    ShuffleView.super.initGameTypeUI(self)
    if self._param and self._param.shufferText then
        self._imgShuffleing:setVisible(false)
        self._txtshufflePlayers:setVisible(true)
        self._txtshufflePlayers:setString(self._param.shufferText)
    end
end

function ShuffleView:updateShufflePlayer(playerName)
    if not playerName then
        return
    end
    self._txtshufflePlayers:setString(playerName)
end

function ShuffleView:playShuffleAni()
    ShuffleView.super.playShuffleAni(self)
    if self._param and self._param.shufferText then
        self:showParticleAni()
    end
end

function ShuffleView:showParticleAni()
    if not self._txtshufflePlayers then
        return
    end
    local strSize = self._txtshufflePlayers:getContentSize()
    if self._aniParticle then
        self._aniParticle:setPositionX(0)
        local actionTime = 1.28
        self._aniParticle:stopAllActions()
        self._aniParticle:setScale(3)
        local targetPosX = strSize.width
        local targetPosY = self._aniParticle:getPositionY()
        local actSpawn = cc.MoveTo:create(actionTime, cc.p(targetPosX, targetPosY))
        local actSequence = cc.Sequence:create(cc.CallFunc:create(function()
                                self._aniParticle:setVisible(true)
                            end), actSpawn, cc.CallFunc:create(function()
                                self._aniParticle:setVisible(false)
                            end))
        self._aniParticle:runAction(actSequence)
    end
end

return ShuffleView
