local MahLogic = NG.GAME.gameRequire("Modules.GameMain.MahLayer.MahLogic")
local UIMah = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View2D.UIMah")
local IsTest = require("app.Config.GlobalConfig").IsTest
local UIMahLayer = NG.GAME.gameClass("UIMahLayer", NG.ViewBase)

function UIMahLayer:ctor(param, rootNode)
    param = param or {}
    UIMahLayer.super.ctor(self, param)

    self:initView()
    self:getGameData():setJokerData({ 97, 98, 99, 100, 101 })
    -- self:getGameData():setHandBaiBianData({{nValue = 0x11, nCnt=2},{nValue = 0x21, nCnt=0},{nValue = 102, nCnt=3}})
    -- self:getGameData():setHandBaiBianData({{nValue = 0x25, nCnt=2}})
    -- self:showServiceAni()
    -- IsTest = false
    if IsTest then
        --test
        -- self:showAction({1,2,3,4,5}, true) 
        NG.SysTool.performDelayOnce(function()
            self:getGameData():setHuMahsDataXueLiu({ huCards = {[0] = { 17 }, { 17 }, { 17 }, { 17 } } })
            for i = 1, 4 do
                self:getGameData():addHuMahDataXueLiu(i-1,{17},true)
                -- self:getGameData():setHuMahsData(i-1,{17,17,17,17,17,17,17,17,17,17},18)
                -- self:getGameData():setCombMahData(i-1, {nFlag=NG.GAME.GameDefine.COMB_FLAG.CKONG,nFromSeat=i-1,nCount=4,nMahs={17,17,17,17,17,17},nInCount=3,nInMahs={17,17,17}}, false, true)
                -- self:getGameData():setCombMahData(i-1, {nFlag=NG.GAME.GameDefine.COMB_FLAG.SINGLE,nFromSeat=i-1,nCount=4,nMahs={33},nInCount=1,nInMahs={33}}, false, true)
                -- self:getGameData():setCombMahData(i-1, {nFlag=NG.GAME.GameDefine.COMB_FLAG.SINGLE,nFromSeat=i-1,nCount=4,nMahs={33},nInCount=1,nInMahs={33}}, false, true)
                -- self:getGameData():setCombMahData(i-1, {nFlag=NG.GAME.GameDefine.COMB_FLAG.SINGLE,nFromSeat=i-1,nCount=4,nMahs={33},nInCount=1,nInMahs={33}}, false, true)
                -- self:getGameData():setCombMahData(i-1, {nFlag=NG.GAME.GameDefine.COMB_FLAG.SINGLE,nFromSeat=i-1,nCount=4,nMahs={33},nInCount=1,nInMahs={33}}, false, true)
                -- self:getGameData():setCombMahData(i-1, {nFlag=NG.GAME.GameDefine.COMB_FLAG.SINGLE,nFromSeat=i-1,nCount=4,nMahs={33},nInCount=1,nInMahs={33}}, false, true)
                -- self:getGameData():setCombMahData(i-1, {nFlag=NG.GAME.GameDefine.COMB_FLAG.SINGLE,nFromSeat=i-1,nCount=4,nMahs={33},nInCount=1,nInMahs={33}}, false, true)
                self:getGameData():setOutMahData(i - 1, { 97, 98, 99, 100, 101, 102, 103, 104 })
                -- self:getGameData():setFlowerMahData(i-1, {17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17}, true)
                -- self:setHandMahs(i,{17,98,99,100,101,102,35,53,17,81},18,true)
                if i - 1 == NG.GAME.roomTableData:getSelfSeat() then
                    self:getGameData():setHandMahData(i - 1, { 97, 98, 99, 100, 101, 102, 17, 17, 17, 33, 49, 65 }, 37, true)
                else
                    self:getGameData():setHandMahData(i - 1, { 114, 114, 114, 114 }, 114, true)
                end
            end
        end, 1)
        -- self:getGameData():setPlayPower(true)
        -- NG.SysTool.performDelayOnce(function()
        --     for i=1, 4 do
        --         self:getGameData():setCanHuMahsData(i-1, {
        --             [17]={{huMahID=18,huFan = 999, huCnt=4}},
        --             [18]={{huMahID=17,huFan = 16, huCnt=0}},})
        --         self:getGameData():setTingMahs(i-1, {17,18})
        --     end
        --     self:getGameData():setLastTingData({
        --         {huMahID=18,huFan = 999, huCnt=4},
        --         {huMahID=102,huFan = 999, huCnt=4},
        --         {huMahID=101,huFan = 999, huCnt=4},
        --         {huMahID=100,huFan = 999, huCnt=4},
        --         {huMahID=17,huFan = 16, huCnt=0}
        --     })
        --     self._canHuMah = self:createCanHuMahsUI(0)

        --     self:onUpdateClock({msg={seat=1,time=20}})
        -- end, 3)
        -- NG.SysTool.performDelayOnce(function()
        --     self:onShowChipsEvent({data={1,3}})
        -- end, 5)


    end
end

function UIMahLayer:getGameData()
    return NG.goldGame:getModule("GameMain.MahLayer"):getGameData()
