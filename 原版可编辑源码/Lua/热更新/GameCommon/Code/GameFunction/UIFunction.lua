local UIFunction = {}

local CURRENT_MODULE_NAME = ...

function UIFunction.seekWidgetByName(root,strKeyword)        
    if root == nil then
        return nil
    end
    return ccui.Helper:seekWidgetByName(root,strKeyword)
end

--封装监听函数
function UIFunction.addTouchEventListener(node,name,func)
    if node == nil then
        return
    end
    local findNode = UIFunction.seekWidgetByName(node,name)
    if findNode ~= nil then
        findNode:addTouchEventListener(func)
        return true
    end
    return false
end

--封装监听函数
function UIFunction.addEventListener(node,name,func)
    if node == nil then
        return
    end
    local findNode = UIFunction.seekWidgetByName(node,name)
    if findNode ~= nil then
        findNode:addEventListener(func)
        return true
    end
    return false
end

function UIFunction.loadTexture(node,name,pngKeyword,type)
    if node == nil then
        return
    end
    if pngKeyword == nil then
        return
    end
    local findNode = UIFunction.seekWidgetByName(node,name)
    if findNode ~= nil then

        findNode:loadTexture(string.format("%s",pngKeyword),type)
        return true
    end
    return false
end


function UIFunction.setVisible(node,name,visible)
    if node == nil then
        return
    end
    local findNode = UIFunction.seekWidgetByName(node,name)
    if findNode ~= nil then
        findNode:setVisible(visible)
        return true 
    end
    return false
end

function UIFunction.isVisible(node,name)
    if node == nil then
        return
    end
    local findNode = UIFunction.seekWidgetByName(node,name)
    if findNode ~= nil then
        if findNode:isVisible() then
            return true
        else
            return false 
        end
    end
    return false
end

function UIFunction.setText(node,name,string)
    if node == nil then
        return
    end
    local text = UIFunction.seekWidgetByName(node,name)
    if text ~= nil then
        text:setString(string)
        return true
    end
    return false
end

function UIFunction.setFontSize(node,name,size)
    if node == nil then
        return
    end
    local text = UIFunction.seekWidgetByName(node,name)
    if text ~= nil then
        text:setFontSize(size)
        return true
    end
    return false
end

function UIFunction.setFntFile(node,name,string)
    if node == nil then
        return
    end
    local text = UIFunction.seekWidgetByName(node,name)
    if text ~= nil then
        text:setFntFile(string)
        return true
    end
    return false
end

function UIFunction.getInputText(node,name)
    if node == nil then
        return ""
    end
    local text = UIFunction.seekWidgetByName(node,name)
    if text ~= nil then
        return text:getText()
    end
    return ""
end

function UIFunction.getText(node,name)
    if node == nil then
        return ""
    end
    local text = UIFunction.seekWidgetByName(node,name)
    if text ~= nil then
        return text:getString()
    end
    return ""
end

function UIFunction.setOpacity(node,name,opacity)
    if node == nil then
        return
    end
    local text = UIFunction.seekWidgetByName(node,name)
    if text ~= nil then
        return text:setOpacity(opacity)
    end
    return ""
end

function UIFunction.setPositionX(node,name,x)
    if node == nil then
        return
    end
    local findNode = UIFunction.seekWidgetByName(node,name)
    if findNode ~= nil then
        findNode:setPositionX(x)
    end
    return 
end

function UIFunction.getPositionX(node,name)
    if node == nil then
        return
    end
    local findNode = UIFunction.seekWidgetByName(node,name)
    if findNode ~= nil then
        return findNode:getPositionX()
    end
    return 0
end

function UIFunction.setPositionY(node,name,y)
    if node == nil then
        return
    end
    local findNode = UIFunction.seekWidgetByName(node,name)
    if findNode ~= nil then
        findNode:setPositionY(y)
    end
    return 
end

function UIFunction.setPosition(node,name,pos)
    if node == nil then
        return
    end
    local findNode = UIFunction.seekWidgetByName(node,name)
    if findNode ~= nil then
        findNode:setPosition(pos)
    end
    return 
end

function UIFunction.getPositionY(node,name)
    if node == nil then
        return
    end
    local findNode = UIFunction.seekWidgetByName(node,name)
    if findNode ~= nil then
        return findNode:getPositionY()
    end
    return 0
end

function UIFunction.getPosition(node,name)
    if node == nil then
        return
    end
    local findNode = UIFunction.seekWidgetByName(node,name)
    if findNode ~= nil then
        return findNode:getPosition()
    end
    return 0,0
