local HeadImgView = class("HeadImgView", cc.load("mvc").ViewBase)
local netObj,eventObj = unpack(require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msg_obj"))

local interactiveFaceAnim = {
    
}

local showChatFaceAnim = {
    "chat/newFace/anim/yun1234",
    "chat/newFace/anim/nadao",
    "chat/newFace/anim/kuqi",
    "chat/newFace/anim/touxiang",
    "chat/newFace/anim/mojing",
    "chat/newFace/anim/setx",
    "chat/newFace/anim/ciyaxiao",
    "chat/newFace/anim/jiayou",
    "chat/newFace/anim/liuhan",
    "chat/newFace/anim/keai",
    "chat/newFace/anim/chijing",
    "chat/newFace/anim/yiwen",
    "chat/newFace/anim/shengqi",
    "chat/newFace/anim/zaijian",
    "chat/newFace/anim/zhuakuang",
    "chat/newFace/anim/tus1",
}

local expressionName = {
    "拖鞋",
    "快点",
    "倒茶",
    "小黄人锤子",
    "小黄人抹屎",
    "小黄人点赞",
}

local expressionName10 = {
    "拖鞋十连发",
    "快点十连发",
    "咖啡十连发",
    "捶你十连发",
    "仍粑粑十连发",
    "真棒十连发",
}

function HeadImgView:ctor(params, ...)
    self.posState = 1 --1表示自己，2表示下家，3表示对家，4表示上家
    local params = params or {}
    self.gameType = params.gameType or 0   --0 麻将，1 跑得快，2 三副,4 掼蛋
    cc.SpriteFrameCache:getInstance():addSpriteFrames("Textures/Item/item.plist")
    HeadImgView.super.ctor(self, ...)
end
-- 创建的时候只可能在等待界面
function HeadImgView:onCreate()
    self:createPDKResoueceNode("HeadImgView.csb")

    self.headFrame = self.resourceNode_:getChildByName("headFrame")
    -- self.headFrame:onTouch(handler(self, self.touxiangTouchEvent))

    -- 距离过近
    self.tooNear = ccui.Helper:seekNodeByName(self.headFrame, "tooNear")
    self.tooNear:setLocalZOrder(1)
    -- 头像
    self.headIcon = self.headFrame:getChildByName("headIcon")


    -- 离线头像
    self.offline = self.headFrame:getChildByName("offline")
    self.offline:setLocalZOrder(1)

    -- 托管头像
    self.tuoguan = self.headFrame:getChildByName("tuoguan")
    self.tuoguan:setLocalZOrder(1)


    self.teamImg = self.headFrame:getChildByName("teamImg")
    self.teamImg:setLocalZOrder(1)

    self.teamTagImg = self.teamImg:getChildByName("teamTagImg")

    -- 明牌标签（三副）
    self.mingPaiImg = self.headFrame:getChildByName("mingPaiImg")
    self.mingPaiImg:setLocalZOrder(1)

    self.qipaiImg = self.headFrame:getChildByName("qiPaiImg")
    self.qipaiImg:setLocalZOrder(1)
    
    -- 庄
    self.zhuang = self.headFrame:getChildByName("zhuang")
    self.zhuang:setLocalZOrder(2)


    -- 听
    self.ting = self.headFrame:getChildByName("ting")
    self.ting:setLocalZOrder(2)
    self.ting:hide()

    -- 房主
    self.fangzhu = self.headFrame:getChildByName("fangzhu")
    self.fangzhu:setLocalZOrder(2)

    self.headPanel = self.headFrame:getChildByName("headPanel")

    self.tonglingJia = self.headFrame:getChildByName("jia")
    self.tonglingJia:setLocalZOrder(1)

    -- 准备
    self.zhunbei = self.headFrame:getChildByName("zhunbei")
    self.zhunbei:ignoreContentAdaptWithSize(true)
    self.zhunbei:setScale(0.85)
    local miao = ccui.ImageView:create("MatchAH/".."game/daojishiBg.png", ccui.TextureResType.plistType):addTo(self.zhunbei)
    --miao:setPosition(self.zhunbei:getContentSize().width+50,self.zhunbei:getContentSize().height/2)
    self.zhunbeimiao = miao
    self.zhunbeimiao:setVisible(false)

    self.zhunbeiTime = g_gameGlobal:newLabel({text = "",  fontSize = math.floor(33/0.85), fontColor = cc.c3b(118,66,49) }):setPosition(miao:getContentSize().width/2 - 3, miao:getContentSize().height/2+4):addTo(miao)

    --踢人
    self.tiren = self.headFrame:getChildByName("tiren")
    self.tiren:onClick(handler(self, self.btnEventFunc))

    --------- 头像详情界面信息
    --头像信息
    self.headInfoBg = self.headFrame:getChildByName("headInfoBg")
    self.headInfoBg:setLocalZOrder(2)
    -- 头像
    self.headImg = ccui.Helper:seekNodeByName(self.headFrame, "headImg")
    -- 昵称
    self.nicheng = self.headInfoBg:getChildByName("nicheng")
    self.nicheng:setString("***")
    -- id
    self.idLabel = self.headInfoBg:getChildByName("idLabel")
    -- ip
    self.ipLabel = self.headInfoBg:getChildByName("ipLabel")

    --地位头像
    self.dizhuImage = self.headFrame:getChildByName("statusImage")
    self.dizhuImage:hide()

    -- 房卡数
    self.diamondNum = ccui.Helper:seekNodeByName(self.headFrame, "diamondNum")
    -- 金币数
    self.goldNum = ccui.Helper:seekNodeByName(self.headFrame, "goldNum")
    self.goldIcon = self.headInfoBg:getChildByName("Image_3_0")
    

    --聊天表情
    self.chat_face = self.headFrame:getChildByName("chat_face")
    --聊天语音信息
    self.chat_voice = self.headFrame:getChildByName("chat_voice")
    self.chat_voice:getChildByName("voice_bg"):setVisible(false)
    --语音信息动画
    self.chat_voice_anim = self.chat_voice:getChildByName("voice_anim")
    --文字信息背景
    self.chat_text_bg = self.headFrame:getChildByName("chat_text")
    --文字信息
    self.chat_text = self.chat_text_bg:getChildByName("text")
    --右边文字信息背景
    self.chat_text_bg_right = self.headFrame:getChildByName("chat_text_right")
    --右边文字信息
    self.chat_text_right = self.chat_text_bg_right:getChildByName("text")
    --表情初始位置
    self.aniNode = self.headFrame:getChildByName("aniNode")
    if self.gameType == 2 then
        self.headIcon:loadTexture("game/lyPuKe/sanfuUI/touxiang.png", ccui.TextureResType.localType)
        self.headFrame:setBackGroundImage("MatchAH/".."common/logo1_frame.png", ccui.TextureResType.plistType)
    end

    --头像播放动画位置
    self.animationPos = self.headFrame:getChildByName("animationPos")
    self.animationPos:setLocalZOrder(10)

    self.chat_face_origin_pos = cc.p(self.chat_face:getPosition())
    self.chat_text_bg_right_origin_pos = cc.p(self.chat_text_bg_right:getPosition())
    self.chat_text_bg_origin_pos = cc.p(self.chat_text_bg:getPosition())
    self.chat_voice_origin_pos = cc.p(self.chat_voice:getPosition())

    --调整聊天显示的在头像上层
    self.chat_face:setLocalZOrder(1)
    self.chat_voice:setLocalZOrder(1)
    self.chat_text_bg:setLocalZOrder(1)
    self.chat_text_bg_right:setLocalZOrder(1)

    -- 互动表情
    local hudongList = self.headInfoBg:getChildByName("hudongList")
    hudongList:setScrollBarEnabled(false)
    hudongList:removeAllChildren()
    -- 互动道具十连发
    self.checkBox = self.headInfoBg:getChildByName("CheckBox_13")
    self.checkBox:onClick(handler(self,self.onUseTenClick))
    -- 十连发勾选项
    local isChoose10Lianfa = false
    self.checkBox:setSelected(isChoose10Lianfa)

    if g_gameGlobal:hideGameTalk() then 
        hudongList:hide()
        self.checkBox:hide()
    end

    local hudongItm =  self.headInfoBg:getChildByName("Panel_1")
    hudongItm:hide()
    -- for i, v in pairs(hudongList:getChildren()) do
    --     v.__idx = i
    --     v:onTouch(handler(self, self.hudongTouchEvent))
    -- end
    self.hudongzhezhao = self.headInfoBg:getChildByName("Image_2")
    self.hudongdownTime = self.hudongzhezhao:getChildByName("Text_3")
    self.hudongzhezhao:setVisible(false)

    --转运中
    self.zhuanyunzhong = self.headFrame:getChildByName("zhuanyunzhong")
    self.zhuanyunzhong:setVisible(false)
    --金寨加番
    self._txtJinZhaiJiaFan = self.headFrame:getChildByName("jinzhaiJiaFan")
    self._txtJinZhaiJiaFan:setVisible(false)
    self.chat_text_bg_right = self.headFrame:getChildByName("chat_text_right")
     --------- 头像详情界面信息


     -- 设置触摸事件，防止触摸事件传到下层
    local listener = cc.EventListenerTouchOneByOne:create()
    listener:setSwallowTouches(true)
    listener:registerScriptHandler(handler(self,self.onTouchBegan),cc.Handler.EVENT_TOUCH_BEGAN )
    local eventDispatcher = self:getEventDispatcher()
    eventDispatcher:addEventListenerWithFixedPriority(listener, -100)
    self._touchListener = listener

    if g_gameGlobal:getVipTableID() and g_gameGlobal:getVipTableID() > 0 then 
    else
        self.goldIcon:loadTexture("game/gold_num.png", ccui.TextureResType.localType)
    end

    self:netEvent()
end

function HeadImgView:showTingIcon(bool)
    self.ting:setVisible(bool) 
end

function HeadImgView:setTingIcon(isFirst)
    self.ting:ignoreContentAdaptWithSize(true)
end

function HeadImgView:netEvent()
    self:addChild(netObj.new(g_msgDefinitions.MSG_GET_PLAYER_EMOJIDATA_ACK, function (event, msg)
        local data = {}
        data.EmojiDataVo = msg.EmojiDataVo
        data.diamond = msg.diamond
        data.gold = msg.gold
        data.vipFreeNum = msg.VipFreeNum
        g_gameGlobal:setExpressionData(data)  
        if self.posState == 1 then
            if g_gameGlobal:getVipTableID() and g_gameGlobal:getVipTableID() > 0 then 
            else
                if not g_gameGlobal:getIsPlayingGameLog() then
                    self:getHeadNodeByName('userGold'):setString(data.gold)
                end
            end
        end
        if self and  not tolua.isnull(self) then
            self:hudongListShow()
        end
    end))
    self:addChild(eventObj.new("closeHudongbiaoqingView", function (event, msg)  
        if self and  not tolua.isnull(self) then
            self:hideHeadBg()
        end       
    end))
end

function HeadImgView:clearEventTouch()
    if self._touchListener then
        self:getEventDispatcher():removeEventListener(self._touchListener)
        self._touchListener = nil
    end
end

-- 初始化头像位置,初始化时只有空白头像，这时候还没坐人
function HeadImgView:initHeadImgPos(posState)
    self.posState = posState
    self:getHeadNodeByName('gold_bg'):setVisible(self.posState == 1)
    self:getHeadNodeByName('userGold'):setVisible(self.posState == 1)
    self.headFrame:move(g_gameGlobal.tableWaitingHeadPosTbl[posState].head)
    self.headInfoBg:setAnchorPoint(g_gameGlobal.tableWaitingHeadPosTbl[posState].infoAnchor)
    self.headInfoBg:setPositionPercent(g_gameGlobal.tableWaitingHeadPosTbl[posState].infoPercent)

    -- 头像触摸响应关闭
    self.headFrame:setTouchEnabled(false)
    -- 离线头像隐藏
    self.offline:setVisible(false)

    self.tuoguan:hide()
    -- 庄
    self.zhuang:setVisible(false)
    -- 房主
    self.fangzhu:setVisible(false)
    self.tonglingJia:setVisible(false)

    -- 准备
    self.zhunbei:setVisible(false)
    self.tiren:setVisible(false)

    self.tooNear:setVisible(false)

    self.teamImg:hide()

    self.mingPaiImg:setVisible(false)

    self.qipaiImg:setVisible(false)


    -- 头像转圈物效
    -- self.touxiangSkeleton = sp.SkeletonAnimation:create("spine/touxqq/touxqq.json", "spine/touxqq/touxqq.atlas", 1)
    -- :move( cc.p(0,0) )
    -- :setAnimation(0, "animation", true)
    -- :setBlendFunc(cc.blendFunc(gl.ONE , gl.ONE))
    -- :addTo(self.aniNode)
    -- :setVisible(false)
    -- :pause()


    -- for i = 1,4 do
    --     self['headPanel'..tostring(i)]:setVisible(i == posState)
    -- end

    -- 外层用户名
    self['headPanel']:getChildByName('userName'):setVisible(false)
    self['headPanel']:getChildByName('userName'):setString("***")

    --头像信息
    self.headInfoBg:setVisible(false)
    -- 头像恢复初始状态
    -- self.headIcon:setSpriteFrame("common/logo0.png")
    self.headIcon:removeAllChildren()
    self.headImg:removeAllChildren()

    self.chat_face:setVisible(false)
    self.chat_voice:setVisible(false)
    self.chat_text_bg:setVisible(false)
    self.chat_text_bg_right:setVisible(false)
    
    -- self.headImg:setSpriteFrame("game/info_touxiang.jpg")

    self:getHeadNodeByName("descLabel"):hide()
    self:getHeadNodeByName("userName"):hide()
    self:getHeadNodeByName("gold_bg"):hide()
    self:getHeadNodeByName("bombScoreBg"):hide()
    self.headPanel:getChildByName('wuhuScoreBg'):hide()
    self.headPanel:getChildByName('masScoreBg'):hide()

    if self.posState == 1 or self.posState == 4 then 
        self.fangzhu:setPositionX(8)
        self.zhuang:setPositionX(8)
    end

    self.zhunbei:stopAllActions()
end

-- self['headPanel'..tostring(self.posState)]:getChildByName('userGold'):setVisible(true)
function HeadImgView:getHeadNodeByName(name)
    return ccui.Helper:seekNodeByName(self.headPanel , name)
end


function HeadImgView:setGuandanScoreInfo(total , bomb)

    local bombScore = self:getHeadNodeByName("bombScore")
    local totalScore = self:getHeadNodeByName("score")

    if total then 
        totalScore:setString( total )
    end
    bombScore:setString( bomb )

end

--芜湖玩法底分交分显示
function HeadImgView:setWuhuScore(diScore,jiaoScore)
    local diScoreText = self:getHeadNodeByName("diScoreText")
    local jiaoScoreText = self:getHeadNodeByName("jiaoScoreText")
    diScoreText:setString("底:"..diScore)
    jiaoScoreText:setString("交:"..jiaoScore)
end

--马鞍山玩法倒分显示
function HeadImgView:setMaAnShanScore(daoScore, extraScore)
    local daoScoreText = self:getHeadNodeByName("daoScoreText")
    if daoScore then
       daoScoreText:setText("倒:"..daoScore) 
    end
    

    local extraScoreText = self:getHeadNodeByName("extraScoreText")
    if extraScore then
        extraScoreText:setText("摸子:"..extraScore)
    end
    
end

function HeadImgView:touxiangSkeletonVisible(visible)
    -- if tolua.isnull(self.touxiangSkeleton) then 
    --     return 
    -- end

    -- if visible then
    --     self.touxiangSkeleton:resume()
    --     self.touxiangSkeleton:setVisible(true)
    -- else
    --     self.touxiangSkeleton:pause()
    --     self.touxiangSkeleton:setVisible(false)
    -- end
end

--显示聊天表情
function HeadImgView:showChatFace(facePic)
    -- self:setLocalZOrder(g_gameConstant.HEADIMGVIEW_OPEN_ZORDER)

    -- local isRight = self.posState == 1 or self.posState == 4
    -- local offset = isRight and cc.p(-70,0) or cc.p(0,0)

    -- --TODO 判断在游戏牌桌内把对家表情向下移动
    -- offset = self.posState == 3 and cc.pAdd(offset,cc.p(0,40)) or offset

    -- self.chat_face:setSpriteFrame(display.newSpriteFrame(facePic))
    -- self.chat_face:stopAllActions()
    -- self.chat_face:setPosition(cc.pSub(self.chat_face_origin_pos,offset))
    -- self.chat_face:runAction(cc.Sequence:create(
    --     cc.FadeIn:create(0),
    --     cc.MoveBy:create(0.3,cc.p(0,4)),
    --     cc.MoveBy:create(0.1,cc.p(0,-4)),
    --     cc.MoveBy:create(0.1,cc.p(0,4)),
    --     cc.MoveBy:create(0.1,cc.p(0,-4)),
    --     --cc.FadeOut:create(5),
    --     --cc.DelayTime:create(1),
    --     cc.Hide:create(),
    --     cc.CallFunc:create(function()
    --         self:setLocalZOrder(g_gameConstant.HEADIMGVIEW_CLOSE_ZORDER)
    --     end),
    --     nil))
    -- self.chat_face:setVisible(true)
    -- if facePic == "chat/chat_15.png" and isRight then
    --     self.chat_face:setSpriteFrame(display.newSprite("bigImg/face_left.png"):getSpriteFrame())
    --     self.chat_face:setPositionX(self.chat_face:getPositionX()+99)
    --     self.chat_face:setScaleX(0.7)
    -- else
    --     self.chat_face:setScaleX(0.7*(isRight == true and -1 or  1))
    -- end

    local idx = facePic +1
    local pushCard = g_gameGlobal:playSkeletonAnimationOnce(showChatFaceAnim[idx],"animation")--sp.SkeletonAnimation:create(showChatFaceAnim[idx]..".json", showChatFaceAnim[idx]..".atlas", 1)
    if pushCard then
        pushCard:addTo(self.animationPos)
        pushCard:setPosition(-2,-30)
        pushCard:setScale(0.7)
        pushCard:registerSpineEventHandler(  function(event)  
            --t_sp:release();
        end  , sp.EventType.ANIMATION_COMPLETE)  --监测动画结束删除该节点， 闪退。
    end
end

--显示聊天语音
function HeadImgView:showChatVoice(isShow)


    self:setLocalZOrder(g_gameConstant.HEADIMGVIEW_OPEN_ZORDER)
    local isRight = self.posState == 1 or self.posState == 4
    if isShow then 
        self.chat_voice:setVisible(true)
        self.chat_voice_anim:stopAllActions()
        local animation = display.newAnimation("voice/voice_v_anim%d.png",1,3,0.35)
        self.chat_voice_anim:playAnimationForever(animation)
    else
        self.chat_voice:setVisible(false)
        self.chat_voice_anim:stopAllActions()
        self:setLocalZOrder(g_gameConstant.HEADIMGVIEW_CLOSE_ZORDER)
    end
    if isRight then
        self.chat_voice:setScaleX(-1)
        self.chat_voice:setPosition(cc.pSub(self.chat_voice_origin_pos,cc.p(-70,0)))
    else
        self.chat_voice:setScaleX(1)
        self.chat_voice:setPosition(cc.pSub(self.chat_voice_origin_pos,cc.p(0,0)))
    end
end

--显示聊天文本
function HeadImgView:showChatText(text)
    self:setLocalZOrder(g_gameConstant.HEADIMGVIEW_OPEN_ZORDER)
    local txt = ccui.Text:create()
    txt:setFontSize(28)
    local isRight = self.posState == 1 or self.posState == 4
    if not isRight then
        txt:setString(text)
        self.chat_text:setString(text)
        local contentSize = txt:getContentSize()
        contentSize.width = math.max(contentSize.width,35)
        self.chat_text:setTextAreaSize(cc.size(800, 0))
        if contentSize.width > 800 then
            self.chat_text:setTextAreaSize(cc.size(800, 0))
            self.chat_text_bg:setContentSize(800 + 36,58*1.2)
            self.chat_text:setPositionX(800+18-7)
            self.chat_text:setPositionY(self.chat_text_bg:getContentSize().height/2)
        else
            self.chat_text:setTextAreaSize(cc.size(contentSize.width, 0))
            self.chat_text_bg:setContentSize(contentSize.width + 36,58)
            self.chat_text:setPositionX(contentSize.width+18-7)
            self.chat_text:setPositionY(self.chat_text_bg:getContentSize().height/2)
        end
        
        self.chat_text_bg:setVisible(true)
        self.chat_text_bg:stopAllActions()

        if self.posState == 4 then
            self.chat_text_bg:setPosition(cc.pSub(self.chat_text_bg_origin_pos,cc.p(0,0)))
        else
            self.chat_text_bg:setPosition(cc.pSub(self.chat_text_bg_origin_pos,cc.p(0,0)))
        end
        self.chat_text_bg:runAction(cc.Sequence:create(cc.DelayTime:create(2),cc.Hide:create(),
        cc.CallFunc:create(function()
            self:setLocalZOrder(g_gameConstant.HEADIMGVIEW_CLOSE_ZORDER)
        end),
        nil))
    else
        txt:setString(text) 
        self.chat_text_right:setString(text)
        local contentSize = txt:getContentSize()
        contentSize.width = math.max(contentSize.width,35)

        --local bgContentSize = self.chat_text_bg_right:getContentSize()
        --self.chat_text_bg_right:setContentSize(contentSize.width + 36,bgContentSize.height)
        if contentSize.width > 800 then
            self.chat_text_right:setTextAreaSize(cc.size(800, 0))
            self.chat_text_bg_right:setContentSize(800 + 36,58*1.2)
            self.chat_text_right:setPositionY(self.chat_text_bg_right:getContentSize().height/2)
        else
            self.chat_text_bg_right:setContentSize(contentSize.width + 36,58)
            self.chat_text_right:setPositionY(self.chat_text_bg_right:getContentSize().height/2)
        end

        self.chat_text_right:setPositionX(25)
        self.chat_text_bg_right:setVisible(true)
        self.chat_text_bg_right:stopAllActions()

        if self.posState == 4 then
            self.chat_text_bg_right:setPosition(cc.pSub(self.chat_text_bg_right_origin_pos,cc.p(0,0)))
        else
            self.chat_text_bg_right:setPosition(cc.pSub(self.chat_text_bg_right_origin_pos,cc.p(0,0)))
        end
        self.chat_text_bg_right:runAction(cc.Sequence:create(cc.DelayTime:create(2),cc.Hide:create(),
        cc.CallFunc:create(function()
            self:setLocalZOrder(g_gameConstant.HEADIMGVIEW_CLOSE_ZORDER)
        end),
        nil))
    end
end

--[[
    @desc 显示互动表情
    endPos:table {x:number,y:number} 结束位置(世界坐标系)
    idx:number 互动表情索引 从1开始
    isFromMyself是否发送者是自己
]]
function HeadImgView:showInteractiveFace(endPos,idx, isFromMyself,toPlayer)

    if not g_gameGlobal:getGameScene() then 
        return 
    end
    if idx >=30 and idx < 40 then
        idx = idx - 30 -- 十连发id 30~40
    else
        idx = idx - 10
    end
    if isFromMyself then
        g_UserDataTable.gameEmojCountTotal = g_UserDataTable.gameEmojCountTotal +1
        if idx == 1 or idx == 2 or idx == 4 or  idx == 5 then
            g_UserDataTable.gameEmojCount = g_UserDataTable.gameEmojCount +1
        end
    end
    -- idx = idx + 1
    local startPos = self.offline:getParent():convertToWorldSpace(cc.p(self.offline:getPosition()))
    --local endPos = self.aniNode:getParent():convertToWorldSpace(cc.p(self.offline:getPosition()))
    local scale = 1
    endPos,scale = self:resetInteractiveFacePos(endPos,idx,toPlayer)
    local dist = cc.pGetDistance(startPos,endPos)
    local speed = 1200
    if dist > 800 then
        speed = 2600
    end
    local spine = sp.SkeletonAnimation:create(interactiveFaceAnim[idx]..".json", interactiveFaceAnim[idx]..".atlas", 1)
    spine:setPosition(startPos.x,startPos.y)
    spine:setAnimation(0, "animation1", true)
    spine:setScaleX(scale)
    if scale == -1 and idx == 2 then
        animationName = "animation3"
    end
    g_gameGlobal:getGameScene():addChild(spine,g_gameConstant.HEADIMGVIEW_OPEN_ZORDER+1)
    local spine1
    if idx == 4  then
        spine1 = sp.SkeletonAnimation:create(interactiveFaceAnim[idx]..".json", interactiveFaceAnim[idx]..".atlas", 1)
        if scale == -1 then
            spine1:setPosition(endPos.x+100,endPos.y-50)
        else
            spine1:setPosition(endPos.x-100,endPos.y-50)
        end
        spine1:setAnimation(0, "animation4", true)
        spine1:setScaleX(scale)
        g_gameGlobal:getGameScene():addChild(spine1,g_gameConstant.HEADIMGVIEW_OPEN_ZORDER+1)
    elseif idx == 5 then
        spine1 = sp.SkeletonAnimation:create(interactiveFaceAnim[idx]..".json", interactiveFaceAnim[idx]..".atlas", 1)
        if scale == -1 then
            spine1:setPosition(endPos.x+110,endPos.y)
        else
            spine1:setPosition(endPos.x-110,endPos.y)
        end
        spine1:setAnimation(0, "animation3", true)
        spine1:setScaleX(scale)
        g_gameGlobal:getGameScene():addChild(spine1,g_gameConstant.HEADIMGVIEW_OPEN_ZORDER)
    end

    local moveto = cc.MoveTo:create(dist/speed,endPos)
    if idx == 4 then
        moveto = cc.MoveTo:create(0.7,endPos)

    end
    spine:runAction(cc.Sequence:create(
        cc.Spawn:create(
            moveto,
            cc.CallFunc:create(function() 
                local url = string.format("sound/hudong/hudong%d.mp3",idx)
                if cc.FileUtils:getInstance():isFileExist(url) then
                    NG.soundManager:playMatchEffect(url)
                end
        end)),
        cc.CallFunc:create(function()
            local url = string.format("sound/hudong/hudong%d_%d.mp3",idx,idx)
            NG.soundManager:playMatchEffect(url)
            spine:clearTrack(0)
            if scale == -1 and idx == 2 then
                spine:addAnimation(0,"animation3",false,0)
            elseif idx == 4 or idx == 5 then
                -- spine1:clearTrack(0)
                -- spine1:addAnimation(0,"animation4",false,0)
                spine1:runAction(cc.Sequence:create(cc.DelayTime:create(3),cc.RemoveSelf:create(),nil))
                spine:addAnimation(0,"animation2",false,0)
            else
                spine:addAnimation(0,"animation2",false,0)
            end
            spine:runAction(cc.Sequence:create(cc.DelayTime:create(3),cc.RemoveSelf:create(),nil))
        end),
    nil))

end

-- 根据牌桌pos更新用户的头像
-- 走到这只能是游戏界面，因为牌桌界面位置已经设好，不用调
function HeadImgView:updateHeadImgPosWithTablePos(maxPlayerNum , isGameType , isVipTable)

    if isGameType == g_gameConstant.GAME_PDK then
        self.headFrame:move(g_gameGlobal.gamePlayHeadPosTbl_LYPDK[self.posState].head)
        self.headInfoBg:setAnchorPoint(g_gameGlobal.gamePlayHeadPosTbl_LYPDK[self.posState].infoAnchor)
        self.headInfoBg:setPositionPercent(g_gameGlobal.gamePlayHeadPosTbl_LYPDK[self.posState].infoPercent)
    else
        self.headFrame:move(g_gameGlobal.gamePlayHeadPosTbl[self.posState].head)
        self.headInfoBg:setAnchorPoint(g_gameGlobal.gamePlayHeadPosTbl[self.posState].infoAnchor)
        self.headInfoBg:setPositionPercent(g_gameGlobal.gamePlayHeadPosTbl[self.posState].infoPercent)
    end
    
    self.zhunbei:setVisible(false)
    self.tiren:setVisible(false)


    -- self['headPanel'..tostring(self.posState)]:
    -- for i = 1,4 do
    --     self['headPanel'..tostring(self.posState)]:setVisible(i == self.posState)
    -- end
    if g_gameGlobal:isWuHuMaJiang() then
        self.headPanel:getChildByName('wuhuScoreBg'):setVisible(true)
    elseif g_gameGlobal:isMaAnShan() then
        self.headPanel:getChildByName('masScoreBg'):setVisible(true)
    else
        self.headPanel:getChildByName('gold_bg'):setVisible(self.posState == 1)
        self.headPanel:getChildByName('bombScoreBg'):setVisible(false)
    end
    
end

--@desc 更新用户IP信息
function HeadImgView:updateIpInfo(ip)
    self.ipLabel:setString(ip)
end

-- 新建用户只能是在等待界面中添加，游戏界面中只有离线但保留用户数据
function HeadImgView:updateTablePlayerInfo( playerInfo, isDaiKaiFang )

    self.playerInfo = playerInfo

    local isMachine = playerInfo.headImg ~= 4

    self:visibleOffline(playerInfo.inTable == 0)

    -- 更新头像
    self.headIcon:removeAllChildren()
    self.headImg:removeAllChildren()

    if isMachine and false then 
        local isMan = playerInfo.sex == 1
        local id = playerInfo.palyerIndex%10
        local _headImg = display.newSprite("head/" .. (isMan and "man" or "woman") .."/"..id..".jpg" )
        _headImg:setScale(  self.headImg:getContentSize().width / _headImg:getContentSize().width ):addTo(self.headImg):setPosition(self.headImg:getContentSize().width/2 , self.headImg:getContentSize().height/2)

        local _headIcon = display.newSprite("head/" .. (isMan and "man" or "woman") .."/"..id..".jpg" )
        _headIcon = g_gameGlobal:clipImg(  self.headIcon , _headIcon , 0.98 )
    else
        local headImgUrl = playerInfo.headImgUrl
        if string.len(headImgUrl) > 10 then
            if isDaiKaiFang then
                g_gameGlobal:requestHttpImage(headImgUrl, self.headIcon, false , nil , 0.98  )
                g_gameGlobal:requestHttpImage(headImgUrl, self.headImg, false,nil , 1.2)
            else
                g_gameGlobal:requestHttpImage(headImgUrl, self.headIcon, self.posState == 1, nil , 0.98)
                g_gameGlobal:requestHttpImage(headImgUrl, self.headImg, self.posState == 1,nil ,1.2)
            end
        end
    end
    -- 玩家昵称
    --self:getHeadNodeByName('userName'):setString(g_gameGlobal:cutStringLength(playerInfo.playerName))
    self:getHeadNodeByName('userName'):setString(g_gameGlobal:formatNickName(playerInfo.playerName, 16, ''))
    self:getHeadNodeByName('userName'):setVisible(true)

    -- 因为金币数目节点位置是根据玩家昵称设置的，当玩家昵称有修改时，不会自动更新下金币数目节点位置，所以要手动处理下
    -- if self.posState ~= 1 then
    --     self.userGold:anchor(0.5, 1)
    --     self.userGold:move(self:getHeadNodeByName('userName'):getContentSize().width/2, -5)
    -- end

    self.nicheng:setString(g_gameGlobal:cutStringLength(playerInfo.playerName))

    -- 金币数
    self.goldNum:setString(playerInfo.gold)
    -- 房卡数
    if playerInfo.diamond == nil then
        -- body
        self.diamondNum:setString(0)
    end

    -- id
    self.idLabel:setString(playerInfo.palyerIndex)
    -- ip
    self.ipLabel:setString(playerInfo.ip)

    -- 准备显示
    self.zhunbei:setVisible(false)
    self.tiren:setVisible(false)
    -- 头像设置触摸响应
    self.headFrame:setTouchEnabled(true)

    -- if playerInfo.gameState ~= g_gameConstant.PALYER_GAME_STATE_IN_TABLE_GAME_OVER_WAITING_TO_CONTINUE then
    --     -- self.offline:setVisible(false)
    --     -- self:getHeadNodeByName('userName'):setColor(display.COLOR_WHITE)
    --     self.zhunbei:setVisible(true)
    -- else
    --     -- self:getHeadNodeByName('userName'):setColor(display.COLOR_BLACK)
    --     self.zhunbei:setVisible(false)
    -- end
    if playerInfo.gameState ~= g_gameConstant.PALYER_GAME_STATE_IN_TABLE_GAME_OVER_WAITING_TO_CONTINUE then
        self.zhunbei:loadTexture("MatchAH/".."game/wait_zhunbei.png",ccui.TextureResType.plistType)
        self.zhunbei:setVisible(false)
    else
        self.zhunbei:setVisible(false)
        self.tiren:setVisible(false)
    end
end

function HeadImgView:refreshReadyPos( isReady )

    if isReady then 

    else

    end

end


function HeadImgView:HttpImageBack( obj )
    -- self.headIcon = obj
end

-- 互动表情按钮事件
function HeadImgView:hudongTouchEvent( index )
    
end

-- 点击头像触发事件
function HeadImgView:touxiangTouchEvent( event )
    if event.name == "ended" then
        if self.headInfoBg:isVisible() then
            return 
        end
        self.headInfoBg:setVisible(true)
        -- 十连发勾选项
        local isChoose10Lianfa = false
        self.checkBox:setSelected(isChoose10Lianfa)
        -- 互动表情
        local data =  g_gameGlobal:getExpressionData()
        if data.EmojiDataVo and #data.EmojiDataVo > 0 then
            self:hudongListShow()
        else
            --获取互动表情
            g_longConnect:sendMsg(g_msgDefinitions.MSG_REQUEST_BUY_DAOJU,{
                itemID = g_msgDefinitions.PLAYER_GET_EMOJI_DATAS,
            })
        end
        -- 启动定时器，3秒关闭
        -- self:createSchedule(1, 3)
        self:setLocalZOrder(g_gameConstant.HEADIMGVIEW_OPEN_ZORDER)

        self:delayHideHeadBg()
    end
end

function HeadImgView:delayHideHeadBg()
    self.headInfoBg:stopAllActions()
    performWithDelay(self.headInfoBg,function() 
        self:hideHeadBg()
    end  , 3)
end

function HeadImgView:hideHeadBg()
    self.headInfoBg:stopAllActions()
    self.headInfoBg:setVisible(false)
    self:setLocalZOrder(g_gameConstant.HEADIMGVIEW_CLOSE_ZORDER)
end

-- -- 定时器创建，time表示定时器间隔，endTime表示结束时间
-- function HeadImgView:createSchedule(time, endTime)
--     if self.schedulerEntry then
--         cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self.schedulerEntry)
--         self.schedulerEntry = nil
--     end
--     local scheduler = cc.Director:getInstance():getScheduler()
--     local time = 0
--     local function scheduleFunc(dt)
--         time = time + dt 
--         --print("time is " .. time)
--         if time > endTime then
--             self:endSchedule()
--         end
--     end
--     self.schedulerEntry = scheduler:scheduleScriptFunc(scheduleFunc, time , false)
-- end

