
local TablePlayerBase = class("TablePlayerBase", cc.Node)
local Utils = require("newgold.GoldLobby.Modules.PeakRaceGame.PDK.Utils")




function TablePlayerBase:ctor(...)
    self.inhandCards = {} 
    self.chuCards = {}
    self.laydownCards = {}
    self.huaCards = {}

    self.posState = 0
    self.chiPengGangBlock = 0
    self.newCard = nil
    self.newCardInLog = nil
    self.sex = 0
    self.handCardStartPosX = 0          --手牌起始位置
    self.handCardStartPosY = 0

    self.isChooseCard = false       --血战换三张标志

    self.xuanchenghucard = 0           --记录宣城胡牌


    self.player_piaoHua = 0 -- -1未选择，0不飘，1飘花
    self._maxNum = 0

    self.touchObjMoved = false

    self.isTing = false
    self.tingIndex = 0     --出第几张牌，报听
    self.stateNode = display.newNode():addTo(self)

    self.actionNode = display.newNode():addTo(self)

    
    self:enableNodeEvents()
end


function TablePlayerBase:init(sex, maxNum)
     cc.SpriteFrameCache:getInstance():addSpriteFrames("paimian/paimian.plist")
    self._maxNum = maxNum or 0
    local headPos = g_gameGlobal.gamePlayHeadPosTbl[self.posState].head
    -- headPos.x = headPos.x - (display.cx - 1280/2)
    -- headPos.y = headPos.y - (display.cy - 720/2)

    headPos = self:convertToNodeSpace(headPos)

    local pos = nil
    if self.posState == 1 then
        pos = cc.p(display.cx + 50, display.height/3 - 30)
    elseif self.posState == 2 then
        pos = cc.p(display.width*3/4, display.cy - 30)
    elseif self.posState == 3 then
        pos = cc.p(display.cx + 50, display.height * 2/3 + 50)
    elseif self.posState == 4 then
        pos = cc.p(display.width/4-80, display.cy -10)
    end

    pos = self:convertToNodeSpace(pos)

    self.sex = ((sex ~= nil) and sex or 0)

    local statePos = self:getChuPos()
    self.stateNode:setPosition( statePos )

end


function TablePlayerBase:setTing(bool)
    self.isTing = bool
end

function TablePlayerBase:getTing()
    return self.isTing
end

function TablePlayerBase:setTingIndex(tingIndex)
    if tingIndex then 
        self.tingIndex = tingIndex
    else
        self.tingIdex = #self.chuCards> 0 and #self.chuCards - 1 or 0
    end
end

function TablePlayerBase:getTingIndex()
    return self.tingIndex
end

function TablePlayerBase:setSex(sex)
    self.sex = ((sex ~= nil) and sex or 0)
end

function TablePlayerBase:onExit()
    if self.schedulerEntry then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self.schedulerEntry)
        self.schedulerEntry = nil
    end
end
function TablePlayerBase:touxiangSkeletonVisible(visible)

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

function TablePlayerBase:getChuPos()
    local pos = nil
    if self.posState == 1 then
        pos = cc.p(display.cx - 40, display.height/3+10)
    elseif self.posState == 2 then
        pos = cc.p(display.width*3/4, display.cy+30)
    elseif self.posState == 3 then
        pos = cc.p(display.cx - 40, display.height * 2/3 + 50)
    elseif self.posState == 4 then
        pos = cc.p(display.width/4 -80, display.cy+30)
    end
    return pos
end


function TablePlayerBase:getPlayerCenterPos( targetPos)
    local pos = nil

    local targetPos = targetPos or self.posState
    if targetPos == 1 then
        pos = cc.p(display.cx, display.height/3+10)
    elseif targetPos == 2 then
        pos = cc.p(display.width*3/4, display.cy)
    elseif targetPos == 3 then
        pos = cc.p(display.cx , display.height * 2/3 + 50)
    elseif targetPos == 4 then
        pos = cc.p(display.width/4 -80, display.cy)
    end
    return pos
end



--补花动画
function TablePlayerBase:playBuhuaAni()

    NG.soundManager:playMatchEffect(g_gameGlobal:getEffectFileForOperation(g_gameConstant.OPERATION_BUHUA, self.sex))

    local ani = g_gameGlobal:playSkeletonAnimationOnce( "spine/game/buhua" )
    ani:setScale(0.80)
    self:addChild(ani , 100 )


    local pos = nil
    if self.posState == 1 then
        pos = cc.p(display.cx , display.height/3)
    elseif self.posState == 2 then
        pos = cc.p(display.width*3/4, display.cy+30)
    elseif self.posState == 3 then
        pos = cc.p(display.cx , display.height * 2/3 + 40)
    elseif self.posState == 4 then
        pos = cc.p(display.width/4-20, display.cy+30)
    end

    ani:setPosition(pos)

end

--扔宝动画
function TablePlayerBase:playRenbaoAni()
    local animation = cc.Animation:create()
    local texture = cc.Director:getInstance():getTextureCache():addImage("game/rengbao.png")
    local ele_width = 1326/3
    local ele_height = 500/2
    for i=1,6 do
        local x = (i-1)%3 *ele_width
        local y = 500-math.ceil(i/3)*ele_height
        local rect = cc.rect(x, y, ele_width, ele_height)
        animation:addSpriteFrameWithTexture(texture, rect)
    end
    animation:setDelayPerUnit(1.6/ 8.0)
    animation:setRestoreOriginalFrame(true)
    local action = cc.Animate:create(animation)
    local sp = cc.Sprite:create()
    self:addChild(sp,100)
    local pos = g_gameGlobal.gamePlayHeadPosTbl[self.posState].head

    pos = self:convertToNodeSpace(pos)

    sp:runAction(cc.Sequence:create{action, cc.RemoveSelf:create()})


    if self.posState == 1 then
        sp:setPosition(pos.x+200,pos.y+100)
    elseif self.posState == 2 then
        sp:setPosition(pos.x-200,pos.y)
    elseif self.posState == 3 then
        sp:setPosition(pos.x-200,pos.y-100)
    elseif self.posState == 4 then
        sp:setPosition(pos.x+200,pos.y)
    end
end
--飞牌动画
function TablePlayerBase:playFeipaiAni()
    local spine = sp.SkeletonAnimation:create("spine/feipai/feipai.json", "spine/feipai/feipai.atlas", 1)
    spine:setAnimation(0, "animation", false)
    self:addChild(spine,100)
    local ani = cc.Sequence:create{cc.DelayTime:create(1.2),cc.RemoveSelf:create()}
    local pos = g_gameGlobal.gamePlayHeadPosTbl[self.posState].head

    pos = self:convertToNodeSpace(pos)

    if self.posState == 1 then
        spine:setPosition(pos.x+200,pos.y+100)
    elseif self.posState == 2 then
        spine:setPosition(pos.x-200,pos.y)
    elseif self.posState == 3 then
        spine:setPosition(pos.x-200,pos.y-100)
    elseif self.posState == 4 then
        spine:setPosition(pos.x+200,pos.y)
    end
    spine:runAction(ani)
end


function TablePlayerBase:showTingIcon(visible , huorder , zimoDianPao)

end

