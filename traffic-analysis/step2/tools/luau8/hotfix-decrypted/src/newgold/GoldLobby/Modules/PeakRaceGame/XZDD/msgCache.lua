local allMsgCache = {}
local maxMsgCount = 1  			--缓存消息的最大数量， 暂定为1  后面有需求可以打开

local msgCache = {}
cc.exports.g_msgCache = msgCache


--需要缓存的  消息ID 列表
local needCacheCmds = {
    g_msgDefinitions.MSG_GAME_LOGIN_ACK,
    g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK,
    g_msgDefinitions.MSG_GAME_GAME_OVER_ACK,
    g_msgDefinitions.MSG_GAME_START_GAME,
    g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE,
    g_msgDefinitions.MSG_GAME_POKER_START_GAME,
    g_msgDefinitions.MSG_GAME_POKER_GAME_OVER_ACK,
}


function msgCache:addOneMsg(cmd, msg)
    allMsgCache[cmd] = allMsgCache[cmd] or {}
    if #allMsgCache[cmd] >= maxMsgCount then
        table.remove(allMsgCache[cmd], 1)
    end
    table.insert(allMsgCache[cmd], msg)
end

function msgCache:getMsgByCmd(cmd)
    local msgTs = allMsgCache[cmd] or {}
    local len = #msgTs
    return msgTs[len]
end

--检测是否这条消息是否需要缓存
function msgCache:needCache(cmd)
    for i, msgID in ipairs(needCacheCmds) do
        if cmd == msgID then
            return true
        end
    end
    return false
end


function msgCache:cleanMsgByCmd(cmd)
    allMsgCache[cmd] = {}
end

function msgCache:getAllMsgByCmd(cmd)
    return allMsgCache[cmd] or {}
end

return msgCacheE