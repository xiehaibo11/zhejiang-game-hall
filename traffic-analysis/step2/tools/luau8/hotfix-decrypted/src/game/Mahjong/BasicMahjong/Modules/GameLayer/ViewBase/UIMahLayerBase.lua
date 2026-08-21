local MahLogic = CF.gameRequire("Modules.GameLayer.MahLogic")
local UIMah = CF.gameRequire("Modules.GameLayer.View2D.UIMah")

-- 与 game/GameBase/Define/GameDefine.lua LOCAL_SEAT.BOTTOM 一致；CF.GameDefine 未就绪时兜底
local LOCAL_SEAT_BOTTOM_FALLBACK = 2
local function safeLocalSeatBottom()
    local gd = CF and CF.GameDefine
    if gd and gd.LOCAL_SEAT and gd.LOCAL_SEAT.BOTTOM ~= nil then
        return gd.LOCAL_SEAT.BOTTOM
    end
    return LOCAL_SEAT_BOTTOM_FALLBACK
end

local UIMahLayer = CF.gameClass("UIMahLayer", CF.ViewBase)

function UIMahLayer:ctor(param, rootNode)
    param = param or {}
    UIMahLayer.super.ctor(self,param)
    
    self:initView()
end

function UIMahLayer:getGameData()
    return CF.game:getModule("GameLayer"):getGameData()
end

function UIMahLayer:getProxyEvents()
    local gameData = self:getGameData()
    return {
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_SET_HANDMAH_COUNT", callBack = "onEventSetHandMahCount" },--手牌数量
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_FLUSH_HANDMAH", callBack = "onEventFlushHandMah" },--手牌刷新
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_FLUSH_DFMAH", callBack = "onEventFlushDfMah" },--手牌刷新
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_FLUSH_HANDMAH_LIMIT", callBack = "onEventLimitHandMah" },--手牌限制牌刷新
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_DELETE_HANDMAH", callBack = "onEventDeleteHandMah" },--手牌删除
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_DELETE_HANDMAH_INDEX", callBack = "onEventDeleteHandMahIndex" },--手牌删除
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_DESTROY_HANDMAH", callBack = "onEventDestroyHandMah" },--手牌区清除
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_FLUSH_OUTMAH", callBack = "onEventFlushOutMah" },--刷新出牌
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_ADD_OUTMAH", callBack = "onEventAddOutMah" },--增加出牌麻将子
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_FLUSH_HANDMAH_BAO", callBack = "onEventPreBaoHandMah" },--手牌打出可能包牌颜色刷新

        { module = gameData, eventKeyName = "EVENT_MAHLAYER_DESTROY_OUTMAH", callBack = "onEventDestroyOutMah" },--出牌区清除
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_DELETE_LAST_OUTMAH", callBack = "onEventDeleteLastOutMah" },--删除最后一张出牌
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_SET_COMB", callBack = "onEventSetComb" },--comb设置
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_REFRESH_COMB", callBack = "onEventRefreshComb" },--comb刷新
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_CLEAR_COMB", callBack = "onEventClearComb" },--comb清除
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_SET_FLOWER", callBack = "onEventSetFlower" },--花牌设置
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_ADD_FLOWER", callBack = "onEventAddFlower" },--花牌设置
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_CLEAR_FLOWER", callBack = "onEventClearFlower" },--花牌清除
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_OPEN_MAH", callBack = "onEventSetOpenMah" },--设置开牌
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_CLEAR_OPEN_MAH", callBack = "onEventClearOpenMah" },--清理开牌
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_SURPLUS_MAH", callBack = "onEventSurplusMah" },--设置剩余的牌数
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_SET_HU_MAHS", callBack = "onEventSetHuMahs" },--设置胡牌时所有人的倒牌
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_CLEAR_HU_MAHS", callBack = "onEventClearHuMah" },--清除胡牌时所有人的倒牌
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_SET_TING_MAHS", callBack = "onEventSetTingMahs" },--设置听牌标记
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_CLEAR_TING_MAHS", callBack = "onEventClearTingMahs" },--清除听牌标记
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_JOKER_MAH", callBack = "onEventJokerDataChange" },
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_ACTION_MAH", callBack = "onEventLightActionMahs" },

        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_MAHLAYER_FLUSH_HANDMAH", callBack = "onEventFlushHandMah" },--刷新手牌
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_MAHLAYER_SHOW_OUTMAH_ACTION", callBack = "onEventShowOutMahAction" },---出牌动画
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_MAHLAYER_SHOW_ACTION", callBack = "onEventShowAction" },
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_MAHLAYER_SHOW_ACTION_COMBS", callBack = "onEventShowActionCombs" },
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_MAHLAYER_SET_LAOZHUANG", callBack = "onEventSetLaoZhuang" },--设置显示牢庄几
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_MAHLAYER_CLEAR_LAOZHUANG", callBack = "onEventClearLaoZhuang" },--清除显示牢庄几
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_MAHLAYER_SET_QUANFENG", callBack = "onEventSetQuanfeng" },--设置圈风
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_MAHLAYER_CLEAR_QUANFENG", callBack = "onEventClearQuanfeng" },--清除圈风
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_MAHLAYER_SHOW_OTHERS_ACTION", callBack = "onEventShowOthersAction" },--回放展示他人行牌权限
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_MAHLAYER_SHOW_OPERATE_PASS", callBack = "onEventShowOperatePass" },--回放展示过操作
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_MAHLAYER_CLEAR_ALL", callBack = "onEventClearAll" },
        { module = CF.goldManager, eventKeyName = "EVENT_MATCH_STATUS_CHANGE", callBack = "onEventMatchStatusChange" },
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_START_CHANGE", callBack = "onGameStart" },
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_OPEN_WALL_MAH", callBack = "onOpenWallMah" },
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_MAHLAYER_SHOW_OUTMAH_AREA", callBack = "onEventShowDeadMahArea" },
        {module = XH.lobby:getModule("Lobby"), eventKeyName = "EVENT_WIN_SIZE_CHANGE", callBack = "onWinSizeChange"}
    }
end

function UIMahLayer:createChildren()
    
end

-- TODO
function UIMahLayer:initView()
    self._handAreas = {}
    self._flowerAreas = {}
    self._playerOutMahAreas = {}
    self._outMahArea = nil

    local outMahType = CF.settingData:getOutTableCardStyle()
    self:setOutMahType(outMahType)

    self:setMahMaxCounts(self:getGameData():getMaxHandMahData())
    
    self:createChildren()

    if CF.roomData:isPlayBack() and CF.configData:showOthersActionInPlayBack() then
        self:initOthersPlayBackBtn()
    end
end

-- 设置最大手牌数
function UIMahLayer:setMahMaxCounts(maxCount)
    if maxCount == nil then
        return
    end
    self._maxHandMahCount = maxCount
    for _, handArea in pairs(self._handAreas) do
        handArea:setMaxHandMahCount(maxCount)
    end
