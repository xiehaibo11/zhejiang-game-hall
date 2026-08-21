local CaiYunStrategyModule = CF.gameClass("CaiYunStrategyModule", CF.ModuleBase)
CaiYunStrategyModule.NUIPRAYSTRATEGY = "NUIPRAYSTRATEGY"

function CaiYunStrategyModule:ctor()
    CaiYunStrategyModule.super.ctor(self)
    self._prayStrategy = {id = 0, discount = 0.5, propids = {}, name = "限时2.0折", now = os.time(), endTime = os.time() + 20}
    self:reqPrayStrategy()
end

function CaiYunStrategyModule:getProxyEvents()
    return {
        {module = CF.roomData, eventKeyName = "EVENT_GAMESTART_CHANGED", callBack = "onGameStartChanged"}
    }
end

function CaiYunStrategyModule:onGameStartChanged(event)
    -- event.msg.oldState, event.msg.nowState
    if not event or not event.msg then
        return
    end
    if event.msg.oldState ~= event.msg.nowState then
        if not event.msg.nowState then
            -- self:onGameEnd()
        else
            self:onGameStart()
        end
    end
end

function CaiYunStrategyModule:onGameStart()
    self:reqPrayStrategy()
end

function CaiYunStrategyModule:getPrayStrategy()
    return self._prayStrategy
end

--客户端随机设置本次免费道具id
function CaiYunStrategyModule:setPrayStrategyPropid(propids)
    self._prayStrategy.propids = propids
end

function CaiYunStrategyModule:getPrayStrategyPropid()
    return self._prayStrategy.propids or {}
end

function CaiYunStrategyModule:getServerTime()
    if not self._prayStrategy.dt then
        return os.time()
    end
    return os.time() - self._prayStrategy.dt
end

function CaiYunStrategyModule:getPrayStrategyID()
    return (self._prayStrategy.id > 0 and self:getPrayLeftTime() > 0) and self._prayStrategy.id or -1
end

function CaiYunStrategyModule:getPrayLeftTime()
    if self._prayStrategy.id <= 0 then
        return 0
    end
    return self._prayStrategy.endTime - self:getServerTime()
end

function CaiYunStrategyModule:getDiscount()
    return self:getPrayStrategyID() > 0 and self._prayStrategy.discount or 1
end

function CaiYunStrategyModule:isActProp(propid)
    return self:getPrayStrategyID() > 0 and not CF.game:getModule("CaiYunPropNew"):isLong(propid)
    -- if self:getPrayStrategyID() > 0 then
    --     local propids = self:getPrayStrategyPropid()
    --     for i=1, #propids do
    --         if propids[i] == propid then
    --             return true
    --         end
    --     end
    -- end
    -- return false
end

function CaiYunStrategyModule:resetPrayStrategy()
    self._prayStrategy.id = -1
    self:dispatchEvent({name = self.NUIPRAYSTRATEGY})
end

function CaiYunStrategyModule:reqPrayStrategy(delay)
    -- if self._simulatorCallSid then
    --     cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._simulatorCallSid)
    -- end
    -- self._simulatorCallSid = nil
    -- self._simulatorCallSid =
    --     cc.Director:getInstance():getScheduler():scheduleScriptFunc(
    --     function()
    --         self:onLimitedTimeOfferReply(self._prayStrategy, callfunc) --test
    --         cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._simulatorCallSid)
    --     end,
    --     1,
    --     false
    -- )
    CF.reqGetCaiYunStrategy(self, self.onLimitedTimeOfferReplyTemp)
    if delay then
        if self._delayCallSid then
            cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._delayCallSid)
        end
        self._delayCallSid = nil
        self._delayCallSid =
            cc.Director:getInstance():getScheduler():scheduleScriptFunc(
            function()
                self:reqPrayStrategy()
                cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._delayCallSid)
            end,
            delay,
            false
        )
    end
end

function CaiYunStrategyModule:onLimitedTimeOfferReplyTemp(req, type, data, callfunc)
    if type == XH.Req.TYPE.SUCCESS then
        self:onLimitedTimeOfferReply(data, callfunc)
    end
end

function CaiYunStrategyModule:onLimitedTimeOfferReply(data, callfunc)
    data.now = data.now == "" and 0 or tonumber(data.now)
    self._prayStrategy = data
    self._prayStrategy.endTime = data.can_discount_endtime
    self._prayStrategy.discount = data.discount / 100
    self._prayStrategy.id = data.strategy_id
    -- 计算与服务端时间差
    self._prayStrategy.dt = os.time() - self._prayStrategy.now

    -- 计算距离当前祈祷周期结束的剩余时间
    local leftTime = self._prayStrategy.endTime - self._prayStrategy.now

    -- 如果距离当前祈祷周期结束还有时间，则安排一次定时器，在周期结束后重新请求策略
    if (leftTime > 0) then
        if self._endCallSid then
            cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._endCallSid)
        end
        self._endCallSid = nil
        self._endCallSid =
            cc.Director:getInstance():getScheduler():scheduleScriptFunc(
            function()
                -- self._prayStrategy.id = 0
                self:reqPrayStrategy()
                cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._endCallSid)
            end,
            leftTime + 1,
            false
        )
    end

    -- 通知UI层更新以显示最新的祈祷策略信息
    self:dispatchEvent({name = self.NUIPRAYSTRATEGY})

    -- 如果提供了回调函数，则执行该回调函数，并传入最新的祈祷策略作为参数
    if callfunc then
        callfunc(self._prayStrategy)
    end
end
return CaiYunStrategyModule