-- -- 删除定时器
-- function HeadImgView:endSchedule()
--     if self.schedulerEntry then
--         cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self.schedulerEntry)
--         self.schedulerEntry = nil
--     end
--     self.headInfoBg:setVisible(false)
--     self:setLocalZOrder(g_gameConstant.HEADIMGVIEW_CLOSE_ZORDER)
-- end

function HeadImgView:onTouchBegan(touch, event)
    if not self.headInfoBg or tolua.isnull(self.headInfoBg) then
        return false
    end
    if not self.headInfoBg:isVisible() then
        return false
    end

    local location = touch:getLocation()
    local locationInNode = self.headFrame:convertToNodeSpace(location)
    local hitTestBondingFlag = cc.rectContainsPoint(self.headInfoBg:getBoundingBox(), locationInNode)
    if hitTestBondingFlag then
        return false
    end
    if not hitTestBondingFlag or
      cc.rectContainsPoint(self.headFrame:getBoundingBox(), locationInNode) then
        self:hideHeadBg()
        return true
    else
        -- 如果触摸位置不在头像具体信息框范围内，就结束定时器，同时把触摸点下传
        return true
    end
end

function HeadImgView:zhuangVisible(visible)
    self.zhuang:setVisible(visible)
end

function HeadImgView:mingPaiVisible(visible)
    printf("visible: %s", tostring(visible))
    self.mingPaiImg:setVisible(visible)