end

-- 设置麻将出牌摆放方式
function UIMahLayer:setOutMahType(outMahType)
    if outMahType == nil then
        return
    end
    self._outMahType = outMahType
end

------------------------------------------------------------
-- 手牌区
------------------------------------------------------------

function UIMahLayer:setHandMahs(localSeat, handMahs, dfMahs, bShowAni)
    local handMahArea = self:_getHandArea(localSeat)
    if not handMahArea then
        return
    end
    handMahArea:setHandMahs(handMahs, dfMahs, bShowAni)
end

function UIMahLayer:setDfMahs(localSeat, danFangMahValue)
    local handMahArea = self:_getHandArea(localSeat)
    if not handMahArea then
        return
    end
    handMahArea:dealDanFang(danFangMahValue)
end

function UIMahLayer:deleteHandMahByIndex(localSeat, delMahIndex, delMahValue)
    local handArea = self:_getHandArea(localSeat)
    if not handArea then
        return
    end
    local bDelSuccess = handArea:deleteMahWithIndex(delMahIndex, delMahValue)
    if not bDelSuccess then
        -- 删除手牌不成功，则刷新手牌
        self:_updateHandMahs(localSeat, false)
    else
        -- 删除手牌成功，则判定显示的手牌和手牌数据是否相等
        self:_checkShowHandMahs(localSeat)
    end
end

function UIMahLayer:deleteHandMahByIDs(localSeat, mahIDs, dfMah)
    local handArea = self:_getHandArea(localSeat)
    if not handArea then
        return
    end
    local bDelSuccess = handArea:deleteMahs(mahIDs)
    if not bDelSuccess then
        -- 删除手牌不成功，则刷新手牌
        self:_updateHandMahs(localSeat, false)
    else
        -- 删除手牌成功，则判定显示的手牌和手牌数据是否相等
        self:_checkShowHandMahs(localSeat)
    end
end

function UIMahLayer:_checkShowHandMahs(localSeat)
    local handArea = self:_getHandArea(localSeat)
    if not handArea then
        return
    end

    local mahData = CF.game:getModule("GameLayer"):getGameData()
    if not mahData then
        return
    end

    local seat = CF.roomData:localToSeat(localSeat)
    local handMahs = mahData:getHandMahData(seat)
    if not handMahs or #handMahs == 0 then
        return
    end
    local handAreaShowMahValues = handArea:getAllHandMahValues()
    if not MahLogic.isTableEqual(handMahs, handAreaShowMahValues) then
        self:_updateHandMahs(localSeat, false)
    end
end

function UIMahLayer:setLimitHandMah(localSeat,limitMahIDs)
    local handArea = self:_getHandArea(localSeat)
    if not handArea then
        return
    end
    if handArea.setLimitHandMahs then
        handArea:setLimitHandMahs(limitMahIDs)
    end
end

function UIMahLayer:clearHandMah(localSeat)
    local handArea = self:_getHandArea(localSeat)
    if not handArea then
        return
    end
    handArea:resetJokerData()
    handArea:clearHandMahs()
end

---------------------------------------------------------------
-- 出牌区
---------------------------------------------------------------

function UIMahLayer:setOutMahs(localSeat, outMahs)
    local outMahArea = self:_getOutMahArea(localSeat)
    if not outMahArea then
        return
    end
    outMahArea:setOutMahs(outMahs)
end

function UIMahLayer:addOutMahs(localSeat, outMahs, showAni)
    local outMahArea = self:_getOutMahArea(localSeat)
    if not outMahArea then
        return
    end
    outMahArea:addOutMahs(outMahs, showAni, localSeat)
    outMahArea:showLastOutMahCursor()
end

function UIMahLayer:deleteLastOutMahs(localSeat)
    local outMahArea = self:_getOutMahArea(localSeat)
    if not outMahArea then
        return
    end
    outMahArea:deleteLastOutMah()
end

function UIMahLayer:clearOutMahArea(localSeat)
    local outMahArea = self:_getOutMahArea(localSeat)
    if not outMahArea then
        return
    end
    outMahArea:clearAllOutMahs()
end

function UIMahLayer:setHuMahs(localSeat, huHandMahs, huMah)
    local handArea = self:_getHandArea(localSeat)
    if not handArea then
        return
    end
    handArea:setHuMahs(huHandMahs, huMah, true)
end

function UIMahLayer:clearHuMahs(localSeat)
    local handArea = self:_getHandArea(localSeat)
    if not handArea then
        return
    end
    handArea:clearHandMahs()
end

------------------------------------------------------------
-- 吃碰杠牌组
------------------------------------------------------------

function UIMahLayer:addCombMahs(mahIDs, combFlag, localSeat, fromLocalSeat, formCombMahID, bAni, bMoveHand)
    local handArea = self:_getHandArea(localSeat)
    if not handArea then
        return
    end

    local combData = {}
    combData.combFlag = combFlag
    combData.mahValues = mahIDs
    combData.inMahValue = formCombMahID
    combData.fromLocalSeat = fromLocalSeat
    combData.bShowAni = bAni
    combData.bMoveHand = bMoveHand

    if combFlag == CF.GameDefine.COMB_FLAG.TKONG then
        handArea:addTKongComb(combData)
    elseif combFlag == CF.GameDefine.COMB_FLAG.CKONG then
        combData.showBackIndexs = self:_getCKongShowBackIndexs(clone(combData)) or {}
        handArea:addComb(combData)
    else
        handArea:addComb(combData)
    end
end

function UIMahLayer:refreshCombMahs(mahIDs, combFlag, localSeat, formCombMahID, combIndex)
    local handArea = self:_getHandArea(localSeat)
    if not handArea then
        return
    end
    
    local combData = {}
    combData.combFlag = combFlag
    combData.mahValues = mahIDs
    combData.inMahValue = formCombMahID

    handArea:resetCombMahs(combData, combIndex)
end

--清除comb区
function UIMahLayer:clearCombArea(localSeat)
    local handArea = self:_getHandArea(localSeat)
    if not handArea then
        return
    end
    handArea:clearCombs()
end

------------------------------------------------------------
-- 花牌区
------------------------------------------------------------

function UIMahLayer:addFlowers(localSeat, mahValues, bAni, callBack)
    local flowerArea = self:_getFlowerArea(localSeat)
    if not flowerArea then
        return
    end
    flowerArea:addFlowers(mahValues)
end

function UIMahLayer:setFlowers(localSeat, mahValues, bAni, callBack)
    local flowerArea = self:_getFlowerArea(localSeat)
    if not flowerArea then
        return
    end
    flowerArea:setFlowers(mahValues)
end

