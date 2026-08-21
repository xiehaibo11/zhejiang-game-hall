local ShuffleIconView = CF.gameClass("ShuffleIconView", CF.ViewBase)
local MoveExtend = require("game.GameBase.Modules.LuckyTaskIcon.MoveExtend")

local MAH_POS = "shuffle_mah_pos"
local WAHUA_POS = "shuffle_wahua_pos"
local CARD_POS = "shuffle_card_pos"

function ShuffleIconView:ctor()
    ShuffleIconView.super.ctor(self)
    self:AdaptationIphoneX()

    local posKey = MAH_POS
    local pos = cc.p(self._panelMahjongPos:getPosition())
    local gameID = CF.roomData:getGameID()
    if CF.gameSub:isMahjong(gameID) then
        if CF.gameSub:isWaHua(gameID) then
            posKey = WAHUA_POS
            pos = cc.p(self._panelWaHuaPos:getPosition())
        end
    else
        posKey = CARD_POS
        pos = cc.p(self._panelPokerPos:getPosition())
    end
    if cc.UserDefault:getInstance():getStringForKey(posKey, "") == "" then
        self._btnShuffle:setPosition(pos)
    end
    MoveExtend.extend(self, {root = self._panelRoot, icon = self._icon, layout = self._btnShuffle, key = posKey})
    self:updatPos()
    self._btnShuffle:setVisible(false)
    self:initDiscountNode()
end

function ShuffleIconView:onWinSizeChange()
    local iconPos = self:__getLocalPos()
    local viewSize = self._panelRoot:getContentSize()
    local btnSize = self._btnShuffle:getContentSize()
    if iconPos.x < btnSize.width/2 then
        iconPos.x = btnSize.width/2
    elseif iconPos.x > viewSize.width - btnSize.width/2 then
        iconPos.x = viewSize.width - btnSize.width/2
    end
    if iconPos.y < btnSize.height/2 then
        iconPos.y = btnSize.height/2
    elseif iconPos.y > viewSize.height - btnSize.height/2 then
        iconPos.y = viewSize.height - btnSize.height/2
    end
    self._btnShuffle:setPosition(iconPos)
    self:__setLocalPos()
end

function ShuffleIconView:getAdaptationConfig()
    return {
        {node = self._panelPokerPos, bRight = true, bHalf = true},
        {node = self._panelWaHuaPos, bRight = true, bHalf = true},
    }
end

function ShuffleIconView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/ShuffleIcon.csb"
end

function ShuffleIconView:getProxyEvents()
    return {
        {module = CF.game:getModule("PropUse"), eventKeyName = "EVENT_PRESHUFFLE_SHOW", callBack = "onShowShuffleBtn"},
        {module = CF.game:getModule("PropUse"), eventKeyName = "EVENT_PRE_SUCCESS", callBack = "onPreShuffleSuc"},
        {module = CF.game:getModule("Shuffle4"), eventKeyName = "EVENT_PRE_NEXT_SHUFFLE_BY_TIP", callBack = "onUsePreShuffle"},
        {module = CF.game:getModule("Shuffle4"), eventKeyName = "EVENT_USED_DISCOUNT", callBack = "onUseDiscount"},
        {module = CF.game:getModule("Shuffle4"), eventKeyName = "EVENT_UPDATE_DISCOUNT_TIME", callBack = "onUpdateDisTime"},
        {module = XH.lobby:getModule("Lobby"), eventKeyName = "EVENT_WIN_SIZE_CHANGE", callBack = "onWinSizeChange"}
    }
end

function ShuffleIconView:getBindingInfo()
    return {
        ["_KW_PANEL_ROOT"] = {varName = "_panelRoot"},
        ["_KW_PANEL_ICON"] = {varName = "_icon", type = XH.UI_TYPE.BUTTON, onTouch = "onTouchProp"}, --处理点击监听
        ["_KW_BTN_SHUFFLE"] = {varName = "_btnShuffle"}, --进行移动的

        ["_KW_IMG_DIAMOND"] = {varName = "_imgDiamond"},
        ["_KW_IMG_ROOMCARD"] = {varName = "_imgRoomCard"},
        ["_KW_TEXT_COST"] = {varName = "_textCost"},
        ["_KW_TEXT_FREE"] = {varName = "_textFree"},
        ["_KW_SHUFFLE_POKER_POS"] = {varName = "_panelPokerPos"},
        ["_KW_SHUFFLE_MAHJONG_POS"] = {varName = "_panelMahjongPos"},
        ["_KW_SHUFFLE_WAHUA_POS"] = {varName = "_panelWaHuaPos"},
    }
end

-- 初始化折扣显示
function ShuffleIconView:initDiscountNode()
    local modu = CF.game:getModule("Shuffle4")
    if modu then
        self.m_shuffleDisNode = modu:getDiscountNode(self._btnShuffle, self._btnShuffle:getContentSize().width / 2, 90, 0.5, true)
    end
end

