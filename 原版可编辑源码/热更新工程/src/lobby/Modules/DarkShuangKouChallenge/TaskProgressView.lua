local TaskProgressView = class("TaskProgressView", XH.ViewBase)
local Define = require(XH.goldLobbyRootPath .. ".Modules.DarkShuangKouChallenge.Define")

function TaskProgressView:getCSBPath()
    return "hall/CSB/DarkShuangKouChallenge/TaskProgress.csb"
end

function TaskProgressView:getBindingInfo()
    return {
        ["_KW_PROCENT"] = {varName = "_procent"},
        ["_KW_PROGRESS_ITEM"] = {varName = "_processItem"},
        ["_KW_UI_PROGRESS_PANEL"] = {varName = "_panelProcess"}
    }
end

function TaskProgressView:ctor()
    TaskProgressView.super.ctor(self)
    self:setCascadeOpacityEnabled(true)
    self._processItem:setVisible(false)
end

function TaskProgressView:setTaskInfo(taskInfo)
    self._taskInfo = taskInfo
    self._curTaskStage = 0
    self:refreshPage()
end

function TaskProgressView:refreshPage()
    self._procent:setPercent(100 * self._taskInfo.progress / self._taskInfo.content[#self._taskInfo.content].target)
    self:initProgressBtn()
end

-- 下一阶段
function TaskProgressView:getNextStageIdx()
    local idx = 1
    if self._taskInfo == nil or self._taskInfo.content == nil then
        return idx
    end
    for i = 1, #self._taskInfo.content do
        if self._taskInfo.progress < self._taskInfo.content[i].target then
            idx = i
            break
        end
    end
    return idx
end

-- 可领奖阶段
function TaskProgressView:getDrawTaskInfo()
    if self._taskInfo == nil or self._taskInfo.content == nil then
        return {haveDraw = false, idx = 1}
    end
    for i = 1, #self._taskInfo.content do
        if self._taskInfo.progress >= self._taskInfo.content[i].target and self._taskInfo.content[i].state == 1 then
            return {haveDraw = true, idx = i}
        end
    end
    return {haveDraw = false, idx = 1}
end

function TaskProgressView:initProgressBtn()
    if self._taskInfo == nil then
        return
    end
    local totalCnt = #self._taskInfo.content
    local curTotalProgress = self._taskInfo.progress
    self._panelProcess:removeAllChildren()
    self._progressBtns = {}
    local tmpProgress = 0
    for i = 1, totalCnt do
        local progressBtn = self._processItem:clone()
        if progressBtn ~= nil then
            progressBtn:addTouchEventListener(handler(self, self.onClickProgressBtn))
            self._panelProcess:addChild(progressBtn)
            local curLvProgress = self._taskInfo.content[i].target
            local ratio = i / totalCnt
            local width = self._panelProcess:getContentSize().width
            local beforeProgress = 0
            if i > 1 then
                beforeProgress = self._taskInfo.content[i - 1].target
            end
            if self._taskInfo.content[i].state == Define.ENUM_REWARD_STATE.AVAILABLE or self._taskInfo.content[i].state == Define.ENUM_REWARD_STATE.RECEIVED then
                -- 当前已经完成了
                tmpProgress = tmpProgress + 1 / totalCnt
            elseif curTotalProgress > beforeProgress then
                tmpProgress = tmpProgress + ((curTotalProgress - beforeProgress) / (curLvProgress - beforeProgress)) / totalCnt
            end
            local multiple = 1
            local unit = ""
            local str = curLvProgress / multiple .. unit
            local textNode = progressBtn:getChildByName("_KW_UI_STEP_TEXT")
            textNode:setString(str)
            if self._taskInfo.content[i].state == Define.ENUM_REWARD_STATE.AVAILABLE or self._taskInfo.content[i].state == Define.ENUM_REWARD_STATE.RECEIVED then
                textNode:setTextColor(cc.c3b(0xB1, 0x53, 0x15))
            else
                textNode:setTextColor(cc.c3b(0x39, 0x49, 0xB3))
            end

            for j = 0, 2 do
                local node = progressBtn:getChildByName("_KW_UI_STEP_IMG_" .. j)
                if node then
                    node:setVisible(j == self._taskInfo.content[i].state)
                end
            end
            progressBtn:setPosition(ratio * width, 60)
            progressBtn:setName(i)
            progressBtn:setTag(i)
            progressBtn:setVisible(true)
            self._progressBtns[i] = progressBtn

            self:flushAwardItems(i)
        end
    end
    self._procent:setPercent(100 * tmpProgress)
end

-- 增加奖励节点
function TaskProgressView:flushAwardItems(idx)
    local curRewards = self._taskInfo.content[idx].rewards
    local node = require(XH.goldLobbyRootPath .. ".Modules.DarkShuangKouChallenge.AwardGroupView").new()
    if node then
        node:flushAwardItems(curRewards, self._taskInfo.content[idx].state)
        node:setPosition(self._progressBtns[idx]:getContentSize().width / 2, 110)
        if self._taskInfo.content[idx].state == 1 then
            local path = "hall/CSB/DarkShuangKouChallenge/spine/"
            node:tryAddLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = path .. "prop_animation.json", animationName = "loop", boneName = "prop", slotName = "prop", isLoop = true})
        end
        self._progressBtns[idx]:addChild(node)
    end
end

function TaskProgressView:onClickProgressBtn(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local index = send:getTag()
    if self._taskInfo.content[index].state ~= Define.ENUM_REWARD_STATE.AVAILABLE then
        return
    end
    if self._taskInfo.clickCallback then
        self._taskInfo.clickCallback(self._taskInfo.content[index], index)
    end
end

return TaskProgressView
