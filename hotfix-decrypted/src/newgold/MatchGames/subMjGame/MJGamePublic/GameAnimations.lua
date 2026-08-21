local GameAnimations = class("GameAnimations")
local GameConfig = require("newgold.MatchGames.subMjGame.MJGamePublic.GameConfig")

function GameAnimations:ctor()
    -- 
    self.currPlaySpeed = 1
    
    -- 延时动画
    self.delayTime = 0.3
    -- 飞向动画
    self.flyTime = 0.2
    -- 变大动画
    self.toBigTime = 0.1
end

function GameAnimations:reLoadPlistAndPngRes(actionContent)
    if actionContent then 
        local plist = actionContent.base..".plist"
        local png = actionContent.base..".png"
        display.loadSpriteFrames(plist, png)
    end 
end 

function GameAnimations:addBtnAction(btnNode,pos,scale)

    -- self:createExportAction(btnNode,GameConfig.ACTION_BUTTON,0,true,pos,scale) 
end 

function GameAnimations:playCSBAction(parentNode,pos,actionIndex)

    if tolua.isnull(parentNode) then 
        return 
    end 

    local csbPath = GameConfig.XZHUCSBCONFIG[actionIndex].path
    local csbScale = GameConfig.XZHUCSBCONFIG[actionIndex].scale or 0.6

    local csbNode = cc.CSLoader:createNode(csbPath)

    local csbAction = cc.CSLoader:createTimeline(csbPath)

    parentNode:addChild(csbNode)

    csbNode:setPosition(pos)

    csbNode:runAction(csbAction)

    csbNode:setScale(csbScale)

    csbAction:gotoFrameAndPlay(0,false)
end

function GameAnimations:playHuAction(parentNode,kind, index, pos )

    if tolua.isnull(parentNode) then 
        return 
    end 

    local function isSpecialHuKind(_kind)
        if _kind == GameConfig.XZQIANGGANGHUINDEX then 
            return false 
        end 
        return true 
    end 

    local config = GameConfig.XZHUCSBCONFIG[kind]

    local csbPath = config.path

    if index and index <= 3 and isSpecialHuKind(kind) then 
        local imgPath = string.format(config.format,index) 

        local csbNode = cc.CSLoader:createNode(csbPath)
        self.huActionNode = csbNode

        local csbAction = cc.CSLoader:createTimeline(csbPath)

        local childSprite = csbNode:getChildByName("sp_ani")

        local spriteFrameCacheItem = cc.SpriteFrameCache:getInstance():addSpriteFrames("Match/xuezhanGame/Images/XueZhuanGame.plist")
        -- 将精灵帧从精灵缓存帧中取出来，并通过精灵帧创建不同的精灵
        childSprite:setSpriteFrame(spriteFrameCacheItem:getSpriteFrameByName("Match/xuezhanGame/Images/pt_hu.png"))

        parentNode:addChild(csbNode)

        csbNode:setPosition(pos)

        csbNode:setScale(1.2)

        csbNode:runAction(csbAction)

        csbAction:play("animation0",false)
    elseif config.format then
        local imgPath = config.format

        local csbNode = cc.CSLoader:createNode(csbPath)
        self.huActionNode = csbNode

        local csbAction = cc.CSLoader:createTimeline(csbPath)

        local childSprite = csbNode:getChildByName("sp_ani")

        local spriteFrameCacheItem = cc.SpriteFrameCache:getInstance():addSpriteFrames("Match/xuezhanGame/Images/XueZhuanGame.plist")

        childSprite:setSpriteFrame(spriteFrameCacheItem:getSpriteFrameByName(imgPath))

        parentNode:addChild(csbNode)

        csbNode:setPosition(pos)

        csbNode:setScale(1.2)

        csbNode:runAction(csbAction)

        csbAction:play("animation0",false)
    end 
end 

function GameAnimations:stopHuAction()
    if not tolua.isnull(self.huActionNode) then
        self.huActionNode:removeSelf()
    end
end


