local UIMahHandArea = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View2D.UIMahHandArea")
local UIMahFlowerArea = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View2D.UIMahFlowerArea")
local UIMahTouchHandArea = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View2D.UIMahTouchHandArea")
local UIMahOutArea = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View2D.UIMahOutArea")
local UIMahPlayerOutArea = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View2D.UIMahPlayerOutArea")
local UIMah = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View2D.UIMah")
local UIMahComb = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View2D.UIMahComb")
local UIMahConfig = NG.GAME.gameRequire("Modules.GameMain.MahLayer.Config.UIMahConfig2D")
local UIMahJokerArea = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View2D.UIMahJokerArea")
local UIMahConfigDeadArea = NG.GAME.gameRequire("Modules.GameMain.MahLayer.Config.UIMahConfigDeadArea")
local UIMahDeadAreaLayer = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View2D.UIMahDeadAreaLayer")

local UIMahLayer = NG.GAME.gameClass("UIMahLayer2D", "newgold.GoldGames.GoldGameMah.MahXueLiu.Modules.GameMain.MahLayer.ViewBase.UIMahLayerBase")

UIMahLayer.KW_JOKER_MAH = "KW_JOKER_MAH"

local NodeNameArr = {
    HandMah = "KW_HAND_MAH",
    OutMah = "KW_OUT_MAH",
    HandMah17 = "KW_HAND_MAH_17",
    OutMah2 = "KW_OUT_MAH_2",
    ShowOutMah = "KW_PANEL_SHOW_OUT_MAH_",
    FlowerMah = "KW_FLOWER"
}

function UIMahLayer:getCSBPath()
    return "cocosStudio/MahjongNew/MahLayer/CSB/MahLayer.csb"
end

function UIMahLayer:getBindingInfo()
    return {
        ["_KW_ACTION_MOVE_PANEL"] = { varName = "_actionMovePanel"},
        ["_KW_ACTION_IN_TARGET_POS"] = { varName = "_showActionPoint"},
        ["_KW_ACTION_COMBS_BACK"] = { varName = "_actionCombsBack"},
        ["_KW_ACTION_COMBS_MOVE_PANEL"] = { varName = "_actionCombsMovePanel"},
        ["_KW_ACTION_COMBS_IN_TARGET_POS"] = { varName = "_showActionCombsPoint"},
        ["_KW_PANEL_MAH_COUNTS"] = { varName = "_panelmahsSurPlusCounts"},
        ["_KW_MAH_COUTNS"] = { varName = "_mahsSurPlusCounts"},
        ["_KW_IMG_ZHUANG_TYPE"] = { varName = "_bankerZhuangType"},
        ["_KW_FNT_ZHUANG_NUM"] = { varName = "_bankerZhuangNum"},
        ["_KW_MAH_SURPLUS_NODE"] = { varName = "_mahsSurPlusNode"},
        ["_KW_IMG_QUAN_FENG"] = { varName = "_imgQuanfeng"},
        ["_KW_ADAPT_HAND_MAH_2"] = { varName = "_selfHandMahArea"},
        ["_KW_ACTION_PANEL"] = { varName = "_actionPanel"},
        ["_KW_ACTION_COMBS_PANEL"] = { varName = "_actionCombsPanel"},
        ["_KW_MAH_TOUCH_LAYER"] = { varName = "_mah_touch_layer", onTouchEnded = "onTouchEventMahBackground"},
        ["_KW_ACTION_CANCEL_BTN"] = { varName = "_actionCancel", onTouchEnded = "onTouchEventActionCancel"},

        ["_KW_ADAPT_MAH_"] = { varName = "_KW_ADAPT_MAH_", beginIndex = 1, endIndex = 5},
        ["_KW_ACTION_OUT_TARGET_POS_"] = { varName = "_hideActionPoint", beginIndex = 1, endIndex = 6},
        ["_KW_ACTION_BTN_"] = { varName = "_actionButton", beginIndex = 1, endIndex = 7, onTouch = "onTouchEventActionButton"},
        ["_KW_ACTION_COMBS_OUT_TARGET_POS_"] = { varName = "_hideActionCombsPoint", beginIndex = 2, endIndex = 4},
        ["_KW_BTN_SHOW_OUTMAH"] = {varName = "_showDeadMahButton", onTouchEnded = "onTouchEventShowDeadMah"},
        ["_KW_DEAD_PANEL"] = {varName = "_deadPanel"},
        ["_KW_DEAD_PLAYER_POS_"] = { varName = "_posDead_", beginIndex = 2, endIndex = 4},
    }
