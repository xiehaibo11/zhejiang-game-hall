local OceanModule = NG.GAME.gameClass("OceanModule", NG.GAME.ModuleBase)
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")

OceanModule.EVENT_OCEAN_MSG = "EVENT_OCEAN_MSG"
local filePath = "src/newgold/GoldCommon/ProtoBuf/ocean.lua"
local packageName = "ocean"
local msgName = {[20104] = "notice_person", [20110] = "notice_sync_room_status" }

function OceanModule:ctor()
    OceanModule.super.ctor(self)
    local moduleProxy = self:getModuleProxy(NG.netEngine)
    moduleProxy:addEventListener(self:getEventKey(), handler(self, self.onServerToClientMessage))
end

function OceanModule:initMessages()
    -- NG.netEngine:addProtocolScriptFuncByObj(self, self.respStartGame, GoldRoomProtoDefine.processid, GoldAreaConfig.GroupID)
end

function OceanModule:getProxyEvents()
    return {
    --
    }
end

function OceanModule:getSubXYDealList()
    return {
    }
end

function OceanModule:getEventKey()
    return NG.GameMProtocol.ServerToClientMessage.event_key
end

function OceanModule:onServerToClientMessage(event)
    local sToClientData = NG.GameMProtocol.ServerToClientMessage:new()
    sToClientData:bistream(event.msg.buff, event.msg.len)
    local subXYID = sToClientData.cmdid
    local subBuff = sToClientData.message
    local subLen = sToClientData.msglen
    local resqDataName = msgName[subXYID]
    if resqDataName then
        local protoc = require("app.Third.Proto.protoc")
        local Protoc = protoc.new()
        local pb = require "pb"
        Protoc:load(require(filePath), packageName)
        local data = assert(pb.decode(packageName .. "." .. resqDataName, subBuff))
        print("ocean ".. resqDataName)
        -- dump(data)
        if subXYID == 20104 then
            local jsonData
            pcall(function()
                jsonData = cjson.decode(data.roomconf)
            end)
            if jsonData then
                local gameRules = {}
                local gameRulesStr = string.split(jsonData.gamerule, ';')
                for i=1, #gameRulesStr do
                    local rule = string.split(gameRulesStr[i], '=')
                    gameRules[rule[1]] = rule[2]
                end
                if gameRules.session_id then
                    GoldPlayerData.Session_id = tonumber(gameRules.session_id)
                end
            end
        end
        self:dispatchEvent({ name = self.EVENT_OCEAN_MSG, msg = { cmdid = subXYID, data = data } })
    end
end

function OceanModule:getReqConfig()
    return {
    }
end

function OceanModule:removeAllEventListeners()
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    if self._listenerCheckedCard then
        eventDispatcher:removeEventListener(self._listenerCheckedCard)
    end
end

return OceanModule#