local GameWinLostLayer  = CF.gameClass("GameWinLostLayer", CF.ViewBase)
local CardLayerConfig   = CF.gameRequire("Modules.CardLayer.CardLayerConfig")
local Define = CF.gameRequire("Modules.ChangeCard.Define")

local KW_DEFAULT_STRING = "------"
local RemoteImage       = CF.RemoteImage

local ENUM_END_TYPE = {
    EndType_Null        = 0,
    EndType_DanKou      = 4,
    EndType_ShuangKou   = 5,
    EndType_TouXiang    = 6,
}

--名次
local ENUM_RANK_PNG = {
    'dt_winlost_rank_1.png',
    'dt_winlost_rank_2.png',
    'dt_winlost_rank_3.png',
    'dt_winlost_rank_4.png',
}

-- 单双扣
local ENUM_DANSHUANGKOU_PNG = {
    'game_over_tx_dantong_new.png',
    'game_over_tx_shuangtong_new.png',
    'game_over_tx_qingfen_new.png',
}

function GameWinLostLayer:getCSBPath()
    return "res/cocosStudio/DaTong/GameLayer/CSB/GameWinLost.csb"
end

function GameWinLostLayer:getBindingInfo()
    return {
		["_KW_BTN_GO_ON@"] = {varName ="_goOnBtn",type = CF.UI_TYPE.BUTTON, onTouchEnded = "onGoOnClicked"},
        ["_KW_BTN_NEXT@"] = {varName ="_nextBtn",type = CF.UI_TYPE.BUTTON, onTouchEnded = "onGoOnClicked"},
        ["_KW_BTN_CHECK_BILL"] = {varName = "_checkBillBtn",type = CF.UI_TYPE.BUTTON, onTouchEnded = "onGoOnClicked"},
        ["_KW_BTN_SHUFFLE_DIRECT"] = {varName ="_shuffleBtn",type = CF.UI_TYPE.BUTTON, onTouchEnded = "onShuffleDirectClicked"},
        ["_KW_BTN_SHUFFLE_INDIRECT"] = {varName ="_shuffleQuanBtn",type = CF.UI_TYPE.BUTTON, onTouchEnded = "onShuffleIndirectClicked"},
        ["_KW_BTN_SHUFFLE_GOLD"] = {varName ="_shuffleGoldBtn",type = CF.UI_TYPE.BUTTON, onTouchEnded = "onShuffleGoldClicked"},
        ["_KW_DETAIL_BTN_CLOSE"] = {varName ="_detailCloseBtn",type = CF.UI_TYPE.BUTTON, onTouchEnded = "onDetailBtnBack"},
        ["_KW_BTN_BACK"] = {varName ="_btnBack",type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnBack"},
        ["_KW_TEXT_PLAYER_SCORE_"] = {varName = "_playerScoreText", beginIndex = 1, endIndex = 4},
        ["_KW_CONTINE_TIME"] = {varName = "_uContinueTime"},
        ["_KW_NEXT_TIME"] = {varName = "_uNextTime"},
        ["_KW_ANI_GO_ON"] = {varName = "_aniGoOn"},
        ["_KW_TXT_SHUFFLE_PROP_DIRECT"] = {varName = "_txtShuffleProp"},
        ["_KW_IMG_SHUFFLE_PROP_DIRECT"] = {varName = "_imgShuffleProp"},
        ["_KW_TEXT_COSTNAME"] = { varName = "_txtCostName"},
		["_KW_TXT_SHUFFLE_FREE_DIRECT"] = { varName = "_txtShuffleFree"},
        ["_KW_IMG_SHUFFLE_PROP_DIAMOND"] = {varName = "_imgShufflePropDiamond"},
        ["_KW_TEXT_SHUFFLE_TIPS"] = {varName = "_textShuffleTips"},
        ["_KW_TXT_SHUFFLE_PROP_INDIRECT_COUNT"] = {varName = "_txtShufflePropCount"},
        ["_KW_TXT_SHUFFLE_PROP_GOLD_COST"] = {varName = "_txtShuffleGoldCost"},
        ["_KW_TXT_SHUFFLE_PROP_GOLD_SALE"] = {varName = "_txtShuffleGoldSale"},
        ["_KW_PLAYER_INFO_ITEM_4"] = {varName = "_playerInfoItemPanel_4"},
        ["_KW_PLAYER_INFO_ITEM_6"] = {varName = "_playerInfoItemPanel_6"},
        ["_KW_PANEL_CARD_ITEM_4"] = {varName = "_cardItemPanel_4"},
        ["_KW_PANEL_CARD_ITEM_6"] = {varName = "_cardItemPanel_6"},
        ["_KW_PANEL_WINLOST_CENTER"] = {varName = "_bgNode"},
        ["_KW_TEXT_ROOM_ID"] = {varName = "_roomID"},
        ["_KW_TEXT_TIME"] = {varName = "_timeStr"},
        ["_KW_TEXT_PLAY_COUNT"] = {varName = "_playCount"},
        ["_KW_PANEL_DETAIL"] = {varName = "_panelDetail"},
        ["_KW_ITEM_DETAIL_COMB"] = {varName = "_panelCombDetail"},
        ["_KW_ROOT_LAYER"] = {varName = "_rootNode"},
        ["_KW_PANEL_BTNS"] = {varName = "_panelBtns"},
        ["_KW_ANI_NEXT_GAME"] = {varName = "_aniNextGame"},
		["_KW_BTN_EXIT_WATCH"] = {varName = "_exitWatchBtn",type = CF.UI_TYPE.BUTTON, onTouchEnded = "onExitWatch"},	-- 退出观战
        ["_KW_PANEL_ICON"] = {varName = "_changeCardBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onChangeCardClicked"}, --处理点击监听
        ["_KW_IMG_DIAMOND"] = {varName = "_imgDiamond"},
        ["_KW_IMG_ROOMCARD"] = {varName = "_imgRoomCard"},
        ["_KW_TEXT_COST"] = {varName = "_txtCost"},
        ["_KW_TEXT_COST_CARD"] = {varName = "_txtCostCard"}
    }
end

function GameWinLostLayer:getProxyEvents()
    -- local proxyEvents = GameWinLostLayer.super.getProxyEvents(self)
    return{
        {module = CF.game:getModule("PropUse"), eventKeyName = "EVENT_SHUFFLE_USE_PROP_SUCCESS", callBack = "onShuffleUsePropSuccess"},
        {module = CF.game:getModule("PropUse"), eventKeyName = "EVENT_PRE_SUCCESS", callBack = "onPreShuffleSuc"},
        {module = CF.game:getModule("ReadyTip"), eventKeyName = "EVENT_SHOW_FINGER", callBack = "showGuideFinger"},
        {module = CF.game:getModule("Share"), eventKeyName = "EVENT_CLOSE_CAPTURE_SCREEN_VIEW", callBack = "showGoldRoomBtn"},
        {module = CF.game:getModule("Share"), eventKeyName = "EVENT_SHARE_HIDE_UNUSE_BTNS", callBack = "hideGoldRoomBtn"},
        {module = CF.game:getModule("Shuffle4"), eventKeyName = "EVENT_PRE_NEXT_SHUFFLE_BY_TIP", callBack = "onUsePreShuffle"},
        {module = CF.game:getModule("Shuffle4"), eventKeyName = "EVENT_UPDATE_DISCOUNT_TIME", callBack = "onUpdateDisTime"},
        {module = CF.game:getModule("ChangeCard"), eventKeyName = "EVENT_BTN_VISIBLE", callBack = "updateBtnVisivble"},
    }
    -- return proxyEvents
end

--座位转换函数(将座位转换成本地座位，自己在第一个, 返回本地坐标（1，2，3，4）
function GameWinLostLayer:changeSeatToResult(seat, selfServerSeat)
    local selfSeat = selfServerSeat or CF.roomData:getSelfSeat()
    return ( (seat - selfSeat + CF.roomData:getChairs() ) % CF.roomData:getChairs() ) + 1
end

function GameWinLostLayer:ctor(param)
    param = param or {}
    GameWinLostLayer.super.ctor(self, param)
    self._param = param
    self._playerCnt = CF.roomData:getChairs()
    self._playersUI = {}
    self._playerInfoItemPanel = self._playerCnt == CF.roomData:getMaxChairs() and self._playerInfoItemPanel_6 or self._playerInfoItemPanel_4
    self._cardItemPanel = self._playerCnt == CF.roomData:getMaxChairs() and self._cardItemPanel_6 or self._cardItemPanel_4
    self._gameData = CF.game:getModule("GameLayer"):getGameData()
    self:initUI()

     if cc.UserDefault:getInstance():getBoolForKey("KW_RN_TOURIST_LOGIN") and cc.UserDefault:getInstance():getBoolForKey("KW_RN_TOURIST_LOGIN_GAME_OVER") then
        local msg = "游客您好，您已经完成40分钟体验，之后您可以选择【微信登录】继续享受精彩的游戏服务哦！"
        local time = cc.UserDefault:getInstance():getIntegerForKey("KW_RN_TOURIST_LOGIN_GAME_OVER_TIMNER")
        if time > 0 then
            msg = msg .. "下次体验时间:".. os.date("%Y",time).."年"..os.date("%m",time).."月"..os.date("%d",time).."日"..os.date("%H",time).."时"..os.date("%M",time).."分"
        end
        CF.TipTool.showTip({
            type = CF.TIP_LAYER_TYPE.OK_NO_CLOSE,
            funcOK = function()
                CF.game:leaveGame()
            end,
        }, msg)
    end
    local goldShareView = CF.gameRequire("game.GameBase.Modules.Share.GoldShareView")
    if CF.roomData:isGoldRoom() and goldShareView then
        self:addChild(goldShareView.new())
    end
    self:initDiscountNode()
    local changeCardModule = CF.game:getModule("ChangeCard")
	if changeCardModule then
		changeCardModule:updateBtn()
	end
end

function GameWinLostLayer:showGuideFinger()
    if self._aniNextGame then 
        self._aniNextGame:setVisible(true)
    end
end

function GameWinLostLayer:initUI()
    local isGold = CF.roomData:isGoldRoom()
    self._goOnBtn:setVisible(not isGold)
    self._nextBtn:setVisible(isGold)
    self._rootNode:addTouchEventListener(handler(self, self.onWinstBgClicked))
    self._panelBtns:setLocalZOrder(99)
end

--设置房间信息
function GameWinLostLayer:updateRoomInfo()
    local roomid = CF.roomData:getRoomID()
    local playCount = CF.roomData:getPlayCount()
    local maxPlayCount = CF.roomData:getMaxPlayCount()
    if self._roomID then
        self._roomID:setString("房间号: " .. string.format("%06d", roomid or KW_DEFAULT_STRING))
    end
    if self._playCount then
        self._playCount:setString("局数:  " .. (playCount or 0) .. "/" .. (maxPlayCount or 0))
    end
    if self._timeStr then
        self._timeStr:setString(os.date("%Y-%m-%d  %H:%M:%S", os.time()) or "")
    end
end

function GameWinLostLayer:initShuffle()
    self._shuffleBtn:setVisible(false)
    self._shuffleQuanBtn:setVisible(false)
    self._shuffleGoldBtn:setVisible(false)
    self._costInfo = {propid=CF.gameSub:getShufflePropQuanID(), costPropid=CF.gameSub:getShufflePropQuanID(), cnt=1}
    --显示洗牌按钮
    if CF.game:getModule("GameLayer"):needShowShuffleButton() then
        self._nextBtn:setPositionX(300)
        self._goOnBtn:setPositionX(300)
        if CF.roomData:isGoldRoom() then
            self._shuffleGoldBtn:setPositionX(-300)
            self._shuffleGoldBtn:setVisible(true)
            local oriPrice = CF.game:getModule("PropUse"):getOriginalShufflePrice()
            local nowPrice = CF.game:getModule("PropUse"):getShufflePrice()
            self._txtShuffleGoldCost:setString(tostring(oriPrice))
            self._txtShuffleGoldSale:setString(tostring(nowPrice))
            if oriPrice <= nowPrice then
                self._txtShuffleGoldCost:setVisible(false)
            end
            self._costInfo.costPropid = XH.areaData:getGoldPropId()
			self._costInfo.cnt = nowPrice
        else
            --洗牌券的道具id
            local propId = CF.gameSub:getShufflePropQuanID()
            local shuffleQuanCount = CF.game:getModule("PropUse"):getPropCnt(propId)
            if shuffleQuanCount and shuffleQuanCount > 0 then
                self._shuffleQuanBtn:setPositionX(-300)
                self._shuffleQuanBtn:setVisible(true)
                self._txtShufflePropCount:setString("x" .. shuffleQuanCount)
            else
                local shuffleInfo = CF.game:getModule("PropUse"):getShufflePropInfo(propId)
                self._shuffleBtn:setPositionX(-300)
                self._shuffleBtn:setVisible(true)
                if shuffleInfo and shuffleInfo.propID == CF.areaData:getPropRoomCardID() then
                    self._imgShuffleProp:setVisible(true)
                    self._imgShufflePropDiamond:setVisible(false)
                else
                    self._imgShuffleProp:setVisible(false)
                    self._imgShufflePropDiamond:setVisible(true)
                end
                self:setShufflePropCount()
                self._costInfo.costPropid = shuffleInfo.propID
				self._costInfo.cnt = shuffleInfo.cost
            end
        end
        XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24091901, { 
            costInfo = self._costInfo
        })
    else
        self._shuffleBtn:setVisible(false)
        self._shuffleGoldBtn:setVisible(false)
        self._nextBtn:setPositionX(0)
        self._goOnBtn:setPositionX(0)
    end
end

function GameWinLostLayer:initDiscountNode()
    local modu = CF.game:getModule("Shuffle4")
    if modu then
        local size = self._shuffleBtn:getContentSize()
        self.m_shuffleDisNode = modu:getDiscountNode(self._shuffleBtn, size.width / 2, size.height - 10)
		if modu:isFree() then
			self.m_shuffleDisNode:setVisible(true)
			self.m_shuffleDisNode:getChildByName("_KW_DISCOUNT_TXT"):setVisible(false)
			self.m_shuffleDisNode:getChildByName("bg"):setVisible(false)
		end
    end
end

--洗牌按钮消耗道具的数量
function GameWinLostLayer:setShufflePropCount()
    --消耗的道具数量
    local gameID = CF.roomData:getGameID()
	local shuffleInfo = CF.game:getModule("PropUse"):getShufflePropInfo(CF.gameSub:getShufflePropQuanID())
	local count = shuffleInfo.cost or CF.gameSub:getShufflePropCount(gameID)
	local propID = shuffleInfo.propID or CF.gameSub:getShufflePropID(gameID)
    if CF.areaData:getPropList().smallRoomCardID and propID == CF.areaData:getPropList().smallRoomCardID then
        local smallRoomCardRatio = CF.areaData:getPropSmallRoomCardRatio()
        if smallRoomCardRatio then
            count = count / smallRoomCardRatio
        end
    end
    if self._txtShuffleProp then
        self._txtShuffleProp:setString("x" .. count .. "）")
    end
    if self._textShuffleTips then
        self._textShuffleTips:setString("洗个好手气，开始下一局")
    end

    if CF.game:getModule("Shuffle4"):isShufflePlanActive() then
        if CF.game:getModule("Shuffle4"):isFree() then
            self._txtShuffleProp:setVisible(false)
            self._imgShuffleProp:setVisible(false)
            self._txtCostName:setVisible(false)
            self._txtShuffleFree:setVisible(true)
        else
            self._txtShuffleProp:setVisible(true)
            self._txtCostName:setVisible(true)
            self._txtShuffleFree:setVisible(false)
        end
        if self.m_shuffleDisNode and not tolua.isnull(self.m_shuffleDisNode) then
            self.m_shuffleDisNode:removeFromParent()
            self.m_shuffleDisNode = nil
            self:initDiscountNode()
        end
    else
        self._txtShuffleProp:setVisible(true)
		self._txtCostName:setVisible(true)
		self._txtShuffleFree:setVisible(false)
        if self.m_shuffleDisNode and not tolua.isnull(self.m_shuffleDisNode) then
            self.m_shuffleDisNode:removeFromParent()
            self.m_shuffleDisNode = nil
        end
    end
end

function GameWinLostLayer:updateWinLostData()
    local winLostDataObj = self._gameData:getWinLostData()
    if not winLostDataObj then
        return
    end
    self._winLostData = winLostDataObj:getWinlostMsgData()
    self:updateshouzhiani()
    self:clearWinLostPanel()
    self:initShuffle()
    self:updateRoomInfo()
    self:updateContinueBtnState()
    self:updatePlayersInfo()
    self:updatePlayerScore()
    self:updatePlayerCard()
    self:updateWinOrder()
    self:setDanShuangTong()
    self:updateLastWinLostBtn()
    self:showWatermark()
end

function GameWinLostLayer:updateshouzhiani()
    if self._aniNextGame then
        self._aniNextGame:setVisible(false)
    end
end

function GameWinLostLayer:clearWinLostPanel()
   for seat = 1 , self._playerCnt do
    local playerUi  = self:getPlayerItem(seat)
        CF.UITool.setText(playerUi , "KW_TEXT_PLAYER_NAME" , KW_DEFAULT_STRING)
        CF.UITool.setText(playerUi , "KW_TEXT_PLAYER_NUMBER_ID" , KW_DEFAULT_STRING)
        CF.UITool.setText(playerUi , "KW_TEXT_VALUE_1" , KW_DEFAULT_STRING)
        CF.UITool.setText(playerUi , "KW_TEXT_VALUE_2" , KW_DEFAULT_STRING)
        CF.UITool.setText(playerUi , "KW_TEXT_VALUE_3" , KW_DEFAULT_STRING)
        CF.UITool.setText(playerUi , "KW_TEXT_TOTALWINLOST" , KW_DEFAULT_STRING)
        CF.UITool.setVisible(playerUi , "KW_IMG_RANK" ,false) 
        CF.UITool.setVisible(playerUi , "KW_UI_ROOM_HOST" ,false) 
        CF.UITool.setVisible(playerUi , "KW_IMG_RANK_TITLE" ,false) 
        local listViewNode = CF.UITool.seekNodeByName(playerUi,"KW_LISTVIEW_CARD")
        if listViewNode then
            listViewNode:removeAllChildren()
            listViewNode:setScrollBarEnabled(false)
        end
   end
end

function GameWinLostLayer:getPlayerItem(localSeat)
    local playerNode = self._playersUI[localSeat]
    if playerNode == nil then
        playerNode = self._playerInfoItemPanel:clone()
        playerNode:setPosition(self:calLayoutByPlayerCount(localSeat))
        :addTo(self._playerInfoItemPanel:getParent())
        self._playersUI[localSeat] = playerNode
    end
    return playerNode
end

--根据人数计算位置
function GameWinLostLayer:calLayoutByPlayerCount(seat)
    local playerCount = self._playerCnt
    local itemSize = self._playerInfoItemPanel:getContentSize()
    local displaySize = self._bgNode:getContentSize()
    local pos = seat - 1
    local posX = displaySize.width / 2
    if playerCount % 2 == 0 then
        posX = posX + ((pos + 0.5 - playerCount/2) * itemSize.width)
    else
        posX = posX + ((pos - math.floor(playerCount/2)) * itemSize.width)
    end
    return cc.p(posX, displaySize.height / 2)
end

function GameWinLostLayer:updateContinueBtnState()
    if self._goOnBtn then
        self._goOnBtn:setEnabled(true)
    end
end

function GameWinLostLayer:updateLastWinLostBtn()
    local isShowBigWinLost = self:isShowBigWinLost()
    if self._goOnBtn and self._checkBillBtn then 
        self._goOnBtn:setVisible(not isShowBigWinLost)
        self._checkBillBtn:setVisible(isShowBigWinLost)
    end
    -- 退出旁观按钮显隐
    if self._exitWatchBtn then
        if CF.roomData:getIsSeer() then
            self._exitWatchBtn:setVisible(not isShowBigWinLost)
        end
    end
end

function GameWinLostLayer:updatePlayersInfo()
    for index = 0 , CF.roomData:getMaxPlayer() - 1 do
        local localSeat = self:changeSeatToResult(index)
        local player = CF.roomData:getPlayerDataBySeatId(index)
        if player then
            local playerUi = self:getPlayerItem(localSeat)
            CF.UITool.setText(playerUi, "KW_TEXT_PLAYER_NAME", player:getNickName() or KW_DEFAULT_STRING)
            CF.UITool.setText(playerUi, "KW_TEXT_PLAYER_NUMBER_ID", ("序号:" .. player:getNumberID() or KW_DEFAULT_STRING))
            CF.UITool.setVisible(playerUi, "KW_UI_ROOM_HOST", index == CF.roomData:getHostSeat())
            self:updateImg(CF.UITool.seekNodeByName(playerUi, "KW_PANEL_HEAD_POS"), player:getAvatarUrl())
            self:updateHeadFrame(CF.UITool.seekNodeByName(playerUi, "KW_PANEL_HEAD_POS"), player:getNumberID())
        end
    end
end

--更新头像
function GameWinLostLayer:updateImg(node, url)
    if not node then
        return
    end

    if url == "" then
        url = "http://thirdwx.qlogo.cn/mmopen/vi_32/RZWHFDljz1SW2Azl6kZyxic4ziaibicnUPo8dB3YiaGbhpyx3Tq34Vemk6KqexyJQJtAphjc9TELicPuRryc0UQ4DPmw/132"
    end

    local headImg = CF.UITool.seekNodeByName(node, "KW_DEFAULT_HEAD_IMG_NAME")
    if headImg == nil then
        local size = node:getContentSize()
        headImg = RemoteImage.new()
        :setPosition(size.width / 2, size.height / 2)
        :ignoreContentAdaptWithSize(false)
        :setContentSize(size.width, size.height)
        :setName("KW_DEFAULT_HEAD_IMG_NAME")
        :addTo(node)
    end
    headImg:setUrl(url)
end

--头像框
function GameWinLostLayer:updateHeadFrame(node, numid)
    local GameBagUILogic = CF.gameRequire("Modules.GameBag.UILogic")
    local headFrame = CF.roomData:getHeadFrameData(numid) or {}
    GameBagUILogic.showHeadFrame(node, headFrame.frame_url, cc.size(0 , 0), cc.size(50,50), headFrame.propid)
end

function GameWinLostLayer:updatePlayerScore()
    local winLostData = self._winLostData
    if not winLostData then return end
    local sRankScore = winLostData.sRankScore or {}
    local sBombScore = winLostData.sBombScore or {}
    local sGraspScore = winLostData.sGraspScore or {}
    local sTotalScore = winLostData.sTotalScore or {}
    for index = 0 , CF.roomData:getMaxPlayer() - 1 do
        local localSeat = self:changeSeatToResult(index)
        local tmpIndex = index + 1
        local playerUi = self:getPlayerItem(localSeat)
        if CF.roomData:isSixPlayer() then
            CF.UITool.setText(playerUi, "KW_TEXT_TYPE_1", '名次优胜值:')
            CF.UITool.setText(playerUi, "KW_TEXT_TYPE_2", '讨赏优胜值:')
            CF.UITool.setText(playerUi, "KW_TEXT_VALUE_1", sRankScore[tmpIndex] )
            CF.UITool.setText(playerUi, "KW_TEXT_VALUE_2", sBombScore[tmpIndex] )
            if sRankScore[tmpIndex] and sBombScore[tmpIndex] then
                local color1 = sRankScore[tmpIndex] < 0 and cc.c3b(3, 87, 146) or cc.c3b(215, 78, 24)
                local color2 = sBombScore[tmpIndex] < 0 and cc.c3b(3, 87, 146) or cc.c3b(215, 78, 24)
                CF.UITool.setTextColor(playerUi, "KW_TEXT_VALUE_1", color1)
                CF.UITool.setTextColor(playerUi, "KW_TEXT_VALUE_2", color2)
            end
        else
            CF.UITool.setText(playerUi, "KW_TEXT_TYPE_1", '本轮抓分:')
            CF.UITool.setText(playerUi, "KW_TEXT_TYPE_2", '名次优胜值:')
            CF.UITool.setText(playerUi, "KW_TEXT_TYPE_3", '讨赏优胜值:')
            CF.UITool.setText(playerUi, "KW_TEXT_VALUE_1", sGraspScore[tmpIndex])
            CF.UITool.setText(playerUi, "KW_TEXT_VALUE_2", sRankScore[tmpIndex])
            CF.UITool.setText(playerUi, "KW_TEXT_VALUE_3", sBombScore[tmpIndex])
            if sGraspScore[tmpIndex] and sRankScore[tmpIndex] and sBombScore[tmpIndex] then
                local color1 = sGraspScore[tmpIndex] < 0 and cc.c3b(3, 87, 146) or cc.c3b(215, 78, 24)
                local color2 = sRankScore[tmpIndex] < 0 and cc.c3b(3, 87, 146) or cc.c3b(215, 78, 24)
                local color3 = sBombScore[tmpIndex] < 0 and cc.c3b(3, 87, 146) or cc.c3b(215, 78, 24)
                CF.UITool.setTextColor(playerUi, "KW_TEXT_VALUE_1", color1)
                CF.UITool.setTextColor(playerUi, "KW_TEXT_VALUE_2", color2)
                CF.UITool.setTextColor(playerUi, "KW_TEXT_VALUE_3", color3)
            end
        end
        local totalScore = sTotalScore[tmpIndex]
        if totalScore then
            CF.UITool.setText(playerUi, "KW_TEXT_TOTALWINLOST", totalScore < 0 and tostring(totalScore) or ("+" .. totalScore))
            CF.UITool.setTextColor(playerUi, "KW_TEXT_TOTALWINLOST", totalScore  < 0 and cc.c3b(3, 87, 146) or cc.c3b(215, 78, 24))
            if index == CF.roomData:getSelfSeat() then
                CF.game:getModule("Share"):setGoldScore(totalScore)
            end
        end
    end
end

function GameWinLostLayer:updatePlayerCard()
    local winLostData = self._winLostData
    if not winLostData then return end
    local allComb = winLostData.allComb or {}
    local combTypes = winLostData.sCombType or {}

    if CF.roomData:isSixPlayer() then --6人
        for seatId, combs in pairs(allComb) do  
            local serverSeat = seatId - 1
            local seatCombType = combTypes[seatId]
            local localSeat = self:changeSeatToResult(serverSeat)
            local playerUi = self:getPlayerItem(localSeat)
            if playerUi then
                local listViewNode = CF.UITool.seekNodeByName(playerUi,"KW_LISTVIEW_CARD")
                if listViewNode then
                    listViewNode:removeAllChildren()
                    for cmbsIndex = 1 , #combs do
                        local comb = combs[cmbsIndex]
                        local combScore = comb.combScore
                        -- local ucCount = comb.ucCount
                        -- local ucCards = comb.ucCards
                        if seatCombType[cmbsIndex] then
                            comb.cardType = CF.GameDefine.CardTypeChinese[seatCombType[cmbsIndex]] or ""
                        end
                        CF.UITool.addTouchEventListener(playerUi, "KW_BTN_DETAIL", handler(combs, handler(self, self.onDetailBtnTouchEvent)))

                        local textItem = self._cardItemPanel
                        if textItem then
                            local addItem = textItem:clone()
                            CF.UITool.setText(addItem,"KW_TEXT_COMBITEM",tostring(comb.cardType))
                            CF.UITool.setText(addItem,"KW_TEXT_COMBTYPESCORE",tostring(combScore))
                            addItem:setVisible(true)
                            listViewNode:pushBackCustomItem(addItem)
                            listViewNode:setScrollBarEnabled(false)
                        end
                    end
                end
            end
        end 
    else --4人
        for seatId, combs in pairs(allComb) do
                if seatId > 4 then break end
                local serverSeat = seatId - 1
                local seatCombType = combTypes[seatId]
                local localSeat = self:changeSeatToResult(serverSeat)
                local playerUi = self:getPlayerItem(localSeat)
                local listViewNode = CF.UITool.seekNodeByName(playerUi,"KW_LISTVIEW_CARD")
                if playerUi and listViewNode then
                    listViewNode:removeAllChildren()
                    for cmbsIndex = 1 , #combs do
                        local comb = combs[cmbsIndex]
                        local combScore = comb.combScore
                        local ucCards = comb.ucCards
                        if seatCombType[cmbsIndex] then
                            comb.cardType = CF.GameDefine.CardTypeChinese[seatCombType[cmbsIndex]] or ""
                        end
                        local textItem = self._cardItemPanel
                        if textItem then
                            local addItem = textItem:clone()
                            CF.UITool.setText(addItem,"KW_TEXT_COMBTYPESCORE",tostring(combScore))
                            addItem:setVisible(true)
                            listViewNode:pushBackCustomItem(addItem)
                            listViewNode:setScrollBarEnabled(false)
                            local scrollview = CF.UITool.seekNodeByName(addItem, "KW_SCROVIEW")
                            if scrollview then
                                scrollview:setScrollBarEnabled(false)
                                scrollview:setSwallowTouches(false)
                                self:showCardItem(CF.UITool.seekNodeByName(scrollview,"KW_DETAIL_CARD_POS"),ucCards)
                                if #ucCards > 7 then
                                    local width , height = 286 , 120
                                    local widthEx = width + (#ucCards - 7) * 70
                                    scrollview:setInnerContainerSize(cc.size(widthEx,height))
                                end
                            end
                        end
                    end
                end
            end 
        end
end

function GameWinLostLayer:onDetailBtnTouchEvent(combs,sender, eventType)
    self:showDetailCard(combs)
end

function GameWinLostLayer:showDetailCard(combs)
    if self._panelDetail then
        self._panelDetail:setVisible(true)
    end
    local detailListView = CF.UITool.seekNodeByName(self._panelDetail, "_KW_LISTVIEW_DETAILCOMB")
    if not detailListView then
        return
    end
    detailListView:removeAllChildren()
    detailListView:setScrollBarEnabled(false)
    combs = combs or {}
    for _, subComb in pairs(combs) do
        local cloneCombPanel = self._panelCombDetail:clone()
        detailListView:pushBackCustomItem(cloneCombPanel)
        CF.UITool.setText(cloneCombPanel,"KW_TEXT_DETAILCARDTYPE", subComb.cardType or "")

        local ucCards = subComb.ucCards
        local tmpScore = subComb.combScore or 0
        CF.UITool.setText(cloneCombPanel,"KW_TEXT_DETAILCARDSCORE", tmpScore)

        local detailScrollView = CF.UITool.seekNodeByName(cloneCombPanel,"KW_DETAILBOMB_SCROLL")
        if detailScrollView then
            detailScrollView:setSwallowTouches(false)
            detailScrollView:setScrollBarEnabled(false)
            self:showCardItem(CF.UITool.seekNodeByName(detailScrollView,"KW_DETAIL_CARD_POS"),ucCards,80,75)
            if #ucCards > 8 then
                local width , height = 650 , 174
                local widthEx = width + (#ucCards - 8) * 100
                detailScrollView:setInnerContainerSize(cc.size(widthEx,height))
            end
        end
    end
end

function GameWinLostLayer:showCardItem(node,cardIDs, startPosX, distanceX, distanceY)
    if not node then
        return
    end
    startPosX = startPosX or 45
    distanceX  = distanceX or 40
    distanceY = distanceY or 40
    local CardArea = CF.gameRequire("Modules.CardLayer.CardFFZArea")
    local cardAreaNode = CardArea.new()
    cardAreaNode:setIgnoreAnchorPointForPosition(true)
    cardAreaNode:setAnchorPoint(cc.p(0, 0.5))
    cardAreaNode:setStartPosition(startPosX,0)
    cardAreaNode:setCardDistance(distanceX,distanceY)
    cardAreaNode:setCarAddDistance(CardLayerConfig.CardAddDirectionX.Right, CardLayerConfig.CardAddDirectionY.Center)
    cardAreaNode:setShowCards(cardIDs)
    node:addChild(cardAreaNode)
end

function GameWinLostLayer:updateWinOrder()
    if CF.roomData:isSixPlayer() then
        return
    end
    local sWinOrder = self._winLostData.sWinOrder or {}
    local endType = self._winLostData.sEndType

    if endType == ENUM_END_TYPE.EndType_DanKou then  -- 单通 or 双通
        for index , value in pairs(sWinOrder) do
            if index <= CF.roomData:getMaxPlayer() then
                if value == 0 then
                    value = 4
                end
                local localSeat = self:changeSeatToResult(index - 1)
                local playerUi = self:getPlayerItem(localSeat)
                CF.UITool.loadTexture(playerUi, "KW_IMG_RANK", ENUM_RANK_PNG[value],ccui.TextureResType.plistType)
                CF.UITool.setVisible(playerUi , "KW_IMG_RANK" , true)
            end
        end
    elseif endType == ENUM_END_TYPE.EndType_ShuangKou then
        for index , value in pairs(sWinOrder) do
            if index <= CF.roomData:getMaxPlayer() then
                if value ~= 0 then
                    local localSeat = self:changeSeatToResult(index - 1)
                    local playerUi = self:getPlayerItem(localSeat)
                    CF.UITool.loadTexture(playerUi,"KW_IMG_RANK", ENUM_RANK_PNG[value],ccui.TextureResType.plistType)
                    CF.UITool.setVisible(playerUi , "KW_IMG_RANK" , true)
                end
            end
        end
    end
end

function GameWinLostLayer:setDanShuangTong()
    if CF.roomData:isSixPlayer() then
        return
    end
    local sOrder = self._winLostData.sDoubleOrSingle or {}
    for index , value in pairs(sOrder) do
        if index <= CF.roomData:getMaxPlayer() then
            local localSeat = self:changeSeatToResult(index - 1)
            local playerUi = self:getPlayerItem(localSeat)
            if value ~= 0 then
                CF.UITool.loadTexture(playerUi, "KW_IMG_RANK_TITLE", ENUM_DANSHUANGKOU_PNG[value], ccui.TextureResType.plistType)
                CF.UITool.setVisible(playerUi, "KW_IMG_RANK_TITLE" ,true) 
            else
                CF.UITool.setVisible(playerUi, "KW_IMG_RANK_TITLE" ,false) 
            end
        end
    end
end

function GameWinLostLayer:onGoOnClicked(send,eventType)
    if self._uContinueTime then
        self._uContinueTime:stopAllActions()
        self._uContinueTime:setVisible(false)
    end

    if not self:isShowBigWinLost() then
		if CF.roomData:getIsSeer() and CF.roomData:isDelayWatch() then
            self:setVisible(false)
			CF.game:getModule("WatchGame"):changeToRealWatch()
            return
		end
        CF.game:getModule("CenterBtns"):onStartGameEvent()
    else
        CF.game:getModule("WinLost"):showBigWinlost()
    end
    self:recordWinLostData()
    if CF.roomData:getIsSeer() then
        self:setVisible(false)
    end
end

function GameWinLostLayer:recordWinLostData()
    local data = {}
    data.time1 = self._viewStartTime or 0
    data.time2 = os.time() or 0
    data.staytime = data.time2 - data.time1
    data.userid = CF.selfPlayerData:getNumberID()
    data.result = self._sEndType or -1
    data.gamename = CF.gameSub:getGameNameByGameId(CF.roomData:getGameID())
    data.sytype = self:recordSYtype()
    CF.throwDataManager:throwData(CF.ThrowDataDefine.NextGameStarted,data)
end

--判断这局胜负状态
function GameWinLostLayer:recordSYtype()
    local winLostData = self._winLostData
    if not winLostData then return end
    local sTotalScore = winLostData.sTotalScore or {}
    local index = CF.roomData:getSelfSeat()
    local myScore = sTotalScore[index + 1] or 0  
    local sytype   --胜负
	if myScore >= 0 then 
		sytype = "Y"
	else
		sytype = "S"
	end
	return sytype
end 

function GameWinLostLayer:isShowBigWinLost()
    local isShowBigWinLost = not (CF.roomData:getPlayCount() < CF.roomData:getMaxPlayCount())
    return isShowBigWinLost or CF.roomData:getIsGameOver()
end

function GameWinLostLayer:onWinstBgClicked(send, eventType)
    if eventType == ccui.TouchEventType.began then
         self:setVisible(false)
    elseif eventType == ccui.TouchEventType.ended or eventType == ccui.TouchEventType.canceled then
        local gameStep = self._gameData:getGameStep()
        if gameStep == CF.GameDefine.GAME_STEP.GAME_STEP_NONE or gameStep == CF.GameDefine.GAME_STEP.GAME_STEP_WIN_LOST then
            self:setVisible(true)
        end
    end
end

function GameWinLostLayer:getSelfResultScore()
    return 0
end

--使用房卡或者钻石洗牌
function GameWinLostLayer:onShuffleDirectClicked(send, eventType)
    local success, err = pcall(function()
        if eventType then
            CF.NewThrowDataManager:throwData(CF.NewThrowDataDefine.SHUFFLE_CARDS_INRESULT)
            self._reportData ={sucID = "dj24080805", costInfo=self._costInfo, score = self:getSelfResultScore()}
            XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080804, self._reportData)
        end
    end)
    CF.game:getModule("PropUse"):reqShuffleWithProp()
    -- CF.game:getModule("ChangeLevel"):hide()
    -- self:hideWinLost()
    -- CF.throwDataManager:recordButtonClick(CF.ThrowDataDefine.ButtonEnumTable.BOX_ROOM_SHUFFLE,{ShuffleType = "房卡洗牌",SYType = self:recordSYtype()})
end

function GameWinLostLayer:onShuffleIndirectClicked(send, eventType)
    CF.game:getModule("PropUse"):reqShuffleWithTicket()
    CF.game:getModule("ChangeLevel"):hide()
    self:hideWinLost()
    if eventType then
        CF.NewThrowDataManager:throwData(CF.NewThrowDataDefine.SHUFFLE_CARDS_INRESULT)
        self._reportData ={sucID = "dj24080805", costInfo=self._costInfo, score = self:getSelfResultScore()}
        XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080804, self._reportData)
    -- CF.throwDataManager:recordButtonClick(CF.ThrowDataDefine.ButtonEnumTable.BOX_ROOM_SHUFFLE,{ShuffleType = "洗牌券洗牌",SYType = self:recordSYtype()})
    end
end

function GameWinLostLayer:onShuffleGoldClicked(send, eventType)
    CF.game:getModule("PropUse"):reqShuffleCharge()
    CF.game:getModule("ChangeLevel"):hide()
    self:hideWinLost()
    CF.NewThrowDataManager:throwData(CF.NewThrowDataDefine.SHUFFLE_CARDS_GOLD)
    self._reportData ={sucID = "dj24080805", costInfo=self._costInfo, score = self:getSelfResultScore()}
    XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080804, self._reportData)
    -- CF.throwDataManager:recordButtonClick(CF.ThrowDataDefine.ButtonEnumTable.BOX_ROOM_SHUFFLE,{ShuffleType = "金币洗牌",SYType = self:recordSYtype()})
