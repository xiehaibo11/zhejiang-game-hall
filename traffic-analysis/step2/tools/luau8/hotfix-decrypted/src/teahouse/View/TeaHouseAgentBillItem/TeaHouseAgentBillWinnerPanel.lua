---@class TeaHouseAgentBillWinnerPanel : View
local TeaHouseAgentBillWinnerPanel = class("TeaHouseAgentBillWinnerPanel", TeaHouse.View)

local KW_MAX_SINGLE_PLAYER_COUNT = 4
local KW_ICON_DEFAULT_PNG = "tea_house_bill_item_head.png"
local KW_ICON_DEFAULT_PLIST = "res/cocosStudio/TeaHouse/Image/tea_house_bill_view.plist"

TeaHouseAgentBillWinnerPanel.ColorTextWinScore = cc.c3b(222, 75, 59)
TeaHouseAgentBillWinnerPanel.ColorTextLoseScore = cc.c3b(30, 145, 141)

TeaHouseAgentBillWinnerPanel.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseAgentBillItem/TeaHouseAgentBillWinnerPanel.csb",
    binding = {
        ["_KW_LIST_VIEW"] = { tag = "_KW_LIST_VIEW", name = "_listView", class = "listview" },
        ["_KW_PANEL_BIG_WINNER_DETAIL"] = { tag = "_KW_PANEL_BIG_WINNER_DETAIL", name = "_panelBigWinnerDetail", class = "panel" },
        ["_KW_PANEL_NAME_SCORE"] = { tag = "_KW_PANEL_NAME_SCORE", name = "_panelNameScore", class = "panel" },
        ["_KW_PANEL_NAME_SCORE_ITEM"] = { tag = "_KW_PANEL_NAME_SCORE_ITEM", name = "_panelNameScoreitem", class = "panel" },
        ["_KW_PANEL_ROOT"] = { tag = "_KW_PANEL_ROOT", name = "_panelRoot", class = "panel" },
        ["_KW_PANEL_BIG_WINNER_INFO"] = { tag = "_KW_PANEL_BIG_WINNER_INFO", name = "_panelBigWinnerInfo", class = "panel" },
        ["_KW_PANEL_HEAD"] = { tag = "_KW_PANEL_HEAD", name = "_panelHead", class = "panel" },
        ["_KW_TEXT_NAME"] = { tag = "_KW_TEXT_NAME", name = "_textNickName", class = "text" },
        ["_KW_TEXT_INDEX"] = { tag = "_KW_TEXT_INDEX", name = "_textIndex", class = "text" },
        ["_KW_TEXT_SCORE"] = { tag = "_KW_TEXT_SCORE", name = "_textScore", class = "text" },
        ["_KW_TEXT_COST"] = { tag = "_KW_TEXT_COST", name = "_textCost", class = "text" },
        ["_KW_TEXT_FEE"] = { tag = "_KW_TEXT_FEE", name = "_textFee", class = "text" },
        ["_KW_IMG_FINISH"] = { tag = "_KW_IMG_FINISH", name = "_imgFinish", class = "img" },
        ["_KW_BTN_FINISH"] = { tag = "_KW_BTN_FINISH", name = "_btnFinish", class = "btn", events = "onFinishBill" },
        ["_KW_BTN_BACKLIST"] = { tag = "_KW_BTN_BACKLIST", name = "_btnDetail", class = "btn", events = "onBackListClicked" },
        ["_KW_TEXT_BIGWINNER_TIME"] = { tag = "_KW_TEXT_BIGWINNER_TIME", name = "_textBigWinnerTimes", class = "text" },
    }
}

function TeaHouseAgentBillWinnerPanel:ctor(callback)
    TeaHouseAgentBillWinnerPanel.super.ctor(self)

    self._callback = callback

    self:initUI()
    self:initEvents()
end

function TeaHouseAgentBillWinnerPanel:initUI()
    if self._panelRoot then
        self._panelRoot:removeFromParent()
        self:addChild(self._panelRoot)
    end
    if self._listView and self._panelBigWinnerDetail then
        self._listView:setItemModel(self._panelBigWinnerDetail)
        self._listView:removeAllChildren()
    end
end

function TeaHouseAgentBillWinnerPanel:initEvents()
    local teahouseAgentBill = TeaHouse.manager.teahouseAgentBill
    self:createListener(teahouseAgentBill)
    :addEventListener(teahouseAgentBill.EVENT_DEAL_BIGWINNER, handler(self, self.onDealBill))
end

