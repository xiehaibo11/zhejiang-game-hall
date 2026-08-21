local tablePlayerBase = import(".TablePlayerBase")
local TablePlayerMy = class("TablePlayerMy", tablePlayerBase)
local netObj,eventObj = unpack(require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msg_obj"))


--自家位置
local MYSELF_TABLE_HAND_CARD_START_X              =   g_gameGlobal:getFixPosX(690) - 650           --手牌起始x位置
local MYSELF_TABLE_HAND_CARD_LOG_START_X          =   g_gameGlobal:getFixPosX(690) - 600 --播放战绩手牌起始x位置
local MYSELF_TABLE_HAND_CARD_START_Y              =   g_gameGlobal:getFixPosY(53)         --手牌起始y位置
local MYSELF_LAYDOWN_CARD_START_X         =   g_gameGlobal:getFixPosX(690)-660     --倒牌起始X位置
local MYSELF_LAYDOWN_CARD_WIDTH                   =   54         --碰牌,吃牌宽度
local MYSELF_LAYDOWN_CARD_HEIGHT                  =   80         --碰牌,吃牌高度
local MYSELF_LAYDOWN_CARD_JIANGE_WIDTH            =   20         --碰牌间隔
local MYSELF_LAYDOWN_HANDCARD_DISTANCE            =   15         --倒牌和手牌之间间隔
local MYSELF_TABLE_CARD_WIDTH                     =   74         --每张手牌的宽度
local MYSELF_TABLE_CHU_CARD_FIRST_X               =   g_gameGlobal:getFixPosX(418)        --出牌的初始x位置
local MYSELF_TABLE_CHU_CARD_2PEOPLE_FIRST_X       =   g_gameGlobal:getFixPosX(180)        --2个人出牌的初始x位置
local MYSELF_TABLE_CHU_CARD_FIRST_Y               =   g_gameGlobal:getFixPosY(273)        --出牌的初始y位置
local MYSELF_TABLE_CHU_CARD_WIDTH                 =   45         --出牌的宽度
local MYSELF_TABLE_CHU_CARD_HEIGHT                =   52         --出牌的高度
local MYSELF_TABLE_MOST_RIGHT_CARD_DISTANCE       =   25     --手牌最后一张跟新摸起来牌中间的距离
local MYSELF_PENG_CARD_WIDTH                      =   52
local MYSELF_BLOCK_SCALE                          =   12
local MYSELF_MENU_POSITION_Y                      =   g_gameGlobal:getFixPosX(200)
local MYSELF_MENU_POSITION_END_X                  =   g_gameGlobal:getFixPosX(950)    --吃碰杠按钮起始位置
local MYSELF_MENU_OPER_SPRITE_SCALE               =   1
local MYSELF_BUHUA_START_X                            =   g_gameGlobal:getFixPosX(980)
local MYSELF_BUHUA_START_Y                            =   g_gameGlobal:getFixPosY(150)

function TablePlayerMy:ctor()
    TablePlayerMy.super.ctor(self)
    self.huCardList = {}
    self.curOperationState = 0
    self.waitPlayerMultiGangSelect = false
    self.multiChiTable = {}          --存放多个吃碰杠的对象，比如3万碰，就有两个3万
    self.multiChiPengBtnTable = {}   --存放显示多个吃碰杠背景，背景为按钮
    self.chiCardValue = 0
    self.nowMovingCard = nil
    self.operationMenuVisible = false
    self.pengCardValue = 0
    -- self.huaCards = {}

    self.couldDaLaizi = false       --是否可以打出癞子

    self.handCardStartPosX = MYSELF_TABLE_HAND_CARD_START_X
    self.handCardStartPosY = MYSELF_TABLE_HAND_CARD_START_Y
    self.laydownCardStartPosX = MYSELF_LAYDOWN_CARD_START_X
    self.laydownCardStartPosY = MYSELF_TABLE_HAND_CARD_START_Y

    self:regEvent()


end

function TablePlayerMy:regEvent()

    
    self:addChild(eventObj.new("resetHandCard", function (event, msg)        
        if self.resetHandCard then 
            self:resetHandCard()
        end
        
    end))

    self:addChild(eventObj.new("cancelTuoguan", function (event, msg)
        if self.cancelTuoguan then 
            self:cancelTuoguan()
        end  
    end))

end


function TablePlayerMy:init(sex, maxNum)
    self.posState = 1
    TablePlayerMy.super.init(self , sex, maxNum)

    -- self.hulistIcon = display.newSprite("#game/hulistIcon.png"):move(280-30, 175+41):addTo(self,101)
    -- :setVisible(false)

    -- 胡牌提示
    self.hulistIcon =  ccui.ImageView:create("MatchAH/".."game/hulistIcon.png", ccui.TextureResType.plistType)
    :move( g_gameGlobal:getFixPosX(130), 175):addTo(self,101):anchor(0,0.5)
    :setScale9Enabled(true)
    :setCapInsets(cc.rect(70,30,10,10)):hide()

    self.huCardBg = self.hulistIcon


    -- 过按钮
    self.guoBtn = ccui.Button:create("MatchAH/".."game/cancel_bt.png","","", ccui.TextureResType.plistType) 
    :move(MYSELF_MENU_POSITION_END_X, MYSELF_MENU_POSITION_Y)
    :setScale(MYSELF_MENU_OPER_SPRITE_SCALE)
    :addTo(self, 101)
    :setTouchEnabled(true)
    :onClick(handler(self, self.cancelSelectionOperation))
    :setVisible(false)

    -- g_gameGlobal:setGameBtnAni( self.guoBtn , "lv" ,109/165 )

    -- 吃按钮
    self.chiBtn = ccui.Button:create("MatchAH/".."game/chi.png","","", ccui.TextureResType.plistType) 
    :move(MYSELF_MENU_POSITION_END_X - g_gameConstant.BUTTON_X, MYSELF_MENU_POSITION_Y)
    :addTo(self, 101)
    :setTouchEnabled(true)
    :onClick(handler(self, self.chiClick))
    :setVisible(false)
    -- g_gameGlobal:setGameBtnAni( self.chiBtn , "huang" )

    -- 铜陵架按钮
    self.jiaBtn = ccui.Button:create("MatchAH/".."game/jia.png","","", ccui.TextureResType.plistType) 
    :move(MYSELF_MENU_POSITION_END_X - g_gameConstant.BUTTON_X, MYSELF_MENU_POSITION_Y)
    :addTo(self, 101)
    :setTouchEnabled(true)
    :onClick(handler(self, self.jiaClick))
    :setVisible(false)
    -- g_gameGlobal:setGameBtnAni( self.jiaBtn , "huang" )

    -- 跑风按钮
    self.paofengBtn = ccui.Button:create("game/paofeng1.png","","", ccui.TextureResType.localType) 
    :move(MYSELF_MENU_POSITION_END_X+50, MYSELF_MENU_POSITION_Y)
    :addTo(self, 101)
    :setTouchEnabled(true)
    :onClick(handler(self, self.cancelSelectionOperation))
    :setVisible(false)

    if g_gameGlobal:isPaofengMj() then 
        self.paofengBtn:setPosition(MYSELF_MENU_POSITION_END_X - 2*g_gameConstant.BUTTON_X, MYSELF_MENU_POSITION_Y)
        self.paofengBtn:onClick(handler(self, self.paofengOperation))
    end
    
    -- 新铜陵跑风按钮
    self.tonglingpaofengBtn = ccui.Button:create("game/paofeng.png","","", ccui.TextureResType.localType) 
    :move(MYSELF_MENU_POSITION_END_X+50, MYSELF_MENU_POSITION_Y)
    :addTo(self, 101)
    :setTouchEnabled(true)
    :onClick(handler(self, self.tongLingPoafengClick))
    :setVisible(false)

    -- g_gameGlobal:setGameBtnAni( self.paofengBtn , "huang" )

    -- 碰按钮
    self.pengBtn = ccui.Button:create("MatchAH/".."game/peng_bt.png","","", ccui.TextureResType.plistType) 
    :move(MYSELF_MENU_POSITION_END_X - 2 * g_gameConstant.BUTTON_X, MYSELF_MENU_POSITION_Y)
    :addTo(self, 101)
    :setTouchEnabled(true)
    :onClick(handler(self, self.pengClick))
    :setVisible(false)

    -- g_gameGlobal:setGameBtnAni( self.pengBtn , "huang" )

    -- 杠按钮
    self.gangBtn = ccui.Button:create("MatchAH/".."game/gang_bt.png","","", ccui.TextureResType.plistType) 
    :move(MYSELF_MENU_POSITION_END_X - 3 * g_gameConstant.BUTTON_X, MYSELF_MENU_POSITION_Y)
    :addTo(self, 101)
    :onClick(handler(self, self.gangClick))
    :setTouchEnabled(true)
    :setVisible(false)
    -- g_gameGlobal:setGameBtnAni( self.gangBtn , "huang" )

    -- 胡按钮
    self.huBtn = ccui.Button:create("MatchAH/".."game/hu.png","","", ccui.TextureResType.plistType) 
    :move(MYSELF_MENU_POSITION_END_X - 4 * g_gameConstant.BUTTON_X, MYSELF_MENU_POSITION_Y)
    :addTo(self, 101)
    :onClick(handler(self, self.huClick))
    :setTouchEnabled(true)
    :setVisible(false)


    -- 听按钮
    -- self.tingBtn = ccui.Button:create("game/ting.png","","", ccui.TextureResType.localType) 
    -- :move(MYSELF_MENU_POSITION_END_X - 5 * g_gameConstant.BUTTON_X, MYSELF_MENU_POSITION_Y)
    -- :addTo(self, 101)
    -- :onClick(handler(self, self.tingClick1))
    -- :setTouchEnabled(true)
    -- :setVisible(false)



    -- g_gameGlobal:setGameBtnAni( self.huBtn , "hong" )
    -- 托管背景
    self.touGuanBg = display.newLayer({r=0,g=0,b=0,a=100})
    :setContentSize(display.width, 145)
    :move(0, -10)
    :setVisible(false)
    :addTo(self, 101)

    --取消托管
    self.tuoGuanCancel = ccui.Button:create("MatchAH/".."game/qxtuoguan.png","","", ccui.TextureResType.plistType)
    :move(self.touGuanBg:getContentSize().width/2, self.touGuanBg:getContentSize().height/2)
    :addTo(self.touGuanBg,101)
    :setScale(0.8)
    :setTouchEnabled(true)
    :onClick(handler(self, self.sendCancelTuoGuanMsg))

    if g_gameGlobal:getVipTableID() and g_gameGlobal:getVipTableID() ~= 0 then 
        self.tuoGuanCancel:setPositionY(self.touGuanBg:getContentSize().height/2 + 20)
        g_gameGlobal:newLabel({text = "托管代打只会摸打或胡牌，不做吃碰杠等操作" , fontColor = display.COLOR_WHITE , fontSize = 25})
        :addTo(self.touGuanBg):setPosition(self.touGuanBg:getContentSize().width/2 , self.touGuanBg:getContentSize().height/2 - 30)
    end

    -- 设置触摸事件
    local listener = cc.EventListenerTouchOneByOne:create()
    listener:setSwallowTouches(true)
    listener:registerScriptHandler(handler(self,self.onTouchBegan),cc.Handler.EVENT_TOUCH_BEGAN )
    listener:registerScriptHandler(handler(self,self.onTouchMoved),cc.Handler.EVENT_TOUCH_MOVED )
    listener:registerScriptHandler(handler(self,self.onTouchEnded),cc.Handler.EVENT_TOUCH_ENDED )
    local eventDispatcher = self:getEventDispatcher()
    eventDispatcher:addEventListenerWithSceneGraphPriority(listener, self)
    self._touchListener = listener
end

function TablePlayerMy:onExit()
    if self._touchListener then
        self:getEventDispatcher():removeEventListener(self._touchListener)
        self._touchListener = nil
    end
end

--初始化牌面值
function TablePlayerMy:initPaiMianValue(msg)
    for i = 1, #msg.mycards do
        local cardValue = msg.mycards[i]
        self:addNewCard(cardValue)
    end

    self:repositionAllCards()

    -- 根据手牌的高度设置托管背景的高度
    if #self.inhandCards > 0 then
        local height = self.inhandCards[1]:getBoundingBox().height
        self.touGuanBg:setContentSize(display.width, height + 10)
    end
end



function TablePlayerMy:getXCardNumInHand( cards , value )

    if value == 0 or next(cards) == nil  then 
        return 0
    end

    local  v = bit._and(value,0xf)
    if v >  9 then 
        return 0
    end

    local num = 0
    for i,bb in ipairs(cards) do
        if bb == value then 
            num = num + 1
        end
    end
    return num

end

function TablePlayerMy:is_hu_13_lan( cds , handCards , downCards )


    local b13lan = false
    local laizi = g_gameGlobal:getLaizi()

    if g_gameGlobal:isPaofengMj() or g_gameGlobal:isAnQing() or g_gameGlobal:isLiuAn() or g_gameGlobal:isDongZhi() or
        g_gameGlobal:isTongChengZiMo() or g_gameGlobal:isQianShan() or g_gameGlobal:isSheXian() or g_gameGlobal:isZongYang() then 
        b13lan = true
    end

    if not b13lan then 
        return false
    end

    if #downCards > 0 then 
        return false
    end


    local hongzhongpei = false
    if g_gameGlobal:isLiuAn() or g_gameGlobal:isTongChengZiMo() or g_gameGlobal:isDongZhi() or 
        g_gameGlobal:isQianShan() or g_gameGlobal:isTongLing() or g_gameGlobal:isTongLingNew() or g_gameGlobal:isPaofengMj() then 
        hongzhongpei = true
    end

    if g_gameGlobal:isLiuAn() and laizi > 0x30 then 
        hongzhongpei = false
    end

    for i,c1 in ipairs(handCards) do
        if c1 ~= laizi then 
            if hongzhongpei and c1 == 0x35 then 
                if self:getXCardNumInHand(handCards,c1) > 2 then 
                    return false
                end
            elseif self:getXCardNumInHand(handCards,c1) then 
                return false
            end

            if c1 <= 0x30 then 
                for i=-2,2 do
                    if i ~= 0 then 
                        local d = c1 + i
                        if d ~= laizi and self:getXCardNumInHand(handCards,d) > 0 then 
                            return false
                        end
                    end
                end
            end

        end
    end


    local singleZiNum = 0

    for i = 0x31,0x37 do
        local num = self:getXCardNumInHand(i)
        if num == 1 then 
            singleZiNum = singleZiNum + 1
        elseif num == 0 then 
            table.insert(cds , i)
        end
    end

    local numLiazi = self:getXCardNumInHand(handCards,laizi)
    if singleZiNum + numLiazi < 4 then 
        cds = {}
        return false
    end

    for i=1,9 do
        table.insert( cds , i )
    end

    for i=0x11,0x19 do
        table.insert( cds , i )
    end

    for i=0x21,0x29 do
        table.insert( cds , i )
    end

    for i=1,7 do
        local ib = bit._or(g_gameConstant.MAHJONG_CODE_COLOR_ZI,i)  
        local b = bit._and( ib , 0xff)

        local is_bu_hua = false
        if g_gameGlobal:isPaofengMj() then 
            if g_gameGlobal:isHua_PaoFeng(b) then 
                is_bu_hua = true
            end

        elseif  (b==0x31 or b>=0x35) and (g_gameGlobal:isAnQing() or g_gameGlobal:isHuaiNing() or g_gameGlobal:isTaiHu() or g_gameGlobal:isWangJiang() or g_gameGlobal:isYueXi()) then
            is_bu_hua=true;
        elseif (b==0x36 or b>0x40) and g_gameGlobal:hasWanfaRule(g_gameConstant.GAME_PLAY_CHI_ZHOU) then
            is_bu_hua=true;
        elseif (b==0x31 or b>=0x35) and g_gameGlobal:hasWanfaRule(g_gameConstant.GAME_PLAY_BANG_BU_DAI_HUA) then
            is_bu_hua=true;
        elseif  g_gameGlobal:hasWanfaRule(g_gameConstant.GAME_PLAY_HUAI_YUAN) then
            if b>=0x35  then
                is_bu_hua=true;
            elseif b==0x31 and g_gameGlobal:hasWanfaRule(g_gameConstant.GAME_PLAY_DONG_FENG_HUA) then
                is_bu_hua=true;
            end
        elseif g_gameGlobal:isDongZhi() then
            if b>=0x35  then
                is_bu_hua=true
            end
        elseif g_gameGlobal:isTongCheng() then
            local fancard=g_gameGlobal:getFanCard();
            if b==0x36 or(b==0x35 and fancard==0x35) then
                is_bu_hua=true;
            end
        elseif g_gameGlobal:isQianShan() then
            local laizi2=g_gameGlobal:getLaiZi();  --//花牌是赖子
            --//潜山玩法,发财、白板为花牌
            if b==0x36 or b == 0x37 or(b==0x35 and laizi2>=0x36) then
                is_bu_hua=true;
            end
        elseif g_gameGlobal:isZongYang() then
            local laizi2=g_gameGlobal:getLaiZi(); --//花牌是赖子
            if b == 0x36 or(b==0x35 and laizi2==0x36) then
                is_bu_hua=true;
            end
        elseif g_gameGlobal:isSuSong() and pl.isPiaoHua()==false and b>=0x35 then
            is_bu_hua=true;
        end
     
        if not is_bu_hua then 
            cds.add(b);
        end

    end
    return true
end

function TablePlayerMy:getPlayerHuCardList()

    local hulist = {}

    local laizi = g_gameGlobal:getLaizi()
    local supportLaizi=false
    local numLaizi = 0
    local handCards = {}
    local laizi = g_gameGlobal:getLaizi()

    if g_gameGlobal:isPaofengMj() or g_gameGlobal:isTongLing() or g_gameGlobal:isNewTongLing() or
        g_gameGlobal:isLiuAn() or g_gameGlobal:isHuangShan() or g_gameGlobal:isDongZhi() or 
        g_gameGlobal:isTongChengZiMo() or g_gameGlobal:isQianShan() or g_gameGlobal:isXuanChengHongZhong() or 
        g_gameGlobal:isXiaGang() or g_gameGlobal:isSheXian() or g_gameGlobal:isZongYang() or g_gameGlobal:isHongZhong() then 
        supportLaizi = true
    end


    if supportLaizi then 
        numLaizi = self:getXCardNumInHand( handCards , laizi )
    end

    local cds = {}

    local b13lan = true
    if not  self:is_hu_13_lan(cds , handCards  , downCards) then 
        b13lan = false


    end
    


    return hulist

end


--跑风麻将 跑风会丢一张 癞子牌
function TablePlayerMy:paofengOperation()

    if self.paofengType then 
        if self.paofengType == 1 then 
            local handCards = self:getCardsInhand()
            for i,v in ipairs(handCards) do
                local cardValue = v:getTag()
                if g_gameGlobal:isLaiZi(cardValue) then 
                    self.touchObj = v
                    break
                end
            end
            self:hideOperationMenu()
            self:sendChuPaiOrder()

        else
            self.touchObj = self.newCard
            self:hideOperationMenu()
            self:sendChuPaiOrder()
        end
        
    end
    
end

function TablePlayerMy:addChuCard(cardValue, bNeedMarker , notNeedSfx)

    -- self:showHuCardList()

    if g_gameGlobal:isHua(cardValue, self.player_piaoHua ) then 
        return 
    end

    TablePlayerMy.super.addChuCard(self , cardValue, bNeedMarker , notNeedSfx)
    
    local cardType = bit._and(cardValue*(2^(-4)), 0x3)
    local cValue = bit._and(cardValue, 0xf)

    local chuCardLineNum = g_gameConstant.CHU_CARD_LINE_NUM 
    local maxPlayerNum = g_gameGlobal:getMaxPlayerNum()
    local chuNum = #self.chuCards
    
    local imageView = self:getMyAndOppLaydownCard(cardValue)
    imageView:setScale(0.8)
    imageView.cardValue = cardValue
    local x = MYSELF_TABLE_CHU_CARD_FIRST_X + math.mod(chuNum, chuCardLineNum) * MYSELF_TABLE_CHU_CARD_WIDTH
    -- 如果是2个人对局，那么每行就比平常多显示9张牌
    if maxPlayerNum == 2 then
        chuCardLineNum = chuCardLineNum + 11
        x = MYSELF_TABLE_CHU_CARD_2PEOPLE_FIRST_X + math.mod(chuNum, chuCardLineNum) * MYSELF_TABLE_CHU_CARD_WIDTH
    end

    

    local y = MYSELF_TABLE_CHU_CARD_FIRST_Y - math.floor(chuNum/chuCardLineNum) * MYSELF_TABLE_CHU_CARD_HEIGHT
    imageView:move(x, y)
    
    if g_gameGlobal:isLaiZi(cardValue) then
        imageView:setColor(display.CARD_GREEN)
    else
        imageView:setColor(display.COLOR_WHITE)
    end
    table.insert(self.chuCards, imageView)

    local zOrder = 0
    if math.floor(chuNum/chuCardLineNum) > 0 then
        zOrder = 1
    end
    self:addChild(imageView, zOrder)

    --风牌，报听后黑色遮罩 
    if g_gameGlobal:isFengZui(cardValue) and self:getTing() and not notNeedSfx then
        imageView:setColor(display.COLOR_GRAY)
    end

    if bNeedMarker then
        self:showChuCardMarker(imageView)
    end
end

function TablePlayerMy:chiClick()
    local v1 = bit._and(self.chiCardValue, 0xff)
    local v2 = bit._and(self.chiCardValue * (2^(-8)), 0xff)
    local v3 = bit._and(self.chiCardValue * (2^(-16)), 0xff)
    local v4 = bit._and(self.chiCardValue * (2^(-24)), 0xff)

    local count = 0
    if v1 > 0 then
        count = count + 1
    end
    if v2 > 0 then
        count = count + 1
    end
    if v3 > 0 then
        count = count + 1
    end
    if v4 > 0 then
        count = count + 1
    end

    if count > 2 then
        if #self.multiChiPengBtnTable > 0 then
            for i, v in pairs(self.multiChiPengBtnTable) do
                v:setVisible(true)
            end
            return
        end
    end

    local target = 0
    local num = 0

    if v1 > 0 then
        target = v1
        num = num + 1
    end
    if v2 > 0 then
        target = bit._or(target, v2*(2^(num*8)))
        num = num + 1
    end
    if v3 > 0 and num < 2 then
        target = bit._or(target, v3*(2^(num*8)))
        num = num + 1
    end
    if v4 > 0 and num < 2 then
        target = bit._or(target, v4*(2^(num*8)))
        num = num + 1
    end

    local playerTableOperationMsg = {}
    playerTableOperationMsg.operation = g_gameConstant.MAHJONG_OPERTAION_CHI
    playerTableOperationMsg.card_value = target
    playerTableOperationMsg.player_table_pos = g_gameGlobal:getMyTablePos()
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)
    
    self.cantChuList = nil
    self:hideOperationMenu()
