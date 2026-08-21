local ShuffleView = CF.gameClass("ShuffleView", "game.GameBase.Modules.PropUse.ShuffleView")

function ShuffleView:ctor(param)
    param = param or {}
    self._isLocalShuffle = param.isLocalShuffle
    self._shufferText = param.shufferText or ""
    self._shuffleAni = nil
    ShuffleView.super.ctor(self, param.param)

    local mode = CF.game:getModule("Shuffle4")
    if mode then
        mode:onStartShuffle({ CF.selfPlayerData:getNumberID() })
    end
end

function ShuffleView:initGameTypeUI()
    self._imgShuffleing:setVisible(false)
    self._txtshufflePlayers:setVisible(true)

    if CF.game:getModule("PropUse"):isSupportNewAni() then
        self._panelShuffleAniPos:setScale(1.3)
        self._panelShuffleAniPos:setPositionY(-300)
        --添加洗牌动画
        if not self._shuffleAni then
            local path = "res/animation/Mahjong/Base/washcard_movie/"
            local filename = "zzb_xipai_mj"
            local aniName = "animation"
            local changeCardModule = CF.game:getModule("ChangeCard")
            if changeCardModule and changeCardModule:isChangeCardSuccess() then
                aniName = "animation2"
            end
            self._shuffleAni = CF.SpineManager:playAni(self._panelShuffleAniPos, path, filename, aniName, false)
        end
    else
        self._panelShuffleAniPos:setScale(1)
        self._panelShuffleAniPos:setPositionY(0)
        --添加洗牌动画
        local params = {
            path = "res/animation/Mahjong/Base/washcard_movie/",
            ske = "xipai_ani_ske.json",
            tex = "xipai_ani_tex.json",
            armatureName = "Armature",
            dragonBonesName = "xipai_ani",
            animationName = "new_xipai"
        }
        if not self._shuffleAni then
            self._shuffleAni = display.playDargonBonesAnimByTimes(params, 1)
            if self._shuffleAni then
                self._panelShuffleAniPos:removeAllChildren()
                self._panelShuffleAniPos:addChild(self._shuffleAni)
            end
        end
    end
    --添加洗牌玩家
    self._txtshufflePlayers:setString(self._shufferText)
    local txtSize = self._txtshufflePlayers:getContentSize()
    self._imgShufflePlayerBg:setContentSize(self._imgShufflePlayerBg:getContentSize().width, math.max(100, txtSize.height + 20))
    self._txtshufflePlayers:setPositionY(self._imgShufflePlayerBg:getContentSize().height / 2)
end

function ShuffleView:playShuffleAniNew()
    self:playShuffleAni()
end

function ShuffleView:playShuffleAni()
    self:runAction(cc.Sequence:create(cc.DelayTime:create(2.57),cc.CallFunc:create(function()
        if CF.roomData and CF.game and CF.roomData:isPlayBack() then
            CF.game:getModule("PlayBack"):play()
            self:close()
        else
            self:startNextGame()
        end
    end)))
end

function ShuffleView:startNextGame()
    if self._isLocalShuffle then
        if CF.roomData and CF.roomData:isOpenCutCards() then
            if type(self._param) == "string" then
                if string.find(self._param, "preCut=1") then
                    CF.game:getModule("PropUse"):reqCutCardWithProp(false)
                    self:close()
                    return
                end
            end
            local cutCardsView = CF.gameRequire("Modules.PropUse.CutMahsView").new(self._param)
            cutCardsView:showSelf()
            self:close()
            return
        end
        if CF.roomData and CF.roomData.isSupportPreShuffle and CF.roomData:isSupportPreShuffle() then
            CF.game:getModule("PropUse"):shuffleFinished()
        else
            CF.game:getModule("CenterBtns"):onStartGameEvent()  -- 不支持预洗牌的直接开局
        end
    end
    self:close()
end

return ShuffleView
$