--清除花牌
function UIMahLayer:clearFlowers(localSeat)
    local flowerArea = self:_getFlowerArea(localSeat)
    if not flowerArea then
        return
    end
    flowerArea:clearFlowers()
end

------------------------------------------------------------
-- 翻牌
------------------------------------------------------------

-- TODO
function UIMahLayer:setOpenMahs(openMahs)
    
end

-- TODO
function UIMahLayer:clearOpenMahs()
    if self._openMahs then
        self._openMahs:clearJokerArea()
    end
end

------------------------------------------------------------
-- 剩余牌数
------------------------------------------------------------

-- TODO
function UIMahLayer:setSurplusMahsCounts(mahCounts, bShow)
    
end

----------------------------------------------------
--接受事件
----------------------------------------------------
function UIMahLayer:onEventSetHandMahCount(event)
    if not event.data.maxCount then
        return 
    end
    self:setMahMaxCounts(event.data.maxCount)
end

function UIMahLayer:onEventFlushHandMah(event)
    local localSeat = event.data.localSeat
    local bAni = event.data.bAni
    self:_updateHandMahs(localSeat, bAni)
end

function UIMahLayer:onEventFlushDfMah(event)
    local mahData = CF.game:getModule("GameLayer"):getGameData()
    if not mahData then
        return
    end

    local localSeat = event.data.localSeat
    local seat = CF.roomData:localToSeat(localSeat)
    local dfMahs = mahData:getHandDfData(seat)
    self:setDfMahs(localSeat, dfMahs)
end

function UIMahLayer:onEventLimitHandMah(event)
    local mahData = CF.game:getModule("GameLayer"):getGameData()
    if not mahData then
        return
    end

    local localSeat = event.data.localSeat
    local seat = CF.roomData:localToSeat(localSeat)
    local limitMahValues = mahData:getLimitHandMahs(seat)
    self:setLimitHandMah(localSeat, limitMahValues)
end

function UIMahLayer:onEventFlushOutMah(event)
    local localSeat = event.data.localSeat
    if not localSeat then
        return
    end
    local seat = CF.roomData:localToSeat(localSeat)
    local outMahs = self:getGameData():getOutMahData(seat)

    self:setOutMahs(localSeat, outMahs)
end

function UIMahLayer:onEventAddOutMah(event)
    local localSeat = event.data.localSeat or 0
    local addMahs = event.data.addMahs or {}
    self:addOutMahs(localSeat, addMahs, true)
end

function UIMahLayer:onEventDeleteHandMah(event)
    local localSeat = event.data.localSeat
    local deteMahs = event.data.deteMahs or {}
    local dfMah = event.data.dfMahs
    self:deleteHandMahByIDs(localSeat, deteMahs, dfMah)
end

function UIMahLayer:onEventDeleteHandMahIndex(event)
    local localSeat = event.data.localSeat
    local delMahIndex = event.data.delMahIndex
    local delMahValue = event.data.delMahValue
    self:deleteHandMahByIndex(localSeat, delMahIndex, delMahValue)
end

function UIMahLayer:onEventDestroyHandMah(event)
    local localSeat = event.data.localSeat
    self:clearHandMah(localSeat)
end

function UIMahLayer:onEventDestroyOutMah(event)
    local localSeat = event.data.localSeat
    self:clearOutMahArea(localSeat)
end

function UIMahLayer:onEventDeleteLastOutMah(event)
    local localSeat = event.data.localSeat
    self:deleteLastOutMahs(localSeat)
end

function UIMahLayer:onEventSetComb(event)
    local localSeat = event.data.localSeat
    local seat = CF.roomData:localToSeat(localSeat)
    local combIndex = event.data.combIndex
    local bAni = event.data.bAni 
    local bMoveHand = event.data.bMoveHand
    local data = self:getGameData():getCombMahData(seat, combIndex)
    local combs = data.nMahs or {}
    local fromLocalSeat = CF.roomData:seatToLocal(data.nFromSeat) or -1
    local formCombMahID = data.nInMahs[1] or CF.GameDefine.MAH_VALUE.BACK

    self:addCombMahs(combs, data.nFlag, localSeat, fromLocalSeat, formCombMahID, bAni, bMoveHand)
end

function UIMahLayer:onEventRefreshComb(event)
    local localSeat = event.data.localSeat
    local seat = CF.roomData:localToSeat(localSeat)
    local combIndex = event.data.combIndex
    local data = self:getGameData():getCombMahData(seat, combIndex)
    local combs = event.data.combData.nMahs

    self:refreshCombMahs(combs, data.nFlag, localSeat, nil, combIndex)
end

function UIMahLayer:onEventClearComb(event)
    local localSeat = event.data.localSeat or nil
    self:clearCombArea(localSeat)
end

--花牌相关
function UIMahLayer:onEventSetFlower(event)
    local localSeat = event.data.localSeat
    local playAni = event.data.playAni
    local flowerMahs = event.data.flowerMahs
    self:setFlowers(localSeat, flowerMahs, playAni, nil)
end

function UIMahLayer:onEventAddFlower(event)
    local localSeat = event.data.localSeat
    local playAni = event.data.playAni
    local flowerMahs = event.data.flowerMahs
    local callBack = event.data.callBack
    self:addFlowers(localSeat, flowerMahs, playAni, callBack)
end


function UIMahLayer:onEventClearFlower(event)
    local localSeat = event.data.localSeat
    self:clearFlowers(localSeat)
end

--胡牌倒牌相关
function UIMahLayer:onEventSetHuMahs(event)
    local localSeat = event.data.localSeat
    local seat = CF.roomData:localToSeat(localSeat)
    local huHandMahs = self:getGameData():getHuHandMahsData(seat)
    local huMah = self:getGameData():getHuMahData(seat)
    
    self:setHuMahs(localSeat, huHandMahs, huMah)
end

function UIMahLayer:onEventClearHuMah(event)
    local localSeat = event.data.localSeat
    self:clearHuMahs(localSeat)
end

function UIMahLayer:onEventSetLaoZhuang()
    
end

function UIMahLayer:onEventClearLaoZhuang()
    
end

function UIMahLayer:onEventClearAll()
    
end

function UIMahLayer:onEventMatchStatusChange(event)
    local show = event.msg.show or false
    if show then
        self:onEventClearAll()
    end
end

function UIMahLayer:onEventSetOpenMah(event)
    local openData = self:getGameData():getOpenData()
    self:setOpenMahs(openData)
end

function UIMahLayer:onEventClearOpenMah(event)
    self:clearOpenMahs()
end

function UIMahLayer:onEventSurplusMah(event)
    local surplusCounts = self:getGameData():getSurPlusCounts()
    local bShow = event.data.bShow
    self:setSurplusMahsCounts(surplusCounts, bShow)
end

