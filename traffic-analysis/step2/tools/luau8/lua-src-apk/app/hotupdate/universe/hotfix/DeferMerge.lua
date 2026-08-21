local deferMerge = {}

deferMerge.SUCCESS = 0
deferMerge.NOT_MERGE = 1
deferMerge.ERROR = 2

local fs = un.FileSystem
local rootPath = fs.getWritePath() .. un.const.HotFixPath
local hotfixPath = rootPath .. un.const.HotfixSubPath

function deferMerge.start(key)
    local processPath = hotfixPath .. key .. "/"

    local localManifestPath = processPath .. "project.manifest"
    local tempManifestPath = processPath .. "project.manifest.temp"
    local unzipPath = processPath .. "zip/decompress/"
    local zipManifestPath = unzipPath .. "project.manifest"
    local downloadPath = processPath .. "download/"
    local downloadManifestPath = processPath .. "download.manifest"
    local downloadFinishTagFile = processPath .. "download_finish.tag"

    if not fs.isFileExist(localManifestPath) or not fs.isFileExist(downloadFinishTagFile) then
        return deferMerge.NOT_MERGE
    end

    local localManifest = un.hotfix.Manifest.new(localManifestPath)
    if not localManifest:isLoaded() then return deferMerge.NOT_MERGE end

    local diffList

    local remoteManifest
    local zipMainifest = un.hotfix.Manifest.new(zipManifestPath)
    if zipMainifest and zipMainifest:isLoaded() then
        diffList = localManifest:genDiffList(zipMainifest)
        remoteManifest = zipMainifest
    else
        zipMainifest = nil

        if not fs.isFileExist(tempManifestPath) then
            return deferMerge.NOT_MERGE
        end

        local tempManifest = un.hotfix.Manifest.new(tempManifestPath)
        if not tempManifest:isLoaded() then return deferMerge.NOT_MERGE end

        diffList = localManifest:genDiffList(tempManifest)
        remoteManifest = tempManifest
    end

    local isUpdateManifest = false
    local isMergeSuccess = false
    if diffList:getCount() > 0 then
        local downloadManifest = un.hotfix.Manifest.new(downloadManifestPath)
        local downloadFileList
        if not downloadManifest:isLoaded() then
            downloadManifest = nil
        else
            downloadFileList = downloadManifest:getFileList()
        end

        local isMerge = true
        diffList:foreach(function (file, info)
            if isMerge and info.diffType ~= un.const.FileDiffType.DELETE then
                if zipMainifest and fs.isFileExist(unzipPath .. file) then
                    return
                end

                if downloadFileList then
                    local downloadFile = downloadFileList[file]
                    if downloadFile and downloadFile["md5"] == info.zipMd5 and fs.isFileExist(downloadPath .. file) then
                        return
                    end
                end

                print("DeferMerge: file not find. " .. file)
                isMerge = false
            end
        end)

        if isMerge then
            print("DeferMerge: start merge " .. key)

            local success = true
            local errFile = ""
            diffList:foreach(function (file, info)
                if success and info.diffType ~= un.const.FileDiffType.DELETE then
                    local fileInfo = downloadFileList[file]
                    if fileInfo then
                        if not fs.renameFile(downloadPath .. file, rootPath .. file) then
                            errFile = file
                            success = false
                        end

                        downloadManifest:removeFile(file)
                        downloadManifest:saveToFile()
                    else
                        if fs.renameFile(unzipPath .. file, rootPath .. file) then
                            fileInfo = zipMainifest:getFile(file)
                        else
                            errFile = file
                            success = false
                        end
                    end

                    if success then
                        localManifest:addFile(file, fileInfo)
                        localManifest:saveToFile()
                    end
                end
            end)

            if downloadManifest then
                downloadManifest:saveToFile(true)
            end

            if not success then
                localManifest:saveToFile(true)
                return deferMerge.ERROR

            else
                fs.removeDirectory(downloadPath)
                fs.removeDirectory(unzipPath)

                local errList = {}
                diffList:foreach(function (file, info)
                    if info.diffType == un.const.FileDiffType.DELETE then
                        local fullpath = rootPath .. file
                        if not fs.isFileExist(fullpath) or fs.removeFile(fullpath) then
                            localManifest:removeFile(file)
                            localManifest:saveToFile()
                        else
                            table.insert(errList, file)
                        end
                    end
                end)

                if #errList > 0 then
                    print("deferMerge: delete error " .. key)
                else
                    isUpdateManifest = true
                end
                isMergeSuccess = true
            end
        end

    else
        isUpdateManifest = true
        isMergeSuccess = true
    end

    if isUpdateManifest then
        localManifest:setJson(remoteManifest:getJson())
        localManifest:saveToFile(true)
    end

    if isMergeSuccess then
        fs.removeFile(downloadFinishTagFile)
        return deferMerge.SUCCESS
    end

    return deferMerge.NOT_MERGE
end

un.hotfix.deferMerge = deferMerge
y