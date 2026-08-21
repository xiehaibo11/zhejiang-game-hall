local CardArea = CF.gameClass("CardArea", "game.BaseCardGame.Modules.CardLayer.CardArea")

function CardArea:ctor()
    CardArea.super.ctor(self)
end

function CardArea:playSendCardAnimation()
    local lastScale = self._cards[1]:getParent():getScaleX()
    self._cards[1]:getParent():setScaleX(1.07 * lastScale)
    local midCard = math.floor(#self._cards / 2)
    local cardNode = self._cards[midCard]
    for i = #self._cards, 1, -1 do
        local lastPosx = self._cards[i]:getPositionX()
        self._cards[i]:setPositionX(cardNode:getPositionX())
        self._cards[i]:setVisible(true)
        self._cards[i]:runAction(
        cc.Sequence:create(
        cc.MoveTo:create(6 / 30, cc.p(lastPosx, self._cards[i]:getPositionY())),
        cc.CallFunc:create(
        function()
            if i == 1 then
                local parentNode = self._cards[1]:getParent()
                parentNode:runAction(
                cc.Sequence:create(
                cc.ScaleTo:create(5 / 30, lastScale, lastScale),
                cc.CallFunc:create(
                function()
                    self._bPlayingSendCardAni = false
                end
                )
                )
                )
            end
        end
        )
        )
        )
    end
    -- 玩家某种异常情况导致动画未来播放完成
    CF.SysTool.performDelayOnce(function()
        if not self or tolua.isnull(self) then
            return
        end
        if self._cards and self._cards[1] then
            local parentNode = self._cards[1]:getParent()
            if parentNode then
                local curScale = parentNode:getScaleX()
                if curScale ~= lastScale then
                    parentNode:setScaleX(lastScale)
                    self._bPlayingSendCardAni = false
                end
            end
        end
    end, 1)
end

return CardArea