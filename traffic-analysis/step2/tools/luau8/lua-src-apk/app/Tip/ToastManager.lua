local ToastManager = class("ToastManager")
local ToastView = require("app.Tip.ToastView")

local DEFAULT_TIME = 4 --默认持续时间
local MAX_TOAST_COUNT = 3 --同时存在的提示条数
local DIS_EVERY_TOAST = 5 --每个toast的间距
local MOVE_UP_TIME = 0.2 --每个toast向上移动的距离
local SCROllTIPLAYER = "ScrollTipLayer"

local toastCount = 0
local toastManager = nil

function ToastManager:ctor()
    self._toastList = {}
end

function ToastManager.getInstance()
    if toastManager == nil then
        toastManager = ToastManager.new()
    end
    return toastManager
end

--显示一个toast
function ToastManager:show(str, time, pos, bImmediately)
    if str and str ~= "" then
        local len = #self._toastList
        self._maxCount =  MAX_TOAST_COUNT
        if bImmediately then
            self._maxCount = 1
        end
        if len >=  self._maxCount then
            --超过最大值,需要先移除一个
            local tmpToast = self:removeToast()
            if not tolua.isnull(tmpToast) then
                tmpToast:hideSelf()
            end
        end
        self:moveUpAni()
        self:showToast(str, time, pos)
    end
end

--toast上移动画
function ToastManager:moveUpAni()
    local deleteTab = {}
    for k, toast in ipairs(self._toastList) do
        if not tolua.isnull(toast) then
            local curPos = cc.p(toast:getPosition())
            local contentSize = toast:getSize()

            local desY = curPos.y + contentSize.height + DIS_EVERY_TOAST
            local moveAni = cc.MoveTo:create(MOVE_UP_TIME, cc.p(curPos.x, desY))
            toast:runAction(moveAni)
        else
            deleteTab[#deleteTab + 1] = k
        end
    end

    for _, index in ipairs(deleteTab) do
        self:removeToast(index)
    end
end

--显示一个toast
function ToastManager:showToast(str, time, pos)
    local maxAliveTime = time or DEFAULT_TIME
    toastCount = toastCount + 1

    local toast = ToastView.new(str, toastCount, maxAliveTime)
    local function startRemove()
        toast:hideSelf()
        self:removeToast(toast)
    end

    if pos then
        toast:setPosition(pos)
    end

    local fadeOutTime = 1 --最后一秒淡出
    local delayAct = cc.DelayTime:create(maxAliveTime - fadeOutTime)
    local updateCallAct = cc.CallFunc:create(startRemove)

    local len = #self._toastList
    local delayTime = len > 0 and MOVE_UP_TIME or 0
    local delayDisply = cc.DelayTime:create(delayTime)
    local showToastFunc = cc.CallFunc:create(function()
        toast:setVisible(true)
    end)
    
    toast:addToScene()
    self:pushToast(toast)
    local sequenceAct = cc.Sequence:create(delayDisply, showToastFunc, delayAct, cc.FadeOut:create(fadeOutTime), updateCallAct)
    toast:runAction(sequenceAct)
end

--从列表里面移除一个toast
function ToastManager:removeToast(toast)
    toast = toast or 1
    local index = 0
    if type(toast) == "userdata" then
        for toastIndex, tmpToast in ipairs(self._toastList) do
            if toast == tmpToast then
                index = toastIndex
                break
            end
        end
    elseif type(toast) == "number" then
        index = toast
    end

    return table.remove(self._toastList, index)
end

--添加一个toast到list
function ToastManager:pushToast(toast)
    local len = #self._toastList
    self._toastList[len + 1] = toast
end

function ToastManager:clearScrollTip()
    local scene = display.getRunningScene()
    local node = scene:getChildByName(SCROllTIPLAYER)
    if node then
        node:close()
    end
end

function ToastManager:showScrollTip(showType,showText)
    self:clearScrollTip()
    local tipLayer = require("app.Tip.ScrollTipLayer").new({showType = showType, showText = showText})
    tipLayer:showSelf()
end


return ToastManagerx