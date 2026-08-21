local HeadImgView = class("HeadImgView", cc.load("mvc").ViewBase)
local ExternalFunc = import("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.ExternalFunc")
local eventType = import("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.EventType")
local EmojiNode = import(".EmojiNode")
local GameConfig = require("newgold.MatchGames.subMjGame.MJGamePublic.GameConfig")
-- local Platform = require("app.platform.Platform")
HeadImgView.csbPath = "HeadImgView.csb"
--支付宝
local PAY_HISTORY_PLATFORM_TYPE_ALIPAY = 5 
--微信
local PAY_HISTORY_PLATFORM_TYPE_WX_PAY = 6
--苹果
local PAY_HISTORY_PLATFORM_TYPE_APPLE = 8

local interactiveFaceAnim = {
    "spine/hudongbiaoqing/meigui",
    "spine/hudongbiaoqing/jidan",
    "spine/hudongbiaoqing/feiwen",
    "spine/hudongbiaoqing/tuoxie",
    "spine/hudongbiaoqing/ganbei",
    "spine/hudongbiaoqing/zhadan"
}
local newInteractiveFaceAnim = {
    "spine/hudongbiaoqing/newBiaoQing/tuoxie",
    "spine/hudongbiaoqing/newBiaoQing/cuipai",
    "spine/hudongbiaoqing/newBiaoQing/daocha",
    "spine/hudongbiaoqing/newBiaoQing/hqczc",
    "spine/hudongbiaoqing/newBiaoQing/huangqml",
    "spine/hudongbiaoqing/newBiaoQing/dianzan"
}
local DIAMOND_INFO = {
    ["base_id"] = 3001,
    ["description"] = "购买50房卡",
    ["name"] = "50房卡",
    ["price"]       = 1	,
    ["property_1"]  = 50,	
    ["property_2"]  = 0	,
    ["property_3"]  = 1	,
    ["property_4"]  = 0	,
}
local GOLD_INFO = {
    ["base_id"] = 5002,
    ["description"] = "获得60000金币",
    ["name"] = "金币60000",
    ["price"]       = 6	,
    ["property_1"]  = 60000,	
    ["property_2"]  = 0	,
    ["property_3"]  = 2	,
    ["property_4"]  = 0	,
}
function HeadImgView:ctor(posState, gpsFunc,model,mainRule,isNoInteraction,...)
    --默认按钮点击类型
    self.curTipBtnType = 0
    self.discountBuff = 100 --折扣（默认不打折）
    self.buyBuff = 0 --购钻加成
    -- 是否观战模式
    self.isWatchWar = g_gameGlobal:isWatchMode()
    self.posState = posState --1表示自己，2表示下家，3表示对家，4表示上家
    self.isShowChatInfo = 0 
    self.needShowLianzCount = false
    self.gpsFunc = gpsFunc
    self.mainRule = mainRule
    self.isNoInteraction = isNoInteraction
    self.model = model or g_gameConstant.GOLD_GAME_MODEL
    HeadImgView.super.ctor(self,gpsFunc, ...)
    
    local gameBase = g_gameGlobal:getGameBase()
    self.playerIndexVisible = not gameBase or gameBase:isPlayerIndexVisible()
    --发送查询
    local diamondInfo = g_gameGlobal:getMinDiamondInfo()
    local goldInfo = g_gameGlobal:getMinGlodInfo() 
    if not next(diamondInfo) then 
        self:sendShopInfo()
    end
    self:refreshDiscount()
    self:netEvent()

    -- VIP免费道具使用次数
    self.vipFreeUsePropCnt = 0
end

function HeadImgView:isRight()
    return self.posState == 1 or self.posState == 4
end

