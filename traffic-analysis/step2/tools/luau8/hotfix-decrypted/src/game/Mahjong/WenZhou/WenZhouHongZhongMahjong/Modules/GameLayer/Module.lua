local GameModule = CF.gameClass("GameModule", "game.Mahjong.WenZhou.WenZhouMahjongBase.Modules.GameLayer.Module")

GameModule.EVENT_ZHAMA_HIDE = "EVENT_ZHAMA_HIDE"

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgZhaMa), msgClass = CF.GameProtocol.msgZhaMa }
    

    return subXYDealList
end

function GameModule:onMsgZhaMa(msgData)
    if msgData.sIdexCnt > 0 then
        local ZhaMahPanel = CF.gameRequire("Modules.GameLayer.ZhaMahUI")
        if not CF.UITool.objIsInScene(ZhaMahPanel.ObjName, ZhaMahPanel.ClsName) then
            local zhaMaData = {
                mahs = msgData.nIdex,
                realcnt = msgData.sIdexCntReal,
            }
            CF.game:getModule("WinLost"):getWinLostData():setZhaMaMahs(msgData.nIdex, msgData.sIdexCntReal)
            ZhaMahPanel.new(zhaMaData):showSelf()
        end
    end
end

-- 游戏结束
function GameModule:onMsgEndGame(msgData)
    CF.game:getModule("WinLost"):getWinLostData():setDelayTime(2.5)
    GameModule.super.onMsgEndGame(self,msgData)
end

function GameModule:hideZhaMah()
    self:dispatchEvent( { name = self.EVENT_ZHAMA_HIDE})
end

function GameModule:convertCombDataInGame(data)
    if (data.nFromSeat ~= CF.roomData:getSelfSeat() or CF.roomData:getIsSeer()) and data.nFlag == CF.GameDefine.COMB_TYPE.CONCEALED_KONG then
        for i = 1, #data.nMahs - 1 do
            data.nMahs[i] = CF.GameDefine.MAH_VALUE.BACK
        end
    end
    return data
end

return GameModulee