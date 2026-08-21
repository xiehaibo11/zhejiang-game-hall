--[[
 * @Author: zhoufan
 * @Date: 2017年11月4日 11:31:19
 ]]

------------------------------计分界面----------------------------
local GameResultCell = class("GameResultCell")

-- local Platform = require("app.platform.Platform")
local netObj,eventObj = unpack(require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msg_obj"))

local m_cardSize  = cc.size(46, 71.2)
local m_cardSpace = 5




function GameResultCell:ctor(params)
    local params = params or {}

    m_cardSize = self:getNormalCard(0x1):getBoundingBox()

    local listitem  = params.listitem
    self.listitem = listitem

    display.loadSpriteFrames("res/game_result/game_result0.plist", "res/game_result/game_result0.png")
    listitem:show()
    local data = params.data

    local Label_name = listitem:getChildByName("Label_name")
    local Label_id = listitem:getChildByName("Label_id")
    local Label_des = listitem:getChildByName("Label_des")
    local AtlasLabel_score = listitem:getChildByName("AtlasLabel_score")
    local Label_no_player = listitem:getChildByName("Label_no_player")

    local headbg = listitem:getChildByName("Image_headbg")
    local fangzhuFlag = listitem:getChildByName("Image_fangzhu")
    local zhuangjiaFlag = listitem:getChildByName("Image_zhuangjia")
    local Image_bg = listitem:getChildByName("Image_bg")
    local headImg = headbg:getChildByName("head_icon")
    local otherPaiBg = listitem:getChildByName("otherPaiBg")

    if data == nil then
        Label_name:setString("")
        Label_id:setString("")
        Label_des:setString("")
        AtlasLabel_score:setString("")
        Label_no_player:setVisible(true)

        fangzhuFlag:setVisible(false)
        zhuangjiaFlag:setVisible(false)
        otherPaiBg:setVisible(false)
        
        Label_des:setString(tostring(params.fengDirStr))
        return 
    end

    Label_no_player:setVisible(false)

    if data.playerID == g_gameGlobal:getMyselfInfo().playerID then
        Image_bg:loadTexture("Match/".."game_result/game_result_item_bg_mine.png", ccui.TextureResType.plistType)
    end

    Label_id:setString(data.playerIndex)
    Label_name:setString(g_gameGlobal:cutStringLength(data.playerName))
    Label_des:setString(data.desc)

    local socrePngFile = "game_result/game_result_win_num.png"
    if data.gold < 0 then
        socrePngFile = "game_result/game_result_lose_num.png"
    end
    AtlasLabel_score:setProperty(( data.gold ~= 0 and "/" or "").. tostring(math.abs(data.gold)), socrePngFile, 37, 50, "/");
    

    local tablePos = data.tablePos
    local gameOvertAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_GAME_OVER_ACK)    
    local startGameRequestAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)

    fangzhuFlag:setVisible(startGameRequestAck.createPlayerID == data.playerID)
    zhuangjiaFlag:setVisible(data.tablePos == gameOvertAck.dealerPos)


    self.cardNode = display.newNode():addTo(self.listitem, 100):setPosition(Label_des:getPositionX() + 2,50)

    local player = g_gameGlobal:getMyselfInfo()
    if player.playerIndex == data.playerIndex then 
        g_gameGlobal:requestHttpImage(frameKind, data.headImgUrl, headImg , true, nil, "common/headframe_stencil.png")
    else
        if data.headImgUrl == "" then data.headImgUrl = string.format("robotHeadImg/%d.jpg", data.playerIndex%100+1) end
        g_gameGlobal:requestHttpImage(frameKind, data.headImgUrl, headImg , false, nil, "common/headframe_stencil.png")
    end


    -- 吃碰杠
    local startX = self:showDownCards(gameOvertAck["player"..tostring(tablePos).."DownCards"], g_gameGlobal:getTablePlayerPosWithTablePos(tablePos), tablePos)
    startX = self:showHandCard(startX, gameOvertAck["player"..tostring(tablePos).."HandCards"])

    --一炮多响的情况下，不是第一个胡的玩家的胡牌半透明，暂时不考虑血流玩法的情况
    startX = self:showHuCard(
        startX,
        bit._and(gameOvertAck["huCardP"..tostring(tablePos+1)], 0xff),
        gameOvertAck.huPosition == data.tablePos
    )


    --中码
    local ma1 = gameOvertAck["maCardP"..tostring(tablePos+1)]
    local ma2 = gameOvertAck["huaP"..tostring(tablePos+1)]
    local zhongmaIndex = gameOvertAck["zhongMaIndex"..tostring(tablePos+1)]
    local ma11 = bit._and(ma1,0xffffffff)
    local ma22 = bit._and(ma2,0xffffffff)

    local maList = {}
    for i = 0,4 do
        local ma = bit._and(bit._rshift(ma11,6*i),0x3f)
        if(ma > 0) then
            table.insert(maList,ma)
        end
    end
    for i = 0,4 do
        local ma = bit._and(bit._rshift(ma22,6*i),0x3f)
        if(ma > 0) then
            table.insert(maList,ma)
        end
    end

    local _, huaCards = self:getDownCardData(gameOvertAck["player"..tostring(tablePos).."DownCards"], g_gameGlobal:getTablePlayerPosWithTablePos(tablePos), tablePos)

    if #maList > 0 then
        local function colorChangeFunc(cardNode, idx)
            local zhongMa=bit._and(bit._rshift(zhongmaIndex,idx-1),0x1)
            if zhongMa == 1 then
                cardNode:setColor(display.COLOR_GREEN)
            end
        end
        self:createOtherCards(otherPaiBg, maList, colorChangeFunc)
    else
        self:createOtherCards(otherPaiBg, huaCards)
    end
