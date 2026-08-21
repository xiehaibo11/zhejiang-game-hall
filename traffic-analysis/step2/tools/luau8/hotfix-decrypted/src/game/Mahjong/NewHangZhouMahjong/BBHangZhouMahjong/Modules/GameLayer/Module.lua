local GameModule = CF.gameClass("GameModule", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.GameLayer.Module")

GameModule.EVENT_SHOW_AHEAD_BUTTON = "EVENT_SHOW_AHEAD_BUTTON"
GameModule.EVENT_UPDATE_AHEAD_UI = "EVENT_UPDATE_AHEAD_UI"
GameModule.EVENT_CLOSE_AHEAD_UI = "EVENT_CLOSE_AHEAD_UI"
GameModule.EVENT_SHOW_GENZHUANG_SCORE = "EVENT_SHOW_GENZHUANG_SCORE"

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgGenZhangResult), msgClass = CF.GameProtocol.msgGenZhangResult }
    return subXYDealList
end

function GameModule:onMsgPlayTingsEx(msgData)
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
        local bIsBaiBanCaishen = self:getGameData():isBaiBanCaishen() -- 是否为白板财神规则
        local bIsYouCaiBiKaoXiang = self:getGameData():isYouCaiBiKaoXiang()-- 是否为有财必拷响
        local finalData = {}
        local tingMahs = {}
        for i = 1, count do
            tingMahs[i] = data[i].from
            finalData[tingMahs[i]] = {}
            for j = 1, #data[i].tmahs do
                local tempTable = {}
                tempTable.huMahID = data[i].tmahs[j].mah
                tempTable.huInfoNum = data[i].tmahs[j].ft .. ","
                tempTable.huInfo = "番,"
                table.insert(finalData[tingMahs[i]], tempTable)
            end
            local jokerData = self:getGameData():getJokerData()
            if not bIsYouCaiBiKaoXiang then --不是有财必拷响状态下
                for j = 1, #jokerData do
                    local haveMah = false
                    local haveRenYi = false
                    for k = 1, data[i].nCount do
                        if data[i].tmahs[k] then --报错修复
                            if data[i].tmahs[k].mah == jokerData[j] then
                                haveMah = true
                                break
                            elseif data[i].tmahs[k].mah == 255 then
                                haveRenYi = true
                                break
                            end
                        end
                    end
                    if haveRenYi == false then
                        if haveMah == false then
                            -- local tempTable = {}
                            -- tempTable.huMahID = jokerData[j]
                            -- tempTable.huInfoNum = ""
                            -- tempTable.huInfo = ""
                            -- table.insert(finalData[tingMahs[i]], tempTable)
                        else
                            if not bIsBaiBanCaishen then
                                -- local tempTable = {}
                                -- tempTable.huMahID = CF.GameDefine.MAH_VALUE.FENG_BEI
                                -- tempTable.huInfoNum = ""
                                -- tempTable.huInfo = ""
                                -- table.insert(finalData[tingMahs[i]], tempTable)
                            end
                        end
                    end
                end
            end
        end
        self:getGameData():setCanHuMahsData(seat, finalData)
        self:getGameData():setTingMahs(seat, tingMahs)
    end
end

function GameModule:onMsgGenZhangResult(msgData)
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_CHIPS, data = { msgData.score, msgData.score2 } })
    CF.SysTool.performDelayOnce(function()
        if self then
            self:dispatchEvent({ name = self.EVENT_SHOW_GENZHUANG_SCORE, data = msgData })
        end
    end, 1.5)
end

return GameModule