function TeaHouseAgentBillWinnerPanel:updateDetailInfo(info, detailInfo)
    self._info = info
    -- 刷新头像
    if self._panelHead then
        local size = self._panelHead:getContentSize()
        local remoteImage = TeaHouse.RemoteImage.new()
        :setPosition(size.width / 2, size.height / 2)
        :ignoreContentAdaptWithSize(false)
        :setContentSize(size.width - 5, size.height - 5)
        :addTo(self._panelHead)
        cc.SpriteFrameCache:getInstance():addSpriteFrames(KW_ICON_DEFAULT_PLIST)
        remoteImage:loadTexture(KW_ICON_DEFAULT_PNG, ccui.TextureResType.plistType)
        TeaHouse.SysTool.loadRemoteImage(remoteImage, info.szUrl or "", KW_ICON_DEFAULT_PNG, KW_ICON_DEFAULT_PLIST)
    end
    if self._textNickName then
        local strNickName = TeaHouse.StringTool.getTrimName(info.szNickName or "", 12)
        self._textNickName:setString(strNickName)
    end
    if self._textIndex then
        self._textIndex:setString("序号:" .. tostring(info.nNumid))
    end
    if self._textScore then
        local strScore = tostring(info.nScore)
        self._textScore:setColor(self.ColorTextLoseScore)
        if info.nScore >= 0 then
            strScore = "+" .. strScore
            self._textScore:setColor(self.ColorTextWinScore)
        elseif TeaHouse.BridgeData.isFixPayTypeArea() then
            self._textScore:setColor(self.ColorTextLoseScore)
        end
        self._textScore:setString(strScore)
    end
    local payTypeTable = TeaHouse.manager.teahouseData:getPayTypeByID(TeaHouse.manager.teahouseData:getTeaNumber())
    if self._textCost then
        local costCard = info.nCostCard
        if info.nPropsid and info.nPropsid == TeaHouse.BridgeData.getSmallRoomCardID() then
            costCard = costCard / TeaHouse.BridgeData.getSmallRoomCardRatio()
        end
        self._textCost:setString("房卡消耗:" .. tostring(costCard))
        --预付AA模式下不显示
        local teahousePayMode = TeaHouse.manager.teahouseData:getTeaHousePayMode()
        if  teahousePayMode  == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_FRON 
            and payTypeTable and payTypeTable[1] == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_OWNER_YUFU_MODE_AA then
            self._textCost:setVisible(false)
        end
    end
    if self._textFee then
        if info.fee and info.fee ~= 0 then
            self._textFee:setString(string.format("比赛场卡:%.2f", info.fee))
            self._textFee:setVisible(true)
        else
            self._textFee:setVisible(false)
        end
    end
    if self._textBigWinnerTimes then
        -- self._textBigWinnerTimes:setString("冠军次数:" .. tostring(info.nWinnerTimes))
        local lobbyId = TeaHouse.BridgeData.getLobbyID()
        if TeaHouse.BridgeData.isFixPayTypeArea() then
            if payTypeTable and payTypeTable[1] == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_AA and info.ucFlag == 0  then
                self._textBigWinnerTimes:setString("平摊消耗次数:" .. tostring(info.nAATimes))
            elseif info.ucFlag==1 and lobbyId ~= TeaHouse.LOBBY_ID.LISHUI then--丽水无平摊消耗，不显示平摊消耗次数
                self._textBigWinnerTimes:setString("冠军次数:" .. tostring(info.nWinnerTimes)..",平摊消耗次数:".. tostring(info.nAATimes))
            else
                self._textBigWinnerTimes:setString("冠军次数:" .. tostring(info.nWinnerTimes))    
            end
        else
            self._textBigWinnerTimes:setString("冠军次数:" .. tostring(info.nWinnerTimes))
        end
    end

    if self._listView then
        self._listView:removeAllChildren()
    end
    for i = 1, info.nWinnerTimes + info.nAATimes do
        self:addDetailItem(detailInfo[i])
    end
    if TeaHouse.manager.teahouseAgentBill:isOnlyFlag() then
        self._btnFinish:setVisible(info.billdealed == 0)
        self._imgFinish:setVisible(info.billdealed == 1)
    else
        self._btnFinish:setVisible(info.ucFlag == TeaHouse.manager.teahouseAgentBill.BILL_TYPE.UNBILL)
        self._imgFinish:setVisible(info.ucFlag == TeaHouse.manager.teahouseAgentBill.BILL_TYPE.BILL)
    end
    self:updateBtnFinish()
end

