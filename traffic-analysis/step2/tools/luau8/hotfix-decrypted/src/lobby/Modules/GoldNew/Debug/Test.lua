-- test_red_point_manager.lua
local RedPointManager = import("..Manager.RedPointManager")
local BagConfig = import("..SubModules.Bag.Config")

-- 辅助函数：打印测试结果
local function assertEqual(actual, expected, message)
    if actual == expected then
        print("PASS: " .. message)
    else
        print("FAIL: " .. message .. " (Expected: " .. tostring(expected) .. ", Got: " .. tostring(actual) .. ")")
    end
end

-- 辅助函数：打印测试结果（布尔值）
local function assertTrue(actual, message)
    if actual then
        print("PASS: " .. message)
    else
        print("FAIL: " .. message)
    end
end

-- 辅助函数：打印测试结果（布尔值）
local function assertFalse(actual, message)
    if not actual then
        print("PASS: " .. message)
    else
        print("FAIL: " .. message)
    end
end

local function RedPointManagerTest()
    -- 创建 RedDotManager 实例
    local manager = RedPointManager

    -- 测试 registerNode
    manager:registerNode("main/tab1/subtab1")
    manager:registerNode("main/tab1/subtab2")
    assertTrue(manager.nodes["main"], "main node should be registered")
    assertTrue(manager.nodes["main/tab1"], "main/tab1 node should be registered")
    assertTrue(manager.nodes["main/tab1/subtab2"], "main/tab1/subtab2 node should be registered")

    -- 测试父节点和子节点关系
    assertFalse(manager.nodes["main"].parent, "main node should have no parent")
    assertTrue(manager.nodes["main/tab1"].parent == manager.nodes["main"], "main/tab1 node should have main as parent")
    assertTrue(manager.nodes["main/tab1/subtab2"].parent == manager.nodes["main/tab1"], "main/tab1/subtab2 node should have main/tab1 as parent")

    -- 测试 setState
    manager:setState("main/tab1/subtab2", true)
    assertTrue(manager.nodes["main/tab1/subtab2"].state, "main/tab1/subtab2 state should be true")
    assertTrue(manager.nodes["main/tab1"].state, "main/tab1 state should be true due to propagation")
    assertTrue(manager.nodes["main"].state, "main state should be true due to propagation")

    -- 测试状态传播
    manager:setState("main/tab1/subtab1", true)
    manager:setState("main/tab1/subtab2", false)
    assertFalse(manager.nodes["main/tab1/subtab2"].state, "main/tab1/subtab2 state should be false")
    assertFalse(manager.nodes["main/tab1"].state, "main/tab1 state should be false due to propagation")
    assertFalse(manager.nodes["main"].state, "main state should be false due to propagation")

    -- 测试 addListener
    local triggerCount = 0
    manager:addListener("main/tab1/subtab2", function(state)
        triggerCount = triggerCount + 1
    end)
    assertTrue(triggerCount == 1, "Listener should be triggered immediately with current state")

    manager:setState("main/tab1/subtab2", true)
    assertTrue(triggerCount == 2, "Listener should be triggered again when state changes")

    -- 测试 saveCache 和 loadCache
    manager:setState("main/tab1/subtab2", true)
    manager:saveCache()

    local newManager = RedPointManager.new()
    newManager:loadCache()
    newManager:registerNode("main/tab1/subtab2")
    assertTrue(newManager.nodes["main/tab1/subtab2"].state, "main/tab1/subtab2 state should be loaded correctly")

    -- 测试用例 1: 正常情况
    local function test_getTagPath_normal()
        local tag = "table_bg"
        local expected = {"装扮/牌桌"}
        local result = BagConfig:getTagPath(tag)
        assert(#result == #expected, "Expected " .. #expected .. " paths, got " .. #result)
        for i, path in ipairs(expected) do
            assert(result[i] == path, "Expected path " .. path .. ", got " .. result[i])
        end
        print("Test 1 passed")
    end

    -- 测试用例 2: 不存在的 tag
    local function test_getTagPath_nonexistent()
        local tag = "nonexistent_tag"
        local expected = {}
        local result = BagConfig:getTagPath(tag)
        assert(#result == #expected, "Expected " .. #expected .. " paths, got " .. #result)
        print("Test 2 passed")
    end

    -- 测试用例 3: 多个匹配的 tag
    local function test_getTagPath_multiple_matches()
        local tag = "prop_emoji"
        local expected = {"互动/表情包"}
        local result = BagConfig:getTagPath(tag)
        assert(#result == #expected, "Expected " .. #expected .. " paths, got " .. #result)
        for i, path in ipairs(expected) do
            assert(result[i] == path, "Expected path " .. path .. ", got " .. result[i])
        end
        print("Test 3 passed")
    end

    -- 测试用例 4: 空 tag
    local function test_getTagPath_empty_tag()
        local tag = ""
        local expected = {}
        local result = BagConfig:getTagPath(tag)
        assert(#result == #expected, "Expected " .. #expected .. " paths, got " .. #result)
        print("Test 4 passed")
    end

    -- 运行所有测试用例
    test_getTagPath_normal()
    test_getTagPath_nonexistent()
    test_getTagPath_multiple_matches()
    test_getTagPath_empty_tag()
end
-- 150697 洗手
-- local allPath = XH.Bridge:getModule("GoldNew"):getRedPointPath("bag", 150697)
-- for i,v in ipairs(allPath) do
--     -- manager:registerNode(v)
--     manager:setState(v, true)
-- end
-- local allPath = XH.Bridge:getModule("GoldNew"):getRedPointPath("bag", 101543)
-- manager:registerNode("bag/互动")
-- for i,v in ipairs(allPath) do
--     -- manager:registerNode(v)
--     manager:setState(v, true)
-- end
-- dump(manager.nodes)
print("All tests completed.")
1