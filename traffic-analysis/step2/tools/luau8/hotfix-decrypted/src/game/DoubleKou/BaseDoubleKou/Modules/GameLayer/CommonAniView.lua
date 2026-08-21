local CommonAniView = CF.gameClass("CommonAniView", CF.ViewBase)
local AnimationManager = CF.gameRequire("Manager.AnimationManager")

function CommonAniView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/CommonAniLayer.csb"
end

function CommonAniView:getBindingInfo()
    local table = {
        ["_KW_PANEL_ANI_POS"] = {varName = "_KW_PANEL_ANI_POS"}
    }
    return table
end

function CommonAniView:getProxyEvents()
    local eventTable = {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_PLAY_EIGHTKING_START_ANI", callBack = "onPlayEightKingStartAni"},
    }
    return eventTable 
end

function CommonAniView:onPlayEightKingStartAni(event)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    if gameData:getGameStep() == CF.GameDefine.GAME_STEP.GAME_STEP_GAME_START and gameData:getEightKing() then
        AnimationManager.playEightKingStartAni(self._KW_PANEL_ANI_POS)
        CF.soundManager:playSoundStartAni()
    end
end

return CommonAniView