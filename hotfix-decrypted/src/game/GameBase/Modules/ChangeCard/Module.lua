local ChangeCardModule = class("ChangeCardModule", CF.ModuleBase)
local Define = require("game.GameBase.Modules.ChangeCard.Define")

ChangeCardModule.EVENT_BTN_VISIBLE = "EVENT_BTN_VISIBLE"
ChangeCardModule.EVENT_PLAY_ANI = "EVENT_PLAY_ANI"
ChangeCardModule.EVENT_UPDATE_SURPLUS_MAH = "EVENT_UPDATE_SURPLUS_MAH"

local StoreKey = "changecard_%d_%d"

local showTipKey = "changecard_tip"
local changeDaysKey = "changecard_days_"
local lastDayKey = "changecard_lastday_"
local nextOneKey = "changecard_nextnone_"

local priceDiamondKey = "changecard_diamond_p"
local priceRoomcardKey = "changecard_roomcard_p"

function ChangeCardModule:ctor()
    ChangeCardModule.super.ctor(self)
    
    self._changeCardInfo = {}

    local priceDiamond = cc.UserDefault:getInstance():getStringForKey(priceDiamondKey, "0")
    local priceRoomcard = cc.UserDefault:getInstance():getStringForKey(priceRoomcardKey, "0")
    self._roomCardPrice = tonumber(priceRoomcard)
    self._diamondPrice = tonumber(priceDiamond)

    self._type = Define.ShowType.DIAMOND
    self._useType = Define.ShowType.DIAMOND

    self._changeState = {}
end


function ChangeCardModule:getProxyEvents()
    return {
        {module = CF.game:getModule("Player"), eventKeyName = "EVENT_PLAYER_ENTER", callBack = "onPlayerEnter"},
        {module = CF.roomData, eventKeyName = "EVENT_GAME_PLAYCOUNT_CHANGED", callBack = "onPlayCountChanged"},
        {module = CF.netEngine, eventName = CF.GameMProtocol.RespUseProps.event_key, callBack = "onRespUseProp"},
        {module = CF.netEngine, eventName = CF.GameMProtocol.RespDealContinueRequest.event_key, callBack = "onReciveGPContinue"},
        {module = CF.game:getModule("WinLost"), eventKeyName = "EVENT_SHUFFLE_TIP_WIN_AND_LOST", callBack = "onWinLost"},
        {module = XH.playerData, eventKeyName = "EVENT_PLAYER_DROP_CHANGED", callBack = "onPropDataChanged" },
    }
end

function ChangeCardModule:getReqConfig()
    return {}
end

function ChangeCardModule:onReciveGPContinue(event)
    self:clearChangeCard()
end

function ChangeCardModule:onPlayerEnter(event)
    if not CF.roomData then
        return
    end
    if not event.msg or not event.msg.numid then
        return
    end
    local selfEnter = event.msg.numid == CF.selfPlayerData:getNumberID()
    if selfEnter then
        self:reqChangeCardInfo()
    end
end

-- 获取配置
function ChangeCardModule:getIsOpen()
    if self._isOpen ~= nil then
        return self._isOpen
    end
    local configModule = XH.lobby:getModule("Configuration")
    if not configModule then
        return false
    end
    local ConfigurationDefine = require("lobby.Modules.Configuration.Define")
    local configJsonData = configModule:getConfigJsonData(ConfigurationDefine.Config.ALL, "AllConfig")
    if configJsonData and configJsonData.changecard_close then
        local areaID = CF.areaData:getAreaID()
        for index, value in pairs(configJsonData.changecard_close) do
            if value == areaID then
                self._isOpen = false
                return self._isOpen
            end
        end
    end
    self._isOpen = true
    return self._isOpen
end

function ChangeCardModule:reqChangeCardInfo()
    if not self:isSupport() then
        return 
    end
    if self._changeCardInfo and self._changeCardInfo.multi_goods then
        return
    end
    CF.reqChangeCardProductList(self, self.onChangeCardInfo)
