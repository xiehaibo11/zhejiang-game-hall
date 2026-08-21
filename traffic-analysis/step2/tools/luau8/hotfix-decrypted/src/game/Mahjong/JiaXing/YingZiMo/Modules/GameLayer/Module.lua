local GameModule = CF.gameClass("GameModule", "game.Mahjong.JiaXing.BaseMahjong.Modules.GameLayer.Module")

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    if CF.roomData:is2PGame() then
        subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgDrawCnt2P),msgClass = CF.GameProtocol.msgDrawCnt_2P}
        subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgChengBao_2P),msgClass = CF.GameProtocol.msgChengBao_2P}
    end
    return subXYDealList
end

function GameModule:getLimitXYIDs()
    local xyIDs = GameModule.super.getLimitXYIDs(self)
    if CF.roomData:is2PGame() then
    -- 指定导入嘉兴基类协议文件
        local GameProtocolSToC_Base = require("game.Mahjong.JiaXing.BaseMahjong.Protocols.GameProtocol")
        table.insert(xyIDs, GameProtocolSToC_Base.msgTai.XY_ID)
        table.insert(xyIDs, GameProtocolSToC_Base.msgChengBaoAsk.XY_ID)
        table.insert(xyIDs, GameProtocolSToC_Base.msgDrawCnt.XY_ID)
        table.insert(xyIDs, GameProtocolSToC_Base.msgAllWinLost.XY_ID)
    end
    table.insert(xyIDs, 1034)
    return xyIDs
end

function GameModule:showHuangFanJiaXing()--黄番
    local value
    if not CF.roomData:is2PGame() then
        value = CF.roomData:getIsOpenHuangFan()        
    else
        local gameData = CF.game:getModule("GameLayer"):getGameData()
        value = gameData:getHuangFan()
    end
    self:dispatchEvent( { name = self.EVENT_SHOW_HUANGFAN , msg = {isShow = value}})
end

function GameModule:onMsgChengBao_2P(msgData)
    self:dispatchEvent( { name = self.SHOW_CHENGBAO_ICON , msg = {seat=CF.roomData:localToSeat(msgData.nCBSeat), cb= CF.GameDefine.ChengBao.CHENGBAO}})
    self:dispatchEvent( { name = self.SHOW_CHENGBAO_ICON , msg = {seat=CF.roomData:localToSeat(msgData.nFCBSeat), cb= CF.GameDefine.ChengBao.CHENGBAO}})
end

function GameModule:onMsgDrawCnt2P(msgData)--慌牌数量
    self:getGameData():setDrawCnt(msgData.nDrawCnt)
end

function GameModule:onMsgBuyScore(msgData)
    -- if not CF.roomData:isWuJiangBuyScore() then
    --     return
    -- end
    GameModule.super.onMsgBuyScore(self, msgData)
end

return GameModule