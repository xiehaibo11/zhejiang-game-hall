local WinLostItemNode = CF.gameClass("WinLostItemNode", "game.Mahjong.BasicMahjong.Modules.WinLost.ItemNode")

WinLostItemNode.KW_LOST_END_TYPE_PNG =
{
    [0] = "settle_text_escape.png",  --逃跑
    --    [1] = "hu_type_zimo.png",  --自摸
    [2] = "settle_icon_3.png",  --点炮
    [3] = "settle_icon_5.png", --抢杠
--    [5] = "hu_type_liuju.png", --流局
}

function WinLostItemNode:updateSettleUI()
    WinLostItemNode.super.updateSettleUI(self)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local winLostData = CF.game:getModule("WinLost"):getWinLostData()
    if self._fanLabel then
        self._fanLabel:setVisible(false)     -- 不显示番信息
    end
    local lostEndType = self:getWinLostData():getLostEndType(self._seatId)
    if lostEndType and WinLostItemNode.KW_LOST_END_TYPE_PNG[lostEndType] then
        self._lostTypeSp:loadTexture(string.format(WinLostItemNode.KW_LOST_END_TYPE_PNG[lostEndType]), ccui.TextureResType.plistType)
        self._lostTypeSp:setVisible(true)
    else
        self._lostTypeSp:setVisible(false)
    end

    if gameData:isHuSeat(self._seatId) then
        local mahs = winLostData:getZhaMaMahs()
        local realcnt = winLostData:getZhaMaRealCnt()
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
            WinLostZhaMahs:setHandMahs(nMahs, nil, false)
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

return WinLostItemNode