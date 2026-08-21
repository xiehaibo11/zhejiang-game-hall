local cjson = require("cjson")

local utils = {}

function utils.shuffle(t)
    local rand = math.random 
    assert(t, "utils.shuffle() expected a table, got nil")
    local len = #t
    local j
    
    for i = len, 2, -1 do
        j = rand(i)
        t[i], t[j] = t[j], t[i]
    end
end

function utils.json2str(json)
    if type(json) ~= "table" then
        return nil, "utils.json2str error. expected a table"
    end

    local ret
    local ok, msg = pcall(function ()
        ret = cjson.encode(json)
    end)

    if ok then
        return ret
    else
        print("utils.json2str error. " .. msg)
        return nil, msg
    end
end

function utils.str2json(str)
    if type(str) ~= "string" then
        return nil, "utils.str2json error. expected a string"
    end

    if #str == 0 then
        return {}
    end

    local json
    local ok, msg = pcall(function ()
        json = cjson.decode(str)
    end)

    if ok then
        return json
    else
        print("utils.str2json error. " .. msg)
        return nil, msg
    end
end

function utils.getVersion(prefix, moduleKey, localManifestPath)
    -- if _version[moduleKey] then
        -- return _version[moduleKey]
    -- end

    local fs = un.FileSystem
    local const = un.const

    local version

    -- 首先尝试加载热更目录中的manifest
    local manifestPath = string.format("%s%s%s%s/%s", fs.getWritePath(), const.HotFixPath, const.HotfixSubPath, moduleKey, "project.manifest")
    local manifest = un.hotfix.Manifest.new(manifestPath)
    if manifest:isLoaded() then
        version = manifest:getVersion()
    end

    -- 加载包体中的manifest
    if not version then
        manifest = un.hotfix.Manifest.new(prefix .. "/" .. localManifestPath)
        if manifest:isLoaded() then
            version = manifest:getVersion()
        end
    end

    -- if version then
        -- _version[moduleKey] = version
    -- else
        -- version = ""
    -- end

    return version or ""
end

function utils.handler(obj, method)
    return function(...)
        return method(obj, ...)
    end
end

-- Base64 加解密
function utils.base64_encode(str)
    if str and string.len(str) > 0 then
        return un.basexx.to_base64(str)
    else
        return ""
    end
end

function utils.base64_decode(str)
    if str and string.len(str) > 0 then
        return un.basexx.from_base64(str)
    else
        return ""
    end
end

-- 下载文件
function utils.download_file(fileUrl, saveFile, progressCallback, finishCallback)
    local downloader = un.Downloader.new()
    downloader:setProgressListener(function (tag, progress)
        if progressCallback then
            progressCallback(tag, progress)
        end
    end)
    downloader:setListener(function (tag, costTime, errCode, errMsg)
        if finishCallback then
            finishCallback(tag, costTime, errCode, errMsg)
        end
    end)
    downloader:add(fileUrl, saveFile, "", fileUrl)
    downloader:removeWhenAllTaskComplete()
end

-- 解压文件
function utils.unzip(filePath, targetPath, progressCallback, finishCallback)
    local unzipper = un.Unzipper.new()
    unzipper:setListener(function (tag, errCode, errMsg, progress)
        if progress >= 0.0 then
            if progressCallback then
                progressCallback(tag, progress)
            end
        else
            if finishCallback then
                finishCallback(tag, errCode, errMsg)
            end
        end
    end)

    unzipper:add(filePath, targetPath, filePath)
    unzipper:removeWhenAllTaskComplete()
end

-- http Get 方法
function utils.http_get(url, callback)
    local http = un.Http.new()
    http:setListener(function (tag, content, errCode, errMsg)
        if callback then
            callback(tag, content, errCode, errMsg)
        end
    end)
    http:add(url, "", url)
    http:removeWhenAllTaskComplete()
end

function utils.http_post(url, content, callback)
    local http = un.Http.new()
    http:setListener(function (tag, tcontent, errCode, errMsg)
        if callback then
            callback(tag, tcontent, errCode, errMsg)
        end
    end)
    http:add(url, content, url)
    http:removeWhenAllTaskComplete()
end

un.utils = utils+