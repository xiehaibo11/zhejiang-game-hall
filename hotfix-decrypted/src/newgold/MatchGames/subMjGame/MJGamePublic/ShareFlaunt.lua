
------------------------------计分界面----------------------------
local ShareFlaunt = class("ShareFlaunt", cc.load("mvc").ViewBase)

-- local Platform = require("app.platform.Platform")
local GameTool = import(".GameTool")
local netObj,eventObj = unpack(require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msg_obj"))

local ExternalFunc = require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.ExternalFunc")

--csb文件
ShareFlaunt.RESOURCE_FILENAME = "ShareFlaunt.csb"

--节点绑定及事件
ShareFlaunt.RESOURCE_BINDING = {
    Panel_Mask = {
        varname="Panel_Mask"
    },
    ["Button_close"] = {
        varname="Button_close",
        events={
            {event="click",method="on_btn_click"}
        }
    },
    ["panel_content/Button_share"] = {
        varname="Button_share",
        events={
            {event="click",method="on_btn_click"}
        }
    },
    ["panel_content/Image_shareBg"] = {
        varname="Image_shareBg",
    },
    ["panel_content/Image_shareBg/huTypeDescNode"] = {
        varname="huTypeDescNode",
    },
    ["panel_content/Image_shareBg/Image_downloadCode"] = {
        varname="Image_downloadCode",
    },
    ["panel_content/Image_shareBg/headImg"] = {
        varname="headImg",
    },
    ["panel_content/Image_shareBg/Text_name"] = {
        varname="Text_name",
    },
    ["panel_content/Image_shareBg/Text_id"] = {
        varname="Text_id",
    },
    ["panel_content/Image_shareBg/Text_socre"] = {
        varname="Text_socre",
    },
    ["panel_content/Image_shareBg/mark_fen"] = {
        varname="mark_fen",
    },
    ["panel_content/Image_shareBg/mark_gold"] = {
        varname="mark_gold",
    },
    ["panel_content/Image_shareBg/Text_tip"] = {
        varname="Text_tip",
    },
    ["panel_content/Image_shareBg/cardsBasePanel"] = {
        varname="cardsBasePanel",
    }
}

function ShareFlaunt:ctor(cardType, huType, gameOvertAck, moreCardType)
    self.needShow=true
    ShareFlaunt.super.ctor(self)


    local myOverData
    if type(gameOvertAck) == "table" and type(gameOvertAck.players) == "table" then
        for i,data in ipairs(gameOvertAck.players) do
            if data.playerID == g_gameGlobal:getMyselfInfo().playerID then
                myOverData = data
                break
            end
        end    
    end
    
    self:createContent(cardType, huType, myOverData, gameOvertAck, moreCardType)
end

function ShareFlaunt:getNormalCard( value )
    return g_gameGlobal:getLaydownCard( value, 1 ):setAnchorPoint(cc.p(0, 1)):setScale(g_gameConstant.CARD_NODE_CONFIG[g_UserDataTable.mjCardType][1].chuFixScale)
end

function ShareFlaunt:createContent(cardType, huType, myOverData, gameOvertAck, moreCardType)
    if not myOverData or not gameOvertAck["huCardP"..tostring(myOverData.tablePos+1)] then
        self:setVisible(false)
        self.needShow = false
        return
    end
    
    self:createCards(myOverData, gameOvertAck)

    self:createHuBigText(cardType, huType, moreCardType)

    
    local player = g_gameGlobal:getMyselfInfo()
    if table.nums(player) > 0 then
        local str = g_gameGlobal:cutStringLength(player.playerName)
        self.Text_name:setString(str)
        self.Text_id:setString(tostring(player.playerIndex))
        if string.len(player.headImageUrl)>5 then
            g_gameGlobal:requestHttpImageWithNoCut(frameKind, player.headImageUrl, self.headImg, true)
        end
    end
    self.Image_downloadCode:loadTexture("noplist/downloadCode.png" , ccui.TextureResType.localType)


    self.Text_socre:setString(tostring(myOverData.gold))

    
    local gameRequestAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)
    self.mark_fen:setVisible(gameRequestAck.vipTableID and gameRequestAck.vipTableID > 0)
    self.mark_gold:setVisible(not self.mark_fen:isVisible())

    self.Text_tip:setVisible(true)
    
end

