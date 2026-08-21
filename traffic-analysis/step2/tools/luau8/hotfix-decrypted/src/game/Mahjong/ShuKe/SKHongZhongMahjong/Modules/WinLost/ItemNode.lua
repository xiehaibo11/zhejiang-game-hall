local WinLostItemNode = CF.gameClass("WinLostItemNode", "game.Mahjong.BasicMahjong.Modules.WinLost.ItemNode")

function WinLostItemNode:updateSettleUI()
    WinLostItemNode.super.updateSettleUI(self)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    if self._fanLabel then
        self._fanLabel:setVisible(false)     -- 不显示番信息
    end
    
    self._lostTypeSp:setVisible(false)
    if self._gangLabel then
        self._gangLabel:setVisible(true)
        local gangFens = self:getWinLostData():getGangFens()
        local gangScore = (gangFens and gangFens[self._seatId]) or 0
        if gangScore > 0 then
            gangScore = "+" .. gangScore
        end
        self._gangLabel:setString(gangScore)
    end

    if gameData:isHuSeat(self._seatId) then
        local mahs = self:getWinLostData():getZhaMaMahs()
        local realcnt = self:getWinLostData():getZhaMaRealCnt()
        if mahs and realcnt > 0 then
            local nMahs = {}
            for i=0,#mahs do
                table.insert(nMahs, mahs[i])
            end
            self._panelFlower:removeAllChildren()
            local ItemMahsArea = CF.gameRequire("Modules.WinLost.ItemMahsArea")
            local config = CF.settingData:getDefaultData(nil, true)
            local  WinLostZhaMahs = ItemMahsArea.new(config)
            self._panelFlower:addChild(WinLostZhaMahs)
            WinLostZhaMahs:showResultMahs(nMahs, nil, {})
            self._panelFlower:setPositionY(125)
            self._panelFlower:setPositionX(self._panelFlower:getPositionX() + 150)
            self._panelFlower:setScale(0.32)

            local children = WinLostZhaMahs:getChildren()
            for i=1, #nMahs do
                local isZhong = false
                if realcnt == 1 then
                    isZhong = true
                else
                    local mah = nMahs[i]
                    if mah == CF.GameDefine.MAH_VALUE.WAN_1 or mah == CF.GameDefine.MAH_VALUE.TIAO_1 or mah == CF.GameDefine.MAH_VALUE.TONG_1
                        or mah == CF.GameDefine.MAH_VALUE.WAN_5 or mah == CF.GameDefine.MAH_VALUE.TIAO_5 or mah == CF.GameDefine.MAH_VALUE.TONG_5
                        or mah == CF.GameDefine.MAH_VALUE.WAN_9 or mah == CF.GameDefine.MAH_VALUE.TIAO_9 or mah == CF.GameDefine.MAH_VALUE.TONG_9
                        or mah == CF.GameDefine.MAH_VALUE.JIAN_ZHONG then
                        isZhong = true
                    end
                end
                if isZhong then
                    self:showZhaMahImg(children[i])
                end
            end
        end
    end
end

function WinLostItemNode:showZhaMahImg(parentNode)
    local checkNode = ccui.ImageView:create("res/cocosStudio/MahjongNew/GameLayer/Image/WenZhou/zhama_jiaobiao.png",ccui.TextureResType.localType)
    checkNode:setPositionX(parentNode:getContentSize().width/2)
    checkNode:setPositionY(10)
    checkNode:setAnchorPoint(cc.p(0.5, 0))
    checkNode:setVisible(true)
    parentNode:addChild(checkNode)
end

return WinLostItemNode*