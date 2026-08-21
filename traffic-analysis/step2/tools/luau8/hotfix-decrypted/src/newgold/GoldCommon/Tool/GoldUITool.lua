local GoldUITool = class("GoldUITool", XH.UITool)

---------------------------------------------------------
-- @brief 创建一个固定时间调用的动画
-- @param 绑定action的节点
-- @param 多少时间执行一次
-- @param 需要执行的操作
-- @return nil
---------------------------------------------------------
function GoldUITool.createRepeateAction(node, delay, func)
    if node and func then
        local delayAct = cc.DelayTime:create(delay or 1.0)
        local updateCallAct = cc.CallFunc:create(func)
        local sequenceAct = cc.Sequence:create(delayAct, updateCallAct)
        local repeatAct = cc.RepeatForever:create(sequenceAct)
        node:runAction(repeatAct)
    end
end

---------------------------------------------------------
-- @brief 播放json动画
-- @param 父节点
-- @param 动画名字
-- @param json路径
-- @param 位置cc.p(x, y)
-- @param 锚点cc.p(x, y)
-- @param 循环,默认循环 1 -1
-- @return ccs.Armature
---------------------------------------------------------
function GoldUITool.playJsonAnimation(node, aniName, jsonPath, loop, pos, anchor, callBackFunc)
    local armatureNode = nil
    if node and aniName and jsonPath and cc.FileUtils:getInstance():isFileExist(jsonPath) then
        if ccs.ArmatureDataManager:getInstance():getAnimationData(aniName) == nil then
            ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(jsonPath)
        end

        armatureNode = node:getChildByName(aniName)
        if armatureNode == nil then
            if ccs.ArmatureDataManager:getInstance():getAnimationData(aniName) then
                local armature = ccs.Armature:create(aniName)
                if armature then
                    node:addChild(armature)
                    pos = pos or cc.p(0, 0)
                    anchor = anchor or cc.p(0.5, 0.5)
                    armature:setPosition(pos)
                    armature:setAnchorPoint(anchor)
                    armature:setName(aniName)
                    armature:getAnimation():playWithIndex(0, -1, loop or -1)

                    if callBackFunc ~= nil then
                        armature:getAnimation():setMovementEventCallFunc(callBackFunc)
                    end
                    return armature
                end
            end
        end
    end
    return armatureNode
end

---------------------------------------------------------
-- @brief 播放json动画
-- @param 父节点
-- @jsonName 动画名字
-- @jsonPath json路径
-- @pos 位置cc.p(x, y)
-- @anchor 锚点cc.p(x, y)
-- @loop 循环,默认不循环-1
-- @byName 按指定动画名字播放
-- @return ccs.Armature
---------------------------------------------------------
function GoldUITool.playJsonAnimationByName(node, jsonName, jsonPath, loop, byName, pos, anchor, callBackFunc, scale)
    local armatureNode
    if node and jsonName and jsonPath and cc.FileUtils:getInstance():isFileExist(jsonPath) then
        if ccs.ArmatureDataManager:getInstance():getAnimationData(jsonName) == nil then
            ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(jsonPath)
        end

        armatureNode = node:getChildByName(jsonName)
        if armatureNode == nil then
            if ccs.ArmatureDataManager:getInstance():getAnimationData(jsonName) then
                local armature = ccs.Armature:create(jsonName)
                if armature then
                    node:addChild(armature)
                    pos = pos or cc.p(0, 0)
                    anchor = anchor or cc.p(0.5, 0.5)
                    armature:setPosition(pos)
                    armature:setName(jsonName)
                    armature:setAnchorPoint(anchor)
                    armature:setScale(scale or 1)
                    armature:getAnimation():play(byName, -1, loop or -1)

                    if callBackFunc ~= nil then
                        armature:getAnimation():setMovementEventCallFunc(callBackFunc)
                    end
                end
            end
        end
    end
    return armatureNode
end

function GoldUITool.AdaptationIphoneX(nodeArr)
    local KW_BANG_WIDTH = 80
    if not GoldUITool.checkIsIphoneX() then
        return
    end
    for _, nodeObj in pairs(nodeArr) do
        if nodeObj.node then
            local oldPosX = nodeObj.node:getPositionX()
            local disX = KW_BANG_WIDTH
            if nodeObj.bHalf then
                disX = KW_BANG_WIDTH / 2
            end
            if nodeObj.bRight then
                nodeObj.node:setPositionX(oldPosX - disX)
            else
                nodeObj.node:setPositionX(oldPosX + disX)
            end
        end
    end
end

function GoldUITool.checkIsIphoneX()
    local viewSize = cc.Director:getInstance():getOpenGLView():getFrameSize()
    if display.notchWidth > 0 and viewSize.width / viewSize.height > 1.8 then
        return true
    end
    return false
end

function GoldUITool.adaptForLiuHai(nodeList, notchWidth)
    notchWidth = notchWidth or GoldUITool.getLiuHaiWidth()
    nodeList = nodeList or {}
    if notchWidth > 0 then
        -- 开始适配
        local designSize = GoldUITool.getDesignSizeHD()
        local safeSize = cc.size(designSize.width - notchWidth * 2, designSize.height)

        for _, v in pairs(nodeList) do
            local curPosX = v:getPosition()
            local newPosX = notchWidth + curPosX / designSize.width * safeSize.width
            v:setPositionX(newPosX)
        end
    end
end

function GoldUITool.getLiuHaiWidth()
    local KW_DEFULT_NOTOUCH_WIDTH = 80
    local notchWidth = display.notchWidth
    local frameSize = cc.Director:getInstance():getOpenGLView():getFrameSize()
    if notchWidth > 0 or (frameSize.width / frameSize.height > 1.8) then
        return KW_DEFULT_NOTOUCH_WIDTH
    else
        return 0
    end
end

function GoldUITool.getDesignSizeHD()
    local screenSize = cc.Director:getInstance():getWinSize()
    if screenSize.width > screenSize.height then
        return cc.size(1920, 1080)
    else
        return cc.size(1080, 1920)
    end
end

--播放spine动画
function GoldUITool.playDargonBonesSpine(path, tex, ske, armatureName, isLoop, scale)
    if sp then
        local spineNode = sp.SkeletonAnimation:create(path..tex, path..ske, scale or 0.6);
        if isLoop == nil then
            isLoop = true
        end
        spineNode:setAnimation(0, "" .. armatureName, isLoop);
        return spineNode
    end
    return nil
end

return GoldUITool
