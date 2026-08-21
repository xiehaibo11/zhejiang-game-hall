local ZuoPaiView = NG.GAME.gameClass("ZuoPaiView", NG.ViewBase)
local Card = NG.GAME.gameRequire("Modules.GameMain.CardLayer.Card")

function ZuoPaiView:ctor()
    ZuoPaiView.super.ctor(self)
    self:initView()
    self:initData()
end

function ZuoPaiView:getCSBPath()
    return "cocosStudio/GoldNew/Game/HPLandlord/CSB/ZuoPai/ZuoPai.csb"
    -- return "cocosStudio/GoldNew/Game/HPLandlord/CSB/Result/ResultLayer.csb"
end

function ZuoPaiView:getBindingInfo()
    return {
        ["_KW_BOX"] = { varName = "_box" }, -- 玩家栏
        ["_KW_BOX_1"] = { varName = "_box1" }, -- 玩家栏
        ["_KW_BOX_2"] = { varName = "_box2" }, -- 玩家栏
        ["_KW_BOX_3"] = { varName = "_box3" }, -- 玩家栏
        ["_KW_Text_1"] = { varName = "_text1" }, -- 文本
        ["_KW_Text_2"] = { varName = "_text2" }, -- 文本
        ["_KW_Text_3"] = { varName = "_text3" }, -- 文本
        ["_KW_NODE_1"] = { varName = "_node1Btn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onNode1BtnClicked", style = 4 }, -- 玩家栏按钮
        ["_KW_NODE_2"] = { varName = "_node2Btn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onNode2BtnClicked", style = 4 }, -- 玩家栏按钮
        ["_KW_NODE_3"] = { varName = "_node3Btn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onNode3BtnClicked", style = 4 }, -- 玩家栏按钮
        ["_KW_BTN_OK"] = { varName = "_okBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onOkBtnClicked", style = 3 }, -- OK按钮
        ["_KW_BTN_HELP"] = { varName = "_helpBtn", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onHelpBtnClicked", style = 3 }, -- 帮助按钮
        ["_KW_BTN_HELP1"] = { varName = "_helpBtn1", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onHelpBtn1Clicked", style = 3 }, -- 一键清除
        ["_KW_BTN_HELP2"] = { varName = "_helpBtn2", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onHelpBtn2Clicked", style = 3 }, -- 添加炸弹
        ["_KW_BTN_HELP3"] = { varName = "_helpBtn3", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onHelpBtn3Clicked", style = 3 }, -- 添加炸弹
    }
end

function ZuoPaiView:initView()
    -- self._csbRoot:getChildByName("_KW_NODE_1"):addNodeEventListener()
    self._helpBtn:setVisible(false)
    self._nodeBtns = { self._node1Btn, self._node2Btn, self._node3Btn }
    self._boxs = { self._box1, self._box2, self._box3 }
    self._texts = { self._text1, self._text2, self._text3 }
    self._boxDatas = { {}, {}, {} }
    self._topCards = {}
end


function ZuoPaiView:initData()
    self:onNodeBtnClicked(1)
    local cardIDs = {
        --1~54
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
        16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29,
        30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43,
        44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54
    }

    for i = 1, 13 do
        self:initCard(cardIDs[i], -600 + i * 40, 0)
    end

    for i = 14, 26 do
        self:initCard(cardIDs[i], 0 + (i - 13) * 40, 0)
    end

    for i = 27, 39 do
        self:initCard(cardIDs[i], -600 + (i - 26) * 40, -180)
    end

    for i = 40, 52 do
        self:initCard(cardIDs[i], 0 + (i - 39) * 40, -180)
    end

    for i = 53, 54 do
        self:initCard(cardIDs[i], 100 + (i - 39) * 40, -180)
    end

    -- for i=1,18 do
    --     local cView = Card.new()
    --     cView:setCardID(cardIDs[i])
    --     cView:setScale(0.5)
    --     cView:setPosition(-600 + i*40, 0)
    --     self._box1:addChild(cView)
    -- end
end

function ZuoPaiView:initCard(id, x, y, parent)
    parent = parent or self._box
    local cView = Card.new()
    cView:setCardID(id)
    cView:setScale(0.5)
    cView:setPosition(x, y)
    parent:addChild(cView)
    if parent == self._box then
        table.insert(self._topCards, cView)
    end

    local listener = cc.EventListenerTouchOneByOne:create()
    listener:setSwallowTouches(true)
    listener:registerScriptHandler(function(touch, event)
        local node = event:getCurrentTarget()
        local locationInNode = node:convertToNodeSpace(touch:getLocation())
        local size = node:getContentSize()
        local rect = cc.rect(0, 0, size.width, size.height)

        if cc.rectContainsPoint(rect, locationInNode) then
            -- 在节点范围内单击了鼠标左键
            -- print("Mouse clicked on node")
            if parent == self._box then
                self:onTopCardClick(node)
            else
                self:onBottomCardClick(node)
            end
            return true
        end

        return false
    end, cc.Handler.EVENT_TOUCH_BEGAN)

    local eventDispatcher = cView:getEventDispatcher()
    eventDispatcher:addEventListenerWithSceneGraphPriority(listener, cView)
end


function ZuoPaiView:onTopCardClick(cView)
    if cView._bSpecialColor then
        -- cView:clearSpecialColor()
    else
        cView:showSpecialColor(cc.c3b(180, 180, 180))
        table.insert(self._boxDatas[self._selectIndex], cView:getCardID())
        self:refreshBox(self._selectIndex)
    end
end

function ZuoPaiView:onBottomCardClick(cView)
    local id = cView:getCardID()
    for i = 1, 3 do
        for j, v in ipairs(self._boxDatas[i]) do
            if v == id then
                table.remove(self._boxDatas[i], j)
                self:refreshBox(i)
                break
            end
        end
    end

    for i, v in ipairs(self._topCards) do
        if v:getCardID() == id then
            v:clearSpecialColor()
            break
        end
    end
end

-- 玩家栏按钮
function ZuoPaiView:refreshBox(index)
    self._boxs[index]:removeAllChildren()
    for i, v in ipairs(self._boxDatas[index]) do
        self:initCard(v, -500 + i * 40, 0, self._boxs[index])
    end
    self._texts[index]:setString("座位" .. index .. "：" .. #self._boxDatas[index] .. "张")
end

-- 玩家栏按钮
function ZuoPaiView:onNode1BtnClicked(send, eventType)
    self:onNodeBtnClicked(1)
end

-- 玩家栏按钮
function ZuoPaiView:onNode2BtnClicked(send, eventType)
    self:onNodeBtnClicked(2)
end

-- 玩家栏按钮
function ZuoPaiView:onNode3BtnClicked(send, eventType)
    self:onNodeBtnClicked(3)
end

-- 确定
function ZuoPaiView:onOkBtnClicked(send, eventType)
    print("查看牌型按钮")
    for i = 1, 3 do
        -- dump(self._boxDatas[i], "i")
        NG.msgManager:sendSpecfHand(self._boxDatas[i], i)
    end
    self:close()
end

-- 帮助
function ZuoPaiView:onHelpBtnClicked(send, eventType)
    print("帮助")
    -- local children = self._box:getChildren()
    -- for i, v in ipairs(children) do
    --     if v:getCardID() == id then
    --         v:clearSpecialColor()
    --         break        
    --     end
    -- end
    -- for i = 1, 3 do
    --     for j, v in ipairs(self._boxDatas[i]) do
    --         if v == id then
    --             table.remove(self._boxDatas[i], j)
    --             self:refreshBox(i)
    --             break
    --         end
    --     end
    -- end
    -- self:onTopCardClick(self._topCards[1])
    -- self:onTopCardClick(self._topCards[14])
    -- self:onTopCardClick(self._topCards[27])
    -- self:onTopCardClick(self._topCards[40])
    -- self:close()
end

-- 清除
function ZuoPaiView:onHelpBtn1Clicked(send, eventType)
    print("清除")
    for i, v in ipairs(self._topCards) do
        v:clearSpecialColor()
    end

    for i = 1, 3 do
        self._boxs[i]:removeAllChildren()
        self._boxDatas[i] = {}
        self._texts[i]:setString("座位" .. i .. "：" .. #self._boxDatas[i] .. "张")
    end
end

-- 炸弹
function ZuoPaiView:onHelpBtn2Clicked(send, eventType)
    print("炸弹")
    local startArr = { 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 1, 2 }
    for i, v in ipairs(startArr) do
        local startIndex = startArr[i]
        local flag = true
        for j = 1, 4 do
            local cView = self._topCards[startIndex + (j - 1) * 13]
            if cView._bSpecialColor then
                flag = false
                break
            end
        end
        if flag then
            for j = 1, 4 do
                local cView = self._topCards[startIndex + (j - 1) * 13]
                self:onTopCardClick(cView)
            end
            break
        end
    end
end

-- 春天
function ZuoPaiView:onHelpBtn3Clicked(send, eventType)
    print("春天")
    self:onHelpBtn1Clicked()

    self:onNodeBtnClicked(1)
    for i = 3, 6 do
        for j = 1, 4 do
            self:onTopCardClick(self._topCards[i + (j - 1) * 13])
        end
    end
    self:onTopCardClick(self._topCards[7])

    self:onNodeBtnClicked(2)
    for i = 8, 11 do
        for j = 1, 4 do
            self:onTopCardClick(self._topCards[i + (j - 1) * 13])
        end
    end
    self:onTopCardClick(self._topCards[53])

    self:onNodeBtnClicked(3)
    for i = 12, 13 do
        for j = 1, 4 do
            self:onTopCardClick(self._topCards[i + (j - 1) * 13])
        end
    end
    for i = 1, 2 do
        for j = 1, 4 do
            self:onTopCardClick(self._topCards[i + (j - 1) * 13])
        end
    end
    self:onTopCardClick(self._topCards[54])
    -- local cView = self._topCards[]
    --             self:onTopCardClick(cView)
end

-- 玩家栏按钮
function ZuoPaiView:onNodeBtnClicked(index)
    self._selectIndex = index
    for i = 1, 3 do
        if i == index then
            self._nodeBtns[i]:setColor(cc.c3b(147, 236, 176))
            self._nodeBtns[i]:setTouchEnabled(false)
        else
            self._nodeBtns[i]:setColor(cc.c3b(255, 255, 255))
            self._nodeBtns[i]:setTouchEnabled(true)
        end
    end
end

function ZuoPaiView:showSelf()
    local parent = display.getRunningScene()
    parent:addChild(self, NG.ZORDER.WINDOW)
end


return ZuoPaiView �&  