
local pb = require "pb"

local Protobuf = {}

function Protobuf.protobufToMsg(struct,buf)
    local filePath = Protobuf.getProtoFilePath(struct.protobufName)
    local packageName = struct.protobufPackage
    local resqDataName = struct.name
    if filePath and packageName and resqDataName and filePath ~= "" and packageName ~= "" and resqDataName ~= "" then
        local protoc = require("app.Third.Proto.protoc")
        local Protoc = protoc.new()
        Protoc:load(require(filePath), packageName)
        local data2 = assert(pb.decode(packageName .. "." .. resqDataName, buf))
        return data2
    end
end

function Protobuf.msgToProtobuf(struct,msg)
    local filePath = Protobuf.getProtoFilePath(struct.protobufName)
    local packageName = struct.protobufPackage
    local reqDataName = struct.name
    if filePath and packageName and reqDataName and filePath ~= "" and packageName ~= "" and reqDataName ~= "" then
        local protoc = require("app.Third.Proto.protoc")
        local Protoc = protoc.new()
        Protoc:load(require(filePath), packageName)
        local bytes = assert(pb.encode(packageName .. "." .. reqDataName, msg))
        return bytes
    end
end

function Protobuf.mergeBufData(struct,buf)
    local bufData = {}
    bufData.data = buf
    bufData.XY_ID = struct.XY_ID
    bufData.processid = struct.processid
    return bufData
end


function Protobuf.getProtoFilePath(name)
    if cc.FileUtils:getInstance():isFileExist("src/game/Common/Protobuf/ProtoFile/" .. name .. ".lua") then
        return "src/game/Common/Protobuf/ProtoFile/" .. name .. ".lua"
    end
    if cc.FileUtils:getInstance():isFileExist("src/game/Common/Protobuf/ProtoFile/" .. name .. ".luac") then
        return "src/game/Common/Protobuf/ProtoFile/" .. name .. ".luac"
    end
    return ""
end

return ProtobufX