local RedPointManager = class("RedPointManager")
local SAVE_KEY = "RED_DOT_STATES" -- 本地存储键名

function RedPointManager:ctor()
    self.nodes = {} -- 红点节点表
    self.stateCache = {} -- 状态缓存
end

-- 节点结构
local Node = class("RedDotNode")
function Node:ctor(key, parent)
    self.key = key -- 节点唯一标识
    self.parent = parent -- 父节点
    self.children = {} -- 子节点表
    self.state = false -- 当前状态
    self.callbacks = {} -- 状态变更回调
end

-- 注册红点节点（示例：RedPointManager:registerNode("main/tab1/subtab2")）
function RedPointManager:registerNode(path)
    local keys = string.split(path, "/")
    local currentPath = ""

    for _, key in ipairs(keys) do
        local parent = self.nodes[currentPath]
        currentPath = currentPath == "" and key or currentPath .. "/" .. key

        if not self.nodes[currentPath] then
            self.nodes[currentPath] = Node.new(key, parent)
            if parent then
                table.insert(parent.children, self.nodes[currentPath])
            end
            -- 初始化状态
            local hasChildState = false
            if not self.stateCache[currentPath] then
                for childPath, state in pairs(self.stateCache) do
                    local currentPathLen = #currentPath
                    if state and string.sub(childPath, 1, currentPathLen) == currentPath and
                        string.sub(childPath, currentPathLen + 1, currentPathLen + 1) == "/" then
                        hasChildState = true
                        break
                    end
                end
            end
            self.nodes[currentPath].state = self.stateCache[currentPath] or hasChildState or false
        end
    end

    -- 更新父节点的状态
    -- self:updateParentStates(self.nodes[currentPath].parent)
end

-- 设置红点状态（带自动向上传播）
function RedPointManager:setState(path, state, bCache)
    if bCache == nil or bCache == true then
        self.stateCache[path] = state -- 更新缓存
        if state == false then
            self.stateCache[path] = nil
        end
        self:saveCache() -- 持久化存储
    end

    local node = self.nodes[path]
    if not node or node.state == state then
        return
    end

    node.state = state

    -- 向上传播状态变更
    self:updateParentStates(node.parent)

    self:triggerCallbacks(node)
end

-- 添加状态监听回调
function RedPointManager:addListener(path, callback, clear)
    local node = self.nodes[path]
    if node and type(callback) == "function" then
        if clear then
            node.callbacks = {}
        end
        table.insert(node.callbacks, callback)
        callback(node.state) -- 立即触发当前状态
    end
end

-- 移除指定路径及其所有父节点的回调函数
function RedPointManager:removeCallbacks(path)
    local keys = string.split(path, "/")
    local currentPath = ""

    for _, key in ipairs(keys) do
        currentPath = currentPath == "" and key or currentPath .. "/" .. key
        local node = self.nodes[currentPath]
        if node then
            node.callbacks = {} -- 清空回调函数列表
        end
    end
end

-- 触发回调通知
function RedPointManager:triggerCallbacks(node)
    for _, callback in ipairs(node.callbacks) do
        if type(callback) == "function" then
            callback(node.state)
        end
    end
end

-- 更新父节点的状态
function RedPointManager:updateParentStates(parent)
    while parent do
        local originalState = parent.state
        parent.state = false

        -- 父节点状态由子节点决定
        for _, child in ipairs(parent.children) do
            if child.state then
                parent.state = true
                break
            end
        end

        if parent.state ~= originalState then
            self:triggerCallbacks(parent)
            parent = parent.parent
        else
            break
        end
    end
end

-- 保存缓存到本地存储
function RedPointManager:saveCache()
    cc.UserDefault:getInstance():setStringForKey(SAVE_KEY .. XH.playerData:getNumberID(), json.encode(self.stateCache))
end

-- 从本地存储加载缓存
function RedPointManager:loadCache()
    local cacheStr = cc.UserDefault:getInstance():getStringForKey(SAVE_KEY .. XH.playerData:getNumberID(), "{}")
    self.stateCache = json.decode(cacheStr)
end

-- 移除指定路径及其所有子节点的回调函数
function RedPointManager:removeCallbacksForPathAndChildren(path, withSelf)
    local node = self.nodes[path]
    if node then
        if withSelf then
            node.callbacks = {} -- 清空当前节点的回调函数列表
        end
        for _, child in ipairs(node.children) do
            self:removeCallbacksForPathAndChildren(child.key) -- 递归移除子节点的回调函数
        end
    end
end

function RedPointManager:clear()
    self.nodes = {} -- 红点节点表
    self.stateCache = {} -- 状态缓存
end
function RedPointManager:init()
    self:loadCache() -- 初始化加载缓存
end
return RedPointManager.new()
