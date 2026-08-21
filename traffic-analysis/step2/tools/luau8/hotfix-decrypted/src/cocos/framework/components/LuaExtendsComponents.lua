local Bezier = function()
    -- cocos creator engine3.8.2/cocos/core/curves/bezier.ts

    local cos = math.cos
    local acos = math.acos
    local max = math.max

    local pi = math.pi
    local tau = 2 * pi
    local sqrt = math.sqrt

    local function crt(v)
        if (v < 0) then
            return -math.pow(-v, 1 / 3)
        else
            return math.pow(v, 1 / 3)
        end
    end

    -- Modified from http://jsbin.com/yibipofeqi/1/edit, optimized for animations.
    -- The origin Cardano's algorithm is based on http://www.trans4mind.com/personal_development/mathematics/polynomials/cubicAlgebra.htm
    local function cardano(curve, x)
        -- align curve with the intersecting line:
        -- var line = {p1: {x: x, y: 0}, p2: {x: x, y: 1};
        -- var aligned = align(curve, line);
        --    and rewrite from [a(1-t)^3 + 3bt(1-t)^2 + 3c(1-t)t^2 + dt^3] form
        --    pa = aligned[0].y,
        --    pb = aligned[1].y,
        --    pc = aligned[2].y,
        --    pd = aligned[3].y;
        --    curve = [{x:0, y:1}, {x: curve[1], y: 1-curve[2]}, {x: curve[3], y: 1-curve[4]}, {x:1, y:0}];
        local pa = x - 0
        local pb = x - curve[1]
        local pc = x - curve[3]
        local pd = x - 1

        -- to [t^3 + at^2 + bt + c] form:
        local pa3 = pa * 3
        local pb3 = pb * 3
        local pc3 = pc * 3
        local d = (-pa + pb3 - pc3 + pd)
        local rd = 1 / d
        local r3 = 1 / 3
        local a = (pa3 - 6 * pb + pc3) * rd
        local a3 = a * r3
        local b = (-pa3 + pb3) * rd
        local c = pa * rd
        -- then, determine p and q:
        local p = (3 * b - a * a) * r3
        local p3 = p * r3
        local q = (2 * a * a * a - 9 * a * b + 27 * c) / 27
        local q2 = q / 2
        -- and determine the discriminant:
        local discriminant = q2 * q2 + p3 * p3 * p3
        -- and some reserved variables
        local u1
        local v1
        local x1
        local x2
        local x3

        -- If the discriminant is negative, use polar coordinates
        -- to get around square roots of negative numbers
        if discriminant < 0 then
            local mp3 = -p * r3
            local mp33 = mp3 * mp3 * mp3
            local r = sqrt(mp33)
            -- compute cosphi corrected for IEEE float rounding:
            local t = -q / (2 * r)
            local cosphi = math.min(max(t, -1), 1)
            local phi = acos(cosphi)
            local crtr = crt(r)
            local t1 = 2 * crtr
            x1 = t1 * cos(phi * r3) - a3
            x2 = t1 * cos((phi + tau) * r3) - a3
            x3 = t1 * cos((phi + 2 * tau) * r3) - a3

            -- choose best percentage
            if x1 >= 0 and x1 <= 1 then
                if (x2 >= 0 and x2 <= 1) then
                    if x3 >= 0 and x3 <= 1 then
                        return max(x1, x2, x3)
                    else
                        return max(x1, x2)
                    end
                elseif x3 >= 0 and x3 <= 1 then
                    return max(x1, x3)
                else
                    return x1
                end
            elseif (x2 >= 0 and x2 <= 1) then
                if (x3 >= 0 and x3 <= 1) then
                    return max(x2, x3)
                else
                    return x2
                end
            else
                return x3
            end
        elseif discriminant == 0 then
            -- one real root, and two imaginary roots
            u1 = q2 < 0 and crt(-q2) or -crt(q2)
            x1 = 2 * u1 - a3
            x2 = -u1 - a3

            -- choose best percentage
            if (x1 >= 0 and x1 <= 1) then
                if (x2 >= 0 and x2 <= 1) then
                    return max(x1, x2)
                else
                    return x1
                end
            else
                return x2
            end
        else
            local sd = sqrt(discriminant)
            u1 = crt(-q2 + sd)
            v1 = crt(q2 + sd)
            x1 = u1 - v1 - a3
            return x1
        end
    end

    local function bezierByTime(controlPoints, x)
        local percent = cardano(controlPoints, x) -- t
        local p1y = controlPoints[2] -- b
        local p2y = controlPoints[4] -- c
        return ((1 - percent) * (p1y + (p2y - p1y) * percent) * 3 + percent * percent) * percent
    end

    return {bezierByTime = bezierByTime}
end

local CCBezierAction = function()
    local dispatcher = cc.Director:getInstance():getEventDispatcher()
    local kCCBezierActionEvent = "kCCBezierActionEvent"

    local CCBezierAction =
        class(
        "CCBezierAction",
        function(action, curve, target)
            action:retain()
            return cc.Spawn:create(
                cc.DelayTime:create(action:getDuration()),
                cc.CallFunc:create(
                    function()
                        local event = cc.EventCustom:new(kCCBezierActionEvent)
                        event.data = {action = action, curve = curve, target = target}
                        dispatcher:dispatchEvent(event)
                    end
                )
            )
        end
    )

    local function doAction(innerAction, curve, target)
        local handle
        local duration = innerAction:getDuration() - 0.0333 -- 按帧同步，实际执行会比ActionManager略慢一两帧，此处消除下误差
        local elapsed = 0
        local firstTick = true
        handle =
            scheduler.scheduleGlobal(
            function(dt)
                if target:isNull() then
                    scheduler.unscheduleGlobal(handle)
                    innerAction:release()
                    return
                end
                if firstTick then
                    firstTick = false
                    innerAction:startWithTarget(target)
                else
                    elapsed = elapsed + dt
                end

                local updateDt = math.max(0, math.min(1, elapsed / duration))
                if updateDt ~= 0 and updateDt ~= 1 then
                    updateDt = Bezier.bezierByTime(curve, updateDt)
                end

                innerAction:update(updateDt)
                if updateDt >= 1 then
                    scheduler.unscheduleGlobal(handle)
                    innerAction:release()
                end
            end,
            0
        )
    end

    local listenerEvent =
        cc.EventListenerCustom:create(
        kCCBezierActionEvent,
        function(event)
            if event and event.data then
                doAction(event.data.action, event.data.curve, event.data.target)
            end
        end
    )
    dispatcher:addEventListenerWithFixedPriority(listenerEvent, -1)

    return CCBezierAction
end

local ComponentClass = function()
    local Component = class("Component")

    function Component:setDelegate(v)
        self._node = v
    end

    function Component:getNode()
        return self._node
    end

    function Component:dependType()
        return nil
    end

    function Component:init()
    end

    function Component:onEnter()
    end

    function Component:onExit()
    end

    function Component:onEnterTransitionFinish()
    end

    function Component:onExitTransitionStart()
    end

    function Component:onCleanup()
        self:onDestory()
    end

    function Component:onDestory()
    end

    function Component:getName()
        return self.__cname
    end

    function Component:removeSelfComponent()
        self._node:removeLuaComponent(self:getName())
    end

    function Component:onEventListenerCustom(eventID, callback)
        local listenerEvent = cc.EventListenerCustom:create(eventID, callback)
        local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
        eventDispatcher:addEventListenerWithSceneGraphPriority(listenerEvent, self._node)
        return listenerEvent
    end

    function Component:declareProperties()
        local cls = self.class
        local properties = cls.properties

        if cls.__isGetSetDefined__ then
            if properties then
                for propName, val in pairs(properties) do
                    if val then
                        local newKey = propName
                        self[newKey] = val.default
                    end
                end
            end
            return
        end

        if type(properties) == "function" then
            properties = properties()
            cls.properties = properties
        end

        local function getPropName(propName)
            return propName:gsub("^%l", string.upper)
        end

        if properties then
            for propName, val in pairs(properties) do
                if val then
                    local newKey = propName
                    self[newKey] = val.default

                    local newName = getPropName(propName)
                    cls["get" .. newName] = val.get or function()
                            return self[newKey]
                        end
                    cls["set" .. newName] = val.set or function(self, value)
                            local oldValue = self[newKey]
                            self[newKey] = value
                            local notify = val.notify
                            if notify and type(notify) == "function" then
                                if value ~= oldValue then
                                    notify(self, oldValue)
                                end
                            end
                        end
                end
            end
        end

        cls.__isGetSetDefined__ = true
    end

    return Component
end

local CompSpineActionClass = function()
    local CompSpineAction = class("CompSpineAction", ComponentClass())

    local cache = {} -- 缓存动画文件内容

    --[[
        * jsonFilePath      (必填)动画json文件路径
        * animationName     (必填)动画json文件中的动画名字
        * boneName          (选填)(位移/缩放/旋转)animationName动画指定的骨骼名
        * slotName          (选填)(颜色/透明度)animationName动画指定的插槽名
        * isLoop            (选填)是否循环，默认不循环
        * callback          (选填)播放完的回调

        * disableBezier     (选填)true禁用贝塞尔缓动，改为线性插值，默认为nil/false, 仅贝塞尔缓动失真时备用
        * useNewBezier      (选填)true使用自研贝塞尔缓动，false默认使用引擎自带贝塞尔缓动(有偏差)

        * speed             (选填)动画速率，默认1倍速
        * playOnLoad        (选填)是否加载即播放, 默认true

        * range = {}        (选填)裁剪动画播放帧数范围
            fps = 30,       动画帧率
            beginFrame = ..., 开始帧数
            endFrame = ... 结束帧数
        }
        (选填)修改动画关键帧位移数据, 如界面适配时部分场景下动画位置是需要计算得出的。
            回调参数translate是关键帧的位移表，按需修改此表，位移数值即为宿主节点的期望坐标
        * modifyPosFunc = function (translate) end
    ]]
    -- 预加载动画文件，可直接使用 cc.ext.CompSpineAction:preload(...)
    function CompSpineAction:loadFile(jsonFilePath)
        local filepath = cc.FileUtils:getInstance():fullPathForFilename(jsonFilePath)
        if filepath then
            if not cache[filepath] then
                local content = cc.FileUtils:getInstance():getStringFromFile(filepath)
                local ok, msg =
                    pcall(
                    function()
                        cache[filepath] = cjson.decode(content)
                    end
                )
            end
            return cache[filepath]
        end
    end

    function CompSpineAction:ctor(params)
        local content = self:loadFile(params.jsonFilePath)
        if not content then
            print("CompSpineAction error: json decode content is nil.")
            return
        end

        self.callback = params.callback or function()
            end

        local animation = content and content.animations and content.animations[params.animationName]

        if params.range or params.modifyPosFunc then -- 需要对动画进行裁剪或修改的，才使用拷贝副本
            animation = clone(animation)
        end

        self._bonesData = params.boneName and animation and animation.bones and animation.bones[params.boneName] or {}
        self._slotsData = params.slotName and animation and animation.slots and animation.slots[params.slotName] or {}

        self._isPlayOnLoad = params.playOnLoad ~= false
        self._isLoop = params.isLoop

        self._range = params.range
        self.modifyPosFunc = params.modifyPosFunc

        self._speed = params.speed or 1

        self._disableBezier = params.disableBezier
        self._useNewBezier = params.useNewBezier
    end

    function CompSpineAction:init()
        local iNode = self:getNode()
        self._origalPositionX, self._origalPositionY = iNode:getPosition()
        self._origalRotation = iNode:getRotationSkewX() -- 默认XY旋转角度一致，getRotation返回可能报错，比如编辑器中节点RotationX和RotationY相差0.001

        if self.modifyPosFunc and self._bonesData.translate then
            for _, v in ipairs(self._bonesData.translate) do
                v.x = v.x or 0
                v.y = v.y or 0
                v.x = v.x + self._origalPositionX
                v.y = v.y + self._origalPositionY
            end
            self.modifyPosFunc(self._bonesData.translate)
            for _, v in ipairs(self._bonesData.translate) do
                v.x = v.x - self._origalPositionX
                v.y = v.y - self._origalPositionY
            end
        end

        self:rangeFrame(self._range)

        self._speed = self._speed > 0 and self._speed or math.huge

        if self._isPlayOnLoad then
            self:play()
        end
    end

    function CompSpineAction:rangeFrame(range)
        if not range then
            return
        end
        local startT = range.beginFrame / range.fps
        local endT = range.endFrame / range.fps

        local v = self._bonesData.translate
        if v then
            for i = 1, #v do
                v[i].time = v[i].time or 0
            end
            local tt = {}
            for i = 1, #v, 1 do
                if v[i].time >= startT and v[i].time <= endT then
                    v[i].time = v[i].time - startT
                    table.insert(tt, v[i])
                end
            end
            self._bonesData.translate = tt
        end

        local v = self._bonesData.rotate
        if v then
            for i = 1, #v do
                v[i].time = v[i].time or 0
            end
            local tt = {}
            for i = 1, #v, 1 do
                if v[i].time >= startT and v[i].time <= endT then
                    v[i].time = v[i].time - startT
                    table.insert(tt, v[i])
                end
            end
            self._bonesData.rotate = tt
        end

        local v = self._bonesData.scale
        if v then
            for i = 1, #v do
                v[i].time = v[i].time or 0
            end
            local tt = {}
            for i = 1, #v, 1 do
                if v[i].time >= startT and v[i].time <= endT then
                    v[i].time = v[i].time - startT
                    table.insert(tt, v[i])
                end
            end
            self._bonesData.scale = tt
        end

        local v = self._slotsData.color
        if v then
            for i = 1, #v do
                v[i].time = v[i].time or 0
            end
            local tt = {}
            for i = 1, #v, 1 do
                if v[i].time >= startT and v[i].time <= endT then
                    v[i].time = v[i].time - startT
                    table.insert(tt, v[i])
                end
            end
            self._slotsData.color = tt
        end
    end

    function CompSpineAction:curveAction(state, action)
        if state.curve == "stepped" then
            local duration = action:getDuration()
            action:setDuration(0)
            return cc.Sequence:create(cc.DelayTime:create(duration), action)
        elseif type(state.curve) == "table" and #state.curve == 4 then
            if not self._disableBezier then
                if self._useNewBezier then
                    return CCBezierAction:create(action, state.curve, self:getNode())
                else
                    --[[
                    Cocos2d-x中贝塞尔曲线控制动画完成度的类，实现方式是错误的。在CCTweenFunction.cpp中的bezieratFunction中可以看到在求解动作完成度y时错误地把x当做了t。所有x坐标值都完全不参与计算过程。
                    但由于在这种情况下t和y是正相关的，和x也是正相关的，所以也很难看出来动画有什么问题。
                    TODO: 贝塞尔曲线进度完成度重写
                    可参考Chrome 浏览器的实现https://source.chromium.org/chromium/chromium/src/+/main:ui/gfx/geometry/cubic_bezier.cc;l=181
                ]]
                    local act = cc.EaseBezierAction:create(action)
                    act:setBezierParamer(0, state.curve[2], state.curve[4], 1)
                    return act
                end
            end
        end
        return action
    end

    function CompSpineAction:getAction()
        local actionList = {}

        -- 位移
        local v = self._bonesData.translate
        if v then
            for i = 1, #v do
                v[i].time = v[i].time or 0
                v[i].x = v[i].x or 0
                v[i].y = v[i].y or 0
            end
            local list = {}
            for i = 1, #v, 1 do
                if i == 1 and v[i].time > 0 then
                    list[#list + 1] = cc.Place:create(cc.p(self._origalPositionX, self._origalPositionY))
                    list[#list + 1] = cc.DelayTime:create(v[i].time / self._speed)
                end

                local dt = i > 1 and (v[i].time - v[i - 1].time) or 0
                dt = dt / self._speed
                local action = cc.MoveTo:create(dt, cc.p(v[i].x + self._origalPositionX, v[i].y + self._origalPositionY))
                list[#list + 1] = i > 1 and self:curveAction(v[i - 1], action) or action
            end
            actionList[#actionList + 1] = cc.Sequence:create(list)
        end

        -- 旋转
        v = self._bonesData.rotate
        if v then
            for i = 1, #v do
                v[i].time = v[i].time or 0
                v[i].angle = v[i].angle or 0
            end
            local list = {}
            for i = 1, #v, 1 do
                if i == 1 and v[i].time > 0 then
                    list[#list + 1] = cc.DelayTime:create(v[i].time / self._speed)
                end

                local dt = i > 1 and (v[i].time - v[i - 1].time) or 0
                dt = dt / self._speed
                local action = cc.RotateTo:create(dt, v[i].angle + self._origalRotation)
                list[#list + 1] = i > 1 and self:curveAction(v[i - 1], action) or action
            end
            actionList[#actionList + 1] = cc.Sequence:create(list)
        end

        -- 缩放
        v = self._bonesData.scale
        if v then
            for i = 1, #v do
                v[i].time = v[i].time or 0
                v[i].x = v[i].x or 0
                v[i].y = v[i].y or 0
            end
            local list = {}
            for i = 1, #v, 1 do
                if i == 1 and v[i].time > 0 then
                    list[#list + 1] = cc.DelayTime:create(v[i].time / self._speed)
                end

                local dt = i > 1 and (v[i].time - v[i - 1].time) or 0
                dt = dt / self._speed
                local action = cc.ScaleTo:create(dt, v[i].x, v[i].y)
                list[#list + 1] = i > 1 and self:curveAction(v[i - 1], action) or action
            end
            actionList[#actionList + 1] = cc.Sequence:create(list)
        end

        -- 颜色/透明度
        v = self._slotsData.color
        if v then
            for i = 1, #v do
                v[i].time = v[i].time or 0
            end
            local list = {}
            for i = 1, #v, 1 do
                if i == 1 and v[i].time > 0 then
                    list[#list + 1] = cc.DelayTime:create(v[i].time / self._speed)
                end

                local dt = i > 1 and (v[i].time - v[i - 1].time) or 0
                dt = dt / self._speed
                local color = cc.c3b("0x" .. v[i].color:sub(1, 2), "0x" .. v[i].color:sub(3, 4), "0x" .. v[i].color:sub(5, 6))
                local action = cc.Spawn:create(cc.TintTo:create(dt, color.r, color.g, color.b), cc.FadeTo:create(dt, "0x" .. v[i].color:sub(7, 8)))
                list[#list + 1] = i > 1 and self:curveAction(v[i - 1], action) or action
            end
            actionList[#actionList + 1] = cc.Sequence:create(list)
        end

        return cc.Spawn:create(actionList)
    end

    function CompSpineAction:play(...)
        local action = self:getAction()
        if self._isLoop then
            action = cc.RepeatForever:create(action)
        else
            action = cc.Sequence:create(action, cc.CallFunc:create(self.callback))
        end

        -- 时间轴同时播放
        local iNode = self:getNode()
        iNode:stopAllActions()
        iNode:runAction(action)
    end

    function CompSpineAction:onDestory()
        local iNode = self:getNode()
        if not iNode:isNull() then
            iNode:stopAllActions()
        end
        CompSpineAction.super.onDestory(self)
    end

    return CompSpineAction
end

local CompTableViewClass = function()
    local CompTableView = class("CompTableView", ComponentClass())

    function CompTableView:dependType()
        return {"ccui.Layout", "ccui.ListView"}
    end

    --[[
        * itemNode          (必填)子节点
        * direction         (选填)tableview的方向，默认竖直方向
        * order             (选填)排序，默认从大到小
        * bounceable        (选填)回弹效果，默认有
        * cliping           (选填)是否裁剪子节点超出视图范围的部分,默认是
        * preciseClick      (选填)精准点击，滑动时点击更精准
        * itemClickEvent    (选填)子项被点击事件回调
        * itemTouchEvent    (选填)子项被触摸事件回调
        * itemUpdateEvent   (选填)子项更新事件回调
    ]]
    function CompTableView:init(params)
        self:initTableView()

        self._itemModel = params.itemNode == nil and nil or params.itemNode
        self._preciseClick = params.preciseClick == nil and false or params.preciseClick
        self._itemClickEvent = params.itemClickEvent
        self._itemTouchEvent = params.itemTouchEvent
        self._itemUpdateEvent = params.itemUpdateEvent
        self._lastItemIndexEvent = params.lastItemEvent
        self._scrollViewDidScrollEvent = params.scrollViewDidScrollEvent

        self._tableView:setDirection(params.direction == nil and cc.SCROLLVIEW_DIRECTION_VERTICAL or params.direction)
        self._tableView:setVerticalFillOrder(params.order == nil and cc.TABLEVIEW_FILL_TOPDOWN or params.order)
        self._tableView:setBounceable(params.bounceable == nil and true or params.bounceable)
        self._tableView:setClippingToBounds(params.cliping == nil and true or params.cliping)

        self._data = {}
        self._endIndex = 0

        -- 注册监听函数
        --cell点击事件
        self._tableView:registerScriptHandler(handler(self, self.tableCellTouched), cc.TABLECELL_TOUCHED)
        --cell尺寸、大小
        self._tableView:registerScriptHandler(handler(self, self.cellSizeForTable), cc.TABLECELL_SIZE_FOR_INDEX)
        --显示出可视部分的cell
        self._tableView:registerScriptHandler(handler(self, self.tableCellAtIndex), cc.TABLECELL_SIZE_AT_INDEX)
        --cell个数
        self._tableView:registerScriptHandler(handler(self, self.numberOfCellsInTableView), cc.NUMBER_OF_CELLS_IN_TABLEVIEW)
        --滚动事件
        self._tableView:registerScriptHandler(handler(self, self.scrollViewDidScroll), cc.SCROLLVIEW_SCRIPT_SCROLL)
        self._tableView:registerScriptHandler(handler(self, self.scrollViewDidZoom), cc.SCROLLVIEW_SCRIPT_ZOOM)
    end

    function CompTableView:initTableView()
        local viewSize = self._node:getContentSize()
        local tableView = cc.TableView:create(viewSize)
        tableView:setCascadeOpacityEnabled(true)
        tableView:setAnchorPoint(cc.p(0, 0))
        tableView:setPosition(cc.p(0, 0))
        tableView:setDelegate()
        tableView:setName("CompTableView")
        self._node:addChild(tableView)
        self._tableView = tableView
        local tableViewLayout = tableView:getChildren()[1]
        if tableViewLayout then
            tableViewLayout:setName("CompTableViewLayout")
            tableViewLayout:setCascadeOpacityEnabled(true)
        end
    end

    -- 注册事件需要写到调用前面
    -- 设置单元点击事件，不需要调用，点击即可
    function CompTableView:tableCellTouched(view, cell)
    end

    -- 设置单个单元的大小
    function CompTableView:cellSizeForTable(view, idx)
        local itemSize = self._itemModel:getContentSize()
        return itemSize.width, itemSize.height
    end

    -- 设置单元节点
    function CompTableView:tableCellAtIndex(view, idx)
        local cell = view:dequeueCell() -- 取cell的队列，如果有，则直接用，没有就创建。一般创建个数为屏幕显示个数+1
        if not cell then
            cell = cc.TableViewCell:new()
            cell:setCascadeOpacityEnabled(true)

            local touchItem = function(itemNode, eventType)
                if self._itemTouchEvent then
                    self._itemTouchEvent(itemNode, eventType, self._data, itemNode:getTag())
                end
                if eventType == ccui.TouchEventType.began then
                    itemNode._touchWorldBeganPosition = itemNode:convertToWorldSpace(cc.p(itemNode:getPosition()))
                end
                if eventType ~= ccui.TouchEventType.ended then
                    return
                end

                local clicked = true
                if self._preciseClick then
                    local world = itemNode:convertToWorldSpace(cc.p(itemNode:getPosition()))
                    if math.abs(world.x - itemNode._touchWorldBeganPosition.x) > 30 or math.abs(world.y - itemNode._touchWorldBeganPosition.y) > 30 then
                        clicked = false
                    end
                else
                    clicked = true
                end
                if self._itemClickEvent and clicked then
                    self._itemClickEvent(itemNode, self._data, itemNode:getTag())
                end
            end

            local item = self._itemModel:clone()
            if not item then
                return cell
            end
            item:setCascadeOpacityEnabled(true)
            item:setTag(idx + 1)
            item:addTouchEventListener(touchItem)
            item:setSwallowTouches(false)
            item:setAnchorPoint(cc.p(0, 0))
            item:setPosition(0, 0)
            item:setName("Item")
            item:removeFromParent()
            ccui.Helper:doLayout(item)
            cell:addChild(item)
        end

        if self._itemUpdateEvent then
            local data = self._data[idx + 1]
            local item = cell:getChildByName("Item")
            item:setTag(idx + 1)
            self._itemUpdateEvent(item, data, idx + 1)
        end
        return cell
    end

    -- 设置数据总量
    function CompTableView:numberOfCellsInTableView(view)
        return #self._data
    end

    --滚动事件
    function CompTableView:scrollViewDidScroll(view)
        if self._scrollViewDidScrollEvent then
            self._scrollViewDidScrollEvent()
        end
        local listSize = self._tableView:getContentSize() -- 总大小
        local offset = self._tableView:getContentOffset() -- 取滑动偏移
        local itemSize = self._itemModel:getContentSize()
        local tableViewSize = self._node:getContentSize()

        if cc.SCROLLVIEW_DIRECTION_VERTICAL == self._tableView:getDirection() then
            -- 未测试
            if self._tableView:getVerticalFillOrder() == cc.TABLEVIEW_FILL_TOPDOWN then
                offset.y = offset.y + listSize.height -- 从起点开始偏移量
            end

            local endIdx = math.floor(offset.y / itemSize.height)
            if endIdx > #self._data then
                endIdx = #self._data
            end
            if endIdx ~= self._endIndex then
                self._endIndex = endIdx
                if self._lastItemIndexEvent then
                    self._lastItemIndexEvent(endIdx)
                end
            end
        else
            local offsetX = math.abs(offset.x)
            local tableViewWidth = math.abs(tableViewSize.width)
            local endIdx = math.floor((offsetX + tableViewWidth) / itemSize.width)
            if endIdx > #self._data then
                endIdx = #self._data
            end
            if endIdx ~= self._endIndex then
                self._endIndex = endIdx
                if self._lastItemIndexEvent then
                    self._lastItemIndexEvent(endIdx)
                end
            end
        end
    end

    function CompTableView:scrollViewDidZoom(view)
    end

    function CompTableView:updateCellAtIndex(index)
        self._tableView:updateCellAtIndex(index)
    end

    function CompTableView:cellAtIndex(index)
        return self._tableView:cellAtIndex(index)
    end

    function CompTableView:setData(data, keep)
        if keep == nil then
            keep = true
        end
        self._data = data
        local offset1 = self._tableView:getContentOffset()
        local contentsize1 = self._tableView:getContentSize()
        self:reloadData()
        if keep then
            local contentsize2 = self._tableView:getContentSize()
            local direction = self._tableView:getDirection()
            if direction == cc.SCROLLVIEW_DIRECTION_HORIZONTAL then
                if contentsize1.width > 0 then
                    self._tableView:setContentOffset(cc.p(offset1.x - (contentsize2.width - contentsize1.width), offset1.y))
                end
            else
                if contentsize1.height > 0 then
                    self._tableView:setContentOffset(cc.p(offset1.x, offset1.y - (contentsize2.height - contentsize1.height)))
                end
            end
        end
    end

    function CompTableView:reloadData()
        if self._itemModel ~= nil then
            self._tableView:reloadData()
        else
            assert(false, "CompTableView error not exists itemModel")
        end
    end

    function CompTableView:jumpToIndex(targetIndex)
        if cc.SCROLLVIEW_DIRECTION_VERTICAL == self._tableView:getDirection() then
            local itemSize = self._itemModel:getContentSize()
            local cellHeight = itemSize.height
            local offsetY = (#self._data - targetIndex) * cellHeight

            -- 计算最大允许偏移
            local contentHeight = self._tableView:getContentSize().height
            local viewHeight = self._tableView:getViewSize().height
            local maxOffset = math.max(0, contentHeight - viewHeight)
            offsetY = math.min(offsetY, maxOffset)

            self._tableView:setContentOffset(cc.p(0, -offsetY), false)
        else
            local itemSize = self._itemModel:getContentSize()
            local cellWidth = itemSize.width
            local offsetX = (targetIndex - 1) * cellWidth

            -- 计算最大允许偏移
            local contentWidth = self._tableView:getContentSize().width
            local viewWidth = self._tableView:getViewSize().width
            local maxOffset = math.max(0, contentWidth - viewWidth)
            offsetX = math.min(offsetX, maxOffset)

            self._tableView:setContentOffset(cc.p(-offsetX, 0), false)
        end
    end

    -- 每页可以显示多少个item
    function CompTableView:getPageCnt()
        local viewSize = self._node:getContentSize()
        local itemSize = self._itemModel:getContentSize()
        if cc.SCROLLVIEW_DIRECTION_VERTICAL == self._tableView:getDirection() then
            return math.ceil(viewSize.height / itemSize.height)
        else
            return math.ceil(viewSize.width / itemSize.width)
        end
    end

    return CompTableView
end

local CompScrollPicturesClass = function()
    local CompScrollPictures = class("CompScrollPictures", ComponentClass())

    function CompScrollPictures:dependType()
        return {"ccui.Layout", "ccui.ListView"}
    end

    function CompScrollPictures:init(params)
        local defaults = {
            speed = 15,
            direction = 1,
            images = {}, -- 现在支持{path="", width=, height=}格式
            gap = 0,
            camera = nil
        }
        table.merge(defaults, params)
        self._speed = defaults.speed
        self._direction = defaults.direction
        self._images = defaults.images
        self._gap = defaults.gap
        self._camera = defaults.camera

        self._containerSize = self:getNode():getContentSize()

        self._sprites = {}
        self._sizes = {}
        self._pool = {}
        self._activeSprites = {} -- 当前活动精灵
        self._currentIndex = 1 -- 当前显示的图片索引
        self._totalWidth = 0 -- 图片总长度（含间隔）

        self:_precalculateLayout()
        self:_createSprites()
        self:getNode():scheduleUpdate(handler(self, self.update))
    end

    function CompScrollPictures:_precalculateLayout()
        self._imageData = {}
        self._totalLength = 0

        for _, imgInfo in ipairs(self._images) do
            local width, height = self:_getImageSize(imgInfo)

            table.insert(
                self._imageData,
                {
                    path = imgInfo.path,
                    width = width,
                    height = height,
                    scale = imgInfo.scale
                }
            )
            -- 根据滚动方向累加长度
            if self._direction == 1 then
                self._totalLength = self._totalLength + width + self._gap
            else
                self._totalLength = self._totalLength + height + self._gap
            end
        end
        if #self._imageData > 0 then
            self._totalLength = self._totalLength - self._gap
        end
    end

    function CompScrollPictures:_getImageSize(imgInfo)
        local tempSprite = ccui.ImageView:create(imgInfo.path)
        local size = tempSprite:getContentSize()
        if imgInfo.adaptHeight then
            local scale = self._containerSize.height / size.height
            imgInfo.scale = scale
            return size.width * scale, size.height * scale
        end
        return size.width, size.height
    end

    function CompScrollPictures:_createSprites()
        local baseLength = self._direction == 1 and self._containerSize.width or self._containerSize.height
        local needCount = (baseLength / self._totalLength) + 1

        for _ = 1, needCount do
            local sprite = ccui.ImageView:create()
            sprite:setAnchorPoint(0, 1)
            sprite:retain()
            table.insert(self._pool, sprite)
        end
    end

    function CompScrollPictures:_getNextSprite()
        if #self._pool == 0 then
            local newSprite = ccui.ImageView:create()
            newSprite:setAnchorPoint(0, 1)
            newSprite:retain()
            return newSprite
        end
        return table.remove(self._pool, 1)
    end

    function CompScrollPictures:update(dt)
        if self._direction == 1 then
            self:_updateHorizontal(dt)
        else
            self:_updateVertical(dt)
        end
    end

    function CompScrollPictures:_updateHorizontal(dt)
        for _, sprite in ipairs(self._activeSprites) do
            sprite:setPositionX(sprite:getPositionX() - self._speed * dt)
            if self._camera then
                sprite:setCameraMask(self._camera)
            end
        end

        local rightMost = 0
        local rightEdge = self._containerSize.width

        for i = #self._activeSprites, 1, -1 do
            local sprite = self._activeSprites[i]
            local spriteRight = sprite:getPositionX() + sprite:getContentSize().width * sprite.scale

            if spriteRight < 0 then
                sprite:setScale(1)
                sprite:removeFromParent()
                table.insert(self._pool, sprite)
                table.remove(self._activeSprites, i)
            else
                rightMost = math.max(rightMost, spriteRight)
            end
        end

        while rightMost < rightEdge + self._speed * dt * 2 do
            local imgIndex = self._currentIndex
            self._currentIndex = (self._currentIndex % #self._images) + 1

            local newSprite = self:_getNextSprite()
            newSprite:loadTexture(self._imageData[imgIndex].path)
            local contentSize = newSprite:getContentSize()
            ccui.Helper:doLayout(newSprite)
            local scale = self._imageData[imgIndex].scale
            newSprite.scale = scale
            newSprite:setScale(scale)

            newSprite:setPosition(rightMost + self._gap, self._containerSize.height)
            if self._camera then
                newSprite:setCameraMask(self._camera)
            end
            self:getNode():addChild(newSprite)
            table.insert(self._activeSprites, newSprite)

            rightMost = rightMost + self._imageData[imgIndex].width + self._gap
        end
    end

    -- 未测试
    function CompScrollPictures:_updateVertical(dt)
        local scrollDown = true

        for _, sprite in ipairs(self._activeSprites) do
            local moveAmount = self._speed * dt * (scrollDown and 1 or -1)
            sprite:setPositionY(sprite:getPositionY() + moveAmount)
        end

        local visibleTop = self._containerSize.height
        local visibleBottom = 0
        local edgePosition = scrollDown and visibleBottom or visibleTop
        local compareFunc = scrollDown and function(pos)
                return pos < edgePosition
            end or function(pos)
                return pos > edgePosition
            end

        for i = #self._activeSprites, 1, -1 do
            local sprite = self._activeSprites[i]
            local spriteHeight = sprite:getContentSize().height
            local spriteTop = sprite:getPositionY()
            local spriteBottom = spriteTop - spriteHeight

            if (scrollDown and spriteTop < visibleBottom) or (not scrollDown and spriteBottom > visibleTop) then
                sprite:removeFromParent()
                table.insert(self._pool, sprite)
                table.remove(self._activeSprites, i)
            end
        end

        local needNew = false
        local referencePosition = 0
        if scrollDown then
            local maxY = -math.huge
            for _, sprite in ipairs(self._activeSprites) do
                maxY = math.max(maxY, sprite:getPositionY())
            end
            needNew = maxY < visibleTop + self._speed * dt * 2
            referencePosition = maxY
        else
            local minY = math.huge
            for _, sprite in ipairs(self._activeSprites) do
                minY = math.min(minY, sprite:getPositionY() - sprite:getContentSize().height)
            end
            needNew = minY > visibleBottom - self._speed * dt * 2
            referencePosition = minY
        end

        while needNew do
            local imgIndex = self._currentIndex
            self._currentIndex = (self._currentIndex % #self._images) + 1

            local newSprite = self:_getNextSprite()
            newSprite:setTexture(self._images[imgIndex])
            local imgWidth = self._imageData[imgIndex].width
            local imgHeight = self._imageData[imgIndex].height
            newSprite:setContentSize(imgWidth, imgHeight)

            if scrollDown then
                newSprite:setPosition(0, referencePosition + imgHeight + self._gap)
            else
                newSprite:setPosition(0, referencePosition - imgHeight - self._gap)
            end

            self:getNode():addChild(newSprite)
            table.insert(self._activeSprites, newSprite)

            if scrollDown then
                referencePosition = referencePosition + imgHeight + self._gap
                needNew = referencePosition < visibleTop + self._speed * dt * 2
            else
                referencePosition = referencePosition - imgHeight - self._gap
                needNew = referencePosition > visibleBottom - self._speed * dt * 2
            end
        end
    end

    return CompScrollPictures
end

local CompDropdownClass = function()
    local CompDropdown = class("CompDropdown", ComponentClass())

    function CompDropdown:dependType()
        return {"cc.Node"}
    end

    function CompDropdown:init(params)
        cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/Common/Image/DropDownComp.plist")
        local defaults = {
            defaultSelectIndex = 1,
            items = {}, -- { {text="选项1"}, ... }
            onSelect = nil -- function(index, item)
        }
        table.merge(defaults, params)
        self._config = defaults

        self._isOpen = false
        self._selectedIndex = self._config.defaultSelectIndex
        self._itemButtons = {}

        self:_createBaseUI()
        self:_createItems()
    end

    ------------------------------------------------------------
    -- 主UI创建
    ------------------------------------------------------------
    function CompDropdown:_createBaseUI()
        local node = self:getNode()

        self._listLayout = node:getChildByName("List") -- 下拉容器
        self._listItem = node:getChildByName("Item")
        local bg = node:getChildByName("BG") -- 背景
        self._dropBg = node:getChildByName("DropBg") -- 背景
        self._touchLayout = node:getChildByName("TouchLayout") -- 背景
        if not bg or not self._dropBg or not self._listLayout or not self._listItem then
            print("CompDropdown error: node error.")
            return
        end
        self._label = bg:getChildByName("ShowText") -- 文字标签
        self._arrow = bg:getChildByName("Arr") -- 箭头图标
        if not self._label or not self._arrow then
            print("CompDropdown error: node error.")
            return
        end

        self._listLayout:setScrollBarEnabled(false)
        self._listItem:setVisible(false)

        local firstText = (#self._config.items > 0 and self._config.items[self._selectedIndex] and self._config.items[self._selectedIndex].text) or ""
        self._label:setString(firstText or "")
        self._isOpen = true
        self:_toggleDropdown()

        self._arrow:setTouchEnabled(true)
        self._arrow:addClickEventListener( -- 点击展开/收起
            function()
                self:_toggleDropdown()
            end
        )

        -- self._touchLayout 是一个全屏的透明布局，用于点击收起下拉
        self._touchLayout:setContentSize(cc.size(display.width * 2, display.height * 2))
        self._touchLayout:setAnchorPoint(cc.p(0, 0))
        self._touchLayout:setPosition(cc.p(-display.width / 2 + self._node:getPositionX(), -display.height / 2 + self._node:getPositionY()))
        self._touchLayout:addClickEventListener(
            function()
                self._isOpen = true
                -- 收起下拉
                self:_toggleDropdown()
            end
        )
    end

    ------------------------------------------------------------
    -- 创建下拉项
    ------------------------------------------------------------
    function CompDropdown:_createItems()
        local containerSize = self._listItem:getContentSize()
        self._dropBg:setContentSize(cc.size(containerSize.width, 17 + #self._config.items * containerSize.height + 17))
        self._listLayout:setContentSize(cc.size(containerSize.width, 17 + #self._config.items * containerSize.height))
        self._listLayout:removeAllChildren()
        for i, item in ipairs(self._config.items) do
            local btn = self._listItem:clone()
            btn:setVisible(true)
            self._listLayout:addChild(btn)
            table.insert(self._itemButtons, btn)

            -- 文字
            local label = ccui.Helper:seekWidgetByName(btn, "DropText")
            label:setString(item.text or "")

            local selectImg = ccui.Helper:seekWidgetByName(btn, "DropSelect")
            selectImg:setVisible(i == self._selectedIndex)
            btn.selectImg = selectImg

            -- 点击事件
            btn:addClickEventListener(
                function()
                    self:_selectItem(i)
                end
            )
        end
    end

    ------------------------------------------------------------
    -- 展开/收起下拉
    ------------------------------------------------------------
    function CompDropdown:_toggleDropdown()
        self._isOpen = not self._isOpen
        self._dropBg:setVisible(self._isOpen)
        self._listLayout:setVisible(self._isOpen)
        self._arrow:setRotation(self._isOpen and 180 or 0)
        self._touchLayout:setTouchEnabled(self._isOpen)
    end

    ------------------------------------------------------------
    -- 选择选项
    ------------------------------------------------------------
    function CompDropdown:_selectItem(index)
        self._selectedIndex = index
        for i = 1, #self._itemButtons do
            self._itemButtons[i].selectImg:setVisible(false)
        end
        self._itemButtons[self._selectedIndex].selectImg:setVisible(true)
        local item = self._config.items[index]
        self._label:setString(item.text)
        self:_toggleDropdown()

        if self._config.onSelect then
            self._config.onSelect(index, item)
        end
    end

    ------------------------------------------------------------
    -- 对外接口
    ------------------------------------------------------------
    function CompDropdown:getSelectedIndex()
        return self._selectedIndex
    end

    function CompDropdown:getSelectedItem()
        return self._config.items[self._selectedIndex]
    end

    function CompDropdown:setItems(items)
        self._config.items = items
        self._listLayout:removeAllChildren()
        self._itemButtons = {}
        self:_createItems()
    end

    return CompDropdown
end

local CompBannerScrollClass = function()
    local CompBannerScroll = class("CompBannerScroll", ComponentClass())

    function CompBannerScroll:dependType()
        return {"ccui.Layout"}
    end

    --[[
        * banners           (必填) banner数据列表 {{image="路径", ...}, ...}
        * interval          (选填) 自动滚动间隔秒数，默认5
        * animDuration      (选填) 切换动画时长秒数，默认0.3
        * showIndicator     (选填) 是否显示底部指示器，默认true
        * indicatorSize     (选填) 指示器圆点半径，默认5
        * indicatorGap      (选填) 指示器圆点间距，默认8
        * indicatorBottom   (选填) 指示器距底部距离，默认15
        * indicatorNormalColor   (选填) 指示器普通颜色 cc.c4f
        * indicatorSelectedColor (选填) 指示器选中颜色 cc.c4f
        * indicatorNormalImage   (选填) 指示器未选中图片路径，设置后使用图片模式
        * indicatorSelectedImage (选填) 指示器选中图片路径
        * indicatorImagePlist    (选填) 指示器图片所在的plist路径，设置后从plist中读取
        * swipeThreshold    (选填) 滑动切换阈值比例(0~1)，默认0.2
        * onItemClick       (选填) 点击回调 function(index, bannerData)
        * onItemCreate      (选填) item创建回调 function(container, bannerData)，可在容器上添加按钮等自定义节点
    ]]
    function CompBannerScroll:init(params)
        local defaults = {
            banners = {},
            interval = 5,
            animDuration = 0.3,
            showIndicator = true,
            indicatorSize = 5,
            indicatorGap = 8,
            indicatorBottom = 15,
            indicatorNormalColor = cc.c4f(1, 1, 1, 0.4),
            indicatorSelectedColor = cc.c4f(1, 1, 1, 1),
            indicatorNormalImage = nil,
            indicatorSelectedImage = nil,
            indicatorImagePlist = nil,
            swipeThreshold = 0.2,
            onItemClick = nil,
            onItemCreate = nil
        }
        table.merge(defaults, params)
        self._config = defaults
        self._currentIndex = 1
        self._isAnimating = false
        self._autoScrollHandle = nil
        self._containerSize = self:getNode():getContentSize()
        self._bannerCount = #self._config.banners

        if self._bannerCount == 0 then
            return
        end

        self:getNode():setClippingEnabled(true)
        self:_createContent()
        if self._config.showIndicator and self._bannerCount > 1 then
            self:_createIndicator()
        end
        self:_registerTouch()
        if self._bannerCount > 1 then
            self:_startAutoScroll()
        end
    end

    function CompBannerScroll:_createContent()
        local width = self._containerSize.width
        local height = self._containerSize.height

        if self._content then
            self._content:removeFromParent()
        end

        self._content = cc.Node:create()
        self._content:setAnchorPoint(cc.p(0, 0))
        self:getNode():addChild(self._content, 0)

        if self._bannerCount > 1 then
            -- 布局: [clone_last, item1, item2, ..., itemN, clone_first]
            self:_addBannerImage(self._config.banners[self._bannerCount], 0)
            for i, banner in ipairs(self._config.banners) do
                self:_addBannerImage(banner, i)
            end
            self:_addBannerImage(self._config.banners[1], self._bannerCount + 1)
            self._content:setPositionX(-width)
        else
            self:_addBannerImage(self._config.banners[1], 0)
        end
    end

    function CompBannerScroll:_addBannerImage(bannerData, slotIndex)
        local width = self._containerSize.width
        local height = self._containerSize.height

        local container = ccui.Layout:create()
        container:setContentSize(cc.size(width, height))
        container:setAnchorPoint(cc.p(0.5, 0.5))
        container:setPosition(cc.p(slotIndex * width + width / 2, height / 2))
        container:setTouchEnabled(false)
        self._content:addChild(container)

        local img = XH.RemoteImage.new()
        img:ignoreContentAdaptWithSize(false)
        img:setTouchEnabled(false)
        img:setPosition(cc.p(width / 2, height / 2))
        img:setContentSize(cc.size(width, height))
        img:setUrl(bannerData.image)
        container:addChild(img)

        if self._config.onItemCreate then
            self._config.onItemCreate(container, bannerData)
        end
    end

    ----------------------------------------------------------------
    -- 指示器
    ----------------------------------------------------------------
    function CompBannerScroll:_useImageIndicator()
        return self._config.indicatorNormalImage and self._config.indicatorSelectedImage
    end

    function CompBannerScroll:_createIndicator()
        if self._indicatorContainer then
            self._indicatorContainer:removeFromParent()
            self._indicatorContainer = nil
        end
        if self._indicatorDraw then
            self._indicatorDraw:removeFromParent()
            self._indicatorDraw = nil
        end
        self._indicatorSprites = nil

        if self:_useImageIndicator() then
            self._indicatorContainer = cc.Node:create()
            self._indicatorContainer:setPosition(self._containerSize.width / 2, self._config.indicatorBottom)
            self:getNode():addChild(self._indicatorContainer, 10)
            self:_createIndicatorSprites()
        else
            self._indicatorDraw = cc.DrawNode:create()
            self._indicatorDraw:setPosition(self._containerSize.width / 2, self._config.indicatorBottom)
            self:getNode():addChild(self._indicatorDraw, 10)
        end
        self:_updateIndicator()
    end

    function CompBannerScroll:_loadIndicatorTexture(sprite, imagePath)
        local plist = self._config.indicatorImagePlist
        if plist then
            sprite:setSpriteFrame(imagePath)
        else
            sprite:setTexture(imagePath)
        end
    end

    function CompBannerScroll:_createIndicatorSprites()
        self._indicatorSprites = {}
        local gap = self._config.indicatorGap
        local normalImg = self._config.indicatorNormalImage
        local plist = self._config.indicatorImagePlist
        if plist then
            cc.SpriteFrameCache:getInstance():addSpriteFrames(plist)
        end
        local sampleSprite = cc.Sprite:create()
        self:_loadIndicatorTexture(sampleSprite, normalImg)
        local itemW = sampleSprite:getContentSize().width
        local itemH = sampleSprite:getContentSize().height
        sampleSprite = nil
        local totalWidth = self._bannerCount * itemW + (self._bannerCount - 1) * gap
        local startX = -totalWidth / 2 + itemW / 2
        for i = 1, self._bannerCount do
            local sp = cc.Sprite:create()
            sp:setPosition(startX + (i - 1) * (itemW + gap), itemH / 2)
            self._indicatorContainer:addChild(sp)
            self._indicatorSprites[i] = sp
        end
    end

    function CompBannerScroll:_updateIndicator()
        if self:_useImageIndicator() then
            if not self._indicatorSprites then
                return
            end
            local normalImg = self._config.indicatorNormalImage
            local selectedImg = self._config.indicatorSelectedImage
            for i, sp in ipairs(self._indicatorSprites) do
                local img = (i == self._currentIndex) and selectedImg or normalImg
                self:_loadIndicatorTexture(sp, img)
            end
        else
            if not self._indicatorDraw then
                return
            end
            self._indicatorDraw:clear()
            local r = self._config.indicatorSize
            local gap = self._config.indicatorGap
            local totalWidth = self._bannerCount * r * 2 + (self._bannerCount - 1) * gap
            local startX = -totalWidth / 2 + r
            for i = 1, self._bannerCount do
                local x = startX + (i - 1) * (r * 2 + gap)
                local color = (i == self._currentIndex) and self._config.indicatorSelectedColor or self._config.indicatorNormalColor
                self._indicatorDraw:drawDot(cc.p(x, 0), r, color)
            end
        end
    end

    ----------------------------------------------------------------
    -- 滚动控制
    ----------------------------------------------------------------
    function CompBannerScroll:_scrollToSlot(slotIndex, animated)
        local targetX = -slotIndex * self._containerSize.width
        if not animated then
            self._content:setPositionX(targetX)
            return
        end
        self._isAnimating = true
        self._content:stopAllActions()
        self._content:runAction(
            cc.Sequence:create(
                cc.MoveTo:create(self._config.animDuration, cc.p(targetX, 0)),
                cc.CallFunc:create(
                    function()
                        self._isAnimating = false
                        self:_checkBoundary()
                    end
                )
            )
        )
    end

    function CompBannerScroll:_checkBoundary()
        if self._currentIndex > self._bannerCount then
            self._currentIndex = 1
            self:_scrollToSlot(1, false)
        elseif self._currentIndex < 1 then
            self._currentIndex = self._bannerCount
            self:_scrollToSlot(self._bannerCount, false)
        end
        self:_updateIndicator()
    end

    function CompBannerScroll:scrollToNext()
        if self._isAnimating or self._bannerCount <= 1 then
            return
        end
        self._currentIndex = self._currentIndex + 1
        self:_scrollToSlot(self._currentIndex, true)
    end

    function CompBannerScroll:scrollToPrev()
        if self._isAnimating or self._bannerCount <= 1 then
            return
        end
        self._currentIndex = self._currentIndex - 1
        self:_scrollToSlot(self._currentIndex, true)
    end

    ----------------------------------------------------------------
    -- 自动滚动
    ----------------------------------------------------------------
    function CompBannerScroll:_startAutoScroll()
        self:_stopAutoScroll()
        if self._bannerCount <= 1 then
            return
        end
        self._autoScrollHandle =
            cc.Director:getInstance():getScheduler():scheduleScriptFunc(
            function()
                if self:getNode():isNull() then
                    self:_stopAutoScroll()
                    return
                end
                self:scrollToNext()
            end,
            self._config.interval,
            false
        )
    end

    function CompBannerScroll:_stopAutoScroll()
        if self._autoScrollHandle then
            cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._autoScrollHandle)
            self._autoScrollHandle = nil
        end
    end

    ----------------------------------------------------------------
    -- 触摸交互
    ----------------------------------------------------------------
    function CompBannerScroll:_registerTouch()
        local node = self:getNode()
        node:setTouchEnabled(true)
        node:setSwallowTouches(true)

        local touchBeganX = 0
        local contentBeganX = 0
        local isMoved = false

        node:addTouchEventListener(
            function(sender, eventType)
                if eventType == ccui.TouchEventType.began then
                    if self._isAnimating then
                        self._content:stopAllActions()
                        self._isAnimating = false
                    end
                    self:_stopAutoScroll()
                    touchBeganX = sender:getTouchBeganPosition().x
                    contentBeganX = self._content:getPositionX()
                    isMoved = false
                elseif eventType == ccui.TouchEventType.moved then
                    local deltaX = sender:getTouchMovePosition().x - touchBeganX
                    if math.abs(deltaX) > 10 then
                        isMoved = true
                    end
                    if self._bannerCount > 1 then
                        self._content:setPositionX(contentBeganX + deltaX)
                    end
                elseif eventType == ccui.TouchEventType.ended or eventType == ccui.TouchEventType.canceled then
                    if isMoved and self._bannerCount > 1 then
                        local deltaX = sender:getTouchEndPosition().x - touchBeganX
                        local threshold = self._containerSize.width * self._config.swipeThreshold
                        if deltaX < -threshold then
                            self:scrollToNext()
                        elseif deltaX > threshold then
                            self:scrollToPrev()
                        else
                            self:_scrollToSlot(self._currentIndex, true)
                        end
                    elseif not isMoved then
                        if self._config.onItemClick then
                            local idx = self._currentIndex
                            if idx >= 1 and idx <= self._bannerCount then
                                self._config.onItemClick(idx, self._config.banners[idx])
                            end
                        end
                    end
                    if self._bannerCount > 1 then
                        self:_startAutoScroll()
                    end
                end
            end
        )
    end

    ----------------------------------------------------------------
    -- 对外接口
    ----------------------------------------------------------------
    function CompBannerScroll:getCurrentIndex()
        return self._currentIndex
    end

    function CompBannerScroll:setBanners(banners)
        self:_stopAutoScroll()
        self._config.banners = banners
        self._bannerCount = #banners
        self._currentIndex = 1
        self._isAnimating = false

        self:_createContent()
        if self._indicatorDraw then
            self._indicatorDraw:removeFromParent()
            self._indicatorDraw = nil
        end
        if self._bannerCount == 0 then
            return
        end
        if self._config.showIndicator and self._bannerCount > 1 then
            self:_createIndicator()
        end
        if self._bannerCount > 1 then
            self:_startAutoScroll()
        end
    end

    function CompBannerScroll:onDestory()
        self:_stopAutoScroll()
        CompBannerScroll.super.onDestory(self)
    end

    return CompBannerScroll
end

cc.ext = cc.ext or {}
cc.ext.CompSpineAction = CompSpineActionClass()
cc.ext.CompTableView = CompTableViewClass()
cc.ext.CompScrollPictures = CompScrollPicturesClass()
cc.ext.CompDropDown = CompDropdownClass()
cc.ext.CompBannerScroll = CompBannerScrollClass()
��