-- 创建的时候只可能在等待界面
function HeadImgView:onCreate()
    self:createResoueceNode(self.csbPath)

    local isRight = self:isRight()
    
    self.headFrame = g_gameGlobal:findChildWithName(self.resourceNode_, "headFrame")
    g_gameGlobal:findChildWithName(self.headFrame, "userGold"):setVisible(self.posState == 1)
    -- self.headFrame:onTouch(handler(self, self.touxiangTouchEvent))
    -- 头像
    self.headIcon = g_gameGlobal:findChildWithName(self.headFrame, "headIcon")
    -- 离线头像
    g_gameGlobal:findChildWithName(self.headFrame, "offline_type1"):setVisible(false)
    g_gameGlobal:findChildWithName(self.headFrame, "offline_type2"):setVisible(false)
    local offlineType3 = g_gameGlobal:findChildWithName(self.headFrame, "offline_type3")
    if offlineType3 then
        offlineType3:setVisible(false)
        self.offline = offlineType3
    else
        if self.posState == 2 then
            self.offline = g_gameGlobal:findChildWithName(self.headFrame, "offline_type2")
        else
            self.offline = g_gameGlobal:findChildWithName(self.headFrame, "offline_type1")
        end
    end

    -- 断勾卡新增的一些节点
    self.headHuImg = g_gameGlobal:findChildWithName(self.headFrame, "hu_img")
    if not tolua.isnull(self.headHuImg) then
        self.headHuImg:setVisible(false)
    end
    
    -- 离线显示时间文本
    self.offlineTxtDesc = g_gameGlobal:findChildWithName(self.headFrame, "Text_offline_desc")
    self.offlineTxtDesc:setVisible(false)
    
    g_gameGlobal:findChildWithName(self.headFrame, "que_type1"):setVisible(false)
    g_gameGlobal:findChildWithName(self.headFrame, "que_type2"):setVisible(false)
    self.queIcon = g_gameGlobal:findChildWithName(self.headFrame, "que_Icon"):setVisible(false)

    if self.posState == 2 then
        self.queCard = g_gameGlobal:findChildWithName(self.headFrame, "que_type2")
    else
        self.queCard = g_gameGlobal:findChildWithName(self.headFrame, "que_type1")
    end
    
    -- 距离过近
    self.tooNear = g_gameGlobal:findChildWithName(self.headFrame, "tooNear")
    -- 无gps数据
    self.noGps = g_gameGlobal:findChildWithName(self.headFrame, "noGps")
    -- 房主
    self.fangzhu = g_gameGlobal:findChildWithName(self.headFrame, "fangzhu")
    -- 外层昵称
    self.userName = g_gameGlobal:findChildWithName(self.headFrame, "userName")
    self.userName:setFontName("")
    -- 外层金币数
    self.img_scoreBg = g_gameGlobal:findChildWithName(self.headFrame, "img_scoreBg")
    self.userGold = g_gameGlobal:findChildWithName(self.headFrame, "userGold")
    self.userGold:setString("0")
    -- 准备
    self.zhunbei = g_gameGlobal:findChildWithName(self.headFrame, "zhunbei")
    if not tolua.isnull(self.zhunbei) then
        self.zhunbei:setVisible(false)
    end
    
    -- 牌局状态列表：庄 缺之类的
    self.stateList = g_gameGlobal:findChildWithName(self.headFrame, "stateList")
    self.stateList:removeAllItems()
    self.stateList.flip = 1
    -- 加注分数，比如充分
    self.img_xz_socre = g_gameGlobal:findChildWithName(self.headFrame, "img_xz_socre")
    self.img_xz_socre:setVisible(false)
    --------- 头像详情界面信息
    --头像信息
    self.headInfoBg = g_gameGlobal:findChildWithName(self.headFrame, "headInfoBg")
    self.headInfoBg:setLocalZOrder(1)
    g_gameGlobal:registerOutsideCloseFunc(self.headInfoBg,function()
        self.headInfoBg:setVisible(false)
        self:setLocalZOrder(g_gameConstant.HEADIMGVIEW_CLOSE_ZORDER)
    end,false)
    --提示面板
    self.panelTip = g_gameGlobal:findChildWithName(self.headFrame, "tipBg")
    -- self.panelTip:setContentSize(g_gameGlobal:getDisplayWidth(),g_gameGlobal:getDisplayHeight())
    self.panelTip:hide()
    self.panelTip:setAnchorPoint(cc.p(0.5, 0.5))
    self.panelTip:setPosition(self.panelTip:getParent():convertToNodeSpace(cc.p(display.cx, display.cy)))
    local tipBg = self.panelTip
    self.panelTip.show = function()
        self:setLocalZOrder(g_gameConstant.HEADIMGVIEW_OPEN_ZORDER+1)
        self.panelTip:setVisible(true)
    end
    self.panelTip.hide = function()
        self:setLocalZOrder(g_gameConstant.HEADIMGVIEW_CLOSE_ZORDER)
        self.panelTip:setVisible(false)
    end
    self.checkBox = g_gameGlobal:findChildWithName(tipBg, "checkBox")
    self.text_content = g_gameGlobal:findChildWithName(tipBg, "text_content")
    self.btn_close = g_gameGlobal:findChildWithName(tipBg, "btn_close")
    self.btn_close:onTouch(handler(self, self.tipBtnClick))
    self.btn_sure = g_gameGlobal:findChildWithName(tipBg, "btn_sure")
    self.btn_sure:onTouch(handler(self, self.tipBtnClick))
    self.btn_cancel = g_gameGlobal:findChildWithName(tipBg, "btn_cancel")
    self.btn_cancel:onTouch(handler(self, self.tipBtnClick))
    -- 头像
    self.headImg = g_gameGlobal:findChildWithName(self.headFrame, "headImg")
    -- 连庄计数

    self.lianzBmfont = g_gameGlobal:findChildWithName(self.headFrame, "BitmapFontLabel_lianzhuang")
    self.lianzBmfont:setVisible(false)
    self.lianzCount = 0
    -- 昵称
    self.nicheng = self.headInfoBg:getChildByName("nicheng")
    self.nicheng:setFontName("")
    self.nicheng:setString("")

    self.Text_disInfo = g_gameGlobal:findChildWithName(self.headInfoBg, "Text_disInfo")

    self.gpsBtn = g_gameGlobal:findChildWithName(self.headInfoBg, "Button_Gps")
    self.gpsBtn:onClick(function()
        if self.gpsFunc then 
            self.headInfoBg:setVisible(false)
            self.gpsFunc(true)
        end 
    end)
    if g_UserDataTable.gameGPSSetState then
        if self.model == g_gameConstant.GOLD_GAME_MODEL then
            self.gpsBtn:setVisible(false)
        elseif self.model == g_gameConstant.VIP_GAME_MODEL  then
            self.gpsBtn:setVisible(true)
        end
    else
        self.gpsBtn:setVisible(false)
    end

    -- id
    self.idLabel = self.headInfoBg:getChildByName("idLabel")
    -- ip
    self.ipLabel = self.headInfoBg:getChildByName("ipLabel")
    -- address
    self.addressLabel = self.headInfoBg:getChildByName("addressLabel")

    -- 钻数
    self.diamondNum = g_gameGlobal:findChildWithName(self.headFrame, "diamondNum")
    -- 金币数
    self.goldNum = g_gameGlobal:findChildWithName(self.headFrame, "goldNum")

    -- 地主icon
    self.imgDzIcon = g_gameGlobal:findChildWithName(self.headFrame,"Image_dz_icon"):setVisible(false)
    
    self.imgJiabei = g_gameGlobal:findChildWithName(self.headFrame, "Image_jiabei"):setVisible(false)

    --庄
    self.zhuang = g_gameGlobal:findChildWithName(self.headFrame, "zhuang")
    self.zhuang:setVisible(false)

    -- 托管
    self.tuo_guan = g_gameGlobal:findChildWithName(self.headFrame, "tuo_guan")
    self.tuo_guan:setVisible(false)

    --聊天表情
    if isRight then
        self.chat_face = g_gameGlobal:findChildWithName(self.headFrame, "chat_face_right")
        --聊天语音信息
        self.chat_voice = g_gameGlobal:findChildWithName(self.headFrame, "chat_voice_right")
        --文字信息背景
        self.chat_text_bg = g_gameGlobal:findChildWithName(self.headFrame, "chat_text_right")
    else
        self.chat_face = g_gameGlobal:findChildWithName(self.headFrame, "chat_face_left")
        --聊天语音信息
        self.chat_voice = g_gameGlobal:findChildWithName(self.headFrame, "chat_voice_left")
        --文字信息背景
        self.chat_text_bg = g_gameGlobal:findChildWithName(self.headFrame, "chat_text_left")
    end

    self.chat_voice:getChildByName("voice_bg"):setVisible(false)
    --语音信息动画
    self.chat_voice_anim = self.chat_voice:getChildByName("voice_anim")
    --文字信息
    self.chat_text = self.chat_text_bg:getChildByName("text")
    self.chat_text:setFontName("")

    --跑得快报单提示
    self.SingleEndImg = self.headFrame:getChildByName("Image_baodan")
    self.SingleEndImg:setVisible(false)

    --调整聊天显示的在头像上层
    self.chat_face:setLocalZOrder(1)
    self.chat_voice:setLocalZOrder(1)
    self.chat_text_bg:setLocalZOrder(1)

    -- 互动表情
    local hudongList = self.headInfoBg:getChildByName("hudongList")
    hudongList:setScrollBarEnabled(false)
    self.posTab = {}
    for i, v in pairs(hudongList:getChildren()) do
        v.__idx = i
        v:onTouch(handler(self, self.hudongTouchEvent))
        --初始化配置设置
        local countBg = v:getChildByName("countBg")
        local text_count = countBg:getChildByName("text_count")
        text_count:setString(0)
        v.cishuCount = tonumber(0)
        local priceBg = v:getChildByName("priceBg")
        local text_price = priceBg:getChildByName("text_price")
        text_price:setString(0)
        v.price = tonumber(0)
        countBg:hide()
        local type_icon = priceBg:getChildByName("type_icon")
        type_icon:hide()

        local x,y = v:getPosition()
        table.insert( self.posTab,{x,y}  )
    end
     --------- 头像详情界面信息

    self:setPlayerGpsInfo()
     -- 设置触摸事件，防止触摸事件传到下层
    local listener = cc.EventListenerTouchOneByOne:create()
    listener:setSwallowTouches(true)
    listener:registerScriptHandler(handler(self,self.onTouchBegan),cc.Handler.EVENT_TOUCH_BEGAN )
    local eventDispatcher = self:getEventDispatcher()
    eventDispatcher:addEventListenerWithSceneGraphPriority(listener, self)
    self._touchListener = listener

    ExternalFunc.addCustomEventListener(self, eventType.ON_PLAYER_HAS_AUDIO, function(evtName, eventData) self:onHasAudio(eventData) end)
    ExternalFunc.addCustomEventListener(self, eventType.ON_PLAYER_NO_AUDIO, function(evtName, eventData) self:onNoAudio(eventData) end)
