local ActionUtils = {}
function ActionUtils:initNode(node)
    node[".initPos"] = cc.p(node:getPosition())
end
local backAddTime = 3 / 30
function ActionUtils:clearInitData(node, bReset)
    if not tolua.isnull(node) then
        -- if node[".initPos"] then
        --     node:setPosition(node[".initPos"])
        -- end
        node[".initPos"] = nil
    end
end

function ActionUtils:prepare(node, bReset, stopAction)
    if tolua.isnull(node) then
        return false
    end
    if not node[".initPos"] then
        self:initNode(node)
    end
    if bReset then
        if node[".initPos"] then
            node:setPosition(node[".initPos"])
        end
    end
    if stopAction ~= false then
        node:stopAllActions()
    end
    return true
end

-- 顶部信息在选场界面出现
function ActionUtils:runTopFadeIn(node, bReset, delay, time)
    if not self:prepare(node, bReset) then
        return
    end
    -- if node:getOpacity() == 255 then
    --     return
    -- end
    node:setOpacity(0)
    node:runAction(cc.Sequence:create(cc.DelayTime:create(delay or 3 / 30), cc.FadeIn:create(time or 8 / 30)))
end

-- 先放大1.5倍后进行缩小到1
function ActionUtils:runScale(node, bReset, delay, time)
    if not self:prepare(node, bReset) then
        return
    end
    node:setScale(1.5)
    node:runAction(cc.Sequence:create(cc.DelayTime:create(delay or 3 / 30), cc.ScaleTo:create(time or 8 / 30, 1)))
end

-- 顶部信息在选场界面出现
function ActionUtils:runTopFadeOut(node, bReset, delay, time)
    if not self:prepare(node, bReset) then
        return
    end
    -- if node:getOpacity() == 255 then
    --     return
    -- end
    node:setOpacity(255)
    node:runAction(cc.Sequence:create(cc.DelayTime:create(delay or 3 / 30), cc.FadeOut:create(time or 8 / 30)))
end

-- 顶部按钮向上移入
function ActionUtils:runTopMoveIn(node, isBack, bReset, time)
    if not self:prepare(node, bReset) then
        return
    end
    local pos = isBack and node[".initPos"] or cc.p(node[".initPos"].x, node[".initPos"].y - 180)
    time = time or 5 / 30
    if time == 0 then
        node:setPosition(pos)
    else
        if isBack then
            time = time + 3 / 30
        end
        node:runAction(cc.Sequence:create(cc.DelayTime:create(3 / 30), self:getMoveAction(time, pos)))
    end
    return time
end

-- 顶部按钮向上移出
function ActionUtils:runTopMoveOut(node, isBack, bReset, time)
    if not self:prepare(node, bReset) then
        return
    end
    local pos = isBack and node[".initPos"] or cc.p(node[".initPos"].x, node[".initPos"].y + 180)
    time = time or 5 / 30
    if time == 0 then
        node:setPosition(pos)
    else
        if isBack then
            time = time + 3 / 30 + backAddTime
        end
        node:runAction(cc.Sequence:create(cc.DelayTime:create(3 / 30), self:getMoveAction(time, pos)))
    end
    return time
end

-- 底部按钮向下移出
function ActionUtils:runBottomMoveOut(node, isBack, bReset, time)
    if not self:prepare(node, bReset) then
        return
    end
    local pos = isBack and node[".initPos"] or cc.p(node[".initPos"].x, node[".initPos"].y - 220)
    time = time or 5 / 30
    if time == 0 then
        node:setPosition(pos)
    else
        if isBack then
            time = time + 3 / 30 + backAddTime
        end
        node:runAction(cc.Sequence:create(cc.DelayTime:create(3 / 30), self:getMoveAction(time, pos)))
    end
    return time
end

