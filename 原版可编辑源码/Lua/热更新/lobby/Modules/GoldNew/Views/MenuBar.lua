local GoldNewMenuBar = {}
local BtnFactory = import(".BtnFactory")
local BtnGroupManager = import("..Manager.BtnGroupManager")
local LocalConfig = import("..Configs.LocalConfig")

function GoldNewMenuBar.create(layout, param)
    if not layout then
        return
    end
    function layout:init(param)
        self:setCascadeOpacityEnabled(true)
        print("GoldNewMenuBar.init")
        self._param = param
        self._size = self:getContentSize()
        self._width = self._size.width
        self._height = self._size.height
        self._anPos = self:getAnchorPoint() -- 父节点的锚点决定了子节点的排序方向和整体对齐方式
        self._startPos = cc.p(self._anPos.x * self._width, self._anPos.y * self._height)
        self._XDierection = self._anPos.x == 1 and -1 or self._anPos.x == 0.5 and 0 or 1
        self._YDierection = self._anPos.y == 1 and -1 or self._anPos.y == 0.5 and 0 or 1
        param.layoutParam = param.layoutParam or {}
        param.layoutParam.dtSize = param.layoutParam.dtSize or cc.size(-120, 0)
        param.layoutParam.btnSize = param.layoutParam.btnSize or cc.size(100, 100)
        -- param.layoutParam.gapSize = param.layoutParam.gapSize or cc.size(10, 10)
        param.layoutParam.margin = param.layoutParam.margin or {top = 0, left = 0, bottom = 0, right = 0}
        self._limitNum = param.limitNum or 99
        if param.autoLimit then -- 根据实际尺寸动态设置显示最大数量
            if param.layoutParam.dtSize.width ~= 0 then
                self._limitNum = math.floor((self._width - param.layoutParam.margin.left - param.layoutParam.margin.right) /
                                                math.abs(param.layoutParam.dtSize.width))
            elseif param.layoutParam.dtSize.height ~= 0 then
                self._limitNum = math.floor((self._height - param.layoutParam.margin.top - param.layoutParam.margin.bottom) /
                                                math.abs(param.layoutParam.dtSize.height))
            end
            self._limitNum = math.abs(self._limitNum)
        end

        self._layoutParam = param.layoutParam
        if self._anPos.x == 0 then
            self._startPos.x = self._startPos.x + self._layoutParam.margin.left
        elseif self._anPos.x == 1 then
            self._startPos.x = self._startPos.x - self._layoutParam.margin.right
        end
        if self._anPos.y == 0 then
            self._startPos.y = self._startPos.y + self._layoutParam.margin.top
        elseif self._anPos.y == 1 then
            self._startPos.y = self._startPos.y - self._layoutParam.margin.bottom
        end
        self._btns = {}
        self:removeAllChildren()
        self:createBtns(param.btnConfig)
        self:updateLayout()
    end

    function layout:onResize()
        self:init(self._param)
    end

    function layout:createBtns(btnConfig)
        local lastBtnGroupName = nil
        local group = {}
        for i = 1, #btnConfig.btns do
            local btn = BtnFactory:create(btnConfig.btns[i].id, btnConfig.areaId, btnConfig.btns[i])
            if btnConfig.btns[i].id == LocalConfig.BTN_ID.MAIL then
                XH.Bridge:getModule(LocalConfig.MP.Mail):reqCheckNewMail()
            end
            self:overwriteBtnFuncs(btn)
            local btnGroupName = btn:getGroupName()
            table.insert(self._btns, btn)
            btn:setMenu(self)
            btn:setCascadeOpacityEnabled(true)
            if btnGroupName == nil then
                btn:checkShow()
            else
                -- 是分组的按钮先隐藏，确认完所以分组按钮后一起判断显示哪一个 s1/s2
                btn:setVisible(false)
            end

            if lastBtnGroupName ~= nil and btnGroupName == lastBtnGroupName then
                -- 与上一个按钮一个组
                table.insert(group, btn)
            else
                if #group > 0 then
                    -- s2
                    if #group == 1 then
                        group[1]:checkShow()
                    else
                        BtnGroupManager:addGroup(lastBtnGroupName, group)
                        BtnGroupManager:flushBtnVisible(lastBtnGroupName)
                    end
                end
                if btnGroupName ~= nil then
                    group = {btn}
                else
                    group = {}
                end
            end

            if i == #btnConfig.btns and #group > 0 then -- 最后一个按钮跟之前是在一个组
                -- s1
                if #group == 1 then
                    group[1]:checkShow()
                else
                    BtnGroupManager:addGroup(lastBtnGroupName, group)
                    BtnGroupManager:flushBtnVisible(lastBtnGroupName)
                end
            end

            self:addChild(btn)
            lastBtnGroupName = btnGroupName
        end
    end

    function layout:updateBtn()
    end

    function layout:updateLayout()
        table.sort(self._btns, function(a, b)
            return a:getSortValue() < b:getSortValue()
        end)
        local idx = 0
        local visibleBtns = {}
        local posIncrement = cc.p(0, 0)
        local lastBtnGroupName = nil
        local lastVisibleBtn = nil
        for i = 1, #self._btns do
            local btn = self._btns[i]
            if lastBtnGroupName ~= nil and btn:getGroupName() == lastBtnGroupName and lastVisibleBtn ~= nil and lastVisibleBtn:getGroupName() ==
                lastBtnGroupName then
                -- 同一组的按钮已经有可见的，直接与其用一个位置
                btn:setIdx(idx, idx >= self._limitNum)
                btn:setPosition(lastVisibleBtn:getPosition())
            else
                if idx >= self._limitNum then
                    btn:setVisible(false, true)
                end
                if btn:isVisible() then
                    lastVisibleBtn = btn
                    local btnSize = btn:getContentSize()
                    local btnAnPos = btn:getAnchorPoint()
                    local btnStartPos = cc.p(btnAnPos.x * btnSize.width, btnAnPos.y * btnSize.height)
                    if self._XDierection == -1 then
                        btnStartPos.x = (btnAnPos.x - 1) * btnSize.width
                    elseif self._XDierection == 0 then
                        btnStartPos.x = (btnAnPos.x - 0.5) * btnSize.width
                    end
                    if self._YDierection == -1 then
                        btnStartPos.y = (btnAnPos.y - 1) * btnSize.height
                    elseif self._YDierection == 0 then
                        btnStartPos.y = (btnAnPos.y - 0.5) * btnSize.height
                    end
                    local x = self._startPos.x + idx * self._layoutParam.dtSize.width + btnStartPos.x + posIncrement.x
                    local y = self._startPos.y + idx * self._layoutParam.dtSize.height + btnStartPos.y + posIncrement.y
                    btn:setPosition(cc.p(x, y))
                    if btn.posIncrement then
                        local increment = btn:posIncrement()
                        posIncrement.x = posIncrement.x + increment.x
                        posIncrement.y = posIncrement.y + increment.y
                    end
                    btn:setIdx(idx + 1, idx >= self._limitNum)
                    idx = idx + 1
                    table.insert(visibleBtns, btn)
                else
                    btn:setIdx(idx, idx >= self._limitNum)
                end
            end
            lastBtnGroupName = btn:getGroupName()
        end
        for i = 1, #visibleBtns do
            visibleBtns[i]:showLine(i < #visibleBtns)
        end
    end

    function layout:overwriteBtnFuncs(btn)
        function btn:setVisible(visible, notUpdate)
            if visible == self:isVisible() then
                return
            end
            cc.Node.setVisible(self, visible)
            if btn.setVisibleEx then
                btn:setVisibleEx(visible)
            end
            if notUpdate ~= true then
                layout:updateLayout()
            end
        end
    end
    layout:init(param)
    return layout
end

return GoldNewMenuBar