function UIMahLayer:onEventShowAction(event)
    local isShow = event.data.isShow
    if isShow then
        local actionTypes = event.data.actionTypes
        self._actionTypes = actionTypes
        self:showAction(actionTypes, true)
    else
        self._actionTypes = {}
        self:showAction({}, false)
    end
end

function UIMahLayer:onEventShowActionCombs(event)
    local isShow = event.data.isShow
    if isShow then
        local combs = event.data.combs
        self:showActionCombs(combs, true)
    else
        self:showActionCombs({}, false)
    end
end

function UIMahLayer:onEventSetQuanfeng(event)
    local nQuanFeng = self:getGameData():getQuanFengNum()
    if self._imgQuanfeng and nQuanFeng then
        self._imgQuanfeng:setVisible(self:getGameData():getIsShowQuanFeng())
        self._imgQuanfeng:loadTexture(string.format("img_quanfeng_%d.png", nQuanFeng), ccui.TextureResType.plistType)
    end
end

function UIMahLayer:onEventClearQuanfeng(event)
    if self._imgQuanfeng then
        self._imgQuanfeng:setVisible(false)
    end
end

function UIMahLayer:onEventSetTingMahs(event)
    local seat = event.data.seat
    local tingMahs = self:getGameData():getTingMahs(seat)
    local localSeat = CF.roomData:seatToLocal(seat)

    local handArea = self:_getHandArea(localSeat)
    if not handArea then
        return
    end
    handArea:showTingInfo(tingMahs)
end

function UIMahLayer:onEventClearTingMahs(event)
    local seat = event.data.seat
    local localSeat = CF.roomData:seatToLocal(seat)

    local handArea = self:_getHandArea(localSeat)
    if not handArea then
        return
    end
    handArea:clearTingInfo()
end

function UIMahLayer:onEventJokerDataChange(event)
    for _, handArea in pairs(self._handAreas) do
        self:_setAreaJokerData(handArea)
    end
    for _, outArea in pairs(self._playerOutMahAreas) do
        self:_setAreaJokerData(outArea)
    end
    if self._outMahArea then
        self:_setAreaJokerData(self._outMahArea)
    end
end

function UIMahLayer:onEventLightActionMahs(event)
end

