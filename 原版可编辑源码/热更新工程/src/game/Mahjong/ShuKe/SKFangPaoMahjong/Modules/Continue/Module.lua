local ContinueModule = CF.gameClass("ContinueModule", "game.Mahjong.ShuKe.ShuKeMahjongBase.Modules.Continue.Module")


function ContinueModule:getSubXYDealList()
    return {
        {callback = handler(self, self.onMsgAskContinue), msgClass = CF.GameProtocol.msgAskContinue},
        {callback = handler(self, self.onMsgContinueFlag), msgClass = CF.GameProtocol.msgContinueFlag},
        {callback = handler(self, self.onMsgContinueTips), msgClass = CF.GameProtocol.msgContinueTips}
    }
end

function ContinueModule:onMsgAskContinue(msgData)
    --因为基类里面的协议处理是有该结构的,为了复用所以构造一个
    msgData.ENUM_FLAG = {
        NONE = 0,
        RELINK = 1,
        WAITING = 2,
        CAN_CONTINUE = 3,
    }

    --温州逻辑so只定义了两个值,默认发零,但是线上又开启了续桌,所以这里转换下零就是开启
    if msgData.nflag == 0 then
        msgData.nflag = msgData.ENUM_FLAG.CAN_CONTINUE
    end

    ContinueModule.super.onMsgAskContinue(self, msgData)
end

function ContinueModule:onMsgContinueFlag(msgData)
    --因为基类里面的协议处理是有该结构的,为了复用所以构造一个
    msgData.ENUM_FLAG = {
        NONE = 0,
        DISAGREE = 1,
        SUCCESS = 2,
        TIME_OUT = 3,
    }
    ContinueModule.super.onMsgContinueFlag(self, msgData)
end

return ContinueModule