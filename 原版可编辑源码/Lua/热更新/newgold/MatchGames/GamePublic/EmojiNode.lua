
------------------------------计分界面----------------------------
local EmojiNode = class("EmojiNode", cc.Node)

local ExternalFunc = require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.ExternalFunc")


function EmojiNode:ctor(emojiKind, emojiIdx, isRight, callBack)
    if emojiIdx then
        local emojiConfig = EmojiNode.getChatFaceConfig(emojiKind)
        if emojiKind == 2 then
            local aniName = "animation0"
        
            local csbPath = string.format("Match/chat/emoji2/emoji_%02d.csb", emojiIdx)
            if cc.FileUtils:getInstance():isFileExist(csbPath) then
                local node = cc.CSLoader:createNode(csbPath)
                local actTimeLine = cc.CSLoader:createTimeline(csbPath)
                if not tolua.isnull(node) and not tolua.isnull(self) then 
                    node:runAction(actTimeLine)
                    actTimeLine:play("animation0", true) 
                    node:setPosition(82, 82)
                    self:addChild(node)

                    if isRight then
                        node:setScaleX(-1)
                    end
                end 
            end
        else
            display.loadSpriteFrames("chat/chat0.plist", "chat/chat0.png")
            local chatSp = cc.Sprite:create()
            --TODO 判断在游戏牌桌内把对家表情向下移动
            chatSp:setAnchorPoint(0, 0)

            local frame = cc.SpriteFrameCache:getInstance():getSpriteFrame(emojiConfig.formatStrFunc(emojiIdx))

            if frame then
                chatSp:setSpriteFrame(frame)
                chatSp:stopAllActions()
                chatSp:runAction(cc.RepeatForever:create(
                    cc.Sequence:create(
                        cc.MoveBy:create(0.3,cc.p(0,4)),
                        cc.MoveBy:create(0.1,cc.p(0,-4)),
                        cc.MoveBy:create(0.1,cc.p(0,4)),
                        cc.MoveBy:create(0.1,cc.p(0,-4)),
                        nil)
                    )
                )
            end

            chatSp:setPosition(-60,0)
            
            self:addChild(chatSp)
        end
    end
    
    self:setCascadeOpacityEnabled(true)
    self:setOpacity(0)
    self:runAction(cc.Sequence:create(
        cc.FadeIn:create(0.4),
        cc.DelayTime:create(2),
       -- cc.FadeOut:create(0.4),
        cc.CallFunc:create(function()
            self:removeSelf()
            if type(callBack) == "function" then
                callBack()
            end
        end),
        nil))
end

function EmojiNode.getChatFaceConfig(emojiKind)
    if emojiKind == 2 then
        return {
            preloadFunc = function()                
                display.loadSpriteFrames("chat/emoji2/emoji.plist", "chat/emoji2/emoji.png")
            end,
            count = 27,
            formatStrFunc = function(idx)
                if idx then
                    return string.format( "chat/emoji2/emoji%02d01.png", idx+1 )
                end
                return ""
            end
        }
    else
        return {
            preloadFunc = function()
                display.loadSpriteFrames("chat/chat0.plist", "chat/chat0.png")
            end,
            count = 20,
            formatStrFunc = function(idx)
                if idx then
                    return string.format( "chat/chat_%d.png", idx )
                end
                return ""
            end
        }
    end
end

return EmojiNode