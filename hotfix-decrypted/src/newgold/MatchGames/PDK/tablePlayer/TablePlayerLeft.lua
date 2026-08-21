local tablePlayerBase = import(".TablePlayerBase")
local TablePlayerLeft = class("TablePlayerLeft", tablePlayerBase)
local Utils = require("newgold.GoldLobby.Modules.PeakRaceGame.PDK.Utils")


--左边位置
local LEFT_TABLE_HAND_CARD_START_X                    =   g_gameGlobal:getFixPosX(200)    --手牌起始x位置
local LEFT_TABLE_HAND_CARD_START_Y                    =   g_gameGlobal:getFixPosY(360)+215    --手牌起始y位置
local LEFT_LAYDOWN_CARD_START_Y                       =   g_gameGlobal:getFixPosY(360)+310    --手牌起始y位置
local LEFT_LAYDOWN_CARD_JIANGE_WIDTH              =   15     --碰牌间隔
local LEFT_LAYDOWN_HANDCARD_DISTANCE              =   5         --倒牌和手牌之间间隔
local LEFT_TABLE_HAND_CARD_HEIGHT                 =   30     --每张手牌的高度
local LEFT_TABLE_CHU_CARD_FIRST_X                 =   g_gameGlobal:getFixPosX(370)    --出牌的初始x位置
local LEFT_TABLE_CHU_CARD_FIRST_Y                 =   g_gameGlobal:getFixPosY(500)    --出牌的初始y位置
local LEFT_TABLE_CHU_CARD_WIDTH                       =   55     --出牌的宽度
local LEFT_TABLE_CHU_CARD_HEIGHT                      =   38     --出牌的高度
local LEFT_BUHUA_START_X                          =   g_gameGlobal:getFixPosX(150)
local LEFT_BUHUA_START_Y                          =   g_gameGlobal:getFixPosY(360)+200

local MYSELF_MENU_POSITION_Y                      =   g_gameGlobal:getFixPosY(180)
local MYSELF_MENU_POSITION_END_X                  =   g_gameGlobal:getFixPosX(200)    --吃碰杠按钮起始位置



function TablePlayerLeft:init(sex, maxNum)
    self.posState = 4
    TablePlayerLeft.super.init(self , sex, maxNum)
    self.handCardStartPosX = LEFT_TABLE_HAND_CARD_START_X
    self.handCardStartPosY = LEFT_TABLE_HAND_CARD_START_Y

    self.laydownCardStartPosX = LEFT_TABLE_HAND_CARD_START_X
    self.laydownCardStartPosY = LEFT_LAYDOWN_CARD_START_Y
    
end
function TablePlayerLeft:initPaiMianValue(msg)
    for i = 1, 13 do
        local paimian = Utils.getCard("paimian/e_mj_left")
        paimian:move(LEFT_TABLE_HAND_CARD_START_X, LEFT_TABLE_HAND_CARD_START_Y - LEFT_TABLE_HAND_CARD_HEIGHT * (i-1))
        self:addChild(paimian, i)
        paimian:anchor(0.5, 1)
        table.insert(self.inhandCards, paimian)
    end
end
function TablePlayerLeft:addChuCard(cardValue, bNeedMarker , notNeedSfx)
    TablePlayerLeft.super.addChuCard(self , cardValue, bNeedMarker , notNeedSfx)

    local chuNum = #self.chuCards
    local imageView = self:getLeftLaydownCard(cardValue)
    imageView.cardValue = cardValue
    local x = LEFT_TABLE_CHU_CARD_FIRST_X -  math.floor(chuNum/g_gameConstant.CHU_CARD_LINE_NUM) * LEFT_TABLE_CHU_CARD_WIDTH
    local y = LEFT_TABLE_CHU_CARD_FIRST_Y - math.mod(chuNum, g_gameConstant.CHU_CARD_LINE_NUM) * LEFT_TABLE_CHU_CARD_HEIGHT
    imageView:move(x, y)
    imageView:setScale(1.2)
    imageView:setLocalZOrder(3-math.floor(chuNum/g_gameConstant.CHU_CARD_LINE_NUM))
    if g_gameGlobal:isLaiZi(cardValue) then
        imageView:setColor(display.CARD_GREEN)
    else
        imageView:setColor(display.COLOR_WHITE)
    end
    table.insert(self.chuCards, imageView)
    self:addChild(imageView)
    
    --风牌，报听后黑色遮罩 ,并且是正常打出牌有声音的情况，重连后走另外一套刷新出牌
    if g_gameGlobal:isFengZui(cardValue) and self:getTing() and not notNeedSfx then
        imageView:setColor(display.COLOR_GRAY)
    end

    if bNeedMarker then
        self:showChuCardMarker(imageView)
    end
