local UIDismissLayer = class("UIDismissLayer")
local CURRENT_MODULE_NAME = ...
local pathKeyWord = import("..Config.PathKeyWord",CURRENT_MODULE_NAME)
local GameSceneDefine = import("..GameScene.GameSceneDefine",CURRENT_MODULE_NAME)
local KW_UI_DISSOLVE_CSB_PATH = pathKeyWord.KW_PATH_POP_LAYER_ART_RESOURCE .. "/DissolveLayer.csb"

local KW_ROOT_LAYER = "KW_ROOT_LAYER"
local KW_BTN_AGREE = "KW_BTN_AGREE"
local KW_BTN_REFUSE = "KW_BTN_REFUSE"
local KW_BTN_CLOSE = "KW_BTN_CLOSE"
local KW_IMG_DISMISS_TIMER = "KW_IMG_DISMISS_TIMER"
local KW_FNT_DISMISS_TIMER = "KW_FNT_DISMISS_TIMER"
local KW_TEXT_PLAYER_STATE = "KW_TEXT_PLAYER_STATE_"
local KW_TEXT_DISMISS_TIMER = 'KW_TEXT_DISMISS_TIMER'
local KW_TEXT_COUNTDOWN = "KW_TEXT_COUNTDOWN"
local KW_TEXT_REQ_DESSOLVE = "KW_TEXT_REQ_DESSOLVE"
local KW_IMG_CHOOSE = "KW_IMG_CHOOSE_"


function UIDismissLayer:ctor()
    self._rootNode = nil
    self._dismissTime = 0
end

function UIDismissLayer:init(node)
    local csbNode = cc.CSLoader:createNode(KW_UI_DISSOLVE_CSB_PATH)
    self._rootNode = csbNode:getChildByName(KW_ROOT_LAYER)
    if self._rootNode == nil then
        return
    end
    self._rootNode:removeFromParent(false)
    node:addChild(self._rootNode)

    Game.UIFunction.addTouchEventListenerByObj(self._rootNode,KW_BTN_AGREE,self,self.onBtnEventAgree)
    Game.UIFunction.addTouchEventListenerByObj(self._rootNode,KW_BTN_REFUSE,self,self.onBtnEventRefuse)
    Game.UIFunction.addTouchEventListenerByObj(self._rootNode,KW_BTN_CLOSE,self,self.onBtnEventClose)

    Game.UIFunction.setVisible(self._rootNode,KW_BTN_CLOSE,false)
    -- Game.UIFunction.setVisible(self._rootNode,KW_IMG_DISMISS_TIMER,true)
end

function UIDismissLayer:onBtnEventAgree(send, eventType)
    if eventType == ccui.TouchEventType.began then
        send:setScale(0.9)
        send:setColor(cc.c3b(160,160,160))
    elseif eventType == ccui.TouchEventType.ended or
        eventType == ccui.TouchEventType.canceled then
        send:setScale(1)
        send:setColor(cc.c3b(255,255,255))
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local event = cc.EventCustom:new("UIDismissLayer.AgreeFlag")
    event.agree = true
    eventDispatcher:dispatchEvent(event)
    self:showBtn(false)
end

function UIDismissLayer:onBtnEventRefuse(send, eventType)
    if eventType == ccui.TouchEventType.began then
        send:setScale(0.9)
        send:setColor(cc.c3b(160,160,160))
    elseif eventType == ccui.TouchEventType.ended or
        eventType == ccui.TouchEventType.canceled then
        send:setScale(1)
        send:setColor(cc.c3b(255,255,255))
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local event = cc.EventCustom:new("UIDismissLayer.AgreeFlag")
    event.agree = false
    eventDispatcher:dispatchEvent(event)
    self:showBtn(false)
end

function UIDismissLayer:onBtnEventClose(send, eventType)
    if eventType == ccui.TouchEventType.began then
        send:setScale(0.9)
        send:setColor(cc.c3b(160,160,160))
    elseif eventType == ccui.TouchEventType.ended or
        eventType == ccui.TouchEventType.canceled then
        send:setScale(1)
        send:setColor(cc.c3b(255,255,255))
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:showDismissPanle(false)
end

function UIDismissLayer:setLeftTime(time)
    local timeStr = "秒后将自动同意"
	self._dismissTime = time
    local timeNode = ccui.Helper:seekWidgetByName(self._rootNode, KW_TEXT_COUNTDOWN)
    if timeNode then
        local strformat = tostring(string.format("%02d",time)) .. timeStr
        timeNode:setString(strformat)
    end
    local nTime = time
    timeNode:stopAllActions()
    timeNode:runAction(cc.RepeatForever:create(cc.Sequence:create(cc.DelayTime:create(1),
        cc.CallFunc:create(function()
            nTime = nTime - 1
            if nTime >= 0 then
                local strTime = tostring(string.format("%02d",nTime)) .. timeStr
                timeNode:setString(strTime)
                -- print('hcc>>strTime:' .. strTime)
            end
        end))))