end

function GameWinLostLayer:onDetailBtnBack(send, eventType)
    if self._panelDetail then
        self._panelDetail:setVisible(false)
        local detailListView = CF.UITool.seekNodeByName(self._panelDetail, "_KW_LISTVIEW_DETAILCOMB")
        if detailListView then
            detailListView:removeAllChildren()
        end
    end
end

--返回
function GameWinLostLayer:onBtnBack(send, eventType)
   self:hideWinLost()
end

function GameWinLostLayer:hideWinLost()
    self:setVisible(false)
    self:recordData()
end

function GameWinLostLayer:showSelf()
    local parent = display.getRunningScene()
    parent:addChild(self, 55)
    self._startShowTime = os.time()
end

function GameWinLostLayer:recordData()
    local data = {}
    data.Page_name = "GameStart"
    data.Start_time = self._startShowTime or 0
    data.End_time = os.time()
    data.staytime = data.End_time - data.Start_time
    CF.throwDataManager:throwData(CF.ThrowDataDefine.BOX_GAME_END_TIME,data)
 end

 function GameWinLostLayer:onShuffleUsePropSuccess()
    CF.game:getModule("ChangeLevel"):hide()
    self:hideWinLost()
 end

 function GameWinLostLayer:onPreShuffleSuc(event)
    if self._reportData then
        XH.lobby:getModule("PropEventTracker"):track(self._reportData.sucID, self._reportData)
        self._reportData = nil
    end
