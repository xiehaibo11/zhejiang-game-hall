local UIMahLayer = CF.gameClass("UIMahLayer", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.GameLayer.View2D.UIMahLayer")

function UIMahLayer:_getCKongShowBackIndexs(combData)
    if not combData.mahValues or #combData.mahValues > 4 then
        return {}
    end
    return {4}
end

function UIMahLayer:onTouchEventActionButton(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return 
    end

    if send == self._actionButton1 then
        self._actionButton1:setEnabled(false)
        if self:getGameData():getPlayPower() 
            and self._actionButton5 and self._actionButton5:isVisible()
            and self._actionRegret then
                self._actionRegret:setVisible(true)
                self._actionRegret:setEnabled(true)
                self._actionButton1:setVisible(false)
                self._actionButton5:setEnabled(false)
                local x = self._actionButton5:getPositionX() + 120
                local y = self._actionButton5:getPositionY() + 160
                self._actionRegret:setPosition(x, y)
                return
        else
            CF.SysTool.performWithDelayGlobal(function()
                self._actionButton1:setEnabled(true)
            end,1)
            --CF.msgManager:sendCancel(self:getGameData():getActionID())
            CF.game:getModule("GameLayer"):doActionCancel()
        end
    elseif send == self._actionRegret then
        self._actionRegret:setVisible(false)
        self._actionRegret:setEnabled(false)
        self._actionButton1:setVisible(true)
        self._actionButton1:setEnabled(true)
        self._actionButton5:setEnabled(true)
        return
    elseif send == self._actionButton2 then
        CF.game:getModule("GameLayer"):doActionChow()
    elseif send == self._actionButton3 then
        CF.game:getModule("GameLayer"):doActionPong()
    elseif send == self._actionButton4 then   
        CF.game:getModule("GameLayer"):doActionKong()
    elseif send == self._actionButton5 then
        CF.game:getModule("GameLayer"):doActionHu()
    end
    self:showAction({}, false)
end

function UIMahLayer:showActionCombs(combs, isShow)
    UIMahLayer.super.showActionCombs(self, combs, isShow)
    if self._actionCombsMovePanel then
        self._actionCombsMovePanel:setVisible(isShow)
    end
end

function UIMahLayer:onTouchEventActionComb(send, eventType)
    local index = send:getTag()
    local tmpCombs = self._combMahsData[index]
    if not self._combMahsData[index] then
        print("出错了！！！")
        return
    end
    self:getGameData():setPlayPower(false)
    local tmpFlag = 0
    local tmpInMahs = {}
    local tmpFromSeat = CF.roomData:getMaxPlayer()

    if #tmpCombs == 3 then
        tmpFlag = CF.GameDefine.COMB_FLAG.CHOW
        tmpInMahs = {self:getGameData():getLastPlayMah()}
        tmpFromSeat = self:getGameData():getLastPlaySeat()
    elseif #tmpCombs >= 4 then
        local bTkong = false
        local selfAllCombs = self:getGameData():getAllCombMahData(CF.roomData:getSelfSeat())
        -- 烧毛模式 手里3财神也能组成杠，这边补杠要多做全匹配
        for i = 1, #selfAllCombs do
            if selfAllCombs[i].nMahs[1] == selfAllCombs[i].nMahs[2] and selfAllCombs[i].nMahs[1] == tmpCombs[1] and tmpCombs[1] == tmpCombs[2] then
                bTkong = true
                break
            end
        end
        if not bTkong then
            for i = 1,#tmpCombs do
                tmpCombs[i] = tmpCombs[i]
            end
            tmpInMahs = {}
            tmpFlag = CF.GameDefine.COMB_FLAG.CKONG
            tmpFromSeat = CF.roomData:getSelfSeat()
        else
            for i = 1, #tmpCombs - 1 do
                tmpInMahs[i] = tmpCombs[i]
            end
            tmpFlag = CF.GameDefine.COMB_FLAG.TKONG
            local selfSeat = CF.roomData:getSelfSeat()
            local selfCombs = self:getGameData():getAllCombMahData(selfSeat)
            for i = 1,#selfCombs do
                if selfCombs[i].nInMahs[1] == tmpCombs[1] then
                    tmpFromSeat = selfCombs[i].nFromSeat
                end
            end
        end
    end

    local msgCombs = {}
    msgCombs.mahs = tmpCombs
    msgCombs.ins = tmpInMahs
    msgCombs.from = tmpFromSeat
    msgCombs.flag = tmpFlag
    CF.msgManager:sendAction(msgCombs, self:getGameData():getActionID())
    self:showActionCombs({}, false)
end

return UIMahLayer