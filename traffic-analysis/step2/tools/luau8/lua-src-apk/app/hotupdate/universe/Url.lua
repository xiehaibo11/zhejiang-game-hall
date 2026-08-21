local cjson = require("cjson")

local url = {}

local char_to_hex = function(c)
    return string.format("%%%02X", string.byte(c))
end

function url.encode(s)
    if s == nil then
        return
      end
      s = s:gsub("\n", "\r\n")
      s = s:gsub("([^%w ])", char_to_hex)
      s = s:gsub(" ", "+")
      return s
end

local hex_to_char = function(x)
    return string.char(tonumber(x, 16))
end  

function url.decode(s)
    if s == nil then
        return
      end
      s = s:gsub("+", " ")
      s = s:gsub("%%(%x%x)", hex_to_char)
      return s
end

function url.generate(strUrl, params)
    local p = {}
    for k,v in pairs(params) do
        p[#p + 1] = k .. "=" .. url.encode(v)
    end
    local strParams = table.concat(p, "&")
    return strUrl .. "&" .. strParams
end

function url.sign(params)
    local keys = {}
    for k,v in pairs(params) do
        keys[#keys + 1] = k
    end
    table.sort(keys)

    local p = {}
    for k,v in ipairs(keys) do
        local info = params[v]
        if info and not (type(info) == "string" and #info == 0)  then
            p[#p + 1] = v .. '=' .. tostring(info)
        end
    end
    local strParams = table.concat(p, "&")
    return un.sign(strParams)
end

function url.toJson(info)
    local ret = ""
    local ok, msg = pcall(function()
        ret = cjson.encode(info)
    end)

    if not ok then
        print("url.toJson failed: " .. msg)
        ret = ""
    end

    return ret
end

function url.rmtail(s)
    if s then
        local pos = string.find(s, "?")
        if pos and pos > 0 then
            return string.sub(s, 1, pos - 1)
        end
    end
end

un.url = url
