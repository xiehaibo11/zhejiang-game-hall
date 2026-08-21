local TablePlayerBase = class("TablePlayerBase", cc.load("mvc").ViewBase)
local BuhuaCardListNode = import(".BuhuaCardListNode")
local GameTool = import("..GameTool")
local ExternalFunc  = require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.ExternalFunc")
local GameAudioParser = import("newgold.MatchGames.GamePublic.GameAudioParser")
local GameConfig = require("newgold.MatchGames.subMjGame.MJGamePublic.GameConfig")

TablePlayerBase.srcGameAnimation = "newgold.MatchGames.subMjGame.MJGamePublic.GameAnimations"


function TablePlayerBase:ctor(posState, mainRuler, ...)
    self.baipaiData = {}
    self.inhandCards = {} 
    self.chuCards = {}
    self.laydownCards = {}
    self.huTypes = {}
    self.posState = posState
    self.chiPengGangBlock = 0
    self.newCard = nil
    self.newCardInLog = nil
    self.sex = 0
    self.handCardStartPosX = 0          --手牌起始位置
    self.handCardStartPosY = 0
    self.totalHandCardsNum = 13
    
    if g_gameGlobal:isSevenCardGame() then
        self.totalHandCardsNum = 7
    end

    if g_gameGlobal:isTenCardGame() then
        self.totalHandCardsNum = 10
    end
    
    self.touchObjMoved = false

    self.isInTing = false
    self.isHuEnd = false

    self.fangChongSte = -1


    self.huaValueList = {}
    self.gameAudioParser = GameAudioParser.new(mainRuler)

    display.loadSpriteFrames("others/others.plist", "others/others.png")
    self.tingIcon = ccui.ImageView:create("Match/".."others/ting_icon.png", ccui.TextureResType.plistType)
    self.tingIcon:setVisible(false)
    self:addChild(self.tingIcon, 20)

    self.huEndIcon = ccui.ImageView:create("Match/".."others/hu_end_icon.png", ccui.TextureResType.plistType)
    self.huEndIcon:setVisible(false)
    self:addChild(self.huEndIcon, 20)


    self.cardPanel = cc.Node:create()
    self:addChild(self.cardPanel)

    self.handCardPanel = cc.Layer:create()
    self.handCardPanel:setContentSize(g_gameGlobal:getDisplayWidth(), g_gameGlobal:getDisplayHeight())
    self.handCardPanel:setAnchorPoint(cc.p(0, 0))
    self.cardPanel:addChild(self.handCardPanel, 305)
    
    
    self.laydownCardPanel = cc.Layer:create()
    self.laydownCardPanel:setContentSize(g_gameGlobal:getDisplayWidth(), g_gameGlobal:getDisplayHeight())
    self.laydownCardPanel:setAnchorPoint(cc.p(0, 0))
    self.cardPanel:addChild(self.laydownCardPanel, 104)

    -- 头像转圈物效
    -- self.touxiangSkeleton = sp.SkeletonAnimation:create("spine/touxqq/touxqq.json", "spine/touxqq/touxqq.atlas", 1)
    -- :setAnimation(0, "animation", true)
    -- :setBlendFunc(cc.blendFunc(gl.ONE , gl.ONE))
    -- :addTo(self)
    -- :setVisible(false)
    -- :pause()
    
    self.buhuaCardListNode = BuhuaCardListNode:create(self.posState)
    self.cardPanel:addChild(self.buhuaCardListNode, 100)
    self.buhuaCardListNode:setPosition(self.cardNodeConfig.huaStartPos)

    self.buhuaCardListNode:setVisible(false)
    --test 
    --self.buhuaCardListNode:showCardList({0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29})
    TablePlayerBase.super.ctor(self, ...)

    self.queValue = -1

    self.handChuCardPosCache = cc.p(0,0)
    -- 选缺时需要缺的数量
    self.queNum = 0
    -- 选缺时，按钮显示的状态回调
    self.queBtnFunc = nil 

    local gameAction = require(self.srcGameAnimation)
    self.gameActionObj = gameAction.new()

    --test
    -- local tstb = {
    --     g_gameConstant.SHARE_FLAUNT_QING_YI_SE,        
    --     g_gameConstant.SHARE_FLAUNT_PENG_PENG_HU,
    --     g_gameConstant.SHARE_FLAUNT_QI_XIAO_DUI,
    --     g_gameConstant.SHARE_FLAUNT_HAO_HUA_QI_DUI,
    --     g_gameConstant.SHARE_FLAUNT_QING_PENG_PENG_HU,
    --     g_gameConstant.SHARE_FLAUNT_QING_QI_XIAO_DUI,
    --     g_gameConstant.SHARE_FLAUNT_QING_HAO_HUA_QI_DUI,
    --     g_gameConstant.SHARE_FLAUNT_SHI_SAN_YAO,
    --     g_gameConstant.SHARE_FLAUNT_ZI_MO,
    --     g_gameConstant.SHARE_FLAUNT_TIAN_HU,
    --     g_gameConstant.SHARE_FLAUNT_DI_HU,
    --     g_gameConstant.SHARE_FLAUNT_GANG_SHANG_KAI_HUA,
    --     g_gameConstant.SHARE_FLAUNT_HUA_SHANG_TIAN_HUA,
    --     g_gameConstant.SHARE_FLAUNT_QIANG_GANG_HU,
    --     g_gameConstant.SHARE_FLAUNT_19ZI_PENG_PENG_HU,
    -- }
    -- for i,v in ipairs(tstb) do
    --     performWithDelay(self, function()
    --         self:playZiMoAnimation(false, v, true)
    --     end, i*2)
    -- end
        -- performWithDelay(self, function()
        --     local huCardType, huType = GameTool.transResultHuType({
        --         g_gameConstant.GAME_OPERTAION_HU_CODE_QING_YI_SE,g_gameConstant.GAME_OPERTAION_HU_CODE_LOCAL_ZI_MO
        --     })
        --     self:playZiMoAnimation(true, huCardType, huType, true)  
        -- end, 1*2)
    
    self.isSupportSlowChuAni = false
    
    self.sortValues = {}
    
    -- 创建一个节点用于播放特效
    self.fxNode = display.newNode()
    self:addChild(self.fxNode)
end

function TablePlayerBase:addHandCardSelectMask(cardNode)
    ExternalFunc.addHandCardSelectListener(cardNode)
end

function TablePlayerBase:init(sex)

    -- self.touxiangSkeleton:move(g_gameGlobal.gamePlayHeadPosTbl[self.posState].head)
    -- self.touxiangSkeleton:setScale(0.8)

    self.sex = ((sex ~= nil) and sex or 0)    
end

function TablePlayerBase:onExit()
    if self.maScheEntry then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self.maScheEntry)
        self.maScheEntry = nil
    end
end

function TablePlayerBase:setBuhuaListShow(value)
    self.buhuaCardListNode:setVisible(value)
end

