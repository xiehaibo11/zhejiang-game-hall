local UITool = { }

--添加事件回调
function UITool.enableNodeEvents(self, node)
    if node.isNodeEventEnabled_ then
        return node
    end

    node._eventHandleScript = self
    node:registerScriptHandler(function(state)
        if state == "enter" and self.onEnter then
            self:onEnter()
        elseif state == "exit" and self.onExit then
            self:onExit()
        elseif state == "enterTransitionFinish" and self.onEnterTransitionFinish then
            self:onEnterTransitionFinish()
        elseif state == "exitTransitionStart" and self.onExitTransitionStart then
            self:onExitTransitionStart()
        elseif state == "cleanup" and self.onCleanup then
            self:onCleanup()
        end
    end)
    node.isNodeEventEnabled_ = true

    return node
end
--消除事件回调
function UITool.disableNodeEvents(node)
    node:unregisterScriptHandler()
    node.isNodeEventEnabled_ = false
    node._eventHandleScript = nil
    return node
end

function UITool.getSignedNumStr(num)
    if num > 0 then
        return '+' .. tostring(num)
    elseif num < 0 then
        return tostring(num)
    else
        return tostring(num)
    end
end

function UITool.safeCall(go, funcName, ...)
    if not go then
        print("ERROR:safeCall obj is nil:", funcName, debug.traceback())
        return
    end
    local func = go[funcName]
    if not go then
        print("ERROR:safeCall can't find func:", funcName, debug.traceback())
        return
    end

    return func(go, ...)
end

function UITool.generatePrefab(self, nameList, root, rootName, prefabSelf)
    local ret = prefabSelf or {}
    if not root then
        local rootNameEx = table.remove(nameList, 1)
        root = UITool.seekNodeByName(self, rootNameEx)
        if not root then
            print("ERROR:generatePrefab can't find prefab root:", rootNameEx)
            return
        end
        --register to self
        if not self._prefabDic then
            self._prefabDic = {}
            self.instantiatePrefab = function(node, name, nPrefabSelf)
                local prefab = node._prefabDic[name]
                if not prefab then
                    print("ERROR:instantiatePrefab can't find prefab by name:", name)
                    return
                end
                return prefab.instantiate(nPrefabSelf)
            end
        end
        self._prefabDic[rootNameEx] = ret
    end
    for _, name in pairs(nameList) do
        local node = UITool.seekNodeByName(root, name)
        if not node then
            print("WARN:generatePrefab can't find:", name)
        else
            ret[name] = node
            --bind func
            if string.match(name, "KWP_BTND_") then
                local func = ret["on_"..name] 
                if func then
                    --print("PREFAB add listener:", name, func, node:getName())
                    --dump(node)
                    node:addTouchEventListener(UITool.getDefaultTouchHanlde(ret, func))
                else
                    print("WARN:Need add Prefab Button callBack:", "on_"..name)
                end
            end
        end
    end
    ret._csbRoot = root
    ret.instantiate = function(prefabSelfEx)
        local new_root = root:clone()
        return UITool.generatePrefab(nil, nameList, new_root, rootName, prefabSelfEx)
    end
    return ret
end


function UITool.getDefaultTouchHanlde(self, func)
    return function(send, eventType)
        if eventType == ccui.TouchEventType.ended or eventType == ccui.TouchEventType.canceled then
            send:setScale(1)
            send:setColor(cc.c3b(255,255,255))
            func(self, send, eventType)
        elseif eventType == ccui.TouchEventType.began then
            XH.audioManager:play("BUTTON_CLICK")
            send:setScale(0.9)
            send:setColor(cc.c3b(160,160,160))
            return
        end

    end
end

function UITool.seekWidgetByName(root, strKeyword)
    if root == nil then
        return nil
    end
    return ccui.Helper:seekWidgetByName(root, strKeyword)
end

function UITool.seekNodeByName(root, strKeyword)
    if root == nil then
        return nil
    end
    return ccui.Helper:seekNodeByName(root, strKeyword)
