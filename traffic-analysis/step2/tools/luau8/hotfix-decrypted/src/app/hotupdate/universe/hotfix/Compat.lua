if not un.FileInterface then
    un.FileInterface = {}
else
    local fi = un.FileInterface
    local fs = un.FileSystem
    if not fs then
        fs = {}
        un.FileSystem = fs
    end
    fs.writeStringToFile = fi.writeStringToFile
    fs.readStringFromFile = fi.getStringFromFile
    fs.getFileSize = fi.getFileSize
    fs.removeFile = fi.removeFile
    fs.renameFile = fi.moveFile
    fs.isFileExist = fi.isFileExist
    fs.createDirectory = fi.createDirectory
    fs.removeDirectory = fi.removeDirectory
    fs.isDirectoryExist = fi.isDirectoryExist
    fs.getWritePath = fi.getWritablePath
end

if not un.FileInterface.clearChache then
    un.FileInterface.clearChache = function ()
        cc.FileUtils:getInstance():purgeCachedEntries()
    end
end


local downloader = un.Downloader.new()
local meta = getmetatable(downloader)
if meta and not meta.setTaskPriority then
    meta.setTaskPriority = function (priority)
    end
end
downloader:removeWhenAllTaskComplete()


if not un.downloader2 then
    print("Universe.Compat: un.downloader2")

    local downloader2 = {}

    function downloader2.addListener(func)
        local d1 = un.Downloader.new()
        d1:setListener(func)
        return d1
    end

    function downloader2.removeListener(d1)
        d1:removeWhenAllTaskComplete()
    end

    function downloader2.addProgressListener(d1, func)
        d1:setProgressListener(func)
    end

    function downloader2.add(url, filePath, md5, fileSize, beginPos, endPos, supportResume, needDetailTime, needProgress, priority, tag, d1)
        d1:setNeedDetailTime(needDetailTime)
        d1:setTaskPriority(priority)
        d1:add(url, filePath, md5, tag)
    end

    function downloader2.commit()
    end

    function downloader2.getThreadCount()
        return 4
    end

    un.downloader2 = downloader2
end

if not un.getVersion then
    un.getVersion = function ()
        return "0.9.0"
    end
end

-- cocos fileutils
if cc and cc.FileUtils then
    local fu = cc.FileUtils:getInstance()
    local fs = un.FileSystem
    fs.readStringFromFile = function (file)
        return fu:getStringFromFile(file)
    end
    fs.getFileSize = function (file)
        return fu:getFileSize(file)
    end
    fs.isFileExist = function (file)
        return fu:isFileExist(file)
    end
    fs.isDirectoryExist = function (dirpath)
        return fu:isDirectoryExist(dirpath)
    end

    fs.writeStringToFile = function (data, filepath)
        return fu:writeStringToFile(data, filepath)
    end
end
:
