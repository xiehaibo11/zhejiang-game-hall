local fileSystem = un.FileSystem

-- 文档层
local DocLayer = {}
local _docRootPath = fileSystem.getWritePath() .. un.const.HotFixPath

function DocLayer.isFileExist(filepath)
    return fileSystem.isFileExist(_docRootPath .. filepath)
end

function DocLayer.removeFile(filepath)
    return fileSystem.removeFile(filepath)
end

function DocLayer.moveFile(oldfullpath, newfullpath)
    return fileSystem.moveFile(oldfullpath, newfullpath)
end

-- 包体层
local PackageLayer = {}

function PackageLayer.isFileExist(filepath)
    if fileSystem.isFileExistInternal then
        return fileSystem.isFileExistInternal(filepath)
    else
        return false
    end
end

function PackageLayer.removeFile(filepath)
    return true
end

function PackageLayer.moveFile(oldfullpath, newfullpath)
    return true
end

-- 管理器
local LayerFS = {}

local _layers = {DocLayer, PackageLayer}

function LayerFS.isFileExist(filepath)
    for _,v in ipairs(_layers) do
        if v.isFileExist(filepath) then
            return true
        end
    end
    return false
end

function LayerFS.removeFile(filepath)
    for _,v in ipairs(_layers) do
        if not v.removeFile(filepath) then
            return false
        end
    end
    return true
end

function LayerFS.moveFile(oldfullpath, newfullpath)
    for _,v in ipairs(_layers) do
        if not v.moveFile(oldfullpath, newfullpath) then
            return false
        end
    end
    return true
end

function LayerFS.getLayer(index)
    return _layers[index]
end

un.hotfix.layerFS = LayerFS
U