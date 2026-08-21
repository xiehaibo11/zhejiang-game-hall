--[[
 * @Author: zhoufan
 * @Date: 2017年11月4日 11:31:19
 ]]

------------------------------计分界面----------------------------
local GameResultCell = class("GameResultCell")

local netObj,eventObj = unpack(require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msg_obj"))
local Utils = require("newgold.GoldLobby.Modules.PeakRaceGame.PDK.Utils")
local m_cardSize  = cc.size(44, 68)
local m_cardSpace = 5




function GameResultCell:ctor(params)
    local params = params or {}


    local listitem  = params.listitem:clone()

    local parentDeleGate = params.parentDeleGate

    self.listitem = listitem

    listitem:show()
    local data = params.data

    local gameOvertAck = params.gameOvertAck
    gameOvertAck = gameOvertAck or g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_GAME_OVER_ACK)
    self.gameOvertAck = gameOvertAck

    local Label_name = listitem:getChildByName("Label_name")
    local Label_des = listitem:getChildByName("Label_des")
    local Label_des1 = listitem:getChildByName("Label_des_0")
    local Label_score = listitem:getChildByName("Label_score")

    local headbg = listitem:getChildByName("Image_headbg")
    local fangzhuFlag = listitem:getChildByName("Image_4")
    local bg = listitem:getChildByName("Image_1")

    local ZZpanel = listitem:getChildByName("ZZPanel_2")
    ZZpanel:hide()


    self.cardNode = listitem:getChildByName("cardNode") 
    self.cardNode1 = listitem:getChildByName("cardNode1")
    
    Label_des1:hide()
    -- headbg:Addt
    local masScore_Dian = listitem:getChildByName("masScore_Dian")
    local masScore_Extra = listitem:getChildByName("masScore_Extra")
    local masScore_ExtraFlag = masScore_Extra:getChildByName("dana_flag")
    local masScore_Total = listitem:getChildByName("masScore_Total")

    local wuhuScoreTotal = listitem:getChildByName("wuhuScoreTotal")
    local wuhuScore = listitem:getChildByName("wuhuScore")
    local wuhuHu = listitem:getChildByName("wuhuHu")
    self.wuhuHu = wuhuHu
    self.wuhuHu:hide()

    local wuhuJiaoBao = listitem:getChildByName("wuhuJiaoBao")
    wuhuJiaoBao:hide()
    self.wuhuJiaoBao = wuhuJiaoBao


    if g_gameGlobal:isWuHuMaJiang() then
        Label_score:hide()
        masScore_Dian:hide()
        masScore_Extra:hide()
        masScore_Total:hide()
        if data.tablePos == gameOvertAck.baoPaiPos then
            self.wuhuJiaoBao:show()
            self.wuhuJiaoBao:loadTexture("game_result/wuhuBao.png", ccui.TextureResType.localType)
            self.wuhuJiaoBao:ignoreContentAdaptWithSize(true)
        end

        if data.tablePos == gameOvertAck.dianPaoPos then
            self.wuhuHu:show()
            self.wuhuHu:loadTexture("game_result/wuhuPao.png", ccui.TextureResType.localType)
            self.wuhuHu:ignoreContentAdaptWithSize(true)
        end


        if gameOvertAck["tuoDi"..data.tablePos] == 1 then 
            self.wuhuJiaoBao:show()
            self.wuhuJiaoBao:loadTexture("game_result/tuodi.png", ccui.TextureResType.localType)
            self.wuhuJiaoBao:ignoreContentAdaptWithSize(true)
            self.wuhuJiaoBao:setScale(0.8)
        end
        
        
        if gameOvertAck.huPostion == data.tablePos and gameOvertAck.tongDi == 1 then 
            self.wuhuJiaoBao:show()
            self.wuhuJiaoBao:loadTexture("game_result/tongdi.png", ccui.TextureResType.localType)
            self.wuhuJiaoBao:ignoreContentAdaptWithSize(true)
            self.wuhuJiaoBao:setScale(0.8)
        end

        wuhuScore:setString(( data.gold > 0 and "+" or "").. tostring(data.gold))
        local playerTotalScore = gameOvertAck["player"..tostring(data.tablePos).."TotalScore"]
        wuhuScoreTotal:setString(( playerTotalScore > 0 and "+" or "").. tostring(playerTotalScore))
    elseif g_gameGlobal:isMaAnShan() then
        -- 这里专门显示马鞍山的  点数/额外/总点数
        wuhuScoreTotal:hide()
        wuhuScore:hide()
        wuhuHu:hide()
        Label_score:hide()
        masScore_Dian:show()
        masScore_Extra:show()
        masScore_ExtraFlag:hide()
        masScore_Total:show()
        local extraScore = gameOvertAck["tuoDi"..tostring(data.tablePos)]
        local dianScore = data.gold - gameOvertAck["tuoDi"..tostring(data.tablePos)]
        local totalScore = gameOvertAck["player"..tostring(data.tablePos).."TotalScore"]
        if extraScore > 0 then      -- 显示大拿标记
            masScore_ExtraFlag:setVisible(gameOvertAck.tongDi > 0);
        end
        masScore_Dian:setString(( dianScore > 0 and "+" or "").. tostring(dianScore))
        masScore_Extra:setString(( extraScore > 0 and "+" or "").. tostring(extraScore))
        masScore_Total:setString(( totalScore > 0 and "+" or "").. tostring(totalScore))
    else
        wuhuScoreTotal:hide()
        wuhuScore:hide()
        wuhuHu:hide()

        masScore_Dian:hide() 
        masScore_Extra:hide() 
        masScore_Total:hide() 
    end


    if g_gameGlobal:isZZMaJiang() then 

        if data.tablePos == gameOvertAck.dianPaoPos then
            self.wuhuHu:show()
            self.wuhuHu:loadTexture("game_result/fangpao.png", ccui.TextureResType.localType)
            self.wuhuHu:ignoreContentAdaptWithSize(true)
        end
        
    end


    -- Label_name:setString(data.palyerIndex .. " " ..  g_gameGlobal:cutStringLength(data.playerName))
    Label_name:setString( g_gameGlobal:cutStringLength(data.playerName))

    if g_gameGlobal:isWuWeiMj()  then 
        self.cardNode:setPositionY( self.cardNode:getPositionY() + 12 )
        self.cardNode1:setPositionY( self.cardNode1:getPositionY() + 12 )

        self.cardNode:setScale(0.9)
        self.cardNode1:setScale(0.9)

        -- local data.desc
        local desc = data.desc
        local startx , y= Label_des1:getPosition()
        local t = g_gameGlobal:strSplit(desc , "#")
        local preWith = 0
        for i,v in ipairs(t) do
            local t1 = g_gameGlobal:strSplit(v , "|")
            local desc1 = Label_des1:clone() 
            desc1:show()
            desc1:setString( t1[1] )
            local score = desc1:getChildByName("score")
            score:setString( t1[2] )
            score:setPositionX( desc1:getContentSize().width/2 )
            
            startx = startx + preWith + 20
            desc1:addTo(listitem):setPosition( startx , y )

            preWith = desc1:getContentSize().width
        end

        Label_des:hide()

    else
        Label_des:setString(data.desc)
    end    
    if g_gameGlobal:isSuanZui() then
        Label_score:setString(( data.gold > 0 and "+" or "").. tostring(data.gold / 100)) 
    else
        Label_score:setString(( data.gold > 0 and "+" or "").. tostring(data.gold))

    end
    if data.gold and tonumber(data.gold) > 0 then
        Label_score:setTextColor(cc.c4b(255, 22, 23, 255))
    else
        Label_score:setTextColor(cc.c4b(5, 72, 247, 255))
    end 

    local x,y = Label_name:getPosition()
    -- Label_des:setPosition(x+Label_name:getContentSize().width+20, y)

    local tablePos = data.tablePos
    fangzhuFlag:setVisible(data.tablePos == gameOvertAck.dealerPos)

    --dump(gameOvertAck)

    -- local headImg = display.newSprite("#game_result/game_result_touxiangbg1.png"):addTo(headbg):setPosition(headbg:getContentSize().width/2,headbg:getContentSize().height/2)
    -- headImg:hide()
    -- headImg:setScale(0.90)
    -- headImg:setContentSize(90,90)

    -- dump(data , "data")

    local myplayer = g_gameGlobal:getMyselfInfo()

    local isMachine = data.headImg ~= 4
    if isMachine and false then 

        local isMan = data.sex == 1
        local id = data.palyerIndex%10
        local _headIcon = display.newSprite("head/" .. (isMan and "man" or "woman") .."/"..id..".jpg" )
        _headIcon = g_gameGlobal:clipImg(  headbg , _headIcon , 0.9 )
    
    else
        if myplayer.playerIndex == data.palyerIndex then 
            g_gameGlobal:requestHttpImage(data.headImgUrl, headbg , true ,nil,0.9)

            bg:loadTexture("game_result/itemBg2.png", ccui.TextureResType.localType)

        elseif string.len(data.headImgUrl)>5 then
            g_gameGlobal:requestHttpImage(data.headImgUrl, headbg , false,nil,0.9 )
        end
    end

    self:addFw( headbg , tablePos )

    local player = gameOvertAck["players"][tablePos+1]

    -- 吃碰杠
    local startX = self:showDownCards(gameOvertAck["player"..tostring(tablePos).."DownCards"])
    startX = self:showHandCard(startX + 10, gameOvertAck["player"..tostring(tablePos).."HandCards"])
    if g_gameGlobal:isWuHuMaJiang() then
        if gameOvertAck.huPostion == tablePos then
            self.wuhuHu:show()
            local huCard = bit._and(  player.canFriend, 0xff)
            if huCard ~= 0 then
                local parent = self.cardNode
                local c = self:getNormalCard(huCard):addTo(parent)
                if g_gameGlobal:isLaiZi(huCard) then
                    c:setColor(display.CARD_GREEN)
                end
                c:setPosition(startX+10, 0)
                c:sameSize(m_cardSize)
            end
            if gameOvertAck.dianPaoPos == -1 then
                self.wuhuHu:loadTexture("game_result/wuhuZimo.png", ccui.TextureResType.localType)
                self.wuhuHu:ignoreContentAdaptWithSize(true)
            end
            if gameOvertAck.jiaoPiao == 1 then
                self.wuhuJiaoBao:show()
            end
        end
    else
        startX = self:showHuCard(
            startX,
            bit._and(  player.canFriend, 0xff)
        )
    end


    --中码
    local pIndex = -1
    for k,v in pairs(gameOvertAck.players) do
        if v.tablePos == tablePos then
            pIndex = k
            break
        end
    end

    local player = gameOvertAck.players[pIndex]
    local ma = player.maCard
	local zhongmaIndex = player.zhongMaIndex

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

    local maList = parseMa(ma)

    -- maList = {1,2,3,4,5,6,7,8,9}

    local num = #maList

    ZZpanel:hide()
    if g_gameGlobal:isSuanZui() and data.gold > 0 then --风嘴
        self:showZuifengView(gameOvertAck.ddzInteger , ZZpanel)
    end
    if g_gameGlobal:isZZMaJiang()  then 
        if num > 0 then 
            
            local list = {}
            -- for i = 1,maList do
            for i,card in ipairs(maList) do
                local zhongMa=bit._and(bit._rshift(zhongmaIndex,i-1),0x1)
                if zhongMa == 1 then
                    table.insert(list , card)
                end
            end

            parentDeleGate:showNiaoPAI(maList , zhongmaIndex)
        
            for i,card in ipairs(list) do
                ZZpanel:show()
                local c = self:getNormalCard(card):addTo(ZZpanel)
                c:setScale( 0.55)
                c:setLocalZOrder(i>4 and -1 or 0)
                local row = math.floor((i-1)/4)
                local col = (i-1)%4
                c:setPosition( col*(m_cardSize.width-13), (1-row)*40 + 3):anchor(0,0):order(row)
            end
          
        end
        
    elseif num > 0 then
        -- local node = display.newNode():setPosition(988-134-35,0):addTo(self.cardNode)
        local bg = display.newSprite("#common/empty_frame.png"):addTo(self.cardNode1 , -2)
        bg:size(218,124):setPosition(100,68)
        -- bg:setScaleY(num > 6 and 1.36 or 1.0)
        -- bg:setScaleX(0.9)
        local bgw,bgh = bg:getContentSize().width*bg:getScaleX(),bg:getContentSize().height*bg:getScaleY()

        for i = 1,num do
            local card = maList[i]
            local c = self:getNormalCard(card):addTo(bg)
            
            -- c:setScale( num > 6 and 0.45 or 0.5)
            c:setScale( 0.6)
            c:setLocalZOrder(i>6 and -1 or 0)
            local row = math.floor((i-1)/6)
            local col = (i-1)%6
            c:setPosition( 18+ col*(m_cardSize.width-10), (1-row)*55):anchor(0,0)
            local zhongMa=bit._and(bit._rshift(zhongmaIndex,i-1),0x1)
            if zhongMa == 1 then
                c:setColor(display.CARD_GREEN)
            end
        end
        
    end


    local liannum = gameOvertAck.liannum or 0
    local isDbz = g_gameGlobal:isPaofengMjDBZ()
    if isDbz and liannum >= 1 then 
        fangzhuFlag:loadTexture("common/lian.png",ccui.TextureResType.localType)
        local label = g_gameGlobal:newLabel({text =  liannum.."次" ,  fontSize = 18, fontColor = cc.c3b( 77,32,8 ) })
        label:setPosition(fangzhuFlag:getContentSize().width/2, fangzhuFlag:getContentSize().height):addTo(fangzhuFlag):anchor(0.5,0)    
    end

    

