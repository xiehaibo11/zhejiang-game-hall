-----------------------------------------------------------------------------
--| 本地缓存读取与写入，存储格式为Lua LuaFileCache @LeeWei 2016-8-5
-----------------------------------------------------------------------------
local LuaFileCache = class("LuaFileCache")
local rootPath = cc.FileUtils:getInstance():getWritablePath()

-- 序列化字符串
local function serialize(obj)
    local lua = ""
    local t = type(obj)
    if t == "number" then
        lua = lua .. obj
    elseif t == "boolean" then
        lua = lua .. tostring(obj)
    elseif t == "string" then
        lua = lua .. string.format("%q", obj)
    elseif t == "table" then
        lua = lua .. "{\n"
        for k, v in pairs(obj) do
            lua = lua .. "[" .. serialize(k) .. "]=" .. serialize(v) .. ",\n"
        end
        local metatable = getmetatable(obj)
        if metatable ~= nil and type(metatable.__index) == "table" then
            for k, v in pairs(metatable.__index) do
                lua = lua .. "[" .. serialize(k) .. "]=" .. serialize(v) .. ",\n"
            end
        end
        lua = lua .. "}"
    elseif t == "nil" then
        return nil
    else
        error("can not serialize a " .. t .. " type.")
    end
    return lua
end

function LuaFileCache:getInstance()
    if self._instance == nil then
        self._instance = self:new()
        self._fileDataList = {}
    end
    return self._instance
end

function LuaFileCache:destroyInstance()
    if self._instance then
        self._instance = nil
        self._fileDataList = nil
    end
end

-- 读取本地缓存Lua文件，以Lua Table的形式返回
function LuaFileCache:getLuaFromFile(fileName)
    if not self._fileDataList[fileName] then
        if not cc.FileUtils:getInstance():isFileExist(rootPath .. fileName) then
            print("fileName not exist", fileName)
            self._fileDataList[fileName] = {}
            return self._fileDataList[fileName]
        end
        local str = cc.FileUtils:getInstance():getStringFromFile(rootPath .. fileName) or ""
        if "" ~= str then
            self._fileDataList[fileName] = loadstring("return " .. (str))()
        end
    end
    return self._fileDataList[fileName]
end

-- 以Lua格式写入本地缓存文件 t为Lua Table
function LuaFileCache:writeFileWithLua(fileName, t)
    if not t or "table" ~= type(t) then return end
    fileName = fileName or "tmp.lua"
    print("rootPath", rootPath, rootPath .. fileName)
    local f = io.open(rootPath .. fileName, "wb")
    if f then
        f:write(serialize(t))
        f:flush()
    end
    io.close()
    self._fileDataList[fileName] = t
end

-- 追加数据 t为Lua Table
function LuaFileCache:appendFileWithLua(fileName, t)
    local oldT = self:getLuaFromFile(fileName)
    for uniqueKey, v in pairs(t or {}) do
        oldT[uniqueKey] = v
    end
    self:writeFileWithLua(fileName, oldT)
end

-- 以主键从缓存查找数据
function LuaFileCache:findData(fileName, uniqueKey)
    local t = self:getLuaFromFile(fileName)
    for k, v in pairs(t or {}) do
        if k == uniqueKey then
            return v
        end
    end
    return nil
end

XH.bf.LuaFileCache = LuaFileCache