function ShareFlaunt:createHuBigText(cardType, huType, moreCardType)
    local tmpTab = {}
    tmpTab[#tmpTab+1] = cardType
    tmpTab[#tmpTab+1] = moreCardType
    tmpTab[#tmpTab+1] = huType

    self.huTypeDescNode:removeAllChildren()
    local node = ccui.Widget:create()

    local tmpHeight=0
    for i,v in ipairs(tmpTab) do
        local tmpPath = string.format( "shareFlaunt/shareFlaunt_Text%s.png", tostring(v))
        if cc.FileUtils:getInstance():isFileExist(tmpPath) then
            local sp = ccui.ImageView:create(tmpPath, ccui.TextureResType.localType)
            sp:setAnchorPoint(0.5, 0)
            sp:addTo(node)
            sp:setPosition(0, tmpHeight)
            tmpHeight = tmpHeight + sp:getContentSize().height
        end
    end

    node:addTo(self.huTypeDescNode)
    if #tmpTab>=3 then
        self.huTypeDescNode:setScale(0.8)
    end
    node:setPositionY(tmpHeight*-0.6)
end

function ShareFlaunt:createCards(myOverData, gameOvertAck)
    local myDownCards, _ = GameTool.parseResultDownCardData(
        gameOvertAck["player"..tostring(myOverData.tablePos).."DownCards"],
        g_gameGlobal:getTablePlayerPosWithTablePos(myOverData.tablePos),
        myOverData.tablePos,
        g_gameGlobal:getMaxPlayerNum()
    )
    
    local cellSize = self:getNormalCard(0x1):getBoundingBox()
    local cardSpace = 15
    local chiWidth = 3*cellSize.width+cardSpace
    local startX = 0
    local zCardOrder = 100

    for i,cInfo in ipairs(myDownCards) do
        local node = ccui.Widget:create()
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
                c:setLocalZOrder(#myDownCards)
            else
                c:setPosition((j-1)*cellSize.width, 0)
                c:setLocalZOrder(#myDownCards-j)
            end
            c:setColor(cInfo.cardColor[j][1])
        end
        node:addTo(self.cardsBasePanel):setPosition((i-1)*(chiWidth), 0):setLocalZOrder(zCardOrder)
        zCardOrder = zCardOrder-1
    end

    local startX = chiWidth*(#myDownCards)
    
    local handNode = ccui.Widget:create()
    local handCards = gameOvertAck["player"..tostring(myOverData.tablePos).."HandCards"]
    for i,card in ipairs(handCards) do
        local c = self:getNormalCard(card):addTo(handNode, #handCards-i)
        if g_gameGlobal:isLaiZi(card, true) then
            GameTool.addLaiziMarkInCardNode(c)
        end
        c:setPosition((i-1)*cellSize.width, 0)
    end
    handNode:addTo(self.cardsBasePanel):setPosition(startX, 0):setLocalZOrder(zCardOrder)
    zCardOrder = zCardOrder-1
    startX = startX + (cellSize.width)*(#handCards) + cardSpace

    local huCard = bit._and(gameOvertAck["huCardP"..tostring(myOverData.tablePos+1)], 0xff)    
    if huCard ~= 0 then
        local c = self:getNormalCard(huCard):addTo(self.cardsBasePanel):setLocalZOrder(zCardOrder)
        zCardOrder = zCardOrder-1
        if g_gameGlobal:isLaiZi(huCard, true) then
            GameTool.addLaiziMarkInCardNode(c)
        end
        c:setPosition(startX+cardSpace, 0)
        --c:sameSize(m_cardSize)
        -- 胡图片
        display.loadSpriteFrames("game_result/game_result0.plist", "game_result/game_result0.png")
        ccui.ImageView:create("Match/".."game_result/game_result_hu_bt.png", ccui.TextureResType.plistType)
            :setAnchorPoint(cc.p(0.6, 0.6))
            :addTo(c, 1)
            :setPosition(c:getContentSize().width, c:getContentSize().height)
        startX = startX + cellSize.width + cardSpace
    end
end

function ShareFlaunt:on_btn_click(sender)

end

local function captureScreen(callback)
	local function afterCaptured(succeed, outputFile)
		if succeed then
			callback(outputFile)
		else
			callback()
			ShowToastMsg("图片生成失败，可能是可用空间不足")
		end
	end
	local fileName = "CaptureScreen.jpg"
	cc.Director:getInstance():getTextureCache():removeTextureForKey(fileName)
	cc.utils:captureScreen(afterCaptured, fileName)
end

function ShareFlaunt:shareImgToSDK(shareType)
    
end



function ShareFlaunt:onExit()

end


return ShareFlaunt �!  