end

-- 封装监听函数
function UITool.addTouchEventListener(node, name, func)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        findNode:addTouchEventListener(func)
        return true
    end
    return false
end

function UITool.addClickEventListener(node, name, func)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        findNode:addClickEventListener(func)
        return true
    end
    return false
end

-- 封装监听函数
function UITool.addEventListener(node, name, func)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        findNode:addEventListener(func)
        return true
    end
    return false
end

function UITool.loadTexture(node, name, pngKeyword, type)
    if node == nil then
        return
    end
    if pngKeyword == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        --sx cocos, lua 不允许传空
        findNode:loadTexture(string.format("%s", pngKeyword), type or ccui.TextureResType.localType)
        return true
    end
    return false
end

function UITool.setPlistTextureOnNode(node, pngKeyword)
    if node == nil then
        print("UITool.setTextureOnNode node is nil:")
        return
    end
    if pngKeyword == nil then
        print("UITool.setTextureOnNode pngKeyword is nil:", pngKeyword)
        return
    end
    node:loadTexture(string.format("%s", pngKeyword), ccui.TextureResType.plistType)
    return true
end



function UITool.setVisible(node, name, visible)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        findNode:setVisible(visible)
        return true
    end
    return false
end

function UITool.isVisible(node, name)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        if findNode:isVisible() then
            return true
        else
            return false
        end
    end
    return false
end

function UITool.setColor(node, name, color3b)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        findNode:setColor(color3b)
        return true
    end
    return false
end

function UITool.setTextColor(node, name, color3b)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        findNode:setTextColor(color3b)
        return true
    end
    return false
end

function UITool.enableOutline(node, name, color3b, outlineSize)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        findNode:enableOutline(color3b,outlineSize or -1)
        return true
    end
    return false
end

function UITool.setText(node, name, string)
    if node == nil then
        return
    end
    local text = UITool.seekNodeByName(node, name)
    if text ~= nil then
        string = XH.StringTool.replaceMatchStr(string)
        text:setString(string)
        return true
    end
    return false
end

function UITool.setTag(node, name, tag)
    if node == nil then
        return
    end
    local nd = UITool.seekNodeByName(node, name)
    if nd ~= nil then
        nd:setTag(tag)
        return true
    end
    return false
end

function UITool.setEditBoxText(node, name, string)
    if node == nil then
        return
    end
    local text = UITool.seekNodeByName(node, name)
    if text ~= nil then
        text:setText(string)
        return true
    end
    return false
end

function UITool.setPercent(node, name, percent)
    if node == nil then
        return
    end
    local slider = UITool.seekNodeByName(node, name)
    if slider ~= nil then
        slider:setPercent(percent)
        return true
    end
    return false
end

function UITool.setFontSize(node, name, size)
    if node == nil then
        return
    end
    local text = UITool.seekNodeByName(node, name)
    if text ~= nil then
        text:setFontSize(size)
        return true
    end
    return false
end

function UITool.setFntFile(node, name, string)
    if node == nil then
        return
    end
    local text = UITool.seekNodeByName(node, name)
    if text ~= nil then
        text:setFntFile(string)
        return true
    end
    return false
end

function UITool.getInputText(node, name)
    if node == nil then
        return ""
    end
    local text = UITool.seekNodeByName(node, name)
    if text ~= nil then
        return text:getText()
    end
    return ""
end

function UITool.setInputText(node, name, txt)
    if node == nil or name == nil or txt == nil then
        return
    end
    local text = UITool.seekNodeByName(node, name)
    if text ~= nil then
        text:setText(txt)
    end
end

function UITool.getText(node, name)
    if node == nil then
        return ""
    end
    local text = UITool.seekNodeByName(node, name)
    if text ~= nil then
        return text:getString()
    end
    return ""
end

