-- 写这个是为了不用再界面节点销毁的时候移除网络消息
local LongConn = require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.LongConnect").getInstance()
local netObj = class("netObj", function()
    return display.newNode()
end)

function netObj:ctor(uri, callback)

    local is_cleanup = false
    local function listener(uri, body)
        if not self or tolua.isnull(self) then
            return
        end
        if not is_cleanup then
            return callback(uri, body)
        end
    end
    self:registerScriptHandler(function(event)
        if event == "cleanup" then
            is_cleanup = true
            LongConn:removeListener(listener, uri)
        end
    end)
    LongConn:addListener(uri, listener)
end

local eventObj = class("eventObj", netObj)
function eventObj:ctor(event_name, callback, add_data)

    local is_cleanup = false
    local function listener(event_name, params, add_data)
        if not self or tolua.isnull(self) then
            return
        end
        if not is_cleanup then
            callback(event_name, params, add_data)
        end
    end

    self:registerScriptHandler(function(event)
        if event == "cleanup" then
            is_cleanup = true
            GlobalEventManager:removeListener(event_name, listener)
        end
    end)

    GlobalEventManager:addListener(event_name, listener, add_data)
end

return { netObj, eventObj }