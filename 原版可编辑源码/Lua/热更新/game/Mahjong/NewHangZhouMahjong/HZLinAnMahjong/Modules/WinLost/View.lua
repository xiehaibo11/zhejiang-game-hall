local WinLostView = CF.gameClass("WinLostView", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.WinLost.View")

function WinLostView:createChildren()
    WinLostView.super.createChildren(self)
    local SettleItemNode = CF.gameRequire("Modules.WinLost.ItemNode")
    self._listView:removeAllChildren()

    for i = 0, CF.roomData:getChairs() - 1 do
        local item = SettleItemNode.new({seatId = i})
        self._listView:addChild(item)
    end

    --局数信息
    self._playCount = CF.roomData:getPlayCount()
    self._maxPlayCount = CF.roomData:getMaxPlayCount()
    self._roomJuShuLabel:setString("圈数"..self._playCount.."/"..self._maxPlayCount)

    local sQuanFeng = {[0] = "北风圈", [1] = "东风圈",[2] = "南风圈",[3] = "西风圈"} 
    self._timeLabel:setString(sQuanFeng[CF.game:getModule("GameLayer"):getGameData():getQuanFengNum()])
    local isPlayBack = false
    self._timeLabel:setVisible(not isPlayBack)

    local fanImg = self._imgFan:clone()
    if fanImg then
        fanImg:addTo(self._imgFan:getParent())
        fanImg:setPosition(self._imgFan:getPositionX()- 100, self._imgFan:getPositionY())
        fanImg:ignoreContentAdaptWithSize(true)
        fanImg:loadTexture("img_result_tainum.png", ccui.TextureResType.plistType)
    end

    self._imgFan:setVisible(true)
    self._imgFan:ignoreContentAdaptWithSize(true)
    self._imgFan:loadTexture("img_result_hu_num.png", ccui.TextureResType.plistType)

    self._imgGang:setVisible(true)
    self._imgGang:ignoreContentAdaptWithSize(true)
    self._imgGang:loadTexture("img_result_hu.png", ccui.TextureResType.plistType)
end

function WinLostView:onTimeClose()
    local isLastCoutn = CF.roomData:getIsGameOver()
    self._uContinueTime:setVisible(isLastCoutn)
    if isLastCoutn then
        self._curTime = 3

        self._uContinueTime:stopAllActions()
        self._uContinueTime:setString(self._curTime .. "s")

        CF.UITool.createRepeateAction(self._uContinueTime, 1,  function ()
            self._curTime = self._curTime - 1
            if self._curTime >= 0 then
                self._uContinueTime:setString(self._curTime .. "s")
            else
                self._uContinueTime:stopAllActions()
                if CF.roomData:isGoldRoom() then
                    self._uContinueTime:setVisible(false)
                else 
                    self:onNextGameClicked(nil, ccui.TouchEventType.ended)
                end
            end
        end)
    end
end

return WinLostView