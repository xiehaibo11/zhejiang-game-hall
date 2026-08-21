local ScrollTipLayer = class("ScrollTipLayer", XH.ViewBase)

local TEXTS_NUMS = 2

ScrollTipLayer.SHOWTYPE = { 
    NONE = 0,
    ONE = 1,        --单行文字,类似只显示一句话
    MORE = 2,       --多行随机文字
}

ScrollTipLayer.ObjName = "ScrollTipLayer"

function ScrollTipLayer:ctor(args)
    ScrollTipLayer.super.ctor(self)
    if not args.showType and not args.showText then
        self:close()
        return
    end 
    self._showType = args.showType
    self._showText = args.showText
    self:initData()
    self:initPanel()
end

function ScrollTipLayer:getCSBPath()
    return "cocosStudio/Common/TipLayer/CSB/ScrollTipLayer.csb"
end

function ScrollTipLayer:getBindingInfo()
    return {
        ["_KW_SCROLL_PANEL"] = {varName = "_ScrollPanel"},
        ["_KW_SCROLL_TEXT_1"] = {varName = "_scrollText1"},
        ["_KW_SCROLL_TEXT_2"] = {varName = "_scrollText2"},
        ["_KW_SCROLL_POS"] = {varName = "_scrollPos"},
    }
end

function ScrollTipLayer:initData()
    self._moveTimes = 0     
    self._initPosY = 0
end

function ScrollTipLayer:initPanel()
    self:initScrollPanel()
    local moveFunc = function()
         -- 进行相应移动
        for i = 1, TEXTS_NUMS do
            if self._moveTimes == i then
                local text1, _ = self:getText()
                self["_scrollText" .. i]:setPositionY(self._initPosY)
                self["_scrollText" .. i]:setString(text1)
                if i == TEXTS_NUMS then
                    self._moveTimes = 0
                end
            end
            local panelSize = self._ScrollPanel:getContentSize()
            local Text1PosY = self["_scrollText" .. i]:getPositionY() + panelSize.height
            self["_scrollText" .. i]:runAction(cc.MoveTo:create(0.5, cc.p(self["_scrollText" .. i]:getPositionX(),Text1PosY)))
        end
        self._moveTimes = self._moveTimes + 1
    end
    local actSequence = cc.Sequence:create(cc.DelayTime:create(4), cc.CallFunc:create(moveFunc))
    local repeatAct = cc.RepeatForever:create(actSequence)
    self._ScrollPanel:runAction(repeatAct)
end

function ScrollTipLayer:initScrollPanel()
    local panelSize = self._ScrollPanel:getContentSize()
    self._initPosY = self._scrollText2:getPositionY() - panelSize.height
    self._scrollText2:setPositionY(self._initPosY)
    local text1,text2 = self:getText()
    self._scrollText1:setString(text1)
    self._scrollText2:setString(text2)
    self._ScrollPanel:setVisible(true)
end

function ScrollTipLayer:getText()
    local showType = self._showType
    local showText = self._showText
    if showType == ScrollTipLayer.SHOWTYPE.ONE then 
        return showText[1],showText[1]
    else
        math.randomseed(tostring(os.time()):reverse():sub(1, 5)) 
        local textNum1 = math.random(#showText)
        local textNum2 = math.random(#showText)
        while textNum1 == textNum2 do
            textNum2 = math.random(#showText)
        end
        return showText[textNum1],showText[textNum2]
    end 
end

function ScrollTipLayer:onClose()
    self:close()
end

--显示窗口
function ScrollTipLayer:showSelf(zOrder)
    local zorder = zOrder or XH.ZORDER.WINDOW
	local runningScene = display.getRunningScene()
    if runningScene then
        self:setName(ScrollTipLayer.ObjName)
        runningScene:addChild(self, zorder)  
	end
end

return ScrollTipLayer