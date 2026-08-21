local GoldFileTool = class("GoldFileTool")

function GoldFileTool.isFileExist(filePath)
    local luaFile = string.gsub(filePath, "%.", "/") .. ".lua"
    local luaCFile = luaFile .. "c"
    if cc.FileUtils:getInstance():isFileExist(luaFile) or cc.FileUtils:getInstance():isFileExist(luaCFile) then
        return true
    end
    return false
end

return GoldFileTool