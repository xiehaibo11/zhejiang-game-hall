
-- 长连接请求
-- local msg_definitions = g_msgDefinitions
-- local MsgUtil = require("app.msg.MsgUtil")
-- cc.exports.g_msgMap = require("app.msg.msg_map")
-- g_msgMap:init()
-- require("app.network.event_manager")
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")
local PeakRaceDispatchConfig = require("newgold.GoldLobby.Modules.PeakRaceDispatch.Define")

local common = common or {}
-- 返回table的key路径
function common.getTablePathByValue(t, value)
    for k,v in pairs(t) do
        if v == value then
            return k
        else
            if "table" == type(v) then
                local res = common.getTablePathByValue(v, value)
                if res then
                    return k.."."..res
                end
            end
        end
    end
end

function common.getTablePathByKey(t, key)
    for k,v in pairs(t) do
        if k == key then
            return k
        else
            if "table" == type(v) then
                local res = common.getTablePathByKey(v, key)
                if res then
                    return k.."."..res
                end
            end
        end
    end
end

local M = class("LongConn")

function M:ctor()
    self.isConnected = false
    self.listeners = {}
    self.socketTCalCache = {}
    self.selectServerIndex = 1
    -- 当前连接计数
    self.connectTimes = 0
    -- 尝试重连次数
    self.connectTimesMax = 3
    self.retryConnect = false
    self.msgQueue = {}
end


function M:_connect(__host, __port, _isIpv6)
    if not self.socketThread then
        self.isConnected = false
        local socketThread = cc.socketThread:new()
        socketThread:setSocketInfo(__host, __port)
        socketThread:setIpv6(_isIpv6 or false)

        socketThread.realCallBack = function(event, msg)
            if event == "tcpCleanup" then
                socketThread:release()
                if self.socketThread == socketThread then
                    print_log("tcpCleanup")
                    self.socketThread = nil
                    self:Dispatch("SOCKET_TCP_CLOSED")
                    if self.retryConnect then
                        -- 断线了还是优先连第一个服务器
                        self:resetTarSvrIndex()
                        self:connect()
                    end
                end
                return
            end

            if event == "tcpConnected" then
                if self.socketThread == socketThread then
                    print_log("tcpConnected")
                    self.isConnected = true
                    self:Dispatch("SOCKET_TCP_CONNECTED")
            
                    -- 成功后也重置连第一个服务器
                    self:resetTarSvrIndex()
                end
            elseif event == "tcp_data" then
                if self.socketThread == socketThread then
                    if not tolua.isnull(msg) then
                        --print_log("tcp_data")
                        self:Dispatch("SOCKET_RECV_ANY_MSG")
                        local msgT = MsgUtil:deSerializeMsgObg(msg)
                        LongConnDispatch(msgT)
                        if msgT.cmd == g_msgDefinitions.MSG_LINK_VALIDATION_ACK then
                            self.socketThread.linkValidated = true
                        end
                        msg:release()
                    else
                        print_log("tcp_data nil msg")
                    end
                else
                    if not tolua.isnull(msg) then
                        msg:release()
                    end
                end
            elseif event == "proto_overflow" then
                ShowConfirmBox("协议溢出，请检查协议长度")
            end
        end
        socketThread.callback = function (...)
            socketThread.realCallBack(...)
        end

        socketThread:setCallBack(socketThread.callback)
        socketThread:run()
        self.socketThread = socketThread
    else
        if self.isConnected then
            dump("已经连接成功不用再次连接")
        else
            dump("socket 已经创建")
        end
    end
end

function M:runMsgQueue(msgTable)
    table.insert(self.msgQueue, 1, msgTable)
    if self.schedulerEntry then
        return
    end
    local scheduler = cc.Director:getInstance():getScheduler()
    local function scheduleFunc(dt)
        local msgT = table.remove(self.msgQueue)
        if not msgT then
            cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self.schedulerEntry)
            self.schedulerEntry = nil
            return
        end
        if msgT then
            LongConnDispatch(msgT)
        end
    end
    self.schedulerEntry = scheduler:scheduleScriptFunc(scheduleFunc, 0.01 , false)
end

function M:isIpv6(host, callback)
    if type(callback) ~= "function" then
        return
    end

    local socketThread = cc.socketThread:new()
    socketThread.checkFlag = self.checkIpv6Flag
    socketThread:checkIpv6(host, function (res, msg)
        local mFlag = socketThread.checkFlag
        socketThread:release()
        if table.nums(msg) == 0 and self.checkIpv6Flag == mFlag then
            self:isIpv6(host, callback)
        else
            callback(res, msg)
        end
    end)
end

local test = false
-- c++ 层的消息会再这里分发
function M:Dispatch(uri, msgT)

    if uri == 0 then
        dump(debug.traceback(""))
    end

    local msg_definitions = g_msgDefinitions
        if msg_definitions.MSG_UPDATE_GPS_POSITION ~= uri
            and msg_definitions.MSG_HEART_BEATING ~= uri
            and 'SOCKET_RECV_ANY_MSG' ~= uri then
            -- 打印收到的消息
            local socket_name = "gameSocket"
            local str = common.getTablePathByValue({msg_definitions = msg_definitions}, uri)
            if str then
                str = string.format("%s %s %s", socket_name, "<-", str)
            else
                if type(uri) == "number" then
                    str = string.format("%s %s %s", socket_name, "<-", string.format("%X", tonumber(uri) or 0))
                else
                    str = string.format("%s %s %s", socket_name, "<-", uri)
                end
            end
            print(str)
        end

    if test and uri~='SOCKET_RECV_ANY_MSG' and uri~=g_msgDefinitions.MSG_HEART_BEATING and uri~=g_msgDefinitions.MSG_HEART_BEATING_ACK and g_msgDefinitions.MSG_UPDATE_GPS_POSITION~=uri then
        printf("M:recv uri: %s, len: %d, time: %s", table.keyof(g_msgDefinitions, uri) or tostring(uri), len or 0, os.date("%H:%M:%S"))
        dump({"收到内容", msgT})
    end

    local listeners = clone(self.listeners[uri] or {})
    for _, callback in ipairs(listeners) do
        local remove = callback(uri, msgT)
        if remove then
            self:removeListener(callback, uri)
        end
    end
