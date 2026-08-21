local GameDetailsView = CF.gameClass("GameDetailsView", CF.ViewBase)

function GameDetailsView:getCSBPath()
    return CF.gameResourceRootPath .. "DarkShuangKou/GameLayer/CSB/GameDetails.csb"
end

function GameDetailsView:getBindingInfo()
    return {
        ["_KW_TEXT_WIN_SCORE"] = {varName = "_textWinScore"},
        ["_KW_ITEM"] = {varName = "_item"},
        ["_KW_LIST_VIEW"] = {varName = "_listView"},
        ["_KW_PANEL_TOUCH"] = {varName = "_KW_PANEL_TOUCH", onTouchEnded = "close"},
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose", type = CF.UI_TYPE.BUTTON, onTouchEnded = "close"}
    }
end

function GameDetailsView:getProxyEvents()
    return {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_TOTAL_WINLOST", callBack = "close"}
    }
end

function GameDetailsView:ctor(param)
    param = param or {}
    GameDetailsView.super.ctor(self, param)
    self:initUI(param)
end

function GameDetailsView:initUI(param)
    local CardEnum = CF.gameRequire("Define.CardEnum")

    self._textWinScore:setString(CF.StringTool.numberToStringNew(param.curScore, 2))
    self._item:setVisible(false)
    self._listView:setItemModel(self._item)
    for i = #param.myInfos, 1, -1 do
        local info = param.myInfos[i]
        local isWin = info.score >= 0
        self._listView:pushBackDefaultItem()
        local items = self._listView:getItems()
        local item = items[#items]
        item:setVisible(true)

        local itemDi = item:getChildByName("_KW_ITEM_DI")
        if itemDi then
            if isWin then
                itemDi:loadTexture("DarkShuangKouPop_Img_h.png", ccui.TextureResType.plistType)
            else
                itemDi:loadTexture("DarkShuangKouPop_Img_l.png", ccui.TextureResType.plistType)
            end
        end

        local jiaBack = item:getChildByName("_KW_IMG_JIA_BACK")
        if jiaBack then
            if isWin then
                jiaBack:setColor(cc.c3b(0xCA, 0x2B, 0x16))
            else
                jiaBack:setColor(cc.c3b(0x38, 0x30, 0x98))
            end
        end

        local getJiaName = function(seat)
            local selfSeat = CF.roomData:getSelfSeat()
            return (selfSeat - seat + 4) % 4
        end
        local jiaText = item:getChildByName("_KW_IMG_JIA_TEXT")
        if jiaText then
            jiaText:loadTexture(string.format("DarkShuangKouWinLost_Img_jia_%d.png", getJiaName(info.winSeat)), ccui.TextureResType.plistType)
            jiaText:ignoreContentAdaptWithSize(true)
        end

        local juText = item:getChildByName("_KW_TEXT_JU")
        if juText then
            juText:setString(string.format("【第%d轮】", info.round))
        end

        local cardTypeText = item:getChildByName("_KW_TEXT_CARD_TYPE")
        if cardTypeText then
            if info.cardType == CardEnum.CardType.NONE.id then
                cardTypeText:setString("平局")
            else
                local strName = CardEnum.getCardTypeInfoByCardTypeID(info.cardType).name
                if info.attack == 1 then
                    if isWin then
                        strName = strName .. "(暴击)"
                    else
                        strName = strName .. "(被暴击)"
                    end
                end
                cardTypeText:setString(strName)
            end
        end

        local scoreText = item:getChildByName("_KW_TEXT_SCORE")
        if scoreText then
            local scoreString = CF.StringTool.numberToStringNew(info.score, 2)
            if info.score > 0 then
                scoreString = "+" .. scoreString
                scoreText:setTextColor(cc.c3b(0xF2, 0x47, 0x30))
            else
                scoreText:setTextColor(cc.c3b(0x4B, 0x6E, 0xB6))
            end
            scoreText:setString(scoreString)
        end
    end
end

function GameDetailsView:showSelf()
    local parent = display.getRunningScene()
    parent:addChild(self, 95)
end

return GameDetailsView
