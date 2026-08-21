local GameModule = CF.gameClass("GameModule", "game.Mahjong.QuZhouMahjong.QZQuZhouBase.Modules.GameLayer.Module")

GameModule.CLOSE_QIAOFENG_WINDOW = "CLOSE_QIAOFENG_WINDOW"
GameModule.UPDATE_QIAOFENG_TEXT = "UPDATE_QIAOFENG_TEXT"

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgQiaoFengAsk),msgClass = CF.GameProtocol.msgQiaoFengAsk}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgQiaoFengResp),msgClass = CF.GameProtocol.msgQiaoFengResp}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgQiaoFengResult),msgClass = CF.GameProtocol.msgQiaoFengResult}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgWallMahEx),msgClass = CF.GameProtocol.msgWallMahEx}
    return subXYDealList
end

function GameModule:onMsgQiaoFengAsk(msgData)
    if not CF.roomData:isPlayBack() and not CF.roomData:getIsFastPlay() then
        if msgData.timeout > 0 then
            require("game.Mahjong.QuZhouMahjong.QZLongYouMahjong.Modules.GameLayer.QiaoFengLayer").new({
                timeout = msgData.timeout
            }):showSelf()
        else
            self:dispatchEvent( { name = self.CLOSE_QIAOFENG_WINDOW, msg = {}})
        end
    end
end

function GameModule:onMsgQiaoFengResp(msgData)
end

function GameModule:onMsgQiaoFengResult(msgData)
    for i = 1, msgData.nCount do
        local s = msgData.scores[i]
        self:dispatchEvent( { name = self.UPDATE_QIAOFENG_TEXT, msg = { seat = i - 1, score = s } } )
    end
end

function GameModule:onMsgWallMahEx(msgData)
    --显示剩余数不包含了留牌数，北乡有风留28，龙游和无风留14
    local wallMahCnt
    local gameRule = CF.roomData:getGameRule()
    if string.find(gameRule,"龙游") ~= nil then
        wallMahCnt = msgData.nWallCnt - 14
    elseif string.find(gameRule,"不") ~= nil then
        wallMahCnt = msgData.nWallCnt - 14
    else
        wallMahCnt = msgData.nWallCnt - 28
    end
    self:getGameData():setSurPlusCounts(wallMahCnt, true)
end

return GameModule