end

function GameResultCell:createOtherCards(otherPaiBg, cards, colorChangeFunc)
    cards = {0x1,0x1,0x1,0x1,0x1,0x1,0x1,0x1,0x1,0x1,0x1}
    local num = #cards
    if colorChangeFunc == nil then colorChangeFunc = function() end end
    if num > 0 then
        otherPaiBg:setVisible(true)
        local bgw,bgh = otherPaiBg:getContentSize().width,otherPaiBg:getContentSize().height
        local txt = otherPaiBg:getChildByName("Text_zs")
        local arrowMark = otherPaiBg:getChildByName("arrow_mark")
        local txtOffset = bgh - txt:getPositionY()
        local arrowOffset = bgh - arrowMark:getPositionY()
        local node1 = cc.Node:create()
        local node2 = cc.Node:create()
        local cardNodeOffset = 4
        node1:setPosition(bgw/2 + 10, bgh-cardNodeOffset)
        node2:setPosition(bgw/2 + 10, bgh-cardNodeOffset)
        node1:addTo(otherPaiBg,1)
        node2:addTo(otherPaiBg,0)

        local oneCardH = 0
        local maxRow
        local rowOffset = 0
        local lineCount = 4
        txt:setString(num.."张")
        for i = 1,num do
            local card = cards[i]
            local c = self:getNormalCard(card)
            c:setScale(0.5)

            local row = math.floor((i-1)/lineCount)
            local col = (i-1) - row*lineCount

            local cardSize = c:getBoundingBox()
            oneCardH = cardSize.height
            c:setLocalZOrder(1*row)
            c:setPosition((col-lineCount*0.5)*cardSize.width, 0-row*(cardSize.height+rowOffset)):setAnchorPoint(cc.p(0,1))
            if row<2 then
                c:addTo(node1)
            else
                c:addTo(node2)
            end
            maxRow = row
            colorChangeFunc(c, i)
        end

        if maxRow >= 2 then
            arrowMark:setVisible(true)
            otherPaiBg:setTouchEnabled(true)
            node2:setVisible(false)
            local isDeploy = false
            local function clickFunc()
                isDeploy = not isDeploy
                if isDeploy then
                    arrowMark:setScaleY(-1)
                    node2:setVisible(true)
                    local newHeight = bgh + (maxRow-1)*(oneCardH+rowOffset)
                    otherPaiBg:setContentSize(cc.size(bgw, newHeight))
                    node1:setPositionY(newHeight-cardNodeOffset)
                    node2:setPositionY(newHeight-cardNodeOffset)
                    txt:setPositionY(newHeight - txtOffset)
                    arrowMark:setPositionY(newHeight - arrowOffset)
                else
                    arrowMark:setScaleY(1)
                    node2:setVisible(false)
                    local newHeight = bgh
                    otherPaiBg:setContentSize(cc.size(bgw, newHeight))
                    node1:setPositionY(newHeight-cardNodeOffset)
                    node2:setPositionY(newHeight-cardNodeOffset)
                    txt:setPositionY(newHeight - txtOffset)
                    arrowMark:setPositionY(newHeight - arrowOffset)
                end
            end
            otherPaiBg:onClick(clickFunc)
        else
            arrowMark:setVisible(false)
        end
    else
        otherPaiBg:setVisible(false)
    end
end