end

function UIMahLayer:getProxyEvents()
    local proxyEvents = UIMahLayer.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = {module = NG.GAME.roomTableData, eventKeyName = "EVENT_CARD_HOLDER_CHANGED", callBack = "onCardHolderChanged"}
    proxyEvents[#proxyEvents + 1] = {module = NG.GAME.settingData, eventKeyName = "EVENT_CLEAR_MODEL", callBack = "onEventClearModel"}
    proxyEvents[#proxyEvents + 1] = {module = NG.GAME.settingData, eventKeyName = "EVENT_MAH_OUT_CARD_STYLE_CHANGED", callBack = "onEventOutCardStyleChanged"}
    proxyEvents[#proxyEvents + 1] = {module = NG.GAME.settingData, eventKeyName = "EVENT_MAHJONG_CONFIG", callBack = "onEventFlushAllCardsConfig"}
    proxyEvents[#proxyEvents + 1] = {module = NG.GAME.settingData, eventKeyName = "EVENT_MAH_TABLE_OUTMAH_TYPE", callBack = "onEventOutTableMahType"}
    proxyEvents[#proxyEvents + 1] = {module = NG.goldGame:getModule("WinLost"), eventKeyName = "EVENT_HIDE_SHOWDEAD_BTN", callBack = "onEventHideShowDeadBtn"}
    return proxyEvents
end

function UIMahLayer:ctor(param, rootNode)
    param = param or {}
    UIMahLayer.super.ctor(self,param)

    NG.UITool.adaptForLiuHai({self._actionPanel,self._actionCombsPanel})
    NG.UITool.adaptForLiuHai({self._posDead_2,self._deadPanel})
end

function UIMahLayer:initView()
    UIMahLayer.super.initView(self)
    self:adapt(self._selfHandMahArea)
end

function UIMahLayer:adapt(node)
    if not node then
       return 
    end

    local designSize = NG.UITool.getDesignSizeHD()
    local designRatio = designSize.width / designSize.height
    local screenSize = cc.Director:getInstance():getWinSize()
    local screenRation = screenSize.width / screenSize.height
    local scale = 1
    if designRatio < screenRation then
        scale =  tonumber(string.format(screenRation / designRatio, '%.1f'))
        if scale > 1.1 then
            scale = 1.1
        end
    end
    node:setScale(scale)
end

function UIMahLayer:onCleanup()
    UIMahLayer.super.onCleanup(self)
    if self._openMahs then
        self._openMahs:release()
    end
end

function UIMahLayer:setOpenMahs(openMahs)
    if not self._KW_ADAPT_MAH_5 then
        return
    end
    openMahs = openMahs or {}
    local openMahsNode = self._KW_ADAPT_MAH_5:getChildByName(self.KW_JOKER_MAH)
    if not openMahsNode then
        return
    end
    self:clearOpenMahs()
    if not self._openMahs then
        self._openMahs = UIMahJokerArea.new()
        self._openMahs:init(openMahsNode)
        self._openMahs:retain() -- 因为UIMahJokerArea没有添加到场景中，会自动释放，所以需要添加引用
    end
    --财神标志变为花牌标志
    if self:getGameData():getIsJokerToFlower() then
        self._openMahs:setIsFlower(true)
    end
    self._openMahs:setJokerMahs(openMahs)
end

function UIMahLayer:setSurplusMahsCounts(mahCounts, bShow)
    mahCounts = mahCounts or 0
    bShow = bShow or false
    if not self._mahsSurPlusCounts then
        return
    end  
    self:showSurPlusMahBack()
    self._panelmahsSurPlusCounts:setVisible(bShow)
    self._mahsSurPlusCounts:setString("x"..mahCounts)
end

function UIMahLayer:showSurPlusMahBack()
    if self._surPlusMahBackMah then
        return
    end
    local config = NG.goldGame:getModule("GameMain.MahLayer"):getMahAllConfig(nil, true)
    local standMah = UIMah.new(NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL, config)
    standMah:setScale(0.3)
    standMah:setAnchorPoint(display.CENTER_TOP)
    self._mahsSurPlusNode:addChild(standMah)
    self._surPlusMahBackMah = standMah
end

----------------------------------------------------
--接受事件
----------------------------------------------------
function UIMahLayer:onEventOutTableMahType(event)
    if event.data then
        if self._outMahType == event.data then
            return
        end
        self:setOutMahType(event.data)
        local fourDirVisibleFunc = function(isFourDir)
            for lSeat = 1 , NG.GAME.roomTableData:getMaxPlayer() do
                 if self._playerOutMahAreas[lSeat] then
                    self._playerOutMahAreas[lSeat]:setVisible(isFourDir)
                end
            end
            if self._outMahArea then
                self._outMahArea:setVisible(not isFourDir)
            end
        end
        if event.data == NG.GAME.GameDefine.OUTMAHS_PUT_TYPE.FOUR_DIRECTION then
            for seat = 0 , NG.GAME.roomTableData:getChairs() do
                local event1 = {data = {localSeat = NG.GAME.roomTableData:seatToLocal(seat)}}
                self:onEventFlushOutMah(event1)
            end
            fourDirVisibleFunc(true)
        else
            local event1 = {data = {localSeat = -1}}
            self:onEventFlushOutMah(event1)
            fourDirVisibleFunc(false)
        end
    end
end

function UIMahLayer:onTouchEventShowDeadMah(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return 
    end
    if self:_isOutMahFourDirection() then
        -- 四方情况下
        local data = {}
        data.type = "SIFANG" 
        data.localSeat = {}
        for seat = 0 , NG.GAME.roomTableData:getChairs() do
            local localSeat = NG.GAME.roomTableData:seatToLocal(seat)
            table.insert(data.localSeat,localSeat)
        end
        self:_createShowAllArea(data) 
    else
        local data = {}
        data.localSeat = -1
        data.type = "NOTSIFANG" 
        self:_createShowAllArea(data) 
    end
end

function UIMahLayer:onEventSetLaoZhuang()
    self._bankerZhuangType:setVisible(NG.GAME.configData:getIsShowLaoZhuang())
    local laozhuangNum = self:getGameData():getLaoZhuangNum()
    self._bankerZhuangNum:setString("x"..laozhuangNum)
end

function UIMahLayer:onEventClearLaoZhuang()
    self._bankerZhuangType:setVisible(false)
end

function UIMahLayer:onEventClearQuanfeng(event)
    if self._imgQuanfeng then
        self._imgQuanfeng:setVisible(false)
    end
end

function UIMahLayer:onTouchEventMahBackground(send,eventType)
    UIMahLayer.super.onTouchEventMahBackground(self, send, eventType)
end

function UIMahLayer:onEventShowOutMahAction(event)
    local localSeat = event.data.localSeat
    if localSeat ~= NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM and NG.GAME.settingData:getOutStyle() == 2 then
        self:showOutMahToBig(localSeat, event.data.mah)
        return
    end
    local outMahArea = self:_getOutMahArea(localSeat)
    if not outMahArea then
        return
    end
    local outMahToNode = outMahArea:getLastOutMah(localSeat)
    if not outMahToNode then return end;
    local handArea = self:_getHandArea(localSeat)
    if not handArea then
        return
    end

    local mahPosInHandArea = handArea:getMahWorldSpacePos(event.data.index)
    if not mahPosInHandArea then
        if tolua.isnull(outMahToNode) then
			return
		end
        outMahToNode:setVisible(true)
        NG.soundManager:playSoundOut()
        return
    end

    -- 复制牌桌要显示的牌
    local config = NG.goldGame:getModule("GameMain.MahLayer"):getMahAllConfig(nil, true)
    local cloneNode = UIMah.new(NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP, config)
    cloneNode:setMahValue(outMahToNode:getMahValue())
    outMahToNode:setVisible(false)
    cloneNode:setZOrder(outMahToNode:getZOrder())
    cloneNode:setVisible(true)
    outMahToNode:getParent():addChild(cloneNode)

    local beginPos = outMahToNode:getParent():getParent():convertToNodeSpace(mahPosInHandArea)
    if self:_isOutMahFourDirection() then
        beginPos.y = -200
    else
        beginPos.y = beginPos.y + 200
    end
    local endPos = cc.p(outMahToNode:getPositionX()+ cloneNode:getContentSize().width/2,outMahToNode:getPositionY() +cloneNode:getContentSize().height/2)
    local ctrlPos = cc.p(beginPos.x, endPos.y) 
    cloneNode:setPosition(cc.p(beginPos.x + cloneNode:getContentSize().width/2, 
    beginPos.y - cloneNode:getContentSize().height/2))

    local scaleX = 1 / cloneNode:getParent():getParent():getScaleX()
    local scaleY = 1 / cloneNode:getParent():getParent():getScaleY()
    -- 设置clone节点缩放，使它看起来和手牌差不多大
    cloneNode:setScaleX(scaleX)
    cloneNode:setScaleY(scaleY)

    local moveTime = 0.2
    -- 回调函数中，删除clone节点，出牌区麻将子显示
    local function callbackFunc()
        cloneNode:removeFromParent();
		if tolua.isnull(outMahToNode) then
			return
		end
        outMahToNode:setVisible(true)
        NG.soundManager:playSoundOut()
    end
    -- 起飞
    if NG.GAME.settingData:getOutMoveStyle() == 1 then
        cloneNode:runAction(cc.Sequence:create(cc.Spawn:create(cc.BezierTo:create(moveTime,{beginPos, ctrlPos, endPos}),cc.ScaleTo:create(moveTime,1,1)),cc.CallFunc:create(callbackFunc)))
    else
        cloneNode:runAction(cc.Sequence:create(cc.Spawn:create(cc.MoveTo:create(moveTime, endPos),cc.ScaleTo:create(moveTime,1,1)),cc.CallFunc:create(callbackFunc)))
    end

    self:performWithDelay(function ()
        if outMahToNode and (not tolua.isnull(outMahToNode)) then
            outMahToNode:setVisible(true)
        end
    end, moveTime + 0.02)
end

function UIMahLayer:onEventOutCardStyleChanged(event)
    local config = {}
    config.handMahsPlayType = NG.GAME.settingData:getMahOutCardStyle()
    for _, handArea in pairs(self._handAreas) do
        handArea:setConfig(config)
    end
end

function UIMahLayer:onEventFlushAllCardsConfig(event)
    self:setConfig(event.data)
end

function UIMahLayer:setConfig(config)
    for _, handArea in pairs(self._handAreas) do
        handArea:setConfig(config)
    end
    for _, outArea in pairs(self._playerOutMahAreas) do
        outArea:setConfig(config)
    end
    for _, flowerArea in pairs(self._flowerAreas) do
        flowerArea:setConfig(config)
    end
    if self._outMahArea then
        self._outMahArea:setConfig(config)
    end
    if self._surPlusMahBackMah then
        self._surPlusMahBackMah:setConfig(config)
    end
    if self._openMahs then
        self._openMahs:setConfig(config)
    end
end

function UIMahLayer:_getLastOutMahCursor()
    if not self._cursorImg then
        self._cursorImg = ccui.Layout:create()
        NG.UITool.playJsonAnimationByName(self._cursorImg,"gb_ani","res/animation/Mahjong/Base/gb_ani/gb_ani.ExportJson",1, "Animation1", cc.p(0,0))
        self._cursorImg:setLocalZOrder(999)
        self._cursorImg:retain()
    end
    if self._cursorImg:getParent() then
        self._cursorImg:retain()
        self._cursorImg:removeSelf()
    end
    return self._cursorImg
end

function UIMahLayer:_createPlayerOutArea(localSeat)
    local config = NG.goldGame:getModule("GameMain.MahLayer"):getMahAllConfig(nil, true)
    local newOutArea = UIMahPlayerOutArea.new(localSeat, config)
    newOutArea:setSingleLineMaxCount(self:_getPlayerOutAreaSingleLineMaxCount())
    newOutArea:setMaxLineCount(self:_getPlayerOutAreaMaxLineCount())
    newOutArea:setOutAreaEnoughCallback(handler(self, self.onShowDeadAreaMahBtn))
    self:initOutAreaData()
    return newOutArea
end

function UIMahLayer:_getPlayerOutAreaRootNode(localSeat)
    if self["_KW_ADAPT_MAH_"..localSeat] then
        if NG.GAME.roomTableData:getChairs() == 2 then
            return self["_KW_ADAPT_MAH_"..localSeat]:getChildByName(NodeNameArr.OutMah2)
        else
            return self["_KW_ADAPT_MAH_"..localSeat]:getChildByName(NodeNameArr.OutMah)
        end
    end
    return nil
end

function UIMahLayer:_getOutAreaRootNode()
    if self._KW_ADAPT_MAH_5 then
        return self._KW_ADAPT_MAH_5:getChildByName(NodeNameArr.OutMah)
    end
    return nil
end

function UIMahLayer:_createOutArea()
    local config = NG.goldGame:getModule("GameMain.MahLayer"):getMahAllConfig(nil, true)
    local newOutArea = UIMahOutArea.new(config)
    newOutArea:setOutAreaEnoughCallback(handler(self, self.onShowDeadAreaMahBtn))
    self:initOutAreaData()
    return newOutArea
end

function UIMahLayer:initOutAreaData()
    if self._showDeadMahButton then
        self._showDeadMahButton:setVisible(false)
    end 
end

--创建出牌区域的视图层
function UIMahLayer:_createShowAllArea(data)
    UIMahDeadAreaLayer.new(data)
end

function UIMahLayer:_createTouchHandArea(localSeat)
    local config = NG.goldGame:getModule("GameMain.MahLayer"):getMahAllConfig(nil, true)
    local newHandMahArea = UIMahTouchHandArea.new(localSeat, config)
    return newHandMahArea
end

function UIMahLayer:_createHandArea(localSeat)
    local config = NG.goldGame:getModule("GameMain.MahLayer"):getMahAllConfig(nil, true)
    local newHandMahArea = UIMahHandArea.new(localSeat, config)
    return newHandMahArea
end

function UIMahLayer:_getHandAreaRootNode(localSeat)
    local nodeName = NodeNameArr.HandMah
    if localSeat == NG.GAME.GameDefine.LOCAL_SEAT.RIGHT and self._maxHandMahCount == NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN then
        nodeName = NodeNameArr.HandMah17
    end
    if localSeat == NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM then
        if self._selfHandMahArea then
            return self._selfHandMahArea:getChildByName(nodeName)
        end
    else
        if self["_KW_ADAPT_MAH_"..localSeat] then
            return self["_KW_ADAPT_MAH_"..localSeat]:getChildByName(nodeName)
        end
    end
    return nil
end

function UIMahLayer:_getHandAreaScale(localSeat)
    local handAreaScale = UIMahConfig.HandAreaLayout[localSeat].HandAreaScale
    if self._maxHandMahCount == NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN then
        handAreaScale = UIMahConfig.HandAreaLayout[localSeat].HandAreaScale17
    end
    return handAreaScale
end

function UIMahLayer:_createFlowerArea(localSeat)
    local config = NG.goldGame:getModule("GameMain.MahLayer"):getMahAllConfig(nil, true)
    local newFlowerMahArea = UIMahFlowerArea.new(localSeat, config)
    return newFlowerMahArea
end

function UIMahLayer:_getFlowerAreaRootNode(localSeat)
    if self["_KW_ADAPT_MAH_"..localSeat] then
        return self["_KW_ADAPT_MAH_"..localSeat]:getChildByName(NodeNameArr.FlowerMah)
    end
    return nil
end

function UIMahLayer:_updateBottomFlowerAreaPosition()
    local flowerArea = self._flowerAreas[NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM]
    if not flowerArea then
        return
    end
    local addY = 0
    local maxAddY = 25
    local selfHandAreaScale = self._selfHandMahArea:getScale()
    if selfHandAreaScale > 1 then
        addY = (selfHandAreaScale - 1) * maxAddY * 10
    end
    if addY > maxAddY then
        addY = maxAddY
    end
    flowerArea:setPositionY(addY)
end

function UIMahLayer:_getPlayerOutAreaSingleLineMaxCount()
    if NG.GAME.roomTableData:getChairs() == 2  then
        return 16
    end
    return 8
end

function UIMahLayer:_getPlayerOutAreaMaxLineCount()
    if NG.GAME.roomTableData:getChairs() == 2  then
        return 2
    end
    if NG.GAME.configData:getHaveFlower() then
        return 2
    end
    return 3
end

------------------------------------------------------
--动画相关
------------------------------------------------------

---------------------------------------------------------
--@brief 创建所有的可以吃碰杠组成的牌型
--@param 所有的可以形成的combs
--@return nil
---------------------------------------------------------
function UIMahLayer:createActionComb(combMahValues)
    local config = NG.goldGame:getModule("GameMain.MahLayer"):getMahAllConfig(nil, true)
    local combData = {}
    combData.mahValues = combMahValues
    local comb = UIMahComb.new(NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM, combData, config)
    comb:setAnchorPoint(display.LEFT_BOTTOM)
    comb:setScale(0.7)
    comb:setTouchEnabled(true)
    comb:addTouchEventListener(handler(self,self.onTouchEventActionComb))
    return comb
end

function UIMahLayer:onEventLightActionMahs(event)
    local mahValue = event.data.mahValue
    local localSeat = NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM 
    local handMahArea = self:_getHandArea(localSeat)
    if handMahArea and mahValue then
        handMahArea:lightActionMahs(mahValue)
    end
end

function UIMahLayer:onEventPreBaoHandMah(event)
    local mahData = NG.goldGame:getModule("GameMain.MahLayer"):getGameData()
    if not mahData then
        return
    end

    local localSeat = event.data.localSeat
    local seat = NG.GAME.roomTableData:localToSeat(localSeat)
    local preBaoMahValues = mahData:getPreBaoHandMahs(seat)
    self:setPreBaoHandMah(localSeat, preBaoMahValues)
end

function UIMahLayer:setPreBaoHandMah(localSeat, preBaoMahValues)
    local handArea = self:_getHandArea(localSeat)
    if not handArea then
        return
    end
    if handArea.setPreBaoHandMahs then
        handArea:setPreBaoHandMahs(preBaoMahValues)
    end
end

function UIMahLayer:onCardHolderChanged(event)
    self:updateCardHolder()
end

function UIMahLayer:onEventClearModel(event)
    self:updateCardHolder()
end

function UIMahLayer:updateCardHolder()
    local localSeat = NG.GAME.roomTableData:getSelfLocalSeat()
    local pNode
    if self:_isOutMahFourDirection() then
        pNode = self["_KW_ADAPT_MAH_"..localSeat]
    else
        pNode = self._KW_ADAPT_MAH_5
    end
    local ypqData = NG.GAME.roomTableData:getSelfCardHolderData() or {}
    local GameBagUILogic = NG.GAME.gameRequire("Modules.GameMain.BasicMahjong.Modules.GameBag.UILogic")
    GameBagUILogic.showCardHolder(pNode, localSeat, ypqData.ypq_url, ypqData.ypq, cc.size(0,-80))
end

function UIMahLayer:onEventHideShowDeadBtn()
    if self._showDeadMahButton then 
        self._showDeadMahButton:setVisible(false)
    end 
end

function UIMahLayer:onShowDeadAreaMahBtn()
    if self:isShowDeadMahButton(NG.GAME.roomTableData:getGameID(),NG.GAME.roomTableData:getChairs(),nil) == false then return end 
    if self._showDeadMahButton and self._showDeadMahButton:isVisible() == true  then 
        return 
    else
        self._showDeadMahButton:setVisible(true)
        local deadBtnPos = self:getShowDeadButtonPos(NG.GAME.roomTableData:getChairs())
        self._showDeadMahButton:setPosition(deadBtnPos)
    end
end

--后续如果三人四人的情况需要去调整"查看废牌"的按钮位置 
function UIMahLayer:getShowDeadButtonPos(chair)
    local pos = self._deadPanel:getChildByName("_KW_DEAD_PLAYER_POS_"..chair)
    if pos then 
        return cc.p(pos:getPosition())
    end 
end

function UIMahLayer:isShowDeadMahButton(gameId,chair,dataEx)
    if UIMahConfigDeadArea.IsShowDeadArea[gameId] and 
    UIMahConfigDeadArea.IsShowDeadArea[gameId].IsOpen == "YES" and 
    chair == UIMahConfigDeadArea.IsShowDeadArea[gameId].playerCount  then 
        return true 
    end 
    return false
end

return UIMahLayer  �X  