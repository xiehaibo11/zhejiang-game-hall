local GuideUILogic = CF.gameClass("GuideUILogic")

function GuideUILogic.showGuideAni(node)
    if not node then
        return
    end
    local size = node:getContentSize()
    local GuideAniNode = CF.gameRequire("Modules.Guide.AniNode")
    local guideAniNode= GuideAniNode.new()
    guideAniNode:showGuideAni()
    guideAniNode:setPosition(size.width/2, size.height/2)
    node:addChild(guideAniNode)
    return guideAniNode
end

function GuideUILogic.showCaiShenAni(node,seat)
    -- if not node or not seat then
    --     return
    -- end
    -- local caishenAni = node:getChildByName("PROP_GUIDE_ANI")
    -- if not caishenAni then
    --     caishenAni = CF.gameRequire("Modules.Guide.GamePropView").new({seatId = seat})
    --     caishenAni:setName("PROP_GUIDE_ANI")
    --     node:addChild(caishenAni,10)
    -- end
    -- return caishenAni
end

return GuideUILogic