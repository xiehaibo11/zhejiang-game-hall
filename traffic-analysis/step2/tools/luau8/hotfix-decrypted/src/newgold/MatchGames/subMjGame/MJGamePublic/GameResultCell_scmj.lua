--[[ * @Author: quan youjun 
 * @Date: 2019-01-05 11:05:52  
 ]]
------------------------------计分界面----------------------------
local GameResultCell = class("GameResultCell")

-- local Platform = require("app.platform.Platform")
local netObj, eventObj = unpack(require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msg_obj"))
local GameTool = import(".GameTool")

local m_cardSize = cc.size(46, 71.2)
local m_cardSpace = 15




function GameResultCell:ctor(params)
    local params = params or {}

    self.gameRequestAck = params and params.requestStartGameAck
    local gameRequestAck = self.gameRequestAck or g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)
    local myTablePos = gameRequestAck.tablePos

    self.initCardZorder = 100
    m_cardSize = self:getNormalCard(1):getBoundingBox()
    local listitem = params.listitem
    self.listitem = listitem

    display.loadSpriteFrames("game_result/scmj/scmjGameResult.plist", "game_result/scmj/scmjGameResult.png")
    listitem:show()
    local data = params.data

    local playerName = listitem:getChildByName("playerName")
    local huType = listitem:getChildByName("huType")
    local fanNum = listitem:getChildByName("fanNum")
    local playerScore = listitem:getChildByName("playerScore")
    local sortHuType = listitem:getChildByName("sortHuType")
    local Node_head = listitem:getChildByName("head_img")
    local headImg = Node_head:getChildByName("head_icon")
    local Node_startPos = listitem:getChildByName("Node_startPos")
    local zhuangImg = listitem:getChildByName("zhuang")

    if g_gameGlobal:getCurrentWanFa().wanfa == g_gameConstant.GAME_PLAY_RULE_RCMJ_RCWF then
        -- 荣昌玩法隐藏番
        fanNum:setVisible(false)
    end

    local tianHuCards = 14
    if g_gameGlobal:isSevenCardGame() then
        tianHuCards = 8
    elseif g_gameGlobal:isTenCardGame() then
        tianHuCards = 11
    end
    self.tianHuCards = tianHuCards

    local Image_my_bg = listitem:getChildByName("Image_my_bg")
    if Image_my_bg then
        Image_my_bg:setVisible(myTablePos == data.tablePos)
    end

    local gameScene = g_gameGlobal:getGameScene()
    if tolua.isnull(gameScene) then
        return
    end
    local gameBase = gameScene:getChildByName("gameBase")
    if not tolua.isnull(gameBase) then
        zhuangImg:setVisible(gameBase:getBankerTablePos() == data.tablePos)
        zhuangImg:setZOrder(3)
    else
        zhuangImg:setVisible(false)
    end

    if data.huNum > 0 and data.huNum < 4 then
        local typeStr = string.format("Match/" .. "game_result/scmj/n_playLabel_%dhu.png", data.huNum)
        sortHuType:ignoreContentAdaptWithSize(true)
        sortHuType:loadTexture(typeStr, ccui.TextureResType.plistType)
    else
        sortHuType:setVisible(false)
    end

    local socrePngFile = "game_result/scmj/pic_num_red.png"
    if data.gold < 0 then
        socrePngFile = "game_result/scmj/pic_num_blue.png"
    end
    playerScore:setProperty("/" .. tostring(math.abs(data.gold)), socrePngFile, 38, 54, ".");

    fanNum:setString(data.fan .. "番")
    -- Text_score:setString(data.gold)
    -- playerScore
    --Label_id:setString(data.playerIndex)
    playerName:setString(g_gameGlobal:cutStringLength(data.playerName, 4))
    huType:setString(data.desc)
    self.cardNode = Node_startPos
    local tablePos
    local gameOvertAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_GAME_OVER_ACK)
    g_gameGlobal:checkMJGameOverTianHuBug(gameOvertAck)
    for i = 1, #gameOvertAck.players do
        if gameOvertAck.players[i].playerIndex == data.playerIndex then
            tablePos = gameOvertAck.players[i].tablePos
            break
        end
    end

    local startGameRequestAck = self.gameRequestAck or g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)

    local player = g_gameGlobal:getMyselfInfo()
    local frameKind = data.headImg
    if player.playerIndex == data.playerIndex then
        g_gameGlobal:requestHttpImageWithNoCut(frameKind, data.headImgUrl, headImg, true, nil, "common/headframe_stencil.png")
    else
        if data.headImgUrl == "" then data.headImgUrl = string.format("robotHeadImg/%d.jpg", data.playerIndex % 100 + 1) end
        g_gameGlobal:requestHttpImageWithNoCut(frameKind, data.headImgUrl, headImg, false, nil, "common/headframe_stencil.png")
    end

    -- 吃碰杠
    local startX = self:showDownCards(gameOvertAck["player" .. tostring(tablePos) .. "DownCards"], g_gameGlobal:getTablePlayerPosWithTablePos(tablePos), tablePos)
    startX = self:showHandCard(startX, gameOvertAck["player" .. tostring(tablePos) .. "HandCards"])

    --一炮多响的情况下，不是第一个胡的玩家的胡牌半透明，暂时不考虑血流玩法的情况
    startX = self:showHuCard(
    startX,
    bit._and(gameOvertAck["huCardP" .. tostring(tablePos + 1)], 255),
    gameOvertAck.huPosition == data.tablePos
    )

    local _, huaCards = GameTool.parseResultDownCardData(
    gameOvertAck["player" .. tostring(tablePos) .. "DownCards"],
    g_gameGlobal:getTablePlayerPosWithTablePos(tablePos),
    tablePos,
    g_gameGlobal:getMaxPlayerNum())
    startX = self:createOtherCards(startX, huaCards)

