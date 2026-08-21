local GameModule = CF.gameClass("GameModule", "game.Mahjong.WenZhou.WenZhouMahjongBase.Modules.GameLayer.Module")

GameModule.EVENT_HIDE_HU_FAN_TIPS = "EVENT_HIDE_HU_FAN_TIPS"

function GameModule:initDatas()
    GameModule.super.initDatas(self)
    self:getGameData():setMaxHandMahData(CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN)
end

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgCrossHu), msgClass = CF.GameProtocol.msgCrossHu }

    return subXYDealList
end

function GameModule:belongCombType(flag)
    if flag > CF.GameDefine.COMB_FLAG.NONE and flag <= CF.GameDefine.COMB_FLAG.LKONG or flag == CF.GameDefine.COMB_FLAG.JOKCMB then
        return true
    end
    return false
end

function GameModule:convertCombDataInGame(data)
    if (data.nFromSeat ~= CF.roomData:getSelfSeat() or CF.roomData:getIsSeer()) and data.nFlag == CF.GameDefine.COMB_TYPE.CONCEALED_KONG then
        for i = 1, #data.nMahs - 1 do
            data.nMahs[i] = CF.GameDefine.MAH_VALUE.BACK
        end
    end
    return data
end

function GameModule:onMsgCrossHu(msgData)
    --测试使用,过胡标识仅自己视角可见
    --未实现
end

function GameModule:onMsgBetResult(msgData)
    -- creat by tangligen
    --该协议和基类协议id 重复了 所以重写了该协议不做任何处理 不影响原有逻辑
end

return GameModule