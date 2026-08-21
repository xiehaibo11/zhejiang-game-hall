local tablePlayerBase = import(".TablePlayerBase")
local TablePlayerOpp = class("TablePlayerOpp", tablePlayerBase)
local Utils = require("newgold.GoldLobby.Modules.PeakRaceGame.PDK.Utils")





--对家位置
local OPPISITE_TABLE_HAND_CARD_START_X            =   g_gameGlobal:getFixPosX(320)    --手牌起始x位置
local OPPISTTE_TABLE_HAND_CARD_START_Y            =   g_gameGlobal:getFixPosY(633)    --手牌起始y位置
local OPPISITE_LAYDOWN_CARD_START_X               =   g_gameGlobal:getFixPosX(280)
local OPPISITE_LAYDOWN_CARD_WIDTH                 =   45     --碰牌,吃牌宽度
local OPPISITE_LAYDOWN_CARD_HEIGHT                =   67     --碰牌,吃牌高度
local OPPISITE_LAYDOWN_CARD_JIANGE_WIDTH          =   20     --碰牌间隔
local OPPISITE_LAYDOWN_HANDCARD_DISTANCE          =   15         --倒牌和手牌之间间隔
local OPPISITE_TABLE_HAND_CARD_WIDTH              =   45     --每张手牌的宽度
local OPPISITE_TABLE_CHU_CARD_FIRST_X             =   g_gameGlobal:getFixPosX(805)    --出牌的初始x位置
local OPPISITE_TABLE_CHU_CARD_FIRST_Y             =   g_gameGlobal:getFixPosY(458)    --出牌的初始y位置
local OPPISITE_TABLE_CHU_CARD_2PEOPLE_FIRST_X     =   g_gameGlobal:getFixPosX(930+130-20)        --2个人出牌的初始x位置
local OPPISITE_TABLE_CHU_CARD_WIDTH               =   45     --出牌的宽度
local OPPISITE_TABLE_CHU_CARD_HEIGHT              =   52     --出牌的高度
local OPPISITE_TABLE_HAND_CARD_LOG_START_X        =   g_gameGlobal:getFixPosX(270)    --播放战绩手牌起始x位置
local OPPISITE_TABLE_HAND_CARD_LOG_WIDTH          =   45     --每张手牌的宽度
local OPPISITE_BUHUA_START_X                      =   g_gameGlobal:getFixPosX(320)    --补花坐标
local OPPISITE_BUHUA_START_Y                      =   g_gameGlobal:getFixPosY(570)    --补花坐标

local MYSELF_MENU_POSITION_Y                      =   g_gameGlobal:getFixPosY(650)
local MYSELF_MENU_POSITION_END_X                  =   g_gameGlobal:getFixPosX(950)    --吃碰杠按钮起始位置


function TablePlayerOpp:ctor()
    TablePlayerOpp.super.ctor(self)
    self.handCardStartPosX = OPPISITE_TABLE_HAND_CARD_START_X
    self.handCardStartPosY = OPPISTTE_TABLE_HAND_CARD_START_Y

    self.laydownCardStartPosX = OPPISITE_LAYDOWN_CARD_START_X
    -- self.huaCards = {}
end
function TablePlayerOpp:init(sex, maxNum)
    self.posState = 3
    TablePlayerOpp.super.init(self,sex, maxNum)
end

function TablePlayerOpp:initPaiMianValue(msg)
    for i = 1, 13 do    

        local paimian = Utils.getCard("paimian/e_mj_up")
        paimian:move(OPPISITE_TABLE_HAND_CARD_START_X + OPPISITE_TABLE_HAND_CARD_WIDTH*(i-1), 
                        OPPISTTE_TABLE_HAND_CARD_START_Y)
        :setScale(1.2)
        :anchor(0, 0.5)
        self:addChild(paimian, i)
        table.insert(self.inhandCards, paimian)
    end
