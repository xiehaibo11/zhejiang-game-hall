--Tools
local _Util = {}

local socket = require("socket")
local cjson = require("cjson")

local baseStr = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/'
local key = "7b5dbe2521c4308c42314e80f529618e"

local function isCocos()
    if nil == cc then
        return false
    else
        return true
    end
end

local function urlEncode(s)
    s = string.gsub(s, "([^%w%.%- ])", function(c)
        return string.format("%%%02X", string.byte(c))
    end)
    return string.gsub(s, " ", "+")
end

local function cocos_get(url, data, callback, tryCnt)
    if data ~= nil then
        url = url .. '?'
        for k, v in pairs(data) do
            url = url .. k .. '=' .. urlEncode(v) .. '&'
        end
        url = string.sub(url, 1, -2)
    end

    tryCnt = tryCnt - 1
    local xhr = cc.XMLHttpRequest:new()
    xhr.responseType = cc.XMLHTTPREQUEST_RESPONSE_JSON
    xhr.url = url
    xhr:open("GET", url)
    local function onResponse()
        if xhr.readyState == 4 and xhr.status == 200 then
            callback(xhr.response)
        else
            if tryCnt >= 0 then
                cocos_get(url, data, callback, tryCnt - 1)
            else
                callback(xhr.response)
            end
        end
    end
    xhr:registerScriptHandler(onResponse)
    xhr:send()
end

local function socket_get(url, data)
    local http = require("socket.http")
    local ltn12 = require("ltn12")

    if data ~= nil then
        url = url .. '?'
        for k, v in pairs(data) do
            url = url .. k .. '=' .. urlEncode(v) .. '&'
        end
        url = string.sub(url, 1, -2)
    end

    local response_body = {}
    local _, code = http.request {
        url = url,
        create = function()
            local req_sock = socket.tcp()
            req_sock:settimeout(30, 't')
            return req_sock
        end,
        method = "GET",
        sink = ltn12.sink.table(response_body),
    }

    local res = table.concat(response_body)

    return res, code
end

function _Util.get(url, data, callback, tryCnt)
    if isCocos() then
        cocos_get(url, data, callback, tryCnt)
    else
        local res, _ = socket_get(url, data)
        callback(res)
    end
end


local function now()
    local number, _ = math.modf(socket.gettime() * 1000)
    return number
end

local function toJson(eventArrayJson)
    return cjson.encode(eventArrayJson)
end

local function encodeGzip(data)
    local zlib = require('zlib')
    if isCocos() then
        local compress = zlib.deflate()
        local deflated, _, _, _ = compress(data, 'finish')
        return deflated
    else
        return zlib.compress(data)
    end
end

-- base64
local function encodeBase64(data)
    return ((data:gsub('.', function(x)
        local r, b = '', x:byte()
        for i = 8, 1, -1 do
            r = r .. (b % 2 ^ i - b % 2 ^ (i - 1) > 0 and '1' or '0')
        end
        return r;
    end) .. '0000'):gsub('%d%d%d?%d?%d?%d?', function(x)
        if (#x < 6) then
            return ''
        end
        local c = 0
        for i = 1, 6 do
            c = c + (x:sub(i, i) == '1' and 2 ^ (6 - i) or 0)
        end
        return baseStr:sub(c + 1, c + 1)
    end) .. ({ '', '==', '=' })[#data % 3 + 1])
end

local function md5_encode(k)
    if isCocos() then
        return XH.SysTool:md5_encode(k)
    else
        local md5_core = require('md5.core')
        k = md5_core.sum(k)
        return string.gsub(k, ".", function(c)
            return string.format("%02x", string.byte(c))
        end)
    end
end

local function cocos_post(url, site, eventArrayJson, callback)
    local request_time = now()
    local request_body = encodeBase64(encodeGzip(toJson(eventArrayJson)))
    local auth = md5_encode(request_body .. "&" .. request_time .. "&" .. key)

    local xhr = cc.XMLHttpRequest:new()
    xhr.responseType = cc.XMLHTTPREQUEST_RESPONSE_JSON
    xhr.url = url
    xhr:open("POST", url)

    xhr:setRequestHeader("Site", site)
    xhr:setRequestHeader("RequestTime", request_time)
    xhr:setRequestHeader("Authorization", auth)
    xhr:setRequestHeader("Content-Type", "application/gzip")

    local function onResponse()
        callback(xhr.response, xhr.status)
    end
    xhr:registerScriptHandler(onResponse)
    xhr:send(request_body)
end

local function socket_post(url, site, eventArrayJson)
    local http = require("socket.http")
    local ltn12 = require("ltn12")

    local request_time = now()
    local request_body = encodeBase64(encodeGzip(toJson(eventArrayJson)))
    local auth = md5_encode(request_body .. "&" .. request_time .. "&" .. key)

    local response_body = {}
    local _, code = http.request {
        url = url,
        create = function()
            local req_sock = socket.tcp()
            req_sock:settimeout(15, 't')
            return req_sock
        end,
        method = "POST",
        headers = {
            ["Site"] = site;
            ["RequestTime"] = request_time;
            ["Authorization"] = auth;
            ["Content-Type"] = "application/gzip";
            ["Content-Length"] = #request_body;
        },
        source = ltn12.source.string(request_body),
        sink = ltn12.sink.table(response_body),
    }
    local res = table.concat(response_body)

    return res, code
end

function _Util.post(url, site, eventArrayJson, callback)
    if isCocos() then
        cocos_post(url, site, eventArrayJson, callback)
    else
        local res, code = socket_post(url, site, eventArrayJson, callback)
        callback(res, code)
    end
end


function _Util.fromJson(jsonStr)
    return cjson.decode(jsonStr)
end

function _Util.mergeTables(...)
    local tabs = { ... }
    if not tabs then
        return {}
    end
    local origin = tabs[1]
    for i = 2, #tabs do
        if origin then
            if tabs[i] then
                for k, v in pairs(tabs[i]) do
                    -- 不进行覆盖
                    if origin[k] == nil then
                        origin[k] = v
                    end
                end
            end
        else
            origin = tabs[i]
        end
    end
    return origin
end

function _Util.trim(s)
    return (string.gsub(s, "^%s*(.-)%s*$", "%1"))
end

local function isTimeStamp(t)
    local rt = string.gsub(t, '%.', '')
    if rt == nil or string.len(rt) < 13 or tonumber(rt) == nil then
        return false
    end
    local status = pcall(function(tim)
        local number, _ = math.modf(tonumber(tim) / 1000)
        os.date("%Y%m%d%H%M%S", number)
    end, rt)
    return status
end

function _Util.now(t)
    if t == nil or string.len(t) == 0 then
        local number, _ = math.modf(socket.gettime() * 1000)
        return number
    end
    if (isTimeStamp(t)) then
        return t
    end
    return nil
end

local function random(n, m)
    math.randomseed(os.clock() * math.random(1000000, 90000000) + math.random(1000000, 90000000))
    return math.random(n, m)
end

function _Util.randomLetter(len)
    local rt = ""
    for _ = 1, len, 1 do
        rt = rt .. string.char(random(65, 90))
    end
    return rt
end

return _Util