function TeaHouseAgentBillWinnerPanel:addDetailItem(detailInfo)
    if not self._listView then return end
    self._listView:pushBackDefaultItem()
    local items = self._listView:getItems()
    local item = items[#items]
    local roomNumber = ccui.Helper:seekWidgetByName(item, "_KW_TEXT_ROOM_NUMBER")
    if roomNumber then
        roomNumber:setString("房间号:" .. tostring(detailInfo.nTableid))
    end
    local billTime = ccui.Helper:seekWidgetByName(item, "_KW_TEXT_BILL_TIME")
    if billTime then
        local sDate = os.date("%Y-%m-%d %H:%M:%S", detailInfo.nTime) or ""
        billTime:setString(sDate)
    end
    local playCount = ccui.Helper:seekWidgetByName(item, "_KW_TEXT_PLAY_COUNT")
    if playCount then
        local strPlayCount = string.format("局数:%d/%d", detailInfo.nDetailCnt, detailInfo.nFullCnt)
        playCount:setString(strPlayCount)
    end
    local panelItemScore = ccui.Helper:seekWidgetByName(item, "_KW_PANEL_NAME_SCORE")
    self:updateDetailPlayScore(panelItemScore, detailInfo.szNickName, detailInfo.nScore)
end

-- 更新每条冠军战绩的详情分数
function TeaHouseAgentBillWinnerPanel:updateDetailPlayScore(panelItemScore, szNickNames, scores)
    if not panelItemScore then
        return
    end

    local playerCount = #szNickNames
    local panelSize = panelItemScore:getContentSize()
    local singleWidth = panelSize.width / playerCount
    if playerCount > KW_MAX_SINGLE_PLAYER_COUNT then
        singleWidth = panelSize.width / KW_MAX_SINGLE_PLAYER_COUNT
    end
    local singleHeight = panelSize.height / 2
    for i = 1, playerCount do
        local nameScoreLayout = self._panelNameScoreitem:clone()
        local nickNameNode = nameScoreLayout:getChildByName("_KW_TEXT_NICKNAME_ITEM")
        local scoreNode = nameScoreLayout:getChildByName("_KW_TEXT_SCORE_ITEM")
        if nickNameNode then
            local strNickName = szNickNames[i] or ""
            if playerCount <= 4 then
                strNickName = TeaHouse.StringTool.getTrimName(strNickName)
            else
                strNickName = TeaHouse.StringTool.getTrimName(strNickName)
            end
            nickNameNode:setString(strNickName .. ":")
        end
        if scoreNode then
            local strScore = tostring(scores[i])
            scoreNode:setColor(self.ColorTextLoseScore)
            if scores[i] >= 0 then
                strScore = "+" .. strScore
                scoreNode:setColor(self.ColorTextWinScore)
            end
            scoreNode:setString(strScore)
            scoreNode:setPositionX(nickNameNode:getContentSize().width + nickNameNode:getPositionX() + 10)
        end
        if playerCount <= KW_MAX_SINGLE_PLAYER_COUNT then
            nameScoreLayout:setPositionX(singleWidth * (i - 1 / 2))
        else
            if i <= KW_MAX_SINGLE_PLAYER_COUNT then
                nameScoreLayout:setPositionX(singleWidth * (i - 1 / 2))
            else
                nameScoreLayout:setPositionX(singleWidth * (i - KW_MAX_SINGLE_PLAYER_COUNT - 1 / 2))
            end
            nameScoreLayout:setPositionY(singleHeight * (3 - math.ceil(i / KW_MAX_SINGLE_PLAYER_COUNT) - 1 / 2))
        end
        panelItemScore:addChild(nameScoreLayout)
    end
end

function TeaHouseAgentBillWinnerPanel:onBackListClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    if self._callback then
        self._callback()
    end
end

function TeaHouseAgentBillWinnerPanel:onFinishBill(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.manager.teahouseAgentBill:reqDealBills()
    XH.lobby:getModule("FinishBillClose"):reqFinishBillClose(1, {
        to_user_id = self._info and self._info.nNumid or 0,
        like_type = 0
    })
end

function TeaHouseAgentBillWinnerPanel:onDealBill(event)
    if TeaHouse.manager.teahouseAgentBill:isOnlyFlag() then
        self._btnFinish:setVisible(self._info.billdealed == 0)
        self._imgFinish:setVisible(self._info.billdealed == 1)
    else
        self._btnFinish:setVisible(self._info.ucFlag == TeaHouse.manager.teahouseAgentBill.BILL_TYPE.UNBILL)
        self._imgFinish:setVisible(self._info.ucFlag == TeaHouse.manager.teahouseAgentBill.BILL_TYPE.BILL)
    end
    self:updateBtnFinish()
end

function TeaHouseAgentBillWinnerPanel:updateBtnFinish()
    if TeaHouse.manager.teahouseData:getCloseFinishBill() then
        self._btnFinish:setVisible(false)
        self._imgFinish:setVisible(false)
    end
end

return TeaHouseAgentBillWinnerPanel�/