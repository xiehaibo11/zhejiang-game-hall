local UITool = class("UITool", XH.UITool)

---------------------------------------------------------
--@brief 创建一个固定时间调用的动画
--@param 绑定action的节点
--@param 多少时间执行一次
--@param 需要执行的操作
--@return nil
---------------------------------------------------------
function UITool.createRepeateAction(node, delay, func)
    if node and func then
        local delayAct = cc.DelayTime:create(delay or 1.0)
        local updateCallAct = cc.CallFunc:create(func)
        local sequenceAct = cc.Sequence:create(delayAct, updateCallAct)
        local repeatAct = cc.RepeatForever:create(sequenceAct)
        node:runAction(repeatAct)
    end
end

---------------------------------------------------------
--@brief 播放json动画
--@param 父节点
--@param 动画名字
--@param json路径
--@param 位置cc.p(x, y)
--@param 锚点cc.p(x, y)
--@param 循环,默认循环 1 -1
--@return ccs.Armature
---------------------------------------------------------
function UITool.playJsonAnimation(node, aniName, jsonPath, loop, pos, anchor, callBackFunc)
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
                end
            end
        end
    end
    return armatureNode
end

---------------------------------------------------------
--@brief 播放json动画
--@param 父节点
--@jsonName 动画名字
--@jsonPath json路径
--@pos 位置cc.p(x, y)
--@anchor 锚点cc.p(x, y)
--@loop 循环,默认不循环-1
--@byName 按指定动画名字播放
--@return ccs.Armature
---------------------------------------------------------
function UITool.playJsonAnimationByName(node, jsonName, jsonPath, loop, byName, pos, anchor, callBackFunc, scale)
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

--判断场景上是否有某个节点
function UITool.objIsInScene(objNane, clsName)
    local scene = display.getRunningScene()
    local node = scene:getChildByName(objNane)
    return node and true or false
end

function UITool.AdaptationIphoneX(nodeArr)
    local KW_BANG_WIDTH = 80
    if not UITool.checkIsIphoneX() then
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

function UITool.checkIsIphoneX()
    local viewSize = cc.Director:getInstance():getOpenGLView():getFrameSize()
    if display.notchWidth > 0 and viewSize.width / viewSize.height > 1.8 then
        return true
    end
    return false
end

---------------------------------------------------------
--@brief 播放手指点击动画带光圈特效
--@node 父节点
--@loop 循环,默认不循环-1
--@pos 位置cc.p(x, y)
--@anchor 锚点cc.p(x, y)
--@return ccs.Armature
---------------------------------------------------------
function UITool.showFingerAni(node,loop,pos,anchor,callBackFunc)
    local aniName = "shouzhi_ani"
    local jsonPath = "res/animation/GameCommon/shouzhi_ani_2/shouzhi_ani.ExportJson"
    CF.UITool.playJsonAnimation(node, aniName, jsonPath, loop, pos, anchor, callBackFunc)
end

---------------------------------------------------------
--@brief 增加气泡提示
--@node 父节点
--@pos 位置cc.p(x, y)
--@text 气泡内文字
---------------------------------------------------------
function UITool.showBubbleTip(pos,node,text)
    cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/Common/Image/message.plist")
    local Tip = cc.Sprite:create()
    Tip:setAnchorPoint(cc.p(1, 1))
    Tip:setSpriteFrame("game_message_speak_3.png")
    Tip:setName("KW_IMG_BUBBLETIP")

    local Text = ccui.Text:create()
        :setFontName("res/cocosStudio/Common/Font/fangzhengcuyuan.TTF")
        :setFontSize(36)
        :setColor(cc.c3b(191, 119, 79))
        :setAnchorPoint(cc.p(0, 0))
        :setPosition(cc.p(25, 8))
        :setString(text)
        :setCascadeOpacityEnabled(true)

    Tip:addChild(Text)
    node:addChild(Tip)

    Tip:setPosition(pos)
    Tip:setScale(0.8)
end


return UITool
4