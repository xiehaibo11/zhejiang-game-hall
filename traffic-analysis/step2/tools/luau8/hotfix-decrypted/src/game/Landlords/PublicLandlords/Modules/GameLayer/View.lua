local GameLayer = CF.gameClass("GameLayer", "game.Landlords.BaseLandlords.Modules.GameLayer.View")

-- 显示抢地主操作界面
function GameLayer:onShowRobLandlordsView(event)
    local landlordType = event.msg.type -- 0: 叫分，1：叫地主
    local score = event.msg.score or 0
    local show = event.msg.show
    local force = event.msg.force
    local isRob = event.msg.isRob

    if show then
        if landlordType == 0 then
            self._robLandlordScoreBtns:setVisible(true)
            for i = 1, 3 do
                self["_robScoreBtn"..i]:setEnabled(i > score)
            end
            if self._notRobScoreBtns then
                self._notRobScoreBtns:setEnabled(not force)
            end
        else
            self._robLandlordBtns:setVisible(true)
            self._notCallLandlordBtn:setVisible(not isRob)
            self._callLandlordBtn:setVisible(not isRob)
            self._notRobLandlordBtn:setVisible(isRob)
            self._robLandlordBtn:setVisible(isRob)
            self._notCallLandlordBtn:setEnabled(not force)
            self._notRobLandlordBtn:setEnabled(not force)
        end
    else
        self._robLandlordScoreBtns:setVisible(false)
        self._robLandlordBtns:setVisible(false)
    end
end

return GameLayer


 