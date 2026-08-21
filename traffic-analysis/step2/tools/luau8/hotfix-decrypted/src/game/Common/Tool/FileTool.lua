local FileTool = class("")

-- 游戏基类调用文件是否存在，这边不存在会越来越耗时，优化方法，新增filecache去存储
function FileTool.isFileExist(filePath)
    if XH.GameFilesCache == nil then
        XH.GameFilesCache = {}
    end
    local luaFile = string.gsub(filePath, "%.", "/") .. ".lua"
    local luaCFile = luaFile .. "c"
    if XH.GameFilesCache[filePath] then
        return true
    elseif XH.GameFilesCache[filePath] == false then
        return false
    end
    -- 非windows平台，优先查找luac
    if device.platform == "windows" then
        if cc.FileUtils:getInstance():isFileExist(luaFile) or cc.FileUtils:getInstance():isFileExist(luaCFile) then
            XH.GameFilesCache[filePath] = true
            return true
        end
    else
        if cc.FileUtils:getInstance():isFileExist(luaCFile) or cc.FileUtils:getInstance():isFileExist(luaFile) then
            XH.GameFilesCache[filePath] = true
            return true
        end
    end
    XH.GameFilesCache[filePath] = false
    return false
end

function FileTool.isFileExistLua(filePath)
    local luaFile = string.gsub(filePath, "%.", "/") .. ".lua"
    return CF.FileTool.isFileExistFilePath(luaFile)
end

function FileTool.isFileExistLuaC(filePath)
    local luaCFile = string.gsub(filePath, "%.", "/") .. ".luac"
    return CF.FileTool.isFileExistFilePath(luaCFile)
end

function FileTool.isFileExistFilePath(filePath)
    if XH.GameFilesCache == nil then
        XH.GameFilesCache = {}
    end
    if XH.GameFilesCache[filePath] then
        return true
    elseif XH.GameFilesCache[filePath] == false then
        return false
    end
    if cc.FileUtils:getInstance():isFileExist(filePath) then
        XH.GameFilesCache[filePath] = true
        return true
    end
    XH.GameFilesCache[filePath] = false
    return false
end

return FileTool