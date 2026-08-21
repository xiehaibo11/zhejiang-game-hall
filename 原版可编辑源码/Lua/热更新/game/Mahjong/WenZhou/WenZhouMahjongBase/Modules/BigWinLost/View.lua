local BigWinLostUI = CF.gameClass("BigWinLostUI", "game.Mahjong.BasicMahjong.Modules.BigWinLost.View")

function BigWinLostUI:onBtnContinue(send, eventType)
    CF.game:getModule("Continue"):gameEventContinueGame(true)
    CF.throwDataManager:recordButtonClick(CF.ThrowDataDefine.ButtonEnumTable.BOX_ROOM_BIG_WINLOST_CONTINUE)
    -- 抛送续桌数据到数数
    local gameID = CF.roomData:getGameID()
    local scenceName = CF.teaHouseManager:isInTeaHouse() and "比赛场" or "包厢"
    local data = {
        block_label = scenceName,
        item_id = string.format("%s_%d", CF.gameSub:getGameNameByGameId(gameID), gameID)
    }
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zj24052701, data)
end

return BigWinLostUI