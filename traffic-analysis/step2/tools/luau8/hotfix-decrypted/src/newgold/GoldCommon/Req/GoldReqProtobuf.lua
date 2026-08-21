local GoldReqProtobuf = class("GoldReqProtobuf", NG.Req)
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")
local pb = require "pb"

function GoldReqProtobuf:ctor()
    GoldReqProtobuf.super.ctor(self)
    self._srsGroupID = 0
    self._processID = 0
    self._askID = XH.askIDManager:getAskID()
end

function GoldReqProtobuf:start(timeoutTime, srsGroupID, processID)
    GoldReqProtobuf.super.start(self, timeoutTime)
    self._srsGroupID = srsGroupID or GoldAreaConfig.GroupID
    self._processID = processID or 0
end

function GoldReqProtobuf:success(data)
    GoldReqProtobuf.super.success(self, data)
    if NG then
        NG.netEngine:removeProtocolScriptFuncByObj(self, nil, self._srsGroupID)
    end
end

function GoldReqProtobuf:fail(data)
    GoldReqProtobuf.super.fail(self, data)
    if NG then
        NG.netEngine:removeProtocolScriptFuncByObj(self, nil, self._srsGroupID)
    end
end

function GoldReqProtobuf:timeout(data)
    GoldReqProtobuf.super.timeout(self, data)
    if NG then
        NG.netEngine:removeProtocolScriptFuncByObj(self, nil, self._srsGroupID)
    end
end

function GoldReqProtobuf:stop()
    GoldReqProtobuf.super.stop(self)
    if NG then
        NG.netEngine:removeProtocolScriptFuncByObj(self, nil, self._srsGroupID)
    end
end

function GoldReqProtobuf:onProtocolCallBack(xyID, buff, len)
    local callBackProtocol = self._callBackProtocols[xyID]
    if callBackProtocol == nil then
        return
    end
    self:onMsgReceive(buff)
end

function GoldReqProtobuf:onMsgReceive(msgData)
    self:success(msgData)
end

function GoldReqProtobuf:sendProtobuf(reqData, callBackFunc, appID, srsGroupID)
    if not reqData or not reqData.processid then
        return
    end
    if callBackFunc == nil then
        self:success()
        return
    end
    srsGroupID = srsGroupID or GoldAreaConfig.GroupID
    appID = appID or 0
    self._callBackProtocols[reqData.RESP_XY_ID] = callBackFunc
    NG.netEngine:addProtocolScriptFuncByObj(self, self.onProtocolCallBack, reqData.processid, srsGroupID)
    NG.netEngine:sendProtoBuf(reqData, reqData.processid, appID, srsGroupID)
end

function GoldReqProtobuf:getProtoFilePath()
    if self._protobuf and cc.FileUtils:getInstance():isFileExist("src/newgold/GoldCommon/ProtoBuf/" .. self._protobuf.protobufFile .. ".lua") then
        return "src/newgold/GoldCommon/ProtoBuf/" .. self._protobuf.protobufFile .. ".lua"
    end
    if self._protobuf and cc.FileUtils:getInstance():isFileExist("src/newgold/GoldCommon/ProtoBuf/" .. self._protobuf.protobufFile .. ".luac") then
        return "src/newgold/GoldCommon/ProtoBuf/" .. self._protobuf.protobufFile .. ".luac"
    end
    return ""
end

function GoldReqProtobuf:getPackageName()
    if not self._protobuf then
        return ""
    else
        return self._protobuf.packageName
    end
end

function GoldReqProtobuf:getReqDataName()
    if not self._protobuf then
        return ""
    else
        return self._protobuf.reqName
    end
end

function GoldReqProtobuf:getResqDataName()
    if not self._protobuf then
        return ""
    else
        return self._protobuf.resqName
    end
end

function GoldReqProtobuf:luaDataToProtobufData(table)
    local filePath = self:getProtoFilePath()
    local packageName = self:getPackageName()
    local reqDataName = self:getReqDataName()
    if filePath and packageName and reqDataName and filePath ~= "" and packageName ~= "" and reqDataName ~= "" then
        local protoc = require("app.Third.Proto.protoc")
        local Protoc = protoc.new()
        Protoc:load(require(filePath), packageName)
        local bytes = assert(pb.encode(packageName .. "." .. reqDataName, table))
        return bytes
    end
end

function GoldReqProtobuf:protobufDataToLuaData(bytes)
    local filePath = self:getProtoFilePath()
    local packageName = self:getPackageName()
    local resqDataName = self:getResqDataName()
    if filePath and packageName and resqDataName and filePath ~= "" and packageName ~= "" and resqDataName ~= "" then
        local protoc = require("app.Third.Proto.protoc")
        local Protoc = protoc.new()
        Protoc:load(require(filePath), packageName)
        local data2 = assert(pb.decode(packageName .. "." .. resqDataName, bytes))
        return data2
    end
end

function GoldReqProtobuf:mergeData(data)
    local _msg = {}
    _msg.data = data
    _msg.XY_ID = self._protobuf.reqxyid
    _msg.processid = self._protobuf.processid
    _msg.RESP_XY_ID = self._protobuf.respxyid
    return _msg
end

return GoldReqProtobuf
\