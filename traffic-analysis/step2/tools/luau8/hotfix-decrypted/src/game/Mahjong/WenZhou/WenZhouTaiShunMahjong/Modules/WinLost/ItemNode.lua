local WinLostItemNode = CF.gameClass("WinLostItemNode", "game.Mahjong.BasicMahjong.Modules.WinLost.ItemNode")

function WinLostItemNode:updateSettleUI()
    WinLostItemNode.super.updateSettleUI(self)

    local KW_LOST_END_TYPE_PNG = {   
        [0] = "settle_text_escape.png",  --逃跑
        [2] = "settle_icon_3.png",  --点炮
        [3] = "settle_icon_7.png", --抢杠
    }
    if self._fanLabel then
        self._fanLabel:setVisible(false)     -- 不显示番信息
    end

    local lostEndType = self:getWinLostData():getLostEndType(self._seatId)
    if lostEndType and KW_LOST_END_TYPE_PNG[lostEndType] then
        self._lostTypeSp:loadTexture(KW_LOST_END_TYPE_PNG[lostEndType], ccui.TextureResType.plistType)
        self._lostTypeSp:setVisible(true)
        if self._gangLabel then
            self._lostTypeSp:setPosition(self._gangLabel:getPosition())
        end
    else
        self._lostTypeSp:setVisible(false)
    end

    local gameData = CF.game:getModule("GameLayer"):getGameData()
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
            local zhaMahs = ItemMahsArea.new(config)
            self._panelFlower:addChild(zhaMahs)
            zhaMahs:setHandMahs(nMahs, nil, false)
            local children = zhaMahs:getChildren()
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

return WinLostItemNodeh