end
function HeadImgView:setPlayerGpsInfo( ... )
    if self.mainRule == g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_2P then
        self.ipLabel:setVisible(false)
        self.addressLabel:setVisible(false)
        self.gpsBtn:setVisible(false)
        self.Text_disInfo:setVisible(false)
    end
end
function HeadImgView:onHasAudio(playerIndex)
    if self.playerInfo and self.playerInfo.palyerIndex == playerIndex then
        self:showChatVoice(true)
    end
end

-- 设置头像层级
function HeadImgView:resetHeadViewOrder(index)
    if index == self.isShowChatInfo then
        self:setLocalZOrder(g_gameConstant.HEADIMGVIEW_CLOSE_ZORDER)
        self.isShowChatInfo = 0
    end
end 

-- 定缺显示的
function HeadImgView:showHeadQueIconAction(queIndex,isPlayAction)
    if queIndex ~= g_gameConstant.GAME_QUE_COLOUR_INVALID and type(queIndex) == "number" and queIndex >= 1 and queIndex <= 3 then 
        local iconPath = GameConfig.XUANQUEIMGPLISTPATH[queIndex].small
        display.loadSpriteFrames("xuezhanGame/Images/XueZhuanGame.plist", "xuezhanGame/Images/XueZhuanGame.png")
        self.queIcon:loadTexture(iconPath,ccui.TextureResType.plistType)
        self.queIcon:setVisible(true)
        if isPlayAction then 
            self.queIcon:setScale(0.2)
            local toBigAction = cc.EaseExponentialIn:create(cc.ScaleTo:create(0.2,0.85))
            self.queIcon:runAction(toBigAction)
        end 
    end 
end 

function HeadImgView:hideHeadQueIcon()
    if tolua.isnull(self.queIcon) then
        return
    end
    
    self.queIcon:setVisible(false)
end

-- 显示地主icon
function HeadImgView:isShowHeadDzIcon(isShow)
    if not tolua.isnull(self.imgDzIcon) then 
        self.imgDzIcon:setVisible(isShow)
    end 
end 

-- 返回缺Icon的世界坐标
function HeadImgView:getQueIconWorldPos()
    local pos 
    if not tolua.isnull(self.queIcon) then 
        pos = self.queIcon:getParent():convertToWorldSpace(cc.p(self.queIcon:getPosition()))
    end 
    return pos 
end 

function HeadImgView:onNoAudio(playerIndex)
    if self.playerInfo and self.playerInfo.palyerIndex == playerIndex then
        self:showChatVoice(false)
    end
end

function HeadImgView:onExit()
    self:endSchedule()
    if self._touchListener then
        self:getEventDispatcher():removeEventListener(self._touchListener)
        self._touchListener = nil
    end
end
-- 初始化头像位置,初始化时只有空白头像，这时候还没坐人
function HeadImgView:initHeadImgPos(pos)
    local posState = self.posState
    self:setVisible(false)
    if pos then
        self.headFrame:move(pos)
    end
   
    self.headInfoBg:setAnchorPoint(cc.p(0.5, 0.5))
    self.headInfoBg:setPosition(self.headInfoBg:getParent():convertToNodeSpace(cc.p(display.cx, display.cy)))
    self.panelTip:setPosition(self.headInfoBg:getParent():convertToNodeSpace(cc.p(display.cx, display.cy)))
    -- 头像触摸响应关闭
    self.headFrame:setTouchEnabled(false)
    -- 离线头像隐藏
    self.offline:setVisible(false)
    -- 距离过近隐藏
    self.tooNear:setVisible(false)
    -- 无gps标记隐藏
    self.noGps:setVisible(false)
    -- 房主
    self.fangzhu:setVisible(false)
    -- 外层金币数
    self.img_scoreBg:setVisible(false)
    -- 准备
    self:refreshReadyState()
    -- 外层用户名
    self.userName:setVisible(false)
    self.userName:setString("")
    --头像信息
    self.headInfoBg:setVisible(false)
    -- 头像恢复初始状态
    self.headIcon:loadTexture("empty_frame.png")
    -- 牌局状态列表：庄 缺之类的
    self.stateList:removeAllItems()
    if not tolua.isnull(self.img_xz_socre) then
        -- 加注分数，比如充分
        self.img_xz_socre:setVisible(false)
    end

    self.chat_voice:setVisible(false)
    self.chat_text_bg:setVisible(false)
    
    self.headImg:loadTexture("empty_frame.png")
    
    self:refreshHudongBtnState()

    self:updateDistanceDesc()
    
end

--显示聊天表情
function HeadImgView:showChatFace(emojiKind, emojiIdx)
    self.isShowChatInfo = self.isShowChatInfo + 1
    local tmpIndex = self.isShowChatInfo
    self:setLocalZOrder(g_gameConstant.HEADIMGVIEW_OPEN_ZORDER)
    local faceNode = EmojiNode:create(emojiKind, emojiIdx, self:isRight(), function()
        if not self.headInfoBg:isVisible() then
            self:resetHeadViewOrder(tmpIndex)
        end
    end)

    self.chat_face:addChild(faceNode)
end

--显示聊天语音
function HeadImgView:showChatVoice(isShow)
    self.isShowChatInfo = self.isShowChatInfo + 1
    local tmpIndex = self.isShowChatInfo
    self:setLocalZOrder(g_gameConstant.HEADIMGVIEW_OPEN_ZORDER)
    if isShow then 
        self.chat_voice:setVisible(true)
        self.chat_voice_anim:stopAllActions()
        display.loadSpriteFrames("voice/voice0.plist", "voice/voice0.png")
        local animation = display.newAnimation("voice/voice_v_anim%d.png",1,3,0.35)
        self.chat_voice_anim:playAnimationForever(animation)
    else
        self.chat_voice:setVisible(false)
        self.chat_voice_anim:stopAllActions()
        if not self.headInfoBg:isVisible() then
            self:resetHeadViewOrder(tmpIndex)
        end
    end
end

--显示聊天文本
function HeadImgView:showChatText(text)
    self.isShowChatInfo = self.isShowChatInfo + 1
    local tmpIndex = self.isShowChatInfo
    self:setLocalZOrder(g_gameConstant.HEADIMGVIEW_OPEN_ZORDER)
    self.chat_text:setString(text)
    self.chat_text:setFontSize(34)
    local contentSize = self.chat_text:getContentSize()
    contentSize.width = math.max(contentSize.width+5,35)
    local bgContentSize = self.chat_text_bg:getContentSize()
    self.chat_text_bg:setContentSize(contentSize.width + self.chat_text:getPositionX()*2,bgContentSize.height)
    self.chat_text_bg:setVisible(true)
    self.chat_text_bg:stopAllActions()
    self.chat_text_bg:runAction(cc.Sequence:create(cc.DelayTime:create(2),cc.Hide:create(),
    cc.CallFunc:create(function()
        if not self.headInfoBg:isVisible() then
            self:resetHeadViewOrder(tmpIndex)
        end
    end),
    nil))
end

