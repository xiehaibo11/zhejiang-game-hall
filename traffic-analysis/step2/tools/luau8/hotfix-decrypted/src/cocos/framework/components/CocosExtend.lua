local Node = cc.Node

---------------------------------------------------------------------------------------------
---------------------------------------------------------------------------------------------

local function setGrayWithShader(imgNode)
    -- 顶点shader
    local vertex =
        [[
        attribute vec4 a_position;
        attribute vec2 a_texCoord;
        attribute vec4 a_color;
        #ifdef GL_ES
        varying lowp vec4 v_fragmentColor;
        varying mediump vec2 v_texCoord;
        #else
        varying vec4 v_fragmentColor;
        varying vec2 v_texCoord;
        #endif
        void main()
        {
            gl_Position = CC_PMatrix * a_position;
            v_fragmentColor = a_color;
            v_texCoord = a_texCoord;
        }
    ]]

    -- 片段shader
    local fragment =
        [[
        #ifdef GL_ES
        precision mediump float;  // shader默认精度为double，openGL为了提升渲染效率将精度设为float
        #endif
        // varying变量为顶点shader经过光栅化阶段的线性插值后传给片段着色器
        varying vec4 v_fragmentColor;  // 颜色
        varying vec2 v_texCoord;       // 坐标
        void main(void)
        {
            // texture2D方法从采样器中进行纹理采样，得到当前片段的颜色值。CC_Texture0即为一个采样器
            vec4 c = texture2D(CC_Texture0, v_texCoord);
            // c.rgb即是像素点的三种颜色，dot为点乘，vec3为经验值，可以随意修改
            float gray = dot(c.rgb, vec3(0.299, 0.587, 0.114));
            // shader的内建变量，表示当前片段的颜色
            gl_FragColor.xyz = vec3(gray);
            // a为透明度
            gl_FragColor.a = c.a;
        }
    ]]
    local pProgram = cc.GLProgram:createWithByteArrays(vertex, fragment)
    imgNode:setGLProgram(pProgram)
end

local setGray
setGray = function(node, isGray, affectTouch, isChildrenAlso)
    if affectTouch then
        if node.isTouchEnabled then
            node["__TouchEnabled__"] = node["__TouchEnabled__"] or node:isTouchEnabled()
            if node["__TouchEnabled__"] then
                node:setTouchEnabled(not isGray)
            end
        end

        if node.isEnabled then
            node["__Enabled__"] = node["__Enabled__"] or node:isEnabled()
            if node["__Enabled__"] then
                node:setEnabled(not isGray)
            end
        end
    end

    if node[".classname"] == "ccui.ImageView" then
        local State = {Normal = 0, Gray = 1}
        local willState = isGray and State.Gray or State.Normal
        local render = node:getVirtualRenderer()
        local nowState = render:getState()
        if willState ~= nowState then
            render:setState(willState)
        end
    elseif node[".classname"] == "ccui.Button" or node[".classname"] == "ccui.CheckBox" then
        if not affectTouch then
            node:setBright(not isGray)
        end
        if node[".classname"] == "ccui.Button" then
            local render = node:getTitleRenderer()
            setGray(render, isGray, affectTouch, isChildrenAlso)
        end
    elseif node[".classname"] == "ccui.TextBMFont" then
        local render = node:getVirtualRenderer()
        if render["__GLProgram_isGray__"] == isGray then
            return
        end

        render["__GLProgram_isGray__"] = isGray

        if isGray then
            render["__GLProgram__"] = render["__GLProgram__"] or render:getGLProgram()
            setGrayWithShader(render)
        else
            local origalGLProgram = render["__GLProgram__"]
            if origalGLProgram then
                render:setGLProgram(origalGLProgram)
            end
        end
    elseif node[".classname"] == "ccui.Text" or node[".classname"] == "cc.Label" then
        node["__origalColor__"] = node["__origalColor__"] or node:getTextColor()
        if isGray then
            local origalColor = node["__origalColor__"]
            local grayColor = (origalColor.r * 299 + origalColor.g * 587 + origalColor.b * 114 + 500) / 1000
            node:setTextColor(cc.c3b(grayColor, grayColor, grayColor))
        else
            node:setTextColor(node["__origalColor__"])
        end

        local outLineSize = node:getOutlineSize()
        if outLineSize > 0 then
            node["__effectColor__"] = node["__effectColor__"] or node:getEffectColor()
            if isGray then
                local origalColor = node["__effectColor__"]
                local grayColor = (origalColor.r * 299 + origalColor.g * 587 + origalColor.b * 114 + 500) / 1000
                node:enableOutline(cc.c3b(grayColor, grayColor, grayColor), outLineSize)
            else
                node:enableOutline(node["__effectColor__"], outLineSize)
            end
        end
    end

    if isChildrenAlso then
        local children = node:getChildren()
        for _, v in ipairs(children) do
            setGray(v, isGray, affectTouch, isChildrenAlso)
        end
    end
end

-- ImageView控件支持设置变灰
function ccui.ImageView:setGrayed(isGray, isChildrenAlso)
    setGray(self, isGray, false, isChildrenAlso)
end

-- 节点递归置灰/禁用
-- 重要：affectTouch = false/nil, 可触摸状态与isGray无关，不代表禁用触摸，只是不修改原先的触摸状态，比如某些场景需要灰色按钮依旧可以触发点击
-- affectTouch = true, 可触摸状态由isGray决定，置灰时不可触摸，反之可触摸，通常情况下置灰效果与可触摸效果是需要同步修改的
function Node:setGrayedAndEnabled(isGray, affectTouch)
    setGray(self, isGray, affectTouch, true)
end