end

function UIMahLayer:getProxyEvents()
    local gameData = self:getGameData()
    return {
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_SET_HANDMAH_COUNT", callBack = "onEventSetHandMahCount" }, --手牌数量
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_FLUSH_HANDMAH", callBack = "onEventFlushHandMah" }, --手牌刷新
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_FLUSH_DFMAH", callBack = "onEventFlushDfMah" }, --手牌刷新
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_FLUSH_HANDMAH_LIMIT", callBack = "onEventLimitHandMah" }, --手牌限制牌刷新
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_DELETE_HANDMAH", callBack = "onEventDeleteHandMah" }, --手牌删除
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_DELETE_HANDMAH_INDEX", callBack = "onEventDeleteHandMahIndex" }, --手牌删除
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_DESTROY_HANDMAH", callBack = "onEventDestroyHandMah" }, --手牌区清除
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_FLUSH_OUTMAH", callBack = "onEventFlushOutMah" }, --刷新出牌
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_ADD_OUTMAH", callBack = "onEventAddOutMah" }, --增加出牌麻将子
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_FLUSH_HANDMAH_BAO", callBack = "onEventPreBaoHandMah" }, --手牌打出可能包牌颜色刷新

        { module = gameData, eventKeyName = "EVENT_MAHLAYER_DESTROY_OUTMAH", callBack = "onEventDestroyOutMah" }, --出牌区清除
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_DELETE_LAST_OUTMAH", callBack = "onEventDeleteLastOutMah" }, --删除最后一张出牌
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_SET_COMB", callBack = "onEventSetComb" }, --comb设置
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_REFRESH_COMB", callBack = "onEventRefreshComb" }, --comb刷新
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_CLEAR_COMB", callBack = "onEventClearComb" }, --comb清除
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_SET_FLOWER", callBack = "onEventSetFlower" }, --花牌设置
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_ADD_FLOWER", callBack = "onEventAddFlower" }, --花牌设置
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_CLEAR_FLOWER", callBack = "onEventClearFlower" }, --花牌清除
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_SET_HU_XUELIU", callBack = "onEventSetHu" }, --胡牌设置
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_ADD_HU_XUELIU", callBack = "onEventAddHu" }, --胡牌设置
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_CLEAR_HU_XUELIU", callBack = "onEventClearHu" }, --胡牌清除
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_OPEN_MAH", callBack = "onEventSetOpenMah" }, --设置开牌
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_CLEAR_OPEN_MAH", callBack = "onEventClearOpenMah" }, --清理开牌
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_SURPLUS_MAH", callBack = "onEventSurplusMah" }, --设置剩余的牌数
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_SET_HU_MAHS", callBack = "onEventSetHuMahs" }, --设置胡牌时所有人的倒牌
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_CLEAR_HU_MAHS", callBack = "onEventClearHuMah" }, --清除胡牌时所有人的倒牌
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_SET_TING_MAHS", callBack = "onEventSetTingMahs" }, --设置听牌标记
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_CLEAR_TING_MAHS", callBack = "onEventClearTingMahs" }, --清除听牌标记
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_JOKER_MAH", callBack = "onEventJokerDataChange" },
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_ACTION_MAH", callBack = "onEventLightActionMahs" },
        { module = gameData, eventKeyName = "EVENT_BIAN_PAI_SYN", callBack = "onEventBianPaiSyh" },
        { module = gameData, eventKeyName = "EVENT_MAHLAYER_ADD_HANDMAH", callBack = "onEventAddHandMahs" },
        { module = gameData, eventKeyName = "EVENT_BAI_BIAN_DATA", callBack = "onEventUpdateBaiBian" },

        { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_MAHLAYER_FLUSH_HANDMAH", callBack = "onEventFlushHandMah" }, --刷新手牌
        { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_MAHLAYER_SHOW_OUTMAH_ACTION", callBack = "onEventShowOutMahAction" }, ---出牌动画
        { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_MAHLAYER_SHOW_ACTION", callBack = "onEventShowAction" },
        { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_MAHLAYER_SHOW_ACTION_COMBS", callBack = "onEventShowActionCombs" },
        { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_MAHLAYER_SET_LAOZHUANG", callBack = "onEventSetLaoZhuang" }, --设置显示牢庄几
        { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_MAHLAYER_CLEAR_LAOZHUANG", callBack = "onEventClearLaoZhuang" }, --清除显示牢庄几
        { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_MAHLAYER_SET_QUANFENG", callBack = "onEventSetQuanfeng" }, --设置圈风
        { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_MAHLAYER_CLEAR_QUANFENG", callBack = "onEventClearQuanfeng" }, --清除圈风
        { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_MAHLAYER_SHOW_OTHERS_ACTION", callBack = "onEventShowOthersAction" }, --回放展示他人行牌权限
        { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_MAHLAYER_SHOW_OPERATE_PASS", callBack = "onEventShowOperatePass" }, --回放展示过操作
        { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_MAHLAYER_CLEAR_ALL", callBack = "onEventClearAll" },
        { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_GAME_START_CHANGE", callBack = "onGameStart" },
        { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_OPEN_WALL_MAH", callBack = "onOpenWallMah" },
        { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_MAHLAYER_SHOW_OUTMAH_AREA", callBack = "onEventShowDeadMahArea" },
        { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_HUAN_PAI_START", callBack = "onHuanPaiStart" },
        { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_HUAN_PAI_SELF_END", callBack = "onHuanPaiSelfEnd" },
        { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_HUAN_PAI_END", callBack = "onHuanPaiEnd" },
        { module = NG.GAME.roomTableData, eventKeyName = "EVENT_BASESCORE_CHANGED", callBack = "showServiceAni" },

        { module = gameData, eventKeyName = "EVENT_BANKRUP", callBack = "onEventBankrupState" },
        { module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_TEST", callBack = "onTest" },
        { module = NG.goldLobby:getModule("GoldCommon"), eventKeyName = "KW_NOTIFY_JOIN_MATCH_SUCCESS", callBack = "onEventClearAll" },

    }
end

function UIMahLayer:createChildren()

end

-- TODO
function UIMahLayer:initView()
    self._handAreas = {}
    self._flowerAreas = {}
    self._huAreas = {}
    self._playerOutMahAreas = {}
    self._outMahArea = nil

    local outMahType = NG.GAME.settingData:getOutTableCardStyle()
    self:setOutMahType(outMahType)

    self:setMahMaxCounts(self:getGameData():getMaxHandMahData())

    self:createChildren()

    -- if NG.GAME.roomTableData:isPlayBack() and NG.GAME.configData:showOthersActionInPlayBack() then
    --     self:initOthersPlayBackBtn()
    -- end
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

    local mahData = NG.goldGame:getModule("GameMain.MahLayer"):getGameData()
    if not mahData then
        return
    end

    local seat = NG.GAME.roomTableData:localToSeat(localSeat)
    local handMahs = mahData:getHandMahData(seat)
    if not handMahs or #handMahs == 0 then
        return
    end
    local handAreaShowMahValues = handArea:getAllHandMahValues()
    if not MahLogic.isTableEqual(handMahs, handAreaShowMahValues) then
        self:_updateHandMahs(localSeat, false)
    end
end

function UIMahLayer:setLimitHandMah(localSeat, limitMahIDs)
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

function UIMahLayer:addOutMahs(localSeat, outMahs)
    local outMahArea = self:_getOutMahArea(localSeat)
    if not outMahArea then
        return
    end
    outMahArea:addOutMahs(outMahs)
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
    local area = self:_getHuArea(localSeat)
    if not area then
        return
    end
    area:setHus(huHandMahs, huMah, true)
end

function UIMahLayer:clearHuMahs(localSeat)
    local area = self:_getHuArea(localSeat)
    if not area then
        return
    end
    area:clearHus()
end

------------------------------------------------------------
-- 吃碰杠牌组
------------------------------------------------------------

function UIMahLayer:addCombMahs(mahIDs, combFlag, localSeat, fromLocalSeat, formCombMahID, bAni, bMoveHand, isBuGang)
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

    if combFlag == NG.GAME.GameDefine.COMB_FLAG.TKONG or isBuGang then
        if combFlag == NG.GAME.GameDefine.COMB_FLAG.CKONG then
            combData.showBackIndexs = self:_getCKongShowBackIndexs(clone(combData)) or {}
        end
        handArea:addTKongComb(combData)
    elseif combFlag == NG.GAME.GameDefine.COMB_FLAG.CKONG then
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
-- 胡牌区-血流
------------------------------------------------------------

function UIMahLayer:addHus(localSeat, mahValues, bAni, callBack)
    local area = self:_getHuArea(localSeat)
    if not area then
        return
    end
    area:addHus(mahValues, bAni)
    if localSeat == NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM then
        local handMahArea = self:_getHandArea(NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM)
        if not handMahArea then
            return
        end
        if #self:getGameData():getHuMahDataXueLiu(NG.GAME.roomTableData:getSelfSeat())>=4 then
            handMahArea:showFire()
        end
    end
end

function UIMahLayer:setHus(localSeat, mahValues, bAni, callBack)
    local area = self:_getHuArea(localSeat)
    if not area then
        return
    end
    area:setHus(mahValues)
    if localSeat == NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM then
        local handMahArea = self:_getHandArea(NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM)
        if not handMahArea then
            return
        end
        if #mahValues>=4 then
            handMahArea:showFire()
        end
    end
end

--清除花牌
function UIMahLayer:clearHus(localSeat)
    local flowerArea = self:_getHuArea(localSeat)
    if not flowerArea then
        return
    end
    flowerArea:clearHus()
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
    local mahData = NG.goldGame:getModule("GameMain.MahLayer"):getGameData()
    if not mahData then
        return
    end

    local localSeat = event.data.localSeat
    local seat = NG.GAME.roomTableData:localToSeat(localSeat)
    local dfMahs = mahData:getHandDfData(seat)
    self:setDfMahs(localSeat, dfMahs)
end

function UIMahLayer:onEventLimitHandMah(event)
    local mahData = NG.goldGame:getModule("GameMain.MahLayer"):getGameData()
    if not mahData then
        return
    end

    local localSeat = event.data.localSeat
    local seat = NG.GAME.roomTableData:localToSeat(localSeat)
    local limitMahValues = mahData:getLimitHandMahs(seat)
    self:setLimitHandMah(localSeat, limitMahValues)
end

function UIMahLayer:onEventFlushOutMah(event)
    local localSeat = event.data.localSeat
    if not localSeat then
        return
    end
    local seat = NG.GAME.roomTableData:localToSeat(localSeat)
    local outMahs = self:getGameData():getOutMahData(seat)

    self:setOutMahs(localSeat, outMahs)
end

function UIMahLayer:onEventAddOutMah(event)
    local localSeat = event.data.localSeat or 0
    local addMahs = event.data.addMahs or {}
    self:addOutMahs(localSeat, addMahs)
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
    local seat = NG.GAME.roomTableData:localToSeat(localSeat)
    local combIndex = event.data.combIndex
    local bAni = event.data.bAni
    local bMoveHand = event.data.bMoveHand
    local data = self:getGameData():getCombMahData(seat, combIndex)
    local combs = data.nMahs or {}
    local fromLocalSeat = NG.GAME.roomTableData:seatToLocal(data.nFromSeat) or -1
    local formCombMahID = data.nInMahs[1] or NG.GAME.GameDefine.MAH_VALUE.BACK
    local isBuGang = event.data.isBuGang

    self:addCombMahs(combs, data.nFlag, localSeat, fromLocalSeat, formCombMahID, bAni, bMoveHand, isBuGang)
end

function UIMahLayer:onEventRefreshComb(event)
    local localSeat = event.data.localSeat
    local seat = NG.GAME.roomTableData:localToSeat(localSeat)
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

--胡牌相关-血流
function UIMahLayer:onEventSetHu(event)
    local localSeat = event.data.localSeat
    local playAni = event.data.playAni
    local mahs = event.data.mahs
    self:setHus(localSeat, mahs, playAni, nil)
end

function UIMahLayer:onEventAddHu(event)
    local localSeat = event.data.localSeat
    local playAni = event.data.playAni
    local flowerMahs = event.data.mahs
    local callBack = event.data.callBack
    self:addHus(localSeat, flowerMahs, playAni, callBack)
end


function UIMahLayer:onEventClearHu(event)
    local localSeat = event.data.localSeat
    self:clearHus(localSeat)
end

--胡牌倒牌相关
function UIMahLayer:onEventSetHuMahs(event)
    local localSeat = event.data.localSeat
    local seat = NG.GAME.roomTableData:localToSeat(localSeat)
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

function UIMahLayer:onEventBankrupState(event)
    local localSeat = NG.GAME.roomTableData:seatToLocal(event.data.nSeat)
    local handArea = self:_getHandArea(localSeat)
    if not handArea then
        return
    end
    if event.data.nState == NG.GAME.GameDefine.BANKRUP_STATE.GIVEUP then
        handArea:bankrup()
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

        if self:getGameData():getAutoHu() then
            local bhu = false
            for key, val in pairs(actionTypes) do
                if val == NG.GAME.GameDefine.ACTION.HU then
                    bhu = true
                    break
                end
            end
            if bhu then
                NG.goldGame:getModule("GameMain.MahLayer"):doActionHu()
                return
            end
        end
        self:showAction(actionTypes, true)
    else
        self._actionTypes = {}
        self:showAction({}, false)
    end
end

function UIMahLayer:onEventShowActionCombs(event)
    local isShow = event.data.isShow
    if isShow then
        self._combData = event.data.combs
        local combs = {}
        for i = 1, #self._combData do
            combs[i] = self._combData[i].mahs
        end
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
    local localSeat = NG.GAME.roomTableData:seatToLocal(seat)

    local handArea = self:_getHandArea(localSeat)
    if not handArea then
        return
    end
    handArea:showTingInfo(tingMahs)
end

function UIMahLayer:onEventClearTingMahs(event)
    local seat = event.data.seat
    local localSeat = NG.GAME.roomTableData:seatToLocal(seat)

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
    for _, area in pairs(self._flowerAreas) do
        self:_setAreaJokerData(area)
    end
    for _, area in pairs(self._huAreas) do
        self:_setAreaJokerData(area)
    end
    if self._outMahArea then
        self:_setAreaJokerData(self._outMahArea)
    end
end

function UIMahLayer:onEventLightActionMahs(event)
end
function UIMahLayer:onEventBianPaiSyh(event)
    local handMahArea = self:_getHandArea(NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM)
    if not handMahArea then
        return
    end
    handMahArea:updateBaiBian(event.data)
    local tingMahs = self:getGameData():getTingMahs(NG.GAME.roomTableData:getSelfSeat())
    -- dump(tingMahs)
    handMahArea:showTingInfo(tingMahs)
end

function UIMahLayer:onTouchEventMahBackground(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local handMahArea = self:_getHandArea(NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM)
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

function UIMahLayer:onTouchEventActionButton(send, eventType)
    -- if NG.GAME.roomTableData:isPlayBack() then
    --     return
    -- end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    if send == self._actionButton1 then
        self._actionButton1:setEnabled(false)
        self:performWithDelay(function()
            self._actionButton1:setEnabled(true)
        end, 1)
        NG.goldGame:getModule("GameMain.MahLayer"):doActionCancel()
    elseif send == self._actionButton2 then
        NG.goldGame:getModule("GameMain.MahLayer"):doActionChow()
    elseif send == self._actionButton3 then
        NG.goldGame:getModule("GameMain.MahLayer"):doActionPong()
    elseif send == self._actionButton4 then
        NG.goldGame:getModule("GameMain.MahLayer"):doActionKong()
    elseif send == self._actionButton5 then
        NG.goldGame:getModule("GameMain.MahLayer"):doActionHu()
    elseif send == self._actionButton7 then
        NG.goldGame:getModule("GameMain.MahLayer"):doActionTing()
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
    local showOutMahNode = self._KW_ADAPT_MAH_5:getChildByName("KW_PANEL_SHOW_OUT_MAH_" .. localSeat)
    if not showOutMahNode then
        return
    end
    local image = ccui.ImageView:create("NewGoldRes/Image/MahXueLiu/Mahjong2D/mj_game_common_black_bg.png")
    if image then
        showOutMahNode:addChild(image)
        image:setAnchorPoint(0.5, 0)
        image:setScale9Enabled(true)
        local config = NG.goldGame:getModule("GameMain.MahLayer"):getMahAllConfig(nil, true)
        local mahNodeClone = UIMah.new(NG.GAME.GameDefine.MAH_TYPE.STAND_FACE_FORWARD, config)
        image:setContentSize(cc.size(mahNodeClone:getContentSize().width + 40, mahNodeClone:getContentSize().height + 40))
        image:addChild(mahNodeClone)
        mahNodeClone:setOpacity(255)
        mahNodeClone:setVisible(true)
        mahNodeClone:setPosition(mahNodeClone:getContentSize().width / 2 + 20, mahNodeClone:getContentSize().height / 2 + 20)
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
        self:showOthersAction(data.localSeat, actionTypes, true)
    else
        self._actionTypes = {}
        self:showOthersAction(data.localSeat, {}, false)
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
    local LEFT_OFFSET = { offset_x = 300, offset_y = 200, margen = 220 }
    local RIGHT_OFFSET = { offset_x = 650, offset_y = 200, margen = 220 }
    local TOP_OFFSET    = { offset_x = 500, offset_y = 100, margen = 0 }
    for seat = NG.GAME.GameDefine.LOCAL_SEAT.LEFT, NG.GAME.GameDefine.LOCAL_SEAT.TOP do
        if seat ~= NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM then
            local actionBtnPosOther = {}
            if not self._actionPanelOther[seat] then
                local tmpPanel = self._actionPanel:clone()
                self._actionPanelOther[seat] = tmpPanel
                self._actionPanel:getParent():addChild(self._actionPanelOther[seat])
                self._actionPanelOther[seat]:setVisible(false)
                if seat == NG.GAME.GameDefine.LOCAL_SEAT.LEFT then
                    self._actionPanelOther[seat]:setPosition(cc.p(180, 300))
                elseif seat == NG.GAME.GameDefine.LOCAL_SEAT.RIGHT then
                    self._actionPanelOther[seat]:setPosition(cc.p(1200, 300))
                elseif seat == NG.GAME.GameDefine.LOCAL_SEAT.TOP then
                    self._actionPanelOther[seat]:setPosition(cc.p(960, 440))
                end
            end
            for i = NG.GAME.GameDefine.ACTION.PASS, NG.GAME.GameDefine.ACTION.TING do
                local actionBtn = ccui.Helper:seekWidgetByName(self._actionPanelOther[seat], "_KW_ACTION_BTN_" .. i)
                if actionBtn then
                    actionBtnPosOther[i] = { x = actionBtn:getPositionX(), y = actionBtn:getPositionY() }
                end
            end
            self._actionBtnPosOtherTmp[seat] = {}
            local firstBtnPosX = 0
            if seat == NG.GAME.GameDefine.LOCAL_SEAT.LEFT then
                for i = NG.GAME.GameDefine.ACTION.PASS, NG.GAME.GameDefine.ACTION.TING do
                    if i == 1 then
                        firstBtnPosX = actionBtnPosOther[i].x
                    end
                    self._actionBtnPosOtherTmp[seat][i] = { x = firstBtnPosX + LEFT_OFFSET.offset_x, y = (actionBtnPosOther[i].y - LEFT_OFFSET.offset_y) + (i - 1) * LEFT_OFFSET.margen }
                end
            elseif seat == NG.GAME.GameDefine.LOCAL_SEAT.RIGHT then
                for i = NG.GAME.GameDefine.ACTION.PASS, NG.GAME.GameDefine.ACTION.TING do
                    if i == 1 then
                        firstBtnPosX = actionBtnPosOther[i].x
                    end
                    self._actionBtnPosOtherTmp[seat][i] = { x = firstBtnPosX + RIGHT_OFFSET.offset_x, y = (actionBtnPosOther[i].y - RIGHT_OFFSET.offset_y) + (i - 1) * RIGHT_OFFSET.margen }
                end
            elseif seat == NG.GAME.GameDefine.LOCAL_SEAT.TOP then
                for i = NG.GAME.GameDefine.ACTION.PASS, NG.GAME.GameDefine.ACTION.TING do
                    self._actionBtnPosOtherTmp[seat][i] = { x = actionBtnPosOther[i].x + TOP_OFFSET.offset_x, y = actionBtnPosOther[i].y + TOP_OFFSET.offset_y }
                end
            end
        end
    end
end

function UIMahLayer:_updateHandMahs(localSeat, bAni)
    local mahData = NG.goldGame:getModule("GameMain.MahLayer"):getGameData()
    if not mahData then
        return
    end

    local seat = NG.GAME.roomTableData:localToSeat(localSeat)
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
    return { 1, 2, 3 }
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
    return self._outMahType == NG.GAME.GameDefine.OUTMAHS_PUT_TYPE.FOUR_DIRECTION
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

function UIMahLayer:_onPlayMah(mahIndex, mahValue, isBaiBian, baiBianCnt)
    -- 回放不能出牌
    -- if NG.GAME.roomTableData:isPlayBack() then
    --     return
    -- end
    if self:getGameData():getPlayPower() then
        NG.goldGame:getModule("GameMain.MahLayer"):showPlayPreOut(mahIndex, mahValue)
        self:getGameData():setPlayPower(false)
        if isBaiBian then
            NG.msgManager:msgBianMahClear(mahValue,baiBianCnt)
        end
    end
end

function UIMahLayer:createCanHuMahsUI(mahValue)
    NG.goldGame:getModule("GameMain.MahLayer"):clearTingUI()
    local tingMahs = self:getGameData():getTingMahs(NG.GAME.roomTableData:getSelfSeat())
    for i = 1, #tingMahs do
        if tingMahs[i] == mahValue then
            local data = {}
            data.tingMahID = mahValue
            return NG.GAME.gameRequire("Modules.GameMain.MahLayer.CanHuMahsUI").new(data):showSelf()
        end
    end
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
    if not NG.GAME.settingData:getHaveTing() then
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
            self._canHuMah = self:createCanHuMahsUI(mahValue)
            NG.goldGame:getModule("GameMain.MahLayer"):clickMahSpecialEvent(mahValue)
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
        if localSeat == NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM then
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
            newFlowerMahArea:setGetCursorFunc(handler(self, self._getLastOutMahCursor))
            self:_setAreaJokerData(newFlowerMahArea)
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

function UIMahLayer:_createHuArea(localSeat)
    return nil
end

function UIMahLayer:_getHuAreaRootNode(localSeat)
    return nil
end

function UIMahLayer:_getHuArea(localSeat)
    if not MahLogic.checkLocalSeat(localSeat) then
        return nil
    end
    if not self._huAreas[localSeat] then
        local newHuMahArea = self:_createHuArea(localSeat)
        if newHuMahArea then
            newHuMahArea:setGetCursorFunc(handler(self, self._getLastOutMahCursor))
            self:_setAreaJokerData(newHuMahArea)
            local flowerAreaNode = self:_getHuAreaRootNode(localSeat)
            if flowerAreaNode then
                flowerAreaNode:addChild(newHuMahArea)
            end
            self._huAreas[localSeat] = newHuMahArea
            self:_updateBottomHuAreaPosition()
        end
    end
    return self._huAreas[localSeat]
end

function UIMahLayer:_updateBottomHuAreaPosition()

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
    if self._actionBtnPos == nil then
        self._actionBtnPos = {}
        for i = NG.GAME.GameDefine.ACTION.PASS, NG.GAME.GameDefine.ACTION.TING do
            self._actionBtnPos[i] = { x = self["_actionButton" .. i]:getPositionX(), y = self["_actionButton" .. i]:getPositionY() }
        end
    end
    actionTypes = actionTypes or {}
    if #actionTypes > 0 then
        --初始化
        for i = NG.GAME.GameDefine.ACTION.PASS, NG.GAME.GameDefine.ACTION.TING do
            self["_actionButton" .. i]:setVisible(false)
        end
        for i = 1, #actionTypes do
            if self["_actionButton" .. actionTypes[i]] then
                self["_actionButton" .. actionTypes[i]]:setPosition(cc.p(self._actionBtnPos[i].x, self._actionBtnPos[i].y))
                self["_actionButton" .. actionTypes[i]]:setVisible(true)
                if actionTypes[i] == NG.GAME.GameDefine.ACTION.HU then
                    local x = self["_actionButton" .. actionTypes[i]]:getContentSize().width
                    local y = self["_actionButton" .. actionTypes[i]]:getContentSize().height
                    local aniNode = NG.UITool.playJsonAnimation(self["_actionButton" .. actionTypes[i]], "hu_ani", "res/animation/Mahjong/Base/hu_ani/hu_ani.ExportJson", 1, cc.p(x / 2 - 2, y / 2))
                    if aniNode then
                        aniNode:setScale(1.6)
                    end
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
            if self["_hideActionPoint" .. self._actionHideTargetIndex] then
                local x = self["_hideActionPoint" .. self._actionHideTargetIndex]:getPositionX()
                local y = self["_hideActionPoint" .. self._actionHideTargetIndex]:getPositionY()
                self._actionMovePanel:setPosition(x, y)
                local outTime = 0.24 - (self:getActionButtonCount() - self._actionHideTargetIndex) * 0.04
                self._actionMovePanel:runAction(cc.EaseQuarticActionOut:create(
                cc.MoveTo:create(outTime, cc.p(self._showActionPoint:getPositionX(), self._showActionPoint:getPositionY()))))
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
        if self["_hideActionPoint" .. self._actionHideTargetIndex] then
            local time = 0.24 - (self:getActionButtonCount() - self._actionHideTargetIndex) * 0.04
            local x = self["_hideActionPoint" .. self._actionHideTargetIndex]:getPositionX()
            local y = self["_hideActionPoint" .. self._actionHideTargetIndex]:getPositionY()
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
    if localSeat == NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM or localSeat < NG.GAME.GameDefine.LOCAL_SEAT.LEFT or localSeat > NG.GAME.GameDefine.LOCAL_SEAT.TOP then
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
        for i = NG.GAME.GameDefine.ACTION.PASS, NG.GAME.GameDefine.ACTION.TING do
            local actionBtn = ccui.Helper:seekWidgetByName(self._actionPanelOther[localSeat], "_KW_ACTION_BTN_" .. i)
            if actionBtn then
                actionBtn:setVisible(false) --先全部隐藏
            end
        end
        for i = 1, #actionTypes do
            local actionBtn = ccui.Helper:seekWidgetByName(self._actionPanelOther[localSeat], "_KW_ACTION_BTN_" .. actionTypes[i])
            if actionBtn then
                actionBtn:setPosition(cc.p(self._actionBtnPosOtherTmp[localSeat][i].x, self._actionBtnPosOtherTmp[localSeat][i].y))
                actionBtn:setVisible(true)
                if actionTypes[i] == NG.GAME.GameDefine.ACTION.HU then
                    local x = actionBtn:getContentSize().width
                    local y = actionBtn:getContentSize().height
                    NG.UITool.playJsonAnimation(actionBtn, "hu_ani", "res/animation/Mahjong/Base/hu_ani/hu_ani.ExportJson", 1, cc.p(x / 2, y / 2 + 5))
                end
            end
        end
    end
    local actionOutTargetIndex = 0
    local backPanel = ccui.Helper:seekWidgetByName(self._actionPanelOther[localSeat], "_KW_ACTION_MOVE_PANEL")
    if backPanel then
        backPanel:stopAllActions()
        if isShow then --是否显示
            local nodeIn = ccui.Helper:seekWidgetByName(self._actionPanelOther[localSeat], "_KW_ACTION_IN_TARGET_POS")
            if nodeIn then
                if #actionTypes > 0 then
                    actionOutTargetIndex = #actionTypes
                end
                local nodeOut = ccui.Helper:seekWidgetByName(self._actionPanelOther[localSeat], "_KW_ACTION_OUT_TARGET_POS_" .. actionOutTargetIndex)
                if nodeOut then
                    backPanel:setPosition(nodeOut:getPositionX(), nodeOut:getPositionY())
                end
                --进来（显示）
                backPanel:setPosition(cc.p(nodeIn:getPositionX(), nodeIn:getPositionY()))
            end
        else
            local nodeOut = ccui.Helper:seekWidgetByName(self._actionPanelOther[localSeat], "_KW_ACTION_OUT_TARGET_POS_" .. actionOutTargetIndex)
            if nodeOut then
                --出去（消失）
                backPanel:setPosition(cc.p(nodeOut:getPositionX(), nodeOut:getPositionY()))
            end
        end
    end
end

function UIMahLayer:showBtnOperatePlayback(localSeat)
    local actionPanel = localSeat == NG.GAME.roomTableData:getSelfLocalSeat() and self._actionPanel or self._actionPanelOther[localSeat]
    if not actionPanel then return end
    local actionBtn = ccui.Helper:seekWidgetByName(actionPanel, "_KW_ACTION_BTN_1")
    if actionBtn then
        local orignScale = actionBtn:getScale()
        local actionScale1 = cc.EaseQuarticActionOut:create(cc.ScaleTo:create(0.2, orignScale * 0.6))
        local action = cc.Sequence:create(
        cc.CallFunc:create(function()
            if localSeat == NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM then
                self:showAction({}, false)
            else
                self:showOthersAction(localSeat, { NG.GAME.GameDefine.ACTION.PASS }, true)
            end

        end),
        cc.DelayTime:create(0.2),
        actionScale1,
        cc.CallFunc:create(function()
            actionBtn:setScale(orignScale)
            self:showOthersAction(localSeat, {}, false)
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
        if self["_actionButton" .. sum] == nil then
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
                if self._actionCombsHideTargetIndex > 3 then
                    self._actionCombsHideTargetIndex = 3
                end
                if self["_hideActionCombsPoint" .. self._actionCombsHideTargetIndex] then
                    local x = self["_hideActionCombsPoint" .. self._actionCombsHideTargetIndex]:getPositionX()
                    local y = self["_hideActionCombsPoint" .. self._actionCombsHideTargetIndex]:getPositionY()
                    self._actionCombsMovePanel:setPosition(x, y)
                end
                local time = 0.28 - (self:getMaxActionCombsCount() - self._actionCombsHideTargetIndex) * 0.04
                self._actionCombsMovePanel:runAction(cc.EaseQuarticActionOut:create(
                cc.MoveTo:create(time, cc.p(self._showActionCombsPoint:getPositionX(), self._showActionCombsPoint:getPositionY()))))
            end
        else
            self._actionCombsHideTargetIndex = self._actionCombsHideTargetIndex or 0
            local time = 0.28 - (self:getMaxActionCombsCount() - self._actionCombsHideTargetIndex) * 0.04
            if self["_hideActionCombsPoint" .. self._actionCombsHideTargetIndex] then
                local x = self["_hideActionCombsPoint" .. self._actionCombsHideTargetIndex]:getPositionX()
                local y = self["_hideActionCombsPoint" .. self._actionCombsHideTargetIndex]:getPositionY()
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
    local combSize = cc.size(0, 0)
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
    local panelSize = cc.size(0, 0)
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
    if not self._combData[index] then
        print("出错了！！！")
        return
    end
    self:getGameData():setPlayPower(false)
    local tmpCombs = self._combData[index]
    -- local tmpFlag = 0
    -- local tmpInMahs = self._combInMahs[index] or {}
    -- local otherInfo = self._otherInfo[index] or {}
    -- local tmpFromSeat = NG.GAME.roomTableData:getMaxPlayer()
    if tmpCombs == nil then
        return
    end
    -- if #tmpCombs == 3 then
    --     tmpFlag = otherInfo.flag or (tmpCombs[1]==tmpCombs[2] and NG.GAME.GameDefine.COMB_TYPE.PONG or NG.GAME.GameDefine.COMB_TYPE.CHOW)
    --     tmpInMahs = {self:getGameData():getLastPlayMah()}
    --     tmpFromSeat = self:getGameData():getLastPlaySeat()
    -- elseif #tmpCombs >= 4 then
    --     if tmpCombs[1] == NG.GAME.GameDefine.MAH_VALUE.BACK then
    --         for i = 1,#tmpCombs do
    --             tmpCombs[i] = tmpCombs[#tmpCombs]
    --         end
    --         tmpInMahs = {}
    --         tmpFlag = NG.GAME.GameDefine.COMB_TYPE.CONCEALED_KONG
    --         tmpFromSeat = NG.GAME.roomTableData:getSelfSeat()
    --     else
    --         tmpFlag = otherInfo.flag or NG.GAME.GameDefine.COMB_TYPE.FILL_KONG
    --         tmpFromSeat = otherInfo.fromSeat
    --     end
    -- end

    local msgCombs = tmpCombs--{}
    -- msgCombs.mahs = tmpCombs
    -- msgCombs.ins = tmpInMahs
    -- msgCombs.from = otherInfo.fromSeat
    -- msgCombs.flag = otherInfo.flag
    if msgCombs.mahs[1] == NG.GAME.GameDefine.MAH_VALUE.BACK then
        for i = 1, #msgCombs.mahs do
            msgCombs.mahs[i] = msgCombs.mahs[#msgCombs.mahs]
        end
    end
    NG.msgManager:sendAction(msgCombs, self:getGameData():getActionID())
    self:showActionCombs({}, false)
end

function UIMahLayer:onEventPreBaoHandMah(event)
end

function UIMahLayer:showServiceAni()
end

function UIMahLayer:onHuanPaiStart()
    self:_getHandArea(NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM):setFreeSelect(true)
end

function UIMahLayer:onHuanPaiSelfEnd()
    self:_getHandArea(NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM):setFreeSelect(false)
end

function UIMahLayer:onHuanPaiEnd()
    self:_getHandArea(NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM):setFreeSelect(false)
end

function UIMahLayer:onEventAddHandMahs(event)
    local data = event.data
    local seat = NG.GAME.roomTableData:seatToLocal(data.seat)
    local mahInfo = {}
    for i = 1, #data.mahs do
        mahInfo[i] = { mahValue = data.mahs[i], bStand = true }
    end
    self:_getHandArea(seat):addMahs(mahInfo, data.df)
end

function UIMahLayer:onEventUpdateBaiBian(event)
    self:_getHandArea(NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM):updateAllMahsBaiBianIcon()
end

function UIMahLayer:onNewMatchStart()

end

function UIMahLayer:onTest()
    for i = 1, 4 do
        self:_getHandArea(i):addMahs({ { mahValue = 17, bStand = true }, { mahValue = 33, bStand = true } })
    end
end
return UIMahLayer