end

function ChangeCardModule:onChangeCardInfo(req, type, data)
    if type == CF.REQ_TYPE_SUCCESS then
        for _, v in pairs(data) do
            if v.multi_goods_info and #v.multi_goods_info > 0 then
                local prop_count = nil
                for _,multi_goods_info in pairs(v.multi_goods_info) do
                    if not prop_count or multi_goods_info.prop_count < prop_count then
                        prop_count = multi_goods_info.prop_count
                        self._changeCardInfo = multi_goods_info
                    end
                end
            end
        end
    end
    if self._changeCardInfo.multi_goods and CF.roomData then
        self:updatePrice()
        CF.reqChangeCard({
            room_id = CF.roomData:getRoomID(),
            ju_num = CF.roomData:getPlayCount() + 1,
            opt = CF.GameDefine.PRE_SHUFFLE_OPT.OPTS_TYPE_GET
        }, self, self.onRespChangeCard)
    end
end

function ChangeCardModule:reqChangeCard(state)
    if not self:isSupport() then
        return 
    end

    local isReserved = state == Define.State.RESERVED
    if isReserved then
        if self:isNotEnough() then
            CF.TipTool.showToast("您的道具不足，请进行充值")
            return
        end
        self:freezeProp()
        self._useType = self._type
    end
    local playCount = CF.roomData:getPlayCount()
    CF.reqChangeCard({
        room_id = CF.roomData:getRoomID(),
        ju_num = isReserved and playCount + 1 or playCount,
        opt = CF.GameDefine.PRE_SHUFFLE_OPT.OPTS_TYPE_SET_CHANGE,
        change = state..":"..tostring(self._type)
    }, self, self.onRespChangeCard)
end

function ChangeCardModule:clearChangeCard()
    self._changeState = {}
    local maxCount = CF.roomData:getMaxPlayCount() 
    local playerID = CF.selfPlayerData:getNumberID()
    for i = 0, maxCount do
        local key = string.format(StoreKey, playerID, i)
        cc.UserDefault:getInstance():deleteValueForKey(key)
    end
end
function ChangeCardModule:updateSurPlusMah()
    self:dispatchEvent({name = self.EVENT_UPDATE_SURPLUS_MAH})
end

