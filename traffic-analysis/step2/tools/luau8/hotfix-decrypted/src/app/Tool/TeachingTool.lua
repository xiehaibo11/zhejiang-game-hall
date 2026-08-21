local TeachingTool = {}

--[[
    @desc: 创建一个触控交互层
    -- setAllowAreas，设置允许穿透的区域，结构 { x=1, y=1, width=1, height=1 }，其中x,y为左下角左边点
    @return: node
]]
function TeachingTool:createTouchMaskLayer()
    local layer = cc.Layer:create()
    layer:setTouchEnabled(true)

    layer._allowAreas = {}

    -- 创建单点触摸监听器
    local listener = cc.EventListenerTouchOneByOne:create()
    listener:setSwallowTouches(true) -- 设置吞噬触摸（默认吞噬所有触摸）

    local touchEvent = function(touch, event)
        if #layer._allowAreas == 0 then
            return false
        end
        -- 将触摸坐标转换为当前层的本地坐标系
        local touchLocation = touch:getLocation()
        local localPos = layer:convertToNodeSpace(touchLocation)

        -- 判断是否在允许穿透的区域
        for _, area in pairs(layer._allowAreas) do
            if cc.rectContainsPoint(area, localPos) then
                return false -- 允许事件穿透
            end
        end
        return true
    end

    -- 触摸开始事件处理
    listener:registerScriptHandler(touchEvent, cc.Handler.EVENT_TOUCH_BEGAN)

    -- 将监听器绑定到事件分发器
    cc.Director:getInstance():getEventDispatcher():addEventListenerWithSceneGraphPriority(listener, layer)

    -- 设置穿透区域的公共方法
    function layer.setAllowAreas(this, rects)
        this._allowAreas = {}
        for _, rect in ipairs(rects) do
            table.insert(this._allowAreas, rect and cc.rect(math.floor(rect.x), math.floor(rect.y), math.floor(rect.width), math.floor(rect.height)) or nil)
        end
    end

    function layer.showDebugFrame(this)
        if this._debugDraw then
            this._debugDraw:removeFromParent()
        end

        if #this._allowAreas > 0 then
            local drawNode = cc.DrawNode:create()
            for _, area in ipairs(this._allowAreas) do
                drawNode:drawRect(cc.p(area.x, area.y), cc.p(area.x + area.width, area.y + area.height), cc.c4f(0, 1, 0, 0.5))
            end
            this:addChild(drawNode)
            this._debugDraw = drawNode
        end
    end

    return layer
end

--[[
    @desc: 创建一个遮罩挖空层
    --@params: 结构 { x=1, y=1, width=1, height=1 }，其中x,y为中心坐标
    @return:node
]]
function TeachingTool:createMaskLayer(paramRect)
    -- 获取实际分辨率
    local visibleSize = cc.Director:getInstance():getVisibleSize()

    -- 设置遮罩层覆盖全屏
    local maskLayer = cc.Node:create()
    maskLayer:setContentSize(visibleSize)
    maskLayer:setAnchorPoint(0.5, 0.5)
    maskLayer:setPosition(visibleSize.width / 2, visibleSize.height / 2)

    -- 挖空区域
    local maskSprite = cc.Sprite:create()
    cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/Common/Image/TeachingMask.plist")
    maskSprite:setSpriteFrame("Teaching_mask.png")
    maskSprite:setTextureRect(cc.rect(0, 0, visibleSize.width, visibleSize.height))
    maskSprite:setPosition(visibleSize.width / 2, visibleSize.height / 2)
    maskSprite:setAnchorPoint(0.5, 0.5)
    maskLayer:addChild(maskSprite)
    maskSprite:setBlendFunc({src = gl.SRC_ALPHA, dst = gl.ONE_MINUS_SRC_ALPHA})

    -- 顶点着色器（保持原样）
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
            void main() {
            gl_Position = CC_PMatrix * a_position;
            v_fragmentColor = a_color;
            vec2 t_texCoord = vec2(0.0,0.0);
            if(a_position.x>0.0) {
                t_texCoord.x = 1.0;
            } else {
                t_texCoord.x = 0.0;
            }
            if(a_position.y>0.0) {
                t_texCoord.y = 1.0;
            } else {
                t_texCoord.y = 0.0;
            }
            v_texCoord = t_texCoord;
            }
        ]]

    -- 修正后的片段着色器
    local fragSource =
        [[
            #ifdef GL_ES
            precision mediump float;
            #endif

            varying vec4 v_fragmentColor;
            varying vec2 v_texCoord;

            uniform float u_holeCenterX;      // 中心坐标
            uniform float u_holeCenterY;      // 中心坐标
            uniform float u_holeSizeX;        // 方框尺寸
            uniform float u_holeSizeY;        // 方框尺寸
            uniform float u_feather;        // 羽化范围
            uniform float u_cornerRadius; // 圆角半径（单位：像素）
            uniform float u_resolutionWidth;
            uniform float u_resolutionHeight;

            void main() {
                vec2 pos = vec2(v_texCoord.x * u_resolutionWidth, v_texCoord.y * u_resolutionHeight);

                // 计算矩形区域边界
                vec2 halfSize = vec2(u_holeSizeX, u_holeSizeY) * 0.5;
                vec2 u_holeCenter = vec2(u_holeCenterX, u_holeCenterY);
                vec2 minCorner = u_holeCenter - halfSize;
                vec2 maxCorner = u_holeCenter + halfSize;

                // 计算到矩形边界的距离
                float distX = max(minCorner.x - pos.x, pos.x - maxCorner.x);
                float distY = max(minCorner.y - pos.y, pos.y - maxCorner.y);

                // 圆角矩形SDF计算
                vec2 center = (minCorner + maxCorner) * 0.5;
                vec2 extent = (maxCorner - minCorner) * 0.5 - u_cornerRadius; // 收缩区域
                vec2 q = abs(pos - center) - extent;
                float distance = length(max(q, 0.0)) + min(max(q.x, q.y), 0.0) - u_cornerRadius;

                // 羽化处理
                float alpha = smoothstep(-u_feather, u_feather, distance);
                float targetAlpha = 0.7;
                gl_FragColor = vec4(0.0, 0.0, 0.0, alpha * targetAlpha);
            }
        ]]

    -- 创建并绑定 Shader
    local shader = cc.GLProgram:createWithByteArrays(vertex, fragSource)
    shader:bindAttribLocation(cc.ATTRIBUTE_NAME_POSITION, cc.VERTEX_ATTRIB_POSITION)
    shader:bindAttribLocation(cc.ATTRIBUTE_NAME_COLOR, cc.VERTEX_ATTRIB_COLOR)
    shader:bindAttribLocation(cc.ATTRIBUTE_NAME_TEX_COORD, cc.VERTEX_ATTRIB_TEX_COORD)

    shader:link()
    shader:updateUniforms()
    shader:retain()

    maskSprite:setGLProgram(shader)

    local programState = maskSprite:getGLProgramState()
    programState:setUniformFloat("u_holeCenterX", paramRect.x)
    programState:setUniformFloat("u_holeCenterY", paramRect.y)
    programState:setUniformFloat("u_holeSizeX", paramRect.width)
    programState:setUniformFloat("u_holeSizeY", paramRect.height)
    programState:setUniformFloat("u_cornerRadius", 15) -- 圆角半径
    programState:setUniformFloat("u_feather", 10) -- 羽化范围
    programState:setUniformFloat("u_resolutionWidth", visibleSize.width)
    programState:setUniformFloat("u_resolutionHeight", visibleSize.height)

    return maskLayer, maskSprite
end

return TeachingTool
)