local GameModule = CF.gameClass("GameModule", "game.Mahjong.WenZhou.WenZhouMahjongBase.Modules.GameLayer.Module")

GameModule.EVENT_SHOW_KUNG_SCORE_ANI = "EVENT_SHOW_KUNG_SCORE_ANI"
GameModule.EVENT_SET_SCORE = "EVENT_SET_SCORE"


function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgCrossHu), msgClass = CF.GameProtocol.msgCrossHu }
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgGuaFeng), msgClass = CF.GameProtocol.msgGuaFeng }

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

function GameModule:onMsgGuaFeng(msgData)
    if msgData.bRelink == false then
        self:dispatchEvent( { name = self.EVENT_SHOW_KUNG_SCORE_ANI , msg = msgData.iCurScore})
    end
    self:dispatchEvent( { name = self.EVENT_SET_SCORE , msg = msgData.iTotalScore})
end

return GameModule