--[[
 * @Author: huang Rulin
 * @Date: 2018-02-28 03:55:53
 ]]


------------------------------{}----------------------------
local TingCardListNode = class("TingCardListNode", cc.Node)

local oneLineHeight = 70
local oriWidth = 68
local paiScale = 0.4
local firstPos = cc.p(76.25, 22)
local offsetX = 30
local huIconPos1 = cc.p(34, 36)
local huIconPos2 = cc.p(34, 30)
local lineMax = 10
local txtOffset = cc.p(0, -7)

local arrowIconPos = cc.p(33, 59)

function TingCardListNode:ctor(...)
    self:enableNodeEvents()
    display.loadSpriteFrames("res/game/game0.plist", "res/game/game0.png")

    self.showMode = false
    self.curMaxLine = 0;

    self.bg = ccui.Layout:create()
    self.bg:setBackGroundImage("Match/".."game/game_common_form.png", ccui.TextureResType.plistType)
    self.bg:setAnchorPoint(cc.p(0, 0))
    self.bg:setBackGroundImageCapInsets(cc.rect(10, 9, 13, 9))
    self.bg:setContentSize(cc.size(oriWidth, oneLineHeight))
    self.bg:setBackGroundImageScale9Enabled(true)
    self.bg:setClippingEnabled(true)
    self:addChild(self.bg)

    self.huIcon = ccui.ImageView:create("Match/".."game/icon_huTip.png", ccui.TextureResType.plistType)
    self.huIcon:setPosition(huIconPos1)
    self.bg:addChild(self.huIcon)

    self.arrowIcon = ccui.ImageView:create("Match/".."game/card_tip_list_arrow.png", ccui.TextureResType.plistType)
    self.arrowIcon:setPosition(arrowIconPos)
    self.arrowIcon:setVisible(false)
    self.bg:addChild(self.arrowIcon)
    
    self.touchButton = ccui.Button:create("game/icon_huTip.png","","", 1)
    self.touchButton:setPosition(0, 0)
    self.touchButton:setAnchorPoint(cc.p(0, 0))
    self.touchButton:ignoreContentAdaptWithSize(false)
    self.touchButton:setContentSize(cc.size(oriWidth, oneLineHeight))
    self.touchButton:onTouch(handler(self, self.btnEventFunc))
    self.touchButton:setOpacity(0)
    self.bg:addChild(self.touchButton)

    self.cardParent = cc.Node:create()
    self.cardParent:setPosition(firstPos)
    self.bg:addChild(self.cardParent)

    self:setVisible(false)    
end

function TingCardListNode:onEnter()
    local listener = cc.EventListenerTouchOneByOne:create()
    listener:setSwallowTouches(false)
    listener:registerScriptHandler(handler(self,self.onTouchBegan),cc.Handler.EVENT_TOUCH_BEGAN )
    local eventDispatcher = self:getEventDispatcher()
    eventDispatcher:addEventListenerWithSceneGraphPriority(listener, self)
    self._touchListener = listener
end

function TingCardListNode:onExit()
    if self._touchListener then
        self:getEventDispatcher():removeEventListener(self._touchListener)
        self._touchListener = nil
    end
end

function TingCardListNode:refreshShowMode()
    self:stopAllActions()
    local height = self.showMode and (self.curMaxLine+1)*oneLineHeight or oneLineHeight
    local width = self.bg:getContentSize().width
    self.bg:setContentSize( cc.size(width, height) )
    self.arrowIcon:setScaleY(self.showMode and -1 or 1)

    --自动收起
    if self.curMaxLine > 0 and self.showMode then
        local delay = cc.DelayTime:create(2)
        local sequence = cc.Sequence:create(
                            delay,
                            cc.CallFunc:create(function()
                                self.showMode = false
                                self:refreshShowMode()
                            end))
        self:runAction(sequence)
    end
end

function TingCardListNode:onTouchBegan()
    self.showMode = false
    self:refreshShowMode()
end


function TingCardListNode:btnEventFunc( event )
    if event.name == "ended" then
        if event.target == self.touchButton then
            if self.curMaxLine > 0 then
                self.showMode = not self.showMode
                self:refreshShowMode()
            end
        end
    end
end

function TingCardListNode:clearHuCardList()
    self.cardParent:removeAllChildren()
    self:setVisible(false)
    self:stopAllActions()
    self.curMaxLine = 0
end

function TingCardListNode:showHuCardList(tingList, zsList, mutList)
    self:clearHuCardList()

    local line = 0;
    for i, v in pairs(tingList) do
        local imageView = g_gameGlobal:getNormalCard(v)
        imageView:setScale(paiScale)
        imageView:setAnchorPoint(cc.p(0.5, 0))
        line = math.floor((i-1) / lineMax)
        local pos = cc.p( ((i-1)%lineMax)*offsetX, line*oneLineHeight )
        imageView:move(pos)
        self.cardParent:add(imageView)

        if type(zsList) == "table" and zsList[i] then
            local zsText = ccui.Text:create(tostring(zsList[i]).."张", "fonts/fzzhunyuanjianti.ttf", 14)
            zsText:setTextColor(cc.c4b(249, 221, 117, 255))
            zsText:move(cc.pAdd(pos, txtOffset))
            self.cardParent:add(zsText)
        end
    end

    self.curMaxLine = line
    if #tingList > 0 then

        if #tingList <= 10 then
            self.showMode = false
            self.arrowIcon:setVisible(false)
            self.huIcon:setPosition(huIconPos1)
        else
            self.showMode = true
            self.huIcon:setPosition(huIconPos2)
            self.arrowIcon:setVisible(true)
        end
        
        local height = self.showMode and (self.curMaxLine+1)*oneLineHeight or oneLineHeight
        local width = #tingList>=lineMax and oriWidth+lineMax*offsetX or oriWidth+#tingList*offsetX
        self.bg:setContentSize( cc.size(width, height) )
        self:setVisible(true)
        self.arrowIcon:setScaleY(self.showMode and -1 or 1)
        self:refreshShowMode()
    else
        self:setVisible(false)
    end
end

return TingCardListNode