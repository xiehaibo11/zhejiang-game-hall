local GoldSceneManager = class("GoldSceneManager")

function GoldSceneManager:getTopScene()
    return XH.SceneManager:getInstance():getTopScene()
end

function GoldSceneManager:getTopSceneTag()
    return XH.SceneManager:getInstance():getTopSceneTag()
end

function GoldSceneManager:pushScene(scene, tag)
    if not scene then
        return
    end
    XH.SceneManager:getInstance():pushScene(scene, tag)
end

function GoldSceneManager:popScene(tag)
    XH.SceneManager:getInstance():popScene(tag)
end

function GoldSceneManager:addViewToScene(view, zorder, tag, ...)
    local gameScene = XH.SceneManager:getInstance():getSceneByTag(tag)
    if gameScene then
        gameScene:addChild(view, zorder)
    end
end

return GoldSceneManager
