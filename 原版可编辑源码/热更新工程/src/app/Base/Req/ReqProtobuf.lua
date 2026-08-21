local ReqProtobuf = class("ReqProtobuf", XH.ReqProtocol)
local pb = require "pb"

function ReqProtobuf:ctor()
    ReqProtobuf.super.ctor(self)
    self._protobuf = nil
    self._reqProtobuf = nil
end

function ReqProtobuf:sendProtobufMsg(groupID)
    if not self._protobuf or not self._reqProtobuf then
        return
    end
    local nowTime = tostring(os.time())
    self._nAskId = tonumber(self._reqProtobuf.xyid .. string.sub(nowTime, #nowTime - 3))
    local transTo50Data = XH.BoxDataProtocol.TransTo50Data:new()
    transTo50Data.nAskId = self._nAskId
    transTo50Data.nToProcessid = self._protobuf.processid
    transTo50Data.nToXY_ID = self._reqProtobuf.xyid
    transTo50Data.nXYData = self:luaDataToProtobufData(self._reqProtobuf.data)
    transTo50Data.nErrCode = 0
    local SRSGroupID = groupID or XH.areaData:getSrsGroupID()
    self:sendMsg(transTo50Data, XH.BoxDataProtocol.TransTo50Data, SRSGroupID, 0)
end

function ReqProtobuf:getProtoFilePath()
    local luaFile = "src/app/Protobuf/ProtoFile/" .. self._protobuf.protobufFile
    local luacFile = "src/app/Protobuf/ProtoFile/" .. self._protobuf.protobufFile .. "c"
    if device.platform == "windows" then
        if self._protobuf and cc.FileUtils:getInstance():isFileExist(luaFile) then
            return luaFile
        end
        if self._protobuf and cc.FileUtils:getInstance():isFileExist(luacFile) then
            return luacFile
        end
    else
        if self._protobuf and cc.FileUtils:getInstance():isFileExist(luacFile) then
            return luacFile
        end
        if self._protobuf and cc.FileUtils:getInstance():isFileExist(luaFile) then
            return luaFile
        end
    end
    return ""
end

function ReqProtobuf:getPackageName()
    if not self._protobuf then
        return ""
    else
        return self._protobuf.packageName
    end
end

function ReqProtobuf:getReqDataName()
    if not self._reqProtobuf then
        return ""
    else
        return self._reqProtobuf.reqName
    end
end

function ReqProtobuf:getResqDataName()
    if not self._reqProtobuf then
        return ""
    else
        return self._reqProtobuf.resqName
    end
end

function ReqProtobuf:luaDataToProtobufData(table)
    local filePath = self:getProtoFilePath()
    local packageName = self:getPackageName()
    local reqDataName = self:getReqDataName()
    if filePath and packageName and reqDataName and filePath ~= "" and packageName ~= "" and reqDataName ~= "" then
        local protoc = require("app.Third.Proto.protoc")
        local Protoc = protoc.new()
        -- Protoc:loadfile(filePath)
        Protoc:load(require(filePath), packageName)
        local bytes = assert(pb.encode(packageName .. "." .. reqDataName, table))
        return XH.SysTool:base64_encode(bytes)
    end
end

function ReqProtobuf:protobufDataToLuaData(bytes, xyid)
    -- decode json string and return jsondata
    xyid = xyid or -1
    if xyid ~= 1538 then
        local ok, jsondata = pcall(json.decode, bytes)
        if ok then
            print("ReqProtobuf json nXYData:" .. bytes)
            return jsondata
        end
    end
    local filePath = self:getProtoFilePath()
    local packageName = self:getPackageName()
    local resqDataName = self:getResqDataName()
    if filePath and packageName and resqDataName and filePath ~= "" and packageName ~= "" and resqDataName ~= "" then
        local protoc = require("app.Third.Proto.protoc")
        local Protoc = protoc.new()
        Protoc:load(require(filePath), packageName)
        print("ReqProtobuf nXYData:" .. bytes)
        bytes = XH.SysTool:base64_decode(bytes)
        if xyid == 1538 then
            bytes = XH.SysTool.uncompressZlib(bytes)
        end
        local data2 = assert(pb.decode(packageName .. "." .. resqDataName, bytes))
        return data2
    end
end

function ReqProtobuf:onProtocolCallBack(xyID, buff, len)
    local callBackProtocol = self._callBackProtocols[xyID]
    if callBackProtocol == nil then
        return
    end
    local msgData = callBackProtocol:new()
    msgData:bistream(buff, len)
    if self._nAskId ~= msgData.nAskId then
        return
    end
    msgData.nXYData = self:protobufDataToLuaData(msgData.nXYData, msgData.nToXY_ID)
    self:onMsgReceive(msgData)
end

return ReqProtobuf
