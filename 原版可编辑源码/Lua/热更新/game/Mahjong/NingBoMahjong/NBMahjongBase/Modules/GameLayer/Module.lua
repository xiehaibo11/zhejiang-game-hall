local GameModule = CF.gameClass("GameModule", "game.Mahjong.BasicMahjong.Modules.GameLayer.Module")
GameModule.EVENT_UPDATE_QUANFENG = "EVENT_UPDATE_QUANFENG"

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgTingMahInfo), msgClass = CF.GameProtocol.msgTingMahInfo }
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgTingMahInfoEx), msgClass = CF.GameProtocol.msgTingMahInfoEx }
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgDynamicTableRequest), msgClass = CF.GameProtocol.msgDynamicTableRequest }
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgDynamicTableFlag), msgClass = CF.GameProtocol.msgDynamicTableFlag }
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgPlay), msgClass = CF.GameProtocol.msgPlay }
    return subXYDealList
end

function GameModule:onMsgPanData(msgData)
    GameModule.super.onMsgPanData(self, msgData)

    -- 风圈显示
    local str = {[65] = "东风圈", [66] = "南风圈", [67] = "西风圈", [68] = "北风圈",}
    local strQuanfeng = str[msgData.nQuanFeng]
    self:dispatchEvent({ name = self.EVENT_UPDATE_QUANFENG, msg = { value = strQuanfeng } })
end

-- 出牌
function GameModule:onMsgPlay(msgData)
    GameModule.super.onMsgPlay(self,msgData)
    self:getGameData():setJustPlaySeat(msgData.nSeat)
end

function GameModule:onMsgTingMahInfo(msgData)
    if CF.configData:haveTing() == false then
        return
    end
    if CF.settingData:getHaveTing() == false then
        self:dispatchEvent( { name = self.EVENT_HIDE_TING_BUTTON } )
        return
    end
    local seat = CF.roomData:getSelfSeat()
    local count = msgData.sDelMahSize
    if count == 0 then
        self:getGameData():clearTingMahs(seat)
    else
        local tingMahs = {}
        local tingData = {}

        for idx = 1, count do
            table.insert(tingMahs, msgData.nDealMah[idx])
            tingData[tingMahs[idx]] = {}

            local bUniversalHu = msgData.bUniversalHu[idx]
            -- 胡任意
            if bUniversalHu then
                local tempTable = {}
                tempTable.huMahID = 255
                tempTable.huInfoNum = ""
                tempTable.huInfo = ""
                table.insert(tingData[tingMahs[idx]], tempTable)
            else
                local tmpCnt = msgData.sTingSize[idx]
                for k = 1, tmpCnt do
                    local tempTable = {}
                    tempTable.huMahID = msgData.nTingMah[idx][k]

                    if msgData.sTingMahFan[idx][k] == 0 then
                        tempTable.huInfoNum = ""
                        tempTable.huInfo = ""
                    else
                        tempTable.huInfoNum = msgData.sTingMahFan[idx][k] .. "," .. msgData.sTingMahCount[idx][k]
                        tempTable.huInfo = self:canHuInfo() .. ",张"
                    end
                    table.insert(tingData[tingMahs[idx]], tempTable)
                end
            end
        end

        self:getGameData():setTingMahs(seat, tingMahs)
        self:getGameData():setCanHuMahsData(seat, tingData)
    end
end

function GameModule:onMsgTingMahInfoEx(msgData)
    self:onMsgTingMahInfo(msgData)
end

function GameModule:canHuInfo()
    return "番,"
end

function GameModule:onMsgDynamicTableRequest(msgData)
    self._playercnt = msgData.sPlayerCount
    local msg = "玩家发起" .. msgData.sPlayerCount .. "人开始游戏，是否同意？"
    local function func_play()
        CF.msgManager:sendDynamicTableRespond(CF.GameProtocol.msgDynamicTableRespond.RESPOND.AGREE)
    end

    local function func_cancel()
        CF.msgManager:sendDynamicTableRespond(CF.GameProtocol.msgDynamicTableRespond.RESPOND.DISAGREE)
    end
    CF.TipTool.showTip({
        bTop = true,
        type = CF.TIP_LAYER_TYPE.OK_CANCEL_NO_CLOSE,
        funcOK = func_play,
        funcCancel = func_cancel
    }, msg)
end

function GameModule:getDynamicTablePlayerCnt()
    return self._playercnt
end

function GameModule:onMsgDynamicTableFlag(msgData)
    if msgData.sFlag == CF.GameProtocol.msgDynamicTableFlag.FLAG.SUCCESS then
        CF.TipTool.showToast("[开始" .. self._playercnt .. "人]发起成功，游戏规则按照" .. self._playercnt .. "人规则进行", 2)
    elseif msgData.sFlag == CF.GameProtocol.msgDynamicTableFlag.FLAG.PLAYER_ENTER then
        CF.TipTool.showToast("玩家进入房间", 2)
    elseif msgData.sFlag == CF.GameProtocol.msgDynamicTableFlag.FLAG.PLAYER_LEAVE then
        CF.TipTool.showToast("玩家退出房间", 2)
    elseif msgData.sFlag == CF.GameProtocol.msgDynamicTableFlag.FLAG.DISAGREE or msgData.sFlag == CF.GameProtocol.msgDynamicTableFlag.FLAG.TIMEOUT then
        local msg = "玩家不同意开始" .. self._playercnt .. "人游戏\n继续等待"
        CF.TipTool.showTip({
            type = CF.TIP_LAYER_TYPE.OK,
        }, msg)
    end
end

return GameModule