-- 首发自己手牌监听模块（公共，所有游戏复用）
-- 职责：监听本局 game GameData 的 EVENT_FIRST_HAND_DATA（开局后下发自己手牌时派发），
--       触发后只回调 QingShenModule 的处理逻辑 onFirstHandData。
-- 说明：本模块由 QingShen 在进桌/开局时通过 CF.game:getModule("FirstHandData") 懒加载触发，
--       ctor 中注册监听；game 销毁时模块实例随之销毁，下次进游戏重新创建并注册，无需手动注销。
local FirstHandDataModule = class("FirstHandDataModule", CF.ModuleBase)

function FirstHandDataModule:ctor()
    FirstHandDataModule.super.ctor(self)
end

function FirstHandDataModule:getProxyEvents()
    local m = CF and CF.game and CF.game:getModule("GameLayer") and CF.game:getModule("GameLayer"):getGameData()
    return {
        {module = m, eventKeyName = "EVENT_FIRST_HAND_DATA", callBack = "_onFirstHandData"},
    }
end

function FirstHandDataModule:getReqConfig()
    return {}
end


--- 首发手牌事件回调：只调用 QingShenModule 的逻辑
function FirstHandDataModule:_onFirstHandData()
    local qingShen = XH.lobby and XH.lobby.getModule and XH.lobby:getModule("QingShen")
    if qingShen and qingShen.onFirstHandData then
        qingShen:onFirstHandData()
    end
end

return FirstHandDataModule
M