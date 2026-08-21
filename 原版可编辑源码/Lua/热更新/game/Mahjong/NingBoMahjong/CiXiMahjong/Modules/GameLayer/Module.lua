local GameModule = CF.gameClass("GameModule", "game.Mahjong.NingBoMahjong.NBMahjongBase.Modules.GameLayer.Module")

GameModule.EVENT_UPDATE_ST_FLAG = "EVENT_UPDATE_ST_FLAG"

--出牌预显示控制变量
function GameModule:showPlayPreOut(mahIndex, mahValue)
    if not mahIndex or not mahValue then
        return
    end

    local isJoker = false
    local jokers = self:getGameData():getJokerData()
    for index = 1, #jokers do
        if jokers[index] == mahValue then
            isJoker = true
            break
        end
    end
    local func_play = function()
        if self:getGameData():getPreviewShow() == true then
            CF.msgManager:sendPlayMahs(mahValue, self:getGameData():getActionID())
            self:getGameData():setPreviewMah(mahValue)
            local seat = CF.roomData:getSelfSeat()
            self:dealPlayPreOut(seat, mahIndex, mahValue)
        end
    end

    local func_cancel = function()
        self:getGameData():setPlayPower(true)
    end

    if isJoker then
        local msg = "这张是龙牌，是否确定打出？"
        CF.TipTool.showTip({
            bTop = true,
            type = CF.TIP_LAYER_TYPE.OK_CANCEL_NO_CLOSE,
            funcOK = func_play,
            funcCancel = func_cancel
        }, msg)
    else
        func_play()
    end
end

function GameModule:onMsgPanData(msgData)
    GameModule.super.onMsgPanData(self, msgData)
    self:dispatchEvent({ name = self.EVENT_UPDATE_ST_FLAG, msg = { nBanker = msgData.nBanker, nLaoZhuang = msgData.nLaoZhuang } })
end

return GameModule