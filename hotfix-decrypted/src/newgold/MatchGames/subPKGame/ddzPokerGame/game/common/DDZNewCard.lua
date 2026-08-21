local _M = {}
local DDZPublicFunc = import(".DDZPublicFunc")
local GameCMD        = import(".DDZCMD")

local PNG_POSTFIX = ".png"

local function getPath(name)
    local type = g_gameGlobal:getPKCardType()
    local resPath = string.format("poker/paimian/PaiType%d/",type,type)
    return resPath..name
end

local card_attr = {
    CS = {[0] = "cs_1",[1] = "cs_2",[2] = "cs_3",[3] = "cs_4"},             -- CS = Color Small(小花色)
    CB = {[0] = "cb_1",[1] = "cb_2",[2] = "cb_3",[3] = "cb_4"},             -- CB = Color Big (大花色)
    CV = {[0] = "r_" ,[1] = "b_" ,[2] = "r_" ,[3] = "b_"},                  -- CV = Color Value (牌值颜色)
    BG = {[1] = "bg_face",[2] = "bg_back"},                                 -- 背景
    MASK = "mask.png",
    POS = { cv = cc.p(30,155),cs = cc.p(30,110),cb = cc.p(92,53),joker = cc.p(65,95)}
}

-- 判断区域是否在节点上
local function isInNodeLocation(node,location)

    local position = node:convertToNodeSpace(location)

    local size = node:getContentSize()

    local rect = cc.rect(0,0,size.width,size.height)

    return cc.rectContainsPoint(rect,position)
end 


-- 获取绘制牌的信息
-- 参数1：牌的数据；
-- 参数2：牌的正面（type = 1），背面（type = 2）
function _M.getCardInfoByData(data,kind)

    local info = {}

    if kind ~= GameCMD.DRAW_BGCARD and kind ~= GameCMD.DRAW_FACECARD or (kind == GameCMD.DRAW_FACECARD and data == nil) then 
        assert(false,"DDZNewCard getCardInfoByData 错误：分析牌信息参数不正确~！")
    end 

    info.BG = getPath(card_attr.BG[kind]..PNG_POSTFIX)

    if kind == GameCMD.DRAW_BGCARD then

        return info

    elseif kind == GameCMD.DRAW_FACECARD then 

        if data == GameCMD.MAX_JOKER then 
            info.CB = getPath("b_jok.png")
        elseif data == GameCMD.MINI_JOKER then 
            info.CB = getPath("s_jok.png")
        else 
            local color = math.modf(data/16)

            local value = data%16

            info.CS = getPath(card_attr.CS[color]..PNG_POSTFIX)              -- 对应小花色图片

            info.CB = getPath(card_attr.CB[color]..PNG_POSTFIX)              -- 对应大花色图片

            info.CV = getPath(card_attr.CV[color]..value..PNG_POSTFIX)       -- 对应牌值的颜色
        end 
    end 

    return info
end

local function newSprite(name)

    local  sprite = cc.Sprite:createWithSpriteFrameName("Match/" .. name)

    if not iskindof(sprite,"cc.Sprite") then 
        _M.loadCardRes()
        sprite = cc.Sprite:createWithSpriteFrameName("Match/" .. name)
    end 

    return sprite
end

