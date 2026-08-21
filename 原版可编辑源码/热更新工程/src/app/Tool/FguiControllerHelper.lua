--[[
    FguiControllerHelper
    用于 Cocos2d-x Lua 环境，从 CSB 节点的 UserData 中读取
    FairyGUI 控制器元数据，实现多控制器独立切换。

    用法:
        local rootNode = cc.CSLoader:createNode("hall/CSB/PromoteTeaUI/PromoteTeaUI.csb")
        local ctrl = FguiControllerHelper.new(rootNode)

        -- 切换控制器页面（多控制器独立切换）
        ctrl:setPage("idenCtrl", "8")          -- 切到领队副领队
        ctrl:setPage("ownerLeftCtrl", "1")      -- 切到B方案
        ctrl:setPage("ownerRightCtrl", "2")     -- 切到C方案

        -- 批量切换
        ctrl:setPages({ idenCtrl = "8", ownerLeftCtrl = "1" })

        -- 获取当前页
        local page = ctrl:getPage("idenCtrl")   -- "8"
        local label = ctrl:getPageLabel("idenCtrl", "8")  -- "领队副领队"
]]

local json = require("cjson")

local FguiControllerHelper = class("FguiControllerHelper")

local function parseUserData(node)
    local comp = node:getComponent("ComExtensionData")
    if not comp then
        return nil
    end
    local ud = comp:getCustomProperty()
    if not ud or ud == "" then
        return nil
    end
    local ok, data = pcall(json.decode, ud)
    if ok and type(data) == "table" then
        return data
    end
    return nil
end

local function collectGearNodes(parentNode, result)
    local children = parentNode:getChildren()
    if not children then return end
    for _, child in ipairs(children) do
        local data = parseUserData(child)
        if data and data.gears then
            table.insert(result, { node = child, gears = data.gears })
        end
        collectGearNodes(child, result)
    end
end

function FguiControllerHelper:ctor(rootNode)
    self._rootNode = rootNode
    self._controllers = {}   -- name -> { pages={idx=label}, selected=idx, alias=str }
    self._gearNodes = {}     -- { node=ccNode, gears=[{t,c,p,...}] }
    self._ctrlState = {}     -- name -> current page index (string)
    self._iconResolver = nil

    self:_parseRootData(rootNode)
    collectGearNodes(rootNode, self._gearNodes)
end

function FguiControllerHelper:_parseRootData(rootNode)
    local rootData = parseUserData(rootNode)
    if not rootData and rootNode:getChildrenCount() > 0 then
        local firstChild = rootNode:getChildren()[1]
        if firstChild then
            rootData = parseUserData(firstChild)
        end
    end

    if not rootData or not rootData.controllers then
        return
    end

    for _, ctrl in ipairs(rootData.controllers) do
        self._controllers[ctrl.name] = {
            pages = ctrl.pages or {},
            selected = ctrl.selected or "0",
            alias = ctrl.alias or "",
        }
        self._ctrlState[ctrl.name] = ctrl.selected or "0"
    end
end

function FguiControllerHelper:getPage(ctrlName)
    return self._ctrlState[ctrlName]
end

function FguiControllerHelper:getPageLabel(ctrlName, pageIdx)
    local ctrl = self._controllers[ctrlName]
    if ctrl and ctrl.pages then
        return ctrl.pages[tostring(pageIdx)] or ""
    end
    return ""
end

function FguiControllerHelper:getControllerNames()
    local names = {}
    for name, _ in pairs(self._controllers) do
        table.insert(names, name)
    end
    return names
end

function FguiControllerHelper:setPage(ctrlName, pageIdx)
    pageIdx = tostring(pageIdx)
    if not self._controllers[ctrlName] then
        print("[FguiCtrl] unknown controller: " .. ctrlName)
        return
    end
    self._ctrlState[ctrlName] = pageIdx
    self:_applyAll()
end

function FguiControllerHelper:setPages(pageMap)
    for ctrlName, pageIdx in pairs(pageMap) do
        if self._controllers[ctrlName] then
            self._ctrlState[ctrlName] = tostring(pageIdx)
        end
    end
    self:_applyAll()