function ChangeCardModule:onRespChangeCard(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        if not data or not data.reply then
            return
        end
        dump("onRespChangeCard: ", data)
        if data.reply.opt == "OPTS_TYPE_GET" then
            if data.reply.changeList == nil then
                return
            end
            if #data.reply.changeList ~= 0 then
                for _, v in pairs(data.reply.changeList) do
                    if string.find(v, tostring(CF.selfPlayerData:getNumberID())) then
                        local userid, state, type = v:match "^(%w+):(%w+):(%w+)$"
                        self:setChangeState(state, type)
                        self._type = tonumber(type)
                        self._useType = self._type
                        break
                    end
                end
            end
            self:updateBtn()   
        elseif data.reply.opt == "OPTS_TYPE_SET_CHANGE" then    
            if string.find(data.change, Define.State.RESERVED) then
                self:setChangeState(Define.State.RESERVED, self._useType)
                XH.TipTool.showToast("已预约，将在下局开局时进行换牌", 3)
                self:dispatchEvent({name = self.EVENT_BTN_VISIBLE, data = { 
                    isShow = false
                }})
            end
        end
    end
end

function ChangeCardModule:reqUseProp(event)
    if self._event then -- 多次触发
        return
    end
    self._event = event

    local propID = self:getPayPropID(true)
    local price = self:getPrice(true)

    if CF.areaData:getPropList().smallRoomCardID and propID == CF.areaData:getPropRoomCardID() then
        local smallRoomCardRatio = CF.areaData:getPropSmallRoomCardRatio()
        if smallRoomCardRatio then
            price = math.floor(price * smallRoomCardRatio)
            propID = CF.areaData:getPropList().smallRoomCardID
        end
    end
    CF.msgManager:sendRequestUseProps(propID, price, CF.gameSub:getShuffleType(CF.roomData:getGameID()), Define.ParamStr)
    XH.SysTool.performDelayOnce(function()
        self._event = nil
    end, 5)
end

function ChangeCardModule:onRespUseProp(event)
    local usePropMsg = CF.GameMProtocol.RespUseProps:new()
    usePropMsg:bistream(event.msg.buff, event.msg.len)
    if not string.find(usePropMsg.param, Define.FlagStr) then
        return
    end
    if usePropMsg.flag == 0 then -- 使用成功
        self:setChangeState(Define.State.SUCCESS, self._useType)
        self:dispatchEvent({name = self.EVENT_PLAY_ANI})
        self:dispatchEvent({name = self.EVENT_UPDATE_SURPLUS_MAH})
        self:reqChangeCard(Define.State.SUCCESS)
        local reportData = {
            costInfo = {
                costPropid = self:getPayPropID(true),
                propid = CF.areaData:getPropChangeCardID(), 
                cnt = self:getPrice(true), 
            }
        }
        CF.selfPlayerData:flushPlayerDrop()
        XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080840, reportData)
        return
    end

    if usePropMsg.flag == CF.GameMProtocol.RespUseProps.FLAG.NOENOUGHPROPS or usePropMsg.flag == CF.GameMProtocol.RespUseProps.FLAG.NOT_COST then
        -- CF.TipTool.showToast("您的道具不足，请进行充值")
    else
        local tipLayer = CF.TipTool.showPopLayer("TipLayer")
        tipLayer:setText("使用换牌卡失败, errcode：" .. usePropMsg.flag)
    end
    self:continueShuffle()
end

function ChangeCardModule:continueShuffle()
    CF.game:getModule("PropUse"):onStartShuffle(self._event)
    self._event = nil
end

function ChangeCardModule:isSupport()
    return self:getIsOpen() and CF.roomData and CF.roomData.isSupportPreShuffle and CF.roomData:isSupportPreShuffle() and (not CF.roomData:getIsSeer())
end

function ChangeCardModule:isChangeCardReserved(nextRound)
    if not self:isSupport() then
        return false
    end
    return self:getChangeState(nextRound) == Define.State.RESERVED or (self._event ~= nil)
end

function ChangeCardModule:isChangeCardSuccess()
    if not self:isSupport() then
        return false
    end
    return self:getChangeState() == Define.State.SUCCESS
end

function ChangeCardModule:getPayType()
    return self._type
end

function ChangeCardModule:getPayPropID(isUseType)
    local type = isUseType and self._useType or self._type
    if type == Define.ShowType.ROOM_CARD then
        return CF.areaData:getPropRoomCardID()
    elseif type == Define.ShowType.CHANGE_CARD then
        return CF.areaData:getPropChangeCardID()
    end
    return CF.areaData:getPropDiamndID()
end

function ChangeCardModule:isNotEnough()

    local changCardID = CF.areaData:getPropChangeCardID()
    local changeCardCount = CF.game:getModule("PropUse"):getPropCnt(changCardID)
    local userData = CF.selfPlayerData
    local userDiamond = userData:getDiamnd()
    local userRoomCard = userData:getRoomCard()

    local price = self:getPrice()

    if self._type == Define.ShowType.ROOM_CARD then
        return userRoomCard < price
    elseif self._type == Define.ShowType.CHANGE_CARD then
        return changeCardCount < price
    end
    return userDiamond < price
end

function ChangeCardModule:getPrice(isUseType)
    local type = isUseType and self._useType or self._type
    local price = 1
    if type == Define.ShowType.ROOM_CARD then
        price = self._roomCardPrice
    elseif type == Define.ShowType.DIAMOND then
        price = self._diamondPrice
    end
    return price
end