-- 根据参数生成正面牌或背面牌
-- data参数1：牌的数据；
-- kind参数2：牌的正面（type = 1），背面（type = 2）
function _M.newCard(data,kind)

    local node = display.newNode():setAnchorPoint(0.5,0.5)

    local _data, _kind = data,kind

    local _isSelect = false

    local size = 0

    function node:update(data,kind)

        local info = _M.getCardInfoByData(_data,_kind)

        if kind == GameCMD.DRAW_BGCARD then      -- 加载背景
            
            local cardBg = newSprite(info.BG)

            size = cardBg:getContentSize()

            cardBg:setPosition(size.width/2, size.height/2)

            node:setContentSize(size)

            node:addChild(cardBg)

        elseif kind == GameCMD.DRAW_FACECARD then         -- 加载正面花色

            -- 背景
            local cardBg = newSprite(info.BG):addTo(node)
            
            size = cardBg:getContentSize()

            node:setContentSize(size)

            cardBg:setPosition(size.width/2, size.height/2)

            -- 大小鬼判断
            if data == GameCMD.MAX_JOKER or data == GameCMD.MINI_JOKER then 
                newSprite(info.CB):move(card_attr.POS.joker):addTo(cardBg)
            else 
                -- 牌值
                newSprite(info.CV):move(card_attr.POS.cv):addTo(cardBg)
                -- 小花色
                newSprite(info.CS):move(card_attr.POS.cs):addTo(cardBg)
                -- 大花色
                newSprite(info.CB):move(card_attr.POS.cb):addTo(cardBg)
            end 

            -- 遮罩层(后续调整mask遮罩大小)
            local shadow = newSprite(getPath(card_attr.MASK)):setAnchorPoint(0,0):move(1,1):setOpacity(50):setVisible(false):setScaleX(27):setScaleY(38.3):addTo(node)
            
            shadow:setName("shadow")
        end 
    end

    -- 是否显示牌的阴影
    function node:setShadowStatus(status)
        local shadow = node:getChildByName("shadow")
        shadow:setVisible(status)
    end

    -- 改变牌选中状态 
    function node:setSelectStatus(status)
        if _isSelect == status then return end
        _isSelect = status

        local moveDist = _isSelect and 30 or -30
        node:setPosition(node:getPositionX(),node:getPositionY()+moveDist)
    end

    -- 是否选中
    function node:isSelected()
        return _isSelect
    end 

    -- 获取牌值
    function node:getCardInfo()
        return _data
    end

    node:update(data,kind)

    return node, size
end