--[[
    @desc 显示互动表情
    endPos:table {x:number,y:number} 结束位置(世界坐标系)
    idx:number 互动表情索引 从1开始
    isFromMyself是否发送者是自己
]]
function HeadImgView:showInteractiveFace(endPos,idx, isFromMyself, isFirst)
    if true then
        return
    end
    if isFromMyself and isFirst then
        if g_UserDataTable.gameEmojCount >= 5 then
            return 
        end
    elseif not isFromMyself then
        --如果不是自己发的，那就要判断表情开关了
        if g_UserDataTable.gameEmojClosed == 1 then
            return
        end
    end
    self.headInfoBg:setVisible(false)
    self:refreshHudongBtnState()
    -- idx = idx + 1
    idx = idx-10000
    local startPos = self.offline:getParent():convertToWorldSpace(cc.p(self.offline:getPosition()))
    local dist = cc.pGetDistance(startPos,endPos)
    local speed = 1200
    --新动画都偏了且太大调一下位置 
    local pianyiPos = {
        {
            {-80,-40},
            {-160,-10},
            {-45,-15},
            {10,-25},
            {-10,-60},
            {-20,-60},
        },
        {
            {20,-40},
            {-10,-10},
            {90,-15},
            {110,-25},
            {95,-60},
            {40,-60},
        },
    }
    local changeDistanceTab = nil
    if endPos.x>g_gameGlobal:getDisplayWidth()/2 then 
        changeDistanceTab = pianyiPos[1]
    else
        changeDistanceTab = pianyiPos[2]
    end
    if changeDistanceTab and changeDistanceTab[idx] then 
        endPos.x = endPos.x+(changeDistanceTab[idx][1] or 0)
        endPos.y = endPos.y+(changeDistanceTab[idx][2] or 0)
    end
    local spine = sp.SkeletonAnimation:create(newInteractiveFaceAnim[idx]..".json", newInteractiveFaceAnim[idx]..".atlas", 1)
    spine:setPosition(startPos)
    spine:setAnimation(0, "animation1", true)

    local spine2 = sp.SkeletonAnimation:create(newInteractiveFaceAnim[idx]..".json", newInteractiveFaceAnim[idx]..".atlas", 1)
    spine2:setAnimation(0, "animation3", true) 
    spine2:setPosition(endPos.x-120,endPos.y-40)
    g_gameGlobal:getGameScene():addChild(spine2,g_gameConstant.CLUB_INVITE_ROOM_POP_ZORDER-1)
    spine2:hide()
    
    -- Hown 添加场景判断
    local gameSence = g_gameGlobal:getGameScene()
    if tolua.isnull(gameSence) then 
        return 
    end 
    gameSence:addChild(spine,g_gameConstant.CLUB_INVITE_ROOM_POP_ZORDER-1)
    spine:runAction(cc.Sequence:create(cc.MoveTo:create(0.45,endPos),cc.CallFunc:create(function()
        spine:clearTrack(0)
        spine:addAnimation(0,"animation2",false,0)
        if (idx==4 or idx==5) then 
            spine2:show()
            spine2:addAnimation(0,"animation4",false,0)
            spine2:runAction(cc.Sequence:create(cc.DelayTime:create(3),cc.RemoveSelf:create(),nil))
        end
        spine:runAction(cc.Sequence:create(cc.DelayTime:create(3),cc.RemoveSelf:create(),nil))
    end),nil))
end

-- 根据牌桌pos更新用户的头像
-- 走到这只能是游戏界面，因为牌桌界面位置已经设好，不用调
function HeadImgView:updateHeadImgPosWithTablePos(pos)
    if pos then
        self.headFrame:move(pos)
    end
    self.headInfoBg:setAnchorPoint(cc.p(0.5, 0.5))
    self.headInfoBg:setPosition(self.headInfoBg:getParent():convertToNodeSpace(cc.p(display.cx, display.cy)))
    self.panelTip:setPosition(self.panelTip:getParent():convertToNodeSpace(cc.p(display.cx, display.cy)))
    self.img_scoreBg:setVisible(true)
    self:refreshReadyState()

    self.zhunbei:setVisible(false)
end

--@desc 更新用户IP信息
function HeadImgView:updateIpInfo(ip)
    if not ip then ip = "" end
    local tmps = string.split(ip, "\n")
    self.ipLabel:setString(tmps[1]=="" and "网址：未知" or "网址："..tmps[1])
    self.addressLabel:setString(tmps[2]==nil and "未知位置" or g_gameGlobal:cutStringLength(tmps[2], 18))
end

-- 新建用户只能是在等待界面中添加，游戏界面中只有离线但保留用户数据
function HeadImgView:updateTablePlayerInfo( playerInfo, isdaa )
    self.playerInfo = playerInfo
    self.playerIndex = playerInfo.playerIndex

    self:setVisible(true)

    -- 更新头像
    local headImgUrl = playerInfo.headImgUrl
    if headImgUrl == "" then headImgUrl = string.format("robotHeadImg/%d.jpg", playerInfo.playerIndex%100+1) end
    local frameKind = playerInfo.headImg
    if string.len(headImgUrl) > 10 then
        if isdaa then
            g_gameGlobal:requestHttpImageWithNoCut(playerInfo.headImg, headImgUrl, self.headIcon, false, true)
            g_gameGlobal:requestHttpImageWithNoCut(playerInfo.headImg, headImgUrl, self.headImg, false, true)
        else
            local isMine = self.posState==1 or playerInfo.playerIndex
            if self.isWatchWar then
                isMine = playerInfo.playerIndex
            end
            
            g_gameGlobal:requestHttpImageWithNoCut(playerInfo.headImg, headImgUrl, self.headIcon, isMine, true)
            g_gameGlobal:requestHttpImageWithNoCut(playerInfo.headImg, headImgUrl, self.headImg, isMine, true)
        end
    end
    
    -- 玩家昵称
    self.userName:setString(g_gameGlobal:cutStringLength(playerInfo.playerName, 4, true))
    self.userName:setVisible(true)

    self.nicheng:setString(g_gameGlobal:cutStringLength(playerInfo.playerName))

    -- 金币数
    self.img_scoreBg:setVisible(true)
    self.goldNum:setString(playerInfo.gold)
    self.userGold:setString(playerInfo.gold)
    -- 钻数
    if playerInfo.diamond == nil then
        -- body
        self.diamondNum:setString(0)
    end
    
    local idStr = g_gameGlobal:parsePlayerIndex(playerInfo.playerIndex, self.playerIndexVisible)
    -- id
    self.idLabel:setString("账号:" .. idStr)
    -- ip
    playerInfo.ip = playerInfo.ip
    local tmps = string.split(playerInfo.ip and playerInfo.ip or "", "\n")
    self.ipLabel:setString(tmps[1]=="" and "网址：未知" or "网址："..tmps[1])
    self.addressLabel:setString(tmps[2]==nil and "未知位置" or g_gameGlobal:cutStringLength(tmps[2], 18))

    local headTouchEnabled = not self.isWatchWar
    -- 头像设置触摸响应
    self.headFrame:setTouchEnabled(headTouchEnabled)

    self:refreshReadyState(playerInfo.gameState)
    
    local offlineVisible = playerInfo.inTable ~= 1 and not g_gameGlobal:getIsPlayingGameLog()
    self:visibleOffline(offlineVisible)
    
    self:addHeadFx(playerInfo.headFrameFx)