--控制手牌UI的显示
--renderHandCards : 控制手牌显示
--renderJokerCards: 控制财神牌显示，暂时未用
function TablePlayerBase:showTableCards(renderHandCards,renderJokerCards)
    self:setVisible(renderHandCards)
end

-- 设置出牌位置
function TablePlayerBase:setChuObjPos( obj )

    local pos = self:getChuPos()

    if not pos then 
        return 
    end

    obj:move(pos)

end
function TablePlayerBase:refreshChuCards( chuCards )
    if (self.chuCards == nil) or (type(self.chuCards) == "table" and #self.chuCards == 0) then
        return 
    end

    local findError = false
    if table.getn(self.chuCards) ~= table.getn(chuCards) then
        findError = true
    else
        for i, v in pairs(self.chuCards) do
            if not tolua.isnull(v) then 
                local value = v:getTag()
                if value ~= chuCards[i] then
                    findError = true
                    break
                end
            end
        end
    end

    if findError then
        for i, v in pairs(self.chuCards) do
            v:removeSelf()
        end
        self.chuCards = {}
        for i, v in ipairs(chuCards) do
            self:addChuCard(v, false)
        end
    end
end
function TablePlayerBase:insertNewCard(obj)
    if not obj then
        return
    end 

    local cardValue = obj:getTag()
    if cardValue == 0 then
        print("牌面值为0，出错")
        return
    end

    -- 判断是否是癞子
    if g_gameGlobal:isLaiZi(cardValue) then
        obj:setColor(display.CARD_GREEN)
        self:insertLaiZi(obj)
        return
    end

    local cardY = g_gameConstant.MY_CARD_Y
    local startX = self.handCardStartPosX

    local inserted = false
    for i, v in pairs(self.inhandCards) do 
        local cValue = v:getTag()
        -- if not g_gameGlobal:isLaiZi(cValue) then
        local findPos = false
        if cardValue < cValue then
            findPos = true
        end
        if findPos then
            obj:move((i-1) * g_gameConstant.MYSELF_TABLE_CARD_WIDTH + startX, cardY)
            self:setHandCardPosInLog(obj, i)
            table.insert(self.inhandCards, i, obj)
            inserted = true
            break
        end
        -- end
    end
    if g_gameGlobal:isNewTongLing() then
        if cardValue == 0x35 then
            local  laizi = g_gameGlobal:getLaizi()
            local cardType = bit._and(  bit._rshift(laizi,4)  , 0x7)
            if laizi and laizi > 0 and cardType < 3 then
                obj.HongzhongLaizi(laizi)
            end
        end
    end
    if not inserted then
        obj:move(#self.inhandCards * g_gameConstant.MYSELF_TABLE_CARD_WIDTH + startX, cardY)
        self:setHandCardPosInLog(obj, #self.inhandCards)
        table.insert(self.inhandCards, obj)
    end


end
function TablePlayerBase:getRightLaydownCard(card)
end
function TablePlayerBase:getLeftLaydownCard(card)
end

function TablePlayerBase:huOperation( cardValue, gameResult, winnerMa,dealerMa,winnerZhongMaIndex, dealerZhongMaIndex,isjiao , dianpaoPos )
    --防止两个人一起胡的时候，比如自己和下家，自己的马被下家遮挡
    -- if self.posState == 1 then
    -- self:setLocalZOrder(g_gameConstant.TABLEPLAYERSELECT_ZORDER + 2)
    -- else
    --     self:setLocalZOrder(g_gameConstant.TABLEPLAYERSELECT_ZORDER + 1)
    -- end

    local dianpaoPos = dianpaoPos or -1

    self:showHuCard(cardValue)

    --宣城血战需要显示 胡牌的icon
    if g_gameGlobal:isXuanCheng() then 

        local huorder = winnerZhongMaIndex
        local zimoDianPao = dealerZhongMaIndex

        self:showTingIcon(true , huorder , zimoDianPao)
        self.xuanchenghucard = cardValue
    end

    if bit._and(gameResult, g_gameConstant.MAHJONG_HU_CODE_ZI_MO) ~= 0 then
        NG.soundManager:playMatchEffect(g_gameGlobal:getEffectFileForOperation(g_gameConstant.OPERATION_ZIMO, self.sex))
        if (not g_gameGlobal:getIsPlayingGameLog()) and self.posState == 1 then
            self:moCard(cardValue)
        end
    else
        -- 播放胡音效
        NG.soundManager:playMatchEffect(g_gameGlobal:getEffectFileForOperation(g_gameConstant.OPERATION_HU, self.sex))
    end
    if g_gameGlobal:isWuHuMaJiang() then
        if isjiao == 1 then
            self:playwuhuJiaoAnimation()
            performWithDelay( self, function()
                self:playZiMoAnimation()
            end , 0.5 )
        else
            self:playZiMoAnimation()
        end
    else
        self:playZiMoAnimation()
    end

    -- 买马

    self.m_bShowDealerMa = false

    local function parseMa(mastr)
        local ret = {}
        if string.len(mastr) ~=64 then return ret end
        for i = 0,9 do
            local z = -(i+1)*6
            local str = string.sub(mastr,z,z+5)
            local ma = tonumber(str,2)
            if(ma > 0) then
                table.insert(ret,ma)
            end
        end
        return ret
    end

    local winnerMa = parseMa(winnerMa)
    local dealerMa = parseMa(dealerMa)

    if #winnerMa ~= 0 then
        self:playerKaiMaAnimation(winnerMa,winnerZhongMaIndex , nil , dianpaoPos)
        if #dealerMa ~= 0 then
            self:playerKaiMaAnimation(dealerMa,dealerZhongMaIndex,true , dianpaoPos)
        end
    elseif #dealerMa ~= 0 then
        self:playerKaiMaAnimation(dealerMa,dealerZhongMaIndex  , nil , dianpaoPos)
    end
end


function TablePlayerBase:playGuoAni()

    local skeletonNode = g_gameGlobal:playSkeletonAnimationOnce( "spine/chipenggang_ani/chipg" , "guo"  , true)
    skeletonNode:anchor(0,0)
    local pos = self:getChuPos()
    skeletonNode:move(pos)
    self:addChild(skeletonNode,100)

end

function TablePlayerBase:playZiMoAnimation()
    local skeletonNode = g_gameGlobal:playSkeletonAnimationOnce( "spine/chipenggang_ani/chipg" , "hu"  , true)

    --self:addChild(skeletonNode,100)
    g_gameGlobal:getGameScene():add(skeletonNode, g_gameConstant.ROOMCLOSEVIEW_ZORDER-10)

    local pos = nil
    if self.posState == 1 then
        pos = cc.p(display.width*3/4, display.height/3 - 30)
    elseif self.posState == 2 then
        pos = cc.p(display.width*3/4 + 50, display.height * 3 / 4)
    elseif self.posState == 3 then
        pos = cc.p(g_gameConstant.LEFT_TABLE_CHU_CARD_FIRST_X + 30, display.height *3/4+30)
    elseif self.posState == 4 then
        pos = cc.p(display.width/4-60, display.height * 3 / 4)
    end
    pos = self:convertToNodeSpace(pos)

    skeletonNode:move(pos)

    -- local action = cc.Animate:create(animation)
    -- spr:runAction(cc.Sequence:create{ cc.DelayTime:create(0.5) , action,  cc.DelayTime:create(1.5)  , cc.RemoveSelf:create()})

    NG.soundManager:playMatchEffect("sound/effect_hu.mp3")
end


function TablePlayerBase:playerZZKaiMaAnimation(maList,zhongMaIndex,isDealerMa , dianpaoPos)
    local num = #maList
    -- 创建第一张马
    local ma = maList[1]

    local maObjTable = {}

    local imageView = self:getNormalCard(ma)
    imageView:setScale(1)
    
    local width = imageView:getBoundingBox().width - 20
    local height = imageView:getBoundingBox().height

    if TablePlayerBase.isPlayingZZKaima then 
        return 
    end

    TablePlayerBase.isPlayingZZKaima = true

    performWithDelay(self.actionNode, function()  
        TablePlayerBase.isPlayingZZKaima = false
    end , 1)
    

    if TablePlayerBase.ZZKaiMaBg and not tolua.isnull(TablePlayerBase.ZZKaiMaBg) then 
        TablePlayerBase.ZZKaiMaBg:removeSelf()
        TablePlayerBase.ZZKaiMaBg = nil
    end

    
    -- 创建背景
    local imageViewBg = ccui.ImageView:create("common/empty_frame.png", ccui.TextureResType.localType)
    :setScale9Enabled(true)
    :setCapInsets(cc.rect(20,20,5,5))
    :setContentSize(10 + num * width , height )
    self:add(imageViewBg, 100)
    
    local pos = cc.p(display.cx , display.cy)
    imageViewBg:move(pos)


    TablePlayerBase.ZZKaiMaBg = imageViewBg


    -- dianpaoPos = 4
    local targetPos = dianpaoPos == -1 and self.posState or dianpaoPos
    
    local endPos = self:getPlayerCenterPos(targetPos)

    local zhongList = {}
    local noZhongList = {}
    for i = 1, num do
        local imageObj
        if i == 1 then
            imageObj = imageView
        else
            local ma = maList[i]
            if ma == 0 then
                return 
            end
            imageObj = self:getNormalCard(ma)
        end
        imageObj:setScale(0.7)
        imageObj:anchor(0, 0.5)
        imageObj:addTo(imageViewBg)
        imageObj:move(10+(i-1)*(width), imageViewBg:getContentSize().height/2)
        table.insert(maObjTable, imageObj)

        local zhong = bit._and(zhongMaIndex*(2^(-(i-1))), 0x1)
        if zhong > 0 then
            table.insert(zhongList , imageObj)
        else
            table.insert(noZhongList , imageObj)
            
            performWithDelay( imageObj , function() 
                imageObj:setColor(display.COLOR_GRAY)
            end , 0.5 )
        end
    end


    table.sort( zhongList , function(a, b) 
        local posA = cc.p(  a:getPosition() )
        local posB = cc.p(  b:getPosition() )

        local disA = cc.pGetDistance(  endPos , posA )
        local disB = cc.pGetDistance(  endPos , posB )
        
        return disA < disB
    end)

    local totalw = #zhongList * 55
    -- local startX = (imageViewBg:getContentSize().width - totalw   )/2 + width/2

    for i,imageObj in ipairs(zhongList) do
        local pos =  clone(endPos)

        pos.x = pos.x - (i-1)* 52

        pos = imageViewBg:convertToNodeSpace( pos )
        
        imageObj:moveTo({
            delay = 1, 
            time = 0.5,
            x = pos.x ,
            y = pos.y,
        })
    end

    local totalw = #noZhongList * 55
    local startX = (imageViewBg:getContentSize().width - totalw   )/2 + width/2

    if #zhongList  > 0 then 
        for i,imageObj in ipairs(noZhongList) do
            local x = startX + (i-1)*55
            
            imageObj:moveTo({
                delay = 1, 
                time = 0.5,
                x = x,
                y = imageViewBg:getContentSize().height/2 ,
            })
        end        
    end
   
end


function TablePlayerBase:playwuhuJiaoAnimation()
    local skeletonNode = g_gameGlobal:playSkeletonAnimationOnce( "spine/chipenggang_ani/chipg" , "jiao"  , true)
    g_gameGlobal:getGameScene():add(skeletonNode, g_gameConstant.ROOMCLOSEVIEW_ZORDER-10)
    local pos = nil
    if self.posState == 1 then
        pos = cc.p(display.width*3/4, display.height/3 - 30)
    elseif self.posState == 2 then
        pos = cc.p(display.width*3/4 + 50, display.height * 3 / 4)
    elseif self.posState == 3 then
        pos = cc.p(g_gameConstant.LEFT_TABLE_CHU_CARD_FIRST_X + 30, display.height *3/4+30)
    elseif self.posState == 4 then
        pos = cc.p(display.width/4-60, display.height * 3 / 4)
    end
    pos = self:convertToNodeSpace(pos)

    skeletonNode:move(pos)
end

function TablePlayerBase:playerKaiMaAnimation(maList,zhongMaIndex,isDealerMa , dianpaoPos)

    if g_gameGlobal:isZZMaJiang() then 
        self:playerZZKaiMaAnimation(maList,zhongMaIndex,isDealerMa , dianpaoPos)
        return 
    end

    local num = #maList
    -- 创建第一张马
    local ma = maList[1]

    local maObjTable = {}

    local imageView = self:getNormalCard(ma)
    imageView:setScale(1)
    
    local width = imageView:getBoundingBox().width
    local height = imageView:getBoundingBox().height

    -- 创建背景

    local imageViewBg = ccui.ImageView:create("MatchAH/".."game/multiGang.png", ccui.TextureResType.plistType)
    :setScale9Enabled(true)
    :setCapInsets(cc.rect(20,20,5,5))
    :setContentSize(num * width , height )
    self:add(imageViewBg, 100)
    
    local pos
    if self.posState == 1 then
        pos = cc.p(display.cx, display.cy -  imageViewBg:getContentSize().height + 15)
    elseif self.posState == 2 then
        pos = cc.p(display.width*3/4-15, display.cy-imageViewBg:getContentSize().height/2+ 55)
    elseif self.posState == 3 then
        pos = cc.p(display.cx, display.cy + imageViewBg:getContentSize().height*3/2 - 40)
    elseif self.posState == 4 then
        pos = cc.p(display.width/4 + 15, display.cy-imageViewBg:getContentSize().height/2 + 55)
    end

    pos = self:convertToNodeSpace(pos)

    imageViewBg:move(pos)

    if isDealerMa then
		imageViewBg:setPositionY(imageViewBg:getPositionY()+100)
	end

    for i = 1, num do
        local imageObj
        if i == 1 then
            imageObj = imageView
        else
            local ma = maList[i]
            if ma == 0 then
                return 
            end
            imageObj = self:getNormalCard(ma)
            imageObj:setVisible(false)
        end
        imageObj:setScale(0.7)
        imageObj:anchor(0, 0.5)
        imageObj:addTo(imageViewBg)
        imageObj:move(10+(i-1)*(imageObj:getBoundingBox().width+20), imageViewBg:getContentSize().height/2)
        table.insert(maObjTable, imageObj)

        local zhong = bit._and(zhongMaIndex*(2^(-(i-1))), 0x1)
        if zhong > 0 then
            imageObj:setColor(display.CARD_GREEN)
        end
    end

    local scheduler = cc.Director:getInstance():getScheduler()
    local function maScheduleFunc(dt)
        if #maObjTable > 0 then
            table.remove(maObjTable, 1)
            if #maObjTable > 0 then
                if not tolua.isnull(maObjTable[1]) then
                    maObjTable[1]:setVisible(true)
                end
            else
                if self.schedulerEntry then
                    cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self.schedulerEntry)
                    self.schedulerEntry = nil
                end
            end
        else
            if self.schedulerEntry then
                cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self.schedulerEntry)
                self.schedulerEntry = nil
            end
        end
    end
    self.schedulerEntry = scheduler:scheduleScriptFunc(maScheduleFunc, 0.2 , false)
end
--设置出牌定位符的位置
function TablePlayerBase:showChuCardMarker(chu)
    if not chu then
        return 
    end

    local offsetX = 0
    local offsetY = 0
    if self.posState == 1 or self.posState == 3 then    --自己
        offsetX = chu:getBoundingBox().width/2
        offsetY = chu:getBoundingBox().height*4/5
    elseif self.posState == 2 or self.posState == 4 then    --自己
        offsetX = 0
        offsetY = chu:getBoundingBox().height
    end
    local gameScene = g_gameGlobal:getGameScene()
    if not gameScene then return end
    local gameMainView = gameScene:getChildByName("gameMainView")
    if gameMainView then
        GlobalEventManager:onEvent("changeShowMarker",{posState = self.posState})
        local pos = self:convertToWorldSpace( cc.p(chu:getPosition()) )
        gameMainView:updateMarkerPosAndAnimal( pos , cc.p(offsetX, offsetY))
    end
end

function TablePlayerBase:removeOneCard(cardValue)


    if self.newCardInLog then
        local value = self.newCardInLog:getTag()
        if value == cardValue then
            self.newCardInLog:removeSelf()
            self.newCardInLog = nil
            return 
        end
    end


    for i, v in pairs(self.inhandCards) do 
        local value = v:getTag()
        if value == cardValue then
            v:removeSelf()
            table.remove(self.inhandCards, i)
            return
        end
    end
    
end

-- 听牌后手牌置灰
function TablePlayerBase:RefreshCardsAfterTing()
    for _,v in ipairs(self.inhandCards) do
        if g_gameGlobal:isSuanZui() and self:getTing() and not g_gameGlobal:getIsPlayingGameLog() then
            v:setColor(display.COLOR_GRAY)
        end
    end
end

function TablePlayerBase:addNewCard(cardValue)
    local imageView 
    if self.posState == 1 then
        imageView = self:getNormalCard(cardValue) 
    elseif self.posState == 2 then
        imageView = self:getRightLaydownCard(cardValue) 
    elseif self.posState == 3 then
        imageView = self:getNormalCard(cardValue) 
        imageView:setScale(0.6)
    elseif self.posState == 4 then
        imageView = self:getLeftLaydownCard(cardValue) 
    end

    imageView:addTo(self, 2)
    :anchor(0,0.5)
    if self.posState == 1 then
        imageView:setScale( g_gameConstant.MYSELF_BLOCK_SCALE )
    end
	self:insertNewCard(imageView)
	-- self:repositionAllCards()
end

function TablePlayerBase:getNormalCard( value )
    local imageView = Utils.getCard(value, g_gameConstant.MajongPosType.Self, g_gameConstant.MajongType.Normal)
    imageView:setTag(value):anchor(0, 0.5)

    if self.posState == 1 then
       if imageView.refreshFlag then imageView.refreshFlag() end
    end

    return imageView
end

function TablePlayerBase:isAnGangAllHide()
    return g_gameGlobal:isAnGangAllHide()
end

function TablePlayerBase:insertLaiZi(obj)
    local posy = g_gameConstant.MY_CARD_Y
    local posx = self.handCardStartPosX

    self:setHandCardPosInLog(obj, 0)
    table.insert(self.inhandCards, 1, obj)
end

function TablePlayerBase:resortHandCards()

    if not self.inhandCards then 
        return 
    end


    local function sortRule(a , b)
        local valueA = a:getTag()
        local valueB = b:getTag()
        if g_gameGlobal:isLaiZi(valueA) then 
            valueA = valueA - 1000
        end
        if g_gameGlobal:isLaiZi(valueB) then 
            valueB = valueB - 1000
        end
       
        if valueA == 0x35 and (g_gameGlobal:isZongYang() or g_gameGlobal:isDongZhi() or g_gameGlobal:isTongLing() or g_gameGlobal:isNewTongLing() or g_gameGlobal:isQianShan() or g_gameGlobal:isTongCheng() or g_gameGlobal:isPaofengMj() ) then
            valueA = g_gameGlobal:getLaizi()
        end
        

        if valueB == 0x35 and (g_gameGlobal:isZongYang() or g_gameGlobal:isDongZhi() or g_gameGlobal:isTongLing() or g_gameGlobal:isQianShan() or g_gameGlobal:isNewTongLing() or g_gameGlobal:isTongCheng()  or g_gameGlobal:isPaofengMj() ) then
            valueB = g_gameGlobal:getLaizi()
        end

        return valueA < valueB
    end

    table.sort( self.inhandCards , sortRule )

end


function TablePlayerBase:bu_hua_at_start(msg)

    for i=#self.inhandCards,1 , -1 do
        local card = self.inhandCards[i]
        local cValue = card:getTag()
        local bbu_hua = g_gameGlobal:isAutobBHua( cValue , self.player_piaoHua )
        if bbu_hua then 
            table.remove(self.inhandCards, i)
            card:removeSelf()
            self:buHuaOperation(cValue)
        end
    end


    if self.newCardInLog then 
        -- local cardValue = self.newCardInLog:getTag()
        -- local bbu_hua = g_gameGlobal:isAutobBHua( cardValue , self.player_piaoHua )
        -- if bbu_hua then 
        --     self:buHuaOperation(cardValue)
        --     self.newCardInLog:removeSelf()
        --     self.newCardInLog = nil
        -- end
    end

    if self.newCard then 
        local cardValue = self.newCard:getTag()
        local bbu_hua = g_gameGlobal:isAutobBHua( cardValue , self.player_piaoHua )
        self:buHuaOperation(cardValue)
        self.newCard = nil
    end

    local tingList = msg.tingList or {}
    for i,cardValue in ipairs(tingList) do
        self:addNewCard(cardValue)
    end

    self:repositionAllCards()
end



function TablePlayerBase:repositionAllCards()
    if not g_gameGlobal:isXuanCheng() and not g_gameGlobal:isMaAnShan() then
        self:resortHandCards()
    end
    if g_gameGlobal:isNewTongLing() then
        for i, v in pairs(self.inhandCards) do
            local cardValue = v:getTag()
            if cardValue == 0x35 then
                local  laizi = g_gameGlobal:getLaizi()
                local cardType = bit._and(  bit._rshift(laizi,4)  , 0x7)
                if laizi and laizi > 0 and cardType < 3 then
                    v.HongzhongLaizi(laizi)
                end
            end
        end
    end
    if g_gameGlobal:getIsPlayingGameLog() then
        for i, v in pairs(self.inhandCards) do
            if i == 1 then
                local handCardHeight = self.inhandCards[1]:getBoundingBox().height
                g_gameConstant.MY_CARD_Y = handCardHeight/2- 4
            end
            self:setHandCardPosInLog(v, i)
        end
        return 
    end

    self.touchObjMoved = false

    for i,v in pairs(self.inhandCards) do
        v:setScale( g_gameConstant.MYSELF_BLOCK_SCALE )
    end

    local startx = self.handCardStartPosX
    local handsNum = #self.inhandCards

    local handCardWidth = 0
    local handCardHeight = 0
    if handsNum > 0 then
        handCardWidth = self.inhandCards[1]:getBoundingBox().width
        handCardHeight = self.inhandCards[1]:getBoundingBox().height
    end

    for i, v in pairs(self.inhandCards) do
        if i == 1 then
             g_gameConstant.MY_CARD_Y = handCardHeight/2- 4
        end
        if (i == handsNum) and (math.mod(handsNum, 3) == 2) then
            --如果是轮到自己出牌，最右边的一只牌分开一点
            v:move((i-1)*handCardWidth + startx + 25,--g_gameConstant.MYSELF_TABLE_MOST_RIGHT_CARD_DISTANCE,
                    g_gameConstant.MY_CARD_Y)
        else
            v:move((i-1) * handCardWidth + startx, g_gameConstant.MY_CARD_Y)
        end

        local cardValue = v:getTag()
        if g_gameGlobal:isLaiZi(cardValue) then
            v:setColor(display.CARD_GREEN)
        else
            v:setColor(display.COLOR_WHITE)
        end

    end

    --最右边的牌也要刷新一下
    if self.newCard then
        local handCardHeight = self.newCard:getBoundingBox().height
        self.newCard:move(startx + #self.inhandCards * handCardWidth + 25,--g_gameConstant.MYSELF_TABLE_MOST_RIGHT_CARD_DISTANCE,
                            handCardHeight/2- 4)
        self:setHandCardPosInLog(self.newCard, #self.inhandCards)
        local cValue = self.newCard:getTag()
        if g_gameGlobal:isLaiZi(cValue) then
            self.newCard:setColor(display.CARD_GREEN)
        else
            self.newCard:setColor(display.COLOR_WHITE)
        end
    end
   
    self:RefreshCardsAfterTing()
    
end
    
function TablePlayerBase:showHuCard(cardValue)
    if cardValue <= 0 then
        return 
    end

    -- 显示胡的牌
    if cardValue > 0 then
        local huImageView = self:getNormalCard(cardValue)
        :addTo(self, 100)

        local pos = nil
        if self.posState == 1 then
            pos = cc.p(display.cx - 50, display.height/3 - 30)
        elseif self.posState == 2 then
            pos = cc.p(display.width*3/4+10, display.cy+90)
        elseif self.posState == 3 then
            pos = cc.p(display.cx - 50, display.height * 2/3 + 50)
        elseif self.posState == 4 then
            pos = cc.p(display.width/4-80, display.cy+90) 
        end

        pos = self:convertToNodeSpace(pos)

        huImageView:setScale(0.8)
        huImageView:move(pos)

        self.huImgView = huImageView
    end

end
--重连时候刷新
function TablePlayerBase:showChuCards(cardValueTable)
    if cardValueTable then
        for i, v in pairs(cardValueTable) do
            self:addChuCard( v, false,true)
        end
    end

end

--再刷新一下风牌
function TablePlayerBase:RefreshChuCards()
    if not self:getTing() or not g_gameGlobal:isSuanZui() then
        return
    end
    for i,v in ipairs(self.chuCards) do 
        if g_gameGlobal:isFengZui(v.cardValue) and i > self:getTingIndex() then
            v:setColor(display.COLOR_GRAY)
        end
    end
end

function TablePlayerBase:showChiPengGangCards(cardValueTable, bPlayAni)
    if cardValueTable then
        local playerTableOperationMsg = {}
        for i, v in pairs(cardValueTable) do
            playerTableOperationMsg.opValue = v.cardValue
            
            if v.type == g_gameConstant.MAHJONG_OPERTAION_BU_GANG then
                playerTableOperationMsg.operation = g_gameConstant.MAHJONG_OPERTAION_MING_GANG
            else
                playerTableOperationMsg.operation = v.type
            end
            playerTableOperationMsg.chuOffset = v.chuOffset
            playerTableOperationMsg.card_value = 0
            self:chiPengGangOperation(playerTableOperationMsg, false)
        end
    end
end
function TablePlayerBase:setChuPlayerColor(obj, offset, op, cardIndex , chiCard)
    if not obj then
        return
    end

    if op == g_gameConstant.MAHJONG_OPERTAION_AN_GANG then
        return 
    end

    if op == g_gameConstant.MAHJONG_OPERTAION_CHI then 
        if chiCard == obj:getTag() then 
            obj:setColor(display.CARD_GREEN)
        end
        return 
    end

    local offsetMap = {
        [2] = {}
    }
    -- 碰 二三人场指向特殊处理
    if self._maxNum == 3 then
        if self.posState == 2 and offset == 1 then
            offset = 0
        elseif self.posState == 4 and offset == -1 then
            offset = 0
        elseif self.posState == 1 and offset == 0 then
            offset = -1
        end
    elseif self._maxNum == 2 then
        -- 二人场只有对家
        offset = 0
    end

    if self.posState == 3 then
        if offset == -1 and cardIndex == 2 then
            obj:setColor(display.CARD_GREEN)
        elseif offset == 0 and (cardIndex == 1 or cardIndex == 3) then
            obj:setColor(display.CARD_GREEN)
        elseif offset == 1 and cardIndex == 0 then
            obj:setColor(display.CARD_GREEN)
        end
    else
        if offset == -1 and cardIndex == 0 then
            obj:setColor(display.CARD_GREEN)
        elseif offset == 0 and (cardIndex == 1 or cardIndex == 3) then
            obj:setColor(display.CARD_GREEN) 
        elseif offset == 1 and cardIndex == 2 then
            obj:setColor(display.CARD_GREEN)     
        end
    end
end

-- 补杠的时候查询吃碰的列表中，跟传入值相同三张牌值的第二张牌的位置
function TablePlayerBase:findPeng(cardValue)
    local matchIdx = 0
    local findIdx = 0
    for i, v in pairs(self.laydownCards) do
        local value = v:getTag()
        if value == cardValue then
            findIdx = i
            break
        end
    end
    if findIdx > 0 and findIdx <= (#self.laydownCards - 2) then
        local v1 = self.laydownCards[findIdx]:getTag()
        local v2 = self.laydownCards[findIdx + 1]:getTag()
        local v3 = self.laydownCards[findIdx + 2]:getTag()
        if v1 == v2 and v1 == v3 then
            matchIdx = findIdx + 1
        end
    end
    return matchIdx
end
function TablePlayerBase:addChuCard( cardValue, bNeedMarker,notNeedSfx)
    -- 各个子类单独实现 
    if not notNeedSfx then
        NG.soundManager:playMatchEffect("sound/dapai.mp3")
    end
    
end
function TablePlayerBase:removeChuCard()
    if self.chuPai and not tolua.isnull(self.chuPai) then
        self.chuPai:stopAllActions()
        self.chuPai:removeSelf()
        self.chuPai = nil
    end
end

function TablePlayerBase:chuOperation(cardValue)
    local chuImage = self:getNormalCard(cardValue)
    self:setChuObjPos(chuImage)
    
    self:add(chuImage, 100)

    self:removeChuCard()

    self.chuPai = chuImage
    transition.execute(self.chuPai, nil, {delay = 0.35, onComplete = handler(self, self.removeChuCard)})

    self:addChuCard(bit._and(cardValue, 0xff), true)
end

function TablePlayerBase:getMyAndOppLaydownCard(value)
    local imagView = Utils.getCard(value, g_gameConstant.MajongPosType.Self, g_gameConstant.MajongType.Laydown)
    imagView:setTag(value):anchor(0,0.5)
    return imagView 
end

function TablePlayerBase:removeLastChuCard()
    if #self.chuCards > 0 then
        local imageView = self.chuCards[#self.chuCards]
        imageView:removeSelf()
        table.remove(self.chuCards, #self.chuCards)
    end
end

function TablePlayerBase:playChiPengGangAnimation( msg )
    if msg.opValue ~= g_gameConstant.MAHJONG_OPERTAION_GANG_NOTIFY and 
        ((msg.operation == g_gameConstant.MAHJONG_OPERTAION_AN_GANG) or
         (msg.operation == g_gameConstant.MAHJONG_OPERTAION_MING_GANG) or
         (msg.operation == g_gameConstant.MAHJONG_OPERTAION_BU_GANG)) then
        return 
    end
    local skeletonNode = nil

    

    if msg.operation == g_gameConstant.MAHJONG_OPERTAION_CHI then
        skeletonNode = g_gameGlobal:playSkeletonAnimationOnce( "spine/chipenggang_ani/chipg" , "chi" )
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_PENG then
        skeletonNode = g_gameGlobal:playSkeletonAnimationOnce( "spine/chipenggang_ani/chipg" , "peng" )
    elseif (msg.operation == g_gameConstant.MAHJONG_OPERTAION_AN_GANG) or
         (msg.operation == g_gameConstant.MAHJONG_OPERTAION_MING_GANG) or
         (msg.operation == g_gameConstant.MAHJONG_OPERTAION_BU_GANG) then
        -- skeletonNode:setAnimation(0, "gang", false)
        skeletonNode = g_gameGlobal:playSkeletonAnimationOnce( "spine/chipenggang_ani/chipg" , "gang" )
    end

    self:addChild(skeletonNode, 200)

    local pos = nil
    if self.posState == 1 then
        pos = cc.p(display.cx - 40, display.height/3)
    elseif self.posState == 2 then
        pos = cc.p(display.width*3/4, display.cy+30)
    elseif self.posState == 3 then
        pos = cc.p(display.cx - 40, display.height * 2/3 + 40)
    elseif self.posState == 4 then
        pos = cc.p(display.width/4 , display.cy+30)
    end

    skeletonNode:setPosition(pos)

    -- self:setChuObjPos(skeletonNode)
    -- spr:runAction(cc.Sequence:create{action, cc.RemoveSelf:create()})

end
--铜陵架混动画
function TablePlayerBase:tonglingJiaHunAnimation()
    local skeletonNode = g_gameGlobal:playSkeletonAnimationOnce( "spine/game/bujiajpz" , "animation2" )
    self:addChild(skeletonNode, 200)
    local pos = nil
    if self.posState == 1 then
        pos = cc.p(display.cx - 40, display.height/3)
    elseif self.posState == 2 then
        pos = cc.p(display.width*3/4, display.cy+30)
    elseif self.posState == 3 then
        pos = cc.p(display.cx - 40, display.height * 2/3 + 40)
    elseif self.posState == 4 then
        pos = cc.p(display.width/4 , display.cy+30)
    end
    skeletonNode:setPosition(pos)
end

--------------------------- 播放战绩时使用---------------------
function TablePlayerBase:recreateAllCards(msg)

    

    performWithDelay( self, function()

        for i,v in ipairs(self.inhandCards) do
            v:removeSelf()
        end

        if self.newCardInLog then 
            self.newCardInLog:removeSelf() 
            self.newCardInLog = nil 
        end

        self.inhandCards = {}

        for i, v in pairs(msg) do
            self:addNewCard(v)
        end
        self:repositionAllCards()
    end , 0 )

    -- local dtime = 1.0/120.0
    -- for i, v in pairs(msg) do
	-- 	self:runAction(cc.Sequence:create(cc.DelayTime:create(i * dtime),
	-- 	cc.CallFunc:create(function()
	-- 		self:addNewCard(v)
	-- 	end),
    --     nil))
    -- end

    -- self:repositionAllCards()

end

-- 回放的时候，删除一张刚打的牌，有可能被碰了
function TablePlayerBase:removeReplayChuCard( cardValue )
     if (self.chuCards == nil) or (type(self.chuCards) == "table" and #self.chuCards == 0) then
        return 
    end

    local lastChuSpr = self.chuCards[#self.chuCards]
    if lastChuSpr:getTag() == cardValue then
        lastChuSpr:removeSelf()
        --self.chuCards[#self.chuCards] = nil
        table.remove(self.chuCards,#self.chuCards)
    end
end

function TablePlayerBase:playLogMoCard(cardValue)
    local imageView 
    if self.posState == 1 then
        imageView = self:getNormalCard(cardValue) 
    elseif self.posState == 2 then
        imageView = self:getRightLaydownCard(cardValue) 
    elseif self.posState == 3 then
        imageView = self:getNormalCard(cardValue) 
        imageView:setScale(0.6)
    elseif self.posState == 4 then
        imageView = self:getLeftLaydownCard(cardValue) 
    end

    imageView:setTag(cardValue)
    :addTo(self, 1)
    
    if self.posState == 1 then
        imageView:setScale(g_gameConstant.MYSELF_BLOCK_SCALE)
        if #self.inhandCards > 0 then
            local handCardHeight = self.inhandCards[1]:getBoundingBox().height
            g_gameConstant.MY_CARD_Y = handCardHeight/2- 4
        end
    end

    local idx = #self.inhandCards
    self:setHandCardPosInLog(imageView, idx + 1)

    self.newCardInLog = imageView
    self.newCardInLog:setColor(cc.c3b(0, 115, 255))
end

function TablePlayerBase:clearMoCard()
    if self.newCardInLog then
        self:insertNewCard(self.newCardInLog)
        self.newCardInLog:setColor(display.COLOR_WHITE)
        self.newCardInLog = nil
    end
end

function TablePlayerBase:setHandCardPosInLog(obj, idx)
    -- 播放战绩时进来
    if not g_gameGlobal:getIsPlayingGameLog() then
        return 
    end

    local laydownWidth = 0
    local laydownHeight = 0
    if #self.laydownCards > 0 then
        laydownWidth = self.laydownCards[1]:getBoundingBox().width
        laydownHeight = self.laydownCards[1]:getBoundingBox().height
    end
    local handCardWidth = obj:getBoundingBox().width
    local handCardHeight = obj:getBoundingBox().height

    local posx = self.handCardStartPosX - 60
    local posy = self.handCardStartPosY


    local cardValue = obj:getTag()

    if g_gameGlobal:isLaiZi(cardValue) then
        obj:setColor(display.CARD_GREEN)
    else
        obj:setColor(display.COLOR_WHITE)
    end

    if self.posState == 1 then
        -- local jiange = self.chiPengGangBlock * 5
        obj:move(posx + idx * handCardWidth, g_gameConstant.MY_CARD_Y)
    elseif self.posState == 2 then
        obj:anchor(0.5, 0)
        if self.chiPengGangBlock > 0 then
            posy = posy - 20
        end
        obj:move(self.handCardStartPosX, posy  + (handCardHeight-10)*idx)
		obj:setLocalZOrder(20-idx)
    elseif self.posState == 3 then
        if self.chiPengGangBlock > 0 then
            posx = self.handCardStartPosX-35
        end
        obj:move(posx + handCardWidth * idx, posy)
        
    elseif self.posState == 4 then
        obj:anchor(0.5, 1)
        if self.chiPengGangBlock > 0 then
            posy = self.handCardStartPosY + 20
        end
        obj:move(self.handCardStartPosX, posy  - (handCardHeight-10)*idx)
        obj:setLocalZOrder(idx)
    end
end

function TablePlayerBase:setChuZeng(chuzeng, piaohua)
    self.player_piaoHua = piaohua
end

--加分减分动画
function TablePlayerBase:subScoreOpertaion()
end
function TablePlayerBase:setPlayerGold()
end


function TablePlayerBase:getCardsInhand()
    local cards = {}
    for i,v in ipairs(self.inhandCards) do
        cards[i] = v
    end

    if self.newCard then 
    cards[#cards+ 1] = self.newCard
    end
    
    return cards
end

function TablePlayerBase:getCardsWithType(cards)

    local _data = {
        -- [g_gameConstant.CARD_TYPE_CHARACTER] = {},
        -- [g_gameConstant.CARD_TYPE_BAMBOO] = {},
        -- [g_gameConstant.CARD_TYPE_DOT] = {},
    }


    local cards = cards or  self:getCardsInhand()
    for i,v in ipairs(cards) do
        local value = v:getTag()
        local cardType = bit._and(  bit._rshift(value,4)  , 0x7)
            

        if not _data[cardType] then 
             _data[cardType] = {}
        end        

        table.insert(_data[cardType], v)
    end

    return _data
end

function TablePlayerBase:getMinNumType()
    local _data = self:getCardsWithType()

    local sortIndexs = {
        {type = g_gameConstant.CARD_TYPE_CHARACTER  ,  priority = 300,count = 0 },
        {type = g_gameConstant.CARD_TYPE_BAMBOO  ,  priority = 100,count = 0},
        {type = g_gameConstant.CARD_TYPE_DOT  ,  priority = 200,count = 0},
    }
    for i, v in pairs(_data) do
        for k,vv in pairs(sortIndexs) do
            if vv.type == i then
                vv.count = table.nums(v)
            end
        end
    end
    local function rule(a , b)
        return (a.count or 0) < (b.count or 0)
    end
    table.sort(  sortIndexs , rule )
    if sortIndexs[1].count  == 0 then
        return sortIndexs[1].type
    end
    if sortIndexs[1].count == sortIndexs[2].count then
        local data1 = {}
        for i, v in pairs(_data[sortIndexs[1].type]) do
             local value = v:getTag() 
             table.insert(data1, value)
        end
        local data2 = {}
        for i, v in pairs(_data[sortIndexs[2].type]) do
             local value = v:getTag() 
             table.insert(data2, value)
        end
        table.sort(  data1 )
        table.sort(  data2 )
        local num1 = self:analyseSort(data1)
        local num2 = self:analyseSort(data2)
        if num1 == num2 then
            if num1 == 6 then
                local number = self:analyseCardSpacing(data1,data2)
                if number == 1 then
                    return sortIndexs[1].type
                else
                    return sortIndexs[2].type
                end
            else
                return sortIndexs[1].type
            end
        else
            if num1 > num2 then
                return sortIndexs[1].type
            else
                return sortIndexs[2].type
            end
        end
    else
        return sortIndexs[1].type
    end 
    -- local function rule(a , b)

    --     local typeA  , typeB = a.type , b.type

    --     local dataA , dataB = _data[typeA] or {} , _data[typeB] or {}

    --     local countA = table.nums(dataA)
    --     local countB = table.nums(dataB)
        

    --     local numA = countA*1000 + a.priority
    --     local numB = countB*1000 + b.priority

    --     return numA < numB
    -- end
    
    -- table.sort(  sortIndexs , rule )
    --local type = sortIndexs[1].type
    --return type
end

function TablePlayerBase:analyseSort(data)
    --
    
    if #data == 4 then
        if data[1] == data[#data] then
            return 1                              
        end
        if data[1] == data[3] or data[2] == data[4] then
            return 2
        end
    elseif #data == 3 then
        if data[1] == data[#data] then
            return 2                              
        end
    end

    local resultData = self:table_unique(data)
    local isLink = false
    if #resultData > 2 then
        for i=#resultData,3 , -1 do
            if resultData[i]- resultData[i-2] == 2 then
                return 3
            end
        end
    end
    
    local num = #data - #resultData
    if num == 2 then
        return 4 
    elseif num == 1 then
        return 5
    else
        return 6
    end
end

function TablePlayerBase:analyseCardSpacing(data1,data2)
    local num1 = 9
    for i=#data1,2 , -1 do
        local num = data1[i] - data1[i-1]
        if num1 > num then
            num1 = num
        end
    end

    local num2 = 9
    for i=#data2,2 , -1 do
        local num = data2[i] - data2[i-1]
        if num2 > num then
            num2 = num
        end
    end

    if num1 == num2 then
        return 1
    elseif num1 > num2 then
        return 1
    else
        return 2
    end

end

--去重
function TablePlayerBase:table_unique(data)
    local check = {};
    local n = {};
    for key , value in pairs(data) do
        if not check[value] then
            n[key] = value
            check[value] = value
        end
    end
    local resultData = {}
    for i,v in pairs(n) do
        table.insert(resultData,v)
    end
    table.sort(resultData)
    return resultData
end

--换三张 系统推荐三张牌
function TablePlayerBase:autoChooseCard()

    local _data = self:getCardsWithType()
    local sortIndexs = {
        {type = g_gameConstant.CARD_TYPE_CHARACTER  ,  priority = 300 },
        {type = g_gameConstant.CARD_TYPE_BAMBOO  ,  priority = 100 },
        {type = g_gameConstant.CARD_TYPE_DOT  ,  priority = 200 },
    }

    local function rule(a , b)

        local numA  , numB = 1000000 , 1000000
        local typeA  , typeB = a.type , b.type

        local dataA , dataB = _data[typeA] or {} , _data[typeB] or {}

        local countA = table.nums(dataA)
        local countB = table.nums(dataB)

        numA = numA - countA*1000
        numB = numB - countB*1000

        numA = numA - a.priority
        numB = numB - b.priority

        if countA < 3 then
            numA = 0
        end

        if countB < 3 then
            numB = 0
        end

        return numA > numB
    end

    table.sort(  sortIndexs , rule )

    performWithDelay(self , function() 
    
        local chooseType = sortIndexs[1].type
        local chooseData = _data[chooseType] or {}

        for i,v in ipairs(chooseData) do
            -- print(i,v)
            if i <= 3 and not tolua.isnull(v) then 
                v.isSelected = true
                v:setPositionY(g_gameConstant.MY_CARD_Y + 20)
            end
        end

    end , 0)


    
    


end

function TablePlayerBase:setChoosingState(state)

    self.stateNode:removeAllChildren()
    if state == 0 then 

        if self.posState ~= 1 then 

            local xuanpaizhong = display.newSprite("#game/xuanpaizhong.png"):addTo(self.stateNode):anchor(0.5, 0.5):setPosition(-50,0)
                    
            if self.posState == 3 then 
                xuanpaizhong:anchor(0,0.5)
            elseif self.posState == 4 then 
                xuanpaizhong:anchor(-0.2,0.5)
            end

            local waitPoint = display.newSprite()
            :align(cc.p(0,0),xuanpaizhong:getContentSize().width, 5)
            :addTo(xuanpaizhong)
            waitPoint:playAnimationForever(g_gameGlobal:createEffectFromSinglePng("noplist/dot.png", 22 , 23))
        end
    elseif state == 1 then 
        local spr = display.newSprite("#game/xuanwanpai.png"):addTo(self.stateNode):anchor(0, 0.5):setPosition(-35,0)
        if self.posState == 3 then 
            spr:anchor(0,0.5)
        elseif self.posState == 4 then 
            spr:anchor(-0.2,0.5)
        end
    end

end

function TablePlayerBase:clearState()
    self.stateNode:removeAllChildren()
end



-- 选牌状态  0 未选  1已选   2 选完
function TablePlayerBase:setChooseCardState(state  , isRecover)
    self.chooseCardState = state

    self:clearState()

    if state == 0 then 

        if self.posState ~= 1 then 
            self:setChoosingState(0)
        end

        --选择三张
        if self.posState == 1 then 
            local cards = self:getCardsInhand()
            self:autoChooseCard()
        end        

    elseif state == 1 then  
        self:setChoosingState(1)
    elseif state == 2 then 

        if self.posState == 1 then 
            self:setCurOperationState(0)
        end
    end

end

function TablePlayerBase:getChooseCardState(bool)
    return self.chooseCardState
end


--定缺
function TablePlayerBase:setClearColor(_type , needAni)
    local path, aniPath
    if _type == g_gameConstant.MAHJONG_CODE_COLOR_WAN then
        path = "game/wan_min.png"
        aniPath = "spine/game/queAni/wan.png"
    elseif _type == g_gameConstant.MAHJONG_CODE_COLOR_TIAO then
        path = "game/tiao_min.png"
        aniPath = "spine/game/queAni/tiao.png"
    elseif _type == g_gameConstant.MAHJONG_CODE_COLOR_TONG then
        path = "game/tong_min.png"
        aniPath = "spine/game/queAni/tong.png"
    else
        return
    end

    local image = ccui.ImageView:create("MatchAH/"..path, ccui.TextureResType.plistType)
    image:anchor(0.5,0)
    self:addChild(image)
    local pos = g_gameGlobal.gamePlayHeadPosTbl[self.posState].head
    
    if self.posState == 1 then
        pos = cc.p(pos.x-40,pos.y + 10)
    elseif self.posState == 2 then
        pos = cc.p(pos.x + 45,pos.y + 10)
    elseif self.posState == 3 then
        pos = cc.p(pos.x+ 45,pos.y+ 10)
    elseif self.posState == 4 then
        pos = cc.p(pos.x-40,pos.y + 10)
    end

    pos = self:convertToNodeSpace(pos)
    image:setPosition( pos.x , pos.y )


    if needAni then 

        image:hide()

        local initPos = self:getChuPos()
        initPos = self:convertToNodeSpace(initPos)
        local aniSpr = display.newSprite( aniPath ):addTo(self):setPosition(initPos.x , initPos.y):anchor(0,0.5)

        performWithDelay(aniSpr , function() 
            aniSpr:moveTo( {x = pos.x , y = pos.y , time = 0.5  , onComplete = function()
            aniSpr:removeSelf()
            image:show()
        end} )   

        end , 0.5)

    end

end

-- function TablePlayerBase:


function TablePlayerBase:getOnTableCards()
    local ret = {}
    for i,cardview in ipairs(self.chuCards or {}) do
        ret[#ret+1] = cardview
    end
    for i,cardview in ipairs(self.laydownCards or {}) do
        ret[#ret+1] = cardview
    end

    for i,cardview in ipairs(self.huaCards or {}) do
        ret[#ret+1] = cardview
    end

    return ret
end

function TablePlayerBase:refreshCardFrontSize()

    for i,cardview in ipairs(self.inhandCards) do
        if cardview and cardview.refreshCardFrontSize then 
            cardview.refreshCardFrontSize()
        end
    end

    for i,cardview in ipairs(self.chuCards) do
        if cardview and cardview.refreshCardFrontSize then 
            cardview.refreshCardFrontSize()
        end
    end

    for i,cardview in ipairs(self.laydownCards) do
        if cardview and cardview.refreshCardFrontSize then 
            cardview.refreshCardFrontSize()
        end
    end

    if self.newCard and self.newCard.refreshCardFrontSize then
        self.newCard.refreshCardFrontSize()
    end

    if self.newCardInLog and self.newCardInLog.refreshCardFrontSize then
        self.newCardInLog.refreshCardFrontSize()
    end

    if self.huImgView and self.huImgView.refreshCardFrontSize then
        self.huImgView.refreshCardFrontSize()
    end

end


function TablePlayerBase:refreshCardFrameColor()

    for i,cardview in ipairs(self.inhandCards) do
        if cardview and cardview.refreshFrameColor then 
            cardview.refreshFrameColor()
        end
    end

    for i,cardview in ipairs(self.chuCards) do
        if cardview and cardview.refreshFrameColor then 
            cardview.refreshFrameColor()
        end
    end

    for i,cardview in ipairs(self.huaCards) do
        if cardview and cardview.refreshFrameColor then 
            cardview.refreshFrameColor()
        end
    end

    for i,cardview in ipairs(self.laydownCards) do
        if cardview and cardview.refreshFrameColor then 
            cardview.refreshFrameColor()
        end
    end

    if self.newCard and self.newCard.refreshFrameColor then
        self.newCard.refreshFrameColor()
    end

    if self.newCardInLog and self.newCardInLog.refreshFrameColor then
        self.newCardInLog.refreshFrameColor()
    end

    if self.huImgView and self.huImgView.refreshFrameColor then
        self.huImgView.refreshFrameColor()
    end

end

function TablePlayerBase:getXuanchenghucard()
    return self.xuanchenghucard or 0
end

--------------------------- 播放战绩时使用---------------------
return TablePlayerBase