function ChangeCardModule:getPropDes()
    if self._type == Define.ShowType.ROOM_CARD then
        return "房卡"
    elseif self._type == Define.ShowType.DIAMOND then
        return "钻石"
    end
    return "换牌卡"
end

function ChangeCardModule:updateBtn()

    if not self:isSupport() then
        return 
    end

    local type = self:getShowType()
    self._type = type
    local price = self:getPrice()

    local playCount = CF.roomData:getPlayCount()
    local maxPlayCount = CF.roomData:getMaxPlayCount()
    if (price == 0) or (playCount == maxPlayCount) then
        self:dispatchEvent({name = self.EVENT_BTN_VISIBLE, data = { 
            isShow = false
        }})
        return
    end
    local isShow = self:getChangeState(true) == Define.State.NO_CHANGE
    self:dispatchEvent({name = self.EVENT_BTN_VISIBLE, data = { 
        isShow = isShow, 
        type = type,
        price = price
    }})
end

function ChangeCardModule:isShowRoomCardArea()
    return XH.areaData:getLobbyID() == XH.LOBBY_ID.TAIZHOU
end

function ChangeCardModule:getShowType()
    
    local changeCardID = CF.areaData:getPropChangeCardID()
    local changeCardCount = CF.selfPlayerData:getPropCountByID(changeCardID)
    if changeCardCount > 0 then
        return Define.ShowType.CHANGE_CARD
    end

    if self:isShowRoomCardArea() then
        return Define.ShowType.ROOM_CARD
    end

    local diamomdCount = CF.selfPlayerData:getDiamnd()
    if diamomdCount >= self._diamondPrice then
        return Define.ShowType.DIAMOND
    end

    if CF.selfPlayerData:getRoomCard() >= self._roomCardPrice then
        return Define.ShowType.ROOM_CARD
    end

    return Define.ShowType.DIAMOND
end

function ChangeCardModule:onPlayCountChanged(event)
    
end

function ChangeCardModule:getChangeState(nextRound)
    
    local roomID = CF.roomData:getRoomID()
    local playCount = CF.roomData:getPlayCount()
    if nextRound then
        playCount = playCount + 1
    end
    local key = string.format(StoreKey, CF.selfPlayerData:getNumberID(), playCount)
    if self._changeState[key] ~= nil then
        -- print('xfy get key:'..key)
        -- print('xfy get value:'..self._changeState[key])
        return self._changeState[key]
    end
    local str = cc.UserDefault:getInstance():getStringForKey(key, "")
    if str ~= "" then
        local _roomID, _state, _type = str:match "^(%w+):(%w+):(%w+)$"
        if _roomID == tostring(roomID) then
            self._changeState[key] = _state
            self._useType = tonumber(_type)
            return _state
        end
    end
    -- print('xfy get key:'..key)
    -- print('xfy get value: NO_CHANGE')
    self._changeState[key] = Define.State.NO_CHANGE
    return Define.State.NO_CHANGE
end

function ChangeCardModule:onWinLost()
    -- self:clearChangeCard()
end

function ChangeCardModule:setChangeState(state, type)
    local playCount = CF.roomData:getPlayCount() 
    if state == Define.State.RESERVED then
        playCount = playCount + 1
    end
    local key = string.format(StoreKey, CF.selfPlayerData:getNumberID(), playCount)
    self._changeState[key] = state
    local value = string.format("%d:%s:%d", CF.roomData:getRoomID(), state, type)
    cc.UserDefault:getInstance():setStringForKey(key, value)
    -- print('xfy set key:'..key)
    -- print('xfy set value:'..value)
end

function ChangeCardModule:updatePrice()

    if not self._changeCardInfo or not self._changeCardInfo.multi_goods then
        return
    end
    local diamondID = CF.areaData:getPropDiamndID()
    local roomCardID = CF.areaData:getPropRoomCardID()
    for _,v in pairs(self._changeCardInfo.multi_goods) do
        local id = tonumber(string.match(v.type, "%d+"))
        local price = tonumber(v.value)/(self._changeCardInfo.prop_count or 1)
        if id == diamondID then
            self._diamondPrice = price
            cc.UserDefault:getInstance():setStringForKey(priceDiamondKey, price)
        elseif id == roomCardID then
            self._roomCardPrice = price
            cc.UserDefault:getInstance():setStringForKey(priceRoomcardKey, price)
        end
    end
