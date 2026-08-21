local CURRENT_MODULE_NAME = ...
local GameEmojisScene = class("GameEmojisScene")

local KW_UI_DOWNLOAD = "KW_UI_DOWNLOAD"
local KW_UI_PROGRESS = "KW_UI_PROGRESS"
local KW_TEXT_PROGRESS = "KW_TEXT_PROGRESS"
local KW_DATA_EMOJI_DOWNLOAD_ = "KW_DATA_EMOJI_DOWNLOAD_"
local KW_POS_DOWNLOAD = "KW_POS_DOWNLOAD"
local KW_UI_DOWNLOAD_ = "KW_UI_DOWNLOAD_"

function GameEmojisScene:ctor()
    self.scheduleScriptID = nil
    self._rootNode = nil
    self._emojiName = ""
end

function GameEmojisScene:start(rootNode, emojiName)
    self._emojiName = emojiName
    if self._rootNode == nil then
        self._rootNode = rootNode
    else
        return
    end
    
    return
end

function GameEmojisScene:needHotUpdate(emojiName, oldVersion, newVersion)
	print("发现游戏新版本，开始热更新") 
	local emojiDownloadPanel = self._rootNode
    if emojiDownloadPanel and not tolua.isnull(emojiDownloadPanel) then 
        local uiDownload = emojiDownloadPanel:getChildByName(KW_UI_DOWNLOAD_ .. emojiName)
        if uiDownload then 
            local progressUINode = ccui.Helper:seekWidgetByName(uiDownload,KW_UI_DOWNLOAD)
			if progressUINode then
				progressUINode:setVisible(true)
			end
        end
    end
end

function GameEmojisScene:hotUpdateProgress(progress, emojiName)
	local emojiDownloadPanel = self._rootNode
	local uiDownload
	if emojiDownloadPanel and not tolua.isnull(emojiDownloadPanel) then 
		uiDownload = emojiDownloadPanel:getChildByName(KW_UI_DOWNLOAD_ .. emojiName)
        if uiDownload == nil then 
            return
        end
	else
		return
    end
    local nPercent = tonumber(progress,10)
    if nPercent < 0 then
        nPercent = 0
    elseif nPercent >= 100 then
        nPercent = 100
        local progressUINode = ccui.Helper:seekWidgetByName(uiDownload,KW_UI_DOWNLOAD)
        if progressUINode then
            progressUINode:setVisible(false)
        end
    end
    local progressNode = ccui.Helper:seekWidgetByName(uiDownload,KW_UI_PROGRESS)
    if progressNode then
        progressNode:setPercent(nPercent)
    end
    local progressTextNode = ccui.Helper:seekWidgetByName(uiDownload,KW_TEXT_PROGRESS)
    if progressTextNode then
        local percentage = string.format("%d%%",nPercent)
        local text = "正在下载表情包..." .. percentage 
        progressTextNode:setString(text)
    end
end

function GameEmojisScene:hotUpdateSuccess(emojiName, haveNewVersion)
	print("hotUpdateSuccess:"..emojiName)
    self:hotUpdateProgress(100, emojiName)
	cc.UserDefault:getInstance():setBoolForKey(KW_DATA_EMOJI_DOWNLOAD_ .. emojiName, true)
	if haveNewVersion then
		Game.Interface.showPopLayer("WeakHintLayer",{"表情包更新成功"})
	end
	local emojiDownloadPanel = self._rootNode
    if emojiDownloadPanel and not tolua.isnull(emojiDownloadPanel) then 
        local uiDownload = emojiDownloadPanel:getChildByName(KW_UI_DOWNLOAD_ .. emojiName)
        if uiDownload then 
            uiDownload:removeFromParent()
        end
	else
		return
    end
	local event = cc.EventCustom:new("UpdateEmoji.CallBack")
    event._emojiName = emojiName
    cc.Director:getInstance():getEventDispatcher():dispatchEvent(event)
end

function GameEmojisScene:hotUpdateFailed(emojiName, message)
    print("TAG = " .. emojiName .. " message = " .. message)
	local emojiDownloadPanel = self._rootNode
    if emojiDownloadPanel and not tolua.isnull(emojiDownloadPanel) then 
        local uiDownload = emojiDownloadPanel:getChildByName(KW_UI_DOWNLOAD_ .. emojiName)
        if uiDownload then 
            local progressUINode = ccui.Helper:seekWidgetByName(uiDownload,KW_UI_DOWNLOAD)
			if progressUINode then
				progressUINode:setVisible(false)
			end
        end
	else
		return
    end
	Game.Interface.showPopLayer("WeakHintLayer",{"表情包更新失败"})
	local event = cc.EventCustom:new("UpdateEmoji.CallBack")
    event._emojiName = emojiName
    cc.Director:getInstance():getEventDispatcher():dispatchEvent(event)
end

return GameEmojisScene
