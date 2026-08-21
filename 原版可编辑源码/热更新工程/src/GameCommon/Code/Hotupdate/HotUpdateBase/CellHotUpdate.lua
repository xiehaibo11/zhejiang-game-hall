--该目录存放不同模块热更新后的差异文件列表
local TEMP_STORAGE_PATH  = "TempHotUpdateCache/"
local DIFF_FILE_LIST_DIR = "HotUpdateDiffFileList/" 
local NEED_COPY_DIR_KEY  = "HotUpdate_Need_Copy_Dir_"
local MANIFEST_FILENAME  = "project.manifest"
local VERSION_FILENAME   = "version.manifest"
local TEMP_EXT           =  ".temp"

require("lfs")
local CellHotUpdate = class("CellHotUpdate")
CellHotUpdate._hotUpdate  = nil
CellHotUpdate._assetsManagerEx = nil
CellHotUpdate._assetsManagerExLister = nil
CellHotUpdate._isUpdate = false
CellHotUpdate._FailCount = 0
CellHotUpdate._manifestUrl = ""
CellHotUpdate._mainfestPath = ""
CellHotUpdate._storagePath = ""
CellHotUpdate._tag = nil
CellHotUpdate._moduleState = nil
CellHotUpdate._oldVersion = 0
CellHotUpdate._newVersion = 0
CellHotUpdate._diffFileList = {}
CellHotUpdate._listenList = {}

CellHotUpdate.DiffType = {
    ADDED       = 0,
    DELETED     = 1,
    MODIFIED    = 2,  
}

CellHotUpdate.ModuleState = {
    NO_OPERATION            = -1,
    CHECK_UPDATE            = 0,
    CHECK_UPDATE_FINSH      = 1,
    UPDATEING               = 2,
    UPDATE_FAILE            = 3,
    UPDATE_SUCCESS          = 4,
    SYNCHRONIZE_FILES       = 5,
    SYNCHRONIZE_FILES_FAILE = 6,
    HOTUPDATE_FINSH         = 7
}

-- 初始化
function CellHotUpdate:ctor()
    self._hotUpdate  = nil
    self._assetsManagerEx = nil
    self._assetsManagerExLister = nil
    self._isUpdate = false
    self._FailCount = 0
    self._manifestUrl = ""
    self._mainfestPath = ""
    self._storagePath = ""
    self._tag = nil
    self._moduleState = self.ModuleState.NO_OPERATION
    self._listenList = {}
    self._oldVersion = 0
    self._newVersion = 0
    self._diffFileList = {}
end

function CellHotUpdate:addListen(listenID, listen)
    for id, value in pairs(self._listenList) do
        if id == listenID and self._listenList[id] ~= nil then
            return
        end
    end

    self._listenList[listenID] = listen
end

function CellHotUpdate:removeListen(listenID)
    for id, listen in pairs(self._listenList) do
        if id == listenID then
            self._listenList[id] = nil
            break
        end
    end
end

function CellHotUpdate:getModuleState()
    return self._moduleState
end

--[[
热更新模块创建接口
tag：热更新模块标记
manifestUrl： 热更新配置文件路径
mainfestPath： 热更新配置文件下载路径
storagePath： 热更新缓存文件夹路径
listen：热更新回调监听对象
]]
function CellHotUpdate:create(tag, manifestUrl, storagePath, listenID, listen, mainfest)
    self._hotUpdate = CellHotUpdate.new()
    self._hotUpdate._manifestUrl = manifestUrl
    self._hotUpdate._mainfestPath = storagePath .. mainfest .. "/"
    self._hotUpdate._storagePath = storagePath
    self._hotUpdate._tag = tag
    self._hotUpdate:addListen(listenID, listen)
    return self._hotUpdate
end

