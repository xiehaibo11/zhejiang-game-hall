local PlayerHeadNode = CF.gameClass("PlayerHeadNode", "game.DoubleKou.BaseDoubleKou.Modules.Player.HeadNode")

function PlayerHeadNode:initChildren()
    PlayerHeadNode.super.initChildren(self)
    local nIndex = CF.game:getModule("GameLayer"):getGameData():getShowWinOrder(self._localSeat)
    if nIndex and nIndex > 0 then
        self:showWinOrderImg(true, nIndex)
    end
end

function PlayerHeadNode:showAddMultiple(multipleType)
    local step = CF.game:getModule("GameLayer"):getGameData():getGameStep()
    if step == CF.GameDefine.GAME_STEP.GAME_STEP_ADD_MULTIPLE then 
        return 
    end 
    if step > CF.GameDefine.GAME_STEP.GAME_STEP_GAME_START  and step < CF.GameDefine.GAME_STEP.GAME_STEP_SEND_FRIEND_CARD  then 
        return 
    end 
    PlayerHeadNode.super.showAddMultiple(self,multipleType)
end

return PlayerHeadNode