end
function TablePlayerLeft:chiPengGangOperation( msg, bPlayAnimation ,tablePos)
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

        local posx = self.laydownCards[matchIdx]:getPositionX()
        local posy = self.laydownCards[matchIdx]:getPositionY() + 10

        local imageView = self:getLeftLaydownCard(c2)
        :setTag(c2)
        :move(posx, posy)
        :anchor(0.5, 1)
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
                local imageView = self:getLeftLaydownCard(cv)
                :anchor(0.5, 1)
                :setTag(card)


                if bAnGang and self:isAnGangAllHide() then 
                    imageView.isAnGangAllHide = true
                end


                -- local starty = LEFT_TABLE_HAND_CARD_START_Y - self.chiPengGangBlock*3*LEFT_LAYDOWN_CARD_HEIGHT
                --                 - self.chiPengGangBlock*LEFT_LAYDOWN_CARD_JIANGE_WIDTH
                laydownHeight = imageView:getBoundingBox().height-8
                local starty = self.laydownCardStartPosY
                if i == 3 then
                    imageView:move(LEFT_TABLE_HAND_CARD_START_X,
                        starty - laydownHeight + 5)
                else
                    local posy = starty - i * laydownHeight
                    imageView:move(LEFT_TABLE_HAND_CARD_START_X, posy )
                end

                self:add(imageView)
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
        self.laydownCardStartPosY = self.laydownCardStartPosY - laydownHeight*3 - LEFT_LAYDOWN_CARD_JIANGE_WIDTH
        self.handCardStartPosY =self.laydownCardStartPosY - LEFT_LAYDOWN_HANDCARD_DISTANCE
        self.chiPengGangBlock = self.chiPengGangBlock + 1
        -- 对应位置隐藏手牌
        if not g_gameGlobal:getIsPlayingGameLog() then
            local chiPengNum = self.chiPengGangBlock * 3
            if chiPengNum < #self.inhandCards then
                for i = 1, chiPengNum do
                    self.inhandCards[i]:setVisible(false)
                end
                -- 重新排列手牌位置
                -- local starty =  LEFT_TABLE_HAND_CARD_START_Y - self.chiPengGangBlock*3*LEFT_LAYDOWN_CARD_HEIGHT
                --                 -self.chiPengGangBlock*LEFT_LAYDOWN_CARD_JIANGE_WIDTH
                local starty = self.handCardStartPosY
                for i, v in pairs(self.inhandCards) do
                    if i <= chiPengNum then
                        v:setVisible(false)
                    else
                        v:setPositionY(starty - (i-chiPengNum - 1)*LEFT_TABLE_HAND_CARD_HEIGHT)
                    end
                end
            end
        end
    end
end
function TablePlayerLeft:getLeftLaydownCard(card)
    local desPos = {}
    local chuNum=#self.chuCards
    desPos.x = LEFT_TABLE_CHU_CARD_FIRST_X -  math.floor(chuNum/g_gameConstant.CHU_CARD_LINE_NUM) * LEFT_TABLE_CHU_CARD_WIDTH
    desPos.y = LEFT_TABLE_CHU_CARD_FIRST_Y - math.mod(chuNum, g_gameConstant.CHU_CARD_LINE_NUM) * LEFT_TABLE_CHU_CARD_HEIGHT

    local spr = Utils.getCard(card, g_gameConstant.MajongPosType.Left, g_gameConstant.MajongType.Laydown)
    spr:setTag(card)
    spr:move(desPos)


    return spr


