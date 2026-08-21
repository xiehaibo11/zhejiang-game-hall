--[[
 * @Author: zhoufan
 * @Date: 2017年11月4日 11:31:19
 ]]

------------------------------计分界面----------------------------
local GameResultCell = class("GameResultCell")

-- local Platform = require("app.platform.Platform")
local netObj,eventObj = unpack(require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msg_obj"))
local GameTool = import(".GameTool")

local m_cardSize  = cc.size(46, 71.2)
local m_cardSpace = 15




function GameResultCell:ctor(params)
    local params = params or {}
    self.gameRequestAck = params and params.requestStartGameAck
    
    self.initCardZorder = 100
    m_cardSize = self:getNormalCard(0x1):getBoundingBox()
    local listitem  = params.listitem
    self.listitem = listitem

    display.loadSpriteFrames("game_result/game_result0.plist", "game_result/game_result0.png")
    listitem:show()
    local data = params.data

    local Label_name = listitem:getChildByName("Label_name")
    local Label_id = listitem:getChildByName("Label_id")
    local Label_des = listitem:getChildByName("Label_des")
    local AtlasLabel_score = listitem:getChildByName("AtlasLabel_score")
    local Text_score = listitem:getChildByName("Text_score")
    local Label_no_player = listitem:getChildByName("Label_no_player")

    local headbg = listitem:getChildByName("Image_headbg")
    local fangzhuFlag = listitem:getChildByName("Image_fangzhu")
    local zhuangjiaFlag = listitem:getChildByName("Image_zhuangjia")
    local Image_bg = listitem:getChildByName("Image_bg")
    local headImg = headbg:getChildByName("head_icon")
    local cardBaseNode = listitem:getChildByName("cardsBasePanel")
    self.huIcon = listitem:getChildByName("hu_icon")
    self.huIcon:setVisible(false)

    if data == nil then
        Label_name:setString("")
        Label_id:setString("")
        Label_des:setString("")
        AtlasLabel_score:setString("")
        Text_score:setString("")
        
        Label_no_player:setVisible(true)

        fangzhuFlag:setVisible(false)
        zhuangjiaFlag:setVisible(false)
        
        Label_des:setString(tostring(params.fengDirStr))
        return 
    end

    Label_no_player:setVisible(false)

    Label_id:setString(data.playerIndex)
    Label_name:setString(g_gameGlobal:cutStringLength(data.playerName))
    Label_des:setString(data.desc)

    local socrePngFile = "game_result/game_result_win_num.png"
    if data.gold < 0 then
        socrePngFile = "game_result/game_result_lose_num.png"
    end
    AtlasLabel_score:setProperty(( data.gold ~= 0 and "/" or "").. tostring(math.abs(data.gold)), socrePngFile, 37, 50, "/");
    Text_score:setString(data.gold)
    

    local tablePos = data.tablePos
    local gameOvertAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_GAME_OVER_ACK)    
    local startGameRequestAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)

    fangzhuFlag:setVisible(startGameRequestAck.createPlayerID == data.playerID and (not startGameRequestAck.clubId or startGameRequestAck.clubId==0))
    zhuangjiaFlag:setVisible(data.tablePos == gameOvertAck.dealerPos)


    self.cardNode = cardBaseNode

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


    local _, huaCards = GameTool.parseResultDownCardData(
        gameOvertAck["player"..tostring(tablePos).."DownCards"],
        g_gameGlobal:getTablePlayerPosWithTablePos(tablePos),
        tablePos,
        g_gameGlobal:getMaxPlayerNum())
    startX = self:createOtherCards(startX, huaCards)

    --中码
    -- local ma1 = gameOvertAck["maCardP"..tostring(tablePos+1)]
    -- local ma2 = gameOvertAck["huaP"..tostring(tablePos+1)]
    -- local zhongmaIndex = gameOvertAck["zhongMaIndex"..tostring(tablePos+1)]
    -- local ma11 = bit._and(ma1,0xffffffff)
    -- local ma22 = bit._and(ma2,0xffffffff)

    -- local maList = {}
    -- for i = 0,4 do
    --     local ma = bit._and(bit._rshift(ma11,6*i),0x3f)
    --     if(ma > 0) then
    --         table.insert(maList,ma)
    --     end
    -- end
    -- for i = 0,4 do
    --     local ma = bit._and(bit._rshift(ma22,6*i),0x3f)
    --     if(ma > 0) then
    --         table.insert(maList,ma)
    --     end
    -- end

    -- local _, huaCards = GameTool.parseResultDownCardData(
    --     gameOvertAck["player"..tostring(tablePos).."DownCards"],
    --     g_gameGlobal:getTablePlayerPosWithTablePos(tablePos),
    --     tablePos,
    --     g_gameGlobal:getMaxPlayerNum())

    -- if #maList > 0 then
    --     local function colorChangeFunc(cardNode, idx)
    --         local zhongMa=bit._and(bit._rshift(zhongmaIndex,idx-1),0x1)
    --         if zhongMa == 1 then
    --             --cardNode:setColor(display.COLOR_GREEN)
    --         end
    --     end
    --     startX = self:createOtherCards(startX, maList, colorChangeFunc)
    -- end
    