-- 手牌监听事件
-- 参数1：手牌根节点
-- 参数2：点击回调函数
function _M.addCardListenerEvent(rootNode,onClick)
    local beganPoint = cc.p(0,0)
    local beganID = 0
    local rootNodeSize = rootNode:getContentSize()
    local startClickDir = 0                          -- 开始点击的位置，0为初始值，1为左边，2为右边

    -- 开始
    local function onTouchBegan(touch,event)
        local target = event:getCurrentTarget()
        local location = touch:getLocation()
        local childs = rootNode:getChildren()
        beganID = 0
        startClickDir = 0 
        beganPoint = location

        -- 相对根节点的坐标位置
        local posForRtNode = rootNode:convertToNodeSpace(location)

        -- 先判断在是否在根节点区域
        if isInNodeLocation(rootNode,location) then 
            -- 有效点击判断

            local card = 0
            for k, v in ipairs(childs or {}) do 
                if isInNodeLocation(v,location) then 
                    if beganID < k then 
                        beganID = k 
                        card = v:getCardInfo()
                    end 
                end 
            end 

            return true 
        elseif posForRtNode.x < 0 and posForRtNode.y < rootNodeSize.height then            -- 落点在牌的左边，且不超过牌的高度
            beganID = 1
            startClickDir = 1
            do return true end 
        elseif posForRtNode.x > rootNodeSize.width and posForRtNode.y < rootNodeSize.height then      -- 落点在牌的右边，且不超过牌的高度
            beganID = #childs
            startClickDir = 2
            return true 
        else
            local isInNode = false
            for k, v in pairs(childs) do 
                if isInNodeLocation(v,location) then 
                    isInNode = true 
                    if beganID < k then 
                        beganID = k 
                    end 
                end
            end 

            if isInNode == false then 
                for k, v in pairs(childs) do 
                    v:setSelectStatus(false)
                end 
            end 

            if onClick then onClick({}) end 
            return isInNode
        end
    end

    -- 移动
    local function onTouchMoved(touch,event)
        local target = event:getCurrentTarget()
        local location = touch:getLocation()
        local childs = rootNode:getChildren()
        local moveID = 0
        local moveClickDir = 0
        local tmpStartID = beganID
    
        -- 相对根节点的坐标位置
        local posForRtNode = rootNode:convertToNodeSpace(location)

        -- 计算从开始落点到当前移动位置所有选中的有效牌
        if isInNodeLocation(rootNode,location) then         -- 首先判断落点是否在根节点区域类
            for k, v in ipairs(childs) do 
                if isInNodeLocation(v,location) then 
                    if moveID < k then 
                        moveID = k
                    end 
                end 
            end 
        elseif posForRtNode.x < 0 and posForRtNode.y < rootNodeSize.height then                        -- 落点在牌的左边，且不超过牌的高度
            moveClickDir = 1
            -- 要排除开始按下的ID在左边第一个，但结束位置在左边牌外区域的情况
            if startClickDir ~= moveClickDir then moveID = 1 end 
        elseif posForRtNode.x > rootNodeSize.width and posForRtNode.y < rootNodeSize.height then      -- 落点在牌的右边，且不超过牌的高度
            moveClickDir = 2
            -- 要排除开始按下的ID在右边第一个，但结束位置在右边牌外区域的情况
            if startClickDir ~= moveClickDir then moveID = #childs end 
        else 
            for k, v in pairs(childs) do 
                if isInNodeLocation(v,location) then 
                    if moveID < k then 
                        moveID = k 
                    end 
                end
            end 
        end 
            
        -- 若开始ID大于结束ID则交换两值，方便下面遍历
        if tmpStartID > moveID then tmpStartID,moveID = moveID,tmpStartID end 

        if tmpStartID ~= 0 and moveID ~= 0 then 
            for k, v in ipairs(childs) do 
                if k >= tmpStartID and k <= moveID then 
                    v:setShadowStatus(true)
                else
                    v:setShadowStatus(false)
                end
            end 
        else
            for k, v in ipairs(childs) do 
                v:setShadowStatus(false)
            end 
        end
        
        
    end 

    -- 结束
    local function onTouchEnded(touch,event)
        local target = event:getCurrentTarget()
        local location = touch:getLocation()
        local childs = rootNode:getChildren()
        local endID = 0
        local endClickDir = 0                           -- 开始点击的位置，0为初始值，1为左边，2为右边

        -- 相对根节点的坐标位置
        local posForRtNode = rootNode:convertToNodeSpace(location)

        -- 首先判断落点是否在根节点区域类
        if isInNodeLocation(rootNode,location) then 
            -- 有效判断
            local index,card = 0,nil
            for k, v in ipairs(childs) do 
                if isInNodeLocation(v,location) then 
                    if index < k then 
                        index = k 
                        card = v:getCardInfo()
                    end 
                end 
            end 
            endID = index 
        elseif posForRtNode.x < 0 and posForRtNode.y < rootNodeSize.height then                        -- 落点在牌的左边，且不超过牌的高度
            endClickDir = 1
            -- 要排除开始按下的ID在左边第一个，但结束位置在左边牌外区域的情况
            if startClickDir ~= endClickDir then endID = 1 end 
        elseif posForRtNode.x > rootNodeSize.width and posForRtNode.y < rootNodeSize.height then      -- 落点在牌的右边，且不超过牌的高度
            endClickDir = 2
            -- 要排除开始按下的ID在右边第一个，但结束位置在右边牌外区域的情况
            if startClickDir ~= endClickDir then endID = #childs end 
        else 
            for k, v in pairs(childs) do 
                if isInNodeLocation(v,location) then 
                    if endID < k then 
                        endID = k 
                    end 
                end
            end 
        end 

        -- 若开始ID大于结束ID则交换两值，方便下面遍历
        if beganID > endID then beganID,endID = endID,beganID end 

        -- 当开始的点击和结束的点击都有效
        local selectCard = {}
        if beganID ~= 0 and endID ~= 0 then 
            for k,v in ipairs(childs) do 
                if k >= beganID and k <= endID then 
                    -- 改变所选牌的状态————即：状态取反
                    local status = v:isSelected()
                    v:setSelectStatus(not status)
                end 
            end
        else
            for k, v in ipairs(childs) do 
                v:setSelectStatus(false)
            end    
        end 

        -- 选出所有选中的牌
        for k, v in pairs(childs) do 
            -- 只有是选中状态才插入到牌中去
            if v:isSelected() then 
                local value = v:getCardInfo()
                table.insert(selectCard,value)
            end 
            v:setShadowStatus(false)
        end 

        if onClick then onClick(selectCard) end 
    end 
    
    -- 添加监听事件
    local listener = cc.EventListenerTouchOneByOne:create()
    listener:setSwallowTouches(false)
    listener:registerScriptHandler(onTouchBegan,cc.Handler.EVENT_TOUCH_BEGAN)
    listener:registerScriptHandler(onTouchMoved,cc.Handler.EVENT_TOUCH_MOVED)
    listener:registerScriptHandler(onTouchEnded,cc.Handler.EVENT_TOUCH_ENDED)

    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()

    eventDispatcher:addEventListenerWithSceneGraphPriority(listener,rootNode)
  