end

-- 头像框效果
function HeadImgView:addHeadFx(baseID)
    
end

function HeadImgView:getOkMarkPos()
    local headConfig = g_gameGlobal:getHeadPosConfig()
    return headConfig[self.posState].okMarkWPos
end

function HeadImgView:refreshReadyState(gameState)
    if g_gameGlobal:getIsPlayingGameLog() then
        self.zhunbei:setVisible(false)
        return
    end
    if not gameState or  gameState == g_gameConstant.PALYER_GAME_STATE_WAITING_CLICK_READY or gameState == g_gameConstant.PALYER_GAME_STATE_IN_TABLE_GAME_OVER_WAITING_TO_CONTINUE then
        self.zhunbei:setVisible(false)
    else
        self.zhunbei:setVisible(false)
        self.zhunbei:setPosition(self.zhunbei:getParent():convertToNodeSpace(self:getOkMarkPos()))
    end
end

-- function HeadImgView:HttpHeadIconBack( obj )
--     self.headIcon = obj
-- end


-- function HeadImgView:HttpHeadImgBack( obj )
--     self.headImg = obj
-- end

local lastHDTime = 2
-- 互动表情按钮事件
function HeadImgView:hudongTouchEvent( event )
    if event.name == "ended" then
        if g_gameGlobal:getIsPlayingGameLog() then
            return 
        end
        if self.isNoInteraction then 
            --ShowToastMsg("禁止互动模式,不能发送互动表情")
            ShowToastMsg("互动表情功能已被禁用，不能发送互动表情")
            return 
        end
        if self.posState == 1 then 
            ShowToastMsg("不能给自己发送互动表情")
            return 
        end 
        
        -- local needWait = math.ceil(5-(os.time()-lastHDTime))
        -- if needWait > 0 then
        --     ShowToastMsg(string.format("互动过于频繁，还需等待%d秒", needWait))
        --     return
        -- end

        local diamondInfo = g_gameGlobal:getMinDiamondInfo() 
        local goldInfo = g_gameGlobal:getMinGlodInfo() 
        if not next(diamondInfo) then 
            diamondInfo = DIAMOND_INFO
        end
        if not next(goldInfo) then 
            goldInfo = GOLD_INFO
        end
        self:setLocalZOrder(g_gameConstant.HEADIMGVIEW_CLOSE_ZORDER)
        self.headInfoBg:setVisible(false)
        local index = event.target.__idx
        self.selectIndex = index
        local curTarget = event.target
        local player = g_gameGlobal:getMyselfInfo()
        ----有剩余次数或免费
        if curTarget.cishuCount > 0 or curTarget.price <= 0 or self.vipFreeUsePropCnt > 0 then 
            self:sendBuyBiaoQingInfo()
        else
            local typeString = g_gameConstant.BIAO_QING[index]
            local showString = ""
            ----大于最小金币限制
            if player.gold>=curTarget.price then 
                self.curTipBtnType = 0
                ----第一次买或未勾选需展示提示框
                local isHaveKeep = cc.UserDefault:getInstance():getBoolForKey("HF-Type-"..self.curTipBtnType)
                if (not isHaveKeep) then 
                    local price = curTarget.price
                    showString = string.format( "确定要消耗%d金币购买'%s'表情并使用吗？",price,typeString)
                    self.panelTip:show()
                    self.checkBox:setSelected(true)
                else
                    --直接发送用金币购买 
                    self:sendBuyBiaoQingInfo()
                end
            else
                --金币不够，提示用钻石购买金币再购买表情
                if player.realDiamond >= goldInfo.price then 
                    showString = string.format( "您的金币不足,是否使用房卡兑换金币购买'%s'表情并发送？",typeString)
                    self.curTipBtnType = 1
                else
                    ----引导充值弹窗     
                    showString = string.format( "您的钻石不足,是否用【%d元】%s?充值成功后将为您自动购买【金币%d】",diamondInfo.price* self.discountBuff/100,diamondInfo.description,goldInfo.property_1)
                    self.curTipBtnType = 2
                end
                local isHaveKeep = cc.UserDefault:getInstance():getBoolForKey("HF-Type-"..self.curTipBtnType)
                if (not isHaveKeep) then  
                    self.panelTip:show()
                    self.checkBox:setSelected(true)
                else
                    --无弹窗提示，直接操作
                    self:onBuyOperiat()
                end
            end
            self.text_content:setString(showString)
        end
    end
end

-- 点击头像触发事件
function HeadImgView:touxiangTouchEvent( event )
    if event.name == "ended" then
        if not g_gameGlobal:getVipTableID() or g_gameGlobal:getVipTableID() == 0 then
            --return 
        end

        if g_gameGlobal:getIsPlayingGameLog() then 
            return 
        end   

        if self.headInfoBg:isVisible() then
            return 
        end
        self.headInfoBg:setVisible(true)

        self:refreshHudongBtnState()
        
        if g_UserDataTable.gameGPSSetState then
            if self.model == g_gameConstant.GOLD_GAME_MODEL then
                self.gpsBtn:setVisible(false)
            elseif self.model == g_gameConstant.VIP_GAME_MODEL  then
                self.gpsBtn:setVisible(true)
            end
        else
            if self.gpsBtn and not tolua.isnull(self.gpsBtn) then 
                self.gpsBtn:setVisible(false)
            end 
        end
      
        --先隐藏表情
        local hudongList = self.headInfoBg:getChildByName("hudongList")
        for i, v in pairs(hudongList:getChildren()) do   
            v:hide()
        end
        --请求一下表情数据
        self:sendBiaoQingData()

        self:setPlayerGpsInfo()
        --end
        -- 启动定时器，3秒关闭
        self:createSchedule(1, 3)
        self:setLocalZOrder(g_gameConstant.HEADIMGVIEW_OPEN_ZORDER+1)
    end
end

function HeadImgView:refreshHudongBtnState()
    local hudongList = self.headInfoBg:getChildByName("hudongList")
    hudongList:setScrollBarEnabled(false)
    
    local color = cc.c3b(255, 255, 255)
    if g_gameGlobal:getIsPlayingGameLog() or g_UserDataTable.gameEmojCount >= 5 then
        color = cc.c3b(144, 144, 144) 
    end
    
    for i, v in ipairs(hudongList:getChildren()) do
        local visible = not g_gameConstant.HUDONG_ENABLED or (g_gameConstant.HUDONG_ENABLED and g_gameConstant.HUDONG_ENABLED[i])
        
        v:setVisible(visible)
        if visible then
            v:setColor(color)
        end
    end
end

-- 定时器创建，time表示定时器间隔，endTime表示结束时间
function HeadImgView:createSchedule(time, endTime)
    self.showPopInfoDuration = time
    if self.schedulerEntry then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self.schedulerEntry)
        self.schedulerEntry = nil
    end
    local scheduler = cc.Director:getInstance():getScheduler()
    local time = 0
    local function scheduleFunc(dt)
        time = time + dt 
        --print("time is " .. time)
        if time > endTime then
            self:endSchedule()
        end
    end
    self.schedulerEntry = scheduler:scheduleScriptFunc(scheduleFunc, time , false)
