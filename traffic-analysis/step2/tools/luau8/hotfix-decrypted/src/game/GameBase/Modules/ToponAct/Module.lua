local ToponModule = CF.gameClass("ToponModule", CF.ModuleBase)

ToponModule.EVENT_GAME_STATUS_CHANGE = "EVENT_GAME_STATUS_CHANGE"
ToponModule.EVENT_GAME_SCORE_CHANGE = "EVENT_GAME_SCORE_CHANGE"

function ToponModule:ctor()
    ToponModule.super.ctor(self)
end

function ToponModule:getProxyEvents()
    return {
        { module = CF.roomData, eventKeyName = "EVENT_GAMESTART_CHANGED", callBack = "onGameStartChanged" },
        --{ module = CF.goldManager, eventKeyName = "EVENT_GAME_START_CHANGE", callBack = "onGameStart"},
    }
end

function ToponModule:onGameStartChanged(event)
    if not event or not event.msg then
        return
    end
    if event.msg.nowState and not event.msg.oldState and CF.roomData:isGoldRoom() then
        CF.getLobbyModule("ToponAct"):closeToponGoldDrawView()
    end
end

return ToponModuleU