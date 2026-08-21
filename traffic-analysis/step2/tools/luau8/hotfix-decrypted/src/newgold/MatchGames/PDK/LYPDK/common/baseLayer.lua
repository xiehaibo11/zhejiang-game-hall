--龙岩跑得快基类
--ganpengjin

local baseLayer = class("baseLayer", cc.load("mvc").ViewBase)

function baseLayer:onCreate()
    self.audio         =  require("newgold.MatchGames.PDK.LYPDK.common.pukeAudio")
    -- self.logicAnalysis = require("newgold.MatchGames.PDK.LYPDK.common.PDKCardAnalysis")

    if g_gameGlobal:isXuanChengPDK() then 
    elseif g_gameGlobal:isZYPDK() then 
    else
        self.logicAnalysis  =  require("newgold.MatchGames.PDK.LYPDK.common.PDKCardAnalysis")
    end

end

function baseLayer:initUIS(  )
    -- body
end

function baseLayer:playStartAnimation(  )
    -- body
end

function baseLayer:onPlayTouchedSFX()
    -- body
end

function baseLayer:findChildWithName( node ,name )
    -- body
    if not node then
        return nil;
    end

    local child = node:getChildByName(name);
    if child then
        return child ;
    end

    local childs = node:getChildren();

    for i,v in ipairs(childs) do
        local c = v;
        if c then
            local f = self:findChildWithName(c,name);
            if f then 
                return f;
            end
        end
    end 

    return nil;
end

--按钮事件添加
function baseLayer:addButtonTouchedEventByBtnName(btnName, cb)
    -- body
    if not btnName then
        return nil;
    end

    local btnObj = self:findChildWithName(self.resourceNode_, btnName);

    if not btnObj then
        return nil;
    end

    local function buttonTouchEventsCallBack(sender, eventType)
        -- body
        if eventType ~= cc.EventCode.ENDED then 
            return;
        end    

        self:onPlayTouchedSFX();

        if cb then
            cb(sender);
        end

    end

    btnObj:addTouchEventListener(buttonTouchEventsCallBack)
    btnObj:setTouchEnabled(true);
    btnObj:setPressedActionEnabled(true);    
    return btnObj;
end

--Image图片事件添加
function baseLayer:addImageTouchedEventByImgName(imgName, cb)
    -- body
    if not imgName then
        return nil;
    end

    local btnObj = self:findChildWithName(self.resourceNode_, imgName);

    if not btnObj then
        return nil;
    end

    local function buttonTouchEventsCallBack(sender, eventType)
        -- body
        if eventType ~= cc.EventCode.ENDED then 
            return;
        end    
        
        self:onPlayTouchedSFX();

        if cb then
            cb(sender);
        end

    end

    btnObj:addTouchEventListener(buttonTouchEventsCallBack)
    btnObj:setTouchEnabled(true); 
    return btnObj;
end

--创建骨骼动画
function baseLayer:createSkeletonAnimation(jsonPath, atlasPath, scale)
    -- body
    if not jsonPath then
        return;
    end


    if not atlasPath then
        return;
    end

    if not scale then
        scale = 1;
    end

    return sp.SkeletonAnimation:create(jsonPath, atlasPath, scale);
end

function baseLayer:onKeyBoardEvent( keyCode, event )
    -- body
    if keyCode == cc.KeyCode.KEY_BACK then
        self:onBackEvent(keyCode, event);
     end
end

--监听手机返回键
function baseLayer:onBackEvent(keyCode, event)
    
end

function baseLayer:registerScriptHandlerEvents()
    -- body
    local function onNodeEvent(event)
        if event == "enter" then
            self:onEnter();
        elseif event == "exit" then
            self:onExit();
        elseif name == "cleanup" then  
            self:onCleanup();
        end
    end

    self:registerScriptHandler(onNodeEvent)
    self:registerKeyReleaseHandler();
end

function baseLayer:onExit(  )
    -- body
    release_print("baseLayer onExit");
    self:releaseRes();
end

function baseLayer:releaseRes(  )
    -- body
end

function baseLayer:onCleanup(  )
    -- body
    release_print("baseLayer onCleanup");
end

--注册手机返回键
function baseLayer:registerKeyReleaseHandler()
    local layer = cc.Layer:create() 
    local listener = cc.EventListenerKeyboard:create()
    listener:registerScriptHandler(handler(self, self.onKeyBoardEvent), cc.Handler.EVENT_KEYBOARD_RELEASED )
    self._eventDispatcher = layer:getEventDispatcher()
    self._eventDispatcher:addEventListenerWithSceneGraphPriority(listener, self);
end

function baseLayer:onPlayTouchedSFX(  )
    -- body
    NG.soundManager:playMatchEffect("sound/audio_button_click.mp3");    
end


function baseLayer:sendMsg(msgType, msgBody )
    -- body
    if msgType == nil then
        return;
    end
    
    g_longConnect:sendMsg(msgType, msgBody);   
end


return baseLayer;O