end

function GameResultCell:showZuifengView(list , ZZpanel)
    if #list == 0 then
        return 
    end
    ZZpanel:show()

    local imgTip = ZZpanel:getChildByName("Image_6")
    if imgTip then 
        imgTip:loadTexture("game/fengzui.png",ccui.TextureResType.localType)
    end
    local newList = {}
    local len = 0
    for i,card in ipairs(list) do
        if not newList[card] then
            newList[card] = 1
            len = len + 1 
        else
            newList[card] = 1 + newList[card]
        end
    end
    local col = 1
    local firstX = -(len / 2) * (m_cardSize.width-13) + 10
    for card,num in pairs(newList) do
        if card then 
            local c = self:getNormalCard(card):addTo(ZZpanel)
            c:setScale( 0.55)
            if num > 1 then
                local textNum = ccui.Text:create("x"..num, "fonts/fzzhunyuanjianti.ttf", 20)
                textNum:setColor(display.COLOR_RED)
                textNum:addTo(c)
                textNum:setAnchorPoint(0,0)
                textNum:setPosition(20,10)
            end
            if card == g_gameGlobal:getFengCard() then 
                c:setColor(display.COLOR_GRAY)
            end
            c:setPosition( col*(m_cardSize.width-13)+ firstX, 20):anchor(0,0)
            col = col + 1
        end
    end
