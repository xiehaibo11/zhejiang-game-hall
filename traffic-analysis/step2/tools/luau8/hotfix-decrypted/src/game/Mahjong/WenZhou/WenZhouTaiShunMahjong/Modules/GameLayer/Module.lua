local GameModule = CF.gameClass("GameModule", "game.Mahjong.WenZhou.WenZhouMahjongBase.Modules.GameLayer.Module")

GameModule.EVENT_SHOW_KUNG_SCORE_ANI = "EVENT_SHOW_KUNG_SCORE_ANI"
GameModule.EVENT_SET_SCORE = "EVENT_SET_SCORE"
GameModule.EVENT_ZHAMA_HIDE = "EVENT_ZHAMA_HIDE"

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgGuaFeng), msgClass = CF.GameProtocol.msgGuaFeng }
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgZhaMa), msgClass = CF.GameProtocol.msgZhaMa }
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgTing), msgClass = CF.GameProtocol.msgPlayTings }

    return subXYDealList
end

function GameModule:onMsgGuaFeng(msgData)
    if msgData.bRelink == false then
        self:dispatchEvent( { name = self.EVENT_SHOW_KUNG_SCORE_ANI , msg = msgData.iCurScore})
    end
    self:dispatchEvent( { name = self.EVENT_SET_SCORE , msg = msgData.iTotalScore})
end

function GameModule:onMsgZhaMa(msgData)
    CF.game:getModule("WinLost"):getWinLostData():setIsZhaMa(msgData.sIdexCnt > 0)
    for i = 0, msgData.sHuCount-1 do
        CF.game:getModule("WinLost"):getWinLostData():setZhaMaCnt(msgData.sSeat[i], msgData.sZhongMa)
    end
    if msgData.sIdexCnt > 0 then
        local ZhaMahPanel = CF.gameRequire("Modules.GameLayer.ZhaMahUI")
        if not CF.UITool.objIsInScene(ZhaMahPanel.ObjName, ZhaMahPanel.ClsName) then
            local zhaMaData = {
                mahs = msgData.nIdex,
                realcnt = msgData.sIdexCnt,
            }
            CF.game:getModule("WinLost"):getWinLostData():setZhaMaMahs(msgData.nIdex, msgData.sIdexCnt)
            ZhaMahPanel.new(zhaMaData):showSelf()
        end
    end
end

function GameModule:hideZhaMah()
    self:dispatchEvent( { name = self.EVENT_ZHAMA_HIDE})
end

function GameModule:onMsgTing(msgData)
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
            for j = 1, data[i].nCount do
                if data[i].tmahs[j] then
                    local tempTable = {}
                    tempTable.huMahID = data[i].tmahs[j].mah
                    tempTable.huInfoNum = data[i].tmahs[j].ft .. ","
                    tempTable.huInfo = "倍,"
                    table.insert(finalData[tingMahs[i]], tempTable)
                end
            end
        end
        self:getGameData():setTingMahs(seat, tingMahs)
        self:getGameData():setCanHuMahsData(seat, finalData)
    end
end

function GameModule:convertCombDataInGame(data)
    if (data.nFromSeat ~= CF.roomData:getSelfSeat() or CF.roomData:getIsSeer()) and data.nFlag == CF.GameDefine.COMB_TYPE.CONCEALED_KONG then
        for i = 1, #data.nMahs - 1 do
            data.nMahs[i] = CF.GameDefine.MAH_VALUE.BACK
        end
    end
    return data
end

return GameModuleT