end

function TablePlayerMy:pengClick(event)
    local playerTableOperationMsg = {}
    playerTableOperationMsg.operation = g_gameConstant.MAHJONG_OPERTAION_PENG
    playerTableOperationMsg.card_value = self.pengCardValue
    playerTableOperationMsg.player_table_pos = g_gameGlobal:getMyTablePos()
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)

    self:clearHuCardList()
    self.operationMenuVisible = g_gameConstant.MAHJONG_OPERTAION_NONE
    self:hideOperationMenu()
    self.cantChuList = nil
end

function TablePlayerMy:gangClick(event)
    local peng_cd = self.pengCardValue
    local cd1 = bit._and(self.pengCardValue, 0xff)
    local cd2 = bit._and(self.pengCardValue*(2^(-8)), 0xff)
    local cd3 = bit._and(self.pengCardValue*(2^(-16)), 0xff)
    local cd4 = bit._and(self.pengCardValue*(2^(-24)), 0xff)

    self:clearHuCardList()
    self.operationMenuVisible = g_gameConstant.MAHJONG_OPERTAION_NONE
    self:hideOperationMenu()
    self.cantChuList = nil


    if self.newCard then
        self:insertNewCard(self.newCard)
        self.newCard = nil
        self:repositionAllCards()
    end

    if (cd1 ~= 0) and (cd2 == 0) and (cd3 == 0) and (cd4 == 0) then
        self:playerClickGangChoiceCard(cd1)
    else
        for i = 0, 3 do
            local cdx = bit._and(peng_cd*(2^(-8*i)), 0xff)
            if cdx == 0 then
                break
            end

            local v1 = bit._or(cdx, cdx * (2^8))
            local v2 = bit._or(v1, cdx * (2^16))

            local multiGangBg = ccui.ImageView:create("MatchAH/".."game/multiGang.png", ccui.TextureResType.plistType)
            :move(240 + 280*i, g_gameGlobal:getFixPosY(330))
            :setTag(v2)
            :setTouchEnabled(true)
            :addTo(self,5)
            :onClick(handler(self, self.chePengTipClick))
            :setScale9Enabled(true)
            :setCapInsets(cc.rect(20,20,5,5))
            :setContentSize(260, 113)

            table.insert(self.multiChiPengBtnTable, multiGangBg)

            for j = 1, 4 do
                local obj = self:getNormalCard(cdx)
                :anchor(0, 0.5):setScale(0.8)
                :addTo(multiGangBg)

                local width = obj:getBoundingBox().width
                local jiange = (multiGangBg:getContentSize().width - width*4) / 2
                obj:move(jiange + (j-1)*width, multiGangBg:getContentSize().height/2)
            end
            self.pengCardValue = peng_cd
        end
    end