end

function GameResultCell:makeCardZOrder()
    self.initCardZorder = self.initCardZorder - 1
    return self.initCardZorder
end

function GameResultCell:createOtherCards(startX, cards, colorChangeFunc)
    if colorChangeFunc == nil then colorChangeFunc = function() end end
    startX = startX + m_cardSpace
    local parent = self.cardNode
    local node = display.newNode()
    for i, card in ipairs(cards) do
        local c = self:getNormalCard(card):addTo(node, #cards - i)
        colorChangeFunc(c, i)
        c:setPosition((i - 1) * m_cardSize.width, 0)
        --c:sameSize(m_cardSize)
    end
    node:addTo(parent):setPosition(startX, 0):setLocalZOrder(self:makeCardZOrder())
    startX = startX + (m_cardSize.width) * (#cards) + m_cardSpace

    return startX
end

function GameResultCell:showDownCards(downCards, posState, serverTablePos)
    local data, _ = GameTool.parseResultDownCardData(downCards, posState, serverTablePos, g_gameGlobal:getMaxPlayerNum())
    local parent = self.cardNode
    -- parent:removeAllChildren()

    local cellSize = m_cardSize
    local chiSpace = m_cardSpace
    local chiWidth = 3 * cellSize.width + chiSpace

    local CardsTypeImg = {
        [g_gameConstant.MAHJONG_OPERTAION_AN_GANG] = "game_result/scmj/img_angang.png",
        [g_gameConstant.MAHJONG_OPERTAION_BU_GANG] = "game_result/scmj/img_bugang.png",
        [g_gameConstant.MAHJONG_OPERTAION_MING_GANG] = "game_result/scmj/img_minggang.png",
    }

    for i, cInfo in ipairs(data) do
        local node = display.newNode()
        local cType = cInfo.type
        for j, card in ipairs(cInfo.card) do

            local c
            -- 暗杠显示背面
            if cType == g_gameConstant.MAHJONG_OPERTAION_AN_GANG then
                if j <= 3 then
                    c = self:getNormalCard(57):addTo(node)
                end
            end

            c = c or self:getNormalCard(card):addTo(node)

            if j > 3 then
                c:setPosition(1 * cellSize.width, 11.5)
                c:setLocalZOrder(#data)
            else
                c:setPosition((j - 1) * cellSize.width, 0)
                c:setLocalZOrder(#data - j)
            end

            if g_gameConstant.SWITCHER_LAYDOWN_PROVIDER_SIGN ~= false then
                c:setColor(cInfo.cardColor[j][1])
            end
            --这里加方向标记都用本家视角
            local fixPosState = 1
        end

        if CardsTypeImg[cType] then
            local imgWidth = cellSize.width * 3
            local typeImg = ccui.ImageView:create("Match/" .. CardsTypeImg[cType], ccui.TextureResType.plistType)
            local origSize = typeImg:getContentSize()
            local scale = imgWidth / origSize.width
            typeImg:addTo(node)
            :move(cellSize.width * 1.5, -cellSize.height)
            :setLocalZOrder(#data)
            :setScale(scale)
        end

        node:addTo(parent):setPosition((i - 1) * (chiWidth), 0):setLocalZOrder(self:makeCardZOrder())
    end
    return chiWidth * (#data)
end


function GameResultCell:addChuDirArrow(obj, offset, op, cardIndex, posState, inThisCard)
    if not obj then
        return
    end

    if op == g_gameConstant.MAHJONG_OPERTAION_AN_GANG or op == g_gameConstant.MAHJONG_OPERTAION_CHI then
        return
    end

    if not inThisCard then
        return
    end

    local maxPlayerNum = g_gameGlobal:getMaxPlayerNum()
    local dirImg, _, _ = g_gameGlobal:getChuDirArrowImg(posState, offset)

    obj:removeChildByName("chuPlayerDir")
    if dirImg then
        local scale = 1
        local nodePos = cc.p(obj:getContentSize().width * 0.5, 45)
        local dirNode = ccui.ImageView:create("Match/" .. dirImg, ccui.TextureResType.plistType)
        dirNode:setPosition(nodePos)
        dirNode:setScale(scale)
        obj:addChild(dirNode)
        dirNode:setName("chuPlayerDir")
    end
end


function GameResultCell:showHandCard(startX, handCards)
    local parent = self.cardNode
    local node = display.newNode()

    -- Howns 2019-12-03 打补丁，防止换三张天胡时手牌数据变多一张
    local function checkIsChangeThreeCardAndTianHu()
        local value = g_gameGlobal:getMJGameTianHuCard()
        if value > 0 then
            for k, v in ipairs(handCards or {}) do
                if v == value and #handCards == self.tianHuCards then
                    table.remove(handCards, k)
                end
            end
        end
    end

    checkIsChangeThreeCardAndTianHu()

    for i, card in ipairs(handCards) do
        local c = self:getNormalCard(card):addTo(node, #handCards - i)
        if g_gameGlobal:isLaiZi(card, true) then
            GameTool.addLaiziMarkInCardNode(c)
        end
        c:setPosition((i - 1) * m_cardSize.width, 0)
        --c:sameSize(m_cardSize)
    end
    node:addTo(parent):setPosition(startX, 0):setLocalZOrder(self:makeCardZOrder())
    startX = startX + (m_cardSize.width) * (#handCards) + m_cardSpace

    return startX
end


function GameResultCell:showHuCard(startX, huCard, isFirstHuPosition)
    local parent = self.cardNode
    if huCard ~= 0 then
        local c = self:getNormalCard(huCard):addTo(parent):setLocalZOrder(self:makeCardZOrder())
        if g_gameGlobal:isLaiZi(huCard, true) then
            GameTool.addLaiziMarkInCardNode(c)
        end
        c:setPosition(startX + m_cardSpace, 0)
    end

    return startX
end



function GameResultCell:getNormalCard(value)
    return g_gameGlobal:getLaydownCard(value, 1):setAnchorPoint(cc.p(0, 1)):setScale(g_gameConstant.CARD_NODE_CONFIG[g_UserDataTable.mjCardType][1].chuFixScale)
end



function GameResultCell:get()
    return self.listitem
end


return GameResultCell�+