end

function HeadImgView:qipaiVisible(visible)
    self.qipaiImg:setVisible(visible)
end

function HeadImgView:fangzhuVisible(visible)
    self.fangzhu:setVisible(visible)
end

function HeadImgView:tonglingJiaVisible(num)
    self.tonglingJia:setVisible(true)
    local str = "X"..num
    local txt =  self.tonglingJia:getChildByName("Text_2")
    txt:setString(str)
end

function  HeadImgView:setSanFuPos()
    if self.posState == 1 then 
        local userName =  self:getHeadNodeByName('userName')
        local gold_bg = self:getHeadNodeByName('gold_bg')
        userName:setPosition( 166 , 43 )
        gold_bg:setPosition( 166 , 15 )

    end
    
    self.fangzhu:setPositionY(17 + 30)
    self.zhuang:setPositionY(47 + 30)

end

--掼蛋名字和分数显示位置
function  HeadImgView:setGuanDanPos()
    if self.posState == 1 then 
        local userName =  self:getHeadNodeByName('userName')
        local gold_bg = self:getHeadNodeByName('gold_bg')
        userName:setPosition( 150 , 43 )
        gold_bg:setPosition( 150 , 15 )
        if g_gameGlobal:hasWanfa2(g_gameConstant.GR2_ANHUI_GUANDAN_BOMB_FEN) then
           self:getHeadNodeByName('bombScoreBg'):setPosition( 150 , 4 )
            userName:setPosition( 50 , -10 )
        end
        self.fangzhu:setPositionX(95)
        self.zhuang:setPositionX(95)
    end
    self.fangzhu:setPositionY(17 + 30)
    self.zhuang:setPositionY(47 + 30)