end

-- 根据首字节获取UTF8需要的字节数
local function getUTF8CharLength(ch)
    local utf8_look_for_table =     {
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
        4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 1, 1,
    }
    return utf8_look_for_table[ch]
end

-- 根据UTF8流获取字符串长度
function UIDismissLayer:getUTF8Length(str)
    local len = 0
    local ptr = 1
    repeat
        local char = string.byte(str, ptr)
        local char_len = getUTF8CharLength(char)
        len = len + 1
        ptr = ptr + char_len
    until (ptr > #str)
    return len
end

-- 截取UTF8字符串
function UIDismissLayer:subUTF8String(str, begin, length)
    begin = begin or 1
    length = length or -1 -- length为-1时代表不限制长度
    local ret = ""
    local len = 0
    local ptr = 1
    repeat
        local char = string.byte(str, ptr)
        local char_len = getUTF8CharLength(char)
        len = len + 1
        if len >= begin and (length == -1 or len < begin + length) then
            for i = 0, char_len - 1 do
                ret = ret .. string.char(string.byte(str, ptr + i))
            end
        end
        ptr = ptr + char_len
    until (ptr > #str)
    return ret
end

-- 字符串换行
function UIDismissLayer:linefeed(str, lineBytes, blankLines)
    if not str then
        print "str is nil"
        return
    end

    if type(str) ~= "string" or type(lineBytes) ~= "number" then
        print "str is not string of type or lineByte is not number of type"
        return
    end

    local resultStr = ""
    local strLen = self:getUTF8Length(str)
    local feedLines = math.ceil(strLen / lineBytes)
    for i = 1, feedLines do
        for j = i - 1, (i - 1) do
            local startIndex = (0 == j) and 1 or lineBytes * j + 1
            -- local endIndex = lineBytes * i + j > strLen and strLen or lineBytes * i
            local lineString = self:subUTF8String(str, startIndex, lineBytes)
            resultStr = resultStr .. lineString

            if (0 ~= string.find(lineString, "\n")) then
                for i = 1, blankLines do
                    resultStr = resultStr .. "\n"
                end
            end
        end
    end
    return resultStr
end

function UIDismissLayer:setText(msg, index)
    msg = msg or ''
    if index == 1 then
        local lineBytes = 25
        local blankLines = 1    
        msg = self:linefeed(msg,lineBytes,blankLines)
    end
    Game.UIFunction.setText(self._rootNode, KW_TEXT_PLAYER_STATE..index, msg)
end

function UIDismissLayer:setInfo(name, index, flag)
    msg = msg or ''
    Game.UIFunction.setText(self._rootNode, KW_TEXT_PLAYER_STATE..index, name)
    if not flag then return end
    if flag == GameSceneDefine.DismissRoomType.REQUEST then
        Game.UIFunction.loadTexture(self._rootNode,KW_IMG_CHOOSE .. index,'img_lb_question.png',ccui.TextureResType.plistType)
    elseif flag == GameSceneDefine.DismissRoomType.AGREE then
        Game.UIFunction.loadTexture(self._rootNode,KW_IMG_CHOOSE .. index,'img_text_yes.png',ccui.TextureResType.plistType)
    elseif flag == GameSceneDefine.DismissRoomType.DISAGREE then
        Game.UIFunction.loadTexture(self._rootNode,KW_IMG_CHOOSE .. index,'img_lb_question.png',ccui.TextureResType.plistType)
    else
        Game.UIFunction.loadTexture(self._rootNode,KW_IMG_CHOOSE .. index,'img_lb_question.png',ccui.TextureResType.plistType)
    end
end

function UIDismissLayer:setTitle(name)
    local str = '玩家['.. name .. ']请求解散房间，是否同意？'
   Game.UIFunction.setText(self._rootNode,KW_TEXT_REQ_DESSOLVE, str) 
end

function UIDismissLayer:showBtn(show)
    Game.UIFunction.setVisible(self._rootNode, KW_BTN_AGREE, show)
    Game.UIFunction.setVisible(self._rootNode, KW_BTN_REFUSE, show)
end

function UIDismissLayer:showDismissPanle(render)
    if self._rootNode then
        self._rootNode:setVisible(render)
    end
end

return UIDismissLayer
'$