function ShuffleIconView:onPreShuffleSuc(event)
    if self._reportData then
        XH.lobby:getModule("PropEventTracker"):track(self._reportData.sucID, self._reportData)
        self._reportData = nil
    end
end
function ShuffleIconView:onShowShuffleBtn(event)
    if CF.roomData:getIsSeer() then
        return
    end
    if not event or not event.msg or event.msg.isShow == nil then
        return
    end
    if not self._btnShuffle then
        return
    end
    self._btnShuffle:setVisible(event.msg.isShow)
    if not event.msg.isShow then
        return
    end

    if not event.msg.shuffleInfo then
        return
    end
    local shuffleInfo = event.msg.shuffleInfo
    self._imgDiamond:setVisible(shuffleInfo.propID == CF.areaData:getPropDiamndID())
    self._imgRoomCard:setVisible(shuffleInfo.propID == CF.areaData:getPropRoomCardID() or shuffleInfo.propID == CF.areaData:getPropBindRoomCardID())
    local strCost = tostring(shuffleInfo.cost)
    if shuffleInfo.propID == CF.gameSub:getShufflePropQuanID() then
        strCost = "x" .. tostring(shuffleInfo.cost)
    end
    self._textCost:setString(strCost)
    local modu = CF.game:getModule("Shuffle4")
    if modu:isFree() then
        self._imgDiamond:setVisible(false)
        self._imgRoomCard:setVisible(false)
        self._textCost:setVisible(false)
        if self._textFree then
            self._textFree:setVisible(true)
        end
    else
        if self._textFree then
            self._textFree:setVisible(false)
        end
        self._textCost:setVisible(true)
    end
    if self.m_shuffleDisNode and modu then
        local curDiscount = modu:getCurDiscount() / 100
        self.m_shuffleDisNode:setVisible(curDiscount > 0 and curDiscount < 1)
        if modu:isFree() then
            self.m_shuffleDisNode:setVisible(true)
            self.m_shuffleDisNode:getChildByName("_KW_DISCOUNT_TXT"):setVisible(false)
            self.m_shuffleDisNode:getChildByName("bg"):setVisible(false)
        else
            self.m_shuffleDisNode:getChildByName("_KW_DISCOUNT_TXT"):setVisible(true)
            self.m_shuffleDisNode:getChildByName("bg"):setVisible(true)
        end
    end

    XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24091901, 
        { 
            costInfo = { propid= shuffleInfo.propID, costPropid = shuffleInfo.propID, cnt = shuffleInfo.cost or 1 }
        }
    )
end

function ShuffleIconView:isShowShuffleTipNewArea()
    return XH.areaData:getLobbyID() == XH.LOBBY_ID.TAIZHOU
end

-- 新是否显示二次弹窗
-- 连续5天以上使用洗牌的话，显示不再提示
function ShuffleIconView:isShowShuffleTipNew()
    local lastDay = cc.UserDefault:getInstance():getStringForKey("shufflenew_lastday_" .. XH.areaData:getLobbyID(), 0)
    local isNotShowForever = cc.UserDefault:getInstance():getBoolForKey("shufflenew_nextnone_" .. XH.areaData:getLobbyID(), false)
    if lastDay == os.date("%Y-%m-%d", os.time()) then
        return false
    end
    if isNotShowForever then
        return false
    end
    return true
end

