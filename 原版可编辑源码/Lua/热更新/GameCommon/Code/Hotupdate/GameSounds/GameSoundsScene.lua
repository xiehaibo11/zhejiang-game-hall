local CURRENT_MODULE_NAME = ...
local GameSoundsScene = class("GameSoundsScene")

local KW_UI_GAME_SOUND_PROGRESS = "KW_UI_GAME_SOUND_PROGRESS"
local KW_UI_GAME_SOUNDS_DOWNLOAD = "KW_UI_GAME_SOUNDS_DOWNLOAD"
local KW_TEXT_GAME_SOUND_PROGRESS = "KW_TEXT_GAME_SOUND_PROGRESS"

function GameSoundsScene:ctor()
    self.scheduleScriptID = nil
    self._rootNode = nil
    self._gameid = 0
end

function GameSoundsScene:start(rootNode, gameid)
    self._gameid = gameid
    if self._rootNode == nil then
        self._rootNode = rootNode
    else
        return
    end
    
    return
end

function GameSoundsScene:needHotUpdate(gameid, oldVersion, newVersion)
	print("发现方言新版本，开始热更新") 
    if self._rootNode and not tolua.isnull(self._rootNode) then 
		local progressUINode = ccui.Helper:seekWidgetByName(self._rootNode,KW_UI_GAME_SOUNDS_DOWNLOAD)
		if progressUINode then
			progressUINode:setVisible(true)
		end
    end
	
end

function GameSoundsScene:hotUpdateProgress(progress, gameid)
	if self._rootNode and not tolua.isnull(self._rootNode) then 
	else
		return
    end
	local nPercent = tonumber(progress,10)
    if nPercent < 0 then
        nPercent = 0
    elseif nPercent >= 100 then
        nPercent = 100
        local progressUINode = ccui.Helper:seekWidgetByName(self._rootNode,KW_UI_GAME_SOUNDS_DOWNLOAD)
        if progressUINode then
            progressUINode:setVisible(false)
        end
    end
    local progressNode = ccui.Helper:seekWidgetByName(self._rootNode,KW_UI_GAME_SOUND_PROGRESS)
    if progressNode then
        progressNode:setPercent(nPercent)
    end
    local progressTextNode = ccui.Helper:seekWidgetByName(self._rootNode,KW_TEXT_GAME_SOUND_PROGRESS)
    if progressTextNode then
        local percentage = string.format("%02d%%",nPercent)
        local text = "(" .. percentage .. ")" .. "方言正在加载中"
        progressTextNode:setString(text)
    end
end

function GameSoundsScene:hotUpdateSuccess(gameid, haveNewVersion)
	print("hotUpdateSuccess:"..gameid)
    self:hotUpdateProgress(100, gameid)
	self:hotUpdateFinish(gameid)
end

function GameSoundsScene:hotUpdateFailed(gameid, message)
    print("TAG = " .. gameid .. " message = " .. message)
    if self._rootNode and not tolua.isnull(self._rootNode) then 
    else
		return
    end
	local progressUINode = ccui.Helper:seekWidgetByName(self._rootNode,KW_UI_GAME_SOUNDS_DOWNLOAD)
    if progressUINode then
        progressUINode:setVisible(false)
    end
	self:hotUpdateFinish(gameid)
end

function GameSoundsScene:hotUpdateFinish(gameid)
	local searchPaths = cc.FileUtils:getInstance():getSearchPaths()
	table.insert(searchPaths,1, cc.FileUtils:getInstance():getWritablePath() .. gameid .. "/" ..tostring(cc.UserDefault:getInstance():getIntegerForKey("KW_DATA_VERSION_INDEX" .. gameid,0)) .. "/")
	cc.FileUtils:getInstance():setSearchPaths(searchPaths)
end

return GameSoundsScene