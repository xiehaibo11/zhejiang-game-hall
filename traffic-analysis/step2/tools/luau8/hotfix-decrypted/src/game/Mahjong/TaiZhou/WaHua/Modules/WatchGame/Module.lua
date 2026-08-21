local WatchGameModule = CF.gameClass("WatchGameModule", "game.Mahjong.BasicMahjong.Modules.WatchGame.Module")
WatchGameModule.EVENT_WATCH_CLEAR_TABLEUI = 'EVENT_WATCH_CLEAR_TABLEUI'

function WatchGameModule:updateMsgTime()
    local endTime = self._gameMsgList[#self._gameMsgList].time
    for i = #self._gameMsgList, 1, -1 do
        if self._gameMsgList[i].subXYID ~= CF.GameMProtocol.ServerToClientMessage.XY_ID then
        else
            local sToClientData = CF.GameMProtocol.ServerToClientMessage:new()
            sToClientData:bistream(self._gameMsgList[i].subBuff, self._gameMsgList[i].subLen)
            if (CF.GameProtocol.msgChaoShiTaoHua and sToClientData.cmdid == CF.GameProtocol.msgChaoShiTaoHua.XY_ID) then
                local msgTime = self._gameMsgList[i].time
                local leftTime = endTime - msgTime
                local fillGameMsg = self:fillChaoShiTaoHuaFunc(self._gameMsgList[i].subXYID, self._gameMsgList[i].subBuff, self._gameMsgList[i].subLen, leftTime)
                if fillGameMsg then
                    self._gameMsgList[i] = fillGameMsg
                    self._gameMsgList[i].time = msgTime
                end
                break
            end
        end
    end
end

function WatchGameModule:fillChaoShiTaoHuaFunc(msgid, buff, len, leftTime)
    if msgid ~= CF.GameMProtocol.ServerToClientMessage.XY_ID then
        return
    end

    local sToClientData =  CF.GameMProtocol.ServerToClientMessage:new()
    sToClientData:bistream(buff, len)
    local subXYID = sToClientData.cmdid
    local subBuff = sToClientData.message
    local subLen = sToClientData.msglen
    local tmpMsgData = self:onFillMsgChaoShiTaoHua(subXYID, subBuff, subLen, leftTime)
    local tFillSToCMessageData = {}
    if tmpMsgData then
        local tmpSToCData = CF.GameMProtocol.ServerToClientMessage:new()
        tmpSToCData.cmdid = subXYID
        tmpSToCData.message = tmpMsgData:getBytes()
        tmpSToCData.msglen = tmpMsgData:getLength()
        local bos = tmpSToCData:bostream()
        tFillSToCMessageData.subXYID = msgid
        local bis = un.network.OStream.new(bos:getBytes())
        local writeBuff = bis:read(bos:getLength())
        tFillSToCMessageData.subBuff = writeBuff
        tFillSToCMessageData.subLen = bos:getLength()
    else
        tFillSToCMessageData.subXYID = msgid
        tFillSToCMessageData.subBuff = buff
        tFillSToCMessageData.subLen = len
    end
    return tFillSToCMessageData
end

function WatchGameModule:onFillMsgChaoShiTaoHua(msgid, buff, len, leftTime)
    local msgChaoShiTaoHua = CF.GameProtocol.msgChaoShiTaoHua:new()
    msgChaoShiTaoHua:bistream(buff, len)
    
    local fillChaoShiTaoHua = CF.GameProtocol.msgChaoShiTaoHua:new()
    fillChaoShiTaoHua.nTime = msgChaoShiTaoHua.nTime 
    if leftTime and leftTime > 0 and leftTime < msgChaoShiTaoHua.nTime then
        fillChaoShiTaoHua.nTime = msgChaoShiTaoHua.nTime - leftTime
    end
    fillChaoShiTaoHua.bShow = msgChaoShiTaoHua.bShow
    print('fillChaoShiTaoHua.leftTime:', fillChaoShiTaoHua.nTime)
    return fillChaoShiTaoHua:bostream()
end

function WatchGameModule:clearTable()
    WatchGameModule.super.clearTable(self)
    self:dispatchEvent({name = self.EVENT_WATCH_CLEAR_TABLEUI})
    if CF.game:getModule('GameLayer').clearAllPowerUI then
        CF.game:getModule('GameLayer'):clearAllPowerUI()
    end
end

return WatchGameModule
