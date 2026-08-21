local WinLostItemNode = CF.gameClass("WinLostItemNode", "game.Mahjong.BasicMahjong.Modules.WinLost.ItemNode")
local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")

function WinLostItemNode:showHuAni(event)
    if not self:getWinLostData() then return end
    local huMahID = self:getWinLostData():getHuMahData(0)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    if event.data.seat ~= self._seatId then
        return
    end
    if gameData:isHuSeat(self._seatId) then
        if huMahID and huMahID ~= 0 then
            local mahData = self:getWinLostData():getMahData(self._seatId)
            local node = self:getHandArea():findFirstMahNodeByID(huMahID, mahData)
            if node then
                local tempCursor = ccui.Layout:create()
                CF.UITool.playJsonAnimationByName(tempCursor, "gameend_cardlight", "res/animation/Mahjong/Base/gameend_cardlight/gameend_cardlight.ExportJson", 1, "Animation1", cc.p(0,0))
                tempCursor:setPosition(cc.p(70, 100))
                node:addChild(tempCursor)
            end
        end
    end
end

function WinLostItemNode:updateSettleUI()
    WinLostItemNode.super.updateSettleUI(self)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local lostEndType = self:getWinLostData():getLostEndType(self._seatId)
    local pngName = WinLostFanConfig.KW_LOST_END_TYPE_PNG[lostEndType]
    if lostEndType and pngName then
        self._lostTypeSp:loadTexture(pngName, ccui.TextureResType.plistType)
        self._lostTypeSp:setVisible(true)
        if self._gangLabel then
            self._lostTypeSp:setPosition(self._gangLabel:getPosition())
        end
    else
        self._lostTypeSp:setVisible(false)
    end

    local strFanName = self:getWinLostData():getFanNameBySeat(self._seatId)
    local strOtherInfo = ""
    if gameData:isHuSeat(self._seatId) then
        strOtherInfo = strOtherInfo .. "台:" .. self:getWinLostData():getTaiCount() .. " "
    else
        strOtherInfo = strOtherInfo .. "台:--" .. " "
    end
    strOtherInfo = strOtherInfo .. "花:" .. self:getWinLostData():getFlowerCount(self._seatId) .. " "
    strOtherInfo = strOtherInfo .. "条:" .. self:getWinLostData():getTiaoCount(self._seatId) .. " "
    self._detailLabel:setString(strFanName .. strOtherInfo)

    local mpType = self:getWinLostData():getMingPaiType(self._seatId)
    self:updateMingPaiFlags(mpType)

    self._fanLabel:setVisible(false)     -- 不显示番信息
end

function WinLostItemNode:updateMingPaiFlags(mingPaiType)
    local parentNode = self._hejiLabel:getParent()
    if not parentNode then
        return
    end
    parentNode:removeChildByName("KW_IMG_MING_PAI_ICON")
    if mingPaiType and mingPaiType ~= 0 and WinLostFanConfig.KW_MP_TYPE[mingPaiType] then
        local icon = ccui.ImageView:create()
        icon:loadTexture(WinLostFanConfig.KW_MP_END_ICON_NAME[mingPaiType], ccui.TextureResType.plistType)
        icon:setPosition(self._fanLabel:getPosition())
        icon:setName("KW_IMG_MING_PAI_ICON")
        icon:setAnchorPoint(0.5, 0.5)
        icon:setVisible(true)
        parentNode:addChild(icon)
    end
end

return WinLostItemNode