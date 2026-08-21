local CURRENT_MODULE_NAME = ...
local Cell = import("..HotUpdateBase.Cell",CURRENT_MODULE_NAME)
local GameEmojisHotUpdate = class("GameEmojisHotUpdate",Cell)

local KW_UI_DOWNLOAD = "KW_UI_DOWNLOAD"
local KW_UI_PROGRESS = "KW_UI_PROGRESS"
local KW_TEXT_PROGRESS = "KW_TEXT_PROGRESS"


GameEmojisHotUpdate.UpdateState = {
    NOUPDATE                = -1,
    UPDATEING               = 0,
    UPDATE_FAILE            = 1,
    UPDATE_SUCCESS          = 2,
    SYNCHRONIZE_FILES       = 3,
    SYNCHRONIZE_FILES_FAILE = 4
}

function GameEmojisHotUpdate:ctor()
    GameEmojisHotUpdate.super.ctor(self)
    self.scheduleScriptID = nil
    self._rootNode = nil
    self._hotUpdate = nil
    self._oldVersion = {}
    self._newVersion = {}
    self._needUpdateList = {}
    self._curHotUpdateList = {}
    self._hadHotUpdateList = {}
    self._FailModuleCount = 0
    self._gameid = 0
    self._bSynchronizeFiles = true
    self._updateState = self.UpdateState.NOUPDATE
    self._emojiName = ""
    self._haveNewVersion = false
end

function GameEmojisHotUpdate:checkUpdate(rootNode,manifestPath,emojiName)
    self._emojiName = emojiName
    if self._rootNode == nil then
        self._rootNode = rootNode
    else
        return
    end
    local CellHotUpdate = import("..HotUpdateBase.CellHotUpdate",CURRENT_MODULE_NAME)
    local strWritePath = cc.FileUtils:getInstance():getWritablePath() .. emojiName .. "/"
    self._curHotUpdateList["GameEmoji"] = CellHotUpdate:create("GameEmoji", manifestPath, strWritePath, emojiName, self, "EmojiHotUpdate")
    local hotupdate = self._curHotUpdateList["GameEmoji"]
    if hotupdate ~= nil then
        print("GameEmojisHotUpdate checkUpdate start")
        hotupdate:checkUpdate("GameEmoji")
    end
    
    return
end

function GameEmojisHotUpdate:hotUpdateVersion(tag, oldVersion, newVersion)
    local oldVersionTable = self:parseVersion(oldVersion)
    local newVersionTable = self:parseVersion(newVersion)
    self._oldVersion[tag] = oldVersion
    self._newVersion[tag] = newVersion

    print("TAG = " .. tag .. " oldVersion = " .. oldVersion .. " newVersion = " .. newVersion)

    if (oldVersionTable[2] ~= newVersionTable[2]) then
        print("发现游戏版本以停止热更新")
        self._needUpdateList[tag] = false;
    elseif (oldVersionTable[3] < newVersionTable[3] 
        or  (oldVersionTable[3] == newVersionTable[3] and oldVersionTable[4] < newVersionTable[4])) then
        print("发现游戏新版本，开始热更新") 
        self._haveNewVersion = true
        self._needUpdateList[tag] = true;
        local progressUINode = ccui.Helper:seekWidgetByName(self._rootNode,KW_UI_DOWNLOAD)
        if progressUINode then
            progressUINode:setVisible(true)
        end
    else
        print("没有发现游戏新版本") 
        self._haveNewVersion = false
        self._needUpdateList[tag] = false;  
    end

    if(table.nums(self._needUpdateList) == table.nums(self._curHotUpdateList)) then
        for tag, flag in pairs(self._needUpdateList) do
            if(flag == true and self._curHotUpdateList[tag] ~= nil) then     
                self._needUpdate = true
                if self._curHotUpdateList[tag]:synchronizeFiles() then
                    self._curHotUpdateList[tag]:update()
                else
                    self:hotUpdateFailed(tag, "synchronizeFiles Faile")  
                end
            end
        end
    end

    if self._needUpdateList[tag] == false then
        self:hotUpdateSuccess(tag)
    end      
