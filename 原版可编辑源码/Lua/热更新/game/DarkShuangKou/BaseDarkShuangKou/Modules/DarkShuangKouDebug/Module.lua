local DebugModule = CF.gameClass("DarkShuangKouDebug", CF.ModuleBase)

DebugModule.EVENT_DEBUG_GAME_MODEL = "EVENT_DEBUG_GAME_MODEL"

function DebugModule:ctor()
    DebugModule.super.ctor(self)
end

function DebugModule:dispatchMessage(msg, data, func)
    self:dispatchEvent({name = msg, data = data}, func)
end

return DebugModule
