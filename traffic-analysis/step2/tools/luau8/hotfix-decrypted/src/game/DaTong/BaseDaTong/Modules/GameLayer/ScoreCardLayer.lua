local ScoreCardLayer    = CF.gameClass("ScoreCardLayer", CF.ViewBase)

local CardArea          = CF.gameRequire("Modules.CardLayer.CardFFZArea")
local CardLayerConfig   = CF.gameRequire("Modules.CardLayer.CardLayerConfig")
local RemoteImage       = CF.RemoteImage

local KW_IMG_HEAD_FRAME = "KW_IMG_HEAD_FRAME"
local KW_TEXT_NICK_NAME = "KW_TEXT_NICK_NAME"
local KW_DEFAULT_HEAD_IMG_NAME = "KW_DEFAULT_HEAD_IMG_NAME"

function ScoreCardLayer:getCSBPath()
    return "res/cocosStudio/DaTong/GameLayer/CSB/ScoreCardLayer.csb"
end

function ScoreCardLayer:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose",  type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnClose"},
        ["_KW_LIST_VIEW"] = { varName = "_listView"},
        ["_KW_LIST_ITEM"] = { varName = "_listViewItem"},
    }
end

function ScoreCardLayer:ctor(param)
    ScoreCardLayer.super.ctor(self,param)
    self._gameData = CF.game:getModule("GameLayer"):getGameData()
    self:createChildren()
end

function ScoreCardLayer:createChildren()
    self:initListView()
    self:initPlayersInfo()
    self:updateScoreCard()
end

function ScoreCardLayer:initListView()
    if not self._listView then return end
    if not self._listViewItem then return end
    self._listView:setItemModel(self._listViewItem)
    self._listView:setScrollBarEnabled(false)
    for sSeat = 0 , CF.roomData:getMaxPlayer() - 1 do
        local playerData = CF.roomData:getPlayerDataBySeatId(sSeat)
        if playerData then
            self._listView:pushBackDefaultItem()
        end
    end
end

function ScoreCardLayer:initPlayersInfo()
    if not self._listView then return end
    local products = self._listView:getItems() or {}
    local productIndex = 0
    for sSeat = 0 , CF.roomData:getMaxPlayer() - 1 do
        local playerData = CF.roomData:getPlayerDataBySeatId(sSeat)
        if playerData then
            productIndex = productIndex + 1
            local infoItem = products[productIndex]
            CF.UITool.setText(infoItem,KW_TEXT_NICK_NAME,playerData:getNickName())
            self:updateImg(CF.UITool.seekNodeByName(infoItem,KW_IMG_HEAD_FRAME),playerData:getAvatarUrl())
            self:updateHeadFrame(CF.UITool.seekNodeByName(infoItem,KW_IMG_HEAD_FRAME),playerData:getNumberID())
        end
    end
end

function ScoreCardLayer:updateScoreCard()
    if not self._listView then return end
    local allScoreCards = self._gameData:getAllScoreCards() or {}
    local products = self._listView:getItems()
    for sSeat = 0 , CF.roomData:getMaxPlayer() - 1 do
        local onePlayerCard = allScoreCards[sSeat+1]
        if onePlayerCard then
            local ucCards = onePlayerCard.ucCards or {}
            local score = onePlayerCard.score or 0
            self:showCardItem(CF.UITool.seekNodeByName(products[sSeat+1] , "KW_CARD_POS"), ucCards)
            score = score > 0 and ("+" .. score) or score
            CF.UITool.setText(products[sSeat+1], "KW_TEXT_CARD_SCORE" , score)
        end
    end
end

function ScoreCardLayer:showCardItem(node,cardIDs)
    if not node then
        return
    end
    local cardAreaNode = CardArea.new()
    cardAreaNode:setIgnoreAnchorPointForPosition(true)
    cardAreaNode:setAnchorPoint(cc.p(0, 0.5))
    cardAreaNode:setStartPosition(0,0)
    cardAreaNode:setCardDistance(60,50)
    cardAreaNode:setCarAddDistance(CardLayerConfig.CardAddDirectionX.Right, CardLayerConfig.CardAddDirectionY.Down)
    cardAreaNode:setLineCardCount(12)
    cardAreaNode:setScale(0.9)
    cardAreaNode:setShowCards(cardIDs)
    node:addChild(cardAreaNode)
end

function ScoreCardLayer:updateImg(node, url)
    if not node then
        return
    end

    if url == "" then
        url = "http://thirdwx.qlogo.cn/mmopen/vi_32/RZWHFDljz1SW2Azl6kZyxic4ziaibicnUPo8dB3YiaGbhpyx3Tq34Vemk6KqexyJQJtAphjc9TELicPuRryc0UQ4DPmw/132"
    end

    local headImg = CF.UITool.seekNodeByName(node, KW_DEFAULT_HEAD_IMG_NAME)
    if headImg == nil then
        local size = node:getContentSize()
        headImg = RemoteImage.new()
        :setPosition(size.width / 2, size.height / 2)
        :ignoreContentAdaptWithSize(false)
        :setContentSize(size.width, size.height)
        :setName(KW_DEFAULT_HEAD_IMG_NAME)
        :addTo(node)
    end
    headImg:setUrl(url)
end

function ScoreCardLayer:updateHeadFrame(node, numid)
    local GameBagUILogic = CF.gameRequire("Modules.GameBag.UILogic")
    local headFrame = CF.roomData:getHeadFrameData(numid) or {}
    GameBagUILogic.showHeadFrame(node, headFrame.frame_url, cc.size(0 , 0), cc.size(50,50), headFrame.propid)
end

function ScoreCardLayer:showSelf(zorder)
    local parent = display.getRunningScene()
    parent:addChild(self, CF.ZORDER.WINDOW)
    return self
end

function ScoreCardLayer:onBtnClose(send, eventType)
    self:removeSelf()
end

return ScoreCardLayerc