end
function TablePlayerMy:huClick(target)

    local playerTableOperationMsg = {}
    playerTableOperationMsg.operation = g_gameConstant.MAHJONG_OPERTAION_HU
    playerTableOperationMsg.player_table_pos = g_gameGlobal:getMyTablePos()
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)

    self:hideOperationMenu()
    self.cantChuList = nil
end

function TablePlayerMy:setCurOperationState(state)
    self.curOperationState = state
end


function TablePlayerMy:getRemainCount(cardValue)

    local gameInstance = require("newgold.MatchGames.PDK.GameBase"):getInstance()
    if gameInstance then 
        local onTableCount = gameInstance:getAllPlayerCardsOnTableCount(cardValue , true)
        local count1 = self:getCardInhandCount(cardValue)

        local cardCount = 4 
        

        if cardValue == 0x35  and g_gameGlobal:isZZMaJiang() and g_gameGlobal:hasWanfa2(g_gameConstant.GR2_ZZMJ_HONG_ZHONG_8) then 
            cardCount = 8
        end
        
        local count = cardCount - onTableCount - count1
        if g_gameGlobal:isXuanCheng() or g_gameGlobal:isMaAnShan() then 
            local  number = gameInstance:gethucardTableCount(cardValue)
            count = count - number
        end 
        if count > cardCount then count = cardCount end
        if count < 0 then count = 0 end
        return count 
    end
    return 0
end

function TablePlayerMy:refreshHuCardCount(tingList)

    local gameInstance = require("newgold.MatchGames.PDK.GameBase"):getInstance()

    if gameInstance and self.tingList then    

        -- local function sortRule(a,b)
        --     local countA = self:getRemainCount(a)
        --     local countB = self:getRemainCount(b)
        --     return countA > countB
        -- end

        -- table.sort(self.tingList , sortRule)


        local huCardData = {}
        

        for i,card in ipairs(tingList or self.tingList) do
            -- print(i,v)
            local count = self:getRemainCount(card)
            if not huCardData[count] then 
                huCardData[count] = {}
            end
            table.insert(huCardData[count] , card)
        end
        
        local cardIndex = 1

        for i=8,0 , -1 do
            if huCardData[i] then 
                for i,cardValue in ipairs(huCardData[i]) do

                    local cardView = self.huCardList[cardIndex]
                    
                    if not tolua.isnull(cardView) then 

                        cardIndex = cardIndex + 1

                        cardView.setCardValue(cardValue)

                        if cardView.refreshFlag then cardView.refreshFlag() end

                        local count = self:getRemainCount(cardValue)

                        local label = cardView.label
                        if not tolua.isnull(label) then 
                            label:setString(tostring(count).."张")
                        end
                    end

                end
            end

        end



        -- for i,cardView in ipairs(self.huCardList) do

        --     if not tolua.isnull(cardView) then 

        --         local cardValue  = self.tingList[i]

        --         cardView.setCardValue(cardValue)

        --         if cardView.refreshFlag then cardView.refreshFlag() end

        --         local count = self:getRemainCount(cardValue)

        --         local label = cardView.label
        --         if not tolua.isnull(label) then 
        --             label:setString(tostring(count).."张")
        --         end
        --     end

        -- end
    end

end


function TablePlayerMy:clearHuCardList()
    self.tingList = {}
    self.huCardList = {}
    self.hulistIcon:hide()
    self.huCardBg:removeAllChildren()
end


function TablePlayerMy:showPrompCardList(cardObj)
    local cardValue = cardObj:getTag()

    local hulist = {}
    if self.prompTingList then 
        for i,v in ipairs(self.prompTingList) do
            if cardValue == v.tingCard then 
                hulist = v.tingList
                break
            end
        end
    end
    self:showHuCardList(hulist,self.prompTingList  , true )
end