end


function HeadImgView:lianZhuang(num)
    if num >= 1 then 
        self.zhuang:loadTexture("common/lian.png",ccui.TextureResType.localType)
        g_gameGlobal:newLabel({text =  num.."次" ,  fontSize = 18, fontColor = cc.c3b( 0xff,0xff,0x0 ) }):setPosition(self.zhuang:getContentSize().width/2, self.zhuang:getContentSize().height):addTo(self.zhuang):anchor(0.5,0)
    else
        self.zhuang:loadTexture("common/zhuang_jia.png",ccui.TextureResType.localType)
    end

end


--[[
    type 1 为红队
         2 为蓝队
]]
function HeadImgView:setSanfuTeam( type )
    self.teamImg:show()
    self.teamImg:setSpriteFrame( "common/".. (type == 1 and "red" or "blue").. "_headFrame.png" )
    self.teamTagImg:setSpriteFrame( "common/head_".. (type == 1 and "red" or "blue").. "_team_tag.png")
    if self.posState == 2 or self.posState == 3 then 
        self.teamTagImg:setPositionX(8)
    end
end


function HeadImgView:setReadyState(isReady,entertime,createPlayerID)

    local hasReady = g_gameGlobal:hasWanfa2( g_gameConstant.GR2_OPTION_READY )
    if hasReady then   
        -- if self.posState ~= 1 then
        --     if g_gameGlobal:getVipTableID() >= 300000 and  g_gameGlobal:getVipTableID() <= 600000 then
        --         self.tiren:setVisible(true)
        --     else
        --         if createPlayerID == self.playerInfo.playerID then
        --             self.tiren:setVisible(false)
        --         else
        --             self.tiren:setVisible(true)
        --         end
        --     end
        -- end
        if self.posState == 1 then
            self.tiren:setVisible(false)
        end
        self.isReady = isReady
        if isReady then
            self.zhunbei:setVisible(false) 
            if self.posState == 1 then 
                self.zhunbei:setPosition( -61 + 110 , 51 + 77 )
            elseif self.posState == 2 then 
                self.zhunbei:setPosition( -61 , 51 )
            elseif self.posState == 3 then 
                self.zhunbei:setPosition( -61 + 110 , 51 - 100)
            elseif self.posState == 4 then 
                self.zhunbei:setPosition( -61 + 230 , 51)
            end
            self.zhunbei:loadTexture("MatchAH/".."game/zhunbei1.png",ccui.TextureResType.plistType)
            self.zhunbei:stopAllActions()
            self.zhunbeimiao:setVisible(false)
            self.tiren:setVisible(false)
        else
            if self.posState == 1 then 
                self.zhunbei:setPosition( -61 + 200 , 51 + 77 )
            elseif self.posState == 2 then 
                self.zhunbei:setPosition( -61-85 + 20 , 51 )
                self.tiren:setPosition( -61-10  , 51)
            elseif self.posState == 3 then 
                self.zhunbei:setPosition( -61 + 70 + 118 + 10 , 51 - 100 - 15)
                self.tiren:setPosition( -61 + 110 , 51 - 100)
            elseif self.posState == 4 then 
                self.zhunbei:setPosition( -61 + 230 + 60 , 51)
                self.tiren:setPosition( -61 + 230 , 51)
            end
            self.zhunbei:loadTexture("MatchAH/".."game/zhunbei2.png",ccui.TextureResType.plistType)
            self.zhunbeimiao:setVisible(true)
            
            if entertime then
                local time = os.time() - g_gameGlobal:getTimeDifference() - entertime
                -- print("倒计时time：",time)
                -- print("本地时间：",os.time())
                -- print("时间差：",g_gameGlobal:getTimeDifference())
                -- print("牌局进入时间：",entertime)
                if time >= 0 and time < 16 then
                    self.zhunbeidowntime= 15-time
                elseif time < 0 and time >= -2 then
                    self.zhunbeidowntime= 15
                else
                    self.zhunbeidowntime= 0
                end
            else
                self.zhunbeidowntime = 15
            end
            self.zhunbeiTime:setString(self.zhunbeidowntime)
            self.zhunbei:stopAllActions()
            local function callback()
                if self.zhunbeidowntime then
                    if  self.zhunbeidowntime < 1 then
                        if not tolua.isnull(self.zhunbei) then

                            if self.MyZhunbei then
                                self.tiren:loadTextures("MatchAH/".."game/tiren.png","MatchAH/".."game/tiren.png","",ccui.TextureResType.plistType)
                                self.tiren:setTouchEnabled(true)
                                if self.posState ~= 1 then
                                    if g_gameGlobal:getVipTableID() and g_gameGlobal:getVipTableID() >= 300000 and  g_gameGlobal:getVipTableID() <= 600000 then
                                        self.tiren:setVisible(true)
                                        self.zhunbeimiao:setVisible(false)
                                        self.zhunbei:setVisible(false)
                                    else
                                        if createPlayerID == self.playerInfo.playerID then
                                            self.tiren:setVisible(false)
                                            self.zhunbeimiao:setVisible(true)
                                            self.zhunbei:setVisible(false)
                                        else
                                            self.tiren:setVisible(true)
                                            self.zhunbeimiao:setVisible(false)
                                            self.zhunbei:setVisible(false)
                                        end
                                    end
                                end
                               -- self.tiren:setVisible(true)
                            end
                            self.zhunbei:stopAllActions()
                            return
                        end
                    end
                    self.zhunbeidowntime = self.zhunbeidowntime - 1
                    if not tolua.isnull(self.zhunbeiTime) then
                        self.zhunbeiTime:setString(self.zhunbeidowntime)
     
                    end
                end
            end
            schedule(self.zhunbei , callback , 1 )
            if self.zhunbeidowntime == 0 and self.MyZhunbei then
                self.tiren:loadTextures("MatchAH/".."game/tiren.png","MatchAH/".."game/tiren.png","",ccui.TextureResType.plistType)
                self.tiren:setTouchEnabled(true)
                --self.tiren:setVisible(true)
                if self.posState ~= 1 then
                    if g_gameGlobal:getVipTableID() >= 300000 and  g_gameGlobal:getVipTableID() <= 600000 then
                        self.tiren:setVisible(true)
                        self.zhunbeimiao:setVisible(false)
                        self.zhunbei:setVisible(false)
                    else
                        if createPlayerID == self.playerInfo.playerID then
                            self.tiren:setVisible(false)
                            self.zhunbeimiao:setVisible(true)
                            self.zhunbei:setVisible(false)
                        else
                            self.tiren:setVisible(true)
                            self.zhunbeimiao:setVisible(false)
                            self.zhunbei:setVisible(false)
                        end
                    end
                end
            else
                self.tiren:loadTextures("MatchAH/".."game/tiren1.png","MatchAH/".."game/tiren1.png","",ccui.TextureResType.plistType)
                self.tiren:setTouchEnabled(false)
                self.tiren:setVisible(false)
                if self.posState == 1 then
                    self.zhunbei:setVisible(false)
                else
                    self.zhunbei:setVisible(false)
                end
            end
        end
    else
        self.zhunbei:stopAllActions()
        self.zhunbei:setVisible(false)
        self.zhunbeimiao:setVisible(false)
    end
    if self.posState == 2 then
        self.zhunbeimiao:setPosition(  self.zhunbei:getContentSize().width + 5 , self.zhunbei:getContentSize().height/2 ):anchor( 0 ,0.5)
    elseif self.posState == 3 then 
        self.zhunbeimiao:setPosition(  3 , self.zhunbei:getContentSize().height/2 ):anchor(1,0.5)
    elseif self.posState == 4 then 
        self.zhunbeimiao:setPosition(  3 , self.zhunbei:getContentSize().height/2 ):anchor(1,0.5)
    end