-- 创建动画
-- 参数1：骨骼动画类型
-- 参数2：播放索引
-- 参数3：是否循环播放
function GameAnimations:createExportAction(_node,_ExpKind,_playIndex,_isLoop,_pos,_scale,_callBack,time)

    local node,ExpKind,playIndex,isLoop,pos,scale,callBack = _node,_ExpKind,_playIndex,_isLoop,_pos,_scale,_callBack

    local actionContent = GameConfig.EXPORTJSON[ExpKind]

    if not actionContent or not node then 
        return 
    end 

    self:reLoadPlistAndPngRes(actionContent)

    local armature = nil 

    local child = node:getChildByName(actionContent.name)
    if child then 
        child:removeSelf()
    end

    -- 删除缓存动画资源
    local removeArmatureRes = function()
        ccs.ArmatureDataManager:getInstance():removeArmatureFileInfo(actionContent.path)
        if node and not tolua.isnull(node) then 
            local child = node:getChildByName(actionContent.name)
            if child then 
                child:removeSelf()
            end
        end 
    end 

    local function animationEvent(armatureBack,movementType,movementID)
        if movementType == ccs.MovementEventType.complete then
            if not isLoop then 
                removeArmatureRes()
            end 
            if callBack then 
                callBack() 
            end   
        elseif movementType == ccs.MovementEventType.loopComplete then
            --removeArmatureRes()
            if callBack then callBack() end 
      	end
    end

    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(actionContent.path)

    -- 创建
    armature = ccs.Armature:create(actionContent.name) 
    -- 播放速度
    armature:getAnimation():setSpeedScale(1*self.currPlaySpeed)

    -- 附加到node正中间位置
    local nodeSize = node:getBoundingBox()
    node:addChild(armature)
    node:setName(actionContent.name)
    armature:setPosition(nodeSize.width*0.5,nodeSize.height*0.5)

    local loopIndex = isLoop == true and -1 or 0

    armature:getAnimation():playWithIndex(playIndex,0,loopIndex)

    armature:getAnimation():setMovementEventCallFunc(animationEvent)
end 

-- 播放定缺中的文字动画
function GameAnimations:playTxtDingQueAction(node,txtKind)

    if iskindof(node,"cc.Node") then 
        -- 先移除所有附加节点
        if node:getChildrenCount() > 0 then 
            node:removeAllChildren()
        end 

        local actionContent = GameConfig.CSBACTION[txtKind]

        local csbNode = cc.CSLoader:createNode(actionContent.path)

        node:addChild(csbNode)

        if txtKind == GameConfig.SELECTINGSTATE or txtKind == GameConfig.SELECTINGCARD then 
            local timeLine = cc.CSLoader:createTimeline(actionContent.path)
            csbNode:runAction(timeLine)
            timeLine:gotoFrameAndPlay(0,true)
        end 
    end 
end 

-- 播放飞向头像的动画
function GameAnimations:playFlyToHeadIconAction(panel,queIndex,startPos,endPos,_isMy,callback)
    local isMy = _isMy
    local img = ccui.ImageView:create()
    local imgPath = GameConfig.XUANQUEIMGPLISTPATH[queIndex].big
    img:loadTexture(imgPath,ccui.TextureResType.plistType)
    panel:addChild(img)
    img:setPosition(startPos)

    if isMy then 
        -- 延时动作
        local delayAction = cc.DelayTime:create(self.delayTime+self.toBigTime)
        local moveAction = cc.EaseSineIn:create(cc.MoveTo:create(self.flyTime,endPos))
        local smallAction = cc.ScaleTo:create(self.toBigTime,0.1)

        local actions = cc.Sequence:create(delayAction,moveAction,cc.CallFunc:create(
            function()
                -- 调用回调
                if callback then
                    callback(isMy)
                end 
                -- 删除自己
                performWithDelay(panel,function()
                    img:removeSelf()
                end,0)
            end 
        ),smallAction)

        img:runAction(actions)
    else 
        img:setScale(0.2)

        -- 延时动作
        local delayAction = cc.DelayTime:create(self.delayTime)
        local bigAction = cc.EaseExponentialIn:create(cc.ScaleTo:create(self.toBigTime,1))
        local moveAction = cc.EaseSineIn:create(cc.MoveTo:create(self.flyTime,endPos))
        local smallAction = cc.ScaleTo:create(self.toBigTime,0.1)

        local actions = cc.Sequence:create(bigAction,delayAction,moveAction,cc.CallFunc:create(
            function()
                -- 调用回调
                if callback then
                    callback(isMy)
                end 
                -- 删除自己
                performWithDelay(panel,function()
                    img:removeSelf()
                end,0)
            end 
        ),smallAction)

        img:runAction(actions)
    end 
end 








return GameAnimations  
!  