function TablePlayerMy:showHuCardList(tingList  ,prompTingList  , fromPromp )

    
    self:clearHuCardList()
    
    tingList = tingList or {}

    -- tingList = {1,2,3,4,5,6,1,2,3,4}
    if not fromPromp then 
        self.tingList = tingList or {}
    end
    
    self.prompTingList = prompTingList or {}

    if #tingList > 25 and false then 
        self.huCardBg:setContentSize( 210 , self.huCardBg:getContentSize().height )

        local txt = ccui.Text:create()
        txt:setString( "任意胡牌")
        txt:setFontName("fonts/huakangyuanti.ttf")
        txt:setFontSize(34)
        txt:setColor( cc.c3b(255,255,255) )
        txt:setPosition(self.huCardBg:getContentSize().width/2 + 25,self.huCardBg:getContentSize().height/2):addTo(self.huCardBg):anchor(0.5, 0.5)
    else

        self.huCardBg:setContentSize( 80 + (#tingList > 20 and 21 or #tingList)* 40 , self.huCardBg:getContentSize().height )

        for i, v in pairs(tingList) do

            if i > 20 then 

                local txt = ccui.Text:create()
                txt:setString( ".....")
                txt:setFontName("fonts/huakangyuanti.ttf")
                txt:setFontSize(40)
                txt:setColor( cc.c3b(255,255,255) )
                txt:anchor(0.5,0.5)
                txt:move(100 + (i-1)*39, self.huCardBg:getContentSize().height/2 + 10)
                self.huCardBg:add(txt , 100)
                break;
            else

                local imageView = self:getNormalCard(v)
                imageView:setScale(0.45)
                imageView:move(30 + 40 + (i-1)*39, 15)
                imageView:anchor(0,0)

                local txt = ccui.Text:create()
                txt:setString( "0张")
                txt:setFontName("fonts/huakangyuanti.ttf")
                txt:setFontSize(40)
                txt:setColor( cc.c3b(255,255,255) )
                txt:setPosition(imageView:getContentSize().width /2,imageView:getContentSize().height + 5):addTo(imageView):anchor(0.5, 0)
                
                self.huCardBg:add(imageView , 100)
                imageView.label = txt
                table.insert(self.huCardList, imageView)
            end

        
        end
        self:refreshHuCardCount(tingList)
    end

    
    if self.hulistIcon then
        if #tingList > 0 then
            self.hulistIcon:setVisible(true)
        else
            self.hulistIcon:setVisible(false)
        end
    end
end

function TablePlayerMy:refreshHuCardFrameColor()
    for i,cardview in ipairs(self.huCardList) do
        if cardview and cardview.refreshFrameColor then 
            cardview.refreshFrameColor()
        end
    end
end
function TablePlayerMy:playRenbaoAni()
    self.couldDaLaizi = false
    TablePlayerMy.super.playRenbaoAni(self)
end


function TablePlayerMy:overTimeAutoChu(cardValue)
    self.nowMovingCard = nil

    local bFind = false
    if self.newCard then
        if cardValue == self.newCard:getTag() then
            bFind = true
        end
    end

    if not bFind then
        if self.newCard then
            self:insertNewCard(self.newCard)
            self.newCard = nil
        end

        for i, v in pairs(self.inhandCards) do
            local cValue = v:getTag()
            if cValue == cardValue then
                self.newCard = v
                table.remove(self.inhandCards, i)
                break
            end
        end
    end

    if self.touchObjMoved then
        for i, v in pairs(self.inhandCards) do
            if v ==  self.touchObj then
                v:move(self.touchObjOriginPos.x, g_gameConstant.MY_CARD_Y)
                break
            end
        end
    end
    self:autoChu()
end
function TablePlayerMy:autoChu()
    if not self.newCard then
        return 
    end

    self.curOperationState = g_gameConstant.MAHJONG_OPERTAION_NONE

    local value = self.newCard:getTag()

    if not g_gameGlobal:isHua(value) then 
        NG.soundManager:playMatchEffect(g_gameGlobal:getEffectFileForCardValue( value, self.sex))
    end

    local pos = cc.p(display.cx - 50 ,display.height/3 - 15 )
    pos = self:convertToNodeSpace(pos)

    transition.moveTo(self.newCard, {x = pos.x, y =  pos.y, time = 0.02,
            onComplete = handler(self, self.repositionAllCards)})

    self:removeChuCard()

    self.chuPai = self.newCard

    self:addChuCard(value, true)
    self.newCard = nil

    self:hideOperationMenu()
end


function TablePlayerMy:moCard(cardValue , operation)
    if (cardValue == 0) or self.newCard then
        return 
    end

    local canHu = false
    if operation and bit._and(operation, g_gameConstant.MAHJONG_OPERTAION_HU) == g_gameConstant.MAHJONG_OPERTAION_HU then
        canHu = true
    end

    self.newCard = self:getNormalCard(cardValue)
    :setTag(cardValue)
    :addTo(self, 2)
    :setScale(g_gameConstant.MYSELF_BLOCK_SCALE)


    -- 判断是否是癞子
    if g_gameGlobal:isLaiZi(cardValue) then
        
        -- if canHu and g_gameGlobal:isPaofengMj() then 
        --     self.newCard.canChu = true
        -- end
        
        self.newCard:setColor(display.CARD_GREEN)
    end

    if g_gameGlobal:isNewTongLing() then
        if cardValue == 0x35 then
            local  laizi = g_gameGlobal:getLaizi()
            local cardType = bit._and(  bit._rshift(laizi,4)  , 0x7)
            if laizi and laizi > 0 and cardType < 3 then
                self.newCard.HongzhongLaizi(laizi)
            end
        end
    end

    local posx = self.handCardStartPosX
    local height = self.newCard:getBoundingBox().height

    local handCardWidth = self.newCard:getBoundingBox().width

    local handsNum = #self.inhandCards
    -- local handCardWidth = 0
    -- if #self.inhandCards > 0 then
    --     handCardWidth = self.inhandCards[1]:getBoundingBox().width
    -- end
    self.newCard:move(posx + handsNum*handCardWidth  + MYSELF_TABLE_MOST_RIGHT_CARD_DISTANCE,
                        height/2-4)


    
    local bbu_hua= g_gameGlobal:isAutobBHua(cardValue,self.player_piaoHua)
    if bbu_hua then
        --防止客户端误操作，把用户操作清理掉
        self.curOperationState =  g_gameConstant.MAHJONG_OPERTAION_NONE

        performWithDelay( self , function() 
            self:playBuhuaAni()

            self.touchObj = self.newCard
            self:sendChuPaiOrder()
        end  , 0.07 )

    end
    
    return bbu_hua



end

-- 吃碰杠时弹出是哪张牌可以吃碰杠
function TablePlayerMy:showCardOperateTip(cardValue)
    for i = 1, 4 do
        local c1 = bit._and(cardValue*(2^(-8*(i-1))), 0xff)
        if c1 ~= 0 then
            for j, v in pairs(self.inhandCards) do
                local pos = cc.p(v:getPosition())
                local value = v:getTag()

                if (value == c1) and (pos.y < g_gameConstant.MY_CARD_Y + 1) then
                    pos.y = g_gameConstant.MY_CARD_Y + 16
                    v:move(pos)
                    break
                end
            end
        end
        if self.newCard then
            local pos = cc.p(self.newCard:getPosition())
            local value = self.newCard:getTag()

            if (value == c1) and (pos.y < g_gameConstant.MY_CARD_Y + 1) then
                pos.y = g_gameConstant.MY_CARD_Y + 16
                self.newCard:move(pos)
            end
        end
    end
end

function TablePlayerMy:hideOperationMenu()
    self.chiBtn:setVisible(false)
    self.pengBtn:setVisible(false)
    self.gangBtn:setVisible(false)
    self.huBtn:setVisible(false)
    -- self.tingBtn:setVisible(false)
    self.guoBtn:setVisible(false)
    self.jiaBtn:setVisible(false)
    self.paofengBtn:setVisible(false)
    self.tonglingpaofengBtn:setVisible(false)

    self.operationMenuVisible = false
    self.chiCardValue = 0
    self.pengCardValue = 0

    for i, v in pairs(self.multiChiPengBtnTable) do
        v:removeSelf()
    end
    self.multiChiPengBtnTable = {}
    -- self.multiChiTable里面的节点是上面self.multiChiPengBtnTable节点里，上面删了，下面就没有了，直接清空就行
    self.multiChiTable = {}
end
function TablePlayerMy:chiPengGangNotify(msg)
    if not msg then
        return 
    end

    -- self.operationMenuVisible = true

    self.waitPlayerMultiGangSelect = false

    self.tingOperation = false

    -- 打之前的按钮隐藏
    self:hideOperationMenu()

    self.guoBtn:setVisible(true)

    if g_gameGlobal:isDongZhi() and bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_HU) == g_gameConstant.MAHJONG_OPERTAION_HU 
         and (msg.unused0 == 1 or msg.unused0 == 2) then
        self.paofengBtn:setVisible(true)
        self.guoBtn:setVisible(false)
        self.paofengType = msg.unused0
    end


    local menuNum = 1

    if g_gameGlobal:isPaofengMj() and (msg.unused0 == 1 or msg.unused0 == 2) then
        self.paofengBtn:move(MYSELF_MENU_POSITION_END_X - menuNum * g_gameConstant.BUTTON_X, MYSELF_MENU_POSITION_Y)
        menuNum = menuNum + 1
        self.paofengBtn:setVisible(true)
        self.paofengType = msg.unused0
    end
    
    if g_gameGlobal:isNewTongLing() and msg.unused0 == 1 then
        --新铜陵玩法特殊处理跑风按钮，只在第一次出现的时候显示跑风
        if not self._isChoosePaoFeng then
            self.tonglingpaofengBtn:move(MYSELF_MENU_POSITION_END_X - menuNum * g_gameConstant.BUTTON_X, MYSELF_MENU_POSITION_Y)
            self.tonglingpaofengBtn:setVisible(true)
            menuNum = menuNum + 1
        end
        self.paofengType = msg.unused0
        self.cantChuList = msg.tingList
    end

    -- 吃
    if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_CHI) == g_gameConstant.MAHJONG_OPERTAION_CHI then
        self.chiBtn:setVisible(true)
        self.chiBtn:move(MYSELF_MENU_POSITION_END_X - menuNum * g_gameConstant.BUTTON_X, MYSELF_MENU_POSITION_Y)
        menuNum = menuNum + 1

        self.chiCardValue = msg.chi_card_value
        self:showCardOperateTip(msg.chi_card_value)
    --铜陵架混
    elseif bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_JIA_HUN) == g_gameConstant.MAHJONG_OPERTAION_JIA_HUN then
        self.jiaBtn:setVisible(true)
        self.jiaBtn:move(MYSELF_MENU_POSITION_END_X - menuNum * g_gameConstant.BUTTON_X, MYSELF_MENU_POSITION_Y)
        menuNum = menuNum + 1
    end
    -- 碰
    if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_PENG) == g_gameConstant.MAHJONG_OPERTAION_PENG then
        self.pengBtn:setVisible(true)
        self.pengBtn:move(MYSELF_MENU_POSITION_END_X - menuNum * g_gameConstant.BUTTON_X, MYSELF_MENU_POSITION_Y)
        menuNum = menuNum + 1
        self.pengCardValue = msg.peng_card_value
        self:showCardOperateTip(msg.peng_card_value)
    end
    -- 杠
    if (bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_AN_GANG) == g_gameConstant.MAHJONG_OPERTAION_AN_GANG)  or
       (bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_MING_GANG) == g_gameConstant.MAHJONG_OPERTAION_MING_GANG)  or
       (bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_BU_GANG) == g_gameConstant.MAHJONG_OPERTAION_BU_GANG)  then
        self.gangBtn:setVisible(true)
        self.gangBtn:move(MYSELF_MENU_POSITION_END_X - menuNum * g_gameConstant.BUTTON_X, MYSELF_MENU_POSITION_Y)
        menuNum = menuNum + 1
        self.pengCardValue = msg.peng_card_value
        self:showCardOperateTip(msg.peng_card_value)
    end
    -- 胡
    if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_HU) == g_gameConstant.MAHJONG_OPERTAION_HU then
        self.huBtn:setVisible(true)
        self.huBtn:move(MYSELF_MENU_POSITION_END_X - menuNum * g_gameConstant.BUTTON_X, MYSELF_MENU_POSITION_Y)
        menuNum = menuNum + 1
    end
    


    local baoTingChu = bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_HAS_BAO_TING) == g_gameConstant.MAHJONG_OPERTAION_HAS_BAO_TING 
    if self.isTing and baoTingChu then 
        self.cantChuList = msg.tingList
        self:setCantChuList()
    end

    -- if  bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_TING) == g_gameConstant.MAHJONG_OPERTAION_TING then
        
    --     if not self.isTing then 
    --         self.tingBtn:setVisible(true)
    --         self.tingBtn:move(MYSELF_MENU_POSITION_END_X - menuNum * g_gameConstant.BUTTON_X, MYSELF_MENU_POSITION_Y)
    --         menuNum = menuNum + 1
    --     end

    --     if not msg.notChuPlayer then 
    --         self.cantChuList = msg.tingList
    --         if self.isTing then 
    --             self:setCantChuList()
    --         end
    --     else
    --         self.tingOperation = true
    --     end

    --     if self.isTing and menuNum == 1 then 
    --         self:hideOperationMenu()
    --     end
        
    -- end

    if menuNum > 1 then 
        self.operationMenuVisible = true
    else   
        self:hideOperationMenu()
    end


    self:multiChiPeng(msg.chi_card_value, msg.peng_card_value, msg.target_card, false, msg.chi_flag)
end


function TablePlayerMy:playerClickGangChoiceCard(value)
    local playerTableOperationMsg = {}
    playerTableOperationMsg.operation = g_gameConstant.MAHJONG_OPERTAION_MING_GANG
    playerTableOperationMsg.card_value=bit._and(value, 0xff)
    playerTableOperationMsg.player_table_pos = g_gameGlobal:getMyTablePos()
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)

    -- self:removeOneCard(bit._and(value, 0xff))
    -- self:removeOneCard(bit._and(value, 0xff))
    -- self:removeOneCard(bit._and(value, 0xff))

end

function TablePlayerMy:chePengTipClick(target)
    local cardValue = target:getTag()

    local v1 = bit._and(cardValue, 0xff)
    local v2 = bit._and(cardValue * (2 ^ (-8)), 0xff)
    local v3 = bit._and(cardValue * (2 ^ (-16)), 0xff)

    if v1 == v2 and v2 == v3 then
        self:playerClickGangChoiceCard(v1)
        self:hideOperationMenu()
        return 
    end

    local playerTableOperationMsg = {}
    if v1 == v2 then
        playerTableOperationMsg.operation = g_gameConstant.MAHJONG_OPERTAION_PENG
    else
        playerTableOperationMsg.operation = g_gameConstant.MAHJONG_OPERTAION_CHI
    end
    playerTableOperationMsg.card_value = cardValue
    playerTableOperationMsg.player_table_pos = g_gameGlobal:getMyTablePos()
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)

    self:hideOperationMenu()
end