function UIMahLayer:onTouchEventMahBackground(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local handMahArea = self:_getHandArea(safeLocalSeatBottom())
    if not handMahArea then
        return
    end
    handMahArea:unSelectAllMahs()
end

function UIMahLayer:onTouchEventActionCancel(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return 
    end
    self:showActionCombs({}, false)
    self:showAction(self._actionTypes, true)
end

-- 自摸胡的场景点过不再触发过的牌权给服务
local SUPPORT_SEND_PASS_AREA = { 7111, 7115, 7102 }
function UIMahLayer:isSendCancelServer()
    -- 只有胡和过的按钮
    if #self._actionTypes > 2 then
        return true
    end
    local isHaveArea = false
    for i = 1, #SUPPORT_SEND_PASS_AREA do
        if XH.areaData:getAreaID() == SUPPORT_SEND_PASS_AREA[i] then
            isHaveArea = true
            break
        end
    end
    local isHaveHu = false
    for i = 1, #self._actionTypes do
        if self._actionTypes[i] == CF.GameDefine.ACTION.HU then
            isHaveHu = true
            break
        end
    end
    if not isHaveHu or isHaveArea then
        return true
    end
    local myseat = CF.roomData:getSelfSeat()
    local handMahs = CF.game:getModule("GameLayer"):getGameData():getHandMahData(myseat)
    local dfMah = CF.game:getModule("GameLayer"):getGameData():getHandDfData(myseat)
    local count = #handMahs
    if dfMah then
        count = count + 1
    end
    if count % 3 == 2 then
        return false
    end
    return true
end

function UIMahLayer:onTouchEventActionButton(send,eventType)
    if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then
        return
    end
    if eventType ~= ccui.TouchEventType.ended then
        return 
    end
    
    if send == self._actionButton1 then
        self._actionButton1:setEnabled(false)
        self:performWithDelay(function()
            self._actionButton1:setEnabled(true)
        end,1)
        if self:isSendCancelServer() then
            CF.game:getModule("GameLayer"):doActionCancel()
        else
            CF.msgManager:sendForwardOperatePass(tostring(CF.GameDefine.ACTION.PASS))
        end
    elseif send == self._actionButton2 then
        CF.game:getModule("GameLayer"):doActionChow()
    elseif send == self._actionButton3 then
        CF.game:getModule("GameLayer"):doActionPong()
    elseif send == self._actionButton4 then   
        CF.game:getModule("GameLayer"):doActionKong()
    elseif send == self._actionButton5 then
        CF.game:getModule("GameLayer"):doActionHu()
    elseif send == self._actionButton7 then
        CF.game:getModule("GameLayer"):doActionTing()
    end
    self:showAction({}, false)
end

function UIMahLayer:onEventShowOutMahAction(event)
    
end

function UIMahLayer:showOutMahToBig(localSeat, mahValue)
    if not mahValue then
        return
    end
    if not self._KW_ADAPT_MAH_5 then
        return
    end
    local showOutMahNode = self._KW_ADAPT_MAH_5:getChildByName("KW_PANEL_SHOW_OUT_MAH_"..localSeat)
    if not showOutMahNode then
        return
    end
    local image = ccui.ImageView:create("cocosStudio/MahjongNew/MahLayer/Image/mj_game_common_black_bg.png")
    if image then
        showOutMahNode:addChild(image)
        image:setAnchorPoint(0.5, 0)
        image:setScale9Enabled(true)
        local config = CF.game:getModule("GameLayer"):getMahAllConfig(nil, true)
        local mahNodeClone = UIMah.new(CF.GameDefine.MAH_TYPE.STAND_FACE_FORWARD, config)
        image:setContentSize(cc.size(mahNodeClone:getContentSize().width + 40, mahNodeClone:getContentSize().height + 40))
        image:addChild(mahNodeClone)
        mahNodeClone:setOpacity(255)  
        mahNodeClone:setVisible(true)
        mahNodeClone:setPosition(mahNodeClone:getContentSize().width/2 +20, mahNodeClone:getContentSize().height/2+20)
        mahNodeClone:setTouchEnabled(false)
        mahNodeClone:setMahValue(mahValue)
        local callfunc = cc.CallFunc:create(function()
            if image then
                image:removeFromParent()
            end
        end)
        image:runAction(cc.Sequence:create(cc.DelayTime:create(1), callfunc))
    end
end

function UIMahLayer:onEventShowOthersAction(event)
    local data = event.data
    if not data then
        return
    end
    local isShow = data.isShow
    if isShow then
        local actionTypes = data.actionTypes
        self._actionTypes = actionTypes
        self:showOthersAction(data.localSeat,actionTypes, true)
    else
        self._actionTypes = {}
        self:showOthersAction(data.localSeat,{}, false)
    end
end

function UIMahLayer:onEventShowOperatePass(event)
    local localSeat = event.localSeat
    if not localSeat then
        return
    end
    self:showBtnOperatePlayback(localSeat)
end

function UIMahLayer:onGameStart(event)
    
end

function UIMahLayer:onOpenWallMah(event)

end

function UIMahLayer:initOthersPlayBackBtn()
    self._actionPanelOther = {}
	self._actionBtnPosOtherTmp = {}
	local LEFT_OFFSET   = {offset_x = 300, offset_y = 200, margen = 220}
    local RIGHT_OFFSET  = {offset_x = 650, offset_y = 200, margen = 220}
    local TOP_OFFSET    = {offset_x = 500, offset_y = 100, margen = 0}
	for seat = CF.GameDefine.LOCAL_SEAT.LEFT, CF.GameDefine.LOCAL_SEAT.TOP do
		if seat ~= CF.GameDefine.LOCAL_SEAT.BOTTOM then
			local actionBtnPosOther = {} 
			if not self._actionPanelOther[seat] then
                local tmpPanel = self._actionPanel:clone()
				self._actionPanelOther[seat] = tmpPanel
				self._actionPanel:getParent():addChild(self._actionPanelOther[seat])
				self._actionPanelOther[seat]:setVisible(false)
				if seat == CF.GameDefine.LOCAL_SEAT.LEFT then
					self._actionPanelOther[seat]:setPosition(cc.p(180,300))
				elseif seat == CF.GameDefine.LOCAL_SEAT.RIGHT then
					self._actionPanelOther[seat]:setPosition(cc.p(1200,300))
				elseif seat == CF.GameDefine.LOCAL_SEAT.TOP then
					self._actionPanelOther[seat]:setPosition(cc.p(960,440))
				end
			end
			for i = CF.GameDefine.ACTION.PASS, CF.GameDefine.ACTION.TING do
				local actionBtn = ccui.Helper:seekWidgetByName(self._actionPanelOther[seat],"_KW_ACTION_BTN_" .. i)
				if actionBtn then
					actionBtnPosOther[i] = {x = actionBtn:getPositionX(),y = actionBtn:getPositionY()}
				end
			end
			self._actionBtnPosOtherTmp[seat] = {}
			local firstBtnPosX = 0
			if seat == CF.GameDefine.LOCAL_SEAT.LEFT then
				for i = CF.GameDefine.ACTION.PASS, CF.GameDefine.ACTION.TING do
					if i == 1 then
						firstBtnPosX = actionBtnPosOther[i].x
					end
					self._actionBtnPosOtherTmp[seat][i] = {x = firstBtnPosX + LEFT_OFFSET.offset_x , y = (actionBtnPosOther[i].y - LEFT_OFFSET.offset_y) + (i-1)*LEFT_OFFSET.margen } 
				end
			elseif seat == CF.GameDefine.LOCAL_SEAT.RIGHT then
			   for i = CF.GameDefine.ACTION.PASS, CF.GameDefine.ACTION.TING do
					if i == 1 then
						firstBtnPosX = actionBtnPosOther[i].x
					end
					self._actionBtnPosOtherTmp[seat][i] = {x = firstBtnPosX + RIGHT_OFFSET.offset_x , y =  (actionBtnPosOther[i].y - RIGHT_OFFSET.offset_y) + (i-1)*RIGHT_OFFSET.margen } 
				end
			elseif seat == CF.GameDefine.LOCAL_SEAT.TOP then
				for i = CF.GameDefine.ACTION.PASS, CF.GameDefine.ACTION.TING do
					self._actionBtnPosOtherTmp[seat][i]= {x = actionBtnPosOther[i].x + TOP_OFFSET.offset_x ,y = actionBtnPosOther[i].y + TOP_OFFSET.offset_y}
				end
			end
		end
	end
end

function UIMahLayer:_updateHandMahs(localSeat, bAni)
    local mahData = CF.game:getModule("GameLayer"):getGameData()
    if not mahData then
        return
    end

    local seat = CF.roomData:localToSeat(localSeat)
    local handMahs = mahData:getHandMahData(seat)
    if not handMahs or #handMahs == 0 then
        return
    end
    
    local dfMahs = mahData:getHandDfData(seat)
    self:setHandMahs(localSeat, handMahs, dfMahs, bAni)
    
    local limitMahs = mahData:getLimitHandMahs(seat)
    self:setLimitHandMah(localSeat, limitMahs)
end

function UIMahLayer:_getLastOutMahCursor()
    
end

-- 暗杠时显示的牌背序号
function UIMahLayer:_getCKongShowBackIndexs(combData)
    return {1,2,3}
end

function UIMahLayer:_setAreaJokerData(area)
    if not area or not area.setJokerData then
        return
    end
    local jokerData = self:getGameData():getJokerData()
    local insteadsData = self:getGameData():getInsteadMahData()
    area:setJokerData(jokerData, insteadsData)
end

function UIMahLayer:_isOutMahFourDirection()
    return self._outMahType == CF.GameDefine.OUTMAHS_PUT_TYPE.FOUR_DIRECTION
end

function UIMahLayer:_createOutArea(localSeat)
    return nil
end

function UIMahLayer:_createPlayerOutArea(localSeat)
    return nil
end

function UIMahLayer:_getOutAreaRootNode(localSeat)
    
end

function UIMahLayer:_getPlayerOutAreaRootNode(localSeat)
    
end

function UIMahLayer:_getOutMahArea(localSeat)
    if self:_isOutMahFourDirection() then
        if not MahLogic.checkLocalSeat(localSeat) then
            return nil
        end
        if not self._playerOutMahAreas[localSeat] then
            local newOutArea = self:_createPlayerOutArea(localSeat)
            if newOutArea then
                newOutArea:setGetCursorFunc(handler(self, self._getLastOutMahCursor))
                self:_setAreaJokerData(newOutArea)
                local outAreaNode = self:_getPlayerOutAreaRootNode(localSeat)
                if outAreaNode then
                    outAreaNode:addChild(newOutArea)
                end
                self._playerOutMahAreas[localSeat] = newOutArea
            end
        end
        return self._playerOutMahAreas[localSeat]
    else
        if not self._outMahArea then
            local newOutArea = self:_createOutArea(localSeat)
            if newOutArea then
                newOutArea:setGetCursorFunc(handler(self, self._getLastOutMahCursor))
                self:_setAreaJokerData(newOutArea)
                local outAreaNode = self:_getOutAreaRootNode(localSeat)
                if outAreaNode then
                    outAreaNode:addChild(newOutArea)
                end
                self._outMahArea = newOutArea
            end
        end
        return self._outMahArea
    end
    
end

function UIMahLayer:_onPlayMah(mahIndex, mahValue)
    -- 回放不能出牌
    if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then
        return
    end
    if self:getGameData():getPlayPower() then
        CF.game:getModule("GameLayer"):showPlayPreOut(mahIndex, mahValue)
        self:getGameData():setPlayPower(false)
    end
end

function UIMahLayer:_createCanHuMahsUI(mahValue)
    local data = {}
    data.tingMahID = mahValue
    return CF.gameRequire("Modules.GameLayer.CanHuMahsUI").new(data)
end

function UIMahLayer:_removeCanHuMahsUI()
    if self._canHuMah then
        if self._canHuMah.close then
            self._canHuMah:close()
        end
        self._canHuMah = nil
    end
end

function UIMahLayer:_checkCanShowTing()
    if not CF.settingData or type(CF.settingData.getHaveTing) ~= "function" then
        return false
    end
    if not CF.settingData:getHaveTing() then
        return false
    end
    if not self:getGameData():getPlayPower() then
        return false
    end
    return true
end

-- 选中牌回调(mahValue为nil表示取消选中)
function UIMahLayer:_onSelectedMah(mahValue)
    if mahValue == nil then
        self:_clearSameValueLight()
    else
        self:_lightSameValueMahs(mahValue)
    end

    if mahValue then
        if self:_checkCanShowTing() then
            self:_removeCanHuMahsUI()
            self._canHuMah = self:_createCanHuMahsUI(mahValue)
            self._canHuMah:showSelf()
            CF.game:getModule("GameLayer"):clickMahSpecialEvent(mahValue)
        end
    else
        self:_removeCanHuMahsUI()
    end
end

-- 点亮与选中牌牌值相同的牌
function UIMahLayer:_lightSameValueMahs(mahValue)
    for _, handArea in pairs(self._handAreas) do
        handArea:lightSameValueMahs(mahValue)
    end
    for _, outArea in pairs(self._playerOutMahAreas) do
        outArea:lightSameValueMahs(mahValue)
    end
    if self._outMahArea then
        self._outMahArea:lightSameValueMahs(mahValue)
    end
end

function UIMahLayer:_clearSameValueLight()
    for _, handArea in pairs(self._handAreas) do
        handArea:clearSameValueLight()
    end
    for _, outArea in pairs(self._playerOutMahAreas) do
        outArea:clearSameValueLight()
    end
    if self._outMahArea then
        self._outMahArea:clearSameValueLight()
    end
end

function UIMahLayer:_createHandArea(localSeat)
    return nil
end

function UIMahLayer:_createTouchHandArea(localSeat)
    return nil
end

function UIMahLayer:_getHandAreaRootNode(localSeat)
    return nil
end

function UIMahLayer:_getHandArea(localSeat)
    if not MahLogic.checkLocalSeat(localSeat) then
        return nil
    end
    if not self._handAreas[localSeat] then
        local newHandMahArea
        if localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
            newHandMahArea = self:_createTouchHandArea(localSeat)
            if newHandMahArea then
                -- 添加出牌回调
                newHandMahArea:addPlayMahCallBack(handler(self, self._onPlayMah))
                -- 添加选中牌回调
                newHandMahArea:addSelectedMahCallBack(handler(self, self._onSelectedMah))
            end
        else
            newHandMahArea = self:_createHandArea(localSeat)
        end

        if newHandMahArea then
            newHandMahArea:setMaxHandMahCount(self._maxHandMahCount)
            newHandMahArea:setGetCursorFunc(handler(self, self._getLastOutMahCursor))
            self:_setAreaJokerData(newHandMahArea)

            local handAreaNode = self:_getHandAreaRootNode(localSeat)
            if handAreaNode then
                handAreaNode:addChild(newHandMahArea)
            end
        end
        
        self._handAreas[localSeat] = newHandMahArea
    end
    
    local handAreaScale = self:_getHandAreaScale(localSeat)
    self._handAreas[localSeat]:setScale(handAreaScale)
    return self._handAreas[localSeat]
end

function UIMahLayer:_getHandAreaScale(localSeat)
    return 1
end

function UIMahLayer:_createFlowerArea(localSeat)
    return nil
end

function UIMahLayer:_getFlowerAreaRootNode(localSeat)
    return nil
end    

function UIMahLayer:_getFlowerArea(localSeat)
    if not MahLogic.checkLocalSeat(localSeat) then
        return nil
    end
    if not self._flowerAreas[localSeat] then
        local newFlowerMahArea = self:_createFlowerArea(localSeat)
        if newFlowerMahArea then
            local flowerAreaNode = self:_getFlowerAreaRootNode(localSeat)
            if flowerAreaNode then
                flowerAreaNode:addChild(newFlowerMahArea)
            end
            self._flowerAreas[localSeat] = newFlowerMahArea
            self:_updateBottomFlowerAreaPosition()
        end
    end
    return self._flowerAreas[localSeat]
end

function UIMahLayer:_updateBottomFlowerAreaPosition()
    
end

------------------------------------------------------
--动画相关
------------------------------------------------------

---------------------------------------------------------
--@brief 展示所有的吃碰杠牌权
--@param 所有的吃碰杠类型
--@param 是需要展示，还是需要隐藏
--@return nil
---------------------------------------------------------
function UIMahLayer:showAction(actionTypes, isShow)
    self._lastInfo = self._lastInfo or {}
    self._lastInfo["showAction"] = {actionTypes, isShow}
    if self._actionBtnPos == nil then
        self._actionBtnPos = {}
        for i = CF.GameDefine.ACTION.PASS, CF.GameDefine.ACTION.TING do
            self._actionBtnPos[i] = {x = self["_actionButton" .. i]:getPositionX(), y = self["_actionButton" .. i]:getPositionY()}
        end
    end
    actionTypes = actionTypes or {}
    if #actionTypes > 0 then
        --初始化
        for i = CF.GameDefine.ACTION.PASS, CF.GameDefine.ACTION.TING do
            self["_actionButton" .. i]:setVisible(false)
        end
        for i = 1, #actionTypes do
            if self["_actionButton" .. actionTypes[i]] then
                self["_actionButton" .. actionTypes[i]]:setPosition(cc.p(self._actionBtnPos[i].x, self._actionBtnPos[i].y))
                self["_actionButton" .. actionTypes[i]]:setVisible(true)
                if actionTypes[i] == CF.GameDefine.ACTION.HU then
                    local x = self["_actionButton" .. actionTypes[i]]:getContentSize().width
                    local y = self["_actionButton" .. actionTypes[i]]:getContentSize().height
                    CF.UITool.playJsonAnimation(self["_actionButton" .. actionTypes[i]], "hu_ani", "res/animation/Mahjong/Base/hu_ani/hu_ani.ExportJson", 1, cc.p(x / 2, y / 2 + 5))
                end
            end
        end
    end
    self._actionMovePanel:stopAllActions()
    if isShow then
        if self._showActionPoint then
            if #actionTypes > 0 then
                self._actionHideTargetIndex = #actionTypes
            else
                self._actionHideTargetIndex = 0
            end
            if self["_hideActionPoint"..self._actionHideTargetIndex] then
                local x = self["_hideActionPoint"..self._actionHideTargetIndex]:getPositionX()
                local y = self["_hideActionPoint"..self._actionHideTargetIndex]:getPositionY()
                self._actionMovePanel:setPosition(x, y)
                local outTime = 0.24 - (self:getActionButtonCount() - self._actionHideTargetIndex) * 0.04
                self._actionMovePanel:runAction(cc.EaseQuarticActionOut:create(
                    cc.MoveTo:create(outTime, cc.p(self._showActionPoint:getPositionX(),self._showActionPoint:getPositionY()))))
            end
        end
    else
        if self._actionButton5 then
            local childNode = self._actionButton5:getChildByName("hu_ani")
            if childNode then
                childNode:removeSelf()
            end
        end
        self._actionHideTargetIndex = self._actionHideTargetIndex or 0
        if self["_hideActionPoint"..self._actionHideTargetIndex] then
            local time = 0.24 - (self:getActionButtonCount() - self._actionHideTargetIndex) * 0.04
            local x = self["_hideActionPoint"..self._actionHideTargetIndex]:getPositionX()
            local y = self["_hideActionPoint"..self._actionHideTargetIndex]:getPositionY()
            self._actionMovePanel:runAction(cc.EaseQuarticActionOut:create(
                cc.MoveTo:create(time, cc.p(x, y))))
        end
    end
end

---------------------------------------------------------
--@brief 展示非自己玩家所有的吃碰杠牌权
--@param 需要展示牌权的玩家客户端位置
--@param 所有的吃碰杠类型
--@param 是需要展示，还是需要隐藏
--@return nil
---------------------------------------------------------
function UIMahLayer:showOthersAction(localSeat, actionTypes, isShow)
    if localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM or localSeat < CF.GameDefine.LOCAL_SEAT.LEFT or localSeat > CF.GameDefine.LOCAL_SEAT.TOP then
        return
    end
    if not self._actionPanelOther[localSeat] then 
        return
    end
    if not self._actionBtnPosOtherTmp[localSeat] then
        return
    end

    self._actionPanelOther[localSeat]:setVisible(isShow)

    actionTypes = actionTypes or {}
    if #actionTypes > 0 then
        --初始化
        for i = CF.GameDefine.ACTION.PASS, CF.GameDefine.ACTION.TING do
            local actionBtn = ccui.Helper:seekWidgetByName(self._actionPanelOther[localSeat],"_KW_ACTION_BTN_" .. i)
            if actionBtn then
                actionBtn:setVisible(false) --先全部隐藏
            end
        end
        for i = 1, #actionTypes do
            local actionBtn = ccui.Helper:seekWidgetByName(self._actionPanelOther[localSeat],"_KW_ACTION_BTN_" .. actionTypes[i])
            if actionBtn then
                actionBtn:setPosition(cc.p(self._actionBtnPosOtherTmp[localSeat][i].x, self._actionBtnPosOtherTmp[localSeat][i].y))
                actionBtn:setVisible(true)
                if actionTypes[i] == CF.GameDefine.ACTION.HU then
                    local x = actionBtn:getContentSize().width
                    local y = actionBtn:getContentSize().height
                    CF.UITool.playJsonAnimation(actionBtn, "hu_ani", "res/animation/Mahjong/Base/hu_ani/hu_ani.ExportJson", 1, cc.p(x / 2, y / 2 + 5))
                end
            end
        end
    end
    local actionOutTargetIndex = 0
    local backPanel = ccui.Helper:seekWidgetByName(self._actionPanelOther[localSeat],"_KW_ACTION_MOVE_PANEL")
    if backPanel then
        backPanel:stopAllActions()
        if isShow then --是否显示
            local nodeIn = ccui.Helper:seekWidgetByName(self._actionPanelOther[localSeat],"_KW_ACTION_IN_TARGET_POS")
            if nodeIn then
                if #actionTypes > 0 then
                    actionOutTargetIndex = #actionTypes
                end
                local nodeOut = ccui.Helper:seekWidgetByName(self._actionPanelOther[localSeat],"_KW_ACTION_OUT_TARGET_POS_" .. actionOutTargetIndex)
                if nodeOut then
                    backPanel:setPosition(nodeOut:getPositionX(), nodeOut:getPositionY())
                end
                --进来（显示）
                backPanel:setPosition(cc.p(nodeIn:getPositionX(),nodeIn:getPositionY()))  
            end
        else
            local nodeOut = ccui.Helper:seekWidgetByName(self._actionPanelOther[localSeat],"_KW_ACTION_OUT_TARGET_POS_" .. actionOutTargetIndex)
            if nodeOut then
                --出去（消失）
                backPanel:setPosition(cc.p(nodeOut:getPositionX(),nodeOut:getPositionY())) 
            end
        end
    end
end

function UIMahLayer:showBtnOperatePlayback(localSeat)
    local actionPanel = localSeat == CF.roomData:getSelfLocalSeat() and self._actionPanel or self._actionPanelOther[localSeat]
    if not actionPanel then return end
    local actionBtn = ccui.Helper:seekWidgetByName(actionPanel,"_KW_ACTION_BTN_1")
    if actionBtn then
        local orignScale = actionBtn:getScale()
        local actionScale1 = cc.EaseQuarticActionOut:create(cc.ScaleTo:create(0.2,orignScale * 0.6))
        local action = cc.Sequence:create(
                cc.CallFunc:create(function()
                    if localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
                        self:showAction({},false)
                    else
                        self:showOthersAction(localSeat,{CF.GameDefine.ACTION.PASS},true)
                    end

                end),
                cc.DelayTime:create(0.2),
                actionScale1,
                cc.CallFunc:create(function()
                    actionBtn:setScale(orignScale)
                    self:showOthersAction(localSeat,{},false)
                end)
        )

        actionBtn:runAction(action)
    end
end

---------------------------------------------------------
--@brief 获取所有关于Action的按钮个数
--@return 个数
---------------------------------------------------------
function UIMahLayer:getActionButtonCount()
    local sum = 1
    while true do
        if self["_actionButton"..sum] == nil then
            break
        end
        sum = sum + 1
    end
    return sum - 1
end

---------------------------------------------------------
--@brief 展示所有的可以吃碰杠组成的牌型
--@param 所有的可以形成的combs
--@param 是需要展示，还是需要隐藏
--@return nil
---------------------------------------------------------
function UIMahLayer:showActionCombs(combs, isShow)
    self:cleanActionCombPanel()
    self._mahActionCombsData = clone(combs) or {}
    self:createActionCombPanel(combs)
    if self._actionCombsMovePanel then
        self._actionCombsMovePanel:stopAllActions()
        if isShow then
            if self._showActionCombsPoint then
                self._actionCombsHideTargetIndex = #combs
                if self["_hideActionCombsPoint"..self._actionCombsHideTargetIndex] then
                    local x = self["_hideActionCombsPoint"..self._actionCombsHideTargetIndex]:getPositionX()
                    local y = self["_hideActionCombsPoint"..self._actionCombsHideTargetIndex]:getPositionY()
                    self._actionCombsMovePanel:setPosition(x, y)
                end
                local time = 0.28 - (self:getMaxActionCombsCount() - self._actionCombsHideTargetIndex) * 0.04
                self._actionCombsMovePanel:runAction(cc.EaseQuarticActionOut:create(
                    cc.MoveTo:create(time, cc.p(self._showActionCombsPoint:getPositionX(),self._showActionCombsPoint:getPositionY()))))
            end
        else
            self._actionCombsHideTargetIndex = self._actionCombsHideTargetIndex or 0
            local time = 0.28 - (self:getMaxActionCombsCount() - self._actionCombsHideTargetIndex) * 0.04
            if self["_hideActionCombsPoint"..self._actionCombsHideTargetIndex] then
                local x = self["_hideActionCombsPoint"..self._actionCombsHideTargetIndex]:getPositionX()
                local y = self["_hideActionCombsPoint"..self._actionCombsHideTargetIndex]:getPositionY()
                self._actionCombsMovePanel:runAction(cc.EaseQuarticActionOut:create(
                    cc.MoveTo:create(time, cc.p(x, y))))
            end
        end
    end
end

---------------------------------------------------------
--@brief 创建所有的可以吃碰杠组成的牌型
--@param 所有的可以形成的combs
--@return nil
---------------------------------------------------------
function UIMahLayer:createActionComb(combMahValues)
    return nil
end

local combPanelMargin = 25
local combDisX = 20
local combDisY = 20
function UIMahLayer:createActionCombPanel(combs)
    self:cleanActionCombPanel()
    if #combs <= 0 then
        return
    end

    self._combMahsData = combs

    local totalCombsCount = #combs
    local singleLineMaxCount = self:getMaxActionCombsCount()
    local combSize = cc.size(0,0)
    for combIndex, combMahValues in ipairs(combs) do
        local comb = self:createActionComb(combMahValues)
        if comb then
            comb:setTag(combIndex)
            comb:setLocalZOrder(totalCombsCount - combIndex)
            comb:setContentSize(comb:getContentSize().width, comb:getRealHeight())
            if combSize.width == 0 or combSize.height == 0 then
                combSize.width = comb:getBoundingBox().width
                combSize.height = comb:getBoundingBox().height
            end
            self._actionCombsBack:addChild(comb)

            local lineIndex = math.ceil(combIndex / singleLineMaxCount)
            local combIndexInThisLine = combIndex % singleLineMaxCount
            if combIndexInThisLine == 0 then
                combIndexInThisLine = singleLineMaxCount
            end
            comb:setPositionX(combPanelMargin + (combIndexInThisLine - 1) * (combSize.width + combDisX))
            comb:setPositionY(combPanelMargin + (lineIndex - 1) * (combSize.height + combDisY))
        end
    end

    local totalLineCount = math.ceil(totalCombsCount / singleLineMaxCount)
    local panelSize = cc.size(0,0)
    if totalCombsCount > singleLineMaxCount then
        panelSize.width = combPanelMargin * 2 + combSize.width * singleLineMaxCount + combDisX * (singleLineMaxCount - 1)
    else
        panelSize.width = combPanelMargin * 2 + combSize.width * totalCombsCount + combDisX * (totalCombsCount - 1)
    end
    panelSize.height = combPanelMargin * 2 + combSize.height * totalLineCount + combDisY * (totalLineCount - 1)
    self._actionCombsBack:setContentSize(panelSize)
end

---------------------------------------------------------
--@brief 单行最大comb数量
--@return 4
---------------------------------------------------------
function UIMahLayer:getMaxActionCombsCount()
    return 4
end

---------------------------------------------------------
--@brief 清除所有的麻将子
--@return 4
---------------------------------------------------------
function UIMahLayer:cleanActionCombPanel()
    self._combMahsData = {}
    self._actionCombsBack:removeAllChildren()
end

---------------------------------------------------------
--@brief actionComb点击事件
--@return nil
---------------------------------------------------------
function UIMahLayer:onTouchEventActionComb(send, eventType)
    local index = send:getTag()
    if not self._combMahsData[index] then
        print("出错了！！！")
        return
    end
    self:getGameData():setPlayPower(false)
    local tmpCombs = self._combMahsData[index]
    local tmpFlag = 0
    local tmpInMahs = {}
    local tmpFromSeat = CF.roomData:getMaxPlayer()
    if tmpCombs == nil then
        return 
    end
    if #tmpCombs == 3 then
        tmpFlag = CF.GameDefine.COMB_TYPE.CHOW
        tmpInMahs = {self:getGameData():getLastPlayMah()}
        tmpFromSeat = self:getGameData():getLastPlaySeat()
    elseif #tmpCombs == 4 then
        if tmpCombs[1] == CF.GameDefine.MAH_VALUE.BACK then
            for i = 1,#tmpCombs do
                tmpCombs[i] = tmpCombs[4]
            end
            tmpInMahs = {}
            tmpFlag = CF.GameDefine.COMB_TYPE.CONCEALED_KONG
            tmpFromSeat = CF.roomData:getSelfSeat()
        else
            for i = 1, 3 do
                tmpInMahs[i] = tmpCombs[1]
            end
            tmpFlag = CF.GameDefine.COMB_TYPE.FILL_KONG
            local selfSeat = CF.roomData:getSelfSeat()
            local selfCombs = self:getGameData():getAllCombMahData(selfSeat)
            for i = 1,#selfCombs do
                if selfCombs[i].nInMahs[1] == tmpCombs[1] then
                    tmpFromSeat = selfCombs[i].nFromSeat
                end
            end
        end
    end

    local msgCombs = {}
    msgCombs.mahs = tmpCombs
    msgCombs.ins = tmpInMahs
    msgCombs.from = tmpFromSeat
    msgCombs.flag = tmpFlag
    CF.msgManager:sendAction(msgCombs, self:getGameData():getActionID())
    self:showActionCombs({}, false)
end

function UIMahLayer:onEventPreBaoHandMah(event)
end
function UIMahLayer:onWinSizeChange(event)
    if self._lastInfo and self._lastInfo["showAction"] then
        self:showAction(unpack(self._lastInfo["showAction"]))
    end
end

return UIMahLayerH