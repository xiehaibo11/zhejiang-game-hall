local CardLogicData = NG.GAME.gameClass("CardLogicData", NG.ModuleBase)
local GameMainDefine = NG.GAME.gameRequire("Modules.GameMain.Define.GameMainDefine")

function CardLogicData:ctor()
    CardLogicData.super.ctor(self)

    self:initData()
end

function CardLogicData:initData()
    self._gameStep = GameMainDefine.ENUM_GAME_STEP.GAME_STEP_NONE          --游戏步骤
    self._bankerSeat = GameMainDefine.SEAT_NONE --庄(地主)位置
    self._seatPower = {} --权限，叫分阶段是叫分权限，出牌阶段是出牌权限
    self._prePlayerSeat = 0 --上一次出牌人的位置
    self._nowPlayerSeat = 0 --当前出牌人的位置
    self._baseCards = {} --底牌数据
end

function CardLogicData:clear()
    self:initData()
end

function CardLogicData:setGameStep(gamestep)
    self._gameStep = gamestep
end

function CardLogicData:getGameStep()
    return self._gameStep
end

function CardLogicData:setBankerSeat(bankerSeat)
    self._bankerSeat = bankerSeat
end

function CardLogicData:getBankerSeat()
    return self._bankerSeat
end

function CardLogicData:setPower(localSeat, power)
    self._seatPower[localSeat] = power
end

function CardLogicData:getPower(localSeat)
    return self._seatPower[localSeat]
end

function CardLogicData.getNextSeat(localSeat)
    local next = localSeat + 1
    if next >= GameMainDefine.MAX_PLAYER then
        next = 0
    end
    return next
end

function CardLogicData:setPrePlayerSeat(localSeat)
    self._prePlayerSeat = localSeat
end

function CardLogicData:getPrePlayerSeat()
    return self._prePlayerSeat
end

function CardLogicData:setNowPlayerSeat(localSeat)
    self._nowPlayerSeat = localSeat
end

function CardLogicData:getNowPlayerSeat()
    return self._nowPlayerSeat
end

function CardLogicData:setBaseCards(nCards)
    self._baseCards = nCards
end

function CardLogicData:getBaseCards()
    return self._baseCards
end

function CardLogicData:getBaseCardsCnt()
    return #self._baseCards
end

return CardLogicData