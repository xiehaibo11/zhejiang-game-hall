local pukeAlarmClock = class("pukeAlarmClock")

function pukeAlarmClock:ctor(baseNode,pos,anchor,callBack)
    self.baseNode   = baseNode
    self.anchor     = anchor
    self.callBack   = callBack
    self.pos        = pos 

    self.tmieScheduler = nil 
    
    self:initNode()
end

function pukeAlarmClock:initNode()

    self.node = display.newNode()

    local clockBg = ccui.ImageView:create();
    clockBg:loadTexture("MatchAH/"..LYPDKResource.AlarmClockRes, ccui.TextureResType.plistType)
    local size = clockBg:getContentSize()

    self.node:setContentSize(size)
    self.node:setPosition(self.pos)
    self.node:setAnchorPoint(self.anchor)
    self.baseNode:addChild(self.node)

    local label = ccui.TextAtlas:create()  
    label:setProperty("" ,"num/num8.png" , 22, 29, "0")

    -- local label = ccui.Text:create("", LYPDKResource.FontRes, 30):setString(""):setColor(cc.c3b(0, 0, 0))
    label:setPosition(cc.p(size.width / 2- 2, size.height / 2+2))
    self.label = label
    self.clockBg = clockBg

    clockBg:addChild(label)
    self.node:addChild(clockBg)

    self.node:setVisible(false)
end 


function pukeAlarmClock:getRootNode()
    return self.node
end


-- 根据传入的时间，进行倒计时
function pukeAlarmClock:playClockTime(time,callBackTime,flag)

    time = time or 0

    callBackTime = callBackTime or 0

    self:removeScheduler()
    self.node:setVisible(true)
    self.label:setString(tostring(time))

    local currTime = 1


    local function callback()

        if self.baseNode ~= nil and currTime <= time then 
            local num = time - currTime

            if not tolua.isnull(self.label) then 
                self.label:setString(tostring(num))
            end
            -- 回调函数
            if num == callBackTime and self.callBack ~= nil then self.callBack() end 
            currTime = currTime + 1
            if flag then
                if  num == 2 then
                    g_gameGlobal:vibrate(0.1)
                end
                if num == 1 then
                    g_gameGlobal:vibrate(0.1)
                end
            end
        elseif currTime > time then 
            local absNum = math.abs(currTime-time)
            if absNum%3 == 0 or absNum == 1 then
                -- 播放闹钟摇动的动画
                self:playClockAction()
            end 
            currTime = currTime + 1
        elseif self.baseNode ~= nil then
            self:removeScheduler()
        end 

    end

    schedule(self.label , callback , 1)


end 

-- 隐藏定时器
function pukeAlarmClock:hideClockUI()
    self.node:setVisible(false)
    self:removeScheduler()
end

-- 闹钟摇摆的动画
function pukeAlarmClock:playClockAction()
    
    local actionToLeft = cc.RotateTo:create(0.05,-7)
    local actionToRight = cc.RotateTo:create(0.05,7)
    local actionBack = cc.RotateTo:create(0.05,0)
    local sequenceAction = cc.Sequence:create(actionToLeft,actionToRight)
    local repeatAction = cc.Repeat:create(sequenceAction,5)

    if type(self.clockBg) == "userdata" then 
        self.clockBg:runAction(cc.Sequence:create(repeatAction,actionBack))
    end 
end

-- 移除定时器
function pukeAlarmClock:removeScheduler()
    -- if self.tmieScheduler ~= nil then 
    --     cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self.tmieScheduler)
    --     self.tmieScheduler = nil 
    -- end 
    self.label:stopAllActions()

end

function pukeAlarmClock:removeNodes()
    if self then 
        self:removeScheduler()
        self.node:removeFromParent()
    end 
end

function pukeAlarmClock:getInitPositionY()
    return self.pos.y
end

function pukeAlarmClock:getPositionY()
    return self.node:getPositionY()
end

function pukeAlarmClock:setInitPositionY()
    self.node:setPositionY(self.pos.y)
end

function pukeAlarmClock:setPositionY(posy)
    self.node:setPositionY(posy)
end

return pukeAlarmClock