end

function GameWinLostLayer:hideGoldRoomBtn()
    self._lastShowBtns = CF.game:getModule("Share"):setShareHideIcons(self)
end

function GameWinLostLayer:showGoldRoomBtn()
    CF.game:getModule("Share"):setShareShowIcons(self, self._lastShowBtns)
end

function GameWinLostLayer:onUsePreShuffle(event)
	if self and not tolua.isnull(self) and event and not event.isTable then
		if self._shuffleQuanBtn:isVisible() then
			self:onShuffleIndirectClicked(self._shuffleQuanBtn, nil)
		elseif self._shuffleBtn:isVisible() then
			self:onShuffleDirectClicked(self._shuffleBtn, nil)
		end
	end
end

function GameWinLostLayer:onUpdateDisTime(event) 
    if self and not tolua.isnull(self) and self.m_shuffleDisNode and CF.game:getModule("Shuffle4") then
        local timeBg = self.m_shuffleDisNode:getChildByName("_KW_DISCOUNT_TIME_BG")
        local timeTxt = timeBg:getChildByName("_KW_DISCOUNT_TIME_TXT")
        local discount = CF.game:getModule("Shuffle4"):getCurDiscount()
        local leftTime = CF.game:getModule("Shuffle4"):getCurDisTime()
        if discount < 100 and leftTime > 0 then
            timeBg:setVisible(true)
            local min = math.floor(leftTime / 60)
	    	local second = leftTime % 60
	    	min = min > 9 and min or ("0" .. min)
	    	second = second > 9 and second or ("0" .. second)
            timeTxt:setString(min .. "分" .. second .. "秒")
            timeBg:setContentSize(cc.size(timeTxt:getContentSize().width + 14, 42))
        else
            timeBg:setVisible(false)
        end
    end
