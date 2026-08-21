local CURRENT_MODULE_NAME = ...
local GameScene = class("GameScene")

function GameScene:checkGameLink()
    self._wireBreakCheckSchedule = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        self:checkPlayerLinkState()
    end,1.0,false)
end

function GameScene:addMatchProtocolScript()
end

function GameScene:addMatchJoinRoomProtocolScript()
end

function GameScene:leaveMatchGame()
end

function GameScene:matchPopScene()
end

return GameScene