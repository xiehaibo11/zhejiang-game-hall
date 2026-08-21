CF.viewManager = XH.viewManager

CF.pushGameScene = function(gameScene)
    if not gameScene then
        return
    end
    XH.SceneManager:getInstance():popScene(XH.SCENE_TAG.GAME)
    XH.SceneManager:getInstance():pushScene(gameScene, XH.SCENE_TAG.GAME)
end

CF.popGameScene = function()
    XH.SceneManager:getInstance():popScene(XH.SCENE_TAG.GAME)
end

CF.addViewToGameScene = function (view, zorder, ...)
    local gameScene = XH.SceneManager:getInstance():getSceneByTag(XH.SCENE_TAG.GAME)
    if gameScene then
        gameScene:addChild(view, zorder)
    end
end

CF.isInGameScene = function()
    return XH.SceneManager:getInstance():getTopSceneTag() == XH.SCENE_TAG.GAME
end

CF.roomManager = XH.roomManager

CF.taskManager = XH.taskManager
CF.goldConfigManager = XH.goldConfigManager
CF.SpineManager = XH.SpineManager
CF.VideoManager = XH.VideoManager
