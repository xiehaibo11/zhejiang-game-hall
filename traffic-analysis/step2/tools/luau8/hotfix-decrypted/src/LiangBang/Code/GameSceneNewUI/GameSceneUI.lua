local CURRENT_MODULE_NAME = ... 
local GameScene = class("GameScene")
local GameSceneDefine = import(".GameSceneDefine",CURRENT_MODULE_NAME)

function GameScene:getContributionBySeat(localSeat)
    local headUI = self:getUIPlayerHead(localSeat)
    if headUI then
        return Game.UIFunction.seekWidgetByName(headUI,"KW_TEXT_PLAYER_CONTRIBUTION")
    end
end

function GameScene:getUIHeadTimerProgress(localSeat)
    if self._uiHeadTimerProgressUI == nil then
        self._uiHeadTimerProgressUI = {}
        for i = 1 , Game.FrameworkFunction.getMaxPlayer() do
            local posTime = ccui.Helper:seekWidgetByName(self:getUIPlayerHead(i),GameSceneDefine.KW_UI_PLAYER_TIME )
            if posTime then
                self._uiHeadTimerProgressUI[i] = cc.ProgressTimer:create(cc.Sprite:create(GameSceneDefine.KW_PATH_RESOUCE_IMAGE .. "/game_clocklight.png"))
                if self._uiHeadTimerProgressUI[i] then
                    posTime:addChild(self._uiHeadTimerProgressUI[i])
                    self._uiHeadTimerProgressUI[i]:setType(cc.PROGRESS_TIMER_TYPE_RADIAL)
                    self._uiHeadTimerProgressUI[i]:setReverseDirection(true)
                    self._uiHeadTimerProgressUI[i]:setVisible(true)
                    self._uiHeadTimerProgressUI[i]:setPercentage(100)
                end
            end
        end
    end
    return self._uiHeadTimerProgressUI[localSeat]
end

return GameScene