end

function UIFunction.getNodeName(node,name)
    if node == nil then
        return
    end
    local findNode = UIFunction.seekWidgetByName(node,name)
    if findNode ~= nil then
        return findNode:getName()
    end
    return 0
end

function UIFunction.removeAllChildren(node,name)
    if node == nil then
        return
    end
    local findNode = UIFunction.seekWidgetByName(node,name)
    if findNode ~= nil then
        findNode:removeAllChildren()
    end
    return 
end


function UIFunction.playCsbFrameAni(node,name,csb,beginIndex,endIndex,loop,calBackFun)
    if node == nil then      
        return
    end   
    local findNode = UIFunction.seekWidgetByName(node,name)
    if findNode ~= nil then
        local frameAni = cc.CSLoader:createTimeline(csb)
        findNode:stopAllActions()
        findNode:runAction(frameAni)

        if endIndex ~= nil then
            frameAni:gotoFrameAndPlay(beginIndex,endIndex,loop)
        else
            frameAni:gotoFrameAndPlay(beginIndex,loop)
        end       

        if calBackFun ~= nil then
            frameAni:setFrameEventCallFunc(calBackFun)
        end
    end
end

--LWJ
function UIFunction.isBright(node, name)
    if node == nil then
        return
    end
    local findNode = UIFunction.seekWidgetByName(node,name)
    if findNode ~= nil then        
        return findNode:isBright()
    end
    return false
end

function UIFunction.setBrightEx(node,name,enabled)
    if node == nil then
        return
    end
    local findNode = UIFunction.seekWidgetByName(node,name)
    if findNode ~= nil then        
        findNode:setBright(enabled)
        findNode:setEnabled( enabled)
        return true
    end
    return false
end

function UIFunction.playNodeCsbFrameAniEx(node,csb,beginIndex,endIndex,loop,calBackFun)
    if node ~= nil then
        local frameAni = cc.CSLoader:createTimeline(csb)
        node:runAction(frameAni)
        if endIndex ~= nil then
            frameAni:gotoFrameAndPlay(beginIndex,endIndex,loop)
        else
            frameAni:gotoFrameAndPlay(beginIndex,loop)
        end

        if calBackFun ~= nil then
            frameAni:setFrameEventCallFunc(calBackFun)
        end
    end
end

function UIFunction.gotoCsbFrameAndPause(node,name,csb,nIndex)
    if node == nil then
        return
    end
    local findNode = UIFunction.seekWidgetByName(node,name)
    if findNode ~= nil then
        local frameAni = cc.CSLoader:createTimeline(csb)
        findNode:stopAllActions()
        findNode:runAction(frameAni)
        frameAni:gotoFrameAndPause(nIndex)
    end
end

function UIFunction.setBright(node,name,enabled)
    if node == nil then
        return
    end
    local findNode = UIFunction.seekWidgetByName(node,name)
    if findNode ~= nil then
        findNode:setBright(enabled)
        return true
    end
    return false
end
function UIFunction.stopPlayCsbFrameAni(node,name,csb)
    if node == nil then
        return
    end
    local findNode = UIFunction.seekWidgetByName(node,name)
    if findNode ~= nil then
        local frameAni = cc.CSLoader:createTimeline(csb)
        node:stopAllActions()
    end
end


function UIFunction.setTouchEnabled(node,name,enabled)
    if node == nil then
        return
    end
    local findNode = UIFunction.seekWidgetByName(node,name)
    if findNode ~= nil then
        findNode:setTouchEnabled(enabled)

        return true
    end
    return false
end

function UIFunction.setBtnSelect(node,name,bSel)
    if node == nil then
        return
    end
    local findNode = UIFunction.seekWidgetByName(node,name)
    if findNode ~= nil then        
        findNode:setSelected(bSel)
        return true
    end
    return false
end

function UIFunction.setAnchorPointNode(node,posx,posy)
    if node then
        node:setAnchorPoint(cc.p(posx,posy))
    end
end

