local CURRENT_MODULE_NAME = ...
local GameSceneBase = import("..GameScene.GameSceneMatch",CURRENT_MODULE_NAME)
local GameScene = class("GameScene",GameSceneBase)

function GameScene:checkGameLink()
end

function GameScene:addMatchProtocolScript()
    Game.Interface.addProtocolScriptFuncByObj(self,self.onReciveMatchMessage, XH.bf.ProcessIDList.MatchServer)
    -- 比赛排名信息拉取
    self:reqPlayerMatchInfo()
end

function GameScene:addMatchJoinRoomProtocolScript()
    Game.Interface.addProtocolScriptFuncByObj(self,self.onReciveMatchGameMessage, XH.bf.ProcessIDList and XH.bf.ProcessIDList.Game or 1)
end

function GameScene:leaveMatchGame()
    -- 比赛监听移除
    Game.Interface.removeProtocolScriptFuncByObj(self,self.onReciveMatchMessage) 
    Game.Interface.removeProtocolScriptFuncByObj(self,self.onReciveMatchGameMessage)
end

function GameScene:matchPopScene()
    --cc.Director:getInstance():popScene()
end

return GameScene