end

-- 删除定时器
function HeadImgView:endSchedule()
    if self.schedulerEntry then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self.schedulerEntry)
        self.schedulerEntry = nil
    end
    -- self.headInfoBg:setVisible(false)

    -- self:resetHeadViewOrder(self.isShowChatInfo)
end

function HeadImgView:onTouchBegan(touch, event)
    if not self.headInfoBg:isVisible() then
        return false
    end

    local location = touch:getLocation()
    local locationInNode = self.headFrame:convertToNodeSpace(location)
    if cc.rectContainsPoint(self.headInfoBg:getBoundingBox(), locationInNode) then
        return true
    else
        -- 如果触摸位置不在头像具体信息框范围内，就结束定时器，同时把触摸点下传
        self:endSchedule()
        return true
    end
end

function HeadImgView:refreshStateListSubV(obj)
    if not tolua.isnull(obj) and iskindof(obj, "cc.Node") then
        obj:setRotation(self.stateList:getRotation() * -1)
        obj:setScaleX(self.stateList.flip)
    end
end

-- 0：万 1：条 3：筒 其他：没有
function HeadImgView:setQue(val)
    local obj = nil
    local spf = nil

    if val ~= nil then
        local spfs = {"game/stateMark_wang.png", "game/stateMark_tiao.png", "game/stateMark_tong.png"}
        if spfs[val] then
            spf = cc.SpriteFrameCache:getInstance():getSpriteFrame(spfs[val])
        end
    end

    for i,v in ipairs(self.stateList:getItems()) do
        if v:getName() == "dingque_mark" then
            if spf then
                obj = self.stateList:getItem(i - 1)
            else
                self.stateList:removeItem(i - 1)
                return
            end
            break
        end
    end
    
    if spf then
        if obj == nil then
            display.loadSpriteFrames("game/game0.plist", "game/game0.png")
            obj = ccui.ImageView:create()
            obj:setName("dingque_mark")
            self.stateList:pushbackCustomItem(obj)
        end
        obj:loadTexture("Match/"..spf, ccui.TextureResType.plistType)
        self:refreshStateListSubV(zj)
    end
end

function HeadImgView:tuoGuanVisible( isShow )
    if not tolua.isnull(self.tuo_guan) then 
        self.tuo_guan:setVisible(isShow)
    end 
end

function HeadImgView:zhuangVisible(visible)
    self.zhuang:setVisible(visible)
end

function HeadImgView:xzScore(value)
    if value == nil or value < 0 then
        self.img_xz_socre:setVisible(false)
        return
    else
        display.loadSpriteFrames("game/game0.plist", "game/game0.png")
        local frameName = string.format("game/xz_score_%s.png", tostring(value))
        local frame = cc.SpriteFrameCache:getInstance():getSpriteFrame(frameName)
        if frame then
            self.img_xz_socre:loadTexture("Match/"..frameName, ccui.TextureResType.plistType)
            self.img_xz_socre:setVisible(true)
        else
            self.img_xz_socre:setVisible(false)
        end
    end
end

function HeadImgView:setLianzCount(value)
    self.lianzCount = value or 0

    self.lianzBmfont:setString("#".. self.lianzCount)
    self.lianzBmfont:setVisible(self.lianzCount>0 and self.needShowLianzCount)
end

function HeadImgView:setQueState(queValue, isAllFinished, needShowAni, aniPos)
    display.loadSpriteFrames("game/game0.plist", "game/game0.png")
    --万条筒： 0x00  0x10   0x20
    local queShow = queValue and queValue~=-1 and isAllFinished
    self.queCard:setVisible(queShow)

    if queValue == 0x00 then
        self.queCard:loadTexture("Match/".."game/game_quewan.png", ccui.TextureResType.plistType)
    elseif queValue == 0x10 then
        self.queCard:loadTexture("Match/".."game/game_quetiao.png", ccui.TextureResType.plistType)
    elseif queValue == 0x20 then
        self.queCard:loadTexture("Match/".."game/game_quetong.png", ccui.TextureResType.plistType)
    end

    if queShow and needShowAni and aniPos and false then
        local aniNode = self.queCard:clone():addTo(self.queCard:getParent())
        aniNode:setScale(2)
        aniNode:setPosition(self.queCard:getParent():convertToNodeSpace(aniPos))
        local oriScale = self.queCard:getScaleX()
        local aniSeq = cc.Sequence:create(
            --cc.ScaleTo:create(0.15, 2.8),
            --cc.ScaleTo:create(0.15, 2.0),
            cc.DelayTime:create(0.5),
            cc.CallFunc:create(function() aniNode:removeSelf() end)
        )   
        aniNode:runAction(aniSeq)

        self.queCard:stopAllActions()
        self.queCard:setOpacity(0)
        local hideAni = cc.Sequence:create(
            cc.DelayTime:create(0.5),
            cc.CallFunc:create(function() self.queCard:setOpacity(255) end)
        )
        self.queCard:runAction(hideAni)
    end
end

function HeadImgView:setNeedShowLianzCount(value)
    self.needShowLianzCount = value or false
    self:setLianzCount(self.lianzCount)
end

function HeadImgView:fangzhuVisible(visible)
    self.fangzhu:setVisible(visible)
end

function HeadImgView:refreshGoldNum(goldNum, dismondNum)
    if goldNum then
         -- 外层金币数
        self.userGold:setString(goldNum)
        -- 内层金币数
        self.goldNum:setString(goldNum)
    end
    
    if dismondNum then
        -- 内层钻数
        self.diamondNum:setString(dismondNum)
    end
end

function HeadImgView:getGoldNum()
    if not tolua.isnull(self.userGold) then
        return tonumber(self.userGold:getString()) or 0
    end
    
    return 0
end

local offlineFormater = "离线\n%s"
function HeadImgView:setOfflineSec(offLineSec)
    if tolua.isnull(self.offlineTxtDesc) then
        return
    end
    
    if offLineSec == -1 then
        -- 只需显示离线 不计时
        self.offlineTxtDesc:setString("离线")
        return
    end
    
    local offLineStr = string.format(offlineFormater, g_gameGlobal:getTimeStrBySec(offLineSec))
    
    self.offlineTxtDesc:setString(offLineStr)
end

function HeadImgView:visibleOffline(visible, offLineSec)
    visible = false
    local alreadyOffline = self.offline:isVisible()
    self.offline:setVisible(visible)
    
    if not tolua.isnull(self.offlineTxtDesc) then
        if alreadyOffline then
            offLineSec = offLineSec or self.offlineSec or 0
            
        else
            offLineSec = offLineSec or 0
        end
        
        self.offlineTxtDesc:stopAllActions()
        
        if visible and offLineSec then
            
            local gameScene = g_gameGlobal:getGameScene()
            local gamebase = gameScene and gameScene:getChildByName("gameBase")
            if not gamebase:getInGame() then
                offLineSec = -1
                -- 设置时间
                self:setOfflineSec(offLineSec)
            else
                
                self.offlineSec = offLineSec
                -- 设置时间
                self:setOfflineSec(self.offlineSec)
                
                -- 添加定时器
                local delayAct = cc.DelayTime:create(1)
                local callFunc = cc.CallFunc:create(function ()
                    self.offlineSec = self.offlineSec + 1
                    self:setOfflineSec(self.offlineSec)
                end)
                local seqAct = cc.Sequence:create(delayAct, callFunc)
                local repeatAct = cc.RepeatForever:create(seqAct)
                self.offlineTxtDesc:runAction(repeatAct)
            end
            
            self.offlineTxtDesc:setVisible(false)
            
        elseif not visible then
            self.offlineTxtDesc:setVisible(false)
        end
    end