function TablePlayerMy:multiChiPeng(chiCards, pengCards, targetCard, chiTingFlag, chiFlag)
    local totalCard = 0
    local chiCardsTable = {}
    local pengCardsTable = {}

    for i = 1, 4 do
        chiCardsTable[i] = bit._and(chiCards * (2^(-8*(i-1))), 0xff)
        pengCardsTable[i] = bit._and(pengCards * (2^(-8*(i-1))), 0xff)
        if chiCardsTable[i] ~= 0  then
            totalCard = totalCard + 1
        end
        if pengCardsTable[i] ~= 0  then
            totalCard = totalCard + 1
        end
    end

    if totalCard == 2 then
        -- 2张牌，不用特殊提示
        return 
    end

    local target = bit._and(targetCard, 0xff)

    -- 吃可能有3组
    if (bit._and(chiFlag, 0x01) == 1) or (not chiTingFlag) then
        self:showMultiChiPeng(chiCardsTable[1], chiCardsTable[2], target)
    end
    if (bit._and((chiFlag*(2^(-1))), 0x01) == 1) or (not chiTingFlag) then
        self:showMultiChiPeng(chiCardsTable[2], chiCardsTable[3], target)
    end
    if (bit._and((chiFlag*(2^(-2))), 0x01) == 1) or (not chiTingFlag) then
        self:showMultiChiPeng(chiCardsTable[3], chiCardsTable[4], target)
    end

    -- 碰只有一组
    local imageViewBg
    for i, v in pairs(self.multiChiTable) do
        if math.mod(i-1, 3) == 0 then
            local value = v:getTag()
            local width = v:getBoundingBox().width*3 + 20
            local height = v:getBoundingBox().height + 10
            imageViewBg = ccui.ImageView:create("MatchAH/".."game/multiGang.png", ccui.TextureResType.plistType)
            :anchor(0.5, 0.5)
            :setScale9Enabled(true)
            :setCapInsets(cc.rect(20,20,5,5))
            :setContentSize(width, 113)
            :move(display.width/4 + (width+20)*math.floor((i-1)/3), g_gameGlobal:getFixPosY(330))
            :setTouchEnabled(true)
            :onClick(handler(self, self.chePengTipClick))
            :setTag(value)
            :addTo(self, 5)
            :setVisible(false) --先不显示，等玩家点了吃再显示
            table.insert(self.multiChiPengBtnTable, imageViewBg)
        end
        if imageViewBg then
            local idx = math.mod(i, 3)
            if idx == 0 then
                idx = 3
            end
            v:anchor(0, 0.5)
            v:move(10 + v:getBoundingBox().width*(idx-1),
                imageViewBg:getContentSize().height/2)
            v:addTo(imageViewBg)
        end 
    end
end

function TablePlayerMy:showMultiChiPeng(value1, value2, targetValue)
    if value1 == 0 or value2 == 0 or targetValue == 0 then
        return 
    end
    
    local cValue = bit._or(value2*(2^8), value1)

    local imageView1 = self:getNormalCard(value1)
    :setScale(0.8)
    :setTag(cValue)
    local imageView2 = self:getNormalCard(value2)
    :setScale(0.8)
    :setTag(cValue)
    local imageView3 = self:getNormalCard(targetValue)
    :setScale(0.8)
    :setTag(cValue)

    if value1 == value2 and value2 == targetValue then
        table.insert(self.multiChiTable, imageView1)
        table.insert(self.multiChiTable, imageView2)
        table.insert(self.multiChiTable, imageView3)
    else
        imageView3:setColor(cc.c3b(120, 200, 177))
        if targetValue > value1 and targetValue > value2 then
            table.insert(self.multiChiTable, imageView1)
            table.insert(self.multiChiTable, imageView2)
            table.insert(self.multiChiTable, imageView3)
        elseif targetValue < value1 and targetValue < value2 then
            table.insert(self.multiChiTable, imageView3)
            table.insert(self.multiChiTable, imageView1)
            table.insert(self.multiChiTable, imageView2)
        else
            table.insert(self.multiChiTable, imageView1)
            table.insert(self.multiChiTable, imageView3)
            table.insert(self.multiChiTable, imageView2)
        end
    end
end
function TablePlayerMy:updateCardColor(value)
    local v1 = bit._and(value, 0xff)
    local v2 = bit._and(value*(2^(-8)), 0xff)

    for i, v in pairs(self.inhandCards) do
        local cValue = v:getTag()
        
        if g_gameGlobal:isLaiZi(cValue) then
            v:setColor(display.CARD_GREEN)
        elseif (cValue == v1) or (cValue == v2) then
            v:setColor(cc.c3b(166, 166, 166))
        else
            v:setColor(display.COLOR_WHITE)
        end
    end

    if self.newCard then
        local cValue = self.newCard:getTag()
        if g_gameGlobal:isLaiZi(cValue) then
            self.newCard:setColor(display.CARD_GREEN)
        elseif (cValue == v1) or (cValue == v2) then
            self.newCard:setColor(cc.c3b(166, 166, 166))
        else
            self.newCard:setColor(display.COLOR_WHITE)
        end
    end
end

function TablePlayerMy:cancelSelectionOperation( event )
    self:removeCardOperateTip(self.pengCardValue)
    self:removeCardOperateTip(self.chiCardValue)
    self.cantChuList = nil
    self:hideOperationMenu()

    self:repositionAllCards()

    local playerTableOperationMsg = {}

    if self.tingOperation then 
        self.tingOperation = false
        playerTableOperationMsg.operation = g_gameConstant.MAHJONG_OPERTAION_CANCLE_TING
    else
        playerTableOperationMsg.operation = g_gameConstant.MAHJONG_OPERTAION_CANCEL
    end

    
    playerTableOperationMsg.player_table_pos=g_gameGlobal:getMyTablePos()
    --增加时间戳方便服务器 查 不能胡的问题
    playerTableOperationMsg.unused0 = os.time()
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)

end

--新铜陵跑风
function TablePlayerMy:tongLingPoafengClick( event )
    -- body
    self:removeCardOperateTip(self.pengCardValue)
    self:removeCardOperateTip(self.chiCardValue)

    self:hideOperationMenu()
    self:repositionAllCards()

    self.curOperationState = g_gameConstant.MAHJONG_OPERTAION_CHU
    self:setCantChuList()    
    self._isChoosePaoFeng = true
end

function TablePlayerMy:setCantChuList() 

    
    -- self.curOperationState = g_gameConstant.MAHJONG_OPERTAION_CHU

    if self.cantChuList then
        for i,v in pairs(self.inhandCards) do
            local cValue = v:getTag()
            local  flag = false
            for k,vv in pairs(self.cantChuList) do
                if vv == cValue then
                    flag = true
                end
            end
            if  flag then
                v:setColor(display.COLOR_WHITE)
               -- v.addtopsign()
            else
                v:setColor(cc.c3b(166,166,166))
            end
        end
        if self.newCard and not tolua.isnull(self.newCard) then
            local  flag = false
            local cValue = self.newCard:getTag()
            for k,vv in pairs(self.cantChuList) do
                if vv == cValue then
                    flag = true
                end
            end
            if  flag then
                self.newCard:setColor(display.COLOR_WHITE)
                --self.newCard.addtopsign()
            else
                self.newCard:setColor(cc.c3b(166,166,166))
            end 
        end
    end

end


function TablePlayerMy:jiaClick( event )
    self.cantChuList = nil
    self:hideOperationMenu()
    local playerTableOperationMsg = {}
    playerTableOperationMsg.operation = g_gameConstant.MAHJONG_OPERTAION_JIA_HUN
    playerTableOperationMsg.player_table_pos = g_gameGlobal:getMyTablePos()
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)
end

function TablePlayerMy:removeCardOperateTip( cardValue )
    for i = 1, 4 do
        local value = bit._and(cardValue*(2^(-8*(i-1))), 0xff)
        if value ~= 0 then
            for j, v in pairs(self.inhandCards) do
                local cValue = v:getTag()
                if cValue == value then
                    v:setPositionY(g_gameConstant.MY_CARD_Y)
                    break
                end
            end
        end
    end
end

function TablePlayerMy:removeMyCard( cardValue, bGang )
    if not cardValue then
        print("d")
    end
    local v1 = bit._and(cardValue, 0xff)
    local v2 = bit._and(cardValue*(2^(-8)), 0xff)
    local v3 = bit._and(cardValue*(2^(-16)), 0xff)
    local v4 = bit._and(cardValue*(2^(-24)), 0xff)

    self:removeOneCard(v1)
    self:removeOneCard(v2)

    if bGang then
        self:removeOneCard(v1)
        self:removeOneCard(v1)
    end
end
function TablePlayerMy:chiPengGangOperation( msg, bPlayAnimation ,tablePos)

    if bPlayAnimation then
        self:playChiPengGangAnimation(msg)
    end

    if msg.opValue == g_gameConstant.MAHJONG_OPERTAION_GANG_NOTIFY then
        return
    end

    local isGang = false
    if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_AN_GANG) == g_gameConstant.MAHJONG_OPERTAION_AN_GANG or 
        bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_BU_GANG) == g_gameConstant.MAHJONG_OPERTAION_BU_GANG or 
        bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_MING_GANG) == g_gameConstant.MAHJONG_OPERTAION_MING_GANG then
        self:removeMyCard(msg.card_value, true)
        if self.newCard then
            self.newCard:removeSelf()
            self.newCard = nil
        end
        isGang = true
    else
        self:removeMyCard(bit._and(msg.card_value, 0xffff), false)
    end

    local c1 = bit._and(msg.opValue, 0xff)
    local c2 = bit._and(msg.opValue*(2^-8), 0xff)
    local c3 = bit._and(msg.opValue*(2^-16), 0xff)
    local chiCard = bit._and(msg.opValue*(2^-24), 0xff)
    local opCard = 0

    if msg.operation == 0 then

        self:buHuaOperation(c1)
        self:buHuaOperation(c2)
        self:buHuaOperation(c3)
        self:buHuaOperation(chiCard)
        return
    end

    if c1 == chiCard then
        opCard = bit._or(bit._or(c3*(2^8), c2*(2^16)), c1)
    elseif c3 == chiCard then
        opCard = bit._or(bit._or(c2*(2^8), c1*(2^16)), c3)
    elseif c2 == chiCard then
        opCard = bit._or(bit._or(c1*(2^16), c3*(2^8)), c2)
    else
        opCard = bit._and(msg.opValue, 0xffffff)
    end

    if isGang then
        opCard = bit._or(c2*(2^24), opCard)
    end

    if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_BU_GANG) == g_gameConstant.MAHJONG_OPERTAION_BU_GANG then
        local matchIdx = self:findPeng(c2)
        if matchIdx == 0 then
            return
        end

        local cardType = bit._and(c2*(2^(-4)), 0x3)
        local cardNum = bit._and(c2, 0xf)

        local posx = self.laydownCards[matchIdx]:getPositionX()
        local posy = self.laydownCards[matchIdx]:getPositionY() + 10

        local imageView = self:getMyAndOppLaydownCard(c2)
        :setTag(c2)
        :move(posx, posy)
        :addTo(self,5)

        table.insert(self.laydownCards, imageView)
        self:setChuPlayerColor(imageView, msg.chuOffset, msg.operation, 3)
        --加入打牌特效
        if bPlayAnimation then
        end
    else
        local layDownWidth = 0
        for i=0, 3 do
            local card = bit._and(opCard*(2^(-i*8)), 0xff)
            if card ~= 0 then
                local cv = card

                -- 暗杠不显示
                if (i ~= 3) and (bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_AN_GANG) == g_gameConstant.MAHJONG_OPERTAION_AN_GANG) then
                    cv = 0x39
                end
                local chuNum = self.chiPengGangBlock * 3 + 1
                local imageView = self:getMyAndOppLaydownCard(cv)
                imageView:setTag(card)

                -- local startx = MYSELF_TABLE_HAND_CARD_START_X + self.chiPengGangBlock * 3 * MYSELF_LAYDOWN_CARD_WIDTH + self.chiPengGangBlock * MYSELF_LAYDOWN_CARD_JIANGE_WIDTH 

                layDownWidth = imageView:getBoundingBox().width
                local startx = self.laydownCardStartPosX
                if i == 3 then
                    imageView:move(startx + layDownWidth,
                        MYSELF_TABLE_HAND_CARD_START_Y + 10)
                else
                    local posx = startx + i * layDownWidth
                    imageView:move(posx, self.handCardStartPosY)
                end

                self:add(imageView,i+1)
                imageView:anchor(0, 0.5)
                table.insert(self.laydownCards, imageView)
                self:setChuPlayerColor(imageView, msg.chuOffset, msg.operation, i , chiCard)
                 --播放打牌特效
                if bPlayAnimation then               
                    if isGang then
                        if i == 3 then
                        end
                    else
                        if i == 1 then
                        end
                    end
                end
            end
        end
        self.laydownCardStartPosX = self.laydownCardStartPosX + layDownWidth*3 + MYSELF_LAYDOWN_CARD_JIANGE_WIDTH
        self.handCardStartPosX = self.laydownCardStartPosX + MYSELF_LAYDOWN_HANDCARD_DISTANCE
        self.chiPengGangBlock = self.chiPengGangBlock + 1
    end

    self:repositionAllCards()
    self:hideOperationMenu()