end

function GameWinLostLayer:onExitWatch(send, eventType)
	if eventType ~= ccui.TouchEventType.ended then
		return
	end
    CF.game:getModule("WatchGame"):onExitWatch()
	CF.game:leaveGame()
end

function GameWinLostLayer:onTimeClose()
    if CF.roomData:isGoldRoom() then
        return
    end
    self._curTime = 0
	if CF.roomData:getAutoContinueTime() and CF.roomData:getAutoContinueTime() > 0 then
		self._curTime = CF.roomData:getAutoContinueTime()
		self._uContinueTime:setVisible(true)
	end
	if self._curTime ~= 0 then
		self._uContinueTime:stopAllActions()
		self._uContinueTime:setString(self._curTime .. "s")
		CF.UITool.createRepeateAction(self._uContinueTime, 1,  function ()
			self._curTime = self._curTime - 1
			if self._curTime >= 0 then
				self._uContinueTime:setString(self._curTime .. "s")
			else
				self._uContinueTime:stopAllActions()
				self:onGoOnClicked(nil, ccui.TouchEventType.ended)
			end
		end)
	end
end

-- 增加头像/分数水印
function GameWinLostLayer:showWatermark()
    local WatermarkModule = CF.game:getModule("Watermark")
    if WatermarkModule then
        for k, playerUI in pairs(self._playersUI) do
            local headNode = CF.UITool.seekNodeByName(playerUI, "KW_PANEL_HEAD_POS")
            if headNode then
                WatermarkModule:addWatermark(headNode, cc.p(150,40))
            end
            local scoreNode = CF.UITool.seekNodeByName(playerUI, "KW_TEXT_TOTALWINLOST")
            if scoreNode and not scoreNode._headWatermark then
                WatermarkModule:addWatermark(scoreNode, cc.p(100,60))
            end
        end
    end
