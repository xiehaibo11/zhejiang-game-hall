local TableInfoLayer = CF.gameClass("TableInfoLayer", "game.Mahjong.JinHuaMahjong.JHBaseMahjong.Modules.GameLayer.TableInfoLayer")

function TableInfoLayer:getProxyEvents()
    local eventList = TableInfoLayer.super.getProxyEvents(self)
    eventList[#eventList+1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_UPDATE_MAI_ZI", callBack = "onUpdateUI" }
    eventList[#eventList+1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_UPDATE_HEAD_MAI_ZI_UI", callBack = "onUpdateHeadMaiZiUI" }
    eventList[#eventList+1] = { module = CF.roomData, eventKeyName = "EVENT_GAME_PLAYCOUNT_CHANGED", callBack = "onPlayCountChanged" }
    eventList[#eventList+1] = { module = CF.roomData, eventKeyName = "EVENT_BASESCORE_CHANGED", callBack = "onBaseScoreChanged"}
    return eventList
end

--更新信息
function TableInfoLayer:onUpdateRoomInfoEx(event)
    self:updateRoomInfoFunc()
end

function TableInfoLayer:onPlayCountChanged(event)
    self:updateRoomInfoFunc()
end

function TableInfoLayer:onBaseScoreChanged(event)
    self:updateRoomInfoFunc()
end

function TableInfoLayer:updateRoomInfoFunc()
   local quanCount,maxQuanCount = CF.roomData:getQuanCount()
    local lzNum = CF.roomData:getLaoZhuangNum() or 0
    local laozhuangcnt = lzNum > 0 and lzNum or 0
    local baseScore = CF.roomData:getBaseScore()
    if maxQuanCount == 2 or maxQuanCount == 4  then
        self._textRoomInfoEx:setString(string.format("圈数：%d/%d  底分：%d  老庄：%d", quanCount,maxQuanCount,baseScore,laozhuangcnt))
    else
        self._textRoomInfoEx:setString(string.format("底分：%d  老庄：%d",baseScore,laozhuangcnt))
    end
    self._textRoomInfoEx:setVisible(true)
end

function TableInfoLayer:onTouchEventMaiZi(send,eventType)
    local btnName = send:getName()
    local anteNum = CF.StringTool.getNumberSuffixByString(btnName)
    CF.msgManager:sendMaiZi(anteNum)
    if self._maiZiListener then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._maiZiListener)
    end
end

function TableInfoLayer:onUpdateUI(event)
    local msg = event.msg
    local maiZiData = msg.data
    local maiziValue = maiZiData.maiziValue
    if not maiZiData or not maiziValue then
        return
    end

    local seat = CF.roomData:getSelfSeat()
    if maiziValue[seat + 1] ~= nil and maiziValue[seat + 1] >= 0 then
        self._maiZiPanel:setVisible(false)
    else
        self._maiZiPanel:setVisible(true)
        if maiZiData.maiziMaxNum then
            for i= 1,10 do
                if self["_btnMaiZi_"..(i)] then
                    self["_btnMaiZi_"..(i)]:setEnabled(i <= maiZiData.maiziMaxNum)
                    local color = (i <= maiZiData.maiziMaxNum) and cc.c3b(255,255,255) or cc.c3b(160,160,160)
                    self["_btnMaiZi_"..(i)]:setColor(color)
                end
            end
        end
        if msg.show and  maiZiData.canMaizi then
            CF.game:getModule("GameLayer"):dispatchEvent( { name = CF.game:getModule("GameLayer").EVENT_UPDATE_CLOCK , msg = {seat = seat , time = 10, show = true}})
            --bumai 0
            self._maiZiListener = cc.Director:getInstance():getScheduler():scheduleScriptFunc( function()
                if self._maiZiListener then
                    cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._maiZiListener)
                    CF.msgManager:sendMaiZi(0)
                end
            end , 10, false)
        end
    end
    for i = 1 , CF.roomData:getMaxPlayer() do
        local localIndex = CF.roomData:seatToLocal(i - 1)
        if self["_textMaiZiState_"..(localIndex)] then
            local labelStr
            if maiziValue[i] == -1 then
                labelStr = "买子中..."
            elseif maiziValue[i] == 0 then
                labelStr = "不买"
            else
                labelStr = "买子:"..maiziValue[i]
            end
            self["_textMaiZiState_"..(localIndex)]:setString(labelStr)
            self["_textMaiZiState_"..(localIndex)]:setVisible(true)
        end
    end
end

function TableInfoLayer:onUpdateHeadMaiZiUI(event)
    local msg = event.msg
    if not msg then
        return
    end
    local maiZiData = msg.data
    if not maiZiData then
        return
    end
    local maiziValue = maiZiData.maiziValue
    if not maiziValue then
        return
    end
    for i =0,CF.roomData:getMaxPlayer()-1 do
        local localIndex = CF.roomData:seatToLocal(i)
        local maiziLabel = self["_textMaiZiState_"..(localIndex)]
        if maiziLabel then
            maiziLabel:setVisible(true)
            local labelStr
            if maiziValue[i+1] == -1 then
                labelStr = "买子中..."
            elseif maiziValue[i+1] == 0 then
                labelStr = "不买"
            else
                labelStr = "买子:"..maiziValue[i+1]
            end
            maiziLabel:setString(labelStr)
        end
    end
end

return TableInfoLayer