end

function M:releaseSocketThread()
    print_log("releaseSocketThread")
    if self.socketThread then
        self.socketThread:kill()
        self.socketThread = nil
        return true
    end
end

function M:close()
    print_log("close socket")
    self.isConnected = false
    return self:releaseSocketThread()
end

function M:stopRecive(bFlag)
    if self.socketThread then
        self.socketThread:stopRecive(bFlag)
    end
end

function M:sendMsg(uri, msgT)
    if not NG.goldLobby:getModule("PeakRaceDispatch"):isRunFast() then
        local msgStr = PeakRaceDispatchConfig.CMD_TO_PROTO[uri]
        if  msgStr == nil then
            print("not support this xyid " .. uri)
            return
        end
        local info, len = NG.StringTool.luaDataToProtobufData50("TTISCProtols", msgT, msgStr, "sc.TTIProtols")
        NG.goldLobby:getModule("PeakRaceDispatch"):sendStreamPacket(PeakRaceDispatchConfig.SC_XY_Defines[msgStr], info)
        return len
    else
        local msgStr = PeakRaceDispatchConfig.AH_CMD_TO_PROTO[uri]
        if  msgStr == nil then
            print("not support this xyid " .. uri)
            return
        end
        local info, len = NG.StringTool.luaDataToProtobufData50("TTIAHProtols", msgT, msgStr, "ah.TTIProtols")
        NG.goldLobby:getModule("PeakRaceDispatch"):sendStreamPacket(PeakRaceDispatchConfig.AH_XY_Defines[msgStr], info)
        return len
    end
end

-- 添加对指定uri的监听
function M:addListener(uri, callback)
    self.listeners[uri] = self.listeners[uri] or {}
    table.insert(self.listeners[uri], callback)
end

-- 移除指定的callback
-- 如果uri为nil，移除callback所有的监听；否则callback和uri同时匹配才移除
function M:removeListener(callback, uri)

    local function removeCb(listeners)
        for i = #listeners, 1, -1 do
            if listeners[i] == callback then
                table.remove(listeners, i)
            end
        end
    end

    if not uri then
        for uri, listeners in pairs(self.listeners) do
            removeCb(listeners)
        end
    else
        removeCb(self.listeners[uri])
    end
end

function M:setIpCfg(cfg)
    self.ipCfg = cfg
end

function M:connect()
    self.retryConnect = true
    local SYS_REMOTE_SERVERS = self.ipCfg
    GlobalEventManager:onEvent( "game_connectServer" , {action = "parseDomain"})

    local curSelectServerIndex = self.selectServerIndex
    local cfg = SYS_REMOTE_SERVERS[curSelectServerIndex]
    local host = cfg.ip
    local port = cfg.port
    local isIpv6 = cfg.isIpv6
    local ipInfo = cfg.ipInfo

    local function connectServer(isIpv6, ipInfo)
        GlobalEventManager:onEvent( "game_connectServer" , {action = "connectServer"})
        if isIpv6 then
            self:_connect(ipInfo["AF_INET6"], port, true)
        else
            self:_connect(ipInfo["AF_INET"], port, false)
        end
    end

    if ipInfo then
        connectServer(isIpv6, ipInfo)
    else
        -- 标记，防止死循环般的坑
        self.checkIpv6Flag = self.selectServerIndex * 10 + self.connectTimes
        self:isIpv6(host, function (isIpv6, ipInfo)
            connectServer(isIpv6, ipInfo)
        end)
    end
    
    
    -- 次数计数+1
    self.connectTimes = self.connectTimes + 1
    
    -- 达到最大连接次数
    if self.connectTimes == self.connectTimesMax then
        self.selectServerIndex = self.selectServerIndex + 1
        if self.selectServerIndex > #SYS_REMOTE_SERVERS then
            self.selectServerIndex = 1
        end
        -- 重置计数
        self.connectTimes = 0
    end

    self:Dispatch("SOCKET_START_CONNECT")
end

function M:closeLongConn()
    print_log("closeLongConn")
    self.retryConnect = false
    self:close()
end

-- 断开当前连接自动建立下一个连接
function M:closeCurLongConn(resetIdx)
    print_log("closeCurLongConn")
    self.retryConnect = true
    if resetIdx then
        -- 从后台进入前台，还是选第一台服务器，王总说第一台网络好
        self.selectServerIndex = 1
    end
    self:close()
    self:connect()
end

function M:isCurSocketThreadCanHeartBeat()
    if self.socketThread and self.socketThread.linkValidated and self.isConnected and self.isConnected then
        return true
    end
    return false
end

local long_conn_instance
function M.getInstance()
	if not long_conn_instance then
		long_conn_instance = M.new()
	end
	return long_conn_instance
end

-- 重置目标服务器索引
function M:resetTarSvrIndex()
    self.selectServerIndex = 1
    self.connectTimes = 0
end

return M
N.