end

function ChangeCardModule:isShowTipNewArea()
    return XH.areaData:getLobbyID() == XH.LOBBY_ID.TAIZHOU
end

function ChangeCardModule:reservedChangeCard()

    local reportData = {
        costInfo = {
            costPropid = self:getPayPropID(),
            propid = CF.areaData:getPropChangeCardID(), 
            cnt = self:getPrice(), 
        }
    }
    XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080839, reportData)

    local isShowShuffleTip = cc.UserDefault:getInstance():getBoolForKey(showTipKey .. CF.roomData:getGameID(), true)
    if self:isShowTipNewArea() then
        isShowShuffleTip = self:isShowTipNew()
    end
    if not isShowShuffleTip then
        self:reqChangeCard(Define.State.RESERVED)
        return
    end
    if self:isShowTipNewArea() then
       self:showNewTip()
    else
        self:showTip()
    end
end

function ChangeCardModule:isShowTipNew()
    local lastDay = cc.UserDefault:getInstance():getStringForKey(lastDayKey .. XH.areaData:getLobbyID(), 0)
    local isNotShowForever = cc.UserDefault:getInstance():getBoolForKey(nextOneKey .. XH.areaData:getLobbyID(), false)
    if lastDay == os.date("%Y-%m-%d", os.time()) then
        return false
    end
    if isNotShowForever then
        return false
    end
    return true
end

function ChangeCardModule:showNewTip()

    local changeCardModule = CF.game:getModule("ChangeCard")
    local price = changeCardModule:getPrice()
    local propDes = changeCardModule:getPropDes()
    local checkboxInitFunc = function()
        return cc.UserDefault:getInstance():getBoolForKey(showTipKey .. XH.areaData:getLobbyID(), true)
    end
    local checkFunc = function(send, eventType)
        if eventType == ccui.CheckBoxEventType.selected then
            cc.UserDefault:getInstance():setBoolForKey(showTipKey .. XH.areaData:getLobbyID(), true)
        elseif eventType == ccui.CheckBoxEventType.unselected then
            cc.UserDefault:getInstance():setBoolForKey(showTipKey .. XH.areaData:getLobbyID(), false)
        end
    end
    local checkboxTextFunc = function()
        return cc.UserDefault:getInstance():getIntegerForKey(changeDaysKey .. XH.areaData:getLobbyID(), 0) < 5 and "今日不再提示" or "不再提示"
    end
    local tipLayer = CF.TipTool.showPopLayer("TipLayerCommon", {{checkboxInitFunc = checkboxInitFunc, checkFunc = checkFunc, checkboxTextFunc = checkboxTextFunc}})
    tipLayer:setText("本次换牌操作将消耗你 " .. tostring(price) .. propDes)
    tipLayer:setButtonMoreEvent(
        tipLayer.ENUM_BUTTON_TYPE.OK,
        function()
            self:reqChangeCard(Define.State.RESERVED)
            local showTip = cc.UserDefault:getInstance():getBoolForKey(showTipKey .. XH.areaData:getLobbyID(), true)
            local lastDay = cc.UserDefault:getInstance():getStringForKey(lastDayKey .. XH.areaData:getLobbyID(), 0)
            local lastTimes = cc.UserDefault:getInstance():getIntegerForKey(changeDaysKey .. XH.areaData:getLobbyID(), 0)
            if showTip then
                cc.UserDefault:getInstance():setStringForKey(lastDayKey .. XH.areaData:getLobbyID(), os.date("%Y-%m-%d", os.time()))
                if lastDay ~= os.date("%Y-%m-%d", os.time()) then
                    if lastDay == os.date("%Y-%m-%d", os.time() - 86400) then
                        cc.UserDefault:getInstance():setIntegerForKey(changeDaysKey .. XH.areaData:getLobbyID(), lastTimes + 1)
                    else
                        cc.UserDefault:getInstance():setIntegerForKey(changeDaysKey .. XH.areaData:getLobbyID(), 1)
                    end
                end
                if lastTimes >= 5 then
                    cc.UserDefault:getInstance():setBoolForKey(nextOneKey .. XH.areaData:getLobbyID(), true)
                end
            end
        end
    )
