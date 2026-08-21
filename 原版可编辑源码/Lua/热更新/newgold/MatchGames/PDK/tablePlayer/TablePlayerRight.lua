local tablePlayerBase = import(".TablePlayerBase")
local TablePlayerRight = class("TablePlayerRight", tablePlayerBase)
local Utils = require("newgold.GoldLobby.Modules.PeakRaceGame.PDK.Utils")


--右边位置
local RIGHT_TABLE_HAND_CARD_START_X               =   g_gameGlobal:getFixPosX(1085)   --手牌起始x位置
local RIGHT_TABLE_HAND_CARD_START_Y               =   g_gameGlobal:getFixPosY(360)-210    --手牌起始y位置
local RIGHT_LAYDOWN_CARD_START_Y                  =   g_gameGlobal:getFixPosY(360)-220    --倒牌起始y位置
local RIGHT_TABLE_HAND_CARD_HEIGHT                =   30     --每张手牌的高度
local RIGHT_LAYDOWN_CARD_WIDTH                    =   48     --碰牌,吃牌宽度
local RIGHT_LAYDOWN_CARD_HEIGHT                   =   30     --碰牌,吃牌高度
local RIGHT_LAYDOWN_CARD_JIANGE_WIDTH             =   15     --碰牌间隔
local RIGHT_LAYDOWN_HANDCARD_DISTANCE             =   5     --倒牌和手牌之间间隔
local RIGHT_TABLE_CHU_CARD_FIRST_X                =   g_gameGlobal:getFixPosX(900)    --出牌的初始x位置
local RIGHT_TABLE_CHU_CARD_FIRST_Y                    =   g_gameGlobal:getFixPosY(360)-152    --出牌的初始y位置
local RIGHT_TABLE_CHU_CARD_WIDTH                  =   55     --出牌的宽度
local RIGHT_TABLE_CHU_CARD_HEIGHT                 =   38     --出牌的高度
local RIGHT_BUHUA_START_X                         =   g_gameGlobal:getFixPosX(1140)
local RIGHT_BUHUA_START_Y                         =   g_gameGlobal:getFixPosY(360)-100


local MYSELF_MENU_POSITION_Y                      =   g_gameGlobal:getFixPosY(220)
local MYSELF_MENU_POSITION_END_X                  =   g_gameGlobal:getFixPosX(1050)    --吃碰杠按钮起始位置



function TablePlayerRight:init(sex, maxNum)
    self.posState = 2
    TablePlayerRight.super.init(self,sex, maxNum)
    self.handCardStartPosX = RIGHT_TABLE_HAND_CARD_START_X
    self.handCardStartPosY = RIGHT_TABLE_HAND_CARD_START_Y

    self.laydownCardStartPosX = RIGHT_TABLE_HAND_CARD_START_X
    self.laydownCardStartPosY = RIGHT_LAYDOWN_CARD_START_Y
    -- self.huaCards={}
end

function TablePlayerRight:initPaiMianValue(msg)
    for i = 1, 13 do
        
        local paimian = Utils.getCard("paimian/e_mj_right")

        paimian:move(RIGHT_TABLE_HAND_CARD_START_X, RIGHT_TABLE_HAND_CARD_START_Y + RIGHT_TABLE_HAND_CARD_HEIGHT * (i-1))
        :anchor(0.5, 0)
        self:addChild(paimian, 13-i)
        table.insert(self.inhandCards, paimian)
    end
