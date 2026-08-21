---@class TeaHouseAgentBillWinnerItem : View
local TeaHouseAgentBillWinnerItem = class("TeaHouseAgentBillWinnerItem", TeaHouse.View)

local KW_ICON_DEFAULT_PNG = "tea_house_bill_item_head.png"
local KW_ICON_DEFAULT_PLIST = "res/cocosStudio/TeaHouse/Image/tea_house_bill_view.plist"

TeaHouseAgentBillWinnerItem.ColorTextWinScore = cc.c3b(222, 75, 59)
TeaHouseAgentBillWinnerItem.ColorTextLoseScore = cc.c3b(30, 145, 141)

TeaHouseAgentBillWinnerItem.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseAgentBillItem/TeaHouseAgentBillWinnerItem.csb",
    binding = {
        ["_KW_PANEL_ROOT"] = { tag = "_KW_PANEL_ROOT", name = "_panelRoot", class = "panel" },
        ["_KW_PANEL_HEAD"] = { tag = "_KW_PANEL_HEAD", name = "_panelHead", class = "panel" },
        ["_KW_TEXT_NAME"] = { tag = "_KW_TEXT_NAME", name = "_textNickName", class = "text" },
        ["_KW_TEXT_INDEX"] = { tag = "_KW_TEXT_INDEX", name = "_textNumId", class = "text" },
        ["_KW_TEXT_SCORE"] = { tag = "_KW_TEXT_SCORE", name = "_textScore", class = "text" },
        ["_KW_TEXT_COST"] = { tag = "_KW_TEXT_COST", name = "_textCost", class = "text" },
        ["_KW_TEXT_FEE"] = { tag = "_KW_TEXT_FEE", name = "_textFee", class = "text" },
        ["_KW_IMG_FINISH"] = { tag = "_KW_IMG_FINISH", name = "_imgFinish", class = "img" },
        ["_KW_BTN_FINISH"] = { tag = "_KW_BTN_FINISH", name = "_btnFinish", class = "btn", events = "onFinishBill" },
        ["_KW_BTN_DETAIL"] = { tag = "_KW_BTN_DETAIL", name = "_btnDetail", class = "btn", events = "onDetailClicked" },
        ["_KW_TEXT_BIGWINNER_TIME"] = { tag = "_KW_TEXT_BIGWINNER_TIME", name = "_textBigWinnerTimes", class = "text" },
        ["_KW_FNT_NUM"] = { tag = "_KW_FNT_NUM", name = "_textplayerNum", class = "text" },
    }
}

function TeaHouseAgentBillWinnerItem:ctor(callback)
    TeaHouseAgentBillWinnerItem.super.ctor(self)

    self._callback = callback

    self:initUI()
end

function TeaHouseAgentBillWinnerItem:initUI()
    if self._panelRoot then
        self._panelRoot:removeFromParent()
        self:addChild(self._panelRoot)
    end
    if TeaHouse.manager.teahouseAgentBill:isOpenScoreFilter() then
        if self._btnDetail then
            self._btnDetail:setVisible(false)
        end
    end
end

function TeaHouseAgentBillWinnerItem:onDetailClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    if self._callback then
        self._callback(self._index)
    end
end

