local GameModule = CF.gameClass("GameModule", "game.Mahjong.RuiAnMahjong.RAMahjongBase.Modules.GameLayer.Module")

GameModule.HIDE_MAH_SURPLUS_PANEL = "HIDE_MAH_SURPLUS_PANEL"

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgPlayTings),msgClass = CF.GameProtocol.msgPlayTings}
    return subXYDealList
end

function GameModule:onMsgStartGame(msgData)
    GameModule.super.onMsgStartGame(self, msgData)
    self:dispatchEvent( { name = self.HIDE_MAH_SURPLUS_PANEL })
end

function GameModule:onMsgPlayTings(msgData)
    if CF.settingData:getHaveTing() == false then
        self:dispatchEvent( { name = self.EVENT_HIDE_TING_BUTTON } )
        return
    end
    local seat = msgData.nSeat
    local count = msgData.nCount
    local data = clone(msgData.tingmahs)

    if count == 0 then
        self:getGameData():clearTingMahs(seat)
    else
        local finalData = {}
        local tingMahs = {}
        for i = 1, count do
            tingMahs[i] = data[i].from
            finalData[tingMahs[i]] = {}
            for j = 1, data[i].nCount do
                local tempTable = {}
                tempTable.huMahID = data[i].tmahs[j].mah
                tempTable.huInfoNum = ""
                tempTable.huInfo = ""
                table.insert(finalData[tingMahs[i]], tempTable)
            end
        end
        self:getGameData():setTingMahs(seat, tingMahs)
        self:getGameData():setCanHuMahsData(seat, finalData)
    end
end

return GameModulec