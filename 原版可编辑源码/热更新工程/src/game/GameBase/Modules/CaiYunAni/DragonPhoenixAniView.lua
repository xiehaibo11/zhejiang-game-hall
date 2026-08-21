--[[
    @description:金龙 金凤 龙凤 放在牌下层
    不新增csb了，重复添加一下CaiYunAniLayer.csb
    切记在CaiYunAniLayer.csb上新增可见东西的时候，记得隐藏下
]]
local DragonPhoenixAniView = CF.gameClass("DragonPhoenixAniView", CF.ViewBase)
local CaiYunPropNewConfig = CF.gameRequire("Modules.CaiYunPropNew.Config")

local aniPath = "animation/GameCommon/prop_ani/"
local MAX_PLAYER = 4

local aniTypeMap = {
    [CaiYunPropNewConfig.ANI_TYPE.jinlong] = "long1",
    [CaiYunPropNewConfig.ANI_TYPE.jinfeng] = "feng1",
    [CaiYunPropNewConfig.ANI_TYPE.longfeng] = "longfeng1"
}

local aniTypeHeadMap = {
    [CaiYunPropNewConfig.ANI_TYPE.jinlong] = "long2",
    [CaiYunPropNewConfig.ANI_TYPE.jinfeng] = "feng2",
    [CaiYunPropNewConfig.ANI_TYPE.longfeng] = "longfeng2"
}

function DragonPhoenixAniView:ctor()
    DragonPhoenixAniView.super.ctor(self)
    self._caiyunPropBtn:setVisible(false)
end

function DragonPhoenixAniView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/CaiYunAniLayer.csb"
end

function DragonPhoenixAniView:getProxyEvents()
    return {
        { module = CF.game:getModule("CaiYunAni"), eventKeyName = "EVENT_PLAY_JINLONG_ANI2", callBack = "playJinlongAni2" },
    }
end

function DragonPhoenixAniView:getBindingInfo()
    return {
        ["_KW_PANEL_JINLONG_ANI_"] = {varName = "_jinlongAniNode", beginIndex = 1, endIndex = 4},
        ["_KW_PANEL_JINLONG_ANI_2_POKER"] = {varName = "_jinlongAniNodePoker2"},
        ["_KW_PANEL_ITEM_BTN"] = {varName = "_caiyunPropBtn"},
    }
end

-- 播放牌上金龙动画
function DragonPhoenixAniView:playDargonBonesSpine(params, isloop, scale, callback)
    if sp then
        if isloop == nil or isloop ~= false then
            isloop = true
        end
        scale = scale or 1
        local spineNode = sp.SkeletonAnimation:create(params.path..params.tex, params.path..params.ske, scale);
        if not isloop then
            -- 绑定动画事件监听器
            spineNode:registerSpineEventHandler(function(event)
                -- 如果当前事件为动画结束事件，则移除该动画节点
                if event.type == 'complete' then
                    spineNode:runAction(cc.Sequence:create(
                        cc.DelayTime:create(0.3),
                        cc.CallFunc:create(function()
                            spineNode:removeFromParent(true)
                        end)
                    ))
                    if callback then
                        callback()
                    end
                end
            end, sp.EventType.ANIMATION_COMPLETE)
        end
        spineNode:setAnimation(0, "" .. params.armatureName, isloop)
        return spineNode
    end
    return nil
end

-- 播放牌上金龙动画
function DragonPhoenixAniView:playJinlongAni2(event)
    if not event or not event.msg or not event.msg.localSeat or event.msg.localSeat > MAX_PLAYER then
        return
    end
    local localSeat = event.msg.localSeat
    if localSeat ~= CF.GameDefine.LOCAL_SEAT.BOTTOM then
        return
    end
    local animation = aniTypeMap[event.msg.aniType]
    local headNode = CF.game:getModule("CaiYunAni"):getHeadNode(localSeat)
    if not headNode then
        return
    end
    local pNode =   CF.gameSub:isMahjong(CF.roomData:getGameID()) and  self["_jinlongAniNode" .. localSeat] or self._jinlongAniNodePoker2
    if not pNode then return end
    local spineNode = pNode:getChildByName("JINLONG_ANINODE2")
    if not spineNode and headNode then
        local params = {path = aniPath .. "cy_jinlong/", tex = "long.json", ske = "long.atlas", armatureName = animation}
        if cc.FileUtils:getInstance():isFileExist(params.path..params.tex) and cc.FileUtils:getInstance():isFileExist(params.path..params.ske) then
            spineNode = self:playDargonBonesSpine(params, false, 1)
            if spineNode then
                if localSeat == CF.GameDefine.LOCAL_SEAT.TOP or localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM and pNode then
                    pNode:addChild(spineNode)
                else
                    headNode:addChild(spineNode)
                end
                spineNode:setName("JINLONG_ANINODE2")
            end
        end
        return
    end
    spineNode:addAnimation(0, animation, false)
end

return DragonPhoenixAniView