function TeaHouseAgentBillWinnerItem:updateInfo(info, index)
    self._info = {}
    self._info.nNumId = info.nNumid
    -- 刷新头像
    self._index = index
    if self._panelHead then
        local size = self._panelHead:getContentSize()
        local remoteImage = TeaHouse.RemoteImage.new()
        :setPosition(size.width / 2, size.height / 2)
        :ignoreContentAdaptWithSize(false)
        :setContentSize(size.width - 5, size.height - 5)
        :addTo(self._panelHead)
        cc.SpriteFrameCache:getInstance():addSpriteFrames(KW_ICON_DEFAULT_PLIST)
        remoteImage:loadTexture(KW_ICON_DEFAULT_PNG, ccui.TextureResType.plistType)
        TeaHouse.SysTool.loadRemoteImage(remoteImage, info.szUrl, KW_ICON_DEFAULT_PNG, KW_ICON_DEFAULT_PLIST)
    end
    if self._textNickName then
        local strNickName = TeaHouse.StringTool.getTrimName(info.szNickName or "", 12)
        self._textNickName:setString(strNickName)
    end
    if self._textNumId then
        self._textNumId:setString("序号:" .. tostring(info.nNumid))
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
        self._info.nScore = info.nScore
    end
    local payTypeTable = TeaHouse.manager.teahouseData:getPayTypeByID(TeaHouse.manager.teahouseData:getTeaNumber())
    if self._textCost then
        local costCard = info.nCostCard
        if info.nPropsid and info.nPropsid == TeaHouse.BridgeData.getSmallRoomCardID() then
            costCard = costCard / TeaHouse.BridgeData.getSmallRoomCardRatio()
        else
            --账单服务bug,没有下发小卡,金华地区紧急处理
            if TeaHouse.LOBBY_ID.JINHUA == TeaHouse.BridgeData.getLobbyID() and TeaHouse.BridgeData.isRemodelArea() then
                costCard = costCard / TeaHouse.BridgeData.getSmallRoomCardRatio()
            end
        end
        self._info.fee = costCard
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
            self._info.matchfee = info.fee
        else
            self._textFee:setVisible(false)
        end
    end
    if self._textBigWinnerTimes then
        local lobbyId = TeaHouse.BridgeData.getLobbyID()
        if TeaHouse.BridgeData.isFixPayTypeArea() then
            if payTypeTable and payTypeTable[1] == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_AA and info.ucFlag == 0  then
                self._textBigWinnerTimes:setString("平摊消耗次数:" .. tostring(info.nAATimes))
                self._info.nAATimes = info.nAATimes
            elseif info.ucFlag == 1 and lobbyId ~= TeaHouse.LOBBY_ID.LISHUI then--丽水无平摊消耗，不显示平摊消耗次数
                self._textBigWinnerTimes:setString("冠军次数:" .. tostring(info.nWinnerTimes)..",平摊消耗次数:"..tostring(info.nAATimes))
                self._info.nWinnerTimes = info.nWinnerTimes
            else
                self._textBigWinnerTimes:setString("冠军次数:" .. tostring(info.nWinnerTimes))
                self._info.nWinnerTimes = info.nWinnerTimes
            end
        else
            self._textBigWinnerTimes:setString("冠军次数:" .. tostring(info.nWinnerTimes))
            self._info.nWinnerTimes = info.nWinnerTimes
        end
    end
    if TeaHouse.manager.teahouseAgentBill:isOnlyFlag() then
        self._btnFinish:setVisible(info.billdealed == 0)
        self._imgFinish:setVisible(info.billdealed == 1)
    else
        self._btnFinish:setVisible(info.ucFlag == TeaHouse.manager.teahouseAgentBill.BILL_TYPE.UNBILL)
        self._imgFinish:setVisible(info.ucFlag == TeaHouse.manager.teahouseAgentBill.BILL_TYPE.BILL)
    end
    self:updateBtnFinish()
    if self._textplayerNum then
        self._textplayerNum:setString(index)
    end
end

function TeaHouseAgentBillWinnerItem:onFinishBill(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.manager.teahouseAgentBill:reqDealBills(self._index)

    local teahouseData = TeaHouse.manager.teahouseData
    local role = ""
    if teahouseData:isOwner() then
        role = "领队"
    elseif teahouseData:isAdmin() then
        role = "副领队"
    end
    local data2 = {
        page_item_id = role,
        club_id = tostring(XH.areaData:getAreaID() .. "_" .. TeaHouse.manager.teahouseData:getTeaNumber())
    }
    local customize = {
        score = self._info.fee, -- 房卡消耗数
        button_type = self._info.nScore, -- 优胜值
        count = self._info.nWinnerTimes, -- 冠军次数
        count1 = self._info.nAATimes, -- 平摊消耗次数
        count2 = self._info.matchfee, -- 比赛场卡
    }
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.lys25092302, data2, customize)
    XH.lobby:getModule("FinishBillClose"):reqFinishBillClose(1, {
        to_user_id = self._info.nNumId or 0,
        like_type = 0
    })
end

function TeaHouseAgentBillWinnerItem:updateBtnFinish()
    if TeaHouse.manager.teahouseData:getCloseFinishBill() then
        self._btnFinish:setVisible(false)
        self._imgFinish:setVisible(false)
    end
end

return TeaHouseAgentBillWinnerItem   �"  