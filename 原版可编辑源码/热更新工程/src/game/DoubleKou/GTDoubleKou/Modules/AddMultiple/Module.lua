local AddMultipleModule = CF.gameClass("AddMultipleModule", "game.GameBase.Modules.AddMultiple.Module")
function AddMultipleModule:getSubXYDealList()
    return {
        {callback = handler(self, self.onMsgIncDoublingPower), msgClass = CF.GameProtocol.msgIncDoublingPower}, --1473
        {callback = handler(self, self.onMsgReturnProp), msgClass = CF.GameProtocol.msgReturnProp}, --1480
        {callback = handler(self, self.onMsgIncDoubling), msgClass = CF.GameProtocol.msgIncDoubling}, --1472
    }
end

function AddMultipleModule:getProxyEvents()
    return {
        {module = CF.netEngine, eventName = CF.GameProtocolGT.RespUseProps.event_key, callBack = "onRespUseProps"},
    }
end


function AddMultipleModule:sendDeductAddMultipleProp(propID,count,custom)
    CF.reqTransferProps(custom, {
        price = count,
        propID = propID,
    }, nil, self, function(_target, req, type, data)
        CF.selfPlayerData:flushPlayerDrop()
    end)
end 


function AddMultipleModule:onUpdateStepID(stepID)
    if stepID and stepID ~= CF.GameDefine.GAME_STEP.GAME_STEP_INC_DOUBLING then 
        self:dispatchEvent({name = self.EVENT_CLEAR_ADD_MULTIPLE})--根据千变PC写的方法是每次都清除的
    end 
end


function AddMultipleModule:onMsgIncDoublingPower(msgData)
    self:setAddMultipleType(msgData.seat,CF.GameProtocol.msgAddMulti.ADDMULTITYPE.NONE)
    self:dispatchEvent({name = self.EVENT_GAME_ADD_MULTIPLE, msg = {seat = msgData.seat,multi = CF.GameProtocol.msgAddMulti.ADDMULTITYPE.NONE}})
end

function AddMultipleModule:onMsgIncDoubling(msgData)
    
    local multipleType = msgData.increament + 1 --千变和约局通用加倍的枚举是+1关系
    self:setAddMultipleType(msgData.seat,multipleType)
    self:dispatchEvent({name = self.EVENT_GAME_ADD_MULTIPLE, msg = {seat = msgData.seat,multi = multipleType}})
    local multipleInfoData = {
        multi = msgData.value
    }
    self:dispatchEvent({name = self.EVENT_ADD_MULTIPLE_INFO, msg = {data = multipleInfoData}})

    --千变双扣是先加倍成功后再扣卡
    if CF.GameProtocol.msgAddMulti.ADDMULTITYPE.SUPER == multipleType and msgData.flag == CF.GameProtocol.msgIncDoubling.FLAG.SUCCESS and msgData.seat == CF.roomData:getSelfSeat() then 
        self:deductAddMultipleProp()
    end 
end


function AddMultipleModule:onMsgReturnProp(msgData)
    self:dispatchEvent({name = self.EVENT_RETURN_PROP, msg = {data = msgData}})
end

function AddMultipleModule:onRespUseProps(event)
    local respData = CF.GameProtocolGT.RespUseProps:new()
    respData:bistream(event.msg.buff, event.msg.len)
end

return AddMultipleModule