function ShuffleIconView:onPreShuffleClicked(send, eventType)
    if eventType then
        CF.NewThrowDataManager:throwData(CF.NewThrowDataDefine.SHUFFLE_CARDS_INGAME)
    end
    local isShowShuffleTip = cc.UserDefault:getInstance():getBoolForKey("isShowShuffkeNext" .. CF.roomData:getGameID(), true)
    local modu = CF.game:getModule("Shuffle4")
    if self:isShowShuffleTipNewArea() then
        isShowShuffleTip = self:isShowShuffleTipNew()
    end
    if modu and modu:isFree() then
        isShowShuffleTip = false
    end
    local shuffleInfo = CF.game:getModule("PropUse"):getShufflePropInfo(CF.gameSub:getShufflePropQuanID())
    if isShowShuffleTip then
        if not shuffleInfo or not shuffleInfo.cost then
            return
        end
        local propTypeString = ""
        if shuffleInfo.type == CF.GameDefine.SHUFFLE_SHOW_TYPE.QUAN then
            propTypeString = " 张洗牌券"
        elseif shuffleInfo.type == CF.GameDefine.SHUFFLE_SHOW_TYPE.DIAMOND then
            propTypeString = " 钻石"
        elseif shuffleInfo.type == CF.GameDefine.SHUFFLE_SHOW_TYPE.ROOMCARD then
            propTypeString = " 张房卡"
        end        
        if self:isShowShuffleTipNewArea() then
            local tipLayer = CF.TipTool.showPopLayer("TipLayer", {CF.TipLayer.ENUM_TIP_TYPE.SHUFFLE_TIP_NEW, CF.roomData:getGameID()})
            tipLayer:setText("本次洗牌操作将消耗你 " .. tostring(shuffleInfo.cost) .. propTypeString)
            tipLayer:setButtonMoreEvent(
                tipLayer.ENUM_BUTTON_TYPE.OK,
                function()
                    local showTip = cc.UserDefault:getInstance():getBoolForKey("shufflenew_next_" .. XH.areaData:getLobbyID(), true)
                    local lastDay = cc.UserDefault:getInstance():getStringForKey("shufflenew_lastday_" .. XH.areaData:getLobbyID(), 0)
                    local lastTimes = cc.UserDefault:getInstance():getIntegerForKey("shufflenew_days_" .. XH.areaData:getLobbyID(), 0)
                    if showTip == false then
                        cc.UserDefault:getInstance():setStringForKey("shufflenew_lastday_" .. XH.areaData:getLobbyID(), os.date("%Y-%m-%d", os.time()))
                        if lastDay ~= os.date("%Y-%m-%d", os.time()) then
                            if lastDay == os.date("%Y-%m-%d", os.time() - 86400) then
                                cc.UserDefault:getInstance():setIntegerForKey("shufflenew_days_" .. XH.areaData:getLobbyID(), lastTimes + 1)
                            else
                                cc.UserDefault:getInstance():setIntegerForKey("shufflenew_days_" .. XH.areaData:getLobbyID(), 1)
                            end
                        end
                        if lastTimes >= 5 then
                            cc.UserDefault:getInstance():setBoolForKey("shufflenew_nextnone_" .. XH.areaData:getLobbyID(), true)
                        end
                    end
                    local type = CF.GameDefine and CF.GameDefine.PRE_SHUFFLE_OPT.OPTS_TYPE_SET or 1
                    CF.game:getModule("PropUse"):reqPreShuffle(type, nil, true)
                end
            )
        else
            local tipLayer = CF.TipTool.showPopLayer("TipLayer", {CF.TipLayer.ENUM_TIP_TYPE.SHUFFLE_TIP, CF.roomData:getGameID()})
            tipLayer:setText("本次洗牌操作将消耗你 " .. tostring(shuffleInfo.cost) .. propTypeString)
            tipLayer:setButtonMoreEvent(
                tipLayer.ENUM_BUTTON_TYPE.OK,
                function()
                    local type = CF.GameDefine and CF.GameDefine.PRE_SHUFFLE_OPT.OPTS_TYPE_SET or 1
                    CF.game:getModule("PropUse"):reqPreShuffle(type, nil, true)
                end
            )
        end
    else
        local type = CF.GameDefine and CF.GameDefine.PRE_SHUFFLE_OPT.OPTS_TYPE_SET or 1
        CF.game:getModule("PropUse"):reqPreShuffle(type, nil, true)
    end

    shuffleInfo = shuffleInfo or {propID=0,cost=0}
    self._reportData ={sucID = "dj24080805", costInfo={propid=CF.gameSub:getShufflePropQuanID(),costPropid=shuffleInfo.propID,cnt=shuffleInfo.cost}}
    XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080804, self._reportData)
end

function ShuffleIconView:onUsePreShuffle(event)
    if event and event.isTable then
        self:onPreShuffleClicked(self._btnShuffle)
    end
end

-- 使用成功折扣
function ShuffleIconView:onUseDiscount(event) 
    if event and event.msg and self.m_shuffleDisNode then
        local discount = tonumber(event.msg.discount) / 10
        local serverTime = XH.lobby:getModule("Shop"):getServerTime()
        local shuffleInfo = CF.game:getModule("PropUse"):getShufflePropInfo(CF.gameSub:getShufflePropQuanID())
        local hasDis = discount < 10 and tonumber(event.msg.time) > serverTime -- 当期是否存在折扣
        local isNotUseTicket = false    -- 是否不是使用券，如果shuffleInfo不存在，也当成true，用于隐藏折扣
        if shuffleInfo then
            isNotUseTicket = shuffleInfo.type ~= CF.GameDefine.SHUFFLE_SHOW_TYPE.QUAN
        end
        self.m_shuffleDisNode:setVisible(hasDis and isNotUseTicket)
        self.m_shuffleDisNode:getChildByName("_KW_DISCOUNT_TXT"):setString(tostring(discount))
        if shuffleInfo and shuffleInfo.cost and isNotUseTicket then
            self._textCost:setString(tostring(shuffleInfo.cost))
        end
    end
end

function ShuffleIconView:onUpdateDisTime(event) 
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
            local propUseModule = CF.game:getModule("PropUse")
            if propUseModule then
                propUseModule:updateShuffleBtn()
            end
        end
    end
end

function ShuffleIconView:onClick(send, fun, icon)
    print("onClick")
    self:onPreShuffleClicked(send, ccui.TouchEventType.ended)
end

function ShuffleIconView:onTouchProp(send, eventType)
    self:onTouch(send, eventType)
end

function ShuffleIconView:onMoved(send, endX, endY)
end

function ShuffleIconView:onMoveEnded(send, fun, icon)
end

return ShuffleIconView
   I7  