function UIFunction.playAniWithTargetPos(lastArmature,targetPosLayer,targetPosAniKey,aniPath,armatureKeyWord,aniKeyWord,loop,callBackFunc)
    if aniPath == nil then
        return
    end   
    if armatureKeyWord == nil then
        return
    end   
    if aniKeyWord == nil or aniKeyWord == "" then
        return
    end

    if lastArmature == nil then
        local findNode = UIFunction.seekWidgetByName(targetPosLayer,targetPosAniKey)
        if findNode == nil then
            return
        end

        ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(aniPath)
        lastArmature = ccs.Armature:create(armatureKeyWord)
        if lastArmature then
            findNode:addChild(lastArmature)
            lastArmature:setAnchorPoint(cc.p(0.5,0.5));
        end
    end

    if lastArmature ~= nil then
        lastArmature:getAnimation():play(aniKeyWord,-1,loop)
        if callBackFunc ~= nil then
            lastArmature:getAnimation():setMovementEventCallFunc(callBackFunc)
        end
        return lastArmature
    end

end

function UIFunction.playNodeAniWithTargetPos(targetPosLayer,pos,aniPath,armatureKeyWord,aniKeyWord,loop,callBackFunc)
    if aniPath == nil then
        return
    end

    if armatureKeyWord == nil then
        return
    end   
    if aniKeyWord == nil or aniKeyWord == "" then
        return
    end

    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(aniPath)
    local lastArmature = ccs.Armature:create(armatureKeyWord)
    if lastArmature then
        targetPosLayer:addChild(lastArmature)
        lastArmature:setAnchorPoint(cc.p(0.5,0.5))
        lastArmature:setPosition(pos)
    end

    if lastArmature ~= nil then
        lastArmature:getAnimation():play(aniKeyWord,-1,loop)
        if callBackFunc ~= nil then
            lastArmature:getAnimation():setMovementEventCallFunc(callBackFunc)
        end
        return lastArmature
    end
end

function UIFunction.autoMoveTo(node,name,posX,posY,time,callBackFunc)
    if node == nil then
        return
    end
    local findNode = UIFunction.seekWidgetByName(node,name)
    if findNode ~= nil then
        findNode:stopAllActions()
        local moveAction = cc.MoveTo:create(time,cc.p(posX,posY))
        if callBackFunc ~= nil then
            findNode:runAction(cc.Sequence:create(moveAction,cc.CallFunc:create(callBackFunc)))
        else
            findNode:runAction(cc.Sequence:create(moveAction))
        end
    end
end

function UIFunction.getWorldPosition(node,name)
    local findNode = UIFunction.seekWidgetByName(node,name)
    if findNode ~= nil then
        return findNode:getWorldPosition()
    end
    return 0
end

function UIFunction.moveNode(moveNode,targetNode)  
    if moveNode == nil then
        return
    end

    if targetNode == nil then
        return
    end

    moveNode:retain()
    moveNode:removeFromParent(false)
    targetNode:addChild(moveNode)
    moveNode:release()
end

function UIFunction.isEnabled(node,name)
    if node == nil then
        return
    end
    local findNode = UIFunction.seekWidgetByName(node,name)
    if findNode ~= nil then
        return findNode:isEnabled()
    end
    return false
end

function UIFunction.setButtonState(node,name,enable)
    if node == nil then
        return
    end
    local findNode = UIFunction.seekWidgetByName(node,name)
    if findNode ~= nil then
        findNode:setEnabled(enable)
        findNode:setTouchEnabled(enable)
        findNode:setBright(enable)
    end
    return
end

function UIFunction.adapt9Box(node)
    if node == nil then
        return
    end
    local glView = cc.Director:getInstance():getOpenGLView()
    local screenSize = cc.Director:getInstance():getWinSize()
    local designSize = UIFunction.getDesignSize()
    local scaleY = screenSize.height / designSize.height
    local kuangaobi = ( screenSize.width / screenSize.height) / (designSize.width / designSize.height)
    node:setScaleY(scaleY)
    if glView:getResolutionPolicy() == cc.ResolutionPolicy.FIXED_WIDTH then
        local childrenNode = node:getChildren() 
        for i = 1 , #childrenNode do
            if kuangaobi < 1 then
                childrenNode[i]:setScaleX(scaleY * kuangaobi )
                childrenNode[i]:setScaleY(kuangaobi)
            else
                childrenNode[i]:setScaleX(scaleY) 
            end
        end
    end
end

function UIFunction.adaptForIphoneX(node,startPosX)
    if node == nil then
        return
    end
    local designSize = UIFunction.getDesignSize()
    local safeSize = cc.size(designSize.width - startPosX * 2 ,designSize.height)

    local childrenNode = node:getChildren() 
    for i = 1 , #childrenNode do
        local nodePos = cc.p(childrenNode[i]:getPosition())
        local newPos = cc.p(startPosX + nodePos.x / designSize.width * safeSize.width , nodePos.y)
        childrenNode[i]:setPosition(newPos)
    end