end

function GameResultCell:addFw( headBg , tablePos )

    local posState = g_gameGlobal:getTablePlayerPosWithTablePos( tablePos )
    local fwIcon = display.newSprite("game/pos"..posState..".png")
    fwIcon:addTo( headBg ):setPosition( 15 , 15 ):anchor(0.5,0.5)

end


function GameResultCell:getDownCardData(downCards)
    local res = {}
    for i,cards in ipairs(downCards) do
        
        local c1 = bit._and(cards.cardValue, 0xff)
        local c2 = bit._and(bit._rshift(cards.cardValue, 8), 0xff)
        local c3 = bit._and(bit._rshift(cards.cardValue, 16), 0xff)
        local chi_card = bit._and(bit._rshift(cards.cardValue, 24), 0xff)

        local cData = {type = cards.type}
        if cards.type == g_gameConstant.MAHJONG_OPERTAION_AN_GANG
            or cards.type == g_gameConstant.MAHJONG_OPERTAION_MING_GANG
            or cards.type == g_gameConstant.MAHJONG_OPERTAION_BU_GANG then
            cData.card = {c1, c1, c1, c1}
        elseif cards.type == 0 then             --补花的牌
            cData.card = {c1, c2, c3 , chi_card}
        else
            cData.card = {c1, c2, c3}
        end

        -- 设置颜色
        cData.cardColor = {}
        for i,_ in ipairs(cData.card) do
            self:addColor(cards.chuOffset, cards.type, i, cData.cardColor)
        end

        table.insert(res, cData)
    end
    return res