end

function HeadImgView:zhunbeiButton(falg,createPlayerID)
    if self.zhunbeidowntime and self.zhunbeidowntime == 0 and falg and not self.isReady then
        self.tiren:loadTextures("MatchAH/".."game/tiren.png","MatchAH/".."game/tiren.png","",ccui.TextureResType.plistType)
        self.tiren:setTouchEnabled(true)
        --self.tiren:setVisible(true)
        if self.posState ~= 1 then
            if g_gameGlobal:getVipTableID() >= 300000 and  g_gameGlobal:getVipTableID() <= 600000 then
                self.tiren:setVisible(true)
                self.zhunbeimiao:setVisible(false)
                self.zhunbei:setVisible(false)
            else
                if createPlayerID == self.playerInfo.playerID then
                    self.tiren:setVisible(false)
                    self.zhunbeimiao:setVisible(true)
                    self.zhunbei:setVisible(false)
                else
                    self.tiren:setVisible(true)
                    self.zhunbeimiao:setVisible(false)
                    self.zhunbei:setVisible(false)
                end
            end
        end
    end
    self.MyZhunbei = falg

end


function HeadImgView:refreshGoldNum(goldNum, dismondNum)
     -- 外层金币数
    self:getHeadNodeByName('userGold'):setString(goldNum)
    if g_gameGlobal:hasWanfa2(g_gameConstant.GR2_ANHUI_GUANDAN_BOMB_FEN) then
       local str = goldNum
       self:getHeadNodeByName('score'):setString(str)
    end
    -- self.userGold:setString(goldNum)
    -- 内层金币数
    self.goldNum:setString(goldNum)
    -- 内层房卡数
    self.diamondNum:setString(dismondNum)