function UITool.setOpacity(node, name, opacity)
    if node == nil then
        return
    end
    local text = UITool.seekNodeByName(node, name)
    if text ~= nil then
        return text:setOpacity(opacity)
    end
    return ""
end

function UITool.setPositionX(node, name, x)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        findNode:setPositionX(x)
    end
    return
end

function UITool.getPositionX(node, name)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        return findNode:getPositionX()
    end
    return 0
end

function UITool.setPositionY(node, name, y)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        findNode:setPositionY(y)
    end
    return
end

function UITool.setPosition(node, name, pos)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        findNode:setPosition(pos)
    end
    return
end

function UITool.getPositionY(node, name)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        return findNode:getPositionY()
    end
    return 0
end

function UITool.getPosition(node, name)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        return findNode:getPosition()
    end
    return 0, 0
end

function UITool.getNodeName(node, name)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        return findNode:getName()
    end
    return 0
end

function UITool.removeAllChildren(node, name)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        findNode:removeAllChildren()
    end
    return
end

function UITool.isBright(node, name)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        return findNode:isBright()
    end
    return false
end

function UITool.setBrightEx(node, name, enabled)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        findNode:setBright(enabled)
        findNode:setEnabled(enabled)
        return true
    end
    return false
end

function UITool.setBright(node, name, enabled)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        findNode:setBright(enabled)
        return true
    end
    return false
end

function UITool.stopPlayCsbFrameAni(node, name, csb)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        --local frameAni = cc.CSLoader:createTimeline(csb)
        node:stopAllActions()
    end
end

function UITool.setTouchEnabled(node, name, enabled)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        findNode:setTouchEnabled(enabled)

        return true
    end
    return false
end

function UITool.setBtnSelect(node, name, bSel)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        findNode:setSelected(bSel)
        return true
    end
    return false
end

function UITool.setAnchorPointNode(node, posx, posy)
    if node then
        node:setAnchorPoint(cc.p(posx, posy))
    end
end

function UITool.autoMoveTo(node, name, posX, posY, time, callBackFunc)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        findNode:stopAllActions()
        local moveAction = cc.MoveTo:create(time, cc.p(posX, posY))
        if callBackFunc ~= nil then
            findNode:runAction(cc.Sequence:create(moveAction, cc.CallFunc:create(callBackFunc)))
        else
            findNode:runAction(cc.Sequence:create(moveAction))
        end
    end
end

function UITool.getWorldPosition(node, name)
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        return findNode:getWorldPosition()
    end
    return 0
end

function UITool.moveNode(moveNode, targetNode)
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

function UITool.isEnabled(node, name)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        return findNode:isEnabled()
    end
    return false
end

function UITool.setButtonState(node, name, enable)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        findNode:setEnabled(enable)
        findNode:setTouchEnabled(enable)
        findNode:setBright(enable)
    end
    return
end

function UITool.getTotalScaleY(node)
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

function UITool.setScaleX(node, name, scale)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        findNode:setScaleX(scale)
    end
end

function UITool.setScale(node, name, scale)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        findNode:setScaleX(scale)
        findNode:setScaleY(scale)
    end
end

function UITool.addTouchEventListenerByObj(node, name, obj, fun)
    if node == nil then
        return
    end
    if obj == nil then
        return
    end
    if fun == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode == nil then
        return
    end

    findNode:addTouchEventListener( function(send, eventType)
        fun(obj, send, eventType)
    end )
end

function UITool.onTouchEventByObj(node, name, func, eventType, obj)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        return func(obj, findNode, eventType)
    end
    return nil
end

function UITool.addContentSizeWithHeight(node, height)
    if not node then
        return
    end

    local contentSize = node:getContentSize()
    node:setContentSize(contentSize.width, contentSize.height + height)
end

function UITool.adjustToTop(parentNode, childNode)
    if not parentNode then
        return
    end
    if not childNode then
        return
    end
    local parentSize = parentNode:getContentSize()
    childNode:setPositionY(parentSize.height)