end

-- 给牌添加颜色
function GameResultCell:addColor(offset, op, cardIndex, t)
    if op == g_gameConstant.MAHJONG_OPERTAION_AN_GANG
        or op == g_gameConstant.MAHJONG_OPERTAION_CHI then
        t[cardIndex] = display.COLOR_WHITE
        return
    end

    t[cardIndex] = display.COLOR_WHITE

    if (offset == -1) and (cardIndex == 1) then
        t[cardIndex] = display.CARD_GREEN

    elseif (offset == 0) and ((cardIndex == 2) or (cardIndex == 4)) then
        t[cardIndex] = display.CARD_GREEN

    elseif (offset == 1) and (cardIndex == 3) then
        t[cardIndex] = display.CARD_GREEN

    else
        t[cardIndex] = display.COLOR_WHITE
    end
end


function GameResultCell:showDownCards(downCards)
    local data = self:getDownCardData(downCards)
    local parent = self.cardNode
    -- parent:removeAllChildren()

    local cellSize = m_cardSize
    local chiSpace = m_cardSpace
    local chiWidth = 3*cellSize.width+chiSpace

    local chicount  , huacount = 0 , 0

    for i,cInfo in ipairs(data) do
        local node = display.newNode()
        local cType = cInfo.type
        
        local isFa = cType == 0
        
        for j,card in ipairs(cInfo.card) do
            
            if isFa then        --花牌

                if card == 0 then break end

                local c = c or self:getNormalCard(card)
                c:setPosition( 35 +   (huacount%8-1)*25, 97 - math.floor(huacount/8)*50 )
                -- c:setColor(cInfo.cardColor[j])
                c:setScale(0.4)
                c:addTo(self.cardNode1)
                huacount = huacount + 1
            else
                local c
                -- 暗杠显示背面
                if cType == g_gameConstant.MAHJONG_OPERTAION_AN_GANG then
                    if j <= 3 then
                        c = self:getNormalCard(0x39):addTo(node)
                    end
                end

                c = c or self:getNormalCard(card):addTo(node)

                if j>3 then
                    c:setPosition(1*cellSize.width, 15)
                else
                    c:setPosition((j-1)*cellSize.width, 0)
                end
                c:setColor(cInfo.cardColor[j])
                c:sameSize(m_cardSize)
            end
        end

        if not isFa then 
            chicount = chicount + 1
            node:addTo(parent):setPosition((chicount-1)*(chiWidth), 0)
        end

    end
    return chiWidth*chicount