function GameResultCell:getDownCardData(downCards, localTablePos, serverTablePos)
    local res = {}
    local huaCards = {}
    for i,cards in ipairs(downCards) do
        local c1 = bit._and(cards.cardValue, 0xff)
        local c2 = bit._and(bit._rshift(cards.cardValue, 8), 0xff)
        local c3 = bit._and(bit._rshift(cards.cardValue, 16), 0xff)
        local chi_card = bit._and(bit._rshift(cards.cardValue, 24), 0xff)

        if cards.type == 0 then            
            if c1 ~= 0 then huaCards[#huaCards+1] = c1 end
            if c2 ~= 0 then huaCards[#huaCards+1] = c2 end
            if c3 ~= 0 then huaCards[#huaCards+1] = c3 end
            if chi_card ~= 0 then huaCards[#huaCards+1] = chi_card end
        else

            local cData = {type = cards.type}
            if cards.type == g_gameConstant.MAHJONG_OPERTAION_AN_GANG
                or cards.type == g_gameConstant.MAHJONG_OPERTAION_MING_GANG
                or cards.type == g_gameConstant.MAHJONG_OPERTAION_BU_GANG then
                cData.card = {c1, c1, c1, c1}
            else
                cData.card = {c1, c2, c3}
            end

            -- 设置颜色
            cData.cardColor = {}
            local maxPlayerNum = g_gameGlobal:getMaxPlayerNum()            
            local transedOffset = g_gameGlobal:transChuOffset(maxPlayerNum, localTablePos, serverTablePos, cards.chuOffset)
            
            for i,_ in ipairs(cData.card) do
                self:addColor(transedOffset, cards.type, i, cData.cardColor)
            end
            cData.chuOffset = transedOffset

            table.insert(res, cData)
        end
    end
    return res, huaCards
end

-- 给牌添加颜色
function GameResultCell:addColor(offset, op, cardIndex, t)
    if op == g_gameConstant.MAHJONG_OPERTAION_AN_GANG
        or op == g_gameConstant.MAHJONG_OPERTAION_CHI then
        t[cardIndex] = {display.COLOR_WHITE, false}
        return
    end

    local chuColor = cc.c3b(111,199,255)
    t[cardIndex] = {display.COLOR_WHITE, false}

    if (offset == -1) and (cardIndex == 1) then
        t[cardIndex] = {chuColor, true}

    elseif (offset == 0) and ((cardIndex == 2) or (cardIndex == 4)) then
        t[cardIndex] = {chuColor, true}

    elseif (offset == 1) and (cardIndex == 3) then
        t[cardIndex] = {chuColor, true}

    else
        t[cardIndex] = {display.COLOR_WHITE, false}
    end
end

function GameResultCell:showDownCards(downCards, posState, serverTablePos)
    local data, _ = self:getDownCardData(downCards, posState, serverTablePos)
    local parent = self.cardNode
    -- parent:removeAllChildren()

    local cellSize = m_cardSize
    local chiSpace = m_cardSpace
    local chiWidth = 3*cellSize.width+chiSpace

    for i,cInfo in ipairs(data) do
        local node = display.newNode()
        local cType = cInfo.type
        for j,card in ipairs(cInfo.card) do

            local c
            -- 暗杠显示背面
            if cType == g_gameConstant.MAHJONG_OPERTAION_AN_GANG then
                if j <= 3 then
                    c = self:getNormalCard(0x39):addTo(node)
                end
            end

            c = c or self:getNormalCard(card):addTo(node)

            if j>3 then
                c:setPosition(1*cellSize.width, 5)
            else
                c:setPosition((j-1)*cellSize.width, 0)
            end
            c:setColor(cInfo.cardColor[j][1])
            --这里加方向标记都用本家视角
            local fixPosState = 1
            --self:addChuDirArrow(c, cInfo.chuOffset, cType, j-1, fixPosState, cInfo.cardColor[j][2])
            --c:sameSize(m_cardSize)
        end
        node:addTo(parent):setPosition((i-1)*(chiWidth), 0)
    end
    return chiWidth*(#data)
end

function GameResultCell:showHandCard(startX, handCards)
    local parent = self.cardNode
    local node = display.newNode()
    for i,card in ipairs(handCards) do
        local c = self:getNormalCard(card):addTo(node)
        if g_gameGlobal:isLaiZi(card, true) then
            c:setColor(g_gameConstant.LAIZI_COLOR)
        end
        c:setPosition((i-1)*m_cardSize.width, 0)
        --c:sameSize(m_cardSize)
    end
    node:addTo(parent):setPosition(startX, 0)
    startX = startX + (m_cardSize.width)*(#handCards) + m_cardSpace

    return startX
end


function GameResultCell:showHuCard(startX, huCard, isFirstHuPosition)
    local parent = self.cardNode
    if huCard ~= 0 then
        local c = self:getNormalCard(huCard):addTo(parent)
        if g_gameGlobal:isLaiZi(huCard, true) then
            c:setColor(g_gameConstant.LAIZI_COLOR)
        end
        c:setPosition(startX+10, 0)
        --c:sameSize(m_cardSize)
        -- 胡图片
        display.newSprite("#game_result/game_result_hu_bt.png"):addTo(parent, 1):setPosition(startX+65, 20)
        startX = startX + m_cardSize.width + m_cardSpace
        if not isFirstHuPosition then
            c:setOpacity(160)
        end
    end

    return startX
end



function GameResultCell:getNormalCard( value )
    return g_gameGlobal:getLaydownCard( value, 1 ):setAnchorPoint(cc.p(0, 0.5)):setScale(g_gameConstant.CARD_NODE_CONFIG[g_UserDataTable.mjCardType][1].chuFixScale)
end



function GameResultCell:get()
    return self.listitem
end


return GameResultCell 7  