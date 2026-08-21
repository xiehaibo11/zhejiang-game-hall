local WinLostItemNode = CF.gameClass("WinLostItemNode", "game.Mahjong.RuiAnMahjong.RAMahjongBase.Modules.WinLost.ItemNode")

function WinLostItemNode:showHuAni(event)
    if not self:getWinLostData() then return end
    local huMahID = self:getWinLostData():getHuMahData(self._seatId)
    if event.data.seat ~= self._seatId then
        return
    end
    if huMahID and huMahID ~= 0 then
        local mahData = self:getWinLostData():getMahData(self._seatId)
        local node = self:getHandArea():findFirstMahWithRuleNodeByID(huMahID, mahData)
        if node then
            local tempCursor = ccui.Layout:create()
            CF.UITool.playJsonAnimationByName(tempCursor, "gameend_cardlight", "animation/Mahjong/Base/gameend_cardlight/gameend_cardlight.ExportJson", 1, "Animation1", cc.p(0,0))
            tempCursor:setPosition(cc.p(70, 100))
            node:addChild(tempCursor)
        end
    end
end

return WinLostItemNode