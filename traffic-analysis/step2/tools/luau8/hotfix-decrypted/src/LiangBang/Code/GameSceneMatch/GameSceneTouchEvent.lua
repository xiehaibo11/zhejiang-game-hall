local CURRENT_MODULE_NAME = ...
local GameSceneBase = import("..GameScene.GameSceneTouchEvent", CURRENT_MODULE_NAME)
local GameScene = class("GameScene", GameSceneBase)
local PlayerData = import("GameCommon.Code.GameData.PlayerData")
local GameSceneDefine = import("..GameScene.GameSceneDefine", CURRENT_MODULE_NAME)
local StringFunction = import("GameCommon.Code.GameFunction.StringFunction")

function GameScene:onTouchEventExit(send, eventType)
    if eventType == ccui.TouchEventType.began then
        Game.GameSound.playButtonClick()
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    --    Game.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_MAHJONG_MENU_EXIT + self._gameID * 100)
    local selfPlayer = Game.FrameworkFunction.getSelfPlayer()
    if selfPlayer and (selfPlayer:getStateEx() == PlayerData.USER_STATEEX.psPlaying) then
        XH.TipTool.showTip(
        {
            type = XH.TIP_LAYER_TYPE.OK_CANCEL,
            funcOK = function()
                self:leaveGame(false)
            end
        },
        "确定要离开比赛？"
        )
        return
    else
        if false then --if self._matchInfo.starttype == MatchKeyWord.MatchTypes.Human_Match and self._joinRoomID == 0 then
            XH.TipTool.showTip(
            {
                type = XH.TIP_LAYER_TYPE.OK_CANCEL,
                funcOK = function()
                    self:reqCancelSignUp(self._matchInfo.matchid, self._matchInfo.subid, self._matchInfo.appID)
                    XH.GT.popLayer("MatchGameWaitMessage")
                    self:leaveGame(false)
                end
            },
            "离开比赛即退赛,是否退赛？"
            )
        else
            XH.GT.popLayer("MatchGameWaitMessage")
            self:leaveGame()
        end

        return
    end
    local menuBtn = ccui.Helper:seekWidgetByName(self:getRootNode(), GameSceneDefine.KW_BTN_MENU)
    if menuBtn then
        self:onTouchEventMenu(menuBtn, ccui.TouchEventType.ended)
    end
end

return GameScene7