end

function TablePlayerMy:sendCancelTuoGuanMsg( event )
    local playerGameOpertaionMsg = {}
    playerGameOpertaionMsg.opertaionID = g_gameConstant.GAME_OPERTAION_SET_TUOGUAN
    playerGameOpertaionMsg.opValue = 0
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_GAME_OPERTAION, playerGameOpertaionMsg)
    -- self:setTuoGuanState(false)

    -- if (math.mod(#self.inhandCards, 3) == 2) or self.newCard then
    --     self.curOperationState = g_gameConstant.MAHJONG_OPERTAION_CHU
    --     self:repositionAllCards()
    -- end
end

function TablePlayerMy:setTuoGuanState( state )
    self.touGuanBg:setVisible(state)

    self.guoBtn:setTouchEnabled( not state)
    self.chiBtn:setTouchEnabled( not state)
    self.pengBtn:setTouchEnabled( not state)
    self.gangBtn:setTouchEnabled( not state)
    self.paofengBtn:setTouchEnabled( not state)
    self.huBtn:setTouchEnabled( not state)
    self.jiaBtn:setTouchEnabled( not state)
    self.tonglingpaofengBtn:setTouchEnabled( not state)

end

function TablePlayerMy:resetHandCard()
    if not tolua.isnull(self.touchObj) and self.touchObjOriginPos then 
        self.touchObj:move(self.touchObjOriginPos.x, g_gameConstant.MY_CARD_Y)
        self:showHuCardList(self.tingList ,self.prompTingList ) 
    end
end

function TablePlayerMy:setTouchRightSpecial(isEnabled)
    self._isSpecialTouchEnabled = isEnabled
end

function TablePlayerMy:getTouchRightSpecial()
    return self._isSpecialTouchEnabled or false
end

function TablePlayerMy:onTouchBegan( touch, event )
    if g_gameGlobal:getIsPlayingGameLog() then
        return false
    end
    if self.operationMenuVisible and (not g_gameGlobal:isNewTongLing()) then  --特殊处理铜陵玩法
        return false
    end
    
    if self.touchObjMoved then
        return true
    end
    self.touchObjMoved = false
    if self.curOperationState == g_gameConstant.MAHJONG_OPERTAION_CHU or
        self.curOperationState == g_gameConstant.MAHJONG_OPERTAION_TING or 
        self:getTouchRightSpecial() then
            local location = touch:getLocation()
            -- location = self:convertToNodeSpace(location)
            -- 手牌检测
            for i, v in pairs(self.inhandCards) do
                local color = v:getColor()
                if not (color.r == 166 and color.g == 166 and color.b == 166) then
                    local locationInNode = v:convertToNodeSpace(location)
                    local rect = cc.rect(0,0,v:getBoundingBox().width, v:getBoundingBox().height)
                    if cc.rectContainsPoint(rect, locationInNode) then
                        if self.touchObj and self.touchObjOriginPos then
                            if self.touchObj ~= v and not tolua.isnull(self.touchObj) then
                                self.touchObj:move(self.touchObjOriginPos.x, g_gameConstant.MY_CARD_Y)
                            end
                        end
                        self.touchObj = v
                        self.touchObjOriginPos = cc.p(v:getPosition())
                        self.touchObjOriginZOrder = v:getLocalZOrder()
                        local value = self.touchObj:getTag()
                        return self:canChu(value)
                    end
                end
            end
            -- 新摸牌检测
            if self.newCard then
                local color = self.newCard:getColor()
                if not (color.r == 166 and color.g == 166 and color.b == 166) then
                    local locationInNode = self.newCard:convertToNodeSpace(location)
                    local rect = cc.rect(0,0,self.newCard:getBoundingBox().width, self.newCard:getBoundingBox().height)
                    if cc.rectContainsPoint(rect, locationInNode) then
                        self.touchObj = self.newCard
                        self.touchObjOriginPos = cc.p(self.newCard:getPosition())
                        self.touchObjOriginZOrder = self.newCard:getLocalZOrder()
                        local value = self.touchObj:getTag()
                        return self:canChu(value)
                    end
                end
            end
    elseif self.curOperationState == g_gameConstant.MAHJONG_OPERTAION_CHOOSE_CARD then
        local location = touch:getLocation()

        for i, v in pairs(self.inhandCards) do
            local locationInNode = v:convertToNodeSpace(location)
            local rect = cc.rect(0,0,v:getBoundingBox().width, v:getBoundingBox().height)
            if cc.rectContainsPoint(rect, locationInNode) then
                v.isSelected = not v.isSelected
                if v.isSelected then 
                    v:setPositionY(g_gameConstant.MY_CARD_Y + 20)
                    
                else
                    v:setPositionY(g_gameConstant.MY_CARD_Y)
                end
                return false
            end
        end
        -- 新摸牌检测
        if self.newCard then
            local locationInNode = self.newCard:convertToNodeSpace(location)
            local rect = cc.rect(0,0,self.newCard:getBoundingBox().width, self.newCard:getBoundingBox().height)
            if cc.rectContainsPoint(rect, locationInNode) then
                v.isSelected = not v.isSelected
                if v.isSelected then 
                    v:setPositionY(g_gameConstant.MY_CARD_Y + 20)
                else
                    v:setPositionY(g_gameConstant.MY_CARD_Y)
                end
                return false
            end
        end
    
    end
    return false 
end



function TablePlayerMy:getCardInhandCount(cardvalue)
    local cards = self:getCardsInhand()
    local count = 0
    for i,v in ipairs(cards) do
        local value = v:getTag()
        if value == cardvalue then 
            count = count + 1
        end
    end
    return count
end


function TablePlayerMy:allLaiZiInHand()

    local cards = self:getCardsInhand()

    for i, v in pairs(cards) do 
        local cValue = v:getTag()
        if not g_gameGlobal:isLaiZi(cValue) then
            return false
        end
    end

    return true
end


function TablePlayerMy:canChu(cardVal)
    -- if (g_gameGlobal:isNanNingFanLaiZi() or g_gameGlobal:isHengXianFanLaiZi() or g_gameGlobal:isTuiDaoLaiZi())
    --     and g_gameGlobal:isLaiZi(cardVal) then
    --     return false
    -- end
    if g_gameGlobal:isXuanChengHongzhong() or g_gameGlobal:isSheXian() or g_gameGlobal:isNewTongLing()
        or g_gameGlobal:isXiaGang() or self:allLaiZiInHand() or g_gameGlobal:isZZMaJiang() then 
        self.couldDaLaizi = true
    end 

    if g_gameGlobal:isLaiZi(cardVal) and self.touchObj.canChu then 
        return true
    end

    if not self.couldDaLaizi and  g_gameGlobal:isLaiZi(cardVal) then 
        return false
    end

    if g_gameGlobal:isXuanCheng() or g_gameGlobal:isMaAnShan() then 

        local clearColor = g_gameGlobal:getClearColor()
        
        local num = self:getCardsNumNyColor(clearColor)
        local cColor = bit._and(cardVal, 0xf0)

        if cColor ~= clearColor and num > 0 then
            return false
        end
    end

    if g_gameGlobal:isNewTongLing() then
        if  self.cantChuList  and #self.cantChuList > 0 then
            -- for i,v in pairs(self.inhandCards) do
            --     local cValue = v:getTag()
            --     print("_________________看看牌值:",cValue)
            --     local  flag = false
            --     for k,vv in pairs(self.cantChuList) do
            --         print("__________________________vv:",vv)
            --         print("__________________________cValue:",cValue)
            --         if vv == cValue then
            --             flag = true
            --         end
            --     end
            --     if  flag then
            --         print("_____________________________跑到这里了22222")
            --         return true
            --     else
            --         print("_____________________________跑到这里了333333")
            --         return false
            --     end
            -- end
            local  flag = false
            for k,vv in pairs(self.cantChuList) do
                if vv == cardVal then
                    flag = true
                end
            end
            if  flag then
                return true
            else
                return false
            end

            -- if self.newCard and not tolua.isnull(self.newCard) then
            --     local  flag = false
            --     local cValue = self.newCard:getTag()
            --     for k,vv in pairs(self.cantChuList) do
            --         if vv == cValue then
            --             flag = true
            --         end
            --     end
            --     if  flag then
            --         print("_____________________________跑到这里了444444")
            --         return true
            --     else
            --         print("_____________________________跑到这里了55555")
            --         return false
            --     end 
            -- end
        end
    end
    


    return true
end

function TablePlayerMy:onTouchMoved( touch, event )
    local location = self:convertToNodeSpace(touch:getLocation())


    if not self.touchObj then
        return 
    end

    local value = self.touchObj:getTag()
    if not self:canChu(value) then
        return
    end

    local distance = cc.pGetDistance(cc.p(self.touchObj:getPosition()), location)
    if self.touchObjMoved then
        location.x = location.x - self.touchObj:getContentSize().width/2
        self.touchObj:move(location)
    elseif distance > self.touchObj:getContentSize().height then
        self.touchObjMoved = true
        location.x = location.x - self.touchObj:getContentSize().width/2
        self.touchObj:move(location)
        self.touchObj:setLocalZOrder(100)
   
    end
end

function TablePlayerMy:onTouchEnded( touch, event )
    local location = touch:getLocation()

    location = self:convertToNodeSpace(location)

    if not self.touchObj then
        return 
    end

    local value = self.touchObj:getTag()
    if not self:canChu(value) then
        return
    end

    if self.touchObjMoved then
        -- 滑动出牌判断 
        if self.touchObj:getPositionY() > g_gameConstant.MY_CARD_Y + 80 then
            -- 发送出牌命令
            self:sendChuPaiOrder()
        else
            self.touchObj:move(self.touchObjOriginPos)
            self.touchObj:setLocalZOrder(self.touchObjOriginZOrder)
            self.touchObjMoved = false
        end
        return 
    end

    if self.curOperationState == g_gameConstant.MAHJONG_OPERTAION_CHU or self:getTouchRightSpecial() then
        self:chuClick()
    elseif self.curOperationState == g_gameConstant.MAHJONG_OPERTAION_TING then
        self:tingClick()
    elseif self.curOperationState == g_gameConstant.MAHJONG_OPERTAION_CHOOSE_CARD then 

    end
end

function TablePlayerMy:isInHand()
    for i, v in pairs(self.inhandCards) do
        if v == self.touchObj then
            return true
        end
    end
    if self.newCard == self.touchObj then
        return true
    end
    return false
end

function TablePlayerMy:couldClick()
    local pos = cc.p(self.touchObj:getPosition())
    if pos.y < g_gameConstant.MY_CARD_Y + 1 then
        return false
    end
    return true
end


function TablePlayerMy:setColorOnTableCard(value)

    local gameInstance = require("newgold.MatchGames.PDK.GameBase"):getInstance()
    local allCards = gameInstance:getAllPlayerCardsOnTable()

    self:revertColorOnTableCard()
    
    for i,card in ipairs(allCards) do
        if not tolua.isnull(card) and card:getTag() == value then 
            card.orginColor = card:getColor()
            card:setColor( cc.c3b(240,242,172) )
        end
    end
end

function TablePlayerMy:revertColorOnTableCard()

    local gameInstance = require("newgold.MatchGames.PDK.GameBase"):getInstance()
    local allCards = gameInstance:getAllPlayerCardsOnTable()

    for i,card in ipairs(allCards) do
        if not tolua.isnull(card) and card.orginColor then 
            card:setColor( card.orginColor )
            card.orginColor = nil
        end
    end

end



function TablePlayerMy:chuClick()
    if not self:couldClick() then
        -- 第一次点击
        -- 首先将所有节点恢复初始位置
        for i, v in pairs(self.inhandCards) do
            v:setPositionY(g_gameConstant.MY_CARD_Y)
        end
        if self.newCard then
            self.newCard:setPositionY(g_gameConstant.MY_CARD_Y)
        end
        self.touchObj:setPositionY(self.touchObjOriginPos.y + 20)
        -- self:showPrompCardList(self.touchObj)

        local cardValue = self.touchObj:getTag()
        self:setColorOnTableCard(cardValue)

    else
        -- 第二次点击
        if self.curOperationState == g_gameConstant.MAHJONG_OPERTAION_NONE then
            return
        end
        if not self:isInHand() then
            return 
        end
        self:sendChuPaiOrder()
        if self:getTouchRightSpecial() then
            self:hideOperationMenu()
            self:setTouchRightSpecial(false)
        end
    end
end

function TablePlayerMy:tingClick1() 

    
    self:hideOperationMenu()
    self:repositionAllCards()

    self:setCantChuList()

    local playerTableOperationMsg = {}
    playerTableOperationMsg.player_table_pos = g_gameGlobal:getMyTablePos()
    playerTableOperationMsg.operation = g_gameConstant.MAHJONG_OPERTAION_TING
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)

end

function TablePlayerMy:tingClick()
    if self:couldClick() then
        self:sendChuPaiOrder()
    end
end
function TablePlayerMy:sendChuPaiOrder()
    if self.touchObj and  not tolua.isnull(self.touchObj) then

        self:revertColorOnTableCard()

       
        -- 增加到出牌列表
        local value = self.touchObj:getTag()

        local playerTableOperationMsg = {}
        playerTableOperationMsg.operation = g_gameConstant.MAHJONG_OPERTAION_CHU
        playerTableOperationMsg.card_value = value
        playerTableOperationMsg.player_table_pos = g_gameGlobal:getMyTablePos()
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg) 

        self:addChuCard(value, true)
        -- self:chuOperation(value)

        self.curOperationState = g_gameConstant.MAHJONG_OPERTAION_NONE

        
        -- local pos = cc.p(display.cx - 40 ,display.height/3 - 15 )
        -- pos = self:convertToNodeSpace(pos)

        -- transition.moveTo(self.touchObj, {x= pos.x, y=pos.y,
        --     time= 0.02})

        -- self.touchObj:move(pos)
        -- self:setChuObjPos( self.touchObj )
        if not g_gameGlobal:isHua(value) then 
            NG.soundManager:playMatchEffect(g_gameGlobal:getEffectFileForCardValue( value, self.sex))
        end
        self.touchObj:setLocalZOrder(100)
        self.touchObj:hide()
        -- 移除之前出的牌
        self:removeChuCard()

        self.chuPai = self.touchObj

        if self.touchObj ~= self.newCard then
            for i, v in pairs(self.inhandCards) do
                if v == self.touchObj then
                    table.remove(self.inhandCards, i)
                    break
                end
            end
            if self.newCard then
                self:insertNewCard(self.newCard)
                self.newCard = nil
            end
        end

        if g_gameGlobal:isHua(value , self.player_piaoHua) and not tolua.isnull(self.touchObj) then 
            self.touchObj:hide()
        end

        self.touchObj = nil
        self.newCard = nil
        if g_gameGlobal:isNewTongLing() then
            if self.cantChuList  then
                self.cantChuList = nil
                for i,v in pairs(self.inhandCards) do
                   -- v.canceltopsign()
                end
            end
        end
        self:repositionAllCards()
    
    end
