local UIButton = {}

-- local ScaleBeganTime = 0.1
-- local ScaleEndTime = 0.1
local NormalColor = cc.c3b(255, 255, 255)
local ClickDownColor = cc.c3b(160, 160, 160)
local NormalScale = 1
local ClickDownScale = 0.9

-- 按钮点击风格
UIButton.CLICK_STYLE = {
    DEFAULT = 1, -- 默认，有缩放，有颜色变化
    NOSCALE = 2, -- 无缩放，有颜色变化
    NOCOLOR = 3, -- 有缩放，无颜色变化
    NOEFFECT = 4,-- 无缩放，无颜色变化
}

UIButton.CLICK_PARAM = {
    [UIButton.CLICK_STYLE.DEFAULT]  = { clickScale = ClickDownScale, clickColor = ClickDownColor },
    [UIButton.CLICK_STYLE.NOSCALE]  = { clickScale = NormalScale, clickColor = ClickDownColor },
    [UIButton.CLICK_STYLE.NOCOLOR]  = { clickScale = ClickDownScale, clickColor = NormalColor },
    [UIButton.CLICK_STYLE.NOEFFECT] = { clickScale = NormalScale, clickColor = NormalColor },
}

function UIButton.setDefaultClickEffect(clickEffect)
    UIButton.__defaultClickEffect = clickEffect
end

function UIButton.setPlaySoundFunc(func)
    UIButton.__clickSoundFunc = func
end

function UIButton.playEffect(effectPath)
    if UIButton.__clickSoundFunc then
        UIButton.__clickSoundFunc(nil, effectPath or UIButton.__defaultClickEffect)
    end
end

function UIButton.create(btn, style)
    function btn:setClickEffect(path)
        self.__clickEffectPath = path
    end

    function btn:closeClickEffect()
        self.__clickEffectIsClose = true
    end

    function btn:openClickEffect()
        self.__clickEffectIsClose = false
    end

    function btn:playClickEffect(send, eventType)
        if eventType ~= ccui.TouchEventType.began then
            return
        end

        if self.__clickEffectIsClose then
            return
        end

        UIButton.playEffect(self.__clickEffectPath)
    end

    function btn:setClickActionFunc(func)
        self.__clickActionFunc = func
    end

    function btn:setDefaultClickActionFunc()
        self.__clickActionFunc = function(send, eventType)
            if eventType == ccui.TouchEventType.began then
                -- send:runAction(cc.Spawn:create(
                --     cc.ScaleTo:create(ScaleBeganTime, self.__originScale * self.__clickScale), 
                --     cc.TintTo:create(ScaleBeganTime, self.__clickColor.r, self.__clickColor.g, self.__clickColor.b)
                -- ))
                send:setScale(self.__originScale * self.__clickScale)
                send:setColor(self.__clickColor)
            elseif eventType == ccui.TouchEventType.ended or eventType == ccui.TouchEventType.canceled then
                -- send:runAction(cc.Spawn:create(
                --     cc.ScaleTo:create(ScaleEndTime, self.__originScale), 
                --     cc.TintTo:create(ScaleEndTime, NormalColor.r, NormalColor.g, NormalColor.b)
                -- ))
                send:setScale(self.__originScale)
                send:setColor(NormalColor)
            end
        end
    end

    function btn:playClickAction(send, eventType)
        if self.__clickActionFunc then
            self.__clickActionFunc(send, eventType)
        end
    end

    function btn:setClickStyle(clickScale, clickColor)
        if clickScale and type(clickScale) == "number" then
            self.__clickScale = clickScale
        end
        if clickColor and type(clickColor) == "table" then
            self.__clickColor = clickColor
        end
    end

    function btn:setClickCallBack(handle)
        local function callBack(send, eventType)
            self:playClickEffect(send, eventType)
            self:playClickAction(send, eventType)
            handle(send, eventType)
        end
        self:addTouchEventListener(callBack)
    end

    function btn:init(sStyle)
        if not sStyle or not UIButton.CLICK_PARAM[sStyle] then
            sStyle = UIButton.CLICK_STYLE.DEFAULT
        end
        self.__clickScale = UIButton.CLICK_PARAM[sStyle].clickScale
        self.__clickColor = UIButton.CLICK_PARAM[sStyle].clickColor
        self.__originScale = self:getScale()
        self.__clickEffectPath = nil
        self.__clickEffectIsClose = false
        self:setDefaultClickActionFunc()
        self:setTouchEnabled(true)
        self:setSwallowTouches(true)
        self:setCascadeColorEnabled(true)
    end

    btn:init(style)

    return btn
end

return UIButton}