local CenterBtnsView = CF.gameClass("CenterBtnsView", "game.GameBase.Modules.CenterBtns.View")

function CenterBtnsView:getStartBtnVisible()
    -- 匹配中不显示开始按钮
    if CF.roomData:isMatching() then
        return false
    end
    
    local selfPlayerData = CF.roomData:getSelfPlayerData()
    if not selfPlayerData then
        return false
    end

    if CF.roomData:isGoldRoom() then
        return false
    end

    return selfPlayerData:getStateEx() == selfPlayerData.USER_STATEEX.psWait
end

return CenterBtnsView
