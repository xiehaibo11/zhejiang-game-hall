local HuangFanLayer = class("HuangFanLayer", CF.ViewBase)

function HuangFanLayer:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/HuZhou/HuangFan.csb"
end

function HuangFanLayer:getBindingInfo()
    return {
        ["_KW_NODE_HFANI"] = {varName = "_hfAniNode"},
        ["_KW_BMF_FAN"] = {varName = "_bmfFan"},
    }
end

function HuangFanLayer:showAni(chips)    
    local exportJsonPath = "res/animation/Mahjong/HuZhou/huangfan_ani/"
    local exportJsonName = "huangfan_ani"
    local exportJsonFilePath = exportJsonPath .. exportJsonName .. ".ExportJson"
    local aniName = "huangfan_ani"
    CF.UITool.playJsonAnimation(self._hfAniNode, aniName, exportJsonFilePath, -1, nil, nil, function()  
        self:removeSelf()
    end)
    
    for i=1,#chips do
        local chipImg = self._hfAniNode:getChildByName("KW_UI_CHIP_"..i)
        if chipImg then
            chipImg:removeSelf()
        end            
        local textureName = string.format("saizi_sz_%d.png", chips[i])
        local imageChip = ccui.ImageView:create()
        imageChip:setName("KW_UI_CHIP_"..i)
        imageChip:loadTexture(textureName, ccui.TextureResType.plistType)
        imageChip:setAnchorPoint(cc.p(0.5, 0.5))
        imageChip:setPosition(cc.p(100*i-150,0))
        self._hfAniNode:addChild(imageChip)
    end
end

return HuangFanLayerf