end

function GameWinLostLayer:onChangeCardClicked(sender , eventType)
    CF.game:getModule("ChangeCard"):reservedChangeCard()
end

function GameWinLostLayer:updateBtnVisivble(event)
    if not event or not event.data then
        return
    end
    if event.data.isShow == false then
        self._changeCardBtn:setVisible(false)
        return
    end
    self._changeCardBtn:setVisible(true)

    if event.data.type == Define.ShowType.ROOM_CARD then
        self._imgDiamond:setVisible(false)
        self._imgRoomCard:setVisible(true)
        self._txtCost:setVisible(true)
        self._txtCost:setString(tostring(event.data.price))
        self._txtCostCard:setVisible(false)
    elseif event.data.type == Define.ShowType.DIAMOND then
        self._imgDiamond:setVisible(true)
        self._imgRoomCard:setVisible(false)
        self._txtCost:setVisible(true)
        self._txtCost:setString(tostring(event.data.price))
        self._txtCostCard:setVisible(false)
    elseif event.data.type == Define.ShowType.CHANGE_CARD then
        self._imgDiamond:setVisible(false)
        self._imgRoomCard:setVisible(false)
        self._txtCost:setVisible(false)
        self._txtCostCard:setVisible(true)
        self._txtCostCard:setString("x"..tostring(event.data.price))
    end
end

return GameWinLostLayer��