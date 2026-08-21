local RequireManager = class("RequireManager")

function RequireManager:ctor()
    self._allSearchPath = {}
end

function RequireManager:addSearchPath(searchPath)
    table.insert(self._allSearchPath, searchPath)
end

function RequireManager:clearAllSearchPath()
    self._allSearchPath = {}
end

function RequireManager:setGameID(gameID)
    self:clearAllSearchPath()
    if not gameID or not NG.GAME.GameSub[gameID] then
        return
    end
    for _, path in ipairs(NG.GAME.GameSub[gameID].SeachPathList) do
        self:addSearchPath(path)
    end
end

function RequireManager:require(fileName)
    for _, path in ipairs(self._allSearchPath) do
        local filePath = path .. "." ..fileName
        if NG.FileTool.isFileExist(filePath) then
            return require(filePath)
        end
    end
    if NG.FileTool.isFileExist(fileName) then
        return require(fileName)
    end
    return nil
end

return RequireManager