-- 左侧按钮向左移出
function ActionUtils:runLeftMoveOut(node, isBack, bReset, time, widthScale)
    if not self:prepare(node, bReset) then
        return
    end
    local widthScale = widthScale or 1
    local moveWidth = node:getParent():convertToWorldSpace(node[".initPos"]).x + node:getContentSize().width
    moveWidth = moveWidth * widthScale
    local pos = isBack and node[".initPos"] or cc.p(node[".initPos"].x - moveWidth, node[".initPos"].y)
    time = time or 5 / 30
    if time == 0 then
        node:setPosition(pos)
        if isBack then
            node:setOpacity(255)
        else
            node:setOpacity(0)
        end
    else
        if isBack then
            time = time + 3 / 30 + backAddTime
        end
        node:runAction(cc.Sequence:create(cc.DelayTime:create(3 / 30), cc.CallFunc:create(function()
            node:runAction(self:getMoveAction(time, pos))
            if isBack then
                node:runAction(cc.FadeIn:create(time))
            else
                node:runAction(cc.FadeOut:create(time))
            end
        end)))
    end
    return time
end

-- 右侧按钮向右移出
function ActionUtils:runRightMoveOut(node, isBack, bReset, time)
    if not self:prepare(node, bReset) then
        return
    end
    local moveWidth = node:getParent():convertToWorldSpace(node[".initPos"]).x + 80
    local pos = isBack and node[".initPos"] or cc.p(moveWidth, node[".initPos"].y)
    time = time or 5 / 30
    if time == 0 then
        node:setPosition(pos)
        if isBack then
            node:setOpacity(255)
        else
            node:setOpacity(0)
        end
    else
        if isBack then
            time = time + 3 / 30 + backAddTime
        end
        node:runAction(cc.Sequence:create(cc.DelayTime:create(3 / 30), cc.CallFunc:create(function()
            node:runAction(self:getMoveAction(time, pos))
            if isBack then
                node:runAction(cc.FadeIn:create(time))
            else
                node:runAction(cc.FadeOut:create(time))
            end
        end)))
    end
    return time
end

-- 右侧按钮向右移出
function ActionUtils:runRightMoveIn(node, isBack, bReset, time)
    if not self:prepare(node, bReset) then
        return
    end
    local moveWidth = node:getParent():convertToWorldSpace(node[".initPos"]).x - 80
    local pos = isBack and node[".initPos"] or cc.p(moveWidth, node[".initPos"].y)
    time = time or 5 / 30
    if time == 0 then
        node:setPosition(pos)
        if isBack then
            node:setOpacity(255)
        else
            node:setOpacity(0)
        end
    else
        if isBack then
            time = time + 3 / 30
        end
        node:runAction(cc.Sequence:create(cc.CallFunc:create(function()
            node:runAction(self:getMoveAction(time, pos))
            if isBack then
                node:runAction(cc.FadeIn:create(time))
            else
                node:runAction(cc.FadeOut:create(time))
            end
        end)))
    end
    return time
end

-- 主入口移出
function ActionUtils:runEntryMoveOut(node, idx, isBack, bReset, time, force, width)
    if not self:prepare(node, bReset) then
        return
    end
    time = time or 10 / 30
    width = width or 200
    local pos = isBack and node[".initPos"] or cc.p(node[".initPos"].x + width, node[".initPos"].y)
    if isBack then
        local curPos = cc.p(node:getPosition())
        if not force and math.abs(node[".initPos"].x - curPos.x) < 0.01 and math.abs(node[".initPos"].y - curPos.y) < 0.01 then
            node:setOpacity(255)
            return
        end
        node:setPositionX(node[".initPos"].x + width / 2)
    end
    local gap = isBack and 1 / 30 or 1 / 60
    if time == 0 then
        node:setPosition(pos)
        if isBack then
            node:setOpacity(255)
        else
            node:setOpacity(0)
        end
    else
        if isBack then
            time = time + backAddTime
        end
        node:runAction(cc.Sequence:create(cc.DelayTime:create(idx * gap), cc.CallFunc:create(function()
            if isBack then
                node:runAction(cc.EaseBackOut:create(cc.MoveTo:create(time, pos)))
                node:runAction(cc.FadeIn:create(time))
            else
                node:runAction(cc.EaseBackIn:create(cc.MoveTo:create(time, pos)))
                node:runAction(cc.FadeOut:create(time))
            end
        end)))
    end
    return time
end