end
function TablePlayerRight:addChuCard(cardValue, bNeedMarker , notNeedSfx)
    TablePlayerRight.super.addChuCard(self , cardValue, bNeedMarker , notNeedSfx)
    
    local chuNum = #self.chuCards
    local imageView = self:getRightLaydownCard(cardValue)
    imageView.cardValue = cardValue
    local x = RIGHT_TABLE_CHU_CARD_FIRST_X +  math.floor(chuNum/g_gameConstant.CHU_CARD_LINE_NUM) * RIGHT_TABLE_CHU_CARD_WIDTH 
    local y = RIGHT_TABLE_CHU_CARD_FIRST_Y + math.mod(chuNum, g_gameConstant.CHU_CARD_LINE_NUM) * RIGHT_TABLE_CHU_CARD_HEIGHT
    imageView:move(x, y)
    imageView:setScale(1.2)
    if g_gameGlobal:isLaiZi(cardValue) then
        imageView:setColor(display.CARD_GREEN)
    else
        imageView:setColor(display.COLOR_WHITE)
    end
    table.insert(self.chuCards, imageView)
    self:addChild(imageView, 50 - #self.chuCards)

    --风牌，报听后黑色遮罩 ,这个还是要服务端标记
    if g_gameGlobal:isFengZui(cardValue) and self:getTing() and not notNeedSfx then
        imageView:setColor(display.COLOR_GRAY)
    end

    if bNeedMarker then
        self:showChuCardMarker(imageView)
    end
end
function TablePlayerRight:chiPengGangOperation( msg, bPlayAnimation,tablePos )
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


    local bAnGang = false
    if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_AN_GANG) == g_gameConstant.MAHJONG_OPERTAION_AN_GANG then
        bAnGang = true
    end

    local isGang = false
    if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_AN_GANG) == g_gameConstant.MAHJONG_OPERTAION_AN_GANG or 
        bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_BU_GANG) == g_gameConstant.MAHJONG_OPERTAION_BU_GANG or 
        bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_MING_GANG) == g_gameConstant.MAHJONG_OPERTAION_MING_GANG then
        opCard = bit._or(opCard, c2*(2^(24)))
        isGang = true
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

        local imageView = self:getRightLaydownCard(c2)
        :setTag(c2)
        :anchor(0.5, 0)
        :move(posx, posy)
        :addTo(self, 5)

        table.insert(self.laydownCards, imageView)
        self:setChuPlayerColor(imageView, msg.chuOffset, msg.operation, 3)
        --加入打牌特效
        if bPlayAnimation then  
        end
        return 
    else
        local laydownHeight = 0
        for i=0, 3 do
            local card = bit._and(opCard*(2^(-i*8)), 0xff)
            if card ~= 0 then
                local cv = card
                -- 暗杠不显示
                if ( i~=3 or self:isAnGangAllHide() ) and bAnGang  then
                    cv = 0x39
                end
                
                local imageView = self:getRightLaydownCard(cv)
                :anchor(0.5, 0)
                :setTag(card)

                if bAnGang and self:isAnGangAllHide() then 
                    imageView.isAnGangAllHide = true
                end
                

                laydownHeight = imageView:getBoundingBox().height-8
                local zOrder = 3 - i
                -- local starty = RIGHT_TABLE_HAND_CARD_START_Y + self.chiPengGangBlock*3*laydownHeight
                --                 + self.chiPengGangBlock*RIGHT_LAYDOWN_CARD_JIANGE_WIDTH
                local starty = self.laydownCardStartPosY
                if i == 3 then
                    imageView:move(RIGHT_TABLE_HAND_CARD_START_X ,
                        starty + laydownHeight + 5)
                    zOrder = 3
                else
                    local posy = starty + i * laydownHeight
                    imageView:move(RIGHT_TABLE_HAND_CARD_START_X, posy )
                end

                self:add(imageView, zOrder)
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
        self.laydownCardStartPosY = self.laydownCardStartPosY + laydownHeight*3 + RIGHT_LAYDOWN_CARD_JIANGE_WIDTH
        self.handCardStartPosY = self.laydownCardStartPosY + RIGHT_LAYDOWN_HANDCARD_DISTANCE
        self.chiPengGangBlock = self.chiPengGangBlock + 1
        -- 对应位置隐藏手牌
        if not g_gameGlobal:getIsPlayingGameLog() then
            local chiPengNum = self.chiPengGangBlock * 3
            if chiPengNum < #self.inhandCards then
                for i = 1, chiPengNum do
                    self.inhandCards[i]:setVisible(false)
                end
                -- 重新排列手牌位置
                -- local starty =  RIGHT_TABLE_HAND_CARD_START_Y + self.chiPengGangBlock*3*RIGHT_LAYDOWN_CARD_HEIGHT
                --                 + self.chiPengGangBlock*RIGHT_LAYDOWN_CARD_JIANGE_WIDTH
                local starty = self.handCardStartPosY
                for i, v in pairs(self.inhandCards) do
                    if i <= chiPengNum then
                        v:setVisible(false)
                    else
                        v:setPositionY(starty + (i-chiPengNum - 1)*RIGHT_TABLE_HAND_CARD_HEIGHT)
                    end
                end
            end
        end
    end