end

function GameResultCell:makeCardZOrder()
    self.initCardZorder = self.initCardZorder -1
    return self.initCardZorder
end

function GameResultCell:createOtherCards(startX, cards, colorChangeFunc)
    if colorChangeFunc == nil then colorChangeFunc = function() end end
    startX = startX + m_cardSpace
    local parent = self.cardNode
    local node = display.newNode()
    for i,card in ipairs(cards) do
        local c = self:getNormalCard(card):addTo(node, #cards-i)
        colorChangeFunc(c, i)
        c:setPosition((i-1)*m_cardSize.width, 0)
        --c:sameSize(m_cardSize)
    end
    node:addTo(parent):setPosition(startX, 0):setLocalZOrder(self:makeCardZOrder())
    startX = startX + (m_cardSize.width)*(#cards) + m_cardSpace

    return startX
end

function GameResultCell:showDownCards(downCards, posState, serverTablePos)
    local data, _ = GameTool.parseResultDownCardData(downCards, posState, serverTablePos, g_gameGlobal:getMaxPlayerNum())
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
                c:setPosition(1*cellSize.width, 11.5)
                c:setLocalZOrder(#data)
            else
                c:setPosition((j-1)*cellSize.width, 0)
                c:setLocalZOrder(#data-j)
            end
            c:setColor(cInfo.cardColor[j][1])
            --这里加方向标记都用本家视角
            local fixPosState = 1
            --self:addChuDirArrow(c, cInfo.chuOffset, cType, j-1, fixPosState, cInfo.cardColor[j][2])
            --c:sameSize(m_cardSize)
        end
        node:addTo(parent):setPosition((i-1)*(chiWidth), 0):setLocalZOrder(self:makeCardZOrder())
    end
    return chiWidth*(#data)
end

--[[
function GameResultCell:addChuDirArrow(obj, offset, op, cardIndex, posState, inThisCard)
    if not obj then
        return
    end

    if op == g_gameConstant.MAHJONG_OPERTAION_AN_GANG or op == g_gameConstant.MAHJONG_OPERTAION_CHI then
        return 
    end

    -- if cardIndex ~= 1 and cardIndex ~= 3 then
    --     return
    -- end
    if not inThisCard then
        return
    end

    local maxPlayerNum = g_gameGlobal:getMaxPlayerNum()
    local dirImg, _, _ = g_gameGlobal:getChuDirArrowImg(posState, offset)

    obj:removeChildByName("chuPlayerDir")
    if dirImg then
        local scale = 1
        local nodePos = cc.p(obj:getContentSize().width*0.5, 45)
        local dirNode = ccui.ImageView:create(dirImg, ccui.TextureResType.plistType)
        dirNode:setPosition(nodePos)
        dirNode:setScale(scale)
        obj:addChild(dirNode)
        dirNode:setName("chuPlayerDir")
    end
end
--]]

function GameResultCell:showHandCard(startX, handCards)
    local parent = self.cardNode
    local node = display.newNode()
    for i,card in ipairs(handCards) do
        local c = self:getNormalCard(card):addTo(node, #handCards-i)
        if g_gameGlobal:isLaiZi(card, true) then
            GameTool.addLaiziMarkInCardNode(c)
        end
        c:setPosition((i-1)*m_cardSize.width, 0)
        --c:sameSize(m_cardSize)
    end
    node:addTo(parent):setPosition(startX, 0):setLocalZOrder(self:makeCardZOrder())
    startX = startX + (m_cardSize.width)*(#handCards) + m_cardSpace

    return startX
end


function GameResultCell:showHuCard(startX, huCard, isFirstHuPosition)
    local parent = self.cardNode
    if huCard ~= 0 then
        local c = self:getNormalCard(huCard):addTo(parent):setLocalZOrder(self:makeCardZOrder())
        if g_gameGlobal:isLaiZi(huCard, true) then
            GameTool.addLaiziMarkInCardNode(c)
        end
        c:setPosition(startX+m_cardSpace, 0)
        --c:sameSize(m_cardSize)
        -- 胡图片
        display.newSprite("#game_result/game_result_hu_bt.png"):setAnchorPoint(cc.p(0.6, 0.6)):addTo(c, 1):setPosition(c:getContentSize().width, c:getContentSize().height)
        startX = startX + m_cardSize.width + m_cardSpace
        if not isFirstHuPosition then
            c:setOpacity(160)
        end
        self.huIcon:setVisible(true)
    end

    return startX
end



function GameResultCell:getNormalCard( value )
    return g_gameGlobal:getLaydownCard( value, 1 ):setAnchorPoint(cc.p(0, 1)):setScale(g_gameConstant.CARD_NODE_CONFIG[g_UserDataTable.mjCardType][1].chuFixScale)
end



function GameResultCell:get()
    return self.listitem
end


return GameResultCell +  