end

function TablePlayerLeft:buHuaOperation(card)
    if not card or card == 0 then
        return
    end
    local num = #self.huaCards
    local sp = self:getLeftLaydownCard(card)
    self:addChild(sp , num )
    table.insert(self.huaCards, sp)
    
    sp:setScale(0.8)
    local startx,starty = LEFT_BUHUA_START_X, LEFT_BUHUA_START_Y
    sp:setPosition(startx,starty - num*(sp:getContentSize().width+1)*0.5)
    sp:setColor( display.CARD_GREEN )
end


function TablePlayerLeft:logShowChiPengGangMenu(opValue,speed)
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
        chiBtn:move(MYSELF_MENU_POSITION_END_X , MYSELF_MENU_POSITION_Y + menuNum * g_gameConstant.BUTTON_X)
        menuNum = menuNum + 1

    -- elseif bit._and(opValue, g_gameConstant.MAHJONG_OPERTAION_TING) == g_gameConstant.MAHJONG_OPERTAION_TING then
    --     tingBtn:show()
    --     tingBtn:move(MYSELF_MENU_POSITION_END_X , MYSELF_MENU_POSITION_Y+ menuNum * g_gameConstant.BUTTON_X)
    --     menuNum = menuNum + 1
    end
    -- 碰
    if bit._and(opValue, g_gameConstant.MAHJONG_OPERTAION_PENG) == g_gameConstant.MAHJONG_OPERTAION_PENG then
        pengBtn:show(true)
        pengBtn:move(MYSELF_MENU_POSITION_END_X, MYSELF_MENU_POSITION_Y + menuNum * g_gameConstant.BUTTON_X)
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
        tingBtn:move(MYSELF_MENU_POSITION_END_X, MYSELF_MENU_POSITION_Y + menuNum * g_gameConstant.BUTTON_X)
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

function TablePlayerLeft:wuhuBaoJing()
    -- local skeletonNode = g_gameGlobal:playSkeletonAnimationOnce( "spine/chipenggang_ani/baojing" , "animation" )
    -- self:addChild(skeletonNode, 200)
    -- local pos = cc.p(display.width/4 , display.cy+30)
    -- skeletonNode:setPosition(pos)

    -- local skeletonNode1 = g_gameGlobal:playSkeletonAnimationOnce( "spine/chipenggang_ani/chipg" , "baojing" )
    -- self:addChild(skeletonNode1, 200)
    -- local pos = cc.p(display.width/4 , display.cy)
    -- skeletonNode1:setPosition(pos) 
    local skeletonNode = sp.SkeletonAnimation:create("spine/chipenggang_ani/baojing.json","spine/chipenggang_ani/baojing.atlas", 1)
    local pos = cc.p(display.width/4 , display.cy+30)
    skeletonNode:setPosition(pos)
    self:addChild(skeletonNode, 200)
    skeletonNode:setAnimation(0, "animation", false)
    skeletonNode:runAction(cc.Sequence:create(cc.DelayTime:create(1),cc.CallFunc:create(function()    
    end),cc.RemoveSelf:create(),nil)) 
end
function TablePlayerLeft:wuhuDianPao()
    local skeletonNode = g_gameGlobal:playSkeletonAnimationOnce( "spine/chipenggang_ani/chipg" , "fangpao" )
    self:addChild(skeletonNode, 200)
    local pos = cc.p(display.width/4 , display.cy+30)
    skeletonNode:setPosition(pos)
end

function TablePlayerLeft:BaoZui()
    local skeletonNode = g_gameGlobal:playSkeletonAnimationOnce( "spine/chipenggang_ani/chipg" , "baozui" )
    self:addChild(skeletonNode, 200)
    local pos = cc.p(display.width/4 , display.cy+30)
    skeletonNode:setPosition(pos)
end

return TablePlayerLeft 7<  