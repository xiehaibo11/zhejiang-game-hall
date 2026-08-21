local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.BaseCardGame.Modules.RoomInfo.Module")

RoomInfoModule.EVENT_GAME_MUT_CHANGED = "EVENT_GAME_MUT_CHANGED"
RoomInfoModule.EVENT_HIDE_BASE_SCORE = "EVENT_HIDE_BASE_SCORE"
RoomInfoModule.EVENT_GONG_SCORE_CHANGED = "EVENT_GONG_SCORE_CHANGED"
RoomInfoModule.EVENT_WIN_FIRE_ANI = "EVENT_WIN_FIRE_ANI"

function RoomInfoModule:ctor()
    RoomInfoModule.super.ctor(self)
    self._winMut = 1
    self._lostMut = 1
end

function RoomInfoModule:getSubXYDealList()
    local list = RoomInfoModule.super.getSubXYDealList(self)
    list[#list + 1] = {callback = handler(self,self.onMsgGameMut),msgClass = CF.GameProtocol.msgGameMut}
    return list
end

function RoomInfoModule:onMsgGameMut(msgData)    
    local winTime =  msgData.iWinTime
    local lostTime = msgData.iLostTime
    -- 千变双扣命名为iMut，目前不用该字段功能，判空处理
    if msgData.fMut and msgData.fMut > 0 then 
        winTime = msgData.fMut
        lostTime = msgData.fMut
    end
    self:dispatchEvent({name = self.EVENT_GAME_MUT_CHANGED ,
                        msg = {
                            isPlayWin = self._winMut < winTime, iWinTime = winTime, iLostTime = lostTime,fMut = msgData.fMut
                        }})
    self._winMut = winTime
    self._lostMut = lostTime
end

function RoomInfoModule:onMsgBase(msgData)    
    RoomInfoModule.super.onMsgBase(self,msgData)
    if msgData.iBaseType == 1 and not CF.roomData:getIsGameStart() then --动态底分
        self:dispatchEvent({ name = self.EVENT_HIDE_BASE_SCORE })
    end 
end

function RoomInfoModule:onUpdateGongScore(score)
    self:dispatchEvent({ name = self.EVENT_GONG_SCORE_CHANGED, msg = { gongScore = score} })
end

function RoomInfoModule:playAnimation()
    self:dispatchEvent({ name = self.EVENT_WIN_FIRE_ANI })
end

return RoomInfoModule