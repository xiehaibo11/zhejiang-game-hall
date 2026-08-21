local CURRENT_MODULE_NAME = ...
local GameScene = class("GameScene")
local GameSceneDefine = import(".GameSceneDefine",CURRENT_MODULE_NAME)
local PlayerData = import("GameCommon.Code.GameData.PlayerData")
local GameKeyWord = import("..Config.GameKeyWord",CURRENT_MODULE_NAME)
local PathKeyWord = import("..Config.PathKeyWord",CURRENT_MODULE_NAME)

local MyCardsType = import("..GameAlgorithm.MyCardsType",CURRENT_MODULE_NAME)
local CardAlgorithm = import("..GameAlgorithm.CardAlgorithm",CURRENT_MODULE_NAME)
local KW_POS_GAMEAREA_BOOM_XIAN = "KW_ACTION_POS"
local KW_PATH_GAMEAREA_BOOM_XIAN_JSON = GameSceneDefine.KW_GAME_PATH .. "/LiangBang/Json/movie_xian/movie_xian.ExportJson"
local KW_PATH_GAMEAREA_SHUNZI_JSON = GameSceneDefine.KW_GAME_PATH .. "/LiangBang/Json/supper_card_style/supper_card_style.ExportJson"
local KW_PATH_GAMEAREA_BOOM_JSON_ = GameSceneDefine.KW_GAME_PATH .. "/LiangBang/Json/boom/boom_%d.ExportJson"
local KW_ANI_BOOM_XIAN_NAME = "xian%d"
local KW_ANI_SHUNZI_NAME = "shun%d"
local KW_ANI_BOOM_SCENCE_ANI_NAME = "boom_%d"

function GameScene:showWirebreakSign(seat, bShow)
    local localSeat = Game.FrameworkFunction.seatToLocal(seat)
    local headUI = self:getUIPlayerHead(localSeat)
    local wirebreakNode = ccui.Helper:seekWidgetByName(headUI,GameSceneDefine.KW_POS_WIRE_BREAK)
    if wirebreakNode then
        if bShow then 
            if ccs.ArmatureDataManager:getInstance():getAnimationData("nonet_mov") == nil then
                ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(
                   GameSceneDefine.KW_GAMECOMMON_PATH.."/GameCommon/Json/nonet_ani/nonet_mov0.png",
                   GameSceneDefine.KW_GAMECOMMON_PATH.."/GameCommon/Json/nonet_ani/nonet_mov0.plist",
                   GameSceneDefine.KW_GAMECOMMON_PATH.."/GameCommon/Json/nonet_ani/nonet_mov.ExportJson")   
            end      
            local armature = wirebreakNode:getChildByName(GameSceneDefine.KW_UI_WIRE_BREAK_ANIMATION)
            if armature == nil then
                if ccs.ArmatureDataManager:getInstance():getAnimationData("nonet_mov") then
                    local armature = ccs.Armature:create("nonet_mov")
                    if armature then 
                        armature:setName(GameSceneDefine.KW_UI_WIRE_BREAK_ANIMATION)
                        wirebreakNode:addChild(armature)
                        armature:setAnchorPoint(cc.p(0.5,0.5))
                        armature:setPosition(0.0,0.0)
                        armature:getAnimation():playWithIndex(0,-1,1)
                    end
                end    
            end
        else
            wirebreakNode:removeAllChildren()
        end 
    end
end


function GameScene:showDelayTime(delayTime)
    local delayTimeNode = ccui.Helper:seekWidgetByName(self:getRootNode(),"KW_TEXT_DELAY")
    if delayTimeNode then
        if delayTime > 9999 then
            delayTime = 9999 
        end
        local colorWeight = (delayTime - 150) / (800 - 150)

        if colorWeight < 0 then
            colorWeight = 0
        elseif colorWeight > 1 then
            colorWeight = 1
        end

        local green = {r = 17, g = 113, b = 52}
        local yellow = {r = 227, g = 145, b = 28}
        local rad = {r = 255, g = 6, b = 6}

        local color = {r = 0, g = 0, b = 0}

        if colorWeight < 0.5 then
            color.r = green.r + (yellow.r - green.r) * colorWeight * 2
            color.g = green.g + (yellow.g - green.g) * colorWeight * 2
            color.b = green.b + (yellow.b - green.b) * colorWeight * 2
        else
            color.r = yellow.r + (rad.r - yellow.r) * (colorWeight - 0.5) * 2
            color.g = yellow.g + (rad.g - yellow.g) * (colorWeight - 0.5) * 2 
            color.b = yellow.b + (rad.b - yellow.b) * (colorWeight - 0.5) * 2       
        end
        delayTimeNode:setColor(cc.c3b(color.r, color.g, color.b) )
        Game.UIFunction.setText(self:getRootNode(),"KW_TEXT_DELAY",math.floor(delayTime) .. "ms")
    end
end

function GameScene:moveHeadWithOpenHand(localSeat,bOpenHand)
    local headPanel = ccui.Helper:seekWidgetByName(self:getRootNode(),"KW_PANEL_HEAD_" .. localSeat)
    local hideHandPos = ccui.Helper:seekWidgetByName(self:getRootNode(),"KW_PANEL_HEAD_HIDE_POS_" .. localSeat)
    local displayHandPos = ccui.Helper:seekWidgetByName(self:getRootNode(),"KW_PANEL_HEAD_DISPLAY_POS_" .. localSeat)
    if not headPanel or not hideHandPos or not displayHandPos then
        return
    end
    local moveToPos = {}
    if bOpenHand then
        moveToPos.x,moveToPos.y = displayHandPos:getPosition()
    else
        moveToPos.x,moveToPos.y = hideHandPos:getPosition()
    end
    headPanel:stopAllActions()
    headPanel:runAction(cc.EaseExponentialIn:create(cc.MoveTo:create(1, moveToPos)))
end

function GameScene:adaptGoldRoomInfo(parameters)
    local roomInfoPanel = Game.UIFunction.seekWidgetByName(self:getRootNode(),"KW_UI_ROOM_INFO")
    local roomInfoGoldPos = Game.UIFunction.seekWidgetByName(self:getRootNode(),"KW_GOLD_ROOM_INFO_POS")
    if roomInfoPanel and roomInfoGoldPos then
        local moveToPos = {}
        moveToPos.x,moveToPos.y = roomInfoGoldPos:getPosition()
        roomInfoPanel:setPosition(moveToPos)
    end
end

return GameScene

