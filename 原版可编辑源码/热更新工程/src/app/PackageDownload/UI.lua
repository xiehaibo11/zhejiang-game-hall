local View = class("View")

local director = cc.Director:getInstance()
local eventDispatcher = director:getEventDispatcher()
local tool = require("app.PackageDownload.Tool")

function View:getCSBPath()
    return "cocosStudio/hall/CSB/PackageUpdate/ForceUpdate.csb"
end

function View:ctor(bPushScene)
    local scene = cc.Scene:create()
    local layer = cc.Layer:create()
    layer:setName("Layer")
    self._layer = layer
    scene:addChild(layer)

    if director:getRunningScene() then
        if bPushScene then
            self._bPushScene = bPushScene
            director:pushScene(scene)
        else
            director:replaceScene(scene)
        end
    else
        director:runWithScene(scene)
    end

    self:initEvent()
end

function View:initEvent()
    self._listenerEventProcess = cc.EventListenerCustom:create("TOTALUPDATE_PROCESS", handler(self, self.onProcess))
    eventDispatcher:addEventListenerWithFixedPriority(self._listenerEventProcess, 1)

    self._listenerEventClose = cc.EventListenerCustom:create("TOTALUPDATE_CLOSE", handler(self, self.onClose))
    eventDispatcher:addEventListenerWithFixedPriority(self._listenerEventClose, 1)
end

function View:dtor()
    if self._listenerEventProcess then
        eventDispatcher:removeEventListener(self._listenerEventProcess)
    end
    if self._listenerEventClose then
        eventDispatcher:removeEventListener(self._listenerEventClose)
    end
end

function View:start(closefunc)
    self._closefunc = closefunc
    self._csbRoot = cc.CSLoader:createNodeWithVisibleSize(self:getCSBPath())
    self._csbRoot:setAnchorPoint(0, 0)

    self._layer:addChild(self._csbRoot)

    self:initUI()
end

function View:initUI()
    self._progressPanel = tool.findNodeByName(self._csbRoot, "_PROGRESS_PANEL")
    self._progressPanel:setVisible(false)
    -- 更新进度界面
    self._progressBar = tool.findNodeByName(self._csbRoot, "_PROGRESS_BAR")
    self._progressBar:setPercent(100)
end

function View:onProcess(event)
    self._progressPanel:setVisible(true)
    self._progressBar:setPercent(event.process * 100)
end

function View:onClose(event)
    -- 关闭界面，返回结果
    self:dtor()
    if event.callback ~= false then
        if self._closefunc then
            self._closefunc()
        end
    end
    if self._bPushScene then
        director:popScene()
    end
end

return View
