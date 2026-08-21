local IconAnimationManagerModule = class("IconAnimationManagerModule", CF.ModuleBase)

IconAnimationManagerModule.PlayType = {
    LuckyMission = 0,
    XiaGuang = 1,
    JuBaoPen = 2,
    QingCaiShen = 3,
    RECALLNEW = 4,
}

IconAnimationManagerModule.ViewPositionSortList = {
    [1] = 'GamePropView',
    [2] = 'JuBaoPenIconView',
    [3] = 'XGSJView',
    [4] = 'LuckyMissionView',
    [5] = 'RecallNewIconView',
    [6] = 'QingShenIconView',
}

function IconAnimationManagerModule:ctor()
    IconAnimationManagerModule.super.ctor(self)
    self._playType = math.random(0, 4)
end

function IconAnimationManagerModule:GetPlayAnimationIndex()
    return self._playType
end

function IconAnimationManagerModule:updateViewPosition()
    local startPosX = display.width - 130
    local index = 0
    local gameScene = display.getRunningScene()
    if not gameScene or not gameScene.getViewByName then
        return
    end
    for _, viewName in ipairs(self.ViewPositionSortList) do
        local view = gameScene:getViewByName(viewName)
        if view then
            if view.updatePositionX then
                view:updatePositionX(startPosX - index * 150)
            end
            index = index + 1
        end
    end
end

function IconAnimationManagerModule:reportData(block_label)
    if not CF or not CF.roomData or not CF.areaData then
        return
    end
    local data = {
        block_label = block_label or "",
        game_id = CF.areaData:getAreaID() .. "_" .. CF.roomData:getGameID(),
    }
    CF.NewThrowDataManager:throwData(CF.NewThrowDataDefine.oh26031001, data)
end

return IconAnimationManagerModule
