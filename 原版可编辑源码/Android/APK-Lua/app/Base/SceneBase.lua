local SceneBase = class("SceneBase", function()
    return display.newScene()
end)

function SceneBase:ctor()
    self:initLifeCycleHandler()
    self:initRootNode()
end

function SceneBase:initLifeCycleHandler()
    self:registerScriptHandler(function(state)
        if state == "enter" then
            self:onEnter()
        elseif state == "exit" then
            self:onExit()
        elseif state == "enterTransitionFinish" then
            self:onEnterTransitionFinish()
        elseif state == "exitTransitionStart" then
            self:onExitTransitionStart()
        elseif state == "cleanup" then
            self:onCleanup()
        end
    end)
end

function SceneBase:initRootNode()
    self._rootNode = cc.Layer:create()
    self._rootNode:setPosition(cc.p(0, 0))
    self._rootNode:setAnchorPoint(cc.p(0, 0))
    self._rootNode:setContentSize(cc.size(display.width, display.height))
    self:addChild(self._rootNode, 1)
end

function SceneBase:getRootNode()
    return self._rootNode
end

function SceneBase:onEnter()
    XH.bugly.setUserData(self._name, "EnterScene")
end

function SceneBase:onExit()
    XH.bugly.setUserData(self._name, "ExitScene")
end

function SceneBase:onEnterTransitionFinish()
end

function SceneBase:onExitTransitionStart()
end

function SceneBase:onCleanup()
end

return SceneBase