end

function HeadImgView:visibleOffline(visible , time)
    visible = false
    self.offline:setVisible(visible)
    -- self.zhunbei:setVisible(not visible)

    -- if not visible then 
    --     self.tuoguanState = false
    -- end

    local time = time or 0

    if visible then

        self.tuoguan:hide()

        self:getHeadNodeByName('userName'):setColor(display.COLOR_BLACK)
        self:getHeadNodeByName('userGold'):setColor(display.COLOR_BLACK)
        if g_gameGlobal:hasWanfa2(g_gameConstant.GR2_ANHUI_GUANDAN_BOMB_FEN) then
        --    self:getHeadNodeByName('score'):setColor(display.COLOR_BLACK)
        end
        
        local label = self.offline:getChildByName("label")
        -- label:setTextHorizontalAlignment(cc.TEXT_ALIGNMENT_CENTER)
        label:getVirtualRenderer():setLineSpacing(5)
        label:stopAllActions()

        local str = "离线"
        if self.tuoguanState then 
            str = "离线托管"
            label:setFontSize(18)
        end


        label:setString( str.."\n"..g_gameGlobal:timeConvert( time ) )

        if time > 3600 then 
            label:setFontSize(14)
        end

        schedule(label , function() 
            local str = "离线"
            if self.tuoguanState then 
                str = "离线托管"
                label:setFontSize(18)
            end
            time = time + 1
            label:setString( str.."\n"..g_gameGlobal:timeConvert( time ) )
        end , 1)

    else

        self:getHeadNodeByName('userName'):setColor(display.COLOR_WHITE)
        self:getHeadNodeByName('userGold'):setColor(cc.c3b(255,255,0))
        if g_gameGlobal:hasWanfa2(g_gameConstant.GR2_ANHUI_GUANDAN_BOMB_FEN) then
        --    self:getHeadNodeByName('score'):setColor(cc.c3b(255,255,0))
        end

        local label = self.offline:getChildByName("label")
        label:stopAllActions()
    end

