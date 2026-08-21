local PlayersModule = NG.GAME.gameClass("PlayersModule", NG.GAME.ModuleBase)
local FWProtocol = NG.GAME.gameRequire("Protocol.FWProtocol")
local RoomTableData = NG.GAME.gameRequire("Data.RoomTableData")
local GameMainDefine = NG.GAME.gameRequire("Modules.GameMain.Define.GameMainDefine")

PlayersModule.EVENT_NEW_PLAYER_DATA = "EVENT_NEW_PLAYER_DATA"
PlayersModule.EVENT_PLAYER_STATE_CHANGE = "EVENT_PLAYER_STATE_CHANGE"
PlayersModule.EVENT_PLAYER_LEAVE = "EVENT_PLAYER_LEAVE"

function PlayersModule:ctor()
    PlayersModule.super.ctor(self)

end

function PlayersModule:getSubXYDealList()
    return {
        {callback = handler(self,self.onMsgPlayerData),msgClass = FWProtocol.msgPlayerData},
        {callback = handler(self,self.onMsgPlayerDataEx),msgClass = FWProtocol.msgPlayerDataEx},
        {callback = handler(self,self.onMsgPlayerEnter),msgClass = FWProtocol.msgPlayerEnter},
        {callback = handler(self,self.onMsgPlayerLeave),msgClass = FWProtocol.msgPlayerLeave},
    }
end

function PlayersModule:onMsgPlayerData(msgData)
    NG.GAME.roomTableData:addPlayer(msgData)
    self:dispatchEvent({name = self.EVENT_NEW_PLAYER_DATA, msg = {seat = msgData.nSeat}})
end

function PlayersModule:onMsgPlayerDataEx(msgData)
    NG.GAME.roomTableData:setPlayerDataEx(msgData)
    local seat = NG.GAME.roomTableData:getSeatByNumid(msgData.nBrandID, msgData.nNumberID)
    self:dispatchEvent({name = self.EVENT_PLAYER_STATE_CHANGE, msg = {seat = seat}})
end

function PlayersModule:onMsgPlayerEnter(msgData)
    NG.GAME.roomTableData:setPlayerEnter(msgData)
end

function PlayersModule:onMsgPlayerLeave(msgData)
    local seat = NG.GAME.roomTableData:getSeatByNumid(msgData.nBrandID, msgData.nNumberID)
    self:removeWhenPlayerLeave(seat)
end

function PlayersModule:removeWhenPlayerLeave(seat)
    if seat == NG.GAME.roomTableData:getSelfSeat() then
        NG.TipTool.showToast("有玩家退出，请点击继续按钮继续匹配~")
        NG.GAME.roomTableData:clearAllPlayers()
        NG.goldGame:getModule("GameMain"):showContinueBtn()
    else
        NG.GAME.roomTableData:removePlayerBySeat(seat)
    end
    self:dispatchEvent({name = self.EVENT_PLAYER_LEAVE, msg = {seat = seat}})
end

return PlayersModule