local cjson = require("cjson")

local ResEnsure = {}

local CWD = un.FileSystem.getWritePath() .. "hotfix/"

local function load_manifest(mainKey)
    local fs = un.FileSystem
    local manifestPath = string.format("%sharbor/%s/project.manifest", CWD, mainKey)
    if fs.isFileExist(manifestPath) then
        local content = fs.readStringFromFile(manifestPath)
        if #content > 0 then
            local json
            local ok, msg = pcall(function ()
                json = cjson.decode(content)
            end)

            if ok and json then
                return json
            else
                print("ResEnsure: load manifest error. " .. msg)
            end
        end
    end
end

local function clean_res(mainKey, appVersion, tagFile, listener)
    local fs = un.FileSystem

    local json = load_manifest(mainKey)
    if json then
        local fileList = json["file_list"]
        local fullpath
        for k,_ in pairs(fileList) do
            fullpath = CWD .. k
            if fs.isFileExist(fullpath) then
                fs.removeFile(fullpath)
            end
        end
        print("ResEnsure: manifest path: " .. string.format("%sharbor/%s", CWD, mainKey))
        fs.removeDirectory(string.format("%sharbor/%s/", CWD, mainKey))
    else
        fs.removeDirectory(CWD)
        fs.createDirectory(CWD)
        un.Device.setSkipBackupToPath(CWD)
    end

    fs.writeStringToFile(appVersion, tagFile)
    if un.FileInterface and un.FileInterface.clearChache then
        un.FileInterface.clearChache()
    end
    listener.onFinish(true,mainKey)
end

-- 覆盖安装时，清理整个目录
local function clean_resAll(mainKey, appVersion, tagFile, listener)
    local fs = un.FileSystem
    fs.removeDirectory(un.FileSystem.getWritePath() .. "hotfix/")
    fs.createDirectory(CWD)
    un.Device.setSkipBackupToPath(CWD)
    fs.writeStringToFile(appVersion, tagFile)
    if un.FileInterface and un.FileInterface.clearChache then
        un.FileInterface.clearChache()
    end
    listener.onFinish(true,mainKey)
end

function ResEnsure.start(mainKey, isForce, listener)
    local appVersion = un.Device.getAppVersion()
    local tagFile = CWD .. "xinghuo.tag"

    if isForce then
        clean_res(mainKey, appVersion, tagFile, listener)
    else
        local version = un.FileSystem.readStringFromFile(tagFile)
        if version == appVersion then
            listener.onFinish(false, mainKey)
        else
            clean_resAll(mainKey, appVersion, tagFile, listener)
        end
    end
end

return ResEnsureO
