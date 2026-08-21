local SceneManager = class("SceneManager")

local SceneName = {
    [XH.SCENE_TAG.LOGIN] = "login.Scene",
    [XH.SCENE_TAG.LOBBY] = "lobby.Scene",
}

function SceneManager:ctor()
    self._sceneStack = {}
    self._designInfoStack = {}
end

function SceneManager:getInstance()
    if not SceneManager._instance then
        SceneManager._instance = SceneManager.new()
    end
    return SceneManager._instance
end

--创建窗口挂载节点
function SceneManager:createPopView()
    local popNode = cc.Layer:create()
    popNode:setPosition(cc.p(0, 0))
    popNode:setAnchorPoint(cc.p(0, 0))
    popNode:setContentSize(cc.size(display.width, display.height))
    return popNode
end

function SceneManager:getPopNode()
    if not self._popNode then
        self._popNode = self:createPopView()
        self._popNode:retain()
        self:updatePopNode()
    end
    return self._popNode
end

function SceneManager:getPopNodeByClassName(cname)
    local popChildren = self:getPopNode():getChildren()
    for i=1,#popChildren do
        if popChildren[i].__cname == cname then
            return popChildren[i]
        end
    end
    return nil
end

function SceneManager:getPopNodeByTag(tag)
    local popChildren = self:getPopNode():getChildren()
    for i=1,#popChildren do
        if popChildren[i]:getTag() == tag then
            return popChildren[i]
        end
    end
    return nil
end

function SceneManager:getPopNodeByName(name)
    local popChildren = self:getPopNode():getChildren()
    for i=1,#popChildren do
        if popChildren[i]:getName() == name then
            return popChildren[i]
        end
    end
    return nil
end

---更新节点
function SceneManager:updatePopNode()
    local popNode = self:getPopNode()
    if not popNode then
        return
    end
    local scene = self:getTopScene()
    if not scene or scene == popNode:getParent() then
        return
    end
    if scene:getTag() ~= XH.SCENE_TAG.LOGIN and scene:getTag() ~= XH.SCENE_TAG.LOBBY and scene:getTag() ~= XH.SCENE_TAG.TEAHOUSE then
        return
    end

    popNode:removeSelf()
    scene:addChild(popNode, XH.ZORDER.SCENE_POPNODE)
end

function SceneManager:getSceneByTag(sceneTag)
    for _, scene in pairs(self._sceneStack) do
        if scene:getTag() == sceneTag then
            return scene
        end
    end
    return nil
end

function SceneManager:getTopScene()
    return self._sceneStack[#self._sceneStack]
end

function SceneManager:getTopSceneTag()
    if self:getTopScene() then
        return self:getTopScene():getTag()
    end
    return -1
end

function SceneManager:isHaveRunningScene()
    if display.getRunningScene() then
        return true
    end
    if self:getTopScene() then
        return true
    end
    return false
end

function SceneManager:pushSceneByTag(sceneTag)
    if not SceneName[sceneTag] then
        return
    end

    local scene = require(SceneName[sceneTag]).new()
    if not scene then
        return
    end

    self:pushScene(scene, sceneTag)
end

function SceneManager:pushScene(scene, sceneTag)
    if not scene or not sceneTag then
        return
    end
    if self:getTopSceneTag() == sceneTag then
        return
    end
    scene:setTag(sceneTag)
    self._sceneStack[#self._sceneStack + 1] = scene
    
    if self:isHaveRunningScene() then
        cc.Director:getInstance():pushScene(scene)
    else
        cc.Director:getInstance():runWithScene(scene)
    end

    self:updatePopNode()
end

function SceneManager:popScene(sceneTag)
    local topSceneTag = self:getTopSceneTag()
    if sceneTag and sceneTag ~= topSceneTag then
        return
    end
    XH.viewManager:clearSceneViews(topSceneTag)

    cc.Director:getInstance():popScene()

    self._sceneStack[#self._sceneStack] = nil

    self:updatePopNode()
end

function SceneManager:clearScene()
    for _, scene in pairs(self._sceneStack) do
        XH.viewManager:clearSceneViews(scene:getTag())
    end
    self._sceneStack = {}
end

function SceneManager:replaceSceneByTag(sceneTag)
    if not SceneName[sceneTag] then
        return
    end

    local scene = require(SceneName[sceneTag]).new()
    if not scene then
        return
    end

    self:replaceScene(scene, sceneTag)
end

function SceneManager:replaceScene(scene, sceneTag)
    if not scene or not sceneTag then
        return
    end
    self:clearScene()
    scene:setTag(sceneTag)
    self._sceneStack[#self._sceneStack + 1] = scene

    if self:isHaveRunningScene() then
        cc.Director:getInstance():replaceScene(scene)
    else
        cc.Director:getInstance():runWithScene(scene)
    end

    self:updatePopNode()
end

-- 进入/切换场景
function SceneManager:enterScene(sceneTag, isPushScene)
    XH.bugly.buglyLog("enterScene", tostring(sceneTag) or "enterScene")
    if self:getTopScene() and self:getTopScene():getTag() == sceneTag then
        return
    end
    if isPushScene then
        self:pushSceneByTag(sceneTag)
    else
        self:replaceSceneByTag(sceneTag)
    end
end

-- 退出场景
function SceneManager:exitScene(sceneTag, isPopScene)
    XH.bugly.buglyLog("exitScene", tostring(sceneTag) or "exitScene")
    if not self:getTopScene() or self:getTopScene():getTag() ~= sceneTag then
        return
    end
    if isPopScene then
        self:popScene()
    end
end

return SceneManager