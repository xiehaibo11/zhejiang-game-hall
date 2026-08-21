local GameData = CF.gameClass("GameData", CF.ModuleBase)

--开局后下发自己首手牌时派发，供请神等模块按游戏类型区分处理（麻将/非麻将统一事件名）
GameData.EVENT_FIRST_HAND_DATA = "EVENT_FIRST_HAND_DATA"

function GameData:initDatas()
    CF.game:getModule("AddMultiple"):clearAddMultipleType()
    self._servicePay = 0
end 

function GameData:initEveryTime()
    CF.game:getModule("AddMultiple"):clearAddMultipleType()
    self._firstHandData = false
end 

--- 标记/查询是否已下发首手牌；首次设为 true 时派发 EVENT_FIRST_HAND_DATA
--- 由各游戏在“下发自己首手牌”的时机调用（需自行保证 seat 为自己）
function GameData:setFirstHandData(firstHandMah)
    local changed = (self._firstHandData ~= firstHandMah)
    self._firstHandData = firstHandMah
    if changed and firstHandMah == true then
        self:dispatchEvent({ name = self.EVENT_FIRST_HAND_DATA })
    end
end

function GameData:getFirstHandData()
    return self._firstHandData or false
end

function GameData:setServicePay(servicePay)
    self._servicePay = servicePay
end

function GameData:getServicePay()
    return self._servicePay or 0
end

function GameData:setTrustPunishTime(trustPunishTime)
    self._trustPunishTime = trustPunishTime
end

function GameData:getTrustPunishTime()
    return self._trustPunishTime or 0
end

return GameData