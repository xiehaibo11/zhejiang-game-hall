--- 请神倒计时节点：负责自身视觉 / 挂点 / 每秒刷新与自清理
-- 调用方只需 new(headNode, getLeftFunc) 即可；挂接与定时全部在本节点内完成。
local QingShenLeftTime = class("QingShenLeftTime", XH.ViewBase)
local Define = require("lobby.Modules.QingShen.Define")

function QingShenLeftTime:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/PropPush/LeftTimeNode.csb"
end

function QingShenLeftTime:getBindingInfo()
    return {
        ["_KW_TEXT_LEFTTIME"] = {varName = "_leftTime"},
    }
end

--- 非全屏控件：避免 ViewBase 将 contentSize 撑到整屏
function QingShenLeftTime:isFullScreen()
    return false
end

--- 构造：完成 CSB 加载与 UI 绑定之后，若传入 headNode 则自动挂接，若传入回调则自动开启倒计时
-- @param headNode    可选，目标 chairId 对应的头像节点；传入则自动去重并挂到头像正上方
-- @param getLeftFunc 可选，function()->number 每秒取当前剩余秒数；传入则自动开启倒计时
-- @param propId      可选，当前神明道具 id；用于倒计时相对 HEAD_ANI_POS 的偏移与文案色
-- 注：归 0 时的"隐藏循环动画 + 移除本节点"等外部联动清理，统一由 QingShenModule 归口处理，这里不再负责
function QingShenLeftTime:ctor(headNode, getLeftFunc, propId)
    QingShenLeftTime.super.ctor(self)
    self._propId = tonumber(propId)
    if headNode and not tolua.isnull(headNode) then
        self:_attachTo(headNode)
    end
    if type(getLeftFunc) == "function" then
        self:startCountdown(getLeftFunc)
    end
end

--- 剩余时效格式化
-- < 1 小时：按分钟向下取整（不足 1 分钟保底显示 1 分钟）
-- >=1 小时：按小时向下取整（N ~ N+1 小时之间统一显示 N 小时）
-- <=0   ：显示 0 分钟（节点即将销毁的兜底）
local function _formatDuration(seconds)
    seconds = math.floor(tonumber(seconds) or 0)
    if seconds <= 0 then
        return "0分钟"
    end
    if seconds < 3600 then
        local m = math.floor(seconds / 60)
        if m < 1 then
            m = 1
        end
        return string.format("%d分钟", m)
    end
    local h = math.floor(seconds / 3600)
    return string.format("%d小时", h)
end

--- 设置剩余时效
-- @param leftTime number 剩余秒数（自动格式化为"N分钟/N小时"）；也兼容已格式化字符串
function QingShenLeftTime:setLeftTime(leftTime)
    if not self._leftTime or tolua.isnull(self._leftTime) then
        return
    end
    local text
    if type(leftTime) == "number" then
        text = _formatDuration(leftTime)
    else
        text = tostring(leftTime or "")
    end
    self._leftTime:setString(text)
end

--- 去重并挂到 headNode 头像正上方（内部方法）
--- 位置 = Define.HEAD_ANI_POS + HEAD_LEFT_TIME_OFFSET[_BY_PROP]，与头像循环动画联动
function QingShenLeftTime:_attachTo(headNode)
    local old = headNode:getChildByName(Define.NODE_NAME)
    if old and not tolua.isnull(old) then
        old:removeFromParent()
    end
    self:setName(Define.NODE_NAME)
    self:setAnchorPoint(cc.p(0.5, 0))
    self:setPosition(Define.getHeadLeftTimePos(self._propId))
    if self._propId == Define.QingShenPropId.WenShuPuSa and self._leftTime then
        self._leftTime:setTextColor(cc.c3b(11, 100, 169))
    end
    -- self:setScale(0.7)
    headNode:addChild(self, 100)
end

--- 开启每秒刷新的倒计时；剩余秒 <=0 时仅停定时器，节点的移除由外部（QingShenModule）统一处理
-- @param getLeftFunc function()->number 每次返回当前剩余秒数
-- @return self
function QingShenLeftTime:startCountdown(getLeftFunc)
    if type(getLeftFunc) ~= "function" then
        return self
    end
    self:stopCountdown()
    local scheduler = cc.Director:getInstance():getScheduler()
    local this = self
    local function refresh()
        if not this or tolua.isnull(this) then
            return
        end
        local left = tonumber(getLeftFunc()) or 0
        this:setLeftTime(left)
        if left <= 0 then
            this:stopCountdown()
        end
    end
    refresh()
    self._countdownScheduleId = scheduler:scheduleScriptFunc(refresh, 1.0, false)
    return self
end

--- 停止倒计时定时器（幂等）
function QingShenLeftTime:stopCountdown()
    if self._countdownScheduleId then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._countdownScheduleId)
        self._countdownScheduleId = nil
    end
end

--- 覆盖 ViewBase 生命周期钩子：节点退出时兜底撤销定时器
function QingShenLeftTime:onExit()
    self:stopCountdown()
end

return QingShenLeftTime
