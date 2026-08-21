-- 大部分逻辑沿用原先PopWindowsView，保证风信后台配置不用大范围修改
local RadialTimeItem = class("RadialTimeItem", XH.ViewBase)


function RadialTimeItem:getCSBPath()
    return "cocosStudio/hall/CSB/PopSystemProgress.csb"
end

function RadialTimeItem:getBindingInfo()
    return {
        ["_KW_TIME_BG"] = {varName="_panelBG",onTouch = "onTouchEventFunction"},
        ["_KW_POP_SYS_TMIE_ITEM"] = {varName = "_item"}
    }
end


function RadialTimeItem:ctor(param)
    if not param then
        return
    end
    self._callBack = param.callback
    self._timeClose = param.timeClose or 5
    self._totalTime = self._timeClose
	RadialTimeItem.super.ctor(self, param)
    self:initUI()
end

function RadialTimeItem:onTouchEventFunction(send, eventType)
    if type(self._callBack) == "function" then
        self._callBack()
    end  
end

function RadialTimeItem:initUI()
    --创建一个进度条图片精灵 需要一个空心圆形的图片
	local sprite = cc.Sprite:createWithSpriteFrameName("pop_sys_time_pro.png")
	--创建进度条
	local circleProgressBar = cc.ProgressTimer:create(sprite)
	--设置类型
	circleProgressBar:setType(cc.PROGRESS_TIMER_TYPE_RADIAL)
	--指定父节点
	self._item:addChild(circleProgressBar)
	--指定位置
    circleProgressBar:setAnchorPoint(cc.p(0.5, 0.5))
    circleProgressBar:setPosition(self._item:getContentSize().width/2,self._item:getContentSize().height/2)
	--还可以指定层级 名字
	circleProgressBar:setLocalZOrder(100)
	--设置进度
	circleProgressBar:setPercentage(100)
    circleProgressBar:setReverseDirection(true)
    local sequence = cc.Sequence:create(cc.CallFunc:create( function()
        if self._timeClose > 0 then
            self._timeClose = self._timeClose - 0.1
            circleProgressBar:setPercentage(self._timeClose / self._totalTime * 100)
        else
            self._callBack()
        end                  
    end ), cc.DelayTime:create(0.1))
    local action = cc.RepeatForever:create(sequence)
    self._item:runAction(action)
end

return RadialTimeItem