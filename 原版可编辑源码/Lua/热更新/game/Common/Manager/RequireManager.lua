local RequireManager = class("RequireManager")

function RequireManager:ctor()
    self._allSearchPath = {}
end

function RequireManager:setAllSearchPath(allSearchPath)
    self._allSearchPath = allSearchPath
end

function RequireManager:addSearchPath(searchPath)
    table.insert(self._allSearchPath, searchPath)
end

function RequireManager:clearAllSearchPath()
    self._allSearchPath = {}
end

function RequireManager:setGameID(gameID)
    local boxGameId = gameID
    local goldToBoxGameId = CF.gameSub:getGoldToBoxGameId(gameID)
    if goldToBoxGameId then
        boxGameId = goldToBoxGameId
    end
    self:clearAllSearchPath()
    local RequireConfig = require("game.Common.Config.RequireConfig")
    if not boxGameId or not RequireConfig[boxGameId] then
        return
    end
    for _, path in ipairs(RequireConfig[boxGameId].SeachPathList) do
        self:addSearchPath(path)
    end
end

-- windows优先遍历lua文件，其余平台优先遍历luac文件
function RequireManager:require(fileName)
    local fileData
    if device.platform == "windows" then
        fileData = self:requireLua(fileName)
        if not fileData then
            fileData = self:requireLuac(fileName)
        end
    else
        fileData = self:requireLuac(fileName)
        if not fileData then
            fileData = self:requireLua(fileName)
        end
    end
    return fileData
end

function RequireManager:requireLuac(fileName)
    for _, path in ipairs(self._allSearchPath) do
        local filePath = path .. "." .. fileName
        if CF.FileTool.isFileExistLuaC(filePath) then
            return require(filePath)
        end
    end
    if CF.FileTool.isFileExistLuaC(fileName) then
        return require(fileName)
    end
    return nil
end

function RequireManager:requireLua(fileName)
    for _, path in ipairs(self._allSearchPath) do
        local filePath = path .. "." .. fileName
        if CF.FileTool.isFileExistLua(filePath) then
            return require(filePath)
        end
    end
    if CF.FileTool.isFileExistLua(fileName) then
        return require(fileName)
    end
    return nil
end

return RequireManager