end

--[[
    换三张插牌动画
    ]]

function TablePlayerMy:hszInsertCardAni(handCard , huanCards)

    self:refreshHandCard(handCard)

    local addIndex1 = {}
    local addIndex2 = {}

    for k,v in ipairs(self.inhandCards) do
        for k1,v1 in ipairs(huanCards) do

            local cardValue = v:getTag()

            if cardValue == v1 and not addIndex1[k1] and not addIndex2[k] then 
                addIndex1[k1] = true
                addIndex2[k] = true
                v:setPositionY( g_gameConstant.MY_CARD_Y + 20 )
            end 
        end
    end

    performWithDelay(self, function()
        
        self:repositionAllCards()

        local gameInstance = require("newgold.MatchGames.PDK.GameBase"):getInstance()
        if gameInstance then
            gameInstance:showQueMenu(true)
        end

     end , 1.5 )

end


function TablePlayerMy:refreshHandCard(handCard)

    --c++固定重排
    for i , v in pairs(self.inhandCards) do
        v:removeSelf()
    end
    self.inhandCards = {}

    for i, v in pairs(handCard) do
        self:addNewCard(v)
    end

    self:repositionAllCards()
    --听牌手牌刷新,亳州麻将专属
    self:RefreshCardsAfterTing()
end