end
function TablePlayerOpp:addChuCard(cardValue, bNeedMarker , notNeedSfx)
    TablePlayerOpp.super.addChuCard(self , cardValue, bNeedMarker , notNeedSfx)
    
    local cardType = bit._and(cardValue*(2^(-4)), 0x3)
    local cValue = bit._and(cardValue, 0xf)

    local chuCardLineNum = g_gameConstant.CHU_CARD_LINE_NUM 
    local maxPlayerNum = g_gameGlobal:getMaxPlayerNum()
    local chuNum = #self.chuCards
    local x = OPPISITE_TABLE_CHU_CARD_FIRST_X -  math.mod(chuNum, chuCardLineNum) * OPPISITE_TABLE_CHU_CARD_WIDTH
    -- 如果是2个人对局，那么每行就比平常多显示9张牌
    if maxPlayerNum == 2 then
        chuCardLineNum = chuCardLineNum + 11
        x = OPPISITE_TABLE_CHU_CARD_2PEOPLE_FIRST_X -  math.mod(chuNum, chuCardLineNum) * OPPISITE_TABLE_CHU_CARD_WIDTH
    end

    local imageView = self:getMyAndOppLaydownCard(cardValue)
    imageView:setScale(0.8)
    imageView.cardValue = cardValue
    local y = OPPISITE_TABLE_CHU_CARD_FIRST_Y + math.floor(chuNum/chuCardLineNum) * OPPISITE_TABLE_CHU_CARD_HEIGHT
    imageView:move(x, y)
    
    -- 出的牌可能有多行，前面的行要盖住后面的行
    imageView:setLocalZOrder(3-math.floor(chuNum/chuCardLineNum))
    if g_gameGlobal:isLaiZi(cardValue) then
        imageView:setColor(display.CARD_GREEN)
    else
        imageView:setColor(display.COLOR_WHITE)
    end
    table.insert(self.chuCards, imageView)
    self:addChild(imageView)
    --风牌，报听后黑色遮罩 
    if g_gameGlobal:isFengZui(cardValue) and self:getTing() and not notNeedSfx then
        imageView:setColor(display.COLOR_GRAY)
    end

    if bNeedMarker then
        self:showChuCardMarker(imageView)
    end
end

function TablePlayerOpp:chiPengGangOperation( msg, bPlayAnimation ,tablePos)
    if bPlayAnimation then
        self:playChiPengGangAnimation(msg)
    end

    if msg.opValue == g_gameConstant.MAHJONG_OPERTAION_GANG_NOTIFY then
        return
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

    local isGang = false
    if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_AN_GANG) == g_gameConstant.MAHJONG_OPERTAION_AN_GANG or 
        bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_BU_GANG) == g_gameConstant.MAHJONG_OPERTAION_BU_GANG or 
        bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_MING_GANG) == g_gameConstant.MAHJONG_OPERTAION_MING_GANG then
        opCard = bit._or(opCard, c2*(2^24))
        isGang = true
    end

    local bAnGang = false
    if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_AN_GANG) == g_gameConstant.MAHJONG_OPERTAION_AN_GANG then
        bAnGang = true
    end

    local bChi = false
    if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_CHI) == g_gameConstant.MAHJONG_OPERTAION_CHI then
        bChi = true
    end
    

    if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_BU_GANG) == g_gameConstant.MAHJONG_OPERTAION_BU_GANG then
        local matchIdx = self:findPeng(c2)
        if matchIdx == 0 then
            return
        end

        local cardType = bit._and(c2*(2^(-4)), 0x3)
        local cardNum = bit._and(c2, 0xf)

        local posx = self.laydownCards[matchIdx]:getPositionX()
        local posy = self.laydownCards[matchIdx]:getPositionY() + 15

        local imageView = self:getMyAndOppLaydownCard(c2)
        :setTag(c2)
        :move(posx, posy)
        :setScale(0.8)
        :addTo(self, 5)

        if g_gameGlobal:getIsPlayingGameLog() then
            imageView:setScale(0.7)
        end

        table.insert(self.laydownCards, imageView)
        self:setChuPlayerColor(imageView, msg.chuOffset, msg.operation, 3)
        --加入打牌特效
        if bPlayAnimation then  
        end
        return 
    else
        local layDownWidth = 0

        for i=0, 3 do
            
            local j = i
            if bChi then 
                j = 2 - i
            end

            local card = bit._and(opCard*(2^(-j*8)), 0xff)
            
            if card ~= 0 then
                local cv = card

                -- 暗杠不显示
                if ( i~=3 or self:isAnGangAllHide() ) and bAnGang  then
                    cv = 0x39
                end
                local imageView = self:getMyAndOppLaydownCard(cv)
                :setScale(0.8)
                :setTag(card)


                if bAnGang and self:isAnGangAllHide() then 
                    imageView.isAnGangAllHide = true
                end


                if g_gameGlobal:getIsPlayingGameLog() then
                    imageView:setScale(0.7)
                end
                -- local layDownWidth = imageView:getBoundingBox().width
                -- local startx = OPPISITE_TABLE_HAND_CARD_START_X + self.chiPengGangBlock * 3 * layDownWidth + self.chiPengGangBlock*OPPISITE_LAYDOWN_CARD_JIANGE_WIDTH

                layDownWidth = imageView:getBoundingBox().width
                local startx = self.laydownCardStartPosX
                if i == 3 then
                    imageView:move(startx + layDownWidth,
                        OPPISTTE_TABLE_HAND_CARD_START_Y + 15)
                else
                    local posx = startx + i * layDownWidth
                    imageView:move(posx, OPPISTTE_TABLE_HAND_CARD_START_Y )
                end

                self:add(imageView,i+1)
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
        self.laydownCardStartPosX = self.laydownCardStartPosX + layDownWidth*3 + OPPISITE_LAYDOWN_CARD_JIANGE_WIDTH
        self.handCardStartPosX = self.laydownCardStartPosX + OPPISITE_LAYDOWN_HANDCARD_DISTANCE
        self.chiPengGangBlock = self.chiPengGangBlock + 1

        -- 对应位置隐藏手牌
        if not g_gameGlobal:getIsPlayingGameLog() then
            local chiPengNum = self.chiPengGangBlock * 3
            if chiPengNum < #self.inhandCards then
                for i = 1, chiPengNum do
                    self.inhandCards[i]:setVisible(false)
                end
                -- 重新排列手牌位置
                -- local startx = OPPISITE_TABLE_HAND_CARD_START_X + self.chiPengGangBlock * 3 * OPPISITE_LAYDOWN_CARD_WIDTH + self.chiPengGangBlock*OPPISITE_LAYDOWN_CARD_JIANGE_WIDTH
                local startx = self.handCardStartPosX
                for i, v in pairs(self.inhandCards) do
                    if i <= chiPengNum then
                        v:setVisible(false)
                    else
                        local handCardWidth = v:getBoundingBox().width-2
                        v:setPositionX(startx + (i-chiPengNum - 1)*handCardWidth)
                    end
                end
            end
        end
    end