end



function TablePlayerRight:getRightLaydownCard(card)
    local desPos = {}
    local chuNum=#self.chuCards
    desPos.x = RIGHT_TABLE_CHU_CARD_FIRST_X +  math.floor(chuNum/g_gameConstant.CHU_CARD_LINE_NUM) * RIGHT_LAYDOWN_CARD_WIDTH 
    desPos.y = RIGHT_TABLE_CHU_CARD_FIRST_Y + math.mod(chuNum, g_gameConstant.CHU_CARD_LINE_NUM) * RIGHT_LAYDOWN_CARD_HEIGHT

    local spr = Utils.getCard(card, g_gameConstant.MajongPosType.Right, g_gameConstant.MajongType.Laydown)
    spr:setTag(card)
    spr:move(desPos)


    return spr

end

function TablePlayerRight:buHuaOperation(card)
    if not card or card == 0 then
        return
    end
    local num = #self.huaCards
    local sp = self:getRightLaydownCard(card)
    self:addChild(sp , 30- num)
    
    table.insert(self.huaCards, sp)
    -- local sz = sp:getContentSize()
    sp:setScale(0.8)
    local startx,starty = RIGHT_BUHUA_START_X, RIGHT_BUHUA_START_Y
    sp:setPosition(startx,starty+num*sp:getContentSize().width*0.50)
    sp:setColor( display.CARD_GREEN )
end