end

function UIFunction.adapt9BoxVertical(node)
    if node == nil then
        return
    end
    local glView = cc.Director:getInstance():getOpenGLView()
    local screenSize = cc.Director:getInstance():getWinSize()
    local designSize = UIFunction.getDesignSizeVertical()
    local scaleX = screenSize.width / designSize.width
    local kuangaobi = ( screenSize.width  / screenSize.height) / (designSize.width /   designSize.height)
    node:setScaleX(scaleX)
    if glView:getResolutionPolicy() == cc.ResolutionPolicy.FIXED_HEIGHT then
        local childrenNode = node:getChildren() 
        for i = 1 , #childrenNode do
            if kuangaobi < 1 then
                childrenNode[i]:setScaleY(scaleX * kuangaobi )
                childrenNode[i]:setScaleX(kuangaobi)
            else
                childrenNode[i]:setScaleY(scaleX) 
            end
        end
    end
end

function UIFunction.getDesignSizeVertical()
    return cc.size(640, 960)   
end

function UIFunction.adapt9BoxOnlyChild(node)
    local glView = cc.Director:getInstance():getOpenGLView()
    local screenSize = cc.Director:getInstance():getWinSize()
    local designSize = UIFunction.getDesignSize()
    local scaleY = screenSize.height / designSize.height
    local kuangaobi = ( screenSize.width / screenSize.height) / (designSize.width / designSize.height)
    if glView:getResolutionPolicy() == cc.ResolutionPolicy.FIXED_WIDTH then
        local childrenNode = node:getChildren() 
        for i = 1 , #childrenNode do
            if kuangaobi < 1 then
                childrenNode[i]:setScaleX(scaleY * kuangaobi )
                childrenNode[i]:setScaleY(kuangaobi)
            else
                childrenNode[i]:setScaleX(scaleY) 
            end
        end
    end
end

function UIFunction.getDesignSize()
    return cc.size(960, 640)   
end

function UIFunction.getTotalScaleY(node)
    local scaleY = 1
    while true do
        if node == nil then
            break
        end
        if node:getParent() == nil then
            break
        end
        node = node:getParent()
        scaleY = scaleY * node:getScaleY()
    end
    return scaleY
end

function UIFunction.setScaleX(node,name,scale)
    if node == nil then
        return
    end
    local findNode = UIFunction.seekWidgetByName(node,name)
    if findNode ~= nil then
        findNode:setScaleX(scale)
    end
end

function UIFunction.setScaleY(node,name,scale)
    if node == nil then
        return
    end
    local findNode = UIFunction.seekWidgetByName(node,name)
    if findNode ~= nil then
        findNode:setScaleY(scale)
    end
end

function UIFunction.setScale(node,name,scale)
    if node == nil then
        return
    end
    local findNode = UIFunction.seekWidgetByName(node,name)
    if findNode ~= nil then
        findNode:setScaleX(scale)
        findNode:setScaleY(scale)
    end
end

function UIFunction.addTouchEventListenerByObj(node,name,obj,fun)
    if node == nil then
        return
    end
    if obj == nil then
        return
    end
    if fun == nil then
        return
    end
    local findNode = UIFunction.seekWidgetByName(node,name)
    if findNode == nil then
        return
    end

    findNode:addTouchEventListener(function(send,eventType)
        fun(obj,send,eventType)
    end)
end

function UIFunction.onTouchEventByObj(node,name,func,eventType,obj)
    if node == nil then
        return
    end
    local findNode = UIFunction.seekWidgetByName(node,name)
    if findNode ~= nil then
        return func(obj,findNode,eventType)
    end
    return nil
end

function UIFunction.setImageByURL(imageView,Url,realSize,isDownLoad)--目前只能用于头像
    if imageView==nil or Url==nil or Url=="" then return end
    local imageName,_ = string.gsub(Url, "http://", "h")   
    imageName,_ = string.gsub(imageName, "/", "_")
    imageName = "headCache/"..imageName
    local imagePath =  cc.FileUtils:getInstance():getWritablePath()..imageName
    print("AvatarDataManagerimagePath:"..imagePath)
    if cc.FileUtils:getInstance():isFileExist(imagePath..".png") == true then
        print("AvatarDataManagerimagePath:"..imagePath..".png")
        local function foo()
            imageView:loadTexture(imagePath..".png",ccui.TextureResType.localType)
        end
        if not pcall(foo) then
            cc.FileUtils:getInstance():removeFile(imagePath..".png")
            print("AvatarDataManager："..imagePath..".png".."加载出错："..Url)
        else
            local size = imageView:getContentSize()
            imageView:setScale(realSize.width/size.width,realSize.height/size.height)
            return
        end
    elseif cc.FileUtils:getInstance():isFileExist(imagePath..".jpg") then
        print("AvatarDataManagerimagePath:"..imagePath..".jpg")
        local function foo()
            imageView:loadTexture(imagePath..".jpg",ccui.TextureResType.localType)
        end
        if not pcall(foo) then
            cc.FileUtils:getInstance():removeFile(imagePath..".jpg")
            print("AvatarDataManager："..imagePath..".jpg".."加载出错："..Url)
        else
            local size = imageView:getContentSize()
            imageView:setScale(realSize.width/size.width,realSize.height/size.height)
            return
        end   
    end
    if isDownLoad~=false then
        print("AvatarDataManagerUrl:"..Url.."  imagePath:"..imageName..".png")
        imageView:startDownload(Url,imageName..".png")
    end
end

function UIFunction.getContentSize(node,name)
    if node == nil then
        return {["height"] = 0,["width"] = 0}
    end
    local findNode = UIFunction.seekWidgetByName(node,name)
    if findNode ~= nil then
        return findNode:getContentSize() 
    else
        return {["height"] = 0,["width"] = 0}
    end
end

function UIFunction.playAniWithTargetPosNew(lastArmature,targetPosLayer,targetPosAniKey,aniPath,armatureKeyWord,aniKeyWord,loop,callBackFunc)
    if aniPath == nil then
        return
    end   
    if not cc.FileUtils:getInstance():isFileExist(aniPath .. armatureKeyWord .. ".ExportJson") then 
        return 
    end
    if armatureKeyWord == nil then
        return
    end   
    if aniKeyWord == nil or aniKeyWord == "" then
        return
    end
    if targetPosAniKey == nil or targetPosAniKey == "" then
        return
    end

    if lastArmature == nil then
        local findNode = UIFunction.seekWidgetByName(targetPosLayer,targetPosAniKey)
        if findNode == nil then
            return
        end  

        local pngPath = aniPath .. armatureKeyWord .. ".png"
        local plistPath = aniPath .. armatureKeyWord .. ".plist"
        local jsonPath = aniPath .. armatureKeyWord .. ".ExportJson"
        ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(pngPath, plistPath, jsonPath)
        local lastArmature1 = ccs.Armature:create(armatureKeyWord)
        if lastArmature1 then
            findNode:addChild(lastArmature1)
            lastArmature1:setAnchorPoint(cc.p(0.5, 0.5))
            lastArmature1:getAnimation():play(aniKeyWord, -1, 1)    
        end         
    end
end

function UIFunction.adapt9BoxHD(node)
    if node == nil then
        return
    end
    local x = node:getScaleX()
    local y = node:getScaleY()
    local glView = cc.Director:getInstance():getOpenGLView()
    local screenSize = cc.Director:getInstance():getWinSize()
    local designSize = UIFunction.getDesignSizeHD()
    local realWidth = designSize.height / screenSize.height * designSize.width
    local realHeight = designSize.width / screenSize.width * designSize.height
    local kuangaobi = (screenSize.width / screenSize.height) / (designSize.width / designSize.height)
    node:setScaleX(designSize.height/realHeight)
    node:setScaleY(designSize.width / realWidth)
    local childrenNode = node:getChildren() 

    for i = 1 , #childrenNode do
        if kuangaobi < 1 then
            childrenNode[i]:setScaleX(realHeight / designSize.height / 2)
            childrenNode[i]:setScaleY(realWidth / designSize.width / 2)
        else
            childrenNode[i]:setScaleX((realHeight / designSize.height) * (designSize.width / realWidth)) 
        end
    end
end

function UIFunction.getDesignSizeHD()
    local screenSize = cc.Director:getInstance():getWinSize()
    if screenSize.width > screenSize.height then
        return cc.size(1920, 1080) 
    else
        return cc.size(1080, 1920) 
    end  
end

function UIFunction.adaptBackgroundTZ(node)
    if node == nil then
        return
    end
    local designSize = UIFunction.getDesignSizeHD()
    local screenSize = cc.Director:getInstance():getWinSize()
    local kuangaobi = (designSize.width /   designSize.height) / ( screenSize.width  / screenSize.height)
    if kuangaobi < 1 then
        node:setScale(1 / kuangaobi)
    else
        node:setScale(kuangaobi)
    end
end

return UIFunction