function TablePlayerMy:refreshPlayerCards(chuCard, handCard, beforCard, downCard)
    if (not handCard) or (#handCard == 0) then
        return 
    end

    if not tolua.isnull(self.chuPai)  and chuCard > 0 then
        local value = self.chuPai:getTag()
        local chuValue = bit._and(value, 0xff)
        if chuValue ~= chuCard then
            -- 重新创建
            local newImage = self:getNormalCard(chuCard) 
            newImage:setTag(chuCard)
            newImage:move(cc.p(self.chuPai:getPosition()))
            newImage:setScale(self.chuPai:getScale())
            self.chuPai:removeSelf()
            self.chuPai = newImage
        end
    end

    if chuCard == 0 and self.chuPai then
        self:removeChuCard()
    end

    if self.newCard then
        self.newCard:removeSelf()
        self.newCard = nil
    end

    
    

    if g_gameGlobal:isXuanCheng() or g_gameGlobal:isMaAnShan() then
        self:refreshHandCard(handCard)
    elseif g_gameGlobal:isNewTongLing() then
        self:refreshHandCard(handCard)
    else
        if #handCard ~= #self.inhandCards then
            print("错误，手牌和显示的牌数不一样")
            -- reorder()
            self:refreshHandCard(handCard)
        else
            for i, value in ipairs(handCard) do

                local inhandcard = self.inhandCards[i]

                inhandcard.canChu = nil
                inhandcard:setTag( value )
                inhandcard.setCardValue( value )

                if inhandcard.refreshFlag then inhandcard.refreshFlag() end

            end
            self:repositionAllCards()
        end
    end

end

function TablePlayerMy:resortAllCards()
    local tmp = self.inhandCards
    self.inhandCards = {}
    for i,v in pairs(tmp) do
        self:xuanchengInsertNewCard(v)
    end
    self:repositionAllCards()

end


function TablePlayerMy:xuanchengInsertNewCard( obj )
    local clearColor = g_gameGlobal:getClearColor()
    if clearColor == 0xff then
        clearColor = 0x30
    end
    local cardValue = obj:getTag()
    local newCardColor = bit._and(cardValue, g_gameConstant.MAHJONG_CODE_COLOR_MASK)
    local cardY = g_gameConstant.MY_CARD_Y
    local startX = self.handCardStartPosX

    local inserted = false
    for i, v in pairs(self.inhandCards) do 
        local cValue = v:getTag()  
        local findPos = false
        local cdColor = bit._and(cValue, g_gameConstant.MAHJONG_CODE_COLOR_MASK)
        if cdColor ~= clearColor and newCardColor == clearColor then
        else
            if newCardColor ~= clearColor and cdColor == clearColor then
                findPos = true
            end
            if cardValue < cValue and newCardColor ~= clearColor and cdColor ~= clearColor then
                findPos = true
            end
            if cardValue < cValue and newCardColor == clearColor and cdColor == clearColor then
                findPos = true
            end
            if findPos then
                obj:move((i-1) * g_gameConstant.MYSELF_TABLE_CARD_WIDTH + startX, cardY)
                self:setHandCardPosInLog(obj, i)
                table.insert(self.inhandCards, i, obj)
                inserted = true
                break
            end
        end

    end

    if not inserted then
        obj:move(#self.inhandCards * g_gameConstant.MYSELF_TABLE_CARD_WIDTH + startX, cardY)
        self:setHandCardPosInLog(obj, #self.inhandCards)
        table.insert(self.inhandCards, obj)
    end

end

function TablePlayerMy:getCardsNumNyColor(color)
    local num = 0
    if self.newCard then
        local cValue = self.newCard:getTag()
        if bit._and(cValue, 0x70) == color then
            num = num + 1
        end
    end

    for i,v in pairs(self.inhandCards) do
        local value = v:getTag()
        if bit._and(value, 0x70) == color then
            num = num + 1
        end
    end
    return num
end

function TablePlayerMy:setCardCouldNotChu( cds )
    print(g_gameGlobal:getClearColor(), "花色值")
    if g_gameGlobal:isXuanCheng() or g_gameGlobal:isMaAnShan() then
        local clearColor = g_gameGlobal:getClearColor()
        local num = self:getCardsNumNyColor(clearColor)
        for i,v in pairs(self.inhandCards) do
            local cValue = v:getTag()
            local cColor = bit._and(cValue, 0xf0)
            if cColor == clearColor or num == 0 then
                v:setColor(display.COLOR_WHITE)
            else
                v:setColor(cc.c3b(166,166,166))
            end
        end
        if self.newCard then
            local cValue = self.newCard:getTag()
            local cColor = bit._and(cValue, 0xf0)
            if cColor == clearColor or num == 0 then
                self.newCard:setColor(display.COLOR_WHITE)
            else
                self.newCard:setColor(cc.c3b(166,166,166))
            end
        end

        return
    end
    --池州吃3万不能打36万。蚌埠没摸牌不能自动补花
    if g_gameGlobal:isChiZhou() or g_gameGlobal:isBangBuDaiHua() or g_gameGlobal:isSuSong() or g_gameGlobal:isPaofengMj() then
        local v1 = bit._and(cds, 0xff)
        local v2 = bit._and(cds * 2^(-8), 0xff)
        local v3 = bit._and(cds * 2^(-16), 0xff)
        local v4 = bit._and(cds * 2^(-24), 0xff)
        for i,v in pairs(self.inhandCards) do
            local value = v:getTag()
            if value == v1 or value == v2 or value == v3 or value == v4 then
                v:setColor(cc.c3b(166,166,166))
            else
                if not g_gameGlobal:isLaiZi(value) then 
                    v:setColor(display.COLOR_WHITE)
                end
                
            end
        end

        if self.newCard then
            local value = self.newCard:getTag()
            if value == v1 or value == v2 or value == v3 or value == v4 then
                self.newCard:setColor(cc.c3b(166,166,166))
            else
                if not g_gameGlobal:isLaiZi(value) then 
                    self.newCard:setColor(display.COLOR_WHITE)
                end
            end

        end
    end
end


function TablePlayerMy:cancelTuoguan()

    self:setTuoGuanState(false)

    if (math.mod(#self.inhandCards, 3) == 2) or self.newCard then
        self.curOperationState = g_gameConstant.MAHJONG_OPERTAION_CHU
        self:repositionAllCards()
    end

end


function TablePlayerMy:insertNewCard(obj)
    if not obj then
        return
    end 

    if g_gameGlobal:isXuanCheng() or g_gameGlobal:isMaAnShan() then
        self:xuanchengInsertNewCard(obj)
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

    -- if (g_gameGlobal:isZongYang() or g_gameGlobal:isDongZhi() or g_gameGlobal:isTongLing() or g_gameGlobal:isQianShan() or g_gameGlobal:isTongCheng())
    --     and cardValue == 0x35 then
    --     cardValue = g_gameGlobal:getLaizi()
    -- end

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
            obj:move((i-1) * MYSELF_TABLE_CARD_WIDTH + startX, cardY)
            self:setHandCardPosInLog(obj, i)
            table.insert(self.inhandCards, i, obj)
            inserted = true
            break
        end
        -- end
    end

    if not inserted then
        obj:move(#self.inhandCards * MYSELF_TABLE_CARD_WIDTH + startX, cardY)
        self:setHandCardPosInLog(obj, #self.inhandCards)
        table.insert(self.inhandCards, obj)
    end
end


function TablePlayerMy:buHuaOperation( card )
    -- local car_type = bit._and(bit._rshit(card, 4), 0x3)
    -- local card_value = bit._and(card,0xf)
    if not card or card == 0 then
        return
    end
    local num = #self.huaCards
    local sp = self:getMyAndOppLaydownCard(card)
    table.insert(self.huaCards, sp)
    self:addChild(sp)
    local sz = sp:getContentSize()
    sp:setScale(0.6)
    local startx,starty = MYSELF_BUHUA_START_X, MYSELF_BUHUA_START_Y
    sp:setPosition(startx-(num-1)*sz.width*0.6,starty)
    sp:setColor( display.CARD_GREEN )

end

function TablePlayerMy:hidePiaohuaMenu()
    if self.piaohuaNode then 
        self.piaohuaNode:removeSelf()
        self.piaohuaNode = nil
    end
end

function TablePlayerMy:setPiaohua(bool)

    if self.piaohuaNode then 
        self.piaohuaNode:removeSelf()
        self.piaohuaNode = nil
    end

    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, {
        operation = g_gameConstant.MAHJONG_OPERTAION_SET_PIAO_HUA,
        player_table_pos = g_gameGlobal:getMyTablePos(),
        opValue = bool and 1 or 0,
    })
end


--显示飘花设置
function TablePlayerMy:showPiaoHuaMenu()

    if self.piaohuaNode then 
        self.piaohuaNode:removeSelf()
        self.piaohuaNode = nil
    end

    self.piaohuaNode = display.newNode():addTo(self)

    local button = ccui.Button:create()
    button:setTouchEnabled(true)
    button:loadTextures("MatchAH/".."game/bupiao.png", nil, "",ccui.TextureResType.plistType)
    button:setPressedActionEnabled(true)
    button:setPosition(cc.p(400, g_gameConstant.MYSELF_MENU_POSITION_Y+50))
    button:onClick(function() 
        self:setPiaohua(false)
    end)
    button:addTo(self.piaohuaNode)

    local button = ccui.Button:create()
    button:setTouchEnabled(true)
    button:loadTextures("MatchAH/".."game/piaohua.png", nil, "",ccui.TextureResType.plistType)
    button:setPressedActionEnabled(true)
    button:setPosition(cc.p(800, g_gameConstant.MYSELF_MENU_POSITION_Y+50))
    button:onClick(function() 
        self:setPiaohua(true)
    end)
    button:addTo(self.piaohuaNode)

end

function TablePlayerMy:setCouldDaLaizi(bool)

    self.couldDaLaizi = bool

end

function TablePlayerMy:hideAllCards()
    for i,v in pairs(self.inhandCards) do
        v:setVisible(false)
    end
end

function TablePlayerMy:showAllCards()
    for i,v in pairs(self.inhandCards) do
        v:setVisible(true)
    end
end

function TablePlayerMy:logShowChiPengGangMenu(opValue,speed)

    local guoBtn = ccui.ImageView:create("MatchAH/".."game/cancel_bt.png", ccui.TextureResType.plistType) 
    guoBtn:move(MYSELF_MENU_POSITION_END_X, MYSELF_MENU_POSITION_Y)
    -- 吃按钮
    local chiBtn = ccui.ImageView:create("MatchAH/".."game/chi.png", ccui.TextureResType.plistType) 
    chiBtn:hide()
    -- 碰按钮
    local pengBtn = ccui.ImageView:create("MatchAH/".."game/peng_bt.png", ccui.TextureResType.plistType) 
    pengBtn:hide()
    -- 杠按钮
    local gangBtn = ccui.ImageView:create("MatchAH/".."game/gang_bt.png", ccui.TextureResType.plistType) 
    gangBtn:hide()
    -- 胡按钮
    local huBtn = ccui.ImageView:create("MatchAH/".."game/hu.png", ccui.TextureResType.plistType) 
    huBtn:hide()

    local tingBtn = nil  
    if g_gameGlobal:isSuanZui() then
        tingBtn = ccui.ImageView:create("game/baozui.png", ccui.TextureResType.localType) 
    else
        tingBtn = ccui.ImageView:create("game/ting.png", ccui.TextureResType.localType)
    end
    tingBtn:hide()

    local menuNum = 1
    -- 吃
    if bit._and(opValue, g_gameConstant.MAHJONG_OPERTAION_CHI) == g_gameConstant.MAHJONG_OPERTAION_CHI then
        chiBtn:show()
        chiBtn:move(MYSELF_MENU_POSITION_END_X - menuNum * g_gameConstant.BUTTON_X, MYSELF_MENU_POSITION_Y)
        menuNum = menuNum + 1

    -- elseif bit._and(opValue, g_gameConstant.MAHJONG_OPERTAION_TING) == g_gameConstant.MAHJONG_OPERTAION_TING then
    --     tingBtn:show()
    --     tingBtn:move(MYSELF_MENU_POSITION_END_X - menuNum * g_gameConstant.BUTTON_X, MYSELF_MENU_POSITION_Y)
    --     menuNum = menuNum + 1
    end
    -- 碰
    if bit._and(opValue, g_gameConstant.MAHJONG_OPERTAION_PENG) == g_gameConstant.MAHJONG_OPERTAION_PENG then
        pengBtn:show(true)
        pengBtn:move(MYSELF_MENU_POSITION_END_X - menuNum * g_gameConstant.BUTTON_X, MYSELF_MENU_POSITION_Y)
        menuNum = menuNum + 1
    end
    -- 杠
    if (bit._and(opValue, g_gameConstant.MAHJONG_OPERTAION_AN_GANG) == g_gameConstant.MAHJONG_OPERTAION_AN_GANG)  or
       (bit._and(opValue, g_gameConstant.MAHJONG_OPERTAION_MING_GANG) == g_gameConstant.MAHJONG_OPERTAION_MING_GANG)  or
       (bit._and(opValue, g_gameConstant.MAHJONG_OPERTAION_BU_GANG) == g_gameConstant.MAHJONG_OPERTAION_BU_GANG)  then
        gangBtn:show(true)
        gangBtn:move(MYSELF_MENU_POSITION_END_X - menuNum * g_gameConstant.BUTTON_X, MYSELF_MENU_POSITION_Y)
        menuNum = menuNum + 1
    end
    -- 胡
    if bit._and(opValue, g_gameConstant.MAHJONG_OPERTAION_HU) == g_gameConstant.MAHJONG_OPERTAION_HU then
        huBtn:show(true)
        huBtn:move(MYSELF_MENU_POSITION_END_X - menuNum * g_gameConstant.BUTTON_X, MYSELF_MENU_POSITION_Y)
        menuNum = menuNum + 1
    end

    -- 听
    if bit._and(opValue, g_gameConstant.MAHJONG_OPERTAION_TING) == g_gameConstant.MAHJONG_OPERTAION_TING then
       
        tingBtn:show()
        tingBtn:move(MYSELF_MENU_POSITION_END_X - menuNum * g_gameConstant.BUTTON_X, MYSELF_MENU_POSITION_Y)
        menuNum = menuNum + 1
    end


    guoBtn:addTo(self, 101)
    tingBtn:addTo(self, 101)
    huBtn:addTo(self, 101)
    gangBtn:addTo(self, 101)
    pengBtn:addTo(self, 101)
    chiBtn:addTo(self, 101)

    local function callback()
        guoBtn:removeSelf()
        tingBtn:removeSelf()
        huBtn:removeSelf()
        gangBtn:removeSelf()
        pengBtn:removeSelf()
        chiBtn:removeSelf()
    end
    performWithDelay(self,function() 
        callback()
    end  , speed)
end

function TablePlayerMy:removeZimoCard()
    if self.newCard then
        self.newCard:removeSelf()
        self.newCard = nil
    end
end


function TablePlayerMy:wuhuBaoJing()
    -- local skeletonNode = g_gameGlobal:playSkeletonAnimationOnce( "spine/chipenggang_ani/baojing" , "animation" )
    -- self:addChild(skeletonNode, 200)
    -- local pos = cc.p(display.cx - 40, display.height/3)
    -- skeletonNode:setPosition(pos) 
     
    -- local skeletonNode1 = g_gameGlobal:playSkeletonAnimationOnce( "spine/chipenggang_ani/chipg" , "baojing" )
    -- self:addChild(skeletonNode1, 200)
    -- local pos = cc.p(display.cx - 40, display.height/3-30)
    -- skeletonNode1:setPosition(pos) 

    local skeletonNode = sp.SkeletonAnimation:create("spine/chipenggang_ani/baojing.json","spine/chipenggang_ani/baojing.atlas", 1)
    local pos = cc.p(display.cx - 40, display.height/3)
    skeletonNode:setPosition(pos)
    self:addChild(skeletonNode, 200)
    skeletonNode:setAnimation(0, "animation", false)
    skeletonNode:runAction(cc.Sequence:create(cc.DelayTime:create(1),cc.CallFunc:create(function()    
    end),cc.RemoveSelf:create(),nil))

end

function TablePlayerMy:wuhuDianPao()
    local skeletonNode = g_gameGlobal:playSkeletonAnimationOnce( "spine/chipenggang_ani/chipg" , "fangpao" )
    self:addChild(skeletonNode, 200)
    local pos = cc.p(display.cx - 40, display.height/3)
    skeletonNode:setPosition(pos)
end

function TablePlayerMy:BaoZui()
    local skeletonNode = g_gameGlobal:playSkeletonAnimationOnce( "spine/chipenggang_ani/chipg" , "baozui" )
    self:addChild(skeletonNode, 200)
    local pos = cc.p(display.cx - 40, display.height/3)
    skeletonNode:setPosition(pos)
end

return TablePlayerMy