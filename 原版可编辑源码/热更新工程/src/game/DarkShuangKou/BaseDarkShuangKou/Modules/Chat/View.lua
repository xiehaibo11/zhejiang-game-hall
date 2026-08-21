local ChatView = CF.gameClass("ChatView", CF.gameScriptRootPath .. ".GameBase.Modules.Chat.View")

function ChatView:getProxyEvents()
    return {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_TOTAL_WINLOST", callBack = "close"}
    }
end

return ChatView
