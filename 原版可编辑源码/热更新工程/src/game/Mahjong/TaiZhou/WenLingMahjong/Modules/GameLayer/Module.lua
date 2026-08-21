local GameModule = CF.gameClass("GameModule", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Modules.GameLayer.Module")

function GameModule:initDatas()
    GameModule.super.initDatas(self)
    self:getGameData():setMaxHandMahData(CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN)
end

function GameModule:onMsgThrowChip(msgData)
    GameModule.super.onMsgThrowChip(self, msgData)
    -- 温岭麻将不等待骰子动画结束，直接发送协议
    local curStep = self:getGameData():getCurGameStep()
    if curStep == CF.GameDefine.ENUM_GAME_STEP.GAME_STEP_THROW_CHIP_2 then
        CF.msgManager:sendEndWait(curStep)
    end
end

return GameModule