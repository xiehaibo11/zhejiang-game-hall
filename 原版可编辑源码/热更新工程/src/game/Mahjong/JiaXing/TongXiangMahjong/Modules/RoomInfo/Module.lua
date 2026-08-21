local RoomInfoModule = CF.gameClass("RoomInfoView", "game.Mahjong.JiaXing.BaseMahjong.Modules.RoomInfo.Module")

RoomInfoModule.EVENT_UPDATE_BASE_SCORE = "EVENT_UPDATE_BASE_SCORE"

function RoomInfoModule:getLimitXYIDs()
    local xyIDs = RoomInfoModule.super.getLimitXYIDs()
    table.insert(xyIDs, 1041)
    return xyIDs
end

function RoomInfoModule:getSubXYDealList()
    local subXYDealList = RoomInfoModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgGameRule),msgClass = CF.GameProtocol.msgGameRule}
    return subXYDealList
end

function RoomInfoModule:onMsgGameRule(msgData)
    local tRule = {}
    tRule.baseScore = msgData.nBaseScore or 1
    local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
    tRule.chiPengType = msgData.chiPengType or WinLostFanConfig.chiPengType.UNLIMITED
    tRule.bHuangFan = (msgData.bHuangFan == 1)
    tRule.dblSanHua = (msgData.dblSanHua == 1)
    tRule.bQiangGang = (msgData.nQiangGang == 1)
    tRule.bBaiPi = (msgData.nBaiPi == 1)
    tRule.dblSanHua = (msgData.dblSanHua == 1)
    tRule.bQiangGang = (msgData.nQiangGang == 1)
    tRule.bGangPai = (msgData.nGangPai == 1)
    tRule.bTwoFanCanHu = (msgData.nTwoFanCanHu == 1)
    tRule.bWinLostLmt = (msgData.nWinLostLmt > 0)
    local strRule = ""

    if tRule.bHuangFan then
        strRule = strRule .. "黄番/"
    end
    if tRule.bBaiPi then
        strRule = strRule .. "白皮花/"
    else
        strRule = strRule .. "翻花/"
    end
    if tRule.bGangPai then
        strRule = strRule .. "杠牌计分/"
    end
    
    if tRule.bTwoFanCanHu then
        strRule = strRule .. "2片起胡/"
    end
    if tRule.bWinLostLmt then
        strRule = strRule .. "上限" .. msgData.nWinLostLmt .. "片"
    end
    
    CF.roomData:setIsOpenHuangFan(tRule.bHuangFan)
    CF.roomData:setGameRule(strRule)
    self:dispatchEvent({name = self.EVENT_UPDATE_BASE_SCORE, base = tRule.baseScore})
end

return RoomInfoModule