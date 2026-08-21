local WinLostItemNode = CF.gameClass("WinLostItemNode", "game.Mahjong.BasicMahjong.Modules.WinLost.ItemNode")

WinLostItemNode.ChengBaoType =
{
    [CF.GameDefine.ChengBaoState.CHENGBAO] = "settle_contract_lie_img.png",
    [CF.GameDefine.ChengBaoState.FANCHENGBAO] = "settle_decontract_lie_img.png",
    [CF.GameDefine.ChengBaoState.HUXIANGCHENGBAO] = "settle_withcontract_lie_img.png",
}

function WinLostItemNode:updateSettleUI()
    WinLostItemNode.super.updateSettleUI(self)

    local lostEndType = self:getWinLostData():getLostEndType(self._seatId)
    local playerEndState = self:getWinLostData():getPlayerEndState(self._seatId)
    local isFitTypes = false
    if lostEndType then
        if playerEndState == CF.GameDefine.HuState.ET_SELF and lostEndType == CF.GameDefine.HuState.ET_ROBKONG then
            self._lostTypeSp:loadTexture(string.format("settle_icon_%d.png", CF.GameDefine.HuStateChange.ROBKONG), ccui.TextureResType.plistType)
            isFitTypes = true
        end
        if playerEndState == CF.GameDefine.HuState.ET_SELF and lostEndType ~= CF.GameDefine.HuState.ET_ROBKONG then
            self._lostTypeSp:loadTexture(string.format("settle_icon_%d.png", CF.GameDefine.HuStateChange.SELF), ccui.TextureResType.plistType)
            isFitTypes = true
        end
        if lostEndType == CF.GameDefine.HuState.ET_DISCARD then
            self._lostTypeSp:loadTexture(string.format("settle_icon_%d.png", CF.GameDefine.HuStateChange.HU), ccui.TextureResType.plistType)
            isFitTypes = true
        end
        if lostEndType == CF.GameDefine.HuState.ET_ROBKONG then
            self._lostTypeSp:loadTexture(string.format("settle_icon_%d.png", CF.GameDefine.HuStateChange.DISCARD), ccui.TextureResType.plistType)
            isFitTypes = true
        end
        self._lostTypeSp:setVisible(isFitTypes)
    else
        self._lostTypeSp:setVisible(false)
    end

    if self._gangLabel then
        self._gangLabel:setVisible(true)
        local nHuaNums = self:getWinLostData():getHuaTotalNums(self._seatId)
        self._gangLabel:setString(nHuaNums)
    end

    local strDetail = self:getWinLostData():getDetail(self._seatId)
    self._detailLabel:setString(strDetail)

    self:initContanctState(self._seatId)

    self._panelFlower:setVisible(false)
end

function WinLostItemNode:initContanctState(seat)
    local posX = self._lostTypeSp:getPositionX()
    local posY = self._lostTypeSp:getPositionY()
    local getSelfConState = self:getWinLostData():getIsChengBaoState(seat + 1)
    if getSelfConState then
        local stateImg = ccui.ImageView:create()
        local getParentNode = self._lostTypeSp:getParent()
        getParentNode:addChild(stateImg)
        stateImg:loadTexture(self.ChengBaoType[getSelfConState], ccui.TextureResType.plistType)
        stateImg:setAnchorPoint(cc.p(0.5, 0.5))
        stateImg:setPosition(posX - 50, posY)
    end
    if self:getWinLostData():isInChengBaoState() then
        self._lostTypeSp:setPosition(posX + 40, posY)
    end
end

return WinLostItemNode