end

function TablePlayerOpp:buHuaOperation( card )
    if not card or card == 0 then
        return
    end
    local num = #self.huaCards
    local sp = self:getMyAndOppLaydownCard(card)
    table.insert(self.huaCards, sp)
    self:addChild(sp)
    local sz = sp:getContentSize()
    sp:setScale(0.6)
    local startx,starty = OPPISITE_BUHUA_START_X,OPPISITE_BUHUA_START_Y
    sp:setPosition(startx+(num-1)*sz.width*0.6,starty)
    sp:setColor( display.CARD_GREEN )
    

end


function TablePlayerOpp:logShowChiPengGangMenu(opValue,speed)
    -- 过按钮
    local num = 1
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

function TablePlayerOpp:wuhuBaoJing()
    -- local skeletonNode = g_gameGlobal:playSkeletonAnimationOnce( "spine/chipenggang_ani/baojing" , "animation" )
    -- self:addChild(skeletonNode, 200)
    -- local pos = cc.p(display.cx - 40, display.height * 2/3 + 40)
    -- skeletonNode:setPosition(pos) 

    -- local skeletonNode1 = g_gameGlobal:playSkeletonAnimationOnce( "spine/chipenggang_ani/chipg" , "baojing" )
    -- self:addChild(skeletonNode1, 200)
    -- local pos = cc.p(display.cx - 40, display.height * 2/3 + 10)
    -- skeletonNode1:setPosition(pos)  
    local skeletonNode = sp.SkeletonAnimation:create("spine/chipenggang_ani/baojing.json","spine/chipenggang_ani/baojing.atlas", 1)
    local pos = cc.p(display.cx - 40, display.height * 2/3 + 40)
    skeletonNode:setPosition(pos)
    self:addChild(skeletonNode, 200)
    skeletonNode:setAnimation(0, "animation", false)
    skeletonNode:runAction(cc.Sequence:create(cc.DelayTime:create(1),cc.CallFunc:create(function()    
    end),cc.RemoveSelf:create(),nil)) 
end

function TablePlayerOpp:wuhuDianPao()
    local skeletonNode = g_gameGlobal:playSkeletonAnimationOnce( "spine/chipenggang_ani/chipg" , "fangpao" )
    self:addChild(skeletonNode, 200)
    local pos = cc.p(display.cx - 40, display.height * 2/3 + 40)
    skeletonNode:setPosition(pos)
end

function TablePlayerOpp:BaoZui()
    local skeletonNode = g_gameGlobal:playSkeletonAnimationOnce( "spine/chipenggang_ani/chipg" , "baozui" )
    self:addChild(skeletonNode, 200)
    local pos = cc.p(display.cx - 40, display.height * 2/3 + 40)
    skeletonNode:setPosition(pos)
end
return TablePlayerOpp W@  