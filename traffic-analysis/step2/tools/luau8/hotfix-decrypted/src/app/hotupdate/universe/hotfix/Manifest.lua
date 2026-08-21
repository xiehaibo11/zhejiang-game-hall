local cjson = require("cjson")

local SAVE_COUNT = 20

local Manifest = un.instance()

function Manifest:ctor(file, rootPath)
    self._curSaveCount = 0
    self._loaded = false
    self._json = {
        file_list = {}
    }
    self._file = file

    local fs = un.FileSystem
    self._rootPath = rootPath or (fs.getWritePath() .. un.const.HotFixPath)

    if file and #file > 0 and fs.isFileExist(file) then
        local content = fs.readStringFromFile(file)
        if #content > 0 then
            local ok, msg = pcall(function ()
                self._json = cjson.decode(content)
            end)
    
            if ok and self._json ~= nil then
                self._loaded = true
            else
                print("Manifest load failed. " .. tostring(msg))
            end
        end
    end
end

function Manifest:isLoaded()
    return self._loaded
end

function Manifest:setFileAndRootPath(file, rootPath)
    self._file = file
    self._rootPath = rootPath or (un.FileSystem.getWritePath() .. un.const.HotFixPath)
end

function Manifest:saveToFile(isForce)
    if isForce then
        self._curSaveCount = 0
    else
        self._curSaveCount = self._curSaveCount + 1
        if self._curSaveCount < SAVE_COUNT then
            return
        else
            self._curSaveCount = 0
        end
    end

    if self._file then
        local ok, msg = pcall(function()
            local content = cjson.encode(self._json)
            if #content > 0 then
                un.FileSystem.writeStringToFile(content, self._file)
            end
        end)

        if not ok then
            print("Manifest save failed. " .. msg)
        end
    end
end

function Manifest:getJson()
    return self._json
end

function Manifest:setJson(json)
    self._json = json
end

function Manifest:getAppId()
    return self._json["appid"]
end

function Manifest:getEngineVer()
    return self._json['engine_ver']
end

function Manifest:getUpdateUrl()
    return self._json["update_url"]
end

function Manifest:setUpdateUrl(url)
    self._json["update_url"] = url
end

function Manifest:getVersion()
    return self._json["version"]
end

function Manifest:setVersion(version)
    self._json["version"] = version
end

function Manifest:getMonitorUrl()
    return self._json["monitor_url"]
end

function Manifest:setMonitorUrl(url)
    self._json["monitor_url"] = url
end

function Manifest:setMonitorUrl(url)
    self._json["monitor_url"] = url
end

function Manifest:getUpdateType()
    return self._json["update_type"]
end

function Manifest:getTipMsg()
    return self._json["tip_msg"] or ""
end

function Manifest:getManifestUrl()
    return self._json["manifest_url"]
end

function Manifest:getProjectMd5()
    return self._json["project_md5"]
end

function Manifest:getChannel()
    return self._json["channel"]
end

function Manifest:getFileUrl()
    return self._json["file_url"]
end

function Manifest:getFileList()
    return self._json["file_list"]
end

function Manifest:getZipList()
    return self._json["diff_zip"]
end

function Manifest:getFullZipList()
    return self._json["zip_url"]
end

function Manifest:getEnv()
    return self._json["env"]
end

function Manifest:isForbidZip()
    return self._json["forbid_zip"]
end

function Manifest:addFile(file, name, zipMd5, size)
    local tempFile
    if type(name) == "string" then
        tempFile = {
            ["name"] = name,
            ["md5"] = zipMd5,
            ["size"] = size,
        }
    else
        tempFile = name
    end

    local fileList = self:getFileList()
    fileList[file] = tempFile
end

function Manifest:getFile(file)
    local fileList = self:getFileList()
    return fileList[file]
end

function Manifest:removeFile(file)
    local fileList = self:getFileList()
    fileList[file] = nil
end

function Manifest:isHaveMissingFile()
    local layerFS = un.hotfix.layerFS
    local rootPath = self._rootPath
    local fileList = self:getFileList()
    for k,v in pairs(fileList) do
        if not layerFS.isFileExist(k) then
            print("find missing file " .. rootPath .. "@" .. k)
            return true
        end
    end
    return false
end

function Manifest:getFoundFileCount()
    local layerFS = un.hotfix.layerFS
    local rootPath = self._rootPath
    local fileList = self:getFileList()
    local count = 0
    for k,v in pairs(fileList) do
        if layerFS.isFileExist(k) then
            count = count + 1
        end
    end
    return count
end

function Manifest:genDiffList(other)
    local otherFileList = other:getFileList()
    local myFileList = self:getFileList()

    local layerFS = un.hotfix.layerFS
    local diffList = un.hotfix.DiffList.new()

    for k,v in pairs(myFileList) do
        local otherFile = otherFileList[k]
        if otherFile then
            if otherFile["md5"] ~= v["md5"] then
                diffList:add(k, otherFile["name"], otherFile["md5"],  v["size"], un.const.FileDiffType.MODIFY)
            elseif not layerFS.isFileExist(k) then
                diffList:add(k, otherFile["name"], otherFile["md5"],  v["size"], un.const.FileDiffType.ADD)
            end
        else
            diffList:add(k, v["name"], v["md5"], v["size"], un.const.FileDiffType.DELETE)
        end
    end

    for k,v in pairs(otherFileList) do
        if not myFileList[k] then
            diffList:add(k, v["name"], v["md5"], v["size"], un.const.FileDiffType.ADD)
        end
    end

    return diffList
end

function Manifest:applyDiffList(difflist)
    local fileList = self:getFileList()
    local fs = un.FileSystem
    local rootPath = self._rootPath
    local tempFileList = {}
    for k,v in pairs(fileList) do
        if fs.isFileExist(rootPath .. k) then
            local diff = difflist:get(k)
            if diff and diff.diffType ~= un.const.FileDiffType.DELETE and diff.zipMd5 == v["md5"] then
                difflist:remove(k)
                tempFileList[k] = v
            else
                fs.removeFile(rootPath .. k)
            end
        end
    end
    self._json["file_list"] = tempFileList
end

function Manifest:foreachFileList(func)
    local fileList = self:getFileList()
    local tempFileList = {}
    for k,v in pairs(fileList) do
        tempFileList[k] = v
    end

    for k,v in pairs(tempFileList) do
        func(k, v)
    end
end

function Manifest.versionLessThan(a, b)
    if a == b then
        return false
    end

    if not a then
        return true
    end

    if not b then
        return false
    end

    local numsA = {}
    for num in string.gmatch(a, "%d+") do
        numsA[#numsA + 1] = num
    end

    local numsB = {}
    for num in string.gmatch(b, "%d+") do
        numsB[#numsB + 1] = num
    end

    if #numsA < #numsB then
        return true
    end

    if #numsA > #numsB then
        return false
    end

    for i = 1, #numsA do
        if tonumber(numsA[i]) < tonumber(numsB[i]) then
            return true
        end
    end

    return false
end

function Manifest.__lt(a, b)
    local versionA = a:getVersion()
    local versionB = b:getVersion()
    return Manifest.versionLessThan(versionA, versionB)
end

function Manifest.__eq(a, b)
    local versionA = a:getVersion()
    local versionB = b:getVersion()
    return versionA == versionB
end

un.hotfix.Manifest = Manifest
