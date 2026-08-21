local ReqProtobuf50 = class("ReqProtobuf50", XH.Req)
--local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")
local pb = require "pb"

function ReqProtobuf50:ctor()
    ReqProtobuf50.super.ctor(self)
    self._srsGroupID = 0
    self._processID = 0
    self._askID = XH.askIDManager:getAskID()
    self._callBackProtobuf = {}
end

function ReqProtobuf50:start(timeoutTime, srsGroupID, processID)
    ReqProtobuf50.super.start(self, timeoutTime)
    self._srsGroupID = srsGroupID or XH.areaData:getGoldSrsGroupID()
    self._processID = processID or 0
end

function ReqProtobuf50:success(data)
    ReqProtobuf50.super.success(self, data)
    if XH then
        XH.netEngine:removeProtocolScriptFuncByObj(self, nil, self._srsGroupID)
    end
end

function ReqProtobuf50:fail(data)
    ReqProtobuf50.super.fail(self, data)
    if XH then
        XH.netEngine:removeProtocolScriptFuncByObj(self, nil, self._srsGroupID)
    end
end

function ReqProtobuf50:timeout(data)
    ReqProtobuf50.super.timeout(self, data)
    if XH then
        XH.netEngine:removeProtocolScriptFuncByObj(self, nil, self._srsGroupID)
    end
end

function ReqProtobuf50:stop()
    ReqProtobuf50.super.stop(self)
    if XH then
        XH.netEngine:removeProtocolScriptFuncByObj(self, nil, self._srsGroupID)
    end
end

function ReqProtobuf50:onProtocolCallBack(xyID, buff, len)
    local callBackProtobuf = self._callBackProtobuf[xyID]
    if callBackProtobuf == nil then
        return
    end
    local msgData = XH.Protobuf.protobufToMsg(callBackProtobuf,buff)
    self:onMsgReceive(msgData)
end

function ReqProtobuf50:onMsgReceive(msgData)
    self:success(msgData)
end

function ReqProtobuf50:sendProtobuf(reqData,reqStruct,respStruct, appID, srsGroupID)
    if not reqData or not reqStruct.processid then
        return
    end
    
    srsGroupID = srsGroupID or self._srsGroupID
    appID = appID or 88888888
    self._callBackProtobuf[respStruct.XY_ID] = respStruct
    local buf = XH.Protobuf.msgToProtobuf(reqStruct,reqData)
    local bufData = XH.Protobuf.mergeBufData(reqStruct,buf)

    XH.netEngine:addProtocolScriptFuncByObj(self, self.onProtocolCallBack, reqStruct.processid, srsGroupID)
    XH.netEngine:sendProtoBuf(bufData, reqStruct.processid, appID, srsGroupID)
end


return ReqProtobuf50
K	