end

function GameEmojisHotUpdate:parseVersion(version)
    local versionTable = {}
    for v in string.gmatch(version, "[^.]+") do
        table.insert(versionTable, tonumber(v))
    end

    return versionTable
end

function GameEmojisHotUpdate:hotUpdateProgress(tag, progress)
    local nPercent = tonumber(progress,10)
    if nPercent < 0 then
        nPercent = 0
    elseif nPercent >= 100 then
        nPercent = 100
        local progressUINode = ccui.Helper:seekWidgetByName(self._rootNode,KW_UI_DOWNLOAD)
        if progressUINode then
            progressUINode:setVisible(false)
        end
    end
    local progressNode = ccui.Helper:seekWidgetByName(self._rootNode,KW_UI_PROGRESS)
    if progressNode then
        progressNode:setPercent(nPercent)
    end
    local progressTextNode = ccui.Helper:seekWidgetByName(self._rootNode,KW_TEXT_PROGRESS)
    if progressTextNode then
        local percentage = string.format("%d%%",nPercent)
        local text = "正在下载表情包..." .. percentage 
        progressTextNode:setString(text)
    end
end

function GameEmojisHotUpdate:hotUpdateSuccess(tag, diffFileList)
    self:hotUpdateProgress(tag, 100)
    self._hadHotUpdateList[tag] = true  
    if self._curHotUpdateList[tag] ~= nil then
        self._curHotUpdateList[tag]:removeListen(self._ID)
    end

    if(table.nums(self._hadHotUpdateList) == table.nums(self._curHotUpdateList)) then
        self:hotUpdateFinish()
    end
    self:success()
end

function GameEmojisHotUpdate:hotUpdateFailed(tag, message)
    print("TAG = " .. tag .. " message = " .. message)

    self._hadHotUpdateList[tag] = true
    self._FailModuleMSG = message
    self._FailModuleCount = self._FailModuleCount + 1
    if self._curHotUpdateList[tag] ~= nil then
        self._curHotUpdateList[tag]:removeListen(self._ID)
    end
    
    local progressUINode = ccui.Helper:seekWidgetByName(self._rootNode,KW_UI_DOWNLOAD)
    if progressUINode then
        progressUINode:setVisible(false)
    end

    if(table.nums(self._hadHotUpdateList) == table.nums(self._curHotUpdateList)) then
        self:hotUpdateFinish()
    end
    self:fail()
end

function GameEmojisHotUpdate:hotUpdateFinish()
    if self._FailModuleCount == 0 then
        if self._bSynchronizeFiles then
            if self:synchronizeFiles() then
                local searchPaths = cc.FileUtils:getInstance():getSearchPaths()
                table.insert(searchPaths,1, cc.FileUtils:getInstance():getWritablePath() .. self._emojiName .. "/")
                cc.FileUtils:getInstance():setSearchPaths(searchPaths)
                
                self._updateState = self.UpdateState.UPDATE_SUCCESS 
            else
                self._updateState = self.UpdateState.SYNCHRONIZE_FILES_FAILE
            end
        else
            self._updateState = self.UpdateState.UPDATE_SUCCESS 
        end
    else
        self._updateState = self.UpdateState.UPDATE_FAILE
    end 
end

function GameEmojisHotUpdate:synchronizeFiles()
    self._updateState = self.UpdateState.UPDATE_SYNCHRONIZE_FILES
    local flag = true
    for tag, valus in pairs(self._curHotUpdateList) do
        if valus ~= nil then
            if not valus:synchronizeFiles() then
                print("synchronizeFiles faile" .. tag)
                flag = false
            end
        end
    end

    return flag
end

return GameEmojisHotUpdate