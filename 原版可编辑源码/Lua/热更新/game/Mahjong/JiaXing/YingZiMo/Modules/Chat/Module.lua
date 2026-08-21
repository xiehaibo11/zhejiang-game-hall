local ChatModule = CF.gameClass("ChatModule", "game.Mahjong.JiaXing.BaseMahjong.Modules.Chat.Module")

function ChatModule:getLimitXYIDs()
    local xyIDs = ChatModule.super.getLimitXYIDs(self)
    if CF.roomData:is2PGame() then
        -- 指定导入嘉兴基类协议文件
        local GameProtocolSToC_Base = require("game.Mahjong.JiaXing.BaseMahjong.Protocols.GameProtocol")
        table.insert(xyIDs, GameProtocolSToC_Base.msgSpeak.XY_ID)
    end
    table.insert(xyIDs, 1034)
    return xyIDs
end

return ChatModule