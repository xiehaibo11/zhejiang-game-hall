local MsgManager = CF.gameClass("MsgManager", CF.gameScriptRootPath .. ".GameBase.Manager.MsgManager")

function MsgManager:sendSpecCard(gameCardGroup)
    if gameCardGroup == nil then
        return
    end
    local msgSpecfCard = CF.GameProtocol.msgSpecfHandCard:new()
    msgSpecfCard.sSeat = CF.roomData:getSelfSeat()
    msgSpecfCard.ucCount = #gameCardGroup
    for i = 1, msgSpecfCard.ucCount do
        msgSpecfCard.ucCards[i] = gameCardGroup[i]
    end
    self:sendStreamPacket(msgSpecfCard)
    print(os.date("%Y-%m-%d %H:%M:%S", os.time()) .. " [SendMessage] sendSpecCard: " .. table.tab2str(msgSpecfCard))
end

return MsgManager
