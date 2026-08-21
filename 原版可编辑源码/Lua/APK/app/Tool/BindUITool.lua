local BindUITool = {}

local DefaultRegex = "//^_.*" --默认查找节点的正则表达式，"_"下划线开头的节点

---------------------------------------------------------
-- @brief 绑定CSB
-- @param bindTo  绑定到哪个对象
-- @param csbPath  csb路径
-- @param bindingInfo  绑定信息
-- @param regex  查找节点的正则表达式
-- @return nil
---------------------------------------------------------
function BindUITool.bindingCSB(bindTo, csbPath, bindingInfo, regex)
    if not bindTo or not csbPath or not bindingInfo then
        return
    end

    local rootNode = cc.CSLoader:createNodeWithVisibleSize(csbPath)
    if not rootNode then
        return
    end

    BindUITool.bindTo(bindTo, rootNode, bindingInfo, regex)
    return rootNode
end

---------------------------------------------------------
-- @brief 绑定节点
-- @param node  节点对象
-- @param bindingInfo  绑定信息
-- @param regex  查找节点的正则表达式
-- @return nil
---------------------------------------------------------
function BindUITool.bindingNode(node, bindingInfo, regex)
    BindUITool.bindTo(node, node, bindingInfo, regex)
end

---------------------------------------------------------
-- @brief 具体绑定操作
-- @param bindTo  绑定到哪个对象
-- @param node  节点对象
-- @param bindingInfo  绑定信息
-- @param regex  节点对象
-- @return nil
---------------------------------------------------------
function BindUITool.bindTo(bindTo, node, bindingInfo, regex)
    local tmp = {}
    for name, info in pairs(bindingInfo) do
        if info.beginIndex and info.endIndex then
            for index = info.beginIndex, info.endIndex do
                local tempInfo = clone(info)
                tempInfo.beginIndex = nil
                tempInfo.endIndex = nil
                tempInfo.varName = tempInfo.varName .. index
                local tempName = name .. index
                tmp[tempName] = tempInfo
            end
        end
    end
    for tempName, tempInfo in pairs(tmp) do
        bindingInfo[tempName] = tempInfo
    end

    local findChindrenRegex = regex or DefaultRegex
    local children = cc.utils:findChildren(node, findChindrenRegex)
    for _, child in pairs(children) do
        local childName = child:getName()
        local childBindInfo = bindingInfo[childName]
        if childBindInfo then
            -- 绑定变量
            local varName = childBindInfo.varName
            if varName and varName ~= "" then
                if childBindInfo.type and childBindInfo.type == XH.UI_TYPE.BUTTON then
                    bindTo[varName] = XH.UIButton.create(child, childBindInfo.style)
                elseif childBindInfo.type and childBindInfo.type == XH.UI_TYPE.IMAGE_TOBUTTON then
                    bindTo[varName] = XH.UIButton.create(child, childBindInfo.style)
                elseif childBindInfo.type and childBindInfo.type == XH.UI_TYPE.PANEL_TOBUTTON then
                    bindTo[varName] = XH.UIButton.create(child, childBindInfo.style)
                elseif childBindInfo.type and childBindInfo.type == XH.UI_TYPE.REMOTEIMAGE then
                    bindTo[varName] = XH.UIRemoteImage.create(child)
                elseif childBindInfo.type and childBindInfo.type == XH.UI_TYPE.REMOTEIMAGECLIP then
                    bindTo[varName] = XH.UIRemoteImage.createClip(child)
                else
                    bindTo[varName] = child
                end
            end

            -- 绑定触摸函数
            local onTouch = BindUITool.switchFuncNameToFunc(bindTo, childBindInfo.onTouch)
            onTouch = type(onTouch) == "function" and onTouch or nil
            local onTouchEnded = BindUITool.switchFuncNameToFunc(bindTo, childBindInfo.onTouchEnded)
            onTouchEnded = type(onTouchEnded) == "function" and onTouchEnded or nil
            local onSelect = BindUITool.switchFuncNameToFunc(bindTo, childBindInfo.onSelect)
            onSelect = type(onSelect) == "function" and onSelect or nil
            if onTouch or onTouchEnded or onSelect then
                local touchCallBack = function (send, eventType)
                    if onTouch then
                        onTouch(send, eventType)
                    end
                    if eventType == ccui.TouchEventType.ended then
                        if onTouchEnded then
                            onTouchEnded(send, eventType)
                        end
                    end
                end
                local checkBoxCallBack = function (send, eventType)
                    if onSelect then
                        onSelect(send, eventType)
                    end
                end
                if childBindInfo.type and 
                (childBindInfo.type == XH.UI_TYPE.BUTTON 
                or childBindInfo.type == XH.UI_TYPE.IMAGE_TOBUTTON
                or childBindInfo.type == XH.UI_TYPE.PANEL_TOBUTTON) then
                    child:setClickCallBack(touchCallBack)
                elseif childBindInfo.type == XH.UI_TYPE.CHECKBOX then
                    child:addEventListener(checkBoxCallBack)
                elseif child.addTouchEventListener then
                    child:addTouchEventListener(touchCallBack)
                end
            end

            --层级
            local zOrder = childBindInfo.ZOrder
            if zOrder and zOrder.setLocalZOrder then
                child:setLocalZOrder(zOrder)
            end
        end
    end
end

function BindUITool.switchFuncNameToFunc(bindTo, onTouch)
    if type(onTouch) == "string" then
        local callback = bindTo[onTouch]
        if callback and type(callback) == "function" then
            onTouch = handler(bindTo, callback)
        end
    end
    return onTouch
end

return BindUITool