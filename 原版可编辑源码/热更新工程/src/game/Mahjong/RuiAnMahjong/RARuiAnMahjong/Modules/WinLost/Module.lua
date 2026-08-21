local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.RuiAnMahjong.RAMahjongBase.Modules.WinLost.Module")

function WinLostModule:getSubXYDealList()
    local subXYDealList = WinLostModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgTaiName), msgClass = CF.GameProtocol.msgTaiName}
    return subXYDealList
end

-- 小结束
function WinLostModule:onMsgResult(msgData)
    self:getWinLostData():setIsShowFan(false)
    self:getWinLostData():onMsgFanName(msgData)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    CF.roomData:setIsHaveResult(true)
    CF.soundManager:playSoundEnd()
    local time = self:getWinLostData():getDelayTime()
    local endType = self:getWinLostData()._sEndType
    local hudanfang = msgData.danfang
    if endType ~= CF.GameDefine.HU_TYPE.ET_NONE then
        for i = 0 , CF.roomData:getChairs() - 1 do
            gameData:clearHandMah(i)
            local mahIDs = gameData:getHuMahs(i)
            if gameData:isHuSeat(i) then
                for k = 1, #mahIDs do
                    if mahIDs[k] == hudanfang then
                        table.remove(mahIDs, k)
                        break
                    end
                end
                gameData:setHuMahsData(i, mahIDs, hudanfang)
            else
                gameData:setHuMahsData(i, mahIDs, 0)
            end
        end
    end
    self:getWinLostData():onMsgResult(msgData)
    if time then
        self:performWithDelay(function()
            self:showSettleWindow()
            for i = 0 , CF.roomData:getChairs() - 1 do
                local huMahID = gameData:isHuSeat(i) and hudanfang or 0
                self:getWinLostData():setHuMahData(i, huMahID)
            end
        end,time)
    end
    -- 游戏结束后请求金币信息
    CF.msgManager:sendReqPlayerGold()
    -- 游戏小结束后触发
    self:doAfterMsgResult()
end

function WinLostModule:onMsgFanCnt(msgData)
end

function WinLostModule:onMsgTaiName(msgData)
    self:getWinLostData():onMsgTaiName(msgData)
end

return WinLostModule