end

function HeadImgView:getHeadIconPos()
    local sz = self.headPanel:getContentSize()
    return self.headPanel:convertToWorldSpace(cc.p(sz.width/2,sz.height/2))
end

function HeadImgView:setChuZeng( chuzeng, piaohua )
    local str = ""
    if piaohua == -1 then
        str = chuzeng.."增"
        if chuzeng == -1 then
            str = ""
        end
    elseif piaohua == 0 then
        if chuzeng == -1 then
            str = "不飘"
        else
            str = "不飘，"..chuzeng.."增"
        end
    elseif piaohua == 1 then
        if chuzeng == -1 then
            str = "飘花"
        else
            str = "飘花，"..chuzeng.."增"
        end
    end
    
    self:getHeadNodeByName('descLabel'):setString(str)
end

function HeadImgView:setKunFenText( kunfen, huainingwanfa )
    local desc = ""
    if huainingwanfa or g_gameGlobal:isDongZhi() then
        if kunfen <= 2 then
            desc = "下"..kunfen.."分"
        end
        if huainingwanfa == 1 then
            desc = desc.."单吊"
        elseif huainingwanfa == 2 then
            desc = desc.."自摸"
        elseif huainingwanfa == 3 then
            desc = desc.."缺门"
        end

    elseif kunfen == 0 then
        desc = "弃捆"
    else
        desc = "捆"..kunfen
    end

    self:getHeadNodeByName('descLabel'):setString(desc)
end

function HeadImgView:visibleToNear(visible)
    if visible == nil then visible = false end
    -- self.tooNear:setVisible(visible)
end

function HeadImgView:btnEventFunc(sender)
     g_longConnect:sendMsg(g_msgDefinitions.MSG_REQUEST_BUY_DAOJU, {
        itemID = g_gameConstant.AGENT_CMD_TABLE_PLAYER_REJECT_PLAYER,
        unused1 = self.playerInfo.palyerIndex,
        unused0 = g_gameGlobal:getVipTableID(),
    })
end

function HeadImgView:setHeadFrame(tablePos)
    
end

function HeadImgView:setTuoGuanState(bool)

    self.tuoguanState = bool

    if bool then 
        if not self.offline:isVisible() then 
            -- self.tuoguan:show()
        end
    else
        self.tuoguan:hide()
    end
    
end



--设置玩家地位
function HeadImgView:setPlayerStatus(isLandlord)
    self.dizhuImage:setLocalZOrder(1)
    self.dizhuImage:setVisible(isLandlord)
end

function HeadImgView:getPlayerStatusPos()
    local pos = self.dizhuImage:getParent():convertToWorldSpace(cc.p(self.dizhuImage:getPosition()))
    return pos
end

--
function HeadImgView:getHudongItm(index)
    
end