end


-- 参数1：kind = 1 返回手牌间隙；kind = 2， 返回出牌间隙
function _M.getCardPos(kind,num,size,tatol)

    tatol = tatol or 0
    local rowDefin = 8                  -- 出牌时，每行最大张数定义
    local position = cc.p(0,0)
    local w_const = size.width/3 + 20
    local h_const = size.height*(2/5) + 5
    local t_const = 0

    if tatol > rowDefin then 
        t_const = h_const
    elseif tatol > 2*rowDefin then 
        t_const = 2*h_const
    end 

    -- 斗地主可能牌超过17张，这时需要动态调整宽度(临时先这样吧)
    if tatol > 17 and kind == 1 then 
        w_const = (display.width - size.width)/(tatol+1)
    end 

    if kind == 1 then 
        position.x = w_const*(num-1)
    elseif kind == 2 then 
        w_const = w_const - 10 
        local rowNum = math.ceil(num/rowDefin)
        local columnNum = num%rowDefin == 0 and rowDefin or num%rowDefin
        position.x = w_const*(columnNum-1)
        position.y = t_const-(rowNum-1)*h_const
    end 

    return position
end

function _M.loadCardRes()
    local type = g_gameGlobal:getPKCardType()
    local resPath = string.format("poker/paimian/PaiType%d/PaiType%d",type,type)
    display.loadSpriteFrames(resPath..".plist",resPath..".png")
end 

-- 功能：根据牌的table数据，根据参数条件绘制手牌
-- 参数1：手牌数据
-- 参数2：创建背景还是正面（model == 1 ,正面；model == 2，背面）；
-- 参数3：是否添加监听事件；
-- 参数4：监听回调函数
function _M.newHandCardPanel(handData,model,isAddListen,onClick)

    _M.loadCardRes()

     -- 根节点
    local nodes = display.newNode()

    if handData == nil or type(handData) ~= "table" or next(handData) == nil then 
        return nodes
    end 
    -- 手牌数量
    local num = #handData

    local currPos = 0
     -- 根节点
    local nodes = display.newNode()

    local card = nil

    -- 首先判断模式
    if model == GameCMD.DRAW_FACECARD then 
        for i=1, num do 
            -- 创造一张牌
            card = _M.newCard(handData[i],1)
            -- 获取牌的大小
            local size = card:getBoundingBox()
            -- 获取牌的位置
            local pos = _M.getCardPos(1,i,size,num)
            -- 添加到节点
            card:setPosition(pos):setAnchorPoint(0,0):addTo(nodes)
            -- 设置容器大小
            nodes:setContentSize(size.width+pos.x,size.height)
        end 
        -- 根据条件是否添加监听事件
        if isAddListen == true then _M.addCardListenerEvent(nodes,onClick) end

    elseif model == GameCMD.DRAW_BGCARD then 
        -- 创造一张牌
        card = _M.newCard(handData[1],GameCMD.DRAW_BGCARD)
        -- 获取牌的大小
        local size = card:getContentSize()
        -- 是否添加牌数文字
        local labelNum = _M.getTxtLabelByNum(num)
        card:addChild(labelNum)
        labelNum:setPosition(size.width/2,size.height/2):setScale(5)
        -- 添加到节点
        card:setPosition(cc.p(0,0)):setAnchorPoint(0,0):addTo(nodes)
        -- 设置容器大小
        nodes:setContentSize(size.width,size.height)
    end

    nodes:setName("HandCard")
    return nodes
