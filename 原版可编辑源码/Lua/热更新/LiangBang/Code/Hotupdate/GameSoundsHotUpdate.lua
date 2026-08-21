local GameSoundsHotUpdateBase = require("GameCommon.Code.Hotupdate.GameSounds.GameSoundsHotUpdate")
local GameSoundsHotUpdate = class("GameSoundsHotUpdate",GameSoundsHotUpdateBase)

local KW_UI_GAME_SOUND_PROGRESS = "KW_UI_GAME_SOUND_PROGRESS"
local KW_UI_GAME_SOUNDS_DOWNLOAD = "KW_UI_GAME_SOUNDS_DOWNLOAD"
local KW_TEXT_GAME_SOUND_PROGRESS = "KW_TEXT_GAME_SOUND_PROGRESS"

function GameSoundsHotUpdate:hotUpdateProgress(tag, progress)
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
        local text = "(" .. percentage .. ")" .. "音效正在加载中"
        progressTextNode:setString(text)
    end
end

return GameSoundsHotUpdate