function TablePlayerRight:logShowChiPengGangMenu(opValue,speed)
    -- 过按钮
    local num = 1
    local guoBtn = ccui.ImageView:create("MatchAH/".."game/cancel_bt.png", ccui.TextureResType.plistType) 
    guoBtn:move(MYSELF_MENU_POSITION_END_X, MYSELF_MENU_POSITION_Y)
     -- 吃按钮
     local chiBtn = ccui.ImageView:create("MatchAH/".."game/chi.png", ccui.TextureResType.plistType) 
     chiBtn:hide()
     -- -- 听按钮
     local tingBtn = nil  
    if g_gameGlobal:isSuanZui() then
        tingBtn = ccui.ImageView:create("game/baozui.png", ccui.TextureResType.localType) 
    else
        tingBtn = ccui.ImageView:create("game/ting.png", ccui.TextureResType.localType)
    end
    tingBtn:hide()
     -- 碰按钮
     local pengBtn = ccui.ImageView:create("MatchAH/".."game/peng_bt.png", ccui.TextureResType.plistType) 
     pengBtn:hide()
     -- 杠按钮
     local gangBtn = ccui.ImageView:create("MatchAH/".."game/gang_bt.png", ccui.TextureResType.plistType) 
     gangBtn:hide()
     -- 胡按钮
    local huBtn = ccui.ImageView:create("MatchAH/".."game/hu.png", ccui.TextureResType.plistType) 
    huBtn:hide()
     local menuNum = 1
     -- 吃
     if bit._and(opValue, g_gameConstant.MAHJONG_OPERTAION_CHI) == g_gameConstant.MAHJONG_OPERTAION_CHI then
         chiBtn:show()
         chiBtn:move(MYSELF_MENU_POSITION_END_X , MYSELF_MENU_POSITION_Y+ menuNum * g_gameConstant.BUTTON_X)
         menuNum = menuNum + 1
 

     end
     -- 碰
     if bit._and(opValue, g_gameConstant.MAHJONG_OPERTAION_PENG) == g_gameConstant.MAHJONG_OPERTAION_PENG then
         pengBtn:show(true)
         pengBtn:move(MYSELF_MENU_POSITION_END_X , MYSELF_MENU_POSITION_Y+ menuNum * g_gameConstant.BUTTON_X)
         menuNum = menuNum + 1
     end
     -- 杠
     if (bit._and(opValue, g_gameConstant.MAHJONG_OPERTAION_AN_GANG) == g_gameConstant.MAHJONG_OPERTAION_AN_GANG)  or
        (bit._and(opValue, g_gameConstant.MAHJONG_OPERTAION_MING_GANG) == g_gameConstant.MAHJONG_OPERTAION_MING_GANG)  or
        (bit._and(opValue, g_gameConstant.MAHJONG_OPERTAION_BU_GANG) == g_gameConstant.MAHJONG_OPERTAION_BU_GANG)  then
         gangBtn:show(true)
         gangBtn:move(MYSELF_MENU_POSITION_END_X , MYSELF_MENU_POSITION_Y+ menuNum * g_gameConstant.BUTTON_X)
         menuNum = menuNum + 1
     end
     -- 胡
     if bit._and(opValue, g_gameConstant.MAHJONG_OPERTAION_HU) == g_gameConstant.MAHJONG_OPERTAION_HU then
         huBtn:show(true)
         huBtn:move(MYSELF_MENU_POSITION_END_X , MYSELF_MENU_POSITION_Y+ menuNum * g_gameConstant.BUTTON_X)
         menuNum = menuNum + 1
     end

     -- 听
    if bit._and(opValue, g_gameConstant.MAHJONG_OPERTAION_TING) == g_gameConstant.MAHJONG_OPERTAION_TING then
        tingBtn:show()
        tingBtn:move(MYSELF_MENU_POSITION_END_X , MYSELF_MENU_POSITION_Y+ menuNum * g_gameConstant.BUTTON_X)
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

function TablePlayerRight:wuhuBaoJing()
    -- local skeletonNode = g_gameGlobal:playSkeletonAnimationOnce( "spine/chipenggang_ani/baojing" , "animation" )
    -- self:addChild(skeletonNode, 200)
    -- local pos = cc.p(display.width*3/4, display.cy+30)
    -- skeletonNode:setPosition(pos) 

    -- local skeletonNode1 = g_gameGlobal:playSkeletonAnimationOnce( "spine/chipenggang_ani/chipg" , "baojing" )
    -- self:addChild(skeletonNode1, 200)
    -- local pos = cc.p(display.width*3/4, display.cy)
    -- skeletonNode1:setPosition(pos) 
    local skeletonNode = sp.SkeletonAnimation:create("spine/chipenggang_ani/baojing.json","spine/chipenggang_ani/baojing.atlas", 1)
    local pos = cc.p(display.width*3/4, display.cy+30)
    skeletonNode:setPosition(pos)
    self:addChild(skeletonNode, 200)
    skeletonNode:setAnimation(0, "animation", false)
    skeletonNode:runAction(cc.Sequence:create(cc.DelayTime:create(1),cc.CallFunc:create(function()    
    end),cc.RemoveSelf:create(),nil)) 
end

function TablePlayerRight:wuhuDianPao()
    local skeletonNode = g_gameGlobal:playSkeletonAnimationOnce( "spine/chipenggang_ani/chipg" , "fangpao" )
    self:addChild(skeletonNode, 200)
    local pos = cc.p(display.width*3/4, display.cy+30)
    skeletonNode:setPosition(pos)
end

function TablePlayerRight:BaoZui()
    local skeletonNode = g_gameGlobal:playSkeletonAnimationOnce( "spine/chipenggang_ani/chipg" , "baozui" )
    self:addChild(skeletonNode, 200)
    local pos = cc.p(display.width*3/4, display.cy+30)
    skeletonNode:setPosition(pos)
end

return TablePlayerRight