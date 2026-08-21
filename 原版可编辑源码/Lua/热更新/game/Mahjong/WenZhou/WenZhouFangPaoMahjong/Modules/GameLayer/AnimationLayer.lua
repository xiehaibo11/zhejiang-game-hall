local AnimationLayer = CF.gameClass("AnimationLayer", "game.Mahjong.BasicMahjong.Modules.GameLayer.AnimationLayer")

function AnimationLayer:ctor(param)
    param = param or {}
    AnimationLayer.super.ctor(self, param)

    self._kungScoreNode = {}
    self:initKungScoreNode()
end

function AnimationLayer:getProxyEvents()
    local proxyEvents = AnimationLayer.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_KUNG_SCORE_ANI", callBack = "onShowKungScoreAni"}
    return proxyEvents
end


function AnimationLayer:showChip()
    -- 已经不在游戏中
    if not CF.game then
        return
    end
    if #self._chipsList == 0 or #self._chipsList > 1 then
        CF.game:getModule("GameLayer"):sendEventChipsAniFinish()
        return
    end
    if self._isStartChipAni then
        return
    end
    self._curChipSpeedScale = self._chipsSpeedScaleList[1] or 1
    if self._curChipSpeedScale <= 0 then
        self._curChipSpeedScale = 1
    end
    CF.soundManager:playSoundChip()
    self:playShaiZiAnimation(self._chipsList[1])
end

function AnimationLayer:initKungScoreNode()
    for i = 1, CF.roomData:getMaxPlayer() do
        if self._kungScoreNode[i] == nil then
            self._kungScoreNode[i] = ccui.TextBMFont:create()
            if self["_panelKungScore_" .. i] then
                self._kungScoreNode[i]:setAnchorPoint(0.5, 0)
                self["_panelKungScore_" .. i]:addChild(self._kungScoreNode[i])
--                self._kungScoreNode[i]:setString("66")
--                self._kungScoreNode[i]:setFntFile("res/cocosStudio/MahjongNew/GameLayer/Font/win_number-export.fnt")
            end
        end
        self._kungScoreNode[i]:setVisible(false)
    end
    return self._kungScoreNode
end

function AnimationLayer:onShowKungScoreAni(event)
    local score = event.msg
    for i = 0, CF.roomData:getChairs() - 1 do
        local localSeat = CF.roomData:seatToLocal(i)
        if self._kungScoreNode[localSeat] then
            self._kungScoreNode[localSeat]:setVisible(true)
            local fntPath = "res/cocosStudio/MahjongNew/GameLayer/Font/win_number-export.fnt"
            if score[i] < 0 then
                fntPath = "res/cocosStudio/MahjongNew/GameLayer/Font/lose_number-export.fnt"
            end
            self._kungScoreNode[localSeat]:setFntFile(fntPath)
            --self._kungScoreNode[localSeat]:setFontSize(72)
            if score[i] < 0 then
                self._kungScoreNode[localSeat]:setString(score[i])
            else
                self._kungScoreNode[localSeat]:setString("+" .. score[i])
            end
            CF.SysTool.performWithDelayGlobal(function()
                self._kungScoreNode[localSeat]:setOpacity(255)
                self._kungScoreNode[localSeat]:setVisible(false)
            end, 2.2)
            local appearAction = cc.Sequence:create(
                cc.FadeIn:create(0.2),
                cc.DelayTime:create(1.8),
                cc.FadeOut:create(0.2)
            )
            self._kungScoreNode[localSeat]:runAction(appearAction)
        end
    end
end

return AnimationLayer
