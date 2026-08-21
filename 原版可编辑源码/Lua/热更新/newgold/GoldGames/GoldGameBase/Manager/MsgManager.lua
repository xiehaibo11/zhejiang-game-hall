local MsgManager = class("MsgManager", NG.ModuleBase)
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")
local protoc = require("app.Third.Proto.protoc")
local GoldRoomProtoDefine = require("newgold.GoldCommon.ProtoBuf.game_cli_define")
local pb = require "pb"
local FWProtocol = NG.GAME.gameRequire("Protocol.FWProtocol")
local IsGoldBoxTest = require("app.Config.GlobalConfig").IsGoldBoxTest

function MsgManager:ctor(appId)
    MsgManager.super.ctor(self)
    self:setAppId()
    self._processId = GoldRoomProtoDefine.processid
    self._protobufFile = "game_cli"
    self._packageName = "game_cli"
end

function MsgManager:setAppId(appId)
    self._appId = appId or GoldPlayerData.AppId
end

function MsgManager:sendProtoBuf(msgObj)
    NG.netEngine:sendProtoBuf(msgObj)
end

function MsgManager:getProtoFilePath()
    if self._protobufFile and cc.FileUtils:getInstance():isFileExist("src/newgold/GoldCommon/ProtoBuf/" .. self._protobufFile .. ".lua") then
        return "src/newgold/GoldCommon/ProtoBuf/" .. self._protobufFile .. ".lua"
    end
    if self._protobufFile and cc.FileUtils:getInstance():isFileExist("src/newgold/GoldCommon/ProtoBuf/" .. self._protobufFile .. ".luac") then
        return "src/newgold/GoldCommon/ProtoBuf/" .. self._protobufFile .. ".luac"
    end
    return ""
end

function MsgManager:sendGameProtocol(data, name, xyID, processID, appID)
    local filePath = self:getProtoFilePath()
    local packageName = self._packageName
    local Protoc = protoc.new()
    Protoc:load(require(filePath), packageName)
    local bytes = assert(pb.encode(packageName .. "." .. name, data))

    local msg = {}
    msg.data = bytes
    msg.XY_ID = xyID
    msg.processid = processID or self._processId
    appID = appID or self._appId

    NG.netEngine:sendProtoBuf(msg, msg.processid, appID, GoldAreaConfig.GroupID)
end

function MsgManager:sendStreamPacket(protocol)
    if NG.goldGame.gameID ~= GoldAreaConfig.LZDDZ then
        print("【send】..." .. (protocol.__cname or "") ..  (protocol.XY_ID or protocol.cmdid))
        dump(protocol)
        local bos = protocol:bostream()
        local tClientToServerMessageData = NG.GameMProtocol.ClientToServerMessage:new()
        tClientToServerMessageData.cmdid = protocol.XY_ID or protocol.cmdid
        tClientToServerMessageData.message = bos:getBytes()
        tClientToServerMessageData.msglen = bos:getLength()
        if CF and CF.IS_LOCAL then
            NG.netEngine:sendProtocol(tClientToServerMessageData, NG.GameMProtocol.ClientToServerMessage.processid or 1, 0, 50000)
        elseif IsGoldBoxTest then
            NG.netEngine:sendProtocol(tClientToServerMessageData, NG.GameMProtocol.ClientToServerMessage.processid or 1, 7617, 5008)
        else
            NG.netEngine:sendProtocol(tClientToServerMessageData, 2022, 0, GoldAreaConfig.GroupID)
        end
    else
        local bos = protocol:bostream()
        local reqClientToServerMessage = { cmd_id = protocol.XY_ID, msg_len = bos:getLength(), message = bos:getBytes(), askid = os.time() }
        self:sendGameProtocol(reqClientToServerMessage, "ClientToServerMessage", GoldRoomProtoDefine.xyid.kClientToServerMessage)
    end
end

------------------------------GameMProtocol------------------------------

function MsgManager:sendPlayerConnect()
    if NG.goldGame == nil then
        return
    end
    if NG.goldGame.gameID ~= GoldAreaConfig.LZDDZ then
        local reqPlayerConnect2Data = NG.GameMProtocol.ReqPlayerConnect2:new()
        reqPlayerConnect2Data.askid = os.time()
        local funcReady = function()
            local msgPlayerStart = NG.LogicBaseProtocol.msgPlayerStart:new()
            msgPlayerStart.nBrandID = GoldPlayerData.AreaId
            msgPlayerStart.nNumberID = GoldPlayerData.NumId
            self:sendStreamPacket(msgPlayerStart)
        end
        if CF and CF.IS_LOCAL then
            NG.netEngine:sendProtocol(reqPlayerConnect2Data, reqPlayerConnect2Data.processid, 0, 50000)
            funcReady()
        elseif IsGoldBoxTest then
            NG.netEngine:sendProtocol(reqPlayerConnect2Data, reqPlayerConnect2Data.processid, 7617, 5008)
            funcReady()
        else
            reqPlayerConnect2Data.roomid = 0
            NG.netEngine:sendProtocol(reqPlayerConnect2Data, 1, 88888888, GoldAreaConfig.GroupID)
        end
    else
        local reqPlayerConnect = {session_id = GoldPlayerData.SessionId, roomid = 0, areaid = GoldPlayerData.AreaId, numid = GoldPlayerData.NumId}
        self:sendGameProtocol(reqPlayerConnect, "PlayerConnect", GoldRoomProtoDefine.xyid.kPlayerConnect)
    end
end

--俏皮话
function MsgManager:sendGameSpeak(index)
    local gameSpeak = FWProtocol.msgTalkMsg:new()
    gameSpeak.m_areaid = GoldPlayerData.AreaId
    gameSpeak.m_numberid = GoldPlayerData.NumId
    gameSpeak.m_talkindex = index
    gameSpeak.XY_ID = FWProtocol.msgTalkMsg.cmdid
    self:sendStreamPacket(gameSpeak)
end

return MsgManager