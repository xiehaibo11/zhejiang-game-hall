local PlayerModule = CF.gameClass("PlayerModule", "game.Mahjong.JiaXing.BaseMahjong.Modules.Player.Module")

function PlayerModule:getSubXYDealList()
    local subXYDealList = PlayerModule.super.getSubXYDealList(self)
    if CF.roomData:is2PGame() then
        subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgLocation),msgClass = CF.GameProtocol.msgLocation_2P}
    end
    return subXYDealList
end

function PlayerModule:getLimitXYIDs()
    local xyIDs = PlayerModule.super.getLimitXYIDs(self)
    if CF.roomData:is2PGame() then
        -- 指定导入嘉兴基类协议文件
        local GameProtocolSToC_Base = require("game.Mahjong.JiaXing.BaseMahjong.Protocols.GameProtocol")
        table.insert(xyIDs, GameProtocolSToC_Base.msgLocation.XY_ID)
    end
    return xyIDs
end

return PlayerModule