--[[
检测是否有热更新接口
]]
function CellHotUpdate:checkUpdate()   
    if self._moduleState ~= self.ModuleState.CHECK_UPDATE and self._moduleState ~= self.ModuleState.UPDATEING then
        if(self._assetsManagerEx ~= nil) then
            self:exit()
            self._assetsManagerEx = nil
            self._assetsManagerExLister = nil
        end

        print( "checkUpdate TAG = " .. self._tag .. " MAINFEST_PATH = " .. self._manifestUrl .. " STORAGE_PATH = " .. self._storagePath)

        self._assetsManagerEx = cc.AssetsManagerEx:create(self._manifestUrl, self._storagePath, self._mainfestPath)
        self._assetsManagerEx:retain()

        if (self._assetsManagerEx:getLocalManifest():isLoaded() == false) then
            self._assetsManagerEx:release()
            self:hotUpdateFailed("Fail to checkUpdate assets, step skipped.");
            print("Fail to checkUpdate assets, step skipped.");
        else
            self._assetsManagerExLister = cc.EventListenerAssetsManagerEx:create(self._assetsManagerEx, self:getAssetsManagerExLister())
            cc.Director:getInstance():getEventDispatcher():addEventListenerWithFixedPriority(self._assetsManagerExLister, 1)
            self._isUpdate = false
            self._moduleState = self.ModuleState.CHECK_UPDATE
            self._assetsManagerEx:checkUpdate()
        end
    elseif self._moduleState == self.ModuleState.UPDATEING then
        for _, listen in pairs(self._listenList) do
            listen:hotUpdateVersion(self._tag, self._oldVersion, self._newVersion)
        end
    end
end

--[[
开始热更新接口
]]
function CellHotUpdate:update()    
    if self._moduleState ~= self.ModuleState.UPDATEING and self._moduleState ~= self.ModuleState.SYNCHRONIZE_FILES then
        if(self._assetsManagerEx ~= nil) then
            self:exit()
            self._assetsManagerEx = nil
            self._assetsManagerExLister = nil
        end

        print( "update TAG = " .. self._tag .. " MAINFEST_PATH = " .. self._manifestUrl .. " STORAGE_PATH = " .. self._storagePath)

        self._assetsManagerEx = cc.AssetsManagerEx:create(self._manifestUrl, self._storagePath, self._mainfestPath)
        self._assetsManagerEx:retain()

        if (self._assetsManagerEx:getLocalManifest():isLoaded() == false) then
            self._assetsManagerEx:release()
            self:hotUpdateFailed("Fail to update assets, step skipped.");
            print("Fail to update assets, step skipped.");
        else
            self._assetsManagerExLister = cc.EventListenerAssetsManagerEx:create(self._assetsManagerEx, self:getAssetsManagerExLister())
            cc.Director:getInstance():getEventDispatcher():addEventListenerWithFixedPriority(self._assetsManagerExLister, 1)
            self._isUpdate = true
            self._moduleState = self.ModuleState.UPDATEING
            self._assetsManagerEx:update()
        end
    elseif self._moduleState == self.ModuleState.SYNCHRONIZE_FILES then
        for _, listen in pairs(self._listenList) do 
            listen:hotUpdateSuccess(self._tag, self._diffFileList) 
        end 
    end
end

function CellHotUpdate:versionEquals(oldVersion, newVersion)
    self._moduleState = self.ModuleState.CHECK_UPDATE_FINSH
    self._oldVersion = oldVersion
    self._newVersion = newVersion
    for _, listen in pairs(self._listenList) do
        listen:hotUpdateVersion(self._tag, oldVersion, newVersion)
    end
end

function CellHotUpdate:hotUpdateProgress(type, progress)  
    for _, listen in pairs(self._listenList) do  
        listen:hotUpdateProgress(self._tag, progress)
    end
end