function HeadImgView:resetInteractiveFacePos(endPos,idx,toPlayer)
    -- 黄脸点赞、黄脸送花、啤酒、喝茶、快点、拖鞋
    -- 拖鞋、快点、大拇指点赞、小黄人锤子、小黄人抹屎、小黄人点赞
    local scale = 1
    if idx == 6 then
        endPos.y = endPos.y - 60
        if endPos.x > display.cx then
            endPos.x = endPos.x - 100
        else
            endPos.x = endPos.x + 100
            scale = -1
        end        
    elseif idx == 5 then
        if endPos.x > display.cx then
            scale = -1
            endPos.x = endPos.x - 120
            endPos.y = endPos.y - 70
        else
            endPos.x = endPos.x + 120
            endPos.y = endPos.y -70
        end
        
    elseif idx == 4 then
        endPos.y = endPos.y - 50
        if endPos.x > display.cx then
            scale = -1
            endPos.x = endPos.x - 100  
        else
            endPos.x = endPos.x + 100
        end
    elseif idx == 2 then
        endPos.y = endPos.y - 30
        if endPos.x < display.cx then
            scale = -1
            endPos.x = endPos.x + 160
        else
            endPos.x = endPos.x - 150
        end
    elseif idx == 1 then
        endPos.y = endPos.y - 30        
        if endPos.x < display.cx then
            scale = -1
            endPos.x = endPos.x + 90
        else            
            endPos.x = endPos.x - 90
        end
    elseif idx == 3 then
        endPos.y = endPos.y -60
        if endPos.x > display.cx then
            scale = -1
            endPos.x = endPos.x - 110
            -- if toPlayer == 3 then
            --     endPos.y = endPos.y - 60
            -- end  
        else
            endPos.x = endPos.x + 110
        end
    end
    return endPos,scale
end

function HeadImgView:showTransportFaceCache(idx, playSpine)
    if idx then
        self.transportFaceCache[#self.transportFaceCache+1] = idx
    end

    if self.transportFaceCacheObj == nil or (idx == nil and playSpine) then
        -- idx == nil and playSpine 成立继续播放缓存中的spine动画 但是并不移除createTransportFace中的layout
        local showAnimIdx = self.transportFaceCache[1]
        if showAnimIdx then
            table.remove(self.transportFaceCache,1)
            local function showComplete()
                scheduler.performWithDelayGlobal(function()
                    self:showTransportFaceCache(nil, true)
                end,0)
            end
            self.transportFaceCacheObj = self:createTransportFace(showAnimIdx, showComplete)
        else
            self.transportFaceCacheObj:removeFromParent()
            self.transportFaceCacheObj = nil
        end
    end

end

-- 转运表情
function HeadImgView:createTransportFace(idx,funccallback)
    
end
--[[
    @desc: 转运表情
    author:{Amy-llj}
    time:2021-04-01 15:10:12
    --@itemId: 
    @return:
]]--
function HeadImgView:playZhuanYunAni(idx)
   
end

function HeadImgView:cleanZhuanYunAni()
    if(self.headFrame) then
        self:setLocalZOrder(g_gameConstant.HEADIMGVIEW_CLOSE_ZORDER)
        local zhuanyunEft1 = self.headFrame:getChildByName("zhuanyunEft1")
        if zhuanyunEft1 then
            zhuanyunEft1:removeFromParent()
        end
        local zhuanyunTips = self.headFrame:getChildByName("zhuanyunTips")
        if zhuanyunTips then
            zhuanyunTips:removeFromParent()
        end
        local gameBase = g_gameGlobal:getGameScene():getChildByName("gameBase")
        if gameBase ~= nil then
            gameBase.isZhuanyunPlaying = false
        end
    end
end
function HeadImgView:showHeadViewLuckyAni()
    
end
--转运表情转圈
function HeadImgView:zhuanyunbiaoqingZuanquan(idx)
    
end

--被催玩家播放催牌动画
function HeadImgView:Pushcardanimation()
    
end

--催牌玩家播放动画
function HeadImgView:hurryupOutCard()
    
end

--需要购买金币或房卡
function HeadImgView:buyGoods(number)
    local data = g_gameGlobal:getshopAllData()
    if data and #data > 0 then
        table.sort( data, function(a,b)
            return (a.property_1 or 0) < (b.property_1 or 0)
        end )
        local ExpressionData =  g_gameGlobal:getExpressionData()
        for i,v in ipairs(data) do
            if v.property_3 == 2 then
                if v.property_1 >= number then
                    if ExpressionData.diamond >= v.price then     --房卡足够买金币
                        return 1 ,v.base_id
                    else                                         --房卡不够买金币
                        -- str = "金币不足，请到商城购买房卡!"
                        return 2
                    end
                end
            end
        end
    else
        return 3
    end
end

function HeadImgView:hudongMaskVisible()
    local startGameRequestAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)
    if(startGameRequestAck) then
        if startGameRequestAck.vipTableID <= 0 then
            return
        end
    end
    self.nicheng:stopAllActions()
    self.countdown = 5
    self.hudongdownTime:setText(self.countdown)
    local function callback()
        if self.countdown then
            if  self.countdown < 1 then
                if self.hudongzhezhao then
                    self.hudongzhezhao:setVisible(false)
                    self.nicheng:stopAllActions()
                end
            end
            self.countdown = self.countdown - 1
            if self.hudongdownTime then
                self.hudongdownTime:setText(self.countdown)
            end
        end
    end
    schedule(self.nicheng , callback , 1 )
    self.hudongzhezhao:setVisible(true)
end

function HeadImgView:hudongListShow()
    if self and self.headInfoBg  then
        local hudongList = self.headInfoBg:getChildByName("hudongList")
        hudongList:removeAllChildren()
        local listitem  = self:getHudongItm(201,true)  --催牌卡做特殊处理
        hudongList:pushBackCustomItem(listitem)
        for i=1,6 do
            local listitem  = self:getHudongItm(i)
            hudongList:pushBackCustomItem(listitem)
        end
    end   
end

function HeadImgView:getHeadFrame()
    return self.headFrame
end

function HeadImgView:getHeadAniNode()
    return self.aniNode
end


function HeadImgView:onExit()
    self:clearEventTouch()
end

-------------------------------------------------------
------------------------------------
---------------
function HeadImgView:onUseTenClick(sender)
    self:delayHideHeadBg() -- 刷新隐藏headInfoBg时间
    local isSelect = self.checkBox:isSelected()
    self:hudongListShow()
end

-- 显示十连发效果
function HeadImgView:showInteractiveFace10(endPos,idx, isFromMyself, isFirst)
    for i=1,10 do
        performWithDelay(self, function( )
            self:showInteractiveFace(clone(endPos),idx, isFromMyself, isFirst)
        end, i*0.2)
    end
    -- 数字增加
    local endPos0 = self:resetInteractiveFacePos(endPos,idx,isFirst)
    local count = 1
    local increaseText = ccui.Text:create()
    increaseText:setPosition(endPos0)
    increaseText:setFontSize(38)
    increaseText:setFontName("fonts/fzzhunyuanjianti.ttf")
    increaseText:setTextColor(cc.c4b(239,219,104,255))
    increaseText:enableOutline(cc.c4b(131,78,36 ,255)  , 2)
    g_gameGlobal:getGameScene():addChild(increaseText,g_gameConstant.HEADIMGVIEW_OPEN_ZORDER + 100)
    local delayNum = 3
    for i=1,11+delayNum do
        performWithDelay(self, function( )
            if i > delayNum then
                if increaseText and not tolua.isnull(increaseText) then
                    increaseText:setString("x"..count)
                end
                count = count + 1
                if i == 11+delayNum then
                    increaseText:removeSelf()
                    increaseText = nil
                end
            end
        end, i*0.2)
    end

end

function HeadImgView:getHeadFramePos()
    return self.headFrame:getPosition()
end

function HeadImgView:showJinZhaiJiaFan(render,jiafanPoint)
    self._txtJinZhaiJiaFan:setVisible(render)
    if jiafanPoint then
        self._txtJinZhaiJiaFan:setString("跑嘴+" ..jiafanPoint)
    end
end

return HeadImgView   ��  