function TablePlayerBase:setHuaCardList(huaCardList)
    self.huaValueList = huaCardList and huaCardList or {}
    self.buhuaCardListNode:showCardList(self.huaValueList)
    self:setBuhuaListShow(#self.huaValueList ~= 0)
end

function TablePlayerBase:addDownHuaCard(huaCard, playAni)
    if huaCard == nil then return end    
    if type(huaCard) ~= "table" then huaCard = {huaCard} end

    for i,v in ipairs(huaCard) do
        self.huaValueList[#self.huaValueList+1] = v
    end

    self.buhuaCardListNode:showCardList(self.huaValueList)
    self:setBuhuaListShow(#self.huaValueList ~= 0)

    if playAni then
        self:playBuhuaAni()
    end
end

function TablePlayerBase:removeOneCardFromHandCards(removeCard)
    
    
end

function TablePlayerBase:buhuaListOperation(huaCardList, removeCard, playAni)
    if type(huaCardList) ~= "table" then return end
    if removeCard then
        if self.newCard then
            self:insertNewCard(self.newCard)
            self.newCard = nil
        end
    end

    for i,v in ipairs(huaCardList) do
        if removeCard then
            self:removeOneCard(bit._and(v, 0xff))
        end
    end

    self:addDownHuaCard(huaCardList, playAni)
end

function TablePlayerBase:buhuaOperation(huaCard, removeCard, playAni)
    if huaCard == nil then return end    
    if type(huaCard) ~= "table" then huaCard = {huaCard} end
    self:buhuaListOperation(huaCard, removeCard, playAni)
end

function TablePlayerBase:playBuhuaAni()
    NG.soundManager:playMatchEffect(self.gameAudioParser:getEffectFileForOperation(g_gameConstant.OPERATION_BUHUA, self.sex))

    local csbPath = "Match/animation/buhua.csb"
    local aniName = "animation0"

	local node = cc.CSLoader:createNode(csbPath)
    local roleAction = cc.CSLoader:createTimeline(csbPath)
    node:runAction(roleAction)
    roleAction:play(aniName, false) 

    self:addChild(node, 201)
    self:setSmallAniPos(node)
    ExternalFunc.autoRemoveCsbAni(node, roleAction)
end

function TablePlayerBase:touxiangSkeletonVisible(visible)
    -- if visible then
    --     self.touxiangSkeleton:resume()
    --     self.touxiangSkeleton:setVisible(true)
    -- else
    --     self.touxiangSkeleton:pause()
    --     self.touxiangSkeleton:setVisible(false)
    -- end
end

function TablePlayerBase:showTingIcon(visible)
    self.tingIcon:setVisible(visible and not self.isHuEnd)
end

function TablePlayerBase:showTableCards(value)
    self.cardPanel:setVisible(value)
end

-- 设置出牌位置
function TablePlayerBase:setChuObjPos( obj )
    if self.posState == 1 then
        obj:move(display.cx, g_gameGlobal:getDisplayHeight()/3)
    elseif self.posState == 2 then
        obj:move(g_gameGlobal:getDisplayWidth()*3/4 + 45, display.cy+30)
    elseif self.posState == 3 then
        obj:move(display.cx, g_gameGlobal:getDisplayHeight() * 3/4 + 10)
    elseif self.posState == 4 then
        obj:move(g_gameGlobal:getDisplayWidth()/4-15, display.cy+30)
    end
end

-- 设置出牌位置
function TablePlayerBase:setSmallAniPos( obj , offset)
    local pos = self:getSmallAniPos()
    if offset and offset.x and offset.y then
        pos = cc.pAdd(pos, offset)
    end
    if pos then
        obj:move(pos)
    end
end

function TablePlayerBase:getSmallAniPos()
    if self.posState == 1 then
        return cc.p(display.cx, 200)
    elseif self.posState == 2 then
        return cc.p(g_gameGlobal:getDisplayWidth()*3/4 + 45, display.cy+30)
    elseif self.posState == 3 then
        return cc.p(display.cx, g_gameGlobal:getDisplayHeight() -140)
    elseif self.posState == 4 then
        return cc.p(g_gameGlobal:getDisplayWidth()/4-15, display.cy+30)
    end
end

function TablePlayerBase:refreshChuCards( chuCards )
    if (chuCards == nil) or (type(chuCards) == "table" and #chuCards == 0) then
        return 
    end
    local findError = false
    if table.getn(self.chuCards) ~= table.getn(chuCards) then
        findError = true
    else
        for i, v in pairs(self.chuCards) do
            local value = v.__client_tag and v.__client_tag or v:getTag()
            v.__client_tag = value
            if value ~= chuCards[i] then
                findError = true
                break
            end
        end
    end

    if findError then
        for i, v in pairs(self.chuCards) do
            v:removeSelf()
        end
        self.chuCards = {}
        for i, v in ipairs(chuCards) do
            self:addChuCard(v, true, false)
        end
    end
end

function TablePlayerBase:getLeftLaydownCard(card)
    local desPos = {}
    local chuNum=#self.chuCards

    local spr = g_gameGlobal:getLaydownCard(card, 4):setAnchorPoint(cc.p(0.5, 0.5)):setScale(self.cardNodeConfig.chuFixScale)
    if spr then
        spr:move(desPos)
        return spr
    end
end

function TablePlayerBase:getRightLaydownCard(card)
    local desPos = {}
    local chuNum=#self.chuCards

    local spr = g_gameGlobal:getLaydownCard(card, 2):setAnchorPoint(cc.p(0.5, 0.5)):setScale(self.cardNodeConfig.chuFixScale)
    if spr then
        spr:move(desPos)
        return spr
    end
end

function TablePlayerBase:mingpaiOperation(cardList, time, sCard)
    local mingNode = cc.Layer:create()
    mingNode:setContentSize(g_gameGlobal:getDisplayWidth(), g_gameGlobal:getDisplayHeight())
    mingNode:setAnchorPoint(self.handCardPanel:getAnchorPoint())
    mingNode:setScale(self.handCardPanel:getScaleX())
    mingNode:setLocalZOrder(200)

    if type(sCard)=="number" and sCard>0 then
        cardList[#cardList+1] = sCard
    end
    local lastCardNode = nil
    for i,cardValue in ipairs(cardList) do
        local imageView = nil
        if self.posState == 1 then
            imageView = self:getMyLaydownCard(cardValue)
            imageView:move(self.handCardStartPosX + imageView:getBoundingBox().width*(i-1), self.laydownCardStartPosY)
            mingNode:addChild(imageView, 10-i)
        elseif self.posState == 2 then
            imageView = self:getRightLaydownCard(cardValue)
            imageView:move(self.laydownCardStartPosX, self.handCardStartPosY + imageView:getBoundingBox().height * (i-1))
            mingNode:addChild(imageView, 10-i)
        elseif self.posState == 3 then
            imageView = self:getOppLaydownCard(cardValue)
            imageView:move(self.handCardStartPosX - imageView:getBoundingBox().width*(i-1), self.laydownCardStartPosY)
            mingNode:addChild(imageView, i)
        elseif self.posState == 4 then
            imageView = self:getLeftLaydownCard(cardValue)
            imageView:move(self.laydownCardStartPosX, self.handCardStartPosY - imageView:getBoundingBox().height * (i-1))
            mingNode:addChild(imageView, i)
        end

        lastCardNode = imageView
    end

    if type(sCard)=="number" and sCard>0 and lastCardNode then
        if self.posState == 1 then
            lastCardNode:setPositionX(lastCardNode:getPositionX() + self.cardNodeConfig.newCardDistance)
        elseif self.posState == 2 then
            lastCardNode:setPositionY(lastCardNode:getPositionY() + self.cardNodeConfig.newCardDistance)
        elseif self.posState == 3 then
            lastCardNode:setPositionX(lastCardNode:getPositionX() - self.cardNodeConfig.newCardDistance)
        elseif self.posState == 4 then
            lastCardNode:setPositionY(lastCardNode:getPositionY() - self.cardNodeConfig.newCardDistance)
        end
    end
    self.handCardPanel:setVisible(false)

    self.cardPanel:addChild(mingNode)
    if time > 0 then
        mingNode:runAction(
            cc.Sequence:create(
                cc.DelayTime:create(time and time or 2), 
                cc.CallFunc:create(
                    function() 
                        mingNode:removeFromParent() 
                        self.handCardPanel:setVisible(true)
                    end
                ) 
            )
        )    
        self:playMingPaiAnimation()    
    end
end

function TablePlayerBase:playMingPaiAnimation()

    NG.soundManager:playMatchEffect(self.gameAudioParser:getEffectFileForOperation(g_gameConstant.GAME_OPERATION_PLAYER_SHOW_CARDS, self.sex))
end

function TablePlayerBase:tingOperation(msg, bPlayAnimation, bPlaySfx )
    self:setTingState(true)
end

function TablePlayerBase:tingOperationReverz()
    self:setTingState(false)
end

function TablePlayerBase:setTingState(val)
    self.isInTing = true
    self:showTingIcon(self.isInTing)
end

function TablePlayerBase:setFangChongState(value)
    value = value or -1
    self.fangChongSte = value
end

function TablePlayerBase:getHuResultTypes()
    -- return {        
    --     g_gameConstant.GAME_OPERTAION_HU_CODE_LOCAL_ZI_MO,
    --     g_gameConstant.GAME_OPERTAION_HU_CODE_PENG_PENG_HU,
    --     g_gameConstant.GAME_OPERTAION_HU_CODE_QING_YI_SE,
    --     g_gameConstant.GAME_OPERTAION_HU_CODE_QI_XIAO_DUI,
    --     g_gameConstant.GAME_OPERTAION_HU_CODE_HAO_HUA_QI_DUI,
    --     g_gameConstant.GAME_OPERTAION_HU_CODE_SHI_SAN_YAO,
    --     g_gameConstant.GAME_OPERTAION_HU_CODE_TIAN_HU,
    --     g_gameConstant.GAME_OPERTAION_HU_CODE_DI_HU,
    --     g_gameConstant.GAME_OPERTAION_HU_CODE_GANG_SHANG_KAI_HUA,
    --     g_gameConstant.GAME_OPERTAION_HU_CODE_HUA_SHANG_TIAN_HUA,
    --     g_gameConstant.GAME_OPERTAION_HU_CODE_QIANG_GANG_HU,
    -- }
    return self.huTypes
end

function TablePlayerBase:showMaOperation(maList, zhongMaIndex, zhongMaNum)
    self.winnerMa = maList
    self.zhongMaIndex = zhongMaIndex
    self.zhongMaNum = zhongMaNum

    local delay = 0

    if #self.winnerMa ~= 0 then
        delay = 0.2
         local spr = display.newSprite()
        :addTo(self)
        transition.execute(spr, nil, {delay = delay, onComplete = handler(self, self.playerKaiMaAnimation)})
    end

    return delay
end

function TablePlayerBase:huOperation(huConfirmData)
    local cardValue = huConfirmData.cardValue
    local gameResult = huConfirmData.gameResult
    local handCards = huConfirmData.handCards or {}
    local isjiehu = huConfirmData.isjiehu or false

    self.huTypes = huConfirmData.huTypes or {}

    --    self:showTingIcon(true)
    --防止两个人一起胡的时候，比如自己和下家，自己的马被下家遮挡
    -- if self.posState == 1 then
    --     self:setLocalZOrder(g_gameConstant.TABLEPLAYERSELECT_ZORDER + 2)
    -- else
    --     self:setLocalZOrder(g_gameConstant.TABLEPLAYERSELECT_ZORDER + 1)
    -- end
    -- 显示胡的牌
    if cardValue > 0 then
        local huImageView = self:getNormalCard(cardValue)
        :addTo(self, 100)
        self:setSmallAniPos(huImageView)
        if self.posState == 1 then
            self:setSmallAniPos(huImageView)
        elseif self.posState == 2 then
            self:setSmallAniPos(huImageView, cc.p(0, -20))
        elseif self.posState == 3 then
            self:setSmallAniPos(huImageView)
        elseif self.posState == 4 then
            self:setSmallAniPos(huImageView, cc.p(0, -20))
        end
        performWithDelay(huImageView, function() huImageView:removeSelf() end, 1)
    end

    local isZimo = bit._and(gameResult, g_gameConstant.MAHJONG_HU_CODE_ZI_MO) ~= 0

    if isZimo then
        if (not g_gameGlobal:getIsPlayingGameLog()) and self.posState == 1 then
            self:moCard(cardValue)
        end
        self.huTypes[#self.huTypes+1] = g_gameConstant.GAME_OPERTAION_HU_CODE_LOCAL_ZI_MO
    end


    local huCardType, huType = GameTool.transResultHuType(self.huTypes)
    self:playZiMoAnimation(isZimo, huCardType, huType, isjiehu)

    self:huConfirmedShowHandCards(handCards, isZimo, cardValue)
    
    self.isHuEnd = true
end

function TablePlayerBase:huConfirmedShowHandCards(handCards, isZimo, cardValue)
    if not g_gameGlobal:getIsPlayingGameLog() and handCards and #handCards>0 then
        table.sort(handCards, handler(self, self.handSortComFunc) )
        local sCard = nil
        if --[[isZimo and--]] cardValue> 0 then
            sCard = cardValue
        end
        self:mingpaiOperation(handCards, 0, sCard)
    end
end

function TablePlayerBase:playZiMoAnimation(isZimo, huCardType, huType, isjiehu)    
    NG.soundManager:playMatchEffect("sound/effect_hu.mp3")

    local csbPath = "Match/animation/hu.csb"
    local aniName = "animation0"
    local callFunc = function() self:setHuEnd(true) end
    if isZimo then
        csbPath = "animation/zimo.csb"
        callFunc = function()  end
    end

	local node = cc.CSLoader:createNode(csbPath)
    local roleAction = cc.CSLoader:createTimeline(csbPath)
    node:runAction(roleAction)
    roleAction:play(aniName, false) 

    self:addChild(node, 200)
    
    local offsetPos = cc.p(0,0)
    if self.posState == 1 then
        offsetPos = cc.p(105, 0)
        self:setSmallAniPos(node, offsetPos)
    elseif self.posState == 2 then
        offsetPos = cc.p(0, 80)
        self:setSmallAniPos(node, offsetPos)
    elseif self.posState == 3 then
        offsetPos = cc.p(105, 0)
        self:setSmallAniPos(node, offsetPos)
    elseif self.posState == 4 then
        offsetPos = cc.p(0, 80)
        self:setSmallAniPos(node, offsetPos)
    end
    ExternalFunc.autoRemoveCsbAni(node, roleAction, callFunc)

    local huTypeSfx = ""
    local dahuEffectNode, sfxName, csize = GameTool.getOtherHuEffectNodeAndSfx(huCardType, huType, isjiehu and not isZimo)
    if dahuEffectNode and csize and csize.width>0 and csize.height>0 then
        csize.width = csize.width*0.5
        offsetPos.x = offsetPos.x*1.7
        self:addChild(dahuEffectNode, 200)
        if self.posState == 1 then
            self:setSmallAniPos(dahuEffectNode, cc.pAdd(offsetPos, cc.p(csize.width, 0)))
        elseif self.posState == 2 then
            self:setSmallAniPos(dahuEffectNode, cc.pAdd(offsetPos, cc.p(0, csize.height)))
        elseif self.posState == 3 then
            self:setSmallAniPos(dahuEffectNode, cc.pAdd(offsetPos, cc.p(csize.width, 0)))
        elseif self.posState == 4 then
            self:setSmallAniPos(dahuEffectNode, cc.pAdd(offsetPos, cc.p(0, csize.height)))
        end
    end 

    if type(sfxName) == "string" and #sfxName>0 then
        local sfxPath = self.gameAudioParser:getEffectFileForName(sfxName, self.sex)
        if cc.FileUtils:getInstance():isFileExist(sfxPath) then
            huTypeSfx = sfxPath
        end
    end
    
    -- 播放胡音效
    if #huTypeSfx>0 then
        NG.soundManager:playMatchEffect(huTypeSfx)
    else
        if isZimo then
            NG.soundManager:playMatchEffect(self.gameAudioParser:getEffectFileForOperation(g_gameConstant.OPERATION_ZIMO, self.sex))
        else
            NG.soundManager:playMatchEffect(self.gameAudioParser:getEffectFileForOperation(g_gameConstant.OPERATION_HU, self.sex))
        end
    end
end

function TablePlayerBase:playerKaiMaAnimation()
    -- 创建第一张马
    -- local ma = self.winnerMa[1]
    -- if ma == 0 then
    --     return
    -- end

    -- local maObjTable = {}

    -- local imageView = self:getNormalCard(ma)
    -- imageView:setScale(0.7)
    
    -- local width = imageView:getBoundingBox().width
    -- local height = imageView:getBoundingBox().height

    -- -- 创建背景
    -- local num = #self.winnerMa

    -- display.loadSpriteFrames("game/game0.plist", "game/game0.png")

    -- local baseNode = cc.Node:create()
    -- self:add(baseNode, 100)

    -- local imageViewBg = ccui.ImageView:create("Match/".."game/game_common_form.png", ccui.TextureResType.plistType)
    -- :setScale9Enabled(true)
    -- :setCapInsets(cc.rect(10, 9, 13, 9))
    -- :setContentSize(num * width + 20, height + 10)
    -- baseNode:addChild(imageViewBg, 1)

    -- local effectLight = ccui.ImageView:create("Match/".."game/zhongma_effect1.png", ccui.TextureResType.plistType)
    -- local effectL = ccui.ImageView:create("Match/".."game/zhongma_effect2.png", ccui.TextureResType.plistType)
    -- local effectR = ccui.ImageView:create("Match/".."game/zhongma_effect2.png", ccui.TextureResType.plistType)
    -- local effect3 = ccui.ImageView:create("Match/".."game/zhongma_effect3.png", ccui.TextureResType.plistType)
    -- local effect4 = ccui.ImageView:create("Match/".."game/zhongma_effect4.png", ccui.TextureResType.plistType)
    -- local zmNumLab = cc.Label:createWithBMFont("fonts/zhongmaBigNum.fnt", "")
    -- effectL:setScaleX(-1)
    -- effectLight:setPosition(0, imageViewBg:getContentSize().height/2)
    -- effectL:setPosition(-195, imageViewBg:getContentSize().height/2 + 16)
    -- effectR:setPosition(195, imageViewBg:getContentSize().height/2 + 16)
    -- effect3:setPosition(-53, imageViewBg:getContentSize().height/2 + 24)
    -- effect4:setPosition(53, imageViewBg:getContentSize().height/2 + 24)
    -- zmNumLab:setPosition(0, imageViewBg:getContentSize().height/2 + 30)
    -- baseNode:addChild(effectLight)
    -- baseNode:addChild(effectL)
    -- baseNode:addChild(effectR)
    -- baseNode:addChild(effect3)
    -- baseNode:addChild(effect4)
    -- baseNode:addChild(zmNumLab)
    -- effectLight:setVisible(false)
    -- effectL:setVisible(false)
    -- effectR:setVisible(false)
    -- effect3:setVisible(false)
    -- effect4:setVisible(false)
    -- zmNumLab:setVisible(false)
    

    -- if self.posState == 1 then
    --     baseNode:move(display.cx, display.cy -  imageViewBg:getContentSize().height*0.5 - 100)
    -- elseif self.posState == 2 then
    --     baseNode:move(g_gameGlobal:getDisplayWidth()*3/4-15, display.cy-imageViewBg:getContentSize().height/2+ 55)
    --     baseNode:setScale(0.8)
    -- elseif self.posState == 3 then
    --     baseNode:move(display.cx, display.cy + imageViewBg:getContentSize().height*0.5 + 140)
    --     baseNode:setScale(0.8)
    -- elseif self.posState == 4 then
    --     baseNode:move(g_gameGlobal:getDisplayWidth()/4 + 15, display.cy-imageViewBg:getContentSize().height/2 + 55)
    --     baseNode:setScale(0.8)
    -- end

    -- for i = 1, num do
    --     local imageObj
    --     if i == 1 then
    --         imageObj = imageView
    --     else
    --         local ma = self.winnerMa[i]
    --         if ma == 0 then
    --             return 
    --         end
    --         imageObj = self:getNormalCard(ma)
    --         imageObj:setVisible(false)
    --     end
    --     imageObj:setScale(0.7)
    --     imageObj:setAnchorPoint(cc.p(0, 0.5))
    --     imageObj:addTo(imageViewBg)
    --     imageObj:move(10+(i-1)*imageObj:getBoundingBox().width, imageViewBg:getContentSize().height/2)
    --     table.insert(maObjTable, imageObj)

    --     local zhong = bit._and(self.zhongMaIndex*(2^(-(i-1))), 0x1)
    --     if zhong > 0 then
    --         imageObj:setColor(display.COLOR_GREEN)
    --     end
    -- end
    -- local scheduler = cc.Director:getInstance():getScheduler()
    -- local function maScheduleFunc(dt)
    --     local endSchedule = true
    --     if #maObjTable > 0 then
    --         table.remove(maObjTable, 1)
    --         if #maObjTable > 0 then
    --             if not tolua.isnull(maObjTable[1]) then
    --                 maObjTable[1]:setVisible(true)
    --                 endSchedule = false
    --             end
    --         end
    --     end
    --     if endSchedule and self.maScheEntry then
    --         cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self.maScheEntry)
    --         self.maScheEntry = nil
    --         local moveOffset = 200
    --         local lx = effectL:getPositionX()
    --         local rx = effectR:getPositionX()

    --         local showNumCall = function()
    --             effectLight:setVisible(true)
    --             if self.zhongMaNum then
    --                 effect3:setVisible(true)
    --                 effect4:setVisible(true)
    --                 zmNumLab:setVisible(true)
    --                 zmNumLab:setString(tostring(self.zhongMaNum))
    --             end
    --         end
    --         effectL:setPositionX(lx-moveOffset)
    --         effectR:setPositionX(rx+moveOffset)
    --         effectL:setVisible(true)
    --         effectR:setVisible(true)
    --         effectL:runAction(cc.MoveBy:create(0.15, cc.p(moveOffset, 0)))
    --         effectR:runAction( cc.Sequence:create(cc.MoveBy:create(0.15, cc.p(-moveOffset, 0)), cc.CallFunc:create(showNumCall)) )
    --     end
    -- end
    -- self.maScheEntry = scheduler:scheduleScriptFunc(maScheduleFunc, 0.2 , false)
end
--设置出牌定位符的位置
function TablePlayerBase:showChuCardMarker(chu, delay)
    if not chu then
        return 
    end

    if g_gameGlobal:getGameScene() then
        local gameBase = g_gameGlobal:getGameScene():getChildByName("gameBase")
        if gameBase then
            gameBase:updateMarkerPosAndAnimal(cc.p(chu:getPosition()), cc.p(0, 0), delay)
        end
    end
end

function TablePlayerBase:removeOneCard(cardValue)
    if not cardValue or cardValue == 0 then
        print("err...removeOneCard,", cardValue)
        return
    end
    
    for i, v in pairs(self.inhandCards) do 
        local value = v:getTag()
        if value == cardValue then
            v:removeSelf()
            table.remove(self.inhandCards, i)
            return
        end
    end
    if self.newCardInLog then
        local value = self.newCardInLog:getTag()
        if value == cardValue then
            self.newCardInLog:removeSelf()
            self.newCardInLog = nil
        end
    end
end


function TablePlayerBase:createOneDeskCard(cardValue)
    if cardValue==nil or cardValue<=0 then
        return
    end
    local imageView 
    if self.posState == 1 then
        imageView = self:getMyLaydownCard(cardValue) 
    elseif self.posState == 2 then
        imageView = self:getRightLaydownCard(cardValue) 
    elseif self.posState == 3 then
        imageView = self:getOppLaydownCard(cardValue) 
        imageView:setScale(0.6)
    elseif self.posState == 4 then
        imageView = self:getLeftLaydownCard(cardValue) 
    end
    return imageView
end

function TablePlayerBase:addNewCard(cardValue, reposition, insertPos)
    if cardValue==nil or cardValue <= 0 then
        return
    end
    
    if reposition==nil then reposition = true end
    local imageView 
    if self.posState == 1 then
        imageView = self:getNormalCard(cardValue):setAnchorPoint(cc.p(0, 0.5))
    elseif self.posState == 2 then
        imageView = self:getRightLaydownCard(cardValue):setAnchorPoint(cc.p(0.5, 0))
    elseif self.posState == 3 then
        imageView = self:getNormalCard(cardValue) 
        imageView:setScale(0.6)
    elseif self.posState == 4 then
        imageView = self:getLeftLaydownCard(cardValue):setAnchorPoint(cc.p(0.5, 1))
    end

    imageView:addTo(self.handCardPanel, 100+2)
    if self.posState == 1 then
        --imageView:setScale(1.1)
    end
    self:insertNewCard(imageView, insertPos)
    if reposition then
        self:repositionAllCards();
    end
end

function TablePlayerBase:replaceOneCard(removeCardValue, newCardValue, reposition)
    if removeCardValue==nil or removeCardValue<=0 then
        self:addNewCard(newCardValue, reposition, #self.inhandCards+1)
        return
    end
    
    for i, v in pairs(self.inhandCards) do 
        local value = v:getTag()
        if value == removeCardValue then
            v:removeSelf()
            
            table.remove(self.inhandCards, i)
            if not (newCardValue==nil or newCardValue<=0) then
                self:addNewCard(newCardValue, false, i)
            end
            if reposition then
                self:repositionAllCards();
            end
            return
        end
    end

    if self.newCardInLog then
        local value = self.newCardInLog:getTag()
        if value == removeCardValue then
            self.newCardInLog:removeSelf()
            self.newCardInLog = nil

            if not (newCardValue==nil or newCardValue<=0) then
                self:playLogMoCard(newCardValue)
            end
        end
    end
    if reposition then
        self:repositionAllCards();
    end
end

function TablePlayerBase:getNormalCard( value )
    return g_gameGlobal:getNormalCard( value ):setAnchorPoint(cc.p(0.5, 0.5))
end

function TablePlayerBase:insertNewCard(obj, insertPos, justToTable)
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
        GameTool.addLaiziMarkInCardNode(obj, self.posState)
        self:insertLaiZi(obj)
        return
    end

    local cardY = self.handCardStartPosY
    local startX = self.handCardStartPosX

    local inserted = false
    if type(insertPos)=="number" then
        inserted = true
        insertPos = math.min(math.max(insertPos,1), #self.inhandCards+1)
        obj:move(insertPos-1 * obj:getBoundingBox().width + startX, cardY)
        self:setHandCardPosInLog(obj, insertPos-1)
        table.insert(self.inhandCards, insertPos, obj)
    else
        if justToTable then
            inserted = true
            table.insert(self.inhandCards, obj)
        else
            local newCardSortValue = self:getCardSortValue(cardValue)
            for i, v in pairs(self.inhandCards) do 
                local cValue = v:getTag()
                if not g_gameGlobal:isLaiZi(cValue) then
                    local cSortValue = self:getCardSortValue(cValue)
                    local findPos = falsefalse
                    if newCardSortValue < cSortValue then
                        findPos = true
                    end
                    if findPos then
                        obj:move((i-1) * obj:getBoundingBox().width + startX, cardY)
                        self:setHandCardPosInLog(obj, i)
                        table.insert(self.inhandCards, i, obj)
                        inserted = true
                        break
                    end
                end
            end
        end
    end

    if not inserted then
        obj:move(#self.inhandCards * obj:getBoundingBox().width + startX, cardY)
        self:setHandCardPosInLog(obj, #self.inhandCards)
        table.insert(self.inhandCards, obj)
    end
end

function TablePlayerBase:insertLaiZi(obj)
    local posy = self.handCardStartPosY
    local posx = self.handCardStartPosX

    self:setHandCardPosInLog(obj, 0)
    table.insert(self.inhandCards, 1, obj)
end

function TablePlayerBase:setCardSortValues(sortValues)
    sortValues = sortValues or {}
    for k,v in pairs(sortValues) do
        self.sortValues[k] = v
    end
end

function TablePlayerBase:getCardSortValue(cardValue)   
    if self:isQueCard(cardValue) then
        return 0x1000+cardValue
    else
        if self.sortValues[cardValue] then
            return self.sortValues[cardValue]
        end

        local cardType = bit._and(cardValue*(2^(-4)), 0xf)
        local cardNum = bit._and(cardValue, 0xf)

        if cardType == 1 then
            cardType = 2
        elseif cardType == 2 then
            cardType = 1
        end

        local sortValue = bit._or(cardType*(2^(4)), cardNum)
        self.sortValues[cardValue] = sortValue
        return sortValue
    end
end

function TablePlayerBase:calculateCardSortWeight(cardv)
    local sortWeight = 0
    if g_gameGlobal:isLaiZi(cardv) then
        sortWeight = -1
    else
        sortWeight = self:getCardSortValue(cardv)
    end
    
    return sortWeight
end

function TablePlayerBase:handSortComFunc(card1, card2)
    card1 = self:calculateCardSortWeight(card1)
    card2 = self:calculateCardSortWeight(card2)

    return card1 < card2
end

function TablePlayerBase:sortHandCards()
    for i=1,#self.inhandCards do
        local curCardWeight = self:calculateCardSortWeight(self.inhandCards[i]:getTag())

        for j=i-1, 0, -1 do
            if j==0 or self:calculateCardSortWeight(self.inhandCards[j]:getTag())<= curCardWeight then
                if j ~= i-1 then
                    local tmp = table.remove(self.inhandCards, i)
                    table.insert( self.inhandCards, j+1, tmp )
                end
                break
            end
        end
    end
end

function TablePlayerBase:isQueCard(cardValue)
    local cardNum = bit._and(cardValue, 0xf)
    if cardValue and cardNum>0 then
        return self.queValue == bit._and(cardValue, 0xf0)
    end
    return false
end

function TablePlayerBase:checkHandHaveQueValue()
     -- 首先检测是否有定缺牌
     local isHaveQueValue = false 
        
     if not g_gameGlobal:getIsPlayingGameLog() and not tolua.isnull(self.newCard) then 
         local cValue = self.newCard:getTag()
         if self:isQueCard(cValue) then
             isHaveQueValue = true 
         end 
     elseif not tolua.isnull(self.newCardInLog) then 
         local cValue = self.newCardInLog:getTag()
         if self:isQueCard(cValue) then
             isHaveQueValue = true 
         end 
     end 

     if not isHaveQueValue then 
         for k, v in ipairs(self.inhandCards) do 
             local cValue = v:getTag()
             if self:isQueCard(cValue) then
                 isHaveQueValue = true 
                 break
             end 
         end
     end 
     return isHaveQueValue
end

function TablePlayerBase:showHaveQueCardShadow(isHaveQue)
    
    if isHaveQue then 
        for k, v in ipairs(self.inhandCards) do 
            local cValue = v:getTag()
            if not self:isQueCard(cValue) then
                v:setColor(cc.c3b(166, 166, 165))
            else 
                v:setColor(display.COLOR_WHITE)
            end 
        end 

        if not g_gameGlobal:getIsPlayingGameLog() and not tolua.isnull(self.newCard) then 
            if self:isQueCard(self.newCard:getTag()) then
                self.newCard:setColor(display.COLOR_WHITE)
            else 
                self.newCard:setColor(cc.c3b(166, 166, 165))
            end 
        elseif g_gameGlobal:getIsPlayingGameLog() and not tolua.isnull(self.newCardInLog) then 
            if self:isQueCard(self.newCardInLog:getTag()) then
                self.newCardInLog:setColor(display.COLOR_WHITE)
            else 
                self.newCardInLog:setColor(cc.c3b(166, 166, 165))
            end 
        end 
    else 
        for k, v in ipairs(self.inhandCards) do 
            v:setColor(display.COLOR_WHITE)
        end 
        if not g_gameGlobal:getIsPlayingGameLog() and not tolua.isnull(self.newCard) then 
            self.newCard:setColor(display.COLOR_WHITE)
        elseif g_gameGlobal:getIsPlayingGameLog() and not tolua.isnull(self.newCardInLog) then 
            self.newCardInLog:setColor(display.COLOR_WHITE)
        end 
    end 
end 

function TablePlayerBase:repositionAllCards(needSort)
    if needSort == nil then needSort = true end
    if g_gameGlobal:getIsPlayingGameLog() then
        if needSort then
            self:sortHandCards()
        end
        for i, v in pairs(self.inhandCards) do
            v:stopAllActions()
            self:setHandCardPosInLog(v, i)
            v.isSelected = false 
        end
        if type(self.inhandCards)=="table" and #self.inhandCards==11 and g_gameGlobal:getCurrentWanFa().wanfa == g_gameConstant.GAME_PLAY_RULE_SC_DGKMJ then 
            self:showTingIcon(false)
        end
        return 
    end

    if self.posState ~= 1 then
        return
    end
    if needSort then
        self:sortHandCards()
    end

    self.touchObjMoved = false

    local startx = self.handCardStartPosX
    local handsNum = #self.inhandCards

    local handCardWidth = 0
    local handCardHeight = 0
    if handsNum > 0 then
        handCardWidth = self.inhandCards[1]:getBoundingBox().width
        handCardHeight = self.inhandCards[1]:getBoundingBox().height
    end

    for i, v in pairs(self.inhandCards) do
        v.isSelected = false
        v:stopAllActions()
        v.touchMode = "unselect"
        if (i == handsNum) and (math.mod(handsNum, 3) == 2) then
            --如果是轮到自己出牌，最右边的一只牌分开一点
            v:move((i-1)*handCardWidth + startx + self.cardNodeConfig.newCardDistance,
                    self.handCardStartPosY)
            self.handChuCardPosCache = cc.p(v:getPositionX(), v:getPositionY())
        else
            v:move((i-1) * handCardWidth + startx, self.handCardStartPosY)
        end

        local cardValue = v:getTag()

        --v:setColor(self:isQueCard(cardValue) and cc.c3b(166, 166, 165) or display.COLOR_WHITE)
        if g_gameGlobal:isLaiZi(cardValue) then
            GameTool.addLaiziMarkInCardNode(v, self.posState)
        else
            if self.isInTing or self.isHuEnd then
                v:setColor(cc.c3b(166, 166, 166))
            else
                --v:setColor(display.COLOR_WHITE)
            end
        end
    end

    --最右边的牌也要刷新一下
    if self.newCard then
        self.newCard:stopAllActions()
        self.newCard.touchMode = "unselect"
        self.newCard:move(startx + #self.inhandCards * handCardWidth + self.cardNodeConfig.newCardDistance,
                                self.handCardStartPosY)
        self:setHandCardPosInLog(self.newCard, #self.inhandCards)
        local cValue = self.newCard:getTag()
        --self.newCard:setColor(self:isQueCard(cValue) and cc.c3b(166, 166, 165) or display.COLOR_WHITE)
        if g_gameGlobal:isLaiZi(cValue) then
            GameTool.addLaiziMarkInCardNode(self.newCard, self.posState)
        else
            if self.isInTing or self.isHuEnd then
                self.newCard:setColor(cc.c3b(166, 166, 166))
            else
                --self.newCard:setColor(display.COLOR_WHITE)
            end
        end
    end

    local isHaveQue = self:checkHandHaveQueValue()
    self:showHaveQueCardShadow(isHaveQue)
end
    
function TablePlayerBase:showHuCard(huCardValue)
    self:setHuEnd(huCardValue and huCardValue>0)
end

function TablePlayerBase:setHuEnd(value)
    if value then
        self.isHuEnd = true
        self:showHuEndIcon(self.isHuEnd)
    else
        self.isHuEnd = false
        self:showHuEndIcon(self.isHuEnd)
    end
    self:showTingIcon(self.isInTing)
end

function TablePlayerBase:showHuEndIcon(visible)
    self.huEndIcon:setVisible(visible)
    self:setSmallAniPos(self.huEndIcon)
end

function TablePlayerBase:showChuCards(cardValueTable, isChuCard)
    if type(self.chuCards) == "table" then
        for _,v in ipairs(self.chuCards) do
            if not tolua.isnull(v) then
                v:removeSelf()
            end
        end
        self.chuCards = {}
    end
    local bNeedMarker = isChuCard or false
    local hasChuCard = false
    if cardValueTable then
        for i, v in pairs(cardValueTable) do
            self:addChuCard(v, bNeedMarker, false)
            hasChuCard = true
        end
    end
    return hasChuCard
end

function TablePlayerBase:fileAddChuAni(chuCardNode, bl, odelay)
    local costTime = 0
    odelay = odelay or 0
    local isQuickType = g_UserDataTable.bigHandCard==1
    if not self.isSupportSlowChuAni then
        isQuickType = true
    end
    
--    if self.posState == 1 then
    bl = false
--    end
    
    if bl then
        local cdSize = chuCardNode:getContentSize()

        local tipShowCard = self:createTipShowChuCard(chuCardNode:getTag())

        self:setChuObjPos(tipShowCard)

        local tipStartPos = chuCardNode:convertToNodeSpace(self.handChuCardPosCache)
        local tipStayPos = chuCardNode:convertToNodeSpace(cc.p(tipShowCard:getPositionX(),tipShowCard:getPositionY()))
        local tipDesPos = cc.pMul(cc.pFromSize(cdSize),0.5)

        local tipStartScale = cdSize.width / tipShowCard:getContentSize().width * 1.2
        local tipStayScale = tipShowCard:getScaleX()/chuCardNode:getScaleX()
        local tipDesScale = cdSize.width / tipShowCard:getContentSize().width

        tipShowCard:setPosition(tipStartPos)
        tipShowCard:setScale(tipStartScale)
        chuCardNode:addChild(tipShowCard, 100)

        local des1 = cc.pGetDistance(tipStartPos, tipStayPos)
        local des2 = cc.pGetDistance(tipDesPos, tipStayPos)

        local t1 = isQuickType and 0 or des1/(10700)
        local t2 = isQuickType and 0.4 or 0.7
        local t3 = isQuickType and 0 or 0.6*des2/4600
        costTime = t1 + t2 + t3 + odelay

        if chuCardNode.hideCardImg then
            chuCardNode:hideCardImg(true)
            performWithDelay(chuCardNode, function() chuCardNode:hideCardImg(false) end, costTime)
        end

        local oriZOrder = chuCardNode:getLocalZOrder()
        performWithDelay(chuCardNode, function() chuCardNode:setLocalZOrder(oriZOrder)  end, costTime)
        chuCardNode:setLocalZOrder(1000)

        local function mrs()
            local actions = {}
            if t1>0 then
                actions[#actions+1] = cc.Spawn:create(cc.MoveTo:create(t1, tipStayPos), cc.ScaleTo:create(t1, tipStayScale))
            else
                tipShowCard:setPosition(tipStayPos)
                tipShowCard:setScale(tipStayScale)
            end
            actions[#actions+1] = cc.DelayTime:create(t2)

            if t2 > 0 then
                actions[#actions+1] = cc.Spawn:create(cc.MoveTo:create(t3, tipDesPos), cc.ScaleTo:create(t3, tipDesScale))
            end

            actions[#actions+1] = cc.CallFunc:create(function() tipShowCard:removeSelf() end)
            local tipAct = cc.Sequence:create(actions)
            tipShowCard:runAction(tipAct)
        end

        if odelay > 0 then
            tipShowCard:hideCardImg(true)
            tipShowCard:runAction(
                cc.Sequence:create(
                    cc.DelayTime:create(odelay), 
                    cc.CallFunc:create(
                        function()
                            tipShowCard:hideCardImg(false) 
                        end
                    ), 
                    cc.CallFunc:create(mrs)
                )
            )
        else
            mrs()
        end
    else
        costTime = odelay

        if chuCardNode.hideCardImg then
            chuCardNode:hideCardImg(true)
            performWithDelay(chuCardNode, function() chuCardNode:hideCardImg(false) end, costTime)
        end
    end

    return costTime
end

function TablePlayerBase:showChiPengGangCards(cardValueTable, bPlayAni)
    
    if type(self.laydownCards) == "table" then
        for _,v in ipairs(self.laydownCards) do
            if not tolua.isnull(v) then
                v:removeSelf()
            end
        end
        self.laydownCards = {}
    end

    local hasLaydownCard = false
    if cardValueTable then
        local playerTableOperationMsg = {}
        local huaList = {}
        for i, v in pairs(cardValueTable) do
            playerTableOperationMsg.opValue = v.cardValue
            
            if v.type == 0 then
                for i=0,3 do
                    local o = bit._and(v.cardValue * (2^ (-i*8)), 0xff)
                    if o ~= 0 then
                        hasLaydownCard = true
                        huaList[#huaList+1]= o
                    end
                end
            else
                if v.type == g_gameConstant.MAHJONG_OPERTAION_BU_GANG then
                    playerTableOperationMsg.operation = g_gameConstant.MAHJONG_OPERTAION_MING_GANG
                else
                    playerTableOperationMsg.operation = v.type
                end
                playerTableOperationMsg.ruleValue = v.ruleValue
                playerTableOperationMsg.chuOffset = v.chuOffset
                playerTableOperationMsg.card_value = 0
                self:chiPengGangOperation(playerTableOperationMsg, false)
                hasLaydownCard = true
            end            
        end
        self:setHuaCardList(huaList)
    end
    return hasLaydownCard
end

-- 设置组合牌 颜色标识提供者指向
function TablePlayerBase:setChuPlayerColor(obj, offset, op, cardIndex, chiValue)

    if not g_gameConstant.SWITCHER_LAYDOWN_PROVIDER_SIGN then
        return
    end
    
    if not obj then
        return
    end

    if op == g_gameConstant.MAHJONG_OPERTAION_AN_GANG then
        return 
    elseif op == g_gameConstant.MAHJONG_OPERTAION_CHI then
        if obj:getTag() == chiValue then
            obj:setColor(cc.c3b(215,188,115))
        end
        return 
    end

    local maxPlayerNum = g_gameGlobal:getMaxPlayerNum()

    local transedOffset = GameTool.transChuOffset(maxPlayerNum, self.posState, g_gameGlobal:getServerTablePosByLocalPos(self.posState), offset)
    local neetMarkDir = GameTool.checkIsChuOffsetCardIdx(self.posState, transedOffset, cardIndex, maxPlayerNum)

    if neetMarkDir then
        obj:setColor(cc.c3b(215,188,115))
    end
end

-- 设置组合牌 颜色标识提供者指向
function TablePlayerBase:setChuPlayerFlag(obj, offset, op, cardIndex, chiValue)
    
    if not obj then
        return
    end

    if op == g_gameConstant.MAHJONG_OPERTAION_AN_GANG then
        return 
    elseif op == g_gameConstant.MAHJONG_OPERTAION_CHI then
        if obj:getTag() == chiValue then
            obj:setColor(cc.c3b(215,188,115))
        end
        return 
    end

    local maxPlayerNum = g_gameGlobal:getMaxPlayerNum()

    local transedOffset = GameTool.transChuOffset(maxPlayerNum, self.posState, g_gameGlobal:getServerTablePosByLocalPos(self.posState), offset)
    local neetMarkDir = GameTool.checkIsChuOffsetCardIdx(self.posState, transedOffset, cardIndex, maxPlayerNum)

    if neetMarkDir then
        local dirImg, nodePos, scale = g_gameGlobal:getChuDirArrowImg(self.posState, transedOffset, maxPlayerNum)

        obj:removeChildByName("chuPlayerDir")
        if dirImg and nodePos and scale then
            local dirNode = ccui.ImageView:create("Match/"..dirImg, ccui.TextureResType.plistType)
            dirNode:setPosition(nodePos)
            obj:addChild(dirNode)
            dirNode:setName("chuPlayerDir")
            
            -- 此麻将缩放比例跟其他不一样，需要特殊处理下
            if g_UserDataTable.mjCardType == g_gameConstant.USERDATA_MJUI_TYPE_GREEN_6 then
                local scaleEn = {
                    0.8, 0.9, 0.9, 0.9
                }
                local newscale = scaleEn and scaleEn[self.posState] or 0.9
                dirNode:setScale(newscale)
                
                dirNode:setPosition(cc.p(nodePos.x, nodePos.y + 6))
            end
        end  
    end
end

function TablePlayerBase:setHuPlayerFlag(obj, offset, op, cardIndex, chiValue)
    if not obj then
        return
    end

    if op == g_gameConstant.MAHJONG_OPERTAION_AN_GANG then
        return 
    elseif op == g_gameConstant.MAHJONG_OPERTAION_CHI then
        if obj:getTag() == chiValue then
            obj:setColor(cc.c3b(215,188,115))
        end
        return 
    end

    local maxPlayerNum = g_gameGlobal:getMaxPlayerNum()
    
    local dirImg, nodePos, scale = g_gameGlobal:getHuDirArrowImg(self.posState, offset, maxPlayerNum)
    if dirImg then
        obj:removeChildByName("chuPlayerDir")
        if dirImg and nodePos and scale then
            local dirNode = ccui.ImageView:create("Match/"..dirImg, ccui.TextureResType.plistType)
            dirNode:setPosition(nodePos)
            dirNode:setScale(scale)
            obj:addChild(dirNode)
            dirNode:setName("chuPlayerDir")
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

function TablePlayerBase:addChuCardNodeInDesk(cardNode)
    -- 各个子类单独实现 
end

function TablePlayerBase:addChuCard(cardValue, bNeedMarker, needSfx, odelay)
    -- 各个子类单独实现
    odelay = odelay or 0
end

function TablePlayerBase:removeChuCard()
    if self.chuPai then
        self.chuPai:stopAllActions()
        self.chuPai:removeSelf()
        self.chuPai = nil
    end
end

function TablePlayerBase:tipShowChuCard(cardValue)
    self:removeChuCard()

    -- self.chuPai = self:createTipShowChuCard(cardValue)
    -- self:setChuObjPos(self.chuPai)
    -- self:add(self.chuPai, 100)
end

function TablePlayerBase:createTipShowChuCard(cardValue)
    local chuImage = g_gameGlobal:getLaydownCard(cardValue, 1)
    chuImage:setAnchorPoint(cc.p(0.5,0.5))
    chuImage:setScale(1.5)

    return chuImage
end

function TablePlayerBase:chuOperation(cardValue, withAni, odelay)
    if odelay and odelay > 0 then
        performWithDelay(self, function() self:setIsMyFangwei(false) end, odelay)
    else
        self:setIsMyFangwei(false)
    end
    self:addChuCard(bit._and(cardValue, 0xff), true, withAni, odelay)
end

function TablePlayerBase:getMyLaydownCard(value, isOutCardIndesk)
    local img = g_gameGlobal:getLaydownCard(value, 1):setAnchorPoint(cc.p(0.5, 0.5))
    if isOutCardIndesk then
        img:setScale(self.cardNodeConfig.chuFixScale)
    end
    return img
end

function TablePlayerBase:getOppLaydownCard(value)
    return g_gameGlobal:getLaydownCard(value, 3):setAnchorPoint(cc.p(0.5, 0.5)):setScale(self.cardNodeConfig.chuFixScale)
end

function TablePlayerBase:removeLastChuCard()
    local cardValue = 0
    if #self.chuCards > 0 then
        local imageView = self.chuCards[#self.chuCards]
        cardValue = imageView:getTag()
        imageView:removeSelf()
        table.remove(self.chuCards, #self.chuCards)
    end
    
    return cardValue
end

function TablePlayerBase:playChiPengGangAnimation( msg )
    if msg.opValue ~= g_gameConstant.MAHJONG_OPERTAION_GANG_NOTIFY and 
        ((msg.operation == g_gameConstant.MAHJONG_OPERTAION_AN_GANG) or
         (msg.operation == g_gameConstant.MAHJONG_OPERTAION_MING_GANG) or
         (msg.operation == g_gameConstant.MAHJONG_OPERTAION_BU_GANG)) then
        self:notifyNDao(msg.unused2)
        return 
    end

    if msg.operation == g_gameConstant.MAHJONG_OPERTAION_CHI or msg.operation == g_gameConstant.MAHJONG_OPERTAION_PENG  then
        if self:notifyNDao(msg.unused2) then
            return
        end
    end
    
    local effectNode
    local time = 1.1

    local csbPath = nil
    local aniName = nil
    if msg.operation == g_gameConstant.GAME_PLAY_RULE_SC_OPERATION_BAO_HU then 
        csbPath = "Match/animation/bao.csb"
        aniName = "animation0"
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_CHI then
        csbPath = "Match/animation/chi.csb"
        aniName = "animation0"
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_PENG then
        csbPath = "Match/animation/peng.csb"
        aniName = "animation0"
    elseif (msg.operation == g_gameConstant.MAHJONG_OPERTAION_MING_GANG) or 
            (msg.operation == g_gameConstant.MAHJONG_OPERTAION_BU_GANG) or 
            (msg.operation == g_gameConstant.MAHJONG_OPERTAION_AN_GANG) then
    end
    
    if csbPath and aniName then
        effectNode = cc.CSLoader:createNode(csbPath)
        local timeScale = 2
        time = time / timeScale

        local roleAction = cc.CSLoader:createTimeline(csbPath)
        effectNode:runAction(roleAction)
        roleAction:setTimeSpeed(timeScale)
        roleAction:play(aniName, false) 
    end

    if effectNode then    
        self:addChild(effectNode, 200)
        self:setSmallAniPos(effectNode)
        transition.execute(effectNode, nil, {delay = time, removeSelf = true})
    end
    
    if msg.operation == g_gameConstant.GAME_PLAY_RULE_SC_OPERATION_BAO_HU then 
        -- 播放爆牌音效

    elseif (msg.operation == g_gameConstant.MAHJONG_OPERTAION_MING_GANG) or 
        (msg.operation == g_gameConstant.MAHJONG_OPERTAION_BU_GANG) or 
        (msg.operation == g_gameConstant.MAHJONG_OPERTAION_AN_GANG) then
        -- time = 2.1

        -- local otherEffectNode = sp.SkeletonAnimation:create("spine/chipenggang_ani/magang.json", "spine/chipenggang_ani/magang.atlas", 1)

        -- local timeScale = 3
        -- otherEffectNode:setTimeScale(timeScale)
        -- time = time / timeScale

        if msg.operation == g_gameConstant.MAHJONG_OPERTAION_AN_GANG then
            self:playCSBAction(GameConfig.XZXIAYUINDEX)
            -- otherEffectNode:setAnimation(0, "angang", false)
            NG.soundManager:playMatchEffect(self.gameAudioParser:getEffectFileForOperation(g_gameConstant.OPERATION_AN_GANG, self.sex))
        else
            -- otherEffectNode:setAnimation(0, "minggang", false)
            self:playCSBAction(GameConfig.XZGUAFENGINDEX)
            NG.soundManager:playMatchEffect(self.gameAudioParser:getEffectFileForOperation(g_gameConstant.OPERATION_GANG, self.sex))
        end

        -- local layout = ccui.Layout:create()
        -- layout:setTouchEnabled(true)
        -- layout:setContentSize(g_gameGlobal:getDisplayWidth(),g_gameGlobal:getDisplayHeight())
        -- layout:setBackGroundColorType(1)
        -- layout:setBackGroundColor(cc.c3b(0,0,0))
        -- layout:setPosition(cc.p(0,0))
        -- layout:setOpacity(0.0*255)
        -- display.getRunningScene():addChild(layout, 200)
        -- -- transition.execute(layout, nil, {delay = time, removeSelf = true})

        -- otherEffectNode:setPosition(display.center)
        -- layout:addChild(otherEffectNode, 200)
    end
end

function TablePlayerBase:showRedPacket(cardType)
	
end

--------------------------- 播放战绩时使用---------------------
-- 创建手牌
function TablePlayerBase:recreateAllCards(msg,isSort)

    for i , v in pairs(self.inhandCards) do
        v:removeSelf()
    end
    self.inhandCards = {}

    if not tolua.isnull(self.newCard) then 
        self.newCard:removeSelf()
        self.newCard = nil 
    end 
    
    for i, v in pairs(msg) do
        self:addNewCard(v, false)
    end
    self:repositionAllCards(isSort)
    if type(msg)=="table" and #msg==11 and g_gameGlobal:getCurrentWanFa().wanfa == g_gameConstant.GAME_PLAY_RULE_SC_DGKMJ then 
        self:showTingIcon(false)
    end
end

-- 回放的时候，删除一张刚打的牌，有可能被碰了
function TablePlayerBase:removeReplayChuCard( cardValue )
     if (self.chuCards == nil) or (type(self.chuCards) == "table" and #self.chuCards == 0) then
        return false
    end

    local lastChuSpr = self.chuCards[#self.chuCards]
    if lastChuSpr:getTag() == cardValue then
        lastChuSpr:removeSelf()
        self.chuCards[#self.chuCards] = nil
        return true
    end
    
    return false
end

function TablePlayerBase:playLogMoCard(cardValue)
    
    if not tolua.isnull(self.newCardInLog) then
        self.newCardInLog:removeSelf()
        self.newCardInLog = nil
    end
    
    local imageView 
    if self.posState == 1 then
        imageView = self:getNormalCard(cardValue):setAnchorPoint(cc.p(0, 0.5))
    elseif self.posState == 2 then
        imageView = self:getRightLaydownCard(cardValue):setAnchorPoint(cc.p(0.5, 0))
    elseif self.posState == 3 then
        imageView = self:getNormalCard(cardValue) 
        imageView:setScale(0.6)
    elseif self.posState == 4 then
        imageView = self:getLeftLaydownCard(cardValue):setAnchorPoint(cc.p(0.5, 1))
    end

    imageView:setTag(cardValue)
    :addTo(self.handCardPanel, 1)
    
    local idx = #self.inhandCards
    self:setHandCardPosInLog(imageView, idx + 1)

    self.newCardInLog = imageView
    self.newCardInLog:setColor(cc.c3b(0, 115, 255))
    self.handChuCardPosCache = cc.p(self.newCardInLog:getPositionX(), self.newCardInLog:getPositionY())
end

function TablePlayerBase:getLogMoCardValue()
    return not tolua.isnull(self.newCardInLog) and self.newCardInLog:getTag()
end

function TablePlayerBase:clearMoCard()
    if self.newCardInLog then
        self.newCardInLog:setColor(display.COLOR_WHITE)
        self:insertNewCard(self.newCardInLog)
        self.newCardInLog = nil
    end
end

function TablePlayerBase:removeMoCard()
    if not tolua.isnull(self.newCardInLog) then
        self.newCardInLog:removeSelf()
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

    local posx = self.handCardStartPosX
    local posy = self.handCardStartPosY

    --7 10张玩法调整下位置
    local add_y = 0
    if self.totalHandCardsNum == 7 then
        add_y = handCardHeight*1.5
    elseif self.totalHandCardsNum == 10 then
        add_y = handCardHeight*1
    end


    local cardValue = obj:getTag()

    --obj:setColor(self:isQueCard(cardValue) and cc.c3b(166, 166, 165) or display.COLOR_WHITE)
    if g_gameGlobal:isLaiZi(cardValue) then
        GameTool.addLaiziMarkInCardNode(obj, self.posState)
    else
        --obj:setColor(display.COLOR_WHITE)
    end

    local cn = idx-1
    if self.posState == 1 then
        -- local jiange = self.chiPengGangBlock * 5
        obj:move(posx + cn * handCardWidth, self.handCardStartPosY)
    elseif self.posState == 2 then
        obj:move(self.handCardStartPosX, posy + 5 + (handCardHeight)*(cn) + add_y)
		obj:setLocalZOrder(20-cn)
    elseif self.posState == 3 then
        obj:move(posx - handCardWidth * cn, posy)        
    elseif self.posState == 4 then
        obj:move(self.handCardStartPosX, posy - 5 - (handCardHeight)*(cn) - add_y)
        obj:setLocalZOrder(cn)
    end
end

function TablePlayerBase:setIsMyFangwei(value)
end

function TablePlayerBase:youjinNotify(youjinType)
    
end

function TablePlayerBase:notifyShangGa()
end

function TablePlayerBase:shangGa(gaScore)
    local opMap = {
        [1] = g_gameConstant.OPERATION_SHANG_GA_1,
        [2] = g_gameConstant.OPERATION_SHANG_GA_2,
        [3] = g_gameConstant.OPERATION_SHANG_GA_3,
        [5] = g_gameConstant.OPERATION_SHANG_GA_5,
    }
    if opMap[gaScore] then
        NG.soundManager:playMatchEffect(self.gameAudioParser:getEffectFileForOperation(opMap[gaScore], self.sex))
    end
end

function TablePlayerBase:notifyNDao(daoValue)

    -- Hown 先屏蔽
    do return end 

    local csbPath = "Match/animation/nDaoPai.csb"
    local aniName = nil
    
    if daoValue == 3 then
        aniName = "animation0"
    elseif daoValue == 4 then
        aniName = "animation1"
    else
        return false
    end

    if aniName then
        local node = cc.CSLoader:createNode(csbPath)
        local roleAction = cc.CSLoader:createTimeline(csbPath)
        node:runAction(roleAction)
        roleAction:play(aniName, false)
    
        self:addChild(node, 200)
        self:setSmallAniPos(node)
        transition.execute(node, nil, {delay = 1.2, removeSelf = true})
        return true
    end

    return false
end

function TablePlayerBase:notifyFirstCardEffect(effectValue)
    local csbPath = "Match/animation/firstBeiEffect.csb"
    local aniName = nil
    
    if effectValue == g_gameConstant.OPERATION_FIRST_CARD_FOLLOWED then
        aniName = "animation0"
    elseif effectValue == g_gameConstant.OPERATION_FIRST_CARD_GANG then
        aniName = "animation1"
    end

    if aniName then
        local node = cc.CSLoader:createNode(csbPath)
        local roleAction = cc.CSLoader:createTimeline(csbPath)
        node:runAction(roleAction)
        node:setVisible(false)
    
        self:addChild(node, 200)
        self:setSmallAniPos(node)
        
        transition.execute(node, nil, {delay = 0.9, onComplete = function() node:setVisible(true); roleAction:play(aniName, false)  end})
        transition.execute(node, nil, {delay = 2.0, removeSelf = true})
    end
end

function TablePlayerBase:playWashCarsAni()

    local showSpineFunc = function()
        local node = cc.Node:create()
        local xipaiSpine = sp.SkeletonAnimation:create("spine/shuffle/xipai.json", "spine/shuffle/xipai.atlas", 1)
        xipaiSpine:move(cc.p(0,0))
        xipaiSpine:addTo(node)

        if self.posState == 2 then
            xipaiSpine:setAnimation(0, "you", false)
            xipaiSpine:setPositionX(xipaiSpine:getPositionX()+80)
            --node:setRotation(-90)
        elseif self.posState == 3 then
            xipaiSpine:setAnimation(0, "shang", false)
            --node:setRotation(-180)
        elseif self.posState == 4 then
            xipaiSpine:setAnimation(0, "zuo", false)
            xipaiSpine:setPositionX(xipaiSpine:getPositionX()-100)
            --node:setRotation(-270)
        else
            xipaiSpine:setAnimation(0, "xia", false)
            xipaiSpine:setPositionX(xipaiSpine:getPositionX()-30)
        end

        --node:setScale(0.8)
        self:addChild(node, 201)
        self:setSmallAniPos(node)
        transition.execute(node, nil, {delay = 2, removeSelf = true})
    end

    showSpineFunc()
end

function TablePlayerBase:notifyFllowEffect(effectType, noSound)
    local csbPath = "Match/animation/genEffect.csb"
    local aniName = nil

    if effectType == g_gameConstant.GEN_TYPE_GEN_SUCCESS then
        if not noSound then
            NG.soundManager:playMatchEffect("sound/genwin.mp3");   
        end 
        aniName = "animation2"
    elseif effectType == g_gameConstant.GEN_TYPE_GEN_LOU then
        if not noSound then
            NG.soundManager:playMatchEffect("sound/genlose.mp3");   
        end 
        aniName = "animation1"
    elseif effectType == g_gameConstant.GEN_TYPE_GEN_SHANG then
        if not noSound then
            NG.soundManager:playMatchEffect("sound/gen.mp3");   
        end 
        aniName = "animation0"
    end

    if aniName then
        local node = cc.CSLoader:createNode(csbPath)
        local roleAction = cc.CSLoader:createTimeline(csbPath)
        node:runAction(roleAction)
        roleAction:play(aniName, false)
        self:addChild(node, 201)
        self:setSmallAniPos(node)
    
        ExternalFunc.autoRemoveCsbAni(node, roleAction)
    end
end

function TablePlayerBase:notifyHuaHuEffect()
    local csbPath = "Match/animation/huahu.csb"
    local aniName = "animation0"

    if aniName then
        local node = cc.CSLoader:createNode(csbPath)
        local roleAction = cc.CSLoader:createTimeline(csbPath)
        node:runAction(roleAction)
        roleAction:play(aniName, false)
        self:addChild(node, 201)

        self:setSmallAniPos(node)
        if self.posState == 1 then
            self:setSmallAniPos(node, cc.p(190, 0))
        elseif self.posState == 2 then
            self:setSmallAniPos(node, cc.p(0, 120) )
        elseif self.posState == 3 then
            self:setSmallAniPos(node, cc.p(-165, 0) )
        elseif self.posState == 4 then
            self:setSmallAniPos(node, cc.p(0, 120) )
        end
    
        ExternalFunc.autoRemoveCsbAni(node, roleAction)
    end
end

function TablePlayerBase:setQueState(queValue, isAllFinished, hideShow)
    self:removeChildByName("DESK_DING_QUE_STATE_MARK")
    queValue = queValue or self.queValue
    self.queValue = queValue

    if isAllFinished then
        self:repositionAllCards()
        return
    end

    if not hideShow then
        if queValue~=-1 then
            local img = ccui.ImageView:create("noplist/game_m_que2.png", ccui.TextureResType.localType)
            img:setName("DESK_DING_QUE_STATE_MARK")
            self:addChild(img, 201)
            self:setSmallAniPos(img)
        else
            if self.posState ~= 1 then
                local img = ccui.ImageView:create("noplist/game_m_que1.png", ccui.TextureResType.localType)
                img:setName("DESK_DING_QUE_STATE_MARK")
                self:addChild(img, 201)
                self:setSmallAniPos(img)
            end
        end
    end
end

function TablePlayerBase:setHuanPaiState(state)
    self.huanpaiFlag = state
end

--------------------------- 播放战绩时使用---------------------

function TablePlayerBase:reverz1DowncardPos(layCardSize, isbuGang)
    
    if not layCardSize then
        print("reverz1DowncardPos err remove peng")
        return
    end
    
    if isbuGang then
        return
    end
    
    ----- 
    if self.posState == 1 then
        local layDownWidth = layCardSize.width
        local mylayhandDist = (self.cardNodeConfig.handBRect.width * 2) - layDownWidth * 3
        
        self.laydownCardStartPosX = self.laydownCardStartPosX - layDownWidth*3 - mylayhandDist
        self.handCardStartPosX = self.laydownCardStartPosX
    
    elseif self.posState == 2 then
        local laydownHeight = layCardSize.height
        -- 右边
        self.laydownCardStartPosY = self.laydownCardStartPosY - laydownHeight*3 - self.cardNodeConfig.layHandDistance
        self.handCardStartPosY = self.laydownCardStartPosY + self.cardNodeConfig.layHandDistance
        
    
    elseif self.posState == 3 then
        local layDownWidth = layCardSize.width
        self.laydownCardStartPosX = self.laydownCardStartPosX + ( layDownWidth*3 + self.cardNodeConfig.layHandDistance )
        self.handCardStartPosX = self.laydownCardStartPosX 
        
    
    elseif self.posState == 4 then
        
        local laydownHeight = layCardSize.height
        self.laydownCardStartPosY = self.laydownCardStartPosY + laydownHeight*3 + self.cardNodeConfig.layHandDistance
        self.handCardStartPosY = self.laydownCardStartPosY - self.cardNodeConfig.layHandDistance
    
    end
    
    self.chiPengGangBlock = self.chiPengGangBlock - 1
end

function TablePlayerBase:removePeng(cardValue)
    local matchIdx = self:findPeng(cardValue)
    if matchIdx == 0 then
        return
    end
    
    local layCardSize = nil
    
    local pengDownStart = matchIdx - 1
    
    for i = 0, 2 do
        local card = self.laydownCards[pengDownStart]
        
        if card:getTag() ~= cardValue then
            print("err remove peng..,")
            break
        end
        
        if not layCardSize then
            layCardSize = card:getBoundingBox()
        end
        
        card:removeSelf()
        
        table.remove(self.laydownCards, pengDownStart)
    end
    
    self:reverz1DowncardPos(layCardSize)
end

function TablePlayerBase:removeGang(cardValue, isbuGang)
    
    local layCardSize = nil
    
    for k = #self.laydownCards, 1, -1 do
        local card = self.laydownCards[k]
        if not tolua.isnull(card) and card:getTag() == cardValue then
            
            if not layCardSize then
                layCardSize = card:getBoundingBox()
            end
            
            card:removeSelf()
            table.remove(self.laydownCards, k)
            
            if isbuGang then
                break
            end
        end
    end
    
    if not isbuGang then
        self:reverz1DowncardPos(layCardSize, isbuGang)
    end
end

    
local change3CardPosDiff = {
    [1] = cc.p(0, 100),
    [2] = cc.p(-80, 0),
    [3] = cc.p(0, -80),
    [4] = cc.p(80, 0),
}

function TablePlayerBase:setLog3CardOut(outCard)
    if not g_gameGlobal:getIsPlayingGameLog() then
        return
    end
    
    local movCard = {}
    for k, v in ipairs(outCard) do
        movCard[v] = movCard[v] or 0
        movCard[v] = movCard[v] + 1
    end
    
    local moveOutTime = 0.3

    -- howns 2019-12-01 重置一次数据，修复回退按钮导致多牌
    for k, v in ipairs(self.inhandCards or {}) do 
        v.log_setmovout = nil 
    end
    
    for k, v in ipairs(self.inhandCards or{}) do 
        local value = v:getTag()
        if movCard[value] and movCard[value] > 0 then
            local cardPos = cc.p(v:getPosition())
            local posMov = change3CardPosDiff[self.posState] or cc.p(0, 0)
--            v:setPosition(cc.pAdd(cardPos, posMov))
            local movAct = cc.MoveBy:create(moveOutTime, posMov)
            v:runAction(movAct)
            movCard[value] = movCard[value] - 1
            v.log_setmovout = true
            
            if movCard[value] == 0 then
                movCard[value] = nil
            end
        end
    end
    
    if next(movCard) and not tolua.isnull(self.newCardInLog) then
        local v = self.newCardInLog
        local value = v:getTag()
        if movCard[value] and movCard[value] > 0 then
            local cardPos = cc.p(v:getPosition())
            local posMov = change3CardPosDiff[self.posState] or cc.p(0, 0)
--            v:setPosition(cc.pAdd(cardPos, posMov))
            local movAct = cc.MoveBy:create(moveOutTime, posMov)
            v:runAction(movAct)
            movCard[value] = movCard[value] - 1
            v.log_setmovout = true
            
            if movCard[value] == 0 then
                movCard[value] = nil
            end
        end
    end
end

function TablePlayerBase:setLog3CardOutReverz(outCards)
    self:repositionAllCards()
end

function TablePlayerBase:setLog3CardIn(inCards)
    
    local movIndex = 1
    
    for k, v in ipairs(self.inhandCards or{}) do
        if v.log_setmovout then
            v:updateValue(inCards[movIndex])
            -- 不置空了 方便回退
            v.log_setmovout = nil
            
            movIndex = movIndex + 1
        end
        
        if movIndex > #inCards then
            break
        end
    end
end

function TablePlayerBase:setLog3CardInReverz(outCards, inCards)
    
    local tInCards = {}
    for k, v in ipairs(inCards) do
        tInCards[v] = tInCards[v] or 0
        tInCards[v] = tInCards[v] + 1
    end
    
    local movIndex = 1
    
    for k, v in ipairs(self.inhandCards or{}) do
        local cardVal = v:getTag()
        if tInCards[cardVal] and tInCards[cardVal] > 0 then
            v:updateValue(outCards[movIndex])
            
            movIndex = movIndex + 1
            tInCards[cardVal] = tInCards[cardVal] - 1
            v.log_setmovout = true
        else
            v.log_setmovout = false
        end
    end
    
    self:repositionAllCards()
    
    
    local tOutCards = {}
    for k, v in ipairs(outCards) do
        tOutCards[v] = tOutCards[v] or 0
        tOutCards[v] = tOutCards[v] + 1
    end
    
    local count = 0
    for k, v in ipairs(self.inhandCards or{}) do
        local cardVal = v:getTag()
        if tOutCards[cardVal] and tOutCards[cardVal] > 0 then
            
            local cardPos = cc.p(v:getPosition())
            local posMov = change3CardPosDiff[self.posState] or cc.p(0, 0)
            v:setPosition(cc.pAdd(cardPos, posMov))
            count = count + 1
            tOutCards[cardVal] = tOutCards[cardVal] - 1
        end
        
        if count > #outCards then
            break
        end
    end
end

-- 回放时换张时调用
function TablePlayerBase:exchangeCardsAction(outCards,inCards,_callback)
    -- g_gameGlobal:setIsPlayingGameLog(true)
    local handCards = {}
    for k, v in ipairs(self.inhandCards or{}) do 
        local value = v:getTag()
        table.insert(handCards,value)
    end 
    
    local callback = _callback
    
    if next(handCards) == nil then 
        if callback then 
            callback()
        end 
        return 
    end 

   

    local movePos = {
        [1] = cc.p(g_gameGlobal:getDisplayWidth()*0.5,g_gameGlobal:getDisplayHeight()*0.3),
        [2] = cc.p(g_gameGlobal:getDisplayWidth()*0.8,g_gameGlobal:getDisplayHeight()*0.55),
        [3] = cc.p(g_gameGlobal:getDisplayWidth()*0.5,g_gameGlobal:getDisplayHeight()*0.75),
        [4] = cc.p(g_gameGlobal:getDisplayWidth()*0.2,g_gameGlobal:getDisplayHeight()*0.55),
    }

    local toPos = movePos[self.posState]
    local tempHandCards = clone(handCards)
    for k, delObj in ipairs(outCards or {}) do 

        for k2, value in ipairs(tempHandCards or {}) do 
            if value == delObj then 
                table.remove(tempHandCards,k2)
                break
            end 
        end 
    end

    -- 
    local node = display.newNode():move(toPos):addTo(self)

    local outObjs = {}
    for i=1, #outCards do 
        local img = self:createOneDeskCard(outCards[i])
        
        local pos = cc.p(0,0)
        if self.posState == 1 then 
            local size = img:getBoundingBox()
            if #outCards%2 == 0 then 
                img:setAnchorPoint(0,0)
                pos.x = (i - 1 - #outCards/2) * size.width
            else 
                img:setAnchorPoint(0.5,0)
                pos.x = (i - 1 - 0.5 - (#outCards-1)/2) * size.width 
            end 

        elseif self.posState == 2 then 
            local size = img:getBoundingBox()
            if #outCards%2 == 0 then 
                img:setAnchorPoint(1,0)
                pos.y = (i - 1 - #outCards/2) * size.height
            else 
                img:setAnchorPoint(1,0.5)
                pos.y = (i - 1 - 0.5 - (#outCards-1)/2) * size.height 
            end  

        elseif self.posState == 3 then 
            local size = img:getBoundingBox()
            if #outCards%2 == 0 then 
                img:setAnchorPoint(0,0)
                pos.x = ( i - 1 - #outCards/2) * size.width
            else 
                img:setAnchorPoint(0.5,0)
                pos.x = (i - 1 - 0.5 - (#outCards-1)/2 ) * size.width 
            end   


        elseif self.posState == 4 then 
            local size = img:getBoundingBox()
            if #outCards%2 == 0 then 
                img:setAnchorPoint(1,0)
                pos.y = (i - 1 - #outCards/2) * size.height
            else 
                img:setAnchorPoint(1,0.5)
                pos.y = (i - 1 - 0.5 - (#outCards-1)/2) * size.height 
            end  
        end 
        node:addChild(img)
        img:setPosition(pos)
        img:setLocalZOrder(#outCards-i+1)
    end 

    self:recreateAllCards(tempHandCards)

    local delayActionEnabled = true
    local evtNode = display.newNode()
        :addTo(self)
    
    
    local exChangeCardShowTime = 1
    if g_gameGlobal:getIsPlayingGameLog() then
        exChangeCardShowTime = 2
    end
    
    performWithDelay(self,function()
        if not delayActionEnabled then
            return
        end
        
        if not tolua.isnull(evtNode) then
            evtNode:removeSelf()
        end
        
        node:removeSelf()
        for k, v in ipairs(inCards or {}) do 
            table.insert(tempHandCards,v)
        end 
        self:playHuanCardAction(tempHandCards,inCards,callback)
    end, exChangeCardShowTime)
    
    evtNode:addChild(eventObj.new(eventType.GAME_LOG_WILL_PLAY_NEW_OP, function (evt, msg)
        delayActionEnabled = false
        
        for k, v in ipairs(inCards or {}) do 
            
            self:addNewCard(v)
        end
        
        if not tolua.isnull(node) then
            node:removeSelf()
        end
        
        evtNode:removeSelf()
    end))
end 

-- 换三张
function TablePlayerBase:exchangeCardImmediate(outCards, inCards, callback)
    
    if not self.inhandCards then 
        if callback then 
            callback()
        end 
        return 
    end 
    
    for k, v in ipairs(outCards or {}) do 
        
        self:removeOneCard(v)
    end
    
    for k, v in ipairs(inCards or {}) do
        if v and v ~= 0 then
            self:addNewCard(v)
        end
    end
    
    if callback then 
        callback()
    end 
end 

-- 回放时换张时调用
function TablePlayerBase:exchangeCardReverz(outCards, inCards, _callback)
    -- g_gameGlobal:setIsPlayingGameLog(true)
    local handCards = {}
    for k, v in ipairs(self.inhandCards or{}) do 
        local value = v:getTag()
        table.insert(handCards, value)
    end 
    
    local callback = _callback
    
    if next(handCards) == nil then 
        if callback then 
            callback()
        end 
        return 
    end 
    
    for k, v in ipairs(inCards or {}) do 
        
        self:removeOneCard(v)
    end
    
    for k, v in ipairs(outCards or {}) do
        if v and v ~= 0 then
            self:addNewCard(v)
        end
    end
    
    self:repositionAllCards()
    
    if callback then 
        callback()
    end 
end 


function TablePlayerBase:isWatchHandCardCreated()
    return self.inhandCards and #self.inhandCards > 0
end

-- 打牌特效 道具特效
function TablePlayerBase:playPengGangFx(position, fxBaseId)
    local animNode = nil
    
    if fxInfo then
        -- 动画特效
        if fxInfo.animSrc then
            animNode = g_gameGlobal:getSkeletonAnim(fxInfo.animSrc, fxInfo.animName or "animation1", false, function ()
                performWithDelay(self.fxNode, function ()
                    if not tolua.isnull(animNode) then
                        animNode:removeFromParent()
                    end
                end, 0)
            end)
            self.fxNode:addChild(animNode)
            animNode:setPosition(position or cc.p(0, 0))
        end
    end
end

return TablePlayerBase�=