function CellHotUpdate:hotUpdateSuccess(diffFileList)    
    print("游戏热更新成功 TAG = " .. self._tag)

    self:exit()  
    self._moduleState = self.ModuleState.UPDATE_SUCCESS
    self._diffFileList = diffFileList

    if(diffFileList ~= nil) then
        self:setDiffFileList(self._tag, diffFileList)
        self:setNeedCopyDir(self._tag, true)
    end

    --热更新成功 重命名配置文件
    os.rename(self._mainfestPath .. MANIFEST_FILENAME .. TEMP_EXT,self._mainfestPath .. MANIFEST_FILENAME)
    os.rename(self._mainfestPath .. VERSION_FILENAME .. TEMP_EXT,self._mainfestPath .. VERSION_FILENAME)

    for _, listen in pairs(self._listenList) do 
        listen:hotUpdateSuccess(self._tag, diffFileList) 
    end  
end

function CellHotUpdate:hotUpdateFailed(message)    
    print("游戏热更新失败  TAG = " .. self._tag .. "errMSG = " .. message)

    self:exit()
    self._moduleState = self.ModuleState.UPDATE_FAILE
    for _, listen in pairs(self._listenList) do
        listen:hotUpdateFailed(self._tag, message)  
    end
end

function CellHotUpdate:getAssetsManagerExLister()
    local hotUpdate = self
    return function(event)
        if(event == nil) then 
            return false
        end

        local eventCode = event:getEventCode()
        --        local percent = event:getPercent()
        --        if(percent > 0) then
        --            percent = 100 - percent;
        --        end

        if( eventCode ==  cc.EventAssetsManagerEx.EventCode.ERROR_NO_LOCAL_MANIFEST) then
            hotUpdate:hotUpdateFailed("No local manifest file found, skip assets update.")
        elseif( eventCode == cc.EventAssetsManagerEx.EventCode.UPDATE_PROGRESSION) then 
            print(string.format("UPDATE_PROGRESSION msg = %s : %s", event:getAssetId(), event:getMessage()))
            local assetId = event:getAssetId()    
            if (assetId == cc.AssetsManagerExStatic.VERSION_ID) then
            --hotUpdate:hotUpdateProgress(assetId, percent)
            elseif(assetId == cc.AssetsManagerExStatic.MANIFEST_ID) then
            --hotUpdate:hotUpdateProgress(assetId, percent)   
            else
                local PercentByFile = event:getPercentByFile()         
                hotUpdate:hotUpdateProgress(assetId, PercentByFile)
            end
        elseif(eventCode == cc.EventAssetsManagerEx.EventCode.NEW_VERSION_FOUND) then
            if( not hotUpdate._isUpdate) then
                print("NEW_VERSION_FOUND")
                local oldVersion = hotUpdate._assetsManagerEx:getLocalManifest():getVersion()
                local newVersion = hotUpdate._assetsManagerEx:getRemoteManifest():getVersion()
                hotUpdate:versionEquals(oldVersion, newVersion)
            end
        elseif(eventCode == cc.EventAssetsManagerEx.EventCode.ERROR_DOWNLOAD_MANIFEST ) then
            hotUpdate:hotUpdateFailed("Fail to download manifest file, update skipped.")     
        elseif(eventCode == cc.EventAssetsManagerEx.EventCode.ERROR_PARSE_MANIFEST) then
            hotUpdate:hotUpdateFailed("Fail to parse manifest file, update skipped.")
        elseif(eventCode == cc.EventAssetsManagerEx.EventCode.ALREADY_UP_TO_DATE) then
            if( not hotUpdate._isUpdate) then
                local oldVersion = hotUpdate._assetsManagerEx:getLocalManifest():getVersion()
                local newVersion = hotUpdate._assetsManagerEx:getRemoteManifest():getVersion()
                hotUpdate:versionEquals(oldVersion, newVersion)
            else
                print("cc.EventAssetsManagerEx.EventCode.ALREADY_UP_TO_DATE  !!!!!!!")
                hotUpdate:hotUpdateSuccess()
            end
        elseif(eventCode == cc.EventAssetsManagerEx.EventCode.UPDATE_FINISHED) then
            print("cc.EventAssetsManagerEx.EventCode.UPDATE_FINISHED  !!!!!!!")
            local diffFileList = event:getDiffFileList()            
            hotUpdate:hotUpdateSuccess(diffFileList)
            print(string.format("Update finished. %s", event:getMessage()));
        elseif(eventCode == cc.EventAssetsManagerEx.EventCode.UPDATE_FAILED) then
            hotUpdate._FailCount = hotUpdate._FailCount + 1
            if (hotUpdate._FailCount < 5) then
                hotUpdate._assetsManagerEx:downloadFailedAssets();
            else
                hotUpdate:hotUpdateFailed("UPDATE_FAILED")
                hotUpdate._FailCount = 0
            end
        elseif(eventCode == cc.EventAssetsManagerEx.EventCode.ERROR_UPDATING) then
            print(string.format("ERROR_UPDATING %s : %s", event:getAssetId(), event:getMessage()))
            -- hotUpdate:hotUpdateFailed(string.format("ERROR_UPDATING %s : %s", event:getAssetId(), event:getMessage()))
        elseif(eventCode == cc.EventAssetsManagerEx.EventCode.ERROR_DECOMPRESS) then
            hotUpdate:hotUpdateFailed(string.format("ERROR_DECOMPRESS %s", event:getMessage()))
        end
    end