end

function UITool.adjustToCenter(parentNode, childNode)
    if not parentNode then
        return
    end
    if not childNode then
        return
    end
    local parentSize = parentNode:getContentSize()
    childNode:setPositionY(parentSize.height / 2)
end

function UITool.adjustToBottom(parentNode, childNode)
    if not parentNode then
        return
    end
    if not childNode then
        return
    end
    childNode:setPositionY(0)
end

function UITool.getImageAddHeight(imgNode,screenHeightExceptImgNode)
    if not imgNode then
        return 0
    end

    if screenHeightExceptImgNode <=0 then
        return 0
    end

    local screenSize = cc.Director:getInstance():getWinSize()
    local designSize = UITool.getDesignSizeHD()
    local scaleY = screenSize.height / designSize.height
    local kuangaobi = ( screenSize.width / screenSize.height) / (designSize.width / designSize.height)
    if kuangaobi < 1 then
        local imgNodeSize = imgNode:getContentSize()
        local imgNodeHeight = (screenSize.height - screenHeightExceptImgNode * (scaleY * kuangaobi))/(scaleY * kuangaobi)
        if imgNodeHeight - imgNodeSize.height < 0 then
            return 0
        end
        return imgNodeHeight - imgNodeSize.height --返回这个imgNode九格增加的长度
    else
        return 0
    end
end

function UITool.getDesignSizeHD()
    local screenSize = cc.Director:getInstance():getWinSize()
    if screenSize.width > screenSize.height then
        return cc.size(1920, 1080) 
    else
        return cc.size(1080, 1920) 
    end  
end


