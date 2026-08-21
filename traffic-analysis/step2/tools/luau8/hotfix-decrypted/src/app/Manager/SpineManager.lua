local SpineManager = class("SpineManager")

function SpineManager:preloadAni(path, filename)
    if path == nil then
        return
    end
    if filename == nil then
        return
    end

    local jsonFile = path .. filename .. ".json"
    local atlas = path .. filename .. ".atlas"
    if not cc.FileUtils:getInstance():isFileExist(jsonFile) then
        return
    end
    sp.SkeletonAnimation:create(jsonFile, atlas)
end

function SpineManager:playAni(node, path, filename, aniName, loop, callBack, eventData, clear)
    if path == nil or node == nil then
        return
    end
    if filename == nil then
        return
    end

    local jsonFile = path .. filename .. ".json"
    local atlas = path .. filename .. ".atlas"
    local trackid = XH.askIDManager:getAskID()
    if not cc.FileUtils:getInstance():isFileExist(jsonFile) then
        return
    end
    local nodeAni = sp.SkeletonAnimation:create(jsonFile, atlas)
    nodeAni:registerSpineEventHandler(
        function(event)
            if eventData then
                for k, v in pairs(eventData) do
                    if event.eventData.name == k then
                        if v then
                            v()
                        end
                    end
                end
            end
        end,
        sp.EventType.ANIMATION_EVENT
    )
    nodeAni:registerSpineEventHandler(
        function(event)
            if callBack then
                callBack(event)
            end
        end,
        sp.EventType.ANIMATION_COMPLETE
    )
    local function onNodeEvent(event)
        if event == "enter" then
            local event = cc.EventCustom:new("KW_SPINE_ANI_NODE_EVENT")
            event.eventName = "enter"
            event.aniNode = nodeAni
            event.file = filename
            cc.Director:getInstance():getEventDispatcher():dispatchEvent(event)
        elseif event == "exit" then
            local event = cc.EventCustom:new("KW_SPINE_ANI_NODE_EVENT")
            event.eventName = "exit"
            event.aniNode = nodeAni
            event.file = filename
            cc.Director:getInstance():getEventDispatcher():dispatchEvent(event)
        elseif event == "cleanup" then
            local event = cc.EventCustom:new("KW_SPINE_ANI_NODE_EVENT")
            event.eventName = "cleanup"
            event.aniNode = nodeAni
            event.file = filename
            cc.Director:getInstance():getEventDispatcher():dispatchEvent(event)
        end
    end
    nodeAni:registerScriptHandler(onNodeEvent)

    nodeAni:setVisible(false)
    nodeAni:setAnimation(trackid, aniName, loop)
    nodeAni:runAction(cc.Sequence:create(cc.DelayTime:create(1 / 30), cc.Show:create()))
    if clear == nil or clear == true then
        node:removeAllChildren()
    end
    node:addChild(nodeAni)
    return nodeAni
end

function SpineManager:playAniWithComplete(node, path, filename, aniName, loop, endAniName, endAniLoop, firstEndCall, eventData)
    if path == nil or node == nil then
        return
    end
    if filename == nil then
        return
    end

    if endAniName == nil then
        return self:playAni(node, path, filename, aniName, loop)
    end

    if endAniLoop ~= false then
        endAniLoop = true
    end

    local jsonFile = path .. filename .. ".json"
    local atlas = path .. filename .. ".atlas"
    if not cc.FileUtils:getInstance():isFileExist(jsonFile) then
        return
    end
    local trackid = XH.askIDManager:getAskID()

    local nodeAni = sp.SkeletonAnimation:create(jsonFile, atlas)
    local function handler(event)
        if event.type == "complete" and event.animation == aniName then
            nodeAni:setAnimation(trackid, endAniName, endAniLoop)
            if firstEndCall then
                firstEndCall()
            end
        end
    end
    nodeAni:registerSpineEventHandler(handler, sp.EventType.ANIMATION_COMPLETE)

    nodeAni:registerSpineEventHandler(
        function(event)
            if eventData then
                for k, v in pairs(eventData) do
                    if event.eventData.name == k then
                        if v then
                            v()
                        end
                    end
                end
            end
        end,
        sp.EventType.ANIMATION_EVENT
    )

    local function onNodeEvent(event)
        if event == "enter" then
            local event = cc.EventCustom:new("KW_SPINE_ANI_NODE_EVENT")
            event.eventName = "enter"
            event.aniNode = nodeAni
            event.file = filename
            cc.Director:getInstance():getEventDispatcher():dispatchEvent(event)
        elseif event == "exit" then
            local event = cc.EventCustom:new("KW_SPINE_ANI_NODE_EVENT")
            event.eventName = "exit"
            event.aniNode = nodeAni
            event.file = filename
            cc.Director:getInstance():getEventDispatcher():dispatchEvent(event)
        elseif event == "cleanup" then
            local event = cc.EventCustom:new("KW_SPINE_ANI_NODE_EVENT")
            event.eventName = "cleanup"
            event.aniNode = nodeAni
            event.file = filename
            cc.Director:getInstance():getEventDispatcher():dispatchEvent(event)
        end
    end
    nodeAni:registerScriptHandler(onNodeEvent)

    nodeAni:setVisible(false)
    nodeAni:setAnimation(trackid, aniName, loop)
    nodeAni:runAction(cc.Sequence:create(cc.DelayTime:create(1 / 30), cc.Show:create()))
    node:removeAllChildren()
    node:addChild(nodeAni)
    return nodeAni
end

return SpineManager
i