end

-- 绘制手牌
function _M.newOpenResultCardPanel(handData, outData)
    
    local num = #outData + #handData
    
     -- 根节点
    local nodes = display.newNode()

    local card, cardSize = nil, nil 

    if outData == nil or handData == nil or type(outData) ~= "table" or type(handData) ~= "table" then 
        print("newOutCardPanel 错误：绘制手牌参数错误~！" .. debug.traceback())
        return display.newNode()
    end 

    local max_width = 0
    local max_height = 0
    
    -- 打出牌
    for i = 1, #outData do 

        card = _M.newCard(outData[i],1)

        local size = card:getContentSize()

        local pos = _M.getCardPos(1, i, size, num)

        card:setPosition(pos):setAnchorPoint(0, 0):addTo(nodes)

        if max_width < size.width + pos.x then
            max_width = size.width + pos.x
        end
        
        card:setShadowStatus(true, 70)
    end
    
    local outCount = #outData
    
    -----
    -- 手牌
    for i = 1, #handData do 

        card = _M.newCard(handData[i],1)

        local size = card:getContentSize()

        local pos = _M.getCardPos(1, i + outCount, size, num)

        card:setPosition(pos):setAnchorPoint(0, 0):addTo(nodes)

        if max_width < size.width + pos.x then
            max_width = size.width + pos.x
        end
    end

    -- 设置容器大小
    nodes:setContentSize(max_width, max_height)

    return nodes;
end

-- 提示回调
function _M.setCardStatusByTipsData(rootNode,tipData)

    if tipData == nil  or type(tipData) ~= "table" or next(tipData) == nil then return end 

    local nodes = rootNode:getChildByName("HandCard")

    assert(nodes ~= nil," DDZNewCard setCardStatusByTipsData 错误：绘制提示时，参数1格式错误~！")

    local childs = nodes:getChildren()

    -- 重置牌
    for k, v in pairs(childs or {}) do 
        v:setSelectStatus(false)
    end 

    -- 将提示中的数据牌，站立起来       (先只支持一副牌)
    for k, v in ipairs(childs or {}) do 
        for i=1, #tipData do 
            local cardValue = v:getCardInfo()
            if tipData[i] == cardValue then
                v:setSelectStatus(true)
                break
            end 
        end 
    end 
end 

-- 绘制手牌
function _M.newOutCardPanel(outData)
    
    local num = #outData

    local currPos = 0
     -- 根节点
    local nodes = display.newNode()

    local card,cardSize = nil,nil 

    if outData == nil or type(outData) ~= "table" or next(outData) == nil then 
        assert(false,"newOutCardPanel 错误：绘制手牌参数错误~！")
    end 

    local max_width = 0
    local max_height = 0

    for i=1, num do 

        card = _M.newCard(outData[i],1)

        local size = card:getContentSize()

        local pos = _M.getCardPos(2,i,size,num)

        card:setPosition(pos):setAnchorPoint(0,0):addTo(nodes)

        if max_width < size.width+pos.x then max_width = size.width+pos.x end 

        if max_height < size.height+math.abs(pos.y) then max_height = size.height+math.abs(pos.y) end 
    end 

    -- 设置容器大小
    nodes:setContentSize(max_width,max_height)

    return nodes;
end

-- 返回数值是参数的Label类型的数字
function _M.getTxtLabelByNum(num)

    local label = ccui.Text:create("", "res/fonts/fzcyjt.ttf", 18):setAnchorPoint(cc.p(0.5, 0.5))

    if not label then return end 
 
    label:setString(tostring(num))

    return label
end

return _M

   �P  