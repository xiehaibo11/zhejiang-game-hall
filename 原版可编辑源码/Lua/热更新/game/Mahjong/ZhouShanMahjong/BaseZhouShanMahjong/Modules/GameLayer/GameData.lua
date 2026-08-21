local GameData = CF.gameClass("GameData", "game.Mahjong.BasicMahjong.Modules.GameLayer.GameData")

function GameData:ctor()
    GameData.super.ctor(self)
    self._sQuanju = nil
    self._sQuanfeng = nil

    -- 听牌相关
    self._tingState = {"null", "null", "null", "null"}
    self._tingGangMahs = {}
end

function GameData:initEveryTimesDatas()
    GameData.super.initEveryTimesDatas(self)

    self._tingState = {"null", "null", "null", "null"}
    self._tingGangMahs = {}
end

function GameData:setMsgPlayCount(msg)
    self._nCurrPlayCount = msg.playCount or 0
    self._nMaxPlayCoutn = msg.maxPlayCount or 0
    if self._nMaxPlayCoutn < 99 then
        -- 2小圈1大圈，大于99局时表示以圈数计算
        self:dispatchEvent( { name = "EVENT_GAMEINFO_CHANGED" })
    else
        if self._nCurrPlayCount <= 1 then
            self:dispatchEvent( { name = "EVENT_GAMEINFO_CHANGED", msg = {strQuan = "东1局"} })
        end
    end
end

function GameData:setQuanFengStr(strQuanFeng)
    self._sQuanfeng = strQuanFeng
end

function GameData:getQuanFengStr()
    return self._sQuanfeng
end

function GameData:setQuanJuStr(strQuanju)
    self._sQuanju = strQuanju
end

function GameData:getQuanJuStr()
    return self._sQuanju
end

function GameData:setTingState(seat, state)
    self._tingState[seat] = state
end

function GameData:isSelfTing()
    return self._tingState[CF.roomData:getSelfSeat()] == "ting"
end

function GameData:isSelfTingWait()
    return self._tingState[CF.roomData:getSelfSeat()] == "wait"
end

function GameData:setTingGangMahs(mahs)
    self._tingGangMahs = mahs
end

function GameData:getTingGangMahs()
    return self._tingGangMahs
end


return GameData