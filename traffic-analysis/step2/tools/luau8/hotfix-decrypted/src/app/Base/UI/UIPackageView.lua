-- UIPackageView
local UIPackageView = {}

function UIPackageView.create(layout)
    function layout:initTableView()
        self._data = {}

        self._isTableViewBottom = false
        self._lineCnt = -1
        self._rowCnt = -1
        self._maxRowCnt = -1
        self._maxLineCnt = -1

        -- 设置外容器大小和item大小
        self._layoutSize = layout:getContentSize()
        -- 默认item大小，需要设置
        self._itemSize = cc.size(0, 0)

        self._preciseClick = false

        self:setCascadeOpacityEnabled(true)
        local viewSize = self:getContentSize()
        local tableView = cc.TableView:create(viewSize)
        local child = tableView:getChildren()
        for i = 1, #child do
            child[i]:setCascadeOpacityEnabled(true)
        end
        tableView:setCascadeOpacityEnabled(true)
        tableView:setAnchorPoint(cc.p(0, 0))
        tableView:setPosition(cc.p(0, 0))
        tableView:setVerticalFillOrder(cc.TABLEVIEW_FILL_TOPDOWN) -- 默认从大到小
        tableView:setDelegate()
        self:addChild(tableView)
        self._tableView = tableView

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

        self:setDirection(cc.SCROLLVIEW_DIRECTION_VERTICAL)
    end

    -- 注册事件需要写到调用前面
    -- 设置单元点击事件，不需要调用，点击即可
    function layout:tableCellTouched(view, cell)
        -- local nIndex = cell:getIdx() + 1    --cell:getIdx() 从0开始
        -- self:showDetailViewForRoomIndex(nIndex)
    end

    -- 设置单个单元的大小，如果需要控制间隔，return的height需要加上间距值
    function layout:cellSizeForTable(view, idx)
        if self._direction == cc.SCROLLVIEW_DIRECTION_HORIZONTAL then
            return self._itemSize.width, self._itemSize.height
        end
        return self._itemSize.width, self._itemSize.height
    end

    -- 设置单元节点
    function layout:tableCellAtIndex(view, idx)
        local cell = view:dequeueCell() -- 取cell的队列，如果有，则直接用，没有就创建。一般创建个数为屏幕显示个数+1
        if not cell then
            cell = cc.TableViewCell:new()
            cell:setCascadeOpacityEnabled(true)
            local itemLayout = ccui.Layout:create()
            itemLayout:setCascadeOpacityEnabled(true)
            itemLayout:setName("ItemLayout")
            -- itemLayout:setBackGroundColorType(ccui.LayoutBackGroundColorType.solid)
            -- itemLayout:setBackGroundColor(cc.c3b(20 * idx, 0, 0))
            local needItemCnt = 0
            if self._direction == cc.SCROLLVIEW_DIRECTION_HORIZONTAL then
                itemLayout:setContentSize(self._itemSize.width, self._layoutSize.height)
                needItemCnt = self._maxLineCnt
            elseif self._direction == cc.SCROLLVIEW_DIRECTION_VERTICAL then
                itemLayout:setContentSize(self._layoutSize.width, self._itemSize.height)
                needItemCnt = self._maxRowCnt
            end
            for i = 1, needItemCnt do
                local itemPanel = ccui.Layout:create()
                if itemPanel then
                    itemPanel:setCascadeOpacityEnabled(true)
                    -- itemPanel:setBackGroundColorType(ccui.LayoutBackGroundColorType.solid)
                    -- itemPanel:setBackGroundColor(cc.c3b(0, 255 - 20 * idx, 0))
                    itemPanel:setContentSize(self._itemSize)
                    itemPanel:setAnchorPoint(cc.p(0, 0))
                    itemPanel:setName("ItemPanel_" .. i)
                    if self._direction == cc.SCROLLVIEW_DIRECTION_HORIZONTAL then
                        itemPanel:setPosition(0, 0 - (i - 1) * self._itemSize.height)
                    else
                        itemPanel:setPosition((i - 1) * self._itemSize.width, 0)
                    end
                    itemLayout:addChild(itemPanel)

                    local touchItem = function(itemNode, eventType)
                        if self._itemTouchEvent then
                            self._itemTouchEvent(itemNode, eventType, self._data, itemNode:getParent():getTag())
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
                            self._itemClickEvent(itemNode, self._data, itemNode:getParent():getTag())
                        end
                    end

                    local itemClone = self._itemModel:clone()
                    if not itemClone then
                        return cell
                    end
                    itemClone:addTouchEventListener(touchItem)
                    itemClone:setSwallowTouches(false)
                    itemClone:setAnchorPoint(cc.p(0.5, 0.5))
                    itemClone:setPosition(self._itemSize.width / 2, self._itemSize.height / 2)
                    itemClone:setName("Item")
                    itemClone:removeFromParent()
                    itemPanel:addChild(itemClone)
                end
                ccui.Helper:doLayout(itemLayout)
            end
            cell:addChild(itemLayout)
        end

        local itemLayout = cell:getChildByName("ItemLayout")
        local cnt
        if self._direction == cc.SCROLLVIEW_DIRECTION_HORIZONTAL then
            cnt = self._maxLineCnt
        else
            cnt = self._maxRowCnt
        end

        local itemPanel
        local index = idx + 1 -- idx 从0开始
        -- 每一行从 (index * (cnt -1), index * cnt]
        for i = 1, cnt do
            itemPanel = itemLayout:getChildByName("ItemPanel_" .. (cnt - i + 1))
            if itemPanel then
                local totalIndex = index * cnt - i + 1
                if totalIndex > #self._data then
                    itemPanel:setVisible(false)
                else
                    itemPanel:setVisible(true)
                    itemPanel:setTag(totalIndex)
                    -- itemPanel:getChildByName("Item"):updateInfo(self._data, index * cnt - i + 1)
                    if self._itemUpdateEvent then
                        self._itemUpdateEvent(itemPanel:getChildByName("Item"), self._data, index * cnt - i + 1)
                    end
                end
            end
        end
        return cell
    end

    -- 获取X行Y列的节点
    function layout:getItemByIndex(line, col)
        local itemPanel = nil
        if self._direction == cc.SCROLLVIEW_DIRECTION_VERTICAL then
            local cell = self._tableView:cellAtIndex(line - 1)
            if cell then
                local itemLayout = cell:getChildByName("ItemLayout")
                itemPanel = itemLayout:getChildByName("ItemPanel_" .. col)
            end
        else
            local cell = self._tableView:cellAtIndex(col - 1)
            if cell then
                local itemLayout = cell:getChildByName("ItemLayout")
                itemPanel = itemLayout:getChildByName("ItemPanel_" .. line)
            end
        end

        return itemPanel
    end

    -- 设置数据总量
    function layout:numberOfCellsInTableView(view)
        if self._lineCnt > 0 then
            return self._lineCnt
        end
        if self._direction == cc.SCROLLVIEW_DIRECTION_HORIZONTAL then
            return math.ceil(#self._data / self._maxLineCnt)
        else
            return math.ceil(#self._data / self._maxRowCnt)
        end
    end

    --滚动事件
    function layout:scrollViewDidScroll(view)
        if not self._scrollToBottomCallBack then
            return
        end -- 如果没有回调，啥都不运算了

        local listSize = self._tableView:getContentSize() -- 总大小
        -- local _viewSize = self._tableView:getViewSize()      -- 可视大小
        if listSize.height == 0 then
            return
        end -- 分母不能为0
        local offset = self._tableView:getContentOffset() -- 取滑动偏移
        if self._tableView:getVerticalFillOrder() == cc.TABLEVIEW_FILL_TOPDOWN then
            offset.y = offset.y + listSize.height -- 从起点开始偏移量
        end

        local endIdx = offset.y / (self._itemSize.height + 5) + 1
        if endIdx > #self._data then
            endIdx = #self._data
        end

        -- 滑动到显示倒数第二个的时候回调
        if endIdx > #self._data - 2 and not self._isTableViewBottom then
            self._isTableViewBottom = true
            if self._scrollToBottomCallBack then
                self._scrollToBottomCallBack()
            end
        end
        if endIdx < #self._data - 2 then
            self._isTableViewBottom = false
        end
    end

    function layout:scrollViewDidZoom(view)
        --print("scrollViewDidZoom")
    end

    function layout:setData(data)
        local cnt = self:numberOfCellsInTableView()
        self._data = data

        local offset = self._tableView:getContentOffset()
        self:reloadData()

        if self._bKeep then
            if self._direction == cc.SCROLLVIEW_DIRECTION_VERTICAL then
                local _viewSize = self._tableView:getViewSize() -- 可视大小
                local cnt2 = math.ceil(_viewSize.height / self._itemSize.height)
                local maxLine = math.ceil(#self._data / self._maxRowCnt)
                if maxLine >= cnt2 then
                    -- 需要在reload后获取大小
                    local size = self._tableView:getContentSize()
                    -- self._layoutSize.height 滚动区域大小
                    -- size.height tableView的总大小
                    -- offset.y 偏移距离

                    offset.y = offset.y - (maxLine - cnt) * self._itemSize.height
                    if offset.y < self._layoutSize.height - size.height then
                        offset.y = self._layoutSize.height - size.height
                    end
                    if offset.y > 0 then
                        offset.y = 0
                    end
                    self._tableView:setContentOffset(offset)
                end
            end
        end
    end

    function layout:reloadData()
        if self._itemModel ~= nil then
            self._tableView:reloadData()
        else
            assert(false, "UIPackageView error not exists itemModel")
        end
    end

    function layout:updateCellAtIndex(index)
        self._tableView:updateCellAtIndex(index)
    end

    function layout:setDirection(direction)
        self._direction = direction
        self._tableView:setDirection(direction)
        self:calcRowDistance()
    end

    function layout:calcRowDistance()
        if self._direction == cc.SCROLLVIEW_DIRECTION_HORIZONTAL then
            self._maxRowCnt = -1
            self._maxLineCnt = math.floor(self._layoutSize.height / self._itemSize.height)
        elseif self._direction == cc.SCROLLVIEW_DIRECTION_VERTICAL then
            self._maxRowCnt = math.floor(self._layoutSize.width / self._itemSize.width)
            self._lineCnt = -1
        else
            assert(false, "UIPackageView error not support setDirection")
        end
    end

    function layout:setItemModel(itemModel)
        self._itemModel = itemModel
        self:setItemSize(self._itemModel:getContentSize())
    end

    function layout:setItemSize(itemSize)
        self._itemSize = itemSize
        self:calcRowDistance()
    end

    function layout:setItemUpdateEvent(event)
        self._itemUpdateEvent = event
    end

    -- 建议在click中添加按钮回调，配合setPreciseClick点击更精确
    function layout:setItemClickEvent(event)
        self._itemClickEvent = event
    end

    -- 建议在touch中添加按钮效果
    function layout:setItemTouchEvent(event)
        self._itemTouchEvent = event
    end

    function layout:setTouchEnabled(canTouch)
        self._tableView:setTouchEnabled(canTouch)
    end

    function layout:setScrollToBottomCallBack(callBack)
        self._scrollToBottomCallBack = callBack
    end

    -- 精准点击，滑动时点击更精准
    function layout:setPreciseClick(bPrecise)
        self._preciseClick = bPrecise
    end

    function layout:keepOffset(bKeep)
        self._bKeep = bKeep
    end

    function layout:setContentSizeNew(size)
        self._layoutSize = size
        self._tableView:setContentSize(size)
        self._tableView:setViewSize(size)
        self:calcRowDistance()
    end
    -- 初始化tableview
    layout:initTableView()

    return layout
end

return UIPackageView
�8