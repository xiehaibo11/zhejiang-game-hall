local PlayerHeadNode = CF.gameClass("PlayerHeadNode", "game.Mahjong.BasicMahjong.Modules.Player.HeadNode")

function PlayerHeadNode:initChildren()
    PlayerHeadNode.super.initChildren(self)
    if self._headFrame and not self._qiaoFentTxt then
        local qiaoFenTxt = ccui.Text:create()
        qiaoFenTxt:setVisible(false)
        qiaoFenTxt:setFontSize(28)
        qiaoFenTxt:setTextColor(cc.c3b(0xE1, 0xD2, 0x1A))
        qiaoFenTxt:setString("0")
        qiaoFenTxt:setName("KW_QZLY_QIAOFENG")
        local x,y = self._headFrame:getPosition()
        local size = self._headFrame:getContentSize()
        local localSeat = CF.roomData:seatToLocal(self._seatId)
        if localSeat == 3 then
            qiaoFenTxt:setAnchorPoint(cc.p(1,1))
            qiaoFenTxt:setPosition(cc.p(x - size.width/2 - 10, y + size.height/2))
        else
            qiaoFenTxt:setAnchorPoint(cc.p(0,1))
            qiaoFenTxt:setPosition(cc.p(x + size.width/2 + 10, y + size.height/2))
        end
        self._headFrame:getParent():addChild(qiaoFenTxt)
        self._qiaoFentTxt = qiaoFenTxt
    end
end

function PlayerHeadNode:getProxyEvents()
    local proxyEvents = PlayerHeadNode.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "UPDATE_QIAOFENG_TEXT", callBack = "updateQiaoFenText"}
    return proxyEvents
end

function PlayerHeadNode:updateQiaoFenText(event)
    if self._qiaoFentTxt then
        local msg = event.msg
        self._qiaoFentTxt:setVisible(true)
        if msg.seat ~= self._seatId then
            return
        end
        local score = msg.score
        if score then
            self._qiaoFentTxt:setString(tostring(score))
        end
    end
end

return PlayerHeadNode