end




function GameResultCell:showHandCard(startX, handCards)
    local parent = self.cardNode
    local node = display.newNode()
    for i,card in ipairs(handCards) do
        if g_gameGlobal:checkCardValid(card) then 
            local c = self:getNormalCard(card):addTo(node)
            if g_gameGlobal:isLaiZi(card) then
                c:setColor(display.CARD_GREEN)
                if g_gameGlobal:isNewTongLing() then 
                    display.newSprite("#game/out_ntl_laizi.png"):addTo(c):setPosition(17,72)
                end
            end
            c:setPosition((i-1)*m_cardSize.width, 0)
            c:sameSize(m_cardSize)
        end
    end
    node:addTo(parent):setPosition(startX, 0)
    startX = startX + (m_cardSize.width)*(#handCards) + m_cardSpace

    return startX
end


function GameResultCell:showHuCard(startX, huCard)
    local parent = self.cardNode
    if huCard ~= 0 then
        local c = self:getNormalCard(huCard):addTo(parent)
        if g_gameGlobal:isLaiZi(huCard) then
            c:setColor(display.CARD_GREEN)
            if g_gameGlobal:isNewTongLing() then 
                display.newSprite("#game/out_ntl_laizi.png"):addTo(c):setPosition(17,72)
            end
        end
        c:setPosition(startX+10, 0)
        c:sameSize(m_cardSize)
        -- 胡图片
        if not g_gameGlobal:isWuHuMaJiang() then
            display.newSprite("#game_result/hu_bt.png"):addTo(parent, 1):setPosition(startX+65, 20)
            startX = startX + m_cardSize.width + m_cardSpace
        end
    end
    -- if g_gameGlobal:isWuHuMaJiang() then
    --     local gameOvertAck = self.gameOvertAck --self.gameOvertAck or g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_GAME_OVER_ACK)
    --     if huCard ~= 0 then
    --         self.wuhuHu:show()

    --         if gameOvertAck.dianPaoPos == -1 then
    --             self.wuhuHu:loadTexture("game_result/wuhuZimo.png", ccui.TextureResType.localType)
    --             self.wuhuHu:ignoreContentAdaptWithSize(true)
    --         end
    --         if gameOvertAck.jiaoPiao == 1 then
    --             self.wuhuJiaoBao:show()
    --         end
    --     end
    -- end

    return startX
end



function GameResultCell:getNormalCard( value )

    local imageView = Utils.getCard(value == 0x39 and "paimian/e_mj_b_up" or value, g_gameConstant.MajongPosType.Self, g_gameConstant.MajongType.Laydown)
    imageView:setTag(value):anchor(0, 0.5)

    function imageView:sameSize(size)
        local s = self:getContentSize()
        self:setScaleX(size.width/s.width)
        self:setScaleY(size.height/s.height)
    end

    return imageView
end



function GameResultCell:get()
    return self.listitem
end


return GameResultCell  jS  