end

function HeadImgView:visibleToNear(visible)
    if visible == nil then visible = false end
    self.tooNear:setVisible(visible)
end

function HeadImgView:updateDistanceDesc(str)
    self.Text_disInfo:setString("")
    if str then
        self.Text_disInfo:setString(str)
    end
end

function HeadImgView:getHeadIcon()
    return self.headIcon
end

function HeadImgView:showSibgleEnd(  )
    self.SingleEndImg:setVisible(true)
end

function HeadImgView:hideSibgleEnd(  )
    self.SingleEndImg:setVisible(false)
end

function HeadImgView:setJiabeiVisible(visible)
    if tolua.isnull(self.imgJiabei) then
        return
    end
    
    self.imgJiabei:setVisible(visible)
    self.ddzJiabei = visible
end

function HeadImgView:isPlayerJiabei()
    return self.ddzJiabei
end

function HeadImgView:setHudongEnable(value)
    local hudongList = self.headInfoBg:getChildByName("hudongList")
    for k, v in pairs(hudongList:getChildren()) do
        v:setTouchEnabled(value)
    end
end

function HeadImgView:getJoinRoomFxNode()
    return self.headFrame
end

function HeadImgView:showCardPressure(baseID)
    
end

function HeadImgView:tipBtnClick(event)
    if event.name == "ended" then
        if event.target == self.btn_sure then
            if self.curTipBtnType==0 then 
                --直接发送用金币购买 
                self:sendBuyBiaoQingInfo()
            else
                self:onBuyOperiat()
            end
        end
        self.headInfoBg:setVisible(false)
        self.panelTip:hide()
        local isCheck = self.checkBox:isSelected()
        --选中了就记录
        if isCheck then 
            cc.UserDefault:getInstance():setBoolForKey("HF-Type-"..self.curTipBtnType, true)
        else
            cc.UserDefault:getInstance():setBoolForKey("HF-Type-"..self.curTipBtnType, false)
        end
    end
end

--购买按钮操作
function HeadImgView:onBuyOperiat(curTipBtnType)
    local curTipBtnType = curTipBtnType or self.curTipBtnType
    if curTipBtnType==2 then --支付买钻石   
        local diamondInfo = g_gameGlobal:getMinDiamondInfo() 
        if not next(diamondInfo) then 
            diamondInfo = DIAMOND_INFO
        end  
        local item = diamondInfo

        local RequestBuyDaoJu = {}
        local function sendRequestBuyFkMsg(RequestBuyDaoJu)
            --购买钻石BUFF
            RequestBuyDaoJu.unused1 = self.buyBuff or 0
            if true then 
                -- H5版支付
                local appId = 10000052
                local playerIndex = g_gameGlobal:getMyselfInfo().playerIndex
                local payMoney = item.price 
                local itemId = item.base_id
                local itemName = item.name
                local platformMap = {
                    ["ios"] = 1,
                    ["android"] = 2,
                }
                local payType = ""
                if RequestBuyDaoJu.payType == PAY_HISTORY_PLATFORM_TYPE_WX_PAY then
                    payType = "wxpay"
                elseif RequestBuyDaoJu.payType == PAY_HISTORY_PLATFORM_TYPE_ALIPAY then
                    payType = "alipay"
                else
                    return 
                end
    
                local platform = (platformMap[device.platform] == nil and {3} or {platformMap[device.platform]})[1]
                local realUrl = string.format("https://pay.tt2kj.com/dist/index.html?appId=%s&playerIndex=%s&payMoney=%d&itemId=%s&itemName=%s&platform=%d&payType=%s&about=%s&discount=%d&ext=%s", tostring(appId), tostring(playerIndex), payMoney, tostring(itemId), string.urlencode(itemName), platform,payType,string.urlencode(""), self.discountBuff or 100, tostring(self.buyBuff or 0)) --""
                dump(realUrl, "请求地址")
                CCApplication:getInstance():openURL(realUrl)
            else
                g_longConnect:sendMsg(g_msgDefinitions.MSG_REQUEST_BUY_DAOJU,RequestBuyDaoJu)
            end
        end
        if Platform.isAppStoreVersion() then
    
            RequestBuyDaoJu.itemID= item.base_id
            RequestBuyDaoJu.count=1
    
            if G_APPSTORE_PACKAGE_USE_WX_PAY then
                RequestBuyDaoJu.payType=PAY_HISTORY_PLATFORM_TYPE_WX_PAY
            else
                RequestBuyDaoJu.payType= PAY_HISTORY_PLATFORM_TYPE_APPLE
            end
    
            sendRequestBuyFkMsg(RequestBuyDaoJu)
        else
            local payWayLayer = require("app.lobby.PayWayLayer"):create(desc,function(iType)
                local payway
                if iType == 1 then
                    RequestBuyDaoJu.payType=PAY_HISTORY_PLATFORM_TYPE_WX_PAY
                elseif iType == 2 then
                    RequestBuyDaoJu.payType=PAY_HISTORY_PLATFORM_TYPE_ALIPAY
                end
                RequestBuyDaoJu.itemID= item.base_id
                RequestBuyDaoJu.count=1
                sendRequestBuyFkMsg(RequestBuyDaoJu)
            end)
            g_gameGlobal:getGameScene():addChild(payWayLayer,g_gameConstant.CLUB_INVITE_ROOM_POP_ZORDER+1)
            self.panelTip:hide()
        end
    elseif curTipBtnType==1 then     --钻石兑换金币
        local goldInfo = g_gameGlobal:getMinGlodInfo() 
        if not next(goldInfo) then 
            goldInfo = GOLD_INFO
        end
        local item = goldInfo
        if g_gameGlobal:getMyselfInfo().realDiamond < item.price then
            ShowToastMsg("房卡不足")
            return
        end
        local RequestBuyDaoJu = {}
        RequestBuyDaoJu.itemID= item.base_id
        RequestBuyDaoJu.count=1
        RequestBuyDaoJu.payType=0
        g_longConnect:sendMsg(g_msgDefinitions.MSG_REQUEST_BUY_DAOJU,RequestBuyDaoJu)
    end
end

--查询一下商城配置
function HeadImgView:sendShopInfo()
    local RefreshItemBaseMsg = {}
    RefreshItemBaseMsg.account = g_gameGlobal:getMyselfInfo().account
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_REFRESH_ITEM_BASE, RefreshItemBaseMsg)
end

