local GameModule = CF.gameClass("GameModule", "game.Mahjong.JinHuaMahjong.JHBaseMahjong.Modules.GameLayer.Module")

function GameModule:getSubXYDealList()
	local xyDealList = GameModule.super.getSubXYDealList(self)
	xyDealList[#xyDealList+1]  = {callback = handler(self,self.onMsgChengbaoInfo), msgClass = CF.GameProtocol.msgchengbaoinfo}
	xyDealList[#xyDealList+1]  = {callback = handler(self,self.onMsgTingMahInfo), msgClass = CF.GameProtocol.msgPlayTings}
	return xyDealList
end

--听牌
function GameModule:onMsgTingMahInfo(msgData)
    if CF.configData:haveTing() == false then
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

function GameModule:onMsgChengbaoInfo(msgData)--承包信息标识
    for seat = 0,CF.roomData:getMaxPlayer()-1 do
        CF.game:getModule("WinLost"):getWinLostData():setIsContract(seat,false)
    end
    if msgData.ischengbao == false then
        return
    end
    if msgData.seat and msgData.seat ~= 4 then
         CF.game:getModule("WinLost"):getWinLostData():setIsContract(msgData.seat,true)
    end
end

function GameModule:onMsgPanData(msgData)
   GameModule.super.onMsgPanData(self, msgData)
   CF.roomData:setFirstBanker(msgData.nFirstBanker)
   CF.roomData:setLaoZhuangNum(msgData.nLaoZhuang)
end

return GameModule&	