end

-- 客户端冻结房卡
-- 免费房卡冻结实际数量
function ChangeCardModule:freezeProp()

    local propID = self:getPayPropID()
    local price = self:getPrice()
    local lobbyId = CF.areaData:getLobbyID()
    local numid = CF.selfPlayerData:getNumberID()
    local strKeyDiamond = string.format("KW_MIN_DIAMOND_%d_%d", lobbyId, numid)
    local strKeyRoomCard = string.format("KW_MIN_ROOMCARD_%d_%d", lobbyId, numid)
    local strKeyRoomCardTeaHouse = string.format("KW_MIN_ROOMCARD_TEAHOUSE_%d_%d", lobbyId, numid)

    -- 冻结比赛场房卡
    local teahouseData = CF.teaHouseManager and CF.teaHouseManager:getTeaHouseData()
    if teahouseData and teahouseData:isInTeahouse() and teahouseData:isPlayerOwnerPayType() and CF.gameSub:getShuffleType() ~= 0 then
        local v = cc.UserDefault:getInstance():getStringForKey(strKeyRoomCardTeaHouse, "0")
        cc.UserDefault:getInstance():setStringForKey(strKeyRoomCardTeaHouse, tostring( tonumber(v) + price))
        return
    end
    
    if self._type == Define.ShowType.ROOM_CARD then
        local v = cc.UserDefault:getInstance():getStringForKey(strKeyRoomCard, "0")
        cc.UserDefault:getInstance():setStringForKey(strKeyRoomCard, tostring( tonumber(v) + price))
    elseif self._type == Define.ShowType.DIAMOND then
        local v = cc.UserDefault:getInstance():getStringForKey(strKeyRoomCard, "0")
        cc.UserDefault:getInstance():setStringForKey(strKeyDiamond, tostring( tonumber(v) + price))
    end

    CF.selfPlayerData:flushPlayerDrop()
end

function ChangeCardModule:showTip()

    local changeCardModule = CF.game:getModule("ChangeCard")
    local price = changeCardModule:getPrice()
    local propDes = changeCardModule:getPropDes()
    local gameID = CF.roomData:getGameID()
    local checkboxInitFunc = function()
        return true
    end
    local checkFunc = function(send, eventType)
        if eventType == ccui.CheckBoxEventType.selected then
            cc.UserDefault:getInstance():setBoolForKey(showTipKey..gameID, false)
        elseif eventType == ccui.CheckBoxEventType.unselected then
            cc.UserDefault:getInstance():setBoolForKey(showTipKey..gameID, true)
        end
    end
    local checkboxTextFunc = function()
        return "下次不再提醒"
    end
    local tipLayer = CF.TipTool.showPopLayer("TipLayerCommon", {{checkboxInitFunc = checkboxInitFunc, checkFunc = checkFunc, checkboxTextFunc = checkboxTextFunc}})
    tipLayer:setText("本次换牌操作将消耗你 " .. tostring(price) .. propDes)
    tipLayer:setButtonMoreEvent(
        tipLayer.ENUM_BUTTON_TYPE.OK,
        function()
            self:reqChangeCard(Define.State.RESERVED)
        end
    )
    cc.UserDefault:getInstance():setBoolForKey(showTipKey..gameID, false)
end

function ChangeCardModule:onPropDataChanged()
   self:updateBtn() 
end

return ChangeCardModule
  �W  