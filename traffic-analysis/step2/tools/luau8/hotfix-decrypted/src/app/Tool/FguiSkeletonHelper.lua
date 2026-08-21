--[[
    FguiSkeletonHelper
    用于 Cocos2d-x Lua 环境，从 CSB 节点的 UserData 中读取
    骨骼动画元数据（DragonBones / Spine），自动创建并挂载动画。

    用法:
        local rootNode = cc.CSLoader:createNode("hall/CSB/PromoteIceBreakUI/PromoteIceBreakUI.csb")

        -- 自动扫描所有子节点，加载骨骼动画
        local skeletons = FguiSkeletonHelper.bindAll(rootNode)

        -- 或手动加载单个节点
        local node = rootNode:getChildByName("n39")
        local armature = FguiSkeletonHelper.bind(node)

        -- 获取已绑定的骨骼动画节点
        local armature = FguiSkeletonHelper.getArmature(node)
]]

local json = require("cjson")

local FguiSkeletonHelper = {}

local ARMATURE_CHILD_TAG = 99887

local function parseUserData(node)
    local comp = node:getComponent("ComExtensionData")
    if not comp then return nil end
    local ud = comp:getCustomProperty()
    if not ud or ud == "" then return nil end
    local ok, data = pcall(json.decode, ud)
    if ok and type(data) == "table" then
        return data
    end
    return nil
end

local function loadDragonBones(node, info)
    if not db or not db.CCFactory then
        print("[FguiSkeleton] DragonBones runtime not available")
        return nil
    end

    local factory = db.CCFactory:getFactory()
    if not factory then return nil end

    local skePath = info.path .. info.ske
    local texPath = info.tex and info.tex ~= "" and (info.path .. info.tex) or nil

    local dragonBonesName = info.ske:match("(.+)_ske%.json")
                         or info.ske:match("(.+)%.json")
                         or ""

    factory:loadDragonBonesData(skePath)
    if texPath then
        factory:loadTextureAtlasData(texPath)
    end

    local armatureDisplay = factory:buildArmatureDisplay("Armature", dragonBonesName)
    if not armatureDisplay then
        armatureDisplay = factory:buildArmatureDisplay("Armature")
    end

    if not armatureDisplay then
        print("[FguiSkeleton] Failed to build DragonBones: " .. dragonBonesName)
        return nil
    end

    local animation = info.animation or "animation"
    local times = info.loop and 0 or 1
    armatureDisplay:getAnimation():play(animation, times)

    local size = node:getContentSize()
    armatureDisplay:setPosition(size.width / 2, size.height / 2)
    armatureDisplay:setTag(ARMATURE_CHILD_TAG)
    node:addChild(armatureDisplay)

    return armatureDisplay
end

local function loadSpine(node, info)
    if not sp or not sp.SkeletonAnimation then
        print("[FguiSkeleton] Spine runtime not available")
        return nil
    end

    local jsonPath = info.path .. info.json
    local atlasPath = info.atlas and info.atlas ~= "" and (info.path .. info.atlas) or nil
    local scale = info.scale or 1

    if not cc.FileUtils:getInstance():isFileExist(jsonPath) then
        print("[FguiSkeleton] Spine json not found: " .. jsonPath)
        return nil
    end
    if atlasPath and not cc.FileUtils:getInstance():isFileExist(atlasPath) then
        print("[FguiSkeleton] Spine atlas not found: " .. atlasPath)
        return nil
    end

    local spineNode = sp.SkeletonAnimation:create(jsonPath, atlasPath, scale)
    if not spineNode then
        print("[FguiSkeleton] Failed to create Spine animation")
        return nil
    end

    spineNode:update(0)

    if info.skin and info.skin ~= "" then
        spineNode:setSkin(info.skin)
        spineNode:setSlotsToSetupPose()
    end

    local animation = info.animation or "animation"
    local loop = info.loop ~= false
    spineNode:setAnimation(0, animation, loop)

    local size = node:getContentSize()
    spineNode:setPosition(size.width / 2, size.height / 2)
    spineNode:setTag(ARMATURE_CHILD_TAG)
    node:addChild(spineNode)

    return spineNode
end

--- 为单个节点加载骨骼动画（从 UserData 中读取配置）
--- @param node cc.Node
--- @return userdata|nil  返回 DragonBones CCArmatureDisplay 或 Spine SkeletonAnimation
function FguiSkeletonHelper.bind(node)
    local data = parseUserData(node)
    if not data or not data.skeleton then
        return nil
    end

    local info = data.skeleton
    if info.type == "dragonbones" then
        return loadDragonBones(node, info)
    elseif info.type == "spine" then
        return loadSpine(node, info)
    end

    return nil
end

--- 递归扫描所有子节点，自动加载骨骼动画
--- @param rootNode cc.Node
--- @return table  {nodeName = armatureOrSpine, ...}
function FguiSkeletonHelper.bindAll(rootNode)
    local results = {}
    local function scan(parent)
        local children = parent:getChildren()
        if not children then return end
        for _, child in ipairs(children) do
            local result = FguiSkeletonHelper.bind(child)
            if result then
                results[child:getName()] = result
            end
            scan(child)
        end
    end
    scan(rootNode)
    return results
end

--- 获取已绑定到节点上的骨骼动画子节点
--- @param node cc.Node
--- @return userdata|nil
function FguiSkeletonHelper.getArmature(node)
    return node:getChildByTag(ARMATURE_CHILD_TAG)
end

return FguiSkeletonHelper