end

function CellHotUpdate:exit()
    self._isUpdate = false
    cc.Director:getInstance():getEventDispatcher():removeEventListener(self._assetsManagerExLister)
end

function CellHotUpdate:synchronizeFiles()
    if self._moduleState ~= self.ModuleState.UPDATEING and self._moduleState ~= self.ModuleState.SYNCHRONIZE_FILES then
        self._moduleState = self.ModuleState.SYNCHRONIZE_FILES
        if self:getNeedCopyDir(self._tag) then
            local diffFileList = self:getDiffFileList(self._tag)
            local removeList = {}
            for diffFile, type in pairs(diffFileList) do
                local filePath = self._storagePath .. diffFile
                if(type == self.DiffType.DELETED) then
                    removeList[diffFile] = true
                    os.remove(filePath)
                else
                    local ret, errmsg = os.rename(filePath .. TEMP_EXT, filePath)
                    if ret ~= nil then
                        removeList[diffFile] = true
                    end
                end
            end

            if table.nums(removeList) == table.nums(diffFileList) then
                self:setNeedCopyDir(self._tag, false)
                print("synchronizeFiles SUCCESS")
            else
                local diffFiles = {}
                for diffFile, type in pairs(diffFileList) do
                    if removeList[diffFile] == nil then
                        print("synchronizeFiles ERROR : " .. diffFile .. " synchronizeFiles failed")
                        diffFiles[diffFile] = diffFileList[diffFile]
                    end
                end
                self:setDiffFileList(self._tag, diffFiles)
                self:setNeedCopyDir(self._tag, true)
                self._moduleState = self.ModuleState.YNCHRONIZE_FILES_FAILE
                return false
            end
        end

        self._moduleState = self.ModuleState.HOTUPDATE_FINSH
        return true
    end

    return false
end

function CellHotUpdate:setNeedCopyDir(key, value)
    local strKey = NEED_COPY_DIR_KEY .. key
    if value then
        cc.UserDefault:getInstance():setStringForKey(strKey, "true")
    else
        cc.UserDefault:getInstance():setStringForKey(strKey, "false")
    end
end

function CellHotUpdate:getNeedCopyDir(key)
    local strKey = NEED_COPY_DIR_KEY .. key
    local value = cc.UserDefault:getInstance():getStringForKey(strKey)
    if(value == "true") then
        return true
    else
        return false
    end
end

