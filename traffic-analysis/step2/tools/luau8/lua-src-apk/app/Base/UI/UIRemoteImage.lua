local UIRemoteImage = {}

function UIRemoteImage.createBase(base, retryCount)
    function base:setDefaultTexture(fileName, texType)
        if base.__uiRemoteImage ~= nil then
            base.__uiRemoteImage:setDefaultTexture(fileName, texType)
        end
    end

    function base:setUrl(url)
        if base.__uiRemoteImage ~= nil then
            if url and url ~= "" then
                local find = string.find(url, "https")
                if not find then
                    url = string.gsub(url, "http", "https")
                end
            end
            base.__uiRemoteImage:setUrl(url)
        end
    end

    if base.__uiRemoteImage == nil then
        local size = base:getContentSize()
        base.__uiRemoteImage = XH.RemoteImage.new()
        base.__uiRemoteImage:setRetryCount(retryCount)
        base.__uiRemoteImage:ignoreContentAdaptWithSize(false)
        base.__uiRemoteImage:setContentSize(size.width, size.height)
        base:addChild(base.__uiRemoteImage)
    end

    return base
end

function UIRemoteImage.create(layout, retryCount)
    layout = UIRemoteImage.createBase(layout, retryCount)
    if layout.__uiRemoteImage then
        local size = layout:getContentSize()
        layout.__uiRemoteImage:setPosition(size.width / 2, size.height / 2)
    end

    function layout:setIgnoreParentLayoutSize(bIgnore)
        if layout.__uiRemoteImage then
            layout.__uiRemoteImage:ignoreContentAdaptWithSize(true)
            layout.__uiRemoteImage:setContentSize(0, 0)
        end
    end

    function layout:setMaxContentSize(size)
        if layout.__uiRemoteImage then
            layout.__uiRemoteImage:setMaxContentSize(size)
        end
    end

    return layout
end

function UIRemoteImage.createClip(sprite, retryCount)
    sprite = UIRemoteImage.createBase(sprite, retryCount)
    local size = sprite:getContentSize()
    local position = cc.p(sprite:getPosition())
    if sprite.__uiClippingNode == nil then
        sprite.__uiClippingNode = cc.ClippingNode:create()
        local clippingMask = cc.Sprite:createWithSpriteFrame(sprite:getSpriteFrame())
        clippingMask:setPosition(position.x + 2, position.y + 2)
        clippingMask:setContentSize(size.width, size.height)
        sprite.__uiClippingNode:setStencil(clippingMask)
        sprite.__uiClippingNode:setAlphaThreshold(0.05)
        sprite:addChild(sprite.__uiClippingNode)
    end
    if sprite.__uiRemoteImage then
        sprite.__uiRemoteImage:setPosition(position)
    end

    return sprite
end

return UIRemoteImageA
