local ChatLayer = NG.GAME.gameClass("RuleLayer", "newgold.GoldGames.GoldGameBase.Modules.Chat.ChatLayer")

function ChatLayer:ctor(isMah)
    ChatLayer.super.ctor(self, isMah)
end

function ChatLayer:getCSBPath()
    return "cocosStudio/GoldNew/Game/MahXueLiu/CSB/Basic/ChatLayer.csb"
end

return ChatLayer