end

function FguiControllerHelper:setIconResolver(fn)
    self._iconResolver = fn
end

-- ============================================================
--  internal
-- ============================================================

local GEAR_HANDLERS = {}

function FguiControllerHelper:_applyAll()
    for _, entry in ipairs(self._gearNodes) do
        local node = entry.node
        for _, gear in ipairs(entry.gears) do
            local currentPage = self._ctrlState[gear.c]
            if currentPage then
                local handler = GEAR_HANDLERS[gear.t]
                if handler then
                    handler(self, node, gear, currentPage)
                end
            end
        end
    end
end

function FguiControllerHelper:_isPageInList(pages, currentPage)
    for _, p in ipairs(pages) do
        if p == currentPage then return true end
    end
    return false
end

function FguiControllerHelper:_getValueForPage(gear, currentPage)
    local pages = gear.p or {}
    local values = gear.v or {}
    for i, p in ipairs(pages) do
        if p == currentPage and values[i] then
            return values[i]
        end
    end
    return gear.d or nil
end

-- gearDisplay: visible when current page is in the pages list
GEAR_HANDLERS["gearDisplay"] = function(self, node, gear, currentPage)
    node:setVisible(self:_isPageInList(gear.p, currentPage))
end

-- gearDisplay2: condition=0 visible when on page, condition=1 visible when NOT on page
GEAR_HANDLERS["gearDisplay2"] = function(self, node, gear, currentPage)
    local onPage = self:_isPageInList(gear.p, currentPage)
    if (gear.cond or "0") == "0" then
        node:setVisible(onPage)
    else
        node:setVisible(not onPage)
    end
end

GEAR_HANDLERS["gearXY"] = function(self, node, gear, currentPage)
    local val = self:_getValueForPage(gear, currentPage)
    if val then
        local x, y = val:match("([^,]+),([^,]+)")
        if x and y then
            node:setPosition(tonumber(x), tonumber(y))
        end
    end
end

GEAR_HANDLERS["gearSize"] = function(self, node, gear, currentPage)
    local val = self:_getValueForPage(gear, currentPage)
    if not val then return end
    local parts = {}
    for v in val:gmatch("[^,]+") do
        table.insert(parts, tonumber(v))
    end
    if #parts >= 2 then
        node:setContentSize(cc.size(parts[1], parts[2]))
    end
    if #parts >= 4 then
        node:setScaleX(parts[3])
        node:setScaleY(parts[4])
    end
end

GEAR_HANDLERS["gearColor"] = function(self, node, gear, currentPage)
    local val = self:_getValueForPage(gear, currentPage)
    if not val then return end
    local colorStr = val:match("#?(%x+)")
    if colorStr and #colorStr >= 6 then
        local r = tonumber(colorStr:sub(1, 2), 16)
        local g = tonumber(colorStr:sub(3, 4), 16)
        local b = tonumber(colorStr:sub(5, 6), 16)
        node:setColor(cc.c3b(r, g, b))
    end
end

GEAR_HANDLERS["gearText"] = function(self, node, gear, currentPage)
    local val = self:_getValueForPage(gear, currentPage)
    if val and node.setString then
        node:setString(val)
    end
end

-- gearIcon: requires an iconResolver callback to map ui:// URLs to real paths
GEAR_HANDLERS["gearIcon"] = function(self, node, gear, currentPage)
    local val = self:_getValueForPage(gear, currentPage)
    if not val then return end
    if self._iconResolver then
        local path = self._iconResolver(val)
        if path and node.loadTexture then
            node:loadTexture(path)
        end
    end
end

GEAR_HANDLERS["gearLook"] = function(self, node, gear, currentPage)
    local val = self:_getValueForPage(gear, currentPage)
    if not val then return end
    local parts = {}
    for v in val:gmatch("[^,]+") do
        table.insert(parts, tonumber(v))
    end
    if #parts >= 1 then
        node:setOpacity(math.floor(parts[1] * 255))
    end
end

return FguiControllerHelper
