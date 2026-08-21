local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.Module")

function WinLostModule:getSubXYDealList()
    local subXYDealList = WinLostModule.super.getSubXYDealList(self)
	subXYDealList[#subXYDealList+1]  = {callback = handler(self,self.onMsgResultNew),msgClass = CF.GameProtocol.msgResultNew}
    return subXYDealList
end

function WinLostModule:onMsgResultNew(msgData)
    self:getWinLostData():setResultNewData(msgData)
    self:getWinLostData():onMsgFanCnt(self:getWinLostData():getFanCnt())
end

-- 番数
function WinLostModule:onMsgFanCnt(msgData)
     -- 番数信息等，提供给小结束使用
     self:getWinLostData():setIsShowFan(false)
     self:getWinLostData():setFanCnt(clone(msgData))
end

-- 小结束
function WinLostModule:onMsgResult(msgData)
    print("---------------------- GameModule:onMsgResult --------------------")
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    CF.roomData:setIsHaveResult(true)
    CF.soundManager:playSoundEnd()
    self:getWinLostData():setDelayTime(1)
    local time = self:getWinLostData():getDelayTime()
    local endType = self:getWinLostData():getEndType()
    if endType ~= CF.GameDefine.HU_TYPE.ET_NONE then
        for i = 0 , CF.roomData:getChairs() - 1 do
            gameData:clearHandMah(i)
            local mahIDs = gameData:getHuMahs(i)
            local huMahID = gameData:getHuDanFang(i)
            gameData:setHuMahsData(i, mahIDs, huMahID)
        end
    end
    self:getWinLostData():setIsJiGangFen(msgData.bIsJiGangFen)
    self:getWinLostData():setGangFens(msgData.nKongScore)
    self:getWinLostData():onMsgResult(msgData)
    if time then
        CF.SysTool.performWithDelayGlobal(function()
            self:showSettleWindow()
            self:getWinLostData():setGameRule(CF.roomData:getGameRule())
            for i = 0 , CF.roomData:getChairs() - 1 do
                local huMahID = gameData:getHuDanFang(i)
                self:getWinLostData():setHuMahData(i, huMahID)
            end
        end,time)
    end
    -- 游戏结束后请求金币信息
    CF.msgManager:sendReqPlayerGold()
    -- 游戏小结束后触发
    self:doAfterMsgResult()
end

return WinLostModule