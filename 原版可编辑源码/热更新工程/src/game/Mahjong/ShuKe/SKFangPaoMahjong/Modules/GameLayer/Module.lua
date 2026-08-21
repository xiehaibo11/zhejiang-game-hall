local GameModule = CF.gameClass("GameModule", "game.Mahjong.ShuKe.ShuKeMahjongBase.Modules.GameLayer.Module")

function GameModule:belongCombType(flag)
    if flag > CF.GameDefine.COMB_FLAG.NONE and flag <= CF.GameDefine.COMB_FLAG.TKONG then
        return true
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

function GameModule:onMsgThrowChip(msgData)
    if self:getGameData():getCurGameStep() == CF.GameDefine.ENUM_GAME_STEP.GAME_STEP_THROW_CHIP_3 then
        return
    end
    GameModule.super.onMsgThrowChip(self, msgData)
end

function GameModule:needDelay(xyid, protocol)
    if xyid == CF.GameProtocol.msgToTalShuffle.XY_ID then
        return true,3.75,false
    end
    return false,0,true
end

return GameModule