local GameModule = CF.gameClass("GameModule", "game.Mahjong.BasicMahjong.Modules.GameLayer.Module")

function GameModule:ctor()
    GameModule.super.ctor(self)
    self._showChipsList = {}
end

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgPlayTings), msgClass = CF.GameProtocol.msgPlayTings}
    return subXYDealList
end

--听牌
function GameModule:onMsgPlayTings(msgData)
    if not CF.configData:haveTing() then
        return
    end
    if CF.settingData:getHaveTing() == false then
        CF.game:getModule("RightBtns"):hideTingBtn()
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
            local temp = data[i].nCount
            if temp > 5 then
                temp = 5
            end
            for j = 1, temp do
                local tempTable = {}
                tempTable.huMahID = data[i].tmahs[j].mah
                tempTable.huInfoNum = data[i].tmahs[j].ft .. ","
                tempTable.huInfo = "倍,"
                table.insert(finalData[tingMahs[i]], tempTable)
            end
        end
        self:getGameData():setTingMahs(seat, tingMahs)
        self:getGameData():setCanHuMahsData(seat, finalData)
    end
end

function GameModule:onMsgStartGame(msgData)
    GameModule.super.onMsgStartGame(self, msgData)
    self._showChipsList = {}
end

return GameModule