function CellHotUpdate:setDiffFileList(tag, diffFileList)
    local dirpath = self._storagePath .. DIFF_FILE_LIST_DIR
    if not CellHotUpdate.isDirectoryExist(dirpath) then
        CellHotUpdate.mkdir(dirpath)
    end

    local filepath = dirpath .. tag .. ".xml"
    if(diffFileList ~= nil ) then
        cc.FileUtils:getInstance():writeToFile(diffFileList, filepath)
    end
end

function CellHotUpdate:getDiffFileList(tag)
    local dirpath = self._storagePath .. DIFF_FILE_LIST_DIR
    local filepath = dirpath .. tag .. ".xml"
    local diffFileList = cc.FileUtils:getInstance():getValueMapFromFile(filepath)
    return diffFileList
end

function CellHotUpdate.isFileExists(path)
    return cc.FileUtils:getInstance():isFileExist(path)
end

function CellHotUpdate.isDirectoryExist(path)
    return cc.FileUtils:getInstance():isDirectoryExist(path)
end

function CellHotUpdate.mkdir(path)
    if not CellHotUpdate.isDirectoryExist(path) then
        return lfs.mkdir(path)
    end
    return true
end

function CellHotUpdate.rmdir(path)
    if CellHotUpdate.isDirectoryExist(path) then
        local function _rmdir(path)
            local iter, dir_obj = lfs.dir(path)
            while true do
                local dir = iter(dir_obj)
                if dir == nil then break end
                if dir ~= "." and dir ~= ".." then
                    local curDir = path..dir
                    local mode = lfs.attributes(curDir, "mode") 
                    if mode == "directory" then
                        _rmdir(curDir.."/")
                    elseif mode == "file" then
                        local fileName = string.match(curDir, ".+/([^/]*%.%w+)$")
                        if(fileName ~= MANIFEST_FILENAME and fileName ~= VERSION_FILENAME) then
                            os.remove(curDir)
                        end
                    end
                end
            end
            local succ, des = os.remove(path)
            if des then print(des) end
            return succ
        end

        _rmdir(path)
    end
    return true
end

function CellHotUpdate.copydir(path,targetPath)
    print("copydir path = " .. path .. " targetPath = " .. targetPath)
    if not CellHotUpdate.isDirectoryExist(targetPath) then
        CellHotUpdate.mkdir(targetPath)
    end
    if CellHotUpdate.isDirectoryExist(path) then
        local function _copydir(path,targetPath)
            local iter, dir_obj = lfs.dir(path)
            while true do
                local dir = iter(dir_obj)
                if dir == nil then break end
                if dir ~= "." and dir ~= ".." then
                    local curDir = path..dir
                    local targetDir = targetPath..dir
                    local mode = lfs.attributes(curDir, "mode") 
                    if mode == "directory" then
                        CellHotUpdate.mkdir(targetDir)
                        _copydir(curDir.."/" ,targetDir.."/")
                    elseif mode == "file" then
                        CellHotUpdate.copyfile(curDir,targetDir)
                    end
                end
            end

        end
        _copydir(path,targetPath)
    end
    return true
end

function CellHotUpdate.copyfile(path,targetPath)
    local dirList = {}
    for key, value in string.gmatch(targetPath, "[^/]+") do
        dirList[#dirList + 1] = key
    end

    local dirPath = "/"
    for i = 1, #dirList - 1 do
        dirPath = dirPath .. dirList[i] .. "/"
        if not CellHotUpdate.isDirectoryExist(dirPath) then
            CellHotUpdate.mkdir(dirPath)
        end
    end

    local sourcefile = io.open(path,"rb")
    local destinationfile = io.open(targetPath,"wb") 

    if sourcefile ~= nil and destinationfile ~= nil then
        local fileData = sourcefile:read("*all")
        if fileData == nil then
            print("Read data faile " .. path)
            return false
        else
            destinationfile:write(fileData)
            sourcefile:close()
            destinationfile:close()
        end
    else
        if sourcefile == nil then
            print("open file faile " .. path)
        else
            print("open file faile " .. targetPath)
        end

        return false
    end

    return true
end


return CellHotUpdate