-- 快速开始移出
function ActionUtils:runQucikStartMoveOut(node, isBack, bReset, time)
    if not self:prepare(node, bReset) then
        return
    end
    time = time or 4 / 30
    local moveWidth = node:getParent():convertToWorldSpace(node[".initPos"]).x + node:getContentSize().width
    local pos = isBack and node[".initPos"] or cc.p(node[".initPos"].x + moveWidth, node[".initPos"].y)
    if time == 0 then
        node:setPosition(pos)
    else
        if isBack then
            time = time + backAddTime
        end
        node:runAction(cc.Sequence:create(cc.DelayTime:create(4 / 30), self:getMoveAction(time, pos)))
    end
    return time
end

-- 人物移出
function ActionUtils:runPeopleFadeOut(node, isBack, time)
    -- if not self:prepare(node, false) then
    --     return
    -- end
    time = time or 4 / 30
    if time == 0 then
        if isBack then
            -- node:runAction(cc.FadeIn:create(0))
            node:setOpacity(255)
        else
            -- node:runAction(cc.FadeOut:create(0))
            node:setOpacity(0)
        end
    else
        if isBack then
            time = time + backAddTime
        end
        node:runAction(cc.Sequence:create(cc.DelayTime:create(4 / 30), cc.CallFunc:create(function()
            if isBack then
                node:runAction(cc.FadeIn:create(time))
            else
                node:runAction(cc.FadeOut:create(time))
            end
        end)))
    end
    return time
end

function ActionUtils:runBgScale(node, isBack, time)
    if tolua.isnull(node) then
        return
    end
    node:stopAllActions()
    local scale = isBack and 1 or 1.05
    time = time or 16 / 30
    if time == 0 then
        node:setScale(scale)
    else
        if isBack then
            time = time - 8 / 30 + backAddTime
        end
        node:runAction(cc.Sequence:create(cc.DelayTime:create(3 / 30), cc.ScaleTo:create(time, scale)))
    end
    -- if not isBack then
    --     node:runAction(cc.Sequence:create(cc.DelayTime:create(16 / 30), cc.FadeOut:create(15 / 30)))
    -- else
    --     node:setOpacity(255)
    -- end
end

function ActionUtils:runBgLandScale(node, isBack, time)
    if tolua.isnull(node) then
        return
    end
    node:stopAllActions()
    local scale = isBack and 1 or 1.4
    time = time or 17 / 30
    if time == 0 then
        node:setScale(scale)
    else
        if isBack then
            time = time - 8 / 30 + backAddTime
        end
        node:runAction(cc.Sequence:create(cc.DelayTime:create(2 / 30), cc.ScaleTo:create(time or 17 / 30, scale)))
    end
    -- if not isBack then
    --     node:runAction(cc.Sequence:create(cc.DelayTime:create(16 / 30), cc.FadeOut:create(15 / 30)))
    -- else
    --     node:setOpacity(255)
    -- end
end

function ActionUtils:runBgBlurShow(node, isBack, time)
    if not isBack then
        if time == 0 then
            node:setOpacity(255)
        else
            node:setOpacity(0)
            node:runAction(cc.Sequence:create(cc.DelayTime:create(time), cc.FadeIn:create(0.2)))
        end
    else
        node:setOpacity(0)
    end
end

function ActionUtils:runChooseRoomMoveFadeIn(node, idx, bReset)
    if not self:prepare(node, bReset) then
        return
    end
    node:stopAllActions()
    node:setOpacity(0)
    node:runAction(cc.Sequence:create(cc.DelayTime:create(idx * 3 / 30), cc.CallFunc:create(function()
        node.endPos = cc.p(node:getPosition())
        node:setPosition(node.endPos.x + 150, node.endPos.y)
        node:runAction(cc.FadeIn:create(10 / 30))
        node:runAction(cc.Sequence:create(cc.EaseBackOut:create(cc.MoveTo:create(10 / 30, node.endPos)), cc.CallFunc:create(function()

        end)))
    end)))
end

function ActionUtils:getMoveAction(time, pos)
    return cc.MoveTo:create(time, pos)
    -- return cc.EaseIn:create(cc.MoveTo:create(time, pos), 1)
end

function ActionUtils:runScaleActions(node, times, scales)
    local actions = {}
    for i = 1, #scales do
        table.insert(actions, cc.ScaleTo:create(times[i], scales[i]))
    end
    local actSequence = cc.Sequence:create(unpack(actions))
    node:runAction(actSequence)
end
return ActionUtils
�0