function HeadImgView:netEvent()
    local netObj,eventObj = unpack(require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msg_obj"))
    self:addChild(netObj.new(g_msgDefinitions.MSG_GAME_GAME_OPERTAION_ACK, function (event, msg)
        local goldInfo = g_gameGlobal:getMinGlodInfo() 
        if not next(goldInfo) then 
            goldInfo = GOLD_INFO
        end
        if msg.unused2 == goldInfo.base_id and self.selectIndex then
            self:sendBuyBiaoQingInfo() 
            --钻石兑换金币成功，再发送购买表情
        elseif msg.result==0x10 then
            ShowToastMsg("兑换金币失败")
        end
    end))
    self:addChild(netObj.new(g_msgDefinitions.MSG_REQUEST_BUY_DAOJU_ACK, function (event, msg)
        if msg.payType == PAY_HISTORY_PLATFORM_TYPE_ALIPAY then --支付宝
            Platform.alipay(msg.order,function(jsonResult)
                local ret = json.decode(jsonResult)
                dump(ret)
                if ret.resultStatus == "9000" then
                    --支付成功
                    print("nativeAliPayCallBack success")
                    
                    --再次吊起兑换金币
                    self:onBuyOperiat(1)

                    local GameBuyItemCompleteMsg = {}
                    GameBuyItemCompleteMsg.orderno = ret.result
                    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PAY_ITEM_BASE_COMPLETE,GameBuyItemCompleteMsg)
                else
                    --支付异常
                    print("nativeAliPayCallBack failed!")
                    ShowToastMsg("支付异常")
                end
            end)
        elseif msg.payType == PAY_HISTORY_PLATFORM_TYPE_WX_PAY then --微信
            local orderTable = json.decode(msg.otherstr)
            orderTable.partnerid = orderTable.mch_id
            orderTable.order = msg.order
            --必填项，固定值
            orderTable.package = "Sign=WXPay"
            local str = json.encode(orderTable)
            Platform.wxpay(str,function(jsonResult)
                local ret = json.decode(jsonResult)
                dump(ret)
                if ret.resultStatus == "SUCCESS" then
                    --支付成功
                    print("nativewxPayCallBack success")

                    --再次吊起兑换金币
                    self:onBuyOperiat(1)

                    local GameBuyItemCompleteMsg = {}
                    GameBuyItemCompleteMsg.orderno = tonumber(order)--ret.result
                    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PAY_ITEM_BASE_COMPLETE,GameBuyItemCompleteMsg)
                else
                    --支付异常
                    print("WX_PAY FAILED!")
                    ShowToastMsg("支付异常")
                end
            end)
        elseif msg.payType == PAY_HISTORY_PLATFORM_TYPE_APPLE then--苹果   
            print("MSG_REQUEST_BUY_DAOJU_ACK iap pay type")
            Platform.applepay(msg.otherstr, function(strResult)
                --其实并不会跑这里的回调。
                dump(strResult)
                if strResult == "error" then
                    print("nativeApplePayCallBack failed!")
                else
                end 
            end)
        end
    end))

    self:addChild(netObj.new(g_msgDefinitions.MSG_GAME_REFRESH_ITEM_BASE_ACK, function (event, msg)
        local itemList =  msg.itemList
        local gameCost = {}
        for _,v in pairs(itemList) do
            if v.base_id > 3000 and v.base_id < 4000 then
                local diamondInfo = g_gameGlobal:getMinDiamondInfo()
                if not next(diamondInfo) then 
                    g_gameGlobal:setMinDiamondInfo(v)
                end
            elseif v.base_id >5000 and v.base_id < 6000 then
                local goldInfo = g_gameGlobal:getMinGlodInfo()
                if not next(goldInfo) then 
                    g_gameGlobal:setMinGlodInfo(v)
                end
            end
        end
    end))

    self:addChild(netObj.new(g_msgDefinitions.MSG_GET_PLAYER_BUFF_MSG, function (event, msg)
        self.discountData = msg.bufList
        if self.reloadDiscountData then
            self:reloadDiscountData()
        end
    end))

end

--处理折扣相关
function HeadImgView:reloadDiscountData()
    local shopID = 0
    for k, v in ipairs(self.discountData) do
        if v.itemID == 23 and v.itemID > shopID then
            shopID = v.itemID
            self.discountBuff = 95 --月卡
        elseif v.itemID == 24 and v.itemID > shopID then
            shopID = v.itemID
            self.discountBuff = 90 --季卡
        elseif v.itemID == 25 and v.itemID > shopID then
            shopID = v.itemID
            self.discountBuff = 80 --年卡
        end
    end
end

--请求折扣数据
function HeadImgView:refreshDiscount()
    local getBuffMsg = {}
    getBuffMsg.bufList = {}
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GET_PLAYER_BUFF_MSG, getBuffMsg)
end

--老的发送表情msg
function HeadImgView:sendBiaoQingEvent( )
    local index = self.selectIndex
    local TalkingInGameMsg = {
        playerPos=g_gameGlobal:getMyTablePos(),
        playerSex=g_gameGlobal:getMyselfInfo().sex,
        msgType=4,--自带互动表情
        msgNo=index-1,--与C++的索引保持一致
        unused0 = self.playerInfo.tablePos --发送给谁,这里用的客户端椅子号
    }
    g_longConnect:sendMsg(g_msgDefinitions.MSG_TALKING_IN_GAME,TalkingInGameMsg)
    lastHDTime = os.time()
    self:endSchedule()
end

--发送购买表情信息
function HeadImgView:sendBuyBiaoQingInfo()
    
end

--请求互动表情数据
function HeadImgView:sendBiaoQingData()
    
end

--更新表情数据
function HeadImgView:updataBiaoQingData(data)
    if type(data)~="table" or nil==next(data) then 
        ShowToastMsg("数据显示异常，请重试")
        return 
    end
    table.sort(data, function(v1, v2)
        return v1.itemID < v2.itemID
    end)
    -- 互动表情
    local hudongList = self.headInfoBg:getChildByName("hudongList")
    g_gameGlobal:registerOutsideCloseFunc(self.headInfoBg,function()
        self.headInfoBg:setVisible(false)
    end,false)
    local posTab = {}
    for i, v in pairs(hudongList:getChildren()) do 
        local x,y = v:getPosition()
        table.insert( posTab,{x,y}  )
        v:hide()
    end
    if not self.posTab then 
        self.posTab = posTab
    end

    for j, k in pairs(data) do  
        local index = data[j].itemID-10000
        --初始化配置设置
        local target = hudongList:getChildren()
        target[index]:show()
        local countBg = target[index]:getChildByName("countBg")
        local text_count = countBg:getChildByName("text_count")
        text_count:setString(data[j].leftFreeTimes)
        target[index].cishuCount = tonumber(data[j].leftFreeTimes)
        local priceBg = target[index]:getChildByName("priceBg")
        local text_price = priceBg:getChildByName("text_price")
        text_price:setString(data[j].price)
        target[index].price = tonumber(data[j].price)
        local type_icon = priceBg:getChildByName("type_icon")
        local imgFree = target[index]:getChildByName("imgFree")
        if data[j].price<=0 or data[j].allFreeTimes==-1 then 
            text_price:setString("免费")
            countBg:hide()
            type_icon:hide()
            text_price:setPosition(29,9)
        else
            imgFree:hide()
            priceBg:show()
            if self.vipFreeUsePropCnt > 0 then
                imgFree:show()
                priceBg:hide()
            elseif tonumber(data[j].leftFreeTimes)<=0 then 
                countBg:hide()
            else
                countBg:show()
            end
            type_icon:show()
            text_price:setPosition(38,8)
        end
        target[index]:setPosition(self.posTab[j][1],self.posTab[j][2])
    end
end

return HeadImgView  �  