function UITool.adjustChildrenPosition(parentNode,adjustTypeTabel)
    if not parentNode then
        return
    end

    if not adjustTypeTabel then
        return
    end
    local childrenNode = parentNode:getChildren()
    if childrenNode then
        for i = 1 , #childrenNode do
            local childName = childrenNode[i]:getName()
            local splitTable = string.split(childName,"_")
            local adjustType = splitTable[#splitTable]
            if adjustType == adjustTypeTabel["top"] then
                UITool.adjustToTop(parentNode, childrenNode[i])
            elseif adjustType == adjustTypeTabel["center"] then
                UITool.adjustToCenter(parentNode, childrenNode[i])
            elseif adjustType == adjustTypeTabel["bottom"] then
                UITool.adjustToBottom(parentNode, childrenNode[i])
            end
        end
    end
end

function UITool.setEnabled(node, name, isEnabled)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        return findNode:setEnabled(isEnabled)
    end
    return false
end

function UITool.ignoreContentAdaptWithSize(node, name, isEnabled)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        return findNode:ignoreContentAdaptWithSize(isEnabled)
    end
    return false
end

function UITool.jumpToTop(node, name)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        return findNode:jumpToTop()
    end
    return false
end

function UITool.setTitleColor(node, name, color)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        return findNode:setTitleColor(color)
    end
    return false
end


function UITool.requestRefreshView(node, name)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        return findNode:requestRefreshView()
    end
    return false
end

function UITool.getContentSize(node, name)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        return findNode:getContentSize()
    end
    return
end

function UITool.setContentSize(node, name, width, height)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        return findNode:setContentSize(width, height)
    end
    return
end

---------------------------------------------------------
--@brief 刘海屏幕适配
--@param nodeList 需要适配的节点
--@param notchWidth 刘海的宽度,默认不传使用底层获取的
--@return nil
---------------------------------------------------------
function UITool.adaptForLiuHai(nodeList, notchWidth)
    notchWidth = notchWidth or UITool.getLiuHaiWidth()
    nodeList = nodeList or {}
    if notchWidth > 0 then
        --开始适配
        local designSize = UITool.getDesignSizeHD()
        local safeSize = cc.size(designSize.width - notchWidth * 2 ,designSize.height)

        for _, v in pairs(nodeList) do
            local curPosX = v:getPosition()
            local newPosX = notchWidth + curPosX / designSize.width * safeSize.width
            v:setPositionX(newPosX)
            v[".curPosX"] = curPosX
        end
    else
        for _, v in pairs(nodeList) do
            if v[".curPosX"] then
                v:setPositionX(v[".curPosX"])
            end
        end
    end
end

---------------------------------------------------------
--@brief 刘海屏幕适配
--@param 无
--@return 刘海宽度
---------------------------------------------------------
function UITool.getLiuHaiWidth()
    local KW_DEFULT_NOTOUCH_WIDTH = 80
    local notchWidth = display.notchWidth
    local frameSize = cc.Director:getInstance():getOpenGLView():getFrameSize()
    local designSize = UITool.getDesignSizeHD()
    if (frameSize.width / frameSize.height > designSize.width / designSize.height and notchWidth > 0) or (frameSize.width / frameSize.height > 1.8) then
        return KW_DEFULT_NOTOUCH_WIDTH
    else
        return 0
    end
end

-- plist对应的所有SpriteFrame的引用计数加1
-- 主要针对生命周期和app生命周期一致的SpriteFrame使用
function UITool.retainPlistAllSpriteFrames(plistPath)
    local getTables = cc.FileUtils:getInstance():getValueMapFromFile(plistPath)
    if getTables and getTables.frames then
        for pngName, _ in pairs(getTables.frames) do
            local spriteFrame = cc.SpriteFrameCache:getInstance():getSpriteFrameByName(pngName)
            if spriteFrame then
                spriteFrame:retain()
            end
        end
    end
end

---------------------------------------------------------
--@brief 更新节点图片
--@param node 目标节点
--@param url 目标图片地址
--@param name 图片节点名称
--@return nil
---------------------------------------------------------
function UITool.reloadNodeRemoteImage(node, url, name, bForce)
    if not node then
        return 
    end
    if not url or url == "" then
        return
    end

    node:removeAllChildren()
    local size = node:getContentSize()
    local imageNode = XH.RemoteImage.new()
        :setPosition(size.width/2, size.height/2)
        :ignoreContentAdaptWithSize(false)
        :addTo(node)
    if name then
        imageNode:setName(name)
    end

    imageNode:setUrl(url, bForce)
end

function UITool.adaptTextToWidth(widget, width, maxFontSize, minFontSize)
    if widget == nil then
        return 0
    end

    local curFontSize = maxFontSize
    while curFontSize > minFontSize do
        if widget:getContentSize().width > width then
            curFontSize = curFontSize - 1
            widget:setFontSize(curFontSize)
        else
            break
        end
    end
    return curFontSize
end


function UITool.adaptBmfontToWidth(widget, width, maxFontSize, minFontSize)
    if widget == nil then
        return 0
    end

    local curFontSize = maxFontSize
    
    while curFontSize > minFontSize do
        if widget:getBoundingBox().width > width then
            curFontSize = curFontSize - 0.05
            widget:setScale(curFontSize)
        else
            break
        end
    end
    return curFontSize
end

function UITool.setRotation(node, name, rotation)
    if node == nil then
        return
    end
    local findNode = UITool.seekNodeByName(node, name)
    if findNode ~= nil then
        rotation = rotation or 0
        findNode:setRotation(rotation)
        return true
    end
    return false
end

function UITool.printNodeInfo(node, str)
    str = str or '-'
    --while node ~= nil do
        print(str .. (node.__cname or tolua.type(node) or "emptyname"))
        for i=1, #node:getChildren() do
            UITool.printNodeInfo(node:getChildren()[i], str.."-")
        end
    --end
    return false
end

function UITool.gray(node, bSelf)
    local shaderCmd = "ShaderUIGrayScale"
    local glProgram = cc.GLProgramCache:getInstance():getGLProgram(shaderCmd)
    local render = node:getVirtualRenderer()
    if glProgram and render then
        render:setGLProgram(glProgram)
    end
    if not bSelf then
        for _,v in pairs(node:getChildren()) do
            v:setGLProgram(glProgram)
            if v.getVirtualRenderer then
                local rChild = v:getVirtualRenderer()
                if rChild then
                    rChild:setGLProgram(glProgram)
                end
            end
        end
    end
end

function UITool.resetGray(node)
    local shaderCmd = "ShaderPositionTextureColor_noMVP"
    local glProgram = cc.GLProgramCache:getInstance():getGLProgram(shaderCmd)
    local render = node:getVirtualRenderer()
    if render then
        render:setGLProgram(glProgram)
    end

    for _,v in pairs(node:getChildren()) do
        v:setGLProgram(glProgram)
        if v.getVirtualRenderer then
            local rChild = v:getVirtualRenderer()
            if rChild then
                rChild:setGLProgram(glProgram)
            end
        end
    end
end

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

function UITool.printNodeTree(ui, str, content, first)
    str = str or ""
    content = content or ""
    local child = ui:getChildren()
    for i = 1, #child do
        content = content .. "\n" .. str .. "  " .. child[i]:getName()
        if not child[i]:isVisible() then
            content = content .. "  (hide)"
        end
        content = UITool.printNodeTree(child[i], str .. "  ", content, false)
    end
    if first == nil or first == true then
        print(content)
    end
    return content
end

function UITool.blur(sprite, texelSize)
    local vertShaderByteArray = "\n"..  
        "attribute vec4 a_position; \n" ..  
        "attribute vec2 a_texCoord; \n" ..  
        "attribute vec4 a_color; \n"..  
        "#ifdef GL_ES  \n"..  
        "varying lowp vec4 v_fragmentColor;\n"..  
        "varying mediump vec2 v_texCoord;\n"..  
        "#else                      \n" ..  
        "varying vec4 v_fragmentColor; \n" ..  
        "varying vec2 v_texCoord;  \n"..  
        "#endif    \n"..  
        "void main() \n"..  
        "{\n" ..  
        "gl_Position = CC_PMatrix * a_position; \n"..  
        "v_fragmentColor = a_color;\n"..  
        "v_texCoord = a_texCoord;\n"..  
        "}"  

    local roundedCornerShaderByteArray = 
    [[
#ifdef GL_ES
precision mediump float;
#endif

varying vec4 v_fragmentColor;
varying vec2 v_texCoord;

uniform vec2 u_TexelSize;

void main(void)
{
    vec4 sum = vec4(0.0);

    float gaussWeights[49] = float[](
        0.000856, 0.002362, 0.003772, 0.004504, 0.003772, 0.002362, 0.000856,
        0.002362, 0.006519, 0.010362, 0.012337, 0.010362, 0.006519, 0.002362,
        0.003772, 0.010362, 0.016456, 0.019571, 0.016456, 0.010362, 0.003772,
        0.004504, 0.012337, 0.019571, 0.023253, 0.019571, 0.012337, 0.004504,
        0.003772, 0.010362, 0.016456, 0.019571, 0.016456, 0.010362, 0.003772,
        0.002362, 0.006519, 0.010362, 0.012337, 0.010362, 0.006519, 0.002362,
        0.000856, 0.002362, 0.003772, 0.004504, 0.003772, 0.002362, 0.000856
    );

    // 对周围像素以及当前像素进行采样并加权求和
    int index = 0;
    for (int y = -3; y <= 3; ++y) {
        for (int x = -3; x <= 3; ++x) {
            vec2 offset = vec2(float(x)/u_TexelSize.x, float(y)/u_TexelSize.y);
            sum += texture2D(CC_Texture0, v_texCoord + offset) / 49.0;
        }
    }
    gl_FragColor = sum;
}
    ]] 
    
    local glProgram = cc.GLProgram:createWithByteArrays(vertShaderByteArray,roundedCornerShaderByteArray)  
    if glProgram == nil then
        return
    end
    glProgram:bindAttribLocation(cc.ATTRIBUTE_NAME_POSITION,cc.VERTEX_ATTRIB_POSITION)  
    glProgram:bindAttribLocation(cc.ATTRIBUTE_NAME_COLOR,cc.VERTEX_ATTRIB_COLOR)  
    glProgram:bindAttribLocation(cc.ATTRIBUTE_NAME_TEX_COORD,cc.VERTEX_ATTRIB_FLAG_TEX_COORDS)  
    glProgram:link()  
    glProgram:updateUniforms()  

    local GLState = cc.GLProgramState:getOrCreateWithGLProgram(glProgram)
    local size = sprite:getContentSize()
    cc.GLProgramState.setUniformVec2(GLState, "u_TexelSize", cc.p(size.width, size.height))
    local nType = tolua.type(sprite)
    if nType == "cc.Sprite" then
        sprite:setGLProgram(glProgram) 
        glProgram:use()
    else
        local render = sprite:getVirtualRenderer()
        if render.getSprite then
            local sp = render:getSprite()
            if sp then
                sp:setGLProgram(glProgram) 
                glProgram:use()
            end
        end
    end
end

function UITool.fullWidth(node)
    local size = node:getContentSize()
    local visibleSize = cc.Director:getInstance():getVisibleSize()
    if size.width < visibleSize.width then
        local scale = visibleSize.width / size.width
        node:setScaleX(scale)
        node:setPositionX(visibleSize.width / 2)
    else
        node:setPositionX(visibleSize.width / 2)
    end
end


--[[
    plist = "animation/Common/xiaguangshengjing/chupai/chupai.plist",
    fileName = "chupai_%05d.png",
    start = 0,
    endIdx = 14,
    interval = 0.05,
    scale = 2
]]
function UITool.createFrameAni(parent, cfg, sprite)
    local cache = cc.SpriteFrameCache:getInstance()
    local success = cache:addSpriteFrames(cfg.plist)
    if not success then
        print("ERROR: Failed to load plist:", cfg.plist)
        return nil
    end

    -- 创建帧列表
    local frames = {}
    for i = cfg.start, cfg.endIdx do
        local frameName = string.format(cfg.fileName, i) -- 根据实际命名规则调整
        local frame = cache:getSpriteFrame(frameName)
        if frame then
            table.insert(frames, frame)
        else
            print("WARN: Frame not found:", frameName)
        end
    end

    if #frames == 0 then
        print("ERROR: No valid frames loaded.")
        return nil
    end
    -- 创建动画对象
    local animation = cc.Animation:createWithSpriteFrames(frames, cfg.interval or 0.1) -- 0.1秒每帧

    -- 创建动画动作
    local animateAction = cc.Animate:create(animation)
    if cfg.loop then
        animateAction = cc.Repeat:create(animateAction, cfg.loop)
    else
        if cfg.gap then
            animateAction = cc.Sequence:create(animateAction, cc.DelayTime:create(cfg.gap))
        end
        animateAction = cc.RepeatForever:create(animateAction)
    end
    -- 创建精灵并运行动画
    if nil == sprite then
        sprite = cc.Sprite:createWithSpriteFrame(frames[1])
        if not sprite then
            print("ERROR: Failed to create sprite with first frame.")
            return nil
        end
        parent:addChild(sprite)
    end
    if cfg.loop and cfg.endRemove then
        animateAction = cc.Sequence:create(animateAction, cc.CallFunc:create(function()
            sprite:removeFromParent()
        end))
    end
    -- 运行动画
    sprite:runAction(animateAction)
    sprite:setScale(cfg.scale or 1)
    return sprite
end

function UITool.runLobbyAction(node, param)
    local boneName = param[1]
    local slotName = param[2]
    if not node then
        return
    end
    node:addLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = "animation/GoldNew/zzb_jbdt_zjm.json", animationName = "lobby", boneName = boneName, slotName = slotName})
end

return UITool��