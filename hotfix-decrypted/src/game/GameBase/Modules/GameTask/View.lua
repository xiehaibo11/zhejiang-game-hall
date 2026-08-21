local GameTaskView = CF.gameClass("GameTaskView", CF.ViewBase)

local aniPath = "animation/GameCommon/GameTask/"

function GameTaskView:ctor()
    GameTaskView.super.ctor(self)
    self._isBottomPanelIn = true
    self._isBottomPanelNeedIn = true
end

function GameTaskView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/GameTaskLayer.csb"
end


function GameTaskView:getBindingInfo()
    return {
        ["_KW_SPINE_ANI_POS"] = {varName = "_spinePos"},
        ["_KW_PANEL_SPINE_ANI_POS"] = {varName = "_panelSpinePos"},
        ["_KW_MOVE_ANI_PANEL"] = {varName = "_movePanelPos"},
        ["_KW_MOVE_IN_POS"] = {varName = "_moveInPos"},
        ["_KW_MOVE_OUT_POS"] = {varName = "_moveOutPos"},
        ["_KW_PROGRESS_UI"] = {varName = "_progressUI"},
        ["_KW_PROGRESS_FNT"] = {varName = "_progressText"},
        ["_KW_PROGRESS_BG"] = {varName = "_progressBg"},
        ["_KW_AWARD_TEXT"] = {varName = "_taskAwardText"},
        ["_KW_TOUCH_PANEL"] = {varName = "_touchPanel", type = XH.UI_TYPE.PANEL_TOBUTTON, onTouch = "onTouchEventFinish"},
        
    }
end

function GameTaskView:getProxyEvents()
    return {
        { module = CF.game:getModule("GameTask"), eventKeyName = "EVENT_UPDATE_CURRENT_TASK_INFO", callBack = "onEventUpdateCurrentTaskInfo" },
        { module = CF.game:getModule("GameTask"), eventKeyName = "EVENT_SHOW_GAME_TASK", callBack = "onEventShowGameTask" },
    }
end

function GameTaskView:setProgressRound(progress)
    if self._progressUI == nil then 
        return 
    end 
    if progress >= 0 and progress < 1 then 
        self._progressUI:setVisible(true)
    else 
        self._progressUI:setVisible(false)
    end 
    self._progressUI:removeAllChildren()
    cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/Common/Image/GameTask.plist")
    local sprite = cc.Sprite:createWithSpriteFrameName("Img_lv_mask.png")
    local circleProgressBar = cc.ProgressTimer:create(sprite)

    -- 计算 self._progressUI 的中心位置
    local centerX = self._progressUI:getContentSize().width / 2
    local centerY = self._progressUI:getContentSize().height / 2

    -- 设置进度条位置为中心
    circleProgressBar:setPosition(cc.p(centerX, centerY))

    self._progressUI:addChild(circleProgressBar)
    circleProgressBar:setType(cc.PROGRESS_TIMER_TYPE_RADIAL)
    circleProgressBar:setReverseDirection(true)
    circleProgressBar:setPercentage(progress * 100)
end

function GameTaskView:setTaskDescribe(strTaskDescribe)
    if self._progressText == nil then 
        return 
    end 
    self._progressText:setText(strTaskDescribe)
end

function GameTaskView:showTaskDescribe(visible)
    if self._progressBg == nil then 
        return 
    end 
    self._progressBg:setVisible(visible)
end

function GameTaskView:setTaskAward(strAward)
    if self._taskAwardText == nil then 
        return 
    end 
    self._taskAwardText:setText(strAward)
end

function GameTaskView:showTaskState(state)
    if self._spinePos == nil then 
        return 
    end 
    local animations = ""
    if state == "AC_NEW" then 
        animations = "jbts01"
    elseif state == "AC_CAN_DRAW" then 
        animations = "jbts02"
    else 
        return 
    end

    local params = {path = aniPath, tex = "jbts.json", ske = "jbts.atlas", armatureName = animations}
    if cc.FileUtils:getInstance():isFileExist(params.path..params.tex) and cc.FileUtils:getInstance():isFileExist(params.path..params.ske) then
        local spineNode = display.playDargonBonesSpine(params)
        if spineNode then
            self._spinePos:removeAllChildren()
            spineNode:setName("ICON_ANI")
            local size = self._spinePos:getContentSize()
            spineNode:setPosition(size.width / 2, size.height / 2)
            self._spinePos:addChild(spineNode)
        end
    end
end

function GameTaskView:showTaskPanelState(state)
    if self._panelSpinePos == nil then 
        return 
    end 
    local animations = ""
    if state == "AC_NEW" then 
        animations = "jbts04"
    elseif state == "AC_CAN_DRAW" then 
        animations = "jbts03"
    else 
        return 
    end

    local params = {path = aniPath, tex = "jbts.json", ske = "jbts.atlas", armatureName = animations}
    if cc.FileUtils:getInstance():isFileExist(params.path..params.tex) and cc.FileUtils:getInstance():isFileExist(params.path..params.ske) then
        local spineNode = display.playDargonBonesSpine(params)
        if spineNode then
            self._panelSpinePos:removeAllChildren()
            spineNode:setName("PANEL_ANI")
            local size = self._panelSpinePos:getContentSize()
            spineNode:setAnchorPoint(cc.p(0.5, 0.5))
            spineNode:setPosition(size.width / 2, size.height / 2)
            self._panelSpinePos:addChild(spineNode)
        end
    end
end

function GameTaskView:showTaskBottomPanel(inOrOut)
    if self._isBottomPanelIn == inOrOut then 
        return 
    end 
    self._isBottomPanelIn = inOrOut
    local startPos, endPos
    if inOrOut then
        startPos = cc.p(self._moveOutPos:getPosition())
        endPos = cc.p(self._moveInPos:getPosition())
    else
        startPos = cc.p(self._moveInPos:getPosition())
        endPos = cc.p(self._moveOutPos:getPosition())
    end
    self._movePanelPos:stopAllActions()
    self._movePanelPos:setPosition(cc.p(startPos.x,self._movePanelPos:getPositionY()))  -- 将目标UI节点先设置到起始位置
    local moveTo = cc.MoveTo:create(0.3, cc.p(endPos.x,self._movePanelPos:getPositionY()))  -- 创建移动动作，0.5秒移动到目标位置，时长可按需调整
    self._movePanelPos:runAction(moveTo)
end

local currentTaskInfo = {}
function GameTaskView:onEventUpdateCurrentTaskInfo(event)
    if CF.TableTool.isTableAllValueSame(currentTaskInfo,event.msg) then 
        return
    end 
    currentTaskInfo = event.msg
    self:setTaskAward(event.msg.taskAwardStr)
    self:setProgressRound(event.msg.progress)
    self:setTaskDescribe(event.msg.taskDescribeStr)
    self:showTaskDescribe(event.msg.progress >= 0 and event.msg.progress < 1)
    self:showTaskState(event.msg.taskStatus)
    self:showTaskPanelState(event.msg.taskStatus)
    if event.msg.taskStatus == "AC_CAN_DRAW" then 
        self:showTaskBottomPanel(false)
    else 
        if self._isBottomPanelNeedIn then 
            self:showTaskBottomPanel(false)
            display.performWithDelay(self._movePanelPos,function ()
                self:showTaskBottomPanel(true)
            end,5)
        end 
    end 
end

local isFirstShow = false
function GameTaskView:onEventShowGameTask(event)
    if self._touchPanel:isVisible() == false and event.msg == true then 
        local throwData = {
            item_id = CF.game:getModule("GameTask"):getCurrentTaskID(),
        }
        local exData = {
            source = CF.roomData:getRoomLevel()
        }
        CF.NewThrowDataManager:throwData(XH.NewThrowDataDefine.GAME_TASK_SHOW, throwData,exData)
    end
    self._touchPanel:setVisible(event.msg)
    if isFirstShow == false then 
        isFirstShow = true
        self:showTaskBottomPanel(false)
        display.performWithDelay(self._movePanelPos,function ()
            self:showTaskBottomPanel(true)
        end,5)
    end 
end

local canClick = true
function GameTaskView:onTouchEventFinish(send, eventType)
    if ccui.TouchEventType.ended ~= eventType then 
        return 
    end
    local throwData = {
        item_id = CF.game:getModule("GameTask"):getCurrentTaskID(),
    }
    local exData = {
        source = CF.roomData:getRoomLevel()
    }
    CF.NewThrowDataManager:throwData(XH.NewThrowDataDefine.GAME_TASK_CLICK, throwData,exData)
    if canClick then 
        canClick = false
        self:performWithDelay(function()
            canClick = true
        end, 1)
    else 
        return 
    end 

    if not CF.game:getModule("GameTask"):isCurrentTaskCanDraw() then 
        self:showTaskBottomPanel(not self._isBottomPanelIn)
        self._isBottomPanelNeedIn = not self._isBottomPanelNeedIn 
        return 
    end 
    CF.game:getModule("GameTask